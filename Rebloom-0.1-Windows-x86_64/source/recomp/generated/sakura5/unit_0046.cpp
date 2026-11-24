#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0046[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0,
    0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0,
    0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81,
    0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0,
    0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0,
    91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0,
    0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 166,
    0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 187,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0,
    0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    197, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 206, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211,
    0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0,
    0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    235, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0,
    0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0,
    0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 291,
    0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308,
    0, 309, 0, 0, 310, 0, 311, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0,
    317, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0,
    322, 0, 0, 0, 323, 0, 324, 0, 0, 0, 325, 0, 326, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0,
    0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345,
    0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0,
    0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0,
    0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373,
    0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0,
    0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0,
    0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395,
    0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 404, 405, 0, 406, 0, 0, 0, 0, 0, 407, 0,
    0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 414,
    0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0,
    0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0,
    0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0,
    0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0,
    0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0,
    0, 440, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 451,
    0, 452, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 456, 0, 457, 0, 0, 0, 458, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0,
    0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0,
    467, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0,
    0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0,
    0, 489, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0,
    0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 501, 0, 0, 502, 0, 503, 0, 0, 0, 504, 0, 0,
    0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0,
    509, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0,
    516, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 521, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0,
    0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0,
    0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 532, 0, 0, 533, 0, 534, 0, 0, 535, 0, 536, 0, 0, 537, 0, 538, 0, 0, 539, 0, 540, 0, 0, 541, 0, 542, 0, 0, 543, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0,
    0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0046(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00238000;
    case 2u: goto L_00238010;
    case 3u: goto L_00238020;
    case 4u: goto L_00238054;
    case 5u: goto L_00238064;
    case 6u: goto L_00238098;
    case 7u: goto L_002380A8;
    case 8u: goto L_002380DC;
    case 9u: goto L_002380F8;
    case 10u: goto L_00238128;
    case 11u: goto L_00238134;
    case 12u: goto L_00238164;
    case 13u: goto L_00238188;
    case 14u: goto L_002381B8;
    case 15u: goto L_002381E8;
    case 16u: goto L_002381F4;
    case 17u: goto L_00238224;
    case 18u: goto L_00238230;
    case 19u: goto L_00238238;
    case 20u: goto L_00238244;
    case 21u: goto L_00238274;
    case 22u: goto L_00238298;
    case 23u: goto L_002382C8;
    case 24u: goto L_00238300;
    case 25u: goto L_0023833C;
    case 26u: goto L_00238348;
    case 27u: goto L_00238360;
    case 28u: goto L_00238374;
    case 29u: goto L_002383B0;
    case 30u: goto L_002383C4;
    case 31u: goto L_002383E0;
    case 32u: goto L_002383F4;
    case 33u: goto L_00238410;
    case 34u: goto L_00238424;
    case 35u: goto L_00238440;
    case 36u: goto L_00238454;
    case 37u: goto L_00238470;
    case 38u: goto L_00238484;
    case 39u: goto L_002384A0;
    case 40u: goto L_002384B4;
    case 41u: goto L_002384D0;
    case 42u: goto L_002384E4;
    case 43u: goto L_00238500;
    case 44u: goto L_00238514;
    case 45u: goto L_00238530;
    case 46u: goto L_00238544;
    case 47u: goto L_00238560;
    case 48u: goto L_00238574;
    case 49u: goto L_00238588;
    case 50u: goto L_002385A4;
    case 51u: goto L_002385B8;
    case 52u: goto L_002385D4;
    case 53u: goto L_002385E8;
    case 54u: goto L_00238604;
    case 55u: goto L_00238618;
    case 56u: goto L_00238634;
    case 57u: goto L_00238648;
    case 58u: goto L_00238664;
    case 59u: goto L_00238678;
    case 60u: goto L_00238694;
    case 61u: goto L_002386A8;
    case 62u: goto L_002386C4;
    case 63u: goto L_002386D8;
    case 64u: goto L_002386F4;
    case 65u: goto L_00238708;
    case 66u: goto L_00238730;
    case 67u: goto L_00238744;
    case 68u: goto L_00238760;
    case 69u: goto L_00238784;
    case 70u: goto L_002387A0;
    case 71u: goto L_002387D0;
    case 72u: goto L_002387EC;
    case 73u: goto L_00238808;
    case 74u: goto L_0023882C;
    case 75u: goto L_00238848;
    case 76u: goto L_00238878;
    case 77u: goto L_00238894;
    case 78u: goto L_002388B0;
    case 79u: goto L_002388C4;
    case 80u: goto L_002388E8;
    case 81u: goto L_002388FC;
    case 82u: goto L_00238904;
    case 83u: goto L_00238920;
    case 84u: goto L_00238954;
    case 85u: goto L_00238964;
    case 86u: goto L_00238984;
    case 87u: goto L_0023899C;
    case 88u: goto L_002389C8;
    case 89u: goto L_002389E0;
    case 90u: goto L_002389F0;
    case 91u: goto L_00238A00;
    case 92u: goto L_00238A0C;
    case 93u: goto L_00238A18;
    case 94u: goto L_00238A30;
    case 95u: goto L_00238A3C;
    case 96u: goto L_00238A54;
    case 97u: goto L_00238A78;
    case 98u: goto L_00238A90;
    case 99u: goto L_00238AB4;
    case 100u: goto L_00238AC8;
    case 101u: goto L_00238AE0;
    case 102u: goto L_00238AF8;
    case 103u: goto L_00238B10;
    case 104u: goto L_00238B2C;
    case 105u: goto L_00238B48;
    case 106u: goto L_00238B6C;
    case 107u: goto L_00238B88;
    case 108u: goto L_00238BC0;
    case 109u: goto L_00238BD0;
    case 110u: goto L_00238BE8;
    case 111u: goto L_00238C0C;
    case 112u: goto L_00238C18;
    case 113u: goto L_00238C30;
    case 114u: goto L_00238C44;
    case 115u: goto L_00238C70;
    case 116u: goto L_00238C84;
    case 117u: goto L_00238C8C;
    case 118u: goto L_00238CA4;
    case 119u: goto L_00238CBC;
    case 120u: goto L_00238CF0;
    case 121u: goto L_00238D30;
    case 122u: goto L_00238D44;
    case 123u: goto L_00238D54;
    case 124u: goto L_00238D68;
    case 125u: goto L_00238D88;
    case 126u: goto L_00238D94;
    case 127u: goto L_00238DB8;
    case 128u: goto L_00238DC4;
    case 129u: goto L_00238DD8;
    case 130u: goto L_00238DEC;
    case 131u: goto L_00238E00;
    case 132u: goto L_00238E24;
    case 133u: goto L_00238E34;
    case 134u: goto L_00238E70;
    case 135u: goto L_00238EBC;
    case 136u: goto L_00238ED0;
    case 137u: goto L_00238F04;
    case 138u: goto L_00238F18;
    case 139u: goto L_00238F30;
    case 140u: goto L_00238F54;
    case 141u: goto L_00238F64;
    case 142u: goto L_00238F78;
    case 143u: goto L_00238F8C;
    case 144u: goto L_00238FB0;
    case 145u: goto L_00238FD8;
    case 146u: goto L_00239014;
    case 147u: goto L_0023902C;
    case 148u: goto L_00239044;
    case 149u: goto L_00239080;
    case 150u: goto L_0023909C;
    case 151u: goto L_002390B0;
    case 152u: goto L_002390C0;
    case 153u: goto L_00239158;
    case 154u: goto L_0023917C;
    case 155u: goto L_00239188;
    case 156u: goto L_0023919C;
    case 157u: goto L_002391C0;
    case 158u: goto L_002391E8;
    case 159u: goto L_002391F8;
    case 160u: goto L_00239208;
    case 161u: goto L_00239220;
    case 162u: goto L_0023924C;
    case 163u: goto L_00239258;
    case 164u: goto L_00239268;
    case 165u: goto L_00239274;
    case 166u: goto L_0023927C;
    case 167u: goto L_00239288;
    case 168u: goto L_00239294;
    case 169u: goto L_00239308;
    case 170u: goto L_00239310;
    case 171u: goto L_00239328;
    case 172u: goto L_00239340;
    case 173u: goto L_00239350;
    case 174u: goto L_00239384;
    case 175u: goto L_00239394;
    case 176u: goto L_002393C0;
    case 177u: goto L_002393CC;
    case 178u: goto L_002393D8;
    case 179u: goto L_002393E4;
    case 180u: goto L_00239400;
    case 181u: goto L_00239414;
    case 182u: goto L_00239420;
    case 183u: goto L_0023942C;
    case 184u: goto L_00239448;
    case 185u: goto L_00239468;
    case 186u: goto L_00239470;
    case 187u: goto L_0023947C;
    case 188u: goto L_00239494;
    case 189u: goto L_002394CC;
    case 190u: goto L_002394E0;
    case 191u: goto L_002394EC;
    case 192u: goto L_002394F8;
    case 193u: goto L_00239514;
    case 194u: goto L_00239530;
    case 195u: goto L_00239548;
    case 196u: goto L_00239570;
    case 197u: goto L_00239580;
    case 198u: goto L_00239588;
    case 199u: goto L_00239594;
    case 200u: goto L_002395AC;
    case 201u: goto L_002395C4;
    case 202u: goto L_002395DC;
    case 203u: goto L_002395EC;
    case 204u: goto L_00239610;
    case 205u: goto L_00239620;
    case 206u: goto L_0023962C;
    case 207u: goto L_00239634;
    case 208u: goto L_00239640;
    case 209u: goto L_0023964C;
    case 210u: goto L_00239670;
    case 211u: goto L_0023967C;
    case 212u: goto L_00239694;
    case 213u: goto L_002396A4;
    case 214u: goto L_002396E0;
    case 215u: goto L_00239700;
    case 216u: goto L_0023970C;
    case 217u: goto L_00239718;
    case 218u: goto L_00239724;
    case 219u: goto L_00239740;
    case 220u: goto L_00239748;
    case 221u: goto L_00239788;
    case 222u: goto L_0023979C;
    case 223u: goto L_002397AC;
    case 224u: goto L_002397B8;
    case 225u: goto L_002397CC;
    case 226u: goto L_002397E0;
    case 227u: goto L_002397F8;
    case 228u: goto L_00239818;
    case 229u: goto L_0023982C;
    case 230u: goto L_0023984C;
    case 231u: goto L_0023989C;
    case 232u: goto L_002398C0;
    case 233u: goto L_002398D0;
    case 234u: goto L_002398F0;
    case 235u: goto L_00239900;
    case 236u: goto L_00239908;
    case 237u: goto L_00239920;
    case 238u: goto L_00239958;
    case 239u: goto L_00239980;
    case 240u: goto L_002399A4;
    case 241u: goto L_002399C8;
    case 242u: goto L_002399D0;
    case 243u: goto L_002399E0;
    case 244u: goto L_00239A08;
    case 245u: goto L_00239A24;
    case 246u: goto L_00239A34;
    case 247u: goto L_00239A68;
    case 248u: goto L_00239A98;
    case 249u: goto L_00239AA8;
    case 250u: goto L_00239AB8;
    case 251u: goto L_00239ACC;
    case 252u: goto L_00239AF0;
    case 253u: goto L_00239B14;
    case 254u: goto L_00239B38;
    case 255u: goto L_00239B58;
    case 256u: goto L_00239B64;
    case 257u: goto L_00239BA4;
    case 258u: goto L_00239BB8;
    case 259u: goto L_00239BD4;
    case 260u: goto L_00239BE4;
    case 261u: goto L_00239BF8;
    case 262u: goto L_00239C24;
    case 263u: goto L_00239C60;
    case 264u: goto L_00239C98;
    case 265u: goto L_00239CB8;
    case 266u: goto L_00239CD8;
    case 267u: goto L_00239CF8;
    case 268u: goto L_00239D18;
    case 269u: goto L_00239D28;
    case 270u: goto L_00239D30;
    case 271u: goto L_00239D50;
    case 272u: goto L_00239D70;
    case 273u: goto L_00239D78;
    case 274u: goto L_00239DA0;
    case 275u: goto L_00239DB8;
    case 276u: goto L_00239DF0;
    case 277u: goto L_00239E18;
    case 278u: goto L_00239E20;
    case 279u: goto L_00239E4C;
    case 280u: goto L_00239E70;
    case 281u: goto L_00239E84;
    case 282u: goto L_00239E8C;
    case 283u: goto L_00239EB8;
    case 284u: goto L_00239ECC;
    case 285u: goto L_00239EF8;
    case 286u: goto L_00239F0C;
    case 287u: goto L_00239F14;
    case 288u: goto L_00239F40;
    case 289u: goto L_00239F58;
    case 290u: goto L_00239F68;
    case 291u: goto L_00239F7C;
    case 292u: goto L_00239F90;
    case 293u: goto L_00239FAC;
    case 294u: goto L_00239FB4;
    case 295u: goto L_00239FD4;
    case 296u: goto L_00239FF8;
    case 297u: goto L_0023A010;
    case 298u: goto L_0023A0A8;
    case 299u: goto L_0023A0C4;
    case 300u: goto L_0023A0F0;
    case 301u: goto L_0023A188;
    case 302u: goto L_0023A1A4;
    case 303u: goto L_0023A1D0;
    case 304u: goto L_0023A21C;
    case 305u: goto L_0023A230;
    case 306u: goto L_0023A238;
    case 307u: goto L_0023A24C;
    case 308u: goto L_0023A27C;
    case 309u: goto L_0023A284;
    case 310u: goto L_0023A290;
    case 311u: goto L_0023A298;
    case 312u: goto L_0023A2A4;
    case 313u: goto L_0023A2B4;
    case 314u: goto L_0023A2CC;
    case 315u: goto L_0023A2E8;
    case 316u: goto L_0023A2F8;
    case 317u: goto L_0023A300;
    case 318u: goto L_0023A314;
    case 319u: goto L_0023A320;
    case 320u: goto L_0023A344;
    case 321u: goto L_0023A378;
    case 322u: goto L_0023A380;
    case 323u: goto L_0023A390;
    case 324u: goto L_0023A398;
    case 325u: goto L_0023A3A8;
    case 326u: goto L_0023A3B0;
    case 327u: goto L_0023A3C0;
    case 328u: goto L_0023A3C8;
    case 329u: goto L_0023A3E8;
    case 330u: goto L_0023A3FC;
    case 331u: goto L_0023A420;
    case 332u: goto L_0023A42C;
    case 333u: goto L_0023A444;
    case 334u: goto L_0023A46C;
    case 335u: goto L_0023A4A0;
    case 336u: goto L_0023A4CC;
    case 337u: goto L_0023A4D8;
    case 338u: goto L_0023A4FC;
    case 339u: goto L_0023A54C;
    case 340u: goto L_0023A568;
    case 341u: goto L_0023A584;
    case 342u: goto L_0023A598;
    case 343u: goto L_0023A5AC;
    case 344u: goto L_0023A5B8;
    case 345u: goto L_0023A5FC;
    case 346u: goto L_0023A614;
    case 347u: goto L_0023A630;
    case 348u: goto L_0023A64C;
    case 349u: goto L_0023A660;
    case 350u: goto L_0023A6AC;
    case 351u: goto L_0023A6C8;
    case 352u: goto L_0023A6E8;
    case 353u: goto L_0023A6F8;
    case 354u: goto L_0023A704;
    case 355u: goto L_0023A740;
    case 356u: goto L_0023A758;
    case 357u: goto L_0023A768;
    case 358u: goto L_0023A7A0;
    case 359u: goto L_0023A7B0;
    case 360u: goto L_0023A7C0;
    case 361u: goto L_0023A7D0;
    case 362u: goto L_0023A840;
    case 363u: goto L_0023A86C;
    case 364u: goto L_0023A884;
    case 365u: goto L_0023A89C;
    case 366u: goto L_0023A8B0;
    case 367u: goto L_0023A8CC;
    case 368u: goto L_0023A960;
    case 369u: goto L_0023A988;
    case 370u: goto L_0023A99C;
    case 371u: goto L_0023A9BC;
    case 372u: goto L_0023A9E4;
    case 373u: goto L_0023A9FC;
    case 374u: goto L_0023AA08;
    case 375u: goto L_0023AA1C;
    case 376u: goto L_0023AA44;
    case 377u: goto L_0023AA70;
    case 378u: goto L_0023AA88;
    case 379u: goto L_0023AAA8;
    case 380u: goto L_0023AAB8;
    case 381u: goto L_0023AAC0;
    case 382u: goto L_0023AAD8;
    case 383u: goto L_0023AAF0;
    case 384u: goto L_0023AB10;
    case 385u: goto L_0023AB98;
    case 386u: goto L_0023ABB4;
    case 387u: goto L_0023ABC4;
    case 388u: goto L_0023ABE0;
    case 389u: goto L_0023ABF0;
    case 390u: goto L_0023AC0C;
    case 391u: goto L_0023AC18;
    case 392u: goto L_0023AC28;
    case 393u: goto L_0023AC50;
    case 394u: goto L_0023AC6C;
    case 395u: goto L_0023AC7C;
    case 396u: goto L_0023AC98;
    case 397u: goto L_0023ACA8;
    case 398u: goto L_0023ACD0;
    case 399u: goto L_0023ACE0;
    case 400u: goto L_0023AD0C;
    case 401u: goto L_0023AD20;
    case 402u: goto L_0023AD38;
    case 403u: goto L_0023AD48;
    case 404u: goto L_0023AD54;
    case 405u: goto L_0023AD58;
    case 406u: goto L_0023AD60;
    case 407u: goto L_0023AD78;
    case 408u: goto L_0023AD88;
    case 409u: goto L_0023ADA4;
    case 410u: goto L_0023ADB0;
    case 411u: goto L_0023ADC8;
    case 412u: goto L_0023ADDC;
    case 413u: goto L_0023ADE4;
    case 414u: goto L_0023ADFC;
    case 415u: goto L_0023AE18;
    case 416u: goto L_0023AE28;
    case 417u: goto L_0023AE38;
    case 418u: goto L_0023AE6C;
    case 419u: goto L_0023AE78;
    case 420u: goto L_0023AE88;
    case 421u: goto L_0023AE9C;
    case 422u: goto L_0023AEE8;
    case 423u: goto L_0023AEF4;
    case 424u: goto L_0023AF18;
    case 425u: goto L_0023AF38;
    case 426u: goto L_0023AF4C;
    case 427u: goto L_0023AF5C;
    case 428u: goto L_0023AFA0;
    case 429u: goto L_0023AFC4;
    case 430u: goto L_0023AFD8;
    case 431u: goto L_0023AFF4;
    case 432u: goto L_0023B010;
    case 433u: goto L_0023B030;
    case 434u: goto L_0023B03C;
    case 435u: goto L_0023B070;
    case 436u: goto L_0023B08C;
    case 437u: goto L_0023B0A4;
    case 438u: goto L_0023B0D0;
    case 439u: goto L_0023B0F0;
    case 440u: goto L_0023B104;
    case 441u: goto L_0023B110;
    case 442u: goto L_0023B124;
    case 443u: goto L_0023B130;
    case 444u: goto L_0023B138;
    case 445u: goto L_0023B150;
    case 446u: goto L_0023B188;
    case 447u: goto L_0023B1A8;
    case 448u: goto L_0023B1C4;
    case 449u: goto L_0023B1E0;
    case 450u: goto L_0023B1F4;
    case 451u: goto L_0023B1FC;
    case 452u: goto L_0023B204;
    case 453u: goto L_0023B20C;
    case 454u: goto L_0023B248;
    case 455u: goto L_0023B250;
    case 456u: goto L_0023B258;
    case 457u: goto L_0023B260;
    case 458u: goto L_0023B270;
    case 459u: goto L_0023B2A0;
    case 460u: goto L_0023B314;
    case 461u: goto L_0023B340;
    case 462u: goto L_0023B360;
    case 463u: goto L_0023B370;
    case 464u: goto L_0023B38C;
    case 465u: goto L_0023B440;
    case 466u: goto L_0023B474;
    case 467u: goto L_0023B480;
    case 468u: goto L_0023B4A4;
    case 469u: goto L_0023B4CC;
    case 470u: goto L_0023B4F4;
    case 471u: goto L_0023B504;
    case 472u: goto L_0023B51C;
    case 473u: goto L_0023B540;
    case 474u: goto L_0023B5A4;
    case 475u: goto L_0023B5B8;
    case 476u: goto L_0023B5C4;
    case 477u: goto L_0023B5D4;
    case 478u: goto L_0023B5E8;
    case 479u: goto L_0023B5F8;
    case 480u: goto L_0023B624;
    case 481u: goto L_0023B638;
    case 482u: goto L_0023B650;
    case 483u: goto L_0023B65C;
    case 484u: goto L_0023B674;
    case 485u: goto L_0023B6B0;
    case 486u: goto L_0023B6DC;
    case 487u: goto L_0023B6F4;
    case 488u: goto L_0023B760;
    case 489u: goto L_0023B784;
    case 490u: goto L_0023B794;
    case 491u: goto L_0023B79C;
    case 492u: goto L_0023B7F0;
    case 493u: goto L_0023B818;
    case 494u: goto L_0023B844;
    case 495u: goto L_0023B898;
    case 496u: goto L_0023B8C0;
    case 497u: goto L_0023B8F4;
    case 498u: goto L_0023B914;
    case 499u: goto L_0023B934;
    case 500u: goto L_0023B944;
    case 501u: goto L_0023B950;
    case 502u: goto L_0023B95C;
    case 503u: goto L_0023B964;
    case 504u: goto L_0023B974;
    case 505u: goto L_0023B988;
    case 506u: goto L_0023B9B0;
    case 507u: goto L_0023B9D8;
    case 508u: goto L_0023B9F0;
    case 509u: goto L_0023BA00;
    case 510u: goto L_0023BA10;
    case 511u: goto L_0023BA20;
    case 512u: goto L_0023BA40;
    case 513u: goto L_0023BA4C;
    case 514u: goto L_0023BA60;
    case 515u: goto L_0023BA70;
    case 516u: goto L_0023BA80;
    case 517u: goto L_0023BAA0;
    case 518u: goto L_0023BAAC;
    case 519u: goto L_0023BAD0;
    case 520u: goto L_0023BAE0;
    case 521u: goto L_0023BB0C;
    case 522u: goto L_0023BB18;
    case 523u: goto L_0023BB48;
    case 524u: goto L_0023BB78;
    case 525u: goto L_0023BB9C;
    case 526u: goto L_0023BBBC;
    case 527u: goto L_0023BBC8;
    case 528u: goto L_0023BBEC;
    case 529u: goto L_0023BC10;
    case 530u: goto L_0023BC30;
    case 531u: goto L_0023BC5C;
    case 532u: goto L_0023BC88;
    case 533u: goto L_0023BC94;
    case 534u: goto L_0023BC9C;
    case 535u: goto L_0023BCA8;
    case 536u: goto L_0023BCB0;
    case 537u: goto L_0023BCBC;
    case 538u: goto L_0023BCC4;
    case 539u: goto L_0023BCD0;
    case 540u: goto L_0023BCD8;
    case 541u: goto L_0023BCE4;
    case 542u: goto L_0023BCEC;
    case 543u: goto L_0023BCF8;
    case 544u: goto L_0023BD74;
    case 545u: goto L_0023BD90;
    case 546u: goto L_0023BDDC;
    case 547u: goto L_0023BDF4;
    case 548u: goto L_0023BE1C;
    case 549u: goto L_0023BE80;
    default: bad_entry(c, 0x00238000u); return;
    }
L_00238000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00238010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238010u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00238010u) [[unlikely]] return; }
L_00238010:
    st32((c.r[20].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[16].w[0] + 1200u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238020u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x00238020u) [[unlikely]] return; }
L_00238020:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00238054; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00238054; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238054u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00238054u) [[unlikely]] return; }
L_00238054:
    st32((c.r[20].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[16].w[0] + 1204u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238064u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x00238064u) [[unlikely]] return; }
L_00238064:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00238098; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00238098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238098u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00238098u) [[unlikely]] return; }
L_00238098:
    st32((c.r[20].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[16].w[0] + 1208u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002380A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x002380A8u) [[unlikely]] return; }
L_002380A8:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002380DC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002380DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002380DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002380DCu) [[unlikely]] return; }
L_002380DC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00237EC4u | kUnwind; return; } [[clang::musttail]] return unit_0045(c, 370u, depth); } }
    set32(c.r[17], ld32((c.r[19].w[0] + 1128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002380F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x002380F8u) [[unlikely]] return; }
L_002380F8:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00238128; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00238128; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238128u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00238128u) [[unlikely]] return; }
L_00238128:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238134u); st32((c.r[16].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x00238134u) [[unlikely]] return; }
L_00238134:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00238164; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00238164; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238164u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00238164u) [[unlikely]] return; }
L_00238164:
    set32(c.r[3], ld32((c.r[19].w[0] + 1316u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  goto L_00238180; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00238180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238188u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x00238188u) [[unlikely]] return; }
L_00238188:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002381B8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002381B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002381B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002381B8u) [[unlikely]] return; }
L_002381B8:
    set32(c.r[3], ld32((c.r[19].w[0] + 1312u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  goto L_002381D4; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_002381D4:
    set32(c.r[4], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00238290; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002381E8u);  if (depth < kMaxDepth) unit_004B(c, 324u, depth + 1u); else { c.pc = 0x0024EE20u; return; } if (c.pc != 0x002381E8u) [[unlikely]] return; }
L_002381E8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002381F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x002381F4u) [[unlikely]] return; }
L_002381F4:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00238224; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00238224; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238224u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00238224u) [[unlikely]] return; }
L_00238224:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0023827C; } }
L_00238230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238238u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 335u, depth + 1u); else { c.pc = 0x0024EFE0u; return; } if (c.pc != 0x00238238u) [[unlikely]] return; }
L_00238238:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238244u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x00238244u) [[unlikely]] return; }
L_00238244:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00238274; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00238274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238274u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00238274u) [[unlikely]] return; }
L_00238274:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_0023827C:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 176u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00238230u | kUnwind; return; } goto L_00238230; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_002382D0; } }
L_00238290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238298u);  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x00238298u) [[unlikely]] return; }
L_00238298:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002382C8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002382C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002382C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002382C8u) [[unlikely]] return; }
L_002382C8:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 2;
L_002382D0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00238300:
    set32(c.r[29], c.r[29].w[0] - 480u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 456u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 456u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023833Cu); st32((c.r[29].w[0] + 460u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0023833Cu) [[unlikely]] return; }
L_0023833C:
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238348u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00238348u) [[unlikely]] return; }
L_00238348:
    set32(c.r[2], ld32((c.r[29].w[0] + 444u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0023836C; }
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238360u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x00238360u) [[unlikely]] return; }
L_00238360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld64((c.r[29].w[0] + 432u));  if (t) { goto L_00238380; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0023836C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238374u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00238374u) [[unlikely]] return; }
L_00238374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00238A7C; } }
    c.r[4].d[0] = ld64((c.r[29].w[0] + 432u));
    c.budget -= 1;
L_00238380:
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 448u), c.r[4].d[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[29].w[0] + 448u);  if (t) { goto L_002389B0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 424u);  goto L_002383A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00238A3C; } }
    set32(c.r[4], c.r[29].w[0] + 424u);
    c.budget -= 1;
L_002383A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002383B0u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x002383B0u) [[unlikely]] return; }
L_002383B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 428u)));
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002383C4u); st32((c.r[18].w[0] + 1124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002383C4u) [[unlikely]] return; }
L_002383C4:
    set32(c.r[3], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[4], c.r[29].w[0] + 408u);
    set32(c.r[2], ld32((c.r[29].w[0] + 420u)));
    set32(c.r[5], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002383E0u); st32((c.r[29].w[0] + 452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x002383E0u) [[unlikely]] return; }
L_002383E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 412u)));
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002383F4u); st32((c.r[18].w[0] + 1120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002383F4u) [[unlikely]] return; }
L_002383F4:
    set32(c.r[3], ld32((c.r[29].w[0] + 400u)));
    set32(c.r[4], c.r[29].w[0] + 392u);
    set32(c.r[2], ld32((c.r[29].w[0] + 404u)));
    set32(c.r[5], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238410u); st32((c.r[29].w[0] + 452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00238410u) [[unlikely]] return; }
L_00238410:
    set32(c.r[2], ld32((c.r[29].w[0] + 396u)));
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238424u); st32((c.r[18].w[0] + 1132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x00238424u) [[unlikely]] return; }
L_00238424:
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[4], c.r[29].w[0] + 376u);
    set32(c.r[2], ld32((c.r[29].w[0] + 388u)));
    set32(c.r[5], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238440u); st32((c.r[29].w[0] + 452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00238440u) [[unlikely]] return; }
L_00238440:
    set32(c.r[2], ld32((c.r[29].w[0] + 380u)));
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238454u); st32((c.r[18].w[0] + 1136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x00238454u) [[unlikely]] return; }
L_00238454:
    set32(c.r[3], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[4], c.r[29].w[0] + 360u);
    set32(c.r[2], ld32((c.r[29].w[0] + 372u)));
    set32(c.r[5], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238470u); st32((c.r[29].w[0] + 452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00238470u) [[unlikely]] return; }
L_00238470:
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238484u); st32((c.r[18].w[0] + 1140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x00238484u) [[unlikely]] return; }
L_00238484:
    set32(c.r[3], ld32((c.r[29].w[0] + 352u)));
    set32(c.r[4], c.r[29].w[0] + 344u);
    set32(c.r[2], ld32((c.r[29].w[0] + 356u)));
    set32(c.r[5], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002384A0u); st32((c.r[29].w[0] + 452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x002384A0u) [[unlikely]] return; }
L_002384A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 348u)));
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002384B4u); st32((c.r[18].w[0] + 1144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002384B4u) [[unlikely]] return; }
L_002384B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[4], c.r[29].w[0] + 328u);
    set32(c.r[2], ld32((c.r[29].w[0] + 340u)));
    set32(c.r[5], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002384D0u); st32((c.r[29].w[0] + 452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x002384D0u) [[unlikely]] return; }
L_002384D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002384E4u); st32((c.r[18].w[0] + 1148u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002384E4u) [[unlikely]] return; }
L_002384E4:
    set32(c.r[3], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[4], c.r[29].w[0] + 312u);
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[5], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238500u); st32((c.r[29].w[0] + 452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00238500u) [[unlikely]] return; }
L_00238500:
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238514u); st32((c.r[18].w[0] + 1152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x00238514u) [[unlikely]] return; }
L_00238514:
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[4], c.r[29].w[0] + 296u);
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[5], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238530u); st32((c.r[29].w[0] + 452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00238530u) [[unlikely]] return; }
L_00238530:
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238544u); st32((c.r[18].w[0] + 1156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x00238544u) [[unlikely]] return; }
L_00238544:
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[4], c.r[29].w[0] + 280u);
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[5], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238560u); st32((c.r[29].w[0] + 452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00238560u) [[unlikely]] return; }
L_00238560:
    set32(c.r[2], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238574u); st32((c.r[18].w[0] + 1164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x00238574u) [[unlikely]] return; }
L_00238574:
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 452u), c.r[2].w[0]);
    c.budget -= 5;
L_00238588:
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[4], c.r[29].w[0] + 264u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[29].w[0] + 448u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002385A4u); set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x002385A4u) [[unlikely]] return; }
L_002385A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002385B8u); st32((c.r[16].w[0] + 1168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002385B8u) [[unlikely]] return; }
L_002385B8:
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[4], c.r[29].w[0] + 248u);
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[5], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002385D4u); st32((c.r[29].w[0] + 452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x002385D4u) [[unlikely]] return; }
L_002385D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002385E8u); st32((c.r[16].w[0] + 1172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002385E8u) [[unlikely]] return; }
L_002385E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], c.r[29].w[0] + 232u);
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[5], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238604u); st32((c.r[29].w[0] + 452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00238604u) [[unlikely]] return; }
L_00238604:
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238618u); st32((c.r[16].w[0] + 1176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x00238618u) [[unlikely]] return; }
L_00238618:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[4], c.r[29].w[0] + 216u);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[5], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238634u); st32((c.r[29].w[0] + 452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00238634u) [[unlikely]] return; }
L_00238634:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238648u); st32((c.r[16].w[0] + 1180u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x00238648u) [[unlikely]] return; }
L_00238648:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[4], c.r[29].w[0] + 200u);
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[5], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238664u); st32((c.r[29].w[0] + 452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00238664u) [[unlikely]] return; }
L_00238664:
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238678u); st32((c.r[16].w[0] + 1184u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x00238678u) [[unlikely]] return; }
L_00238678:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], c.r[29].w[0] + 184u);
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[5], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238694u); st32((c.r[29].w[0] + 452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00238694u) [[unlikely]] return; }
L_00238694:
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002386A8u); st32((c.r[16].w[0] + 1200u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002386A8u) [[unlikely]] return; }
L_002386A8:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[5], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002386C4u); st32((c.r[29].w[0] + 452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x002386C4u) [[unlikely]] return; }
L_002386C4:
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002386D8u); st32((c.r[16].w[0] + 1204u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002386D8u) [[unlikely]] return; }
L_002386D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[5], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002386F4u); st32((c.r[29].w[0] + 452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x002386F4u) [[unlikely]] return; }
L_002386F4:
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238708u); st32((c.r[16].w[0] + 1208u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x00238708u) [[unlikely]] return; }
L_00238708:
    set32(c.r[4], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 148u)));
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 448u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 452u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00238588u | kUnwind; return; } goto L_00238588; } }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238730u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00238730u) [[unlikely]] return; }
L_00238730:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238744u); st32((c.r[18].w[0] + 1128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x00238744u) [[unlikely]] return; }
L_00238744:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[5], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238760u); st32((c.r[29].w[0] + 452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00238760u) [[unlikely]] return; }
L_00238760:
    set32(c.r[4], ld32((c.r[18].w[0] + 1316u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 124u)));  if (t) { goto L_00238784; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00238784; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238784u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00238784u) [[unlikely]] return; }
L_00238784:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 1316u), 0u);  goto L_002387E0; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002387DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002387A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x002387A0u) [[unlikely]] return; }
L_002387A0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002387D0; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_002387C0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002387D0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002387C0:
    set32(c.r[4], c.r[18].w[0] + 1316u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002387D0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x002387D0u) [[unlikely]] return; }
L_002387D0:
    st32((c.r[18].w[0] + 1316u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_002387E4; } }
L_002387DC:
    st32((c.r[18].w[0] + 1316u), 0u);
    c.budget -= 1;
L_002387E0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_002387E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002387ECu); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002387ECu) [[unlikely]] return; }
L_002387EC:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[5], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238808u); st32((c.r[29].w[0] + 452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00238808u) [[unlikely]] return; }
L_00238808:
    set32(c.r[4], ld32((c.r[18].w[0] + 1312u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 108u)));  if (t) { goto L_0023882C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0023882C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023882Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0023882Cu) [[unlikely]] return; }
L_0023882C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 1312u), 0u);  goto L_00238888; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00238884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238848u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00238848u) [[unlikely]] return; }
L_00238848:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00238878; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00238868; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00238878; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00238868:
    set32(c.r[4], c.r[18].w[0] + 1312u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238878u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x00238878u) [[unlikely]] return; }
L_00238878:
    st32((c.r[18].w[0] + 1312u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_0023888C; } }
L_00238884:
    st32((c.r[18].w[0] + 1312u), 0u);
    c.budget -= 1;
L_00238888:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_0023888C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238894u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x00238894u) [[unlikely]] return; }
L_00238894:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[5], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002388B0u); st32((c.r[29].w[0] + 452u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x002388B0u) [[unlikely]] return; }
L_002388B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002388C4u); st32((c.r[18].w[0] + 1160u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x002388C4u) [[unlikely]] return; }
L_002388C4:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 452u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 1160u)));
    c.budget -= 7;
    if (c.r[4].sd[0] <= 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00238948; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002388E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x002388E8u) [[unlikely]] return; }
L_002388E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 244u), c.r[2].w[0]);  if (t) { goto L_00238A44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00238934; } }
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 1;
L_002388FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238904u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00238904u) [[unlikely]] return; }
L_00238904:
    set32(c.r[2], ld32((c.r[18].w[0] + 244u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[5], c.r[29].w[0] + 448u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238920u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x00238920u) [[unlikely]] return; }
L_00238920:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 452u), c.r[2].w[0]);
    c.budget -= 5;
L_00238934:
    set32(c.r[2], ld32((c.r[18].w[0] + 1160u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002388FCu | kUnwind; return; } goto L_002388FC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00238948:
    set32(c.r[5], 0u + 17u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238954u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00238954u) [[unlikely]] return; }
L_00238954:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 18u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238964u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00238964u) [[unlikely]] return; }
L_00238964:
    set32(c.r[3], ld32((c.r[18].w[0] + 1132u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[6], ld32((c.r[18].w[0] + 1120u)));  goto L_00238988; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 19u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238984u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00238984u) [[unlikely]] return; }
L_00238984:
    set32(c.r[6], ld32((c.r[18].w[0] + 1120u)));
    c.budget -= 1;
L_00238988:
    c.budget -= 2;
    if (c.r[6].sd[0] < 0) { set32(c.r[2], 0u + 1u);  goto L_002389A0; }
    set32(c.r[5], ld32((c.r[18].w[0] + 1124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023899Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 430u, depth + 1u); else { c.pc = 0x00232EE0u; return; } if (c.pc != 0x0023899Cu) [[unlikely]] return; }
L_0023899C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002389A0:
    st32((c.r[18].w[0] + 1420u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 4;
L_002389B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 1120u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00238A10; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002389C8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x002389C8u) [[unlikely]] return; }
L_002389C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00238A0C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002389E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x002389E0u) [[unlikely]] return; }
L_002389E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 18u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002389F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x002389F0u) [[unlikely]] return; }
L_002389F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238A00u); set32(c.r[5], c.r[5].w[0] - 26415u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00238A00u) [[unlikely]] return; }
L_00238A00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238A0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00238A0Cu) [[unlikely]] return; }
L_00238A0C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00238A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238A18u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00238A18u) [[unlikely]] return; }
L_00238A18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00238A78; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238A30u); set32(c.r[5], c.r[5].w[0] - 26415u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00238A30u) [[unlikely]] return; }
L_00238A30:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238A3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00238A3Cu) [[unlikely]] return; }
L_00238A3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00238A78; } }
L_00238A44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238A54u); set32(c.r[5], c.r[5].w[0] - 26393u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00238A54u) [[unlikely]] return; }
L_00238A54:
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238A78u); st32((c.r[18].w[0] + 1328u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00238A78u) [[unlikely]] return; }
L_00238A78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00238A7C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_00238A90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 1164u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238AB4u); st32((c.r[4].w[0] + 1164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 612u, depth + 1u); else { c.pc = 0x001B3FA0u; return; } if (c.pc != 0x00238AB4u) [[unlikely]] return; }
L_00238AB4:
    set32(c.r[3], 0u + 4000u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00238AEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238AC8u);  if (depth < kMaxDepth) unit_0024(c, 129u, depth + 1u); else { c.pc = 0x001B0C00u; return; } if (c.pc != 0x00238AC8u) [[unlikely]] return; }
L_00238AC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00238AE8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 14u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238AE0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00238AE0u) [[unlikely]] return; }
L_00238AE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00238AFC; } }
L_00238AE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00238AEC:
    set32(c.r[5], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238AF8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00238AF8u) [[unlikely]] return; }
L_00238AF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00238AFC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00238B10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238B2Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0044(c, 502u, depth + 1u); else { c.pc = 0x00233980u; return; } if (c.pc != 0x00238B2Cu) [[unlikely]] return; }
L_00238B2C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], 0u + 4099u);  goto L_00238B64; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238B48u); set32(c.r[5], c.r[5].w[0] - 26373u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00238B48u) [[unlikely]] return; }
L_00238B48:
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[18].w[0] + 1328u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], 0u + 4099u);
    c.budget -= 7;
L_00238B64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238B6Cu);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00238B6Cu) [[unlikely]] return; }
L_00238B6C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 1328u)));  goto L_00238B94; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238B88u); set32(c.r[5], c.r[5].w[0] - 26331u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00238B88u) [[unlikely]] return; }
L_00238B88:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_00238CCC; } }
L_00238B94:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[6].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00238BB4; }
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00238BC8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00238BB4:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238BC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00238BC0u) [[unlikely]] return; }
L_00238BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 92u)));  if (t) { goto L_00238BD4; } }
L_00238BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238BD0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00238BD0u) [[unlikely]] return; }
L_00238BD0:
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 1;
L_00238BD4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00238C00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238BE8u);  if (depth < kMaxDepth) unit_00BD(c, 363u, depth + 1u); else { c.pc = 0x004172F0u; return; } if (c.pc != 0x00238BE8u) [[unlikely]] return; }
L_00238BE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00238BFC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1152u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00238C10; }
L_00238BFC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00238C00:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238C0Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00238C0Cu) [[unlikely]] return; }
L_00238C0C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00238C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238C18u);  if (depth < kMaxDepth) unit_004C(c, 334u, depth + 1u); else { c.pc = 0x002533A0u; return; } if (c.pc != 0x00238C18u) [[unlikely]] return; }
L_00238C18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00238C38; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238C30u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00238C30u) [[unlikely]] return; }
L_00238C30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 1328u)));  if (t) { goto L_00238C48; } }
L_00238C38:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238C44u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00238C44u) [[unlikely]] return; }
L_00238C44:
    set32(c.r[3], ld32((c.r[18].w[0] + 1328u)));
    c.budget -= 1;
L_00238C48:
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00238C7C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00238C78; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238C70u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004C(c, 294u, depth + 1u); else { c.pc = 0x00252ED0u; return; } if (c.pc != 0x00238C70u) [[unlikely]] return; }
L_00238C70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00238C88; } }
L_00238C78:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00238C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238C84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004C(c, 294u, depth + 1u); else { c.pc = 0x00252ED0u; return; } if (c.pc != 0x00238C84u) [[unlikely]] return; }
L_00238C84:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00238C88:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_00238C8C:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 160u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00238CC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238CA4u);  if (depth < kMaxDepth) unit_0043(c, 72u, depth + 1u); else { c.pc = 0x0022C600u; return; } if (c.pc != 0x00238CA4u) [[unlikely]] return; }
L_00238CA4:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00238CBC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238CBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004C(c, 294u, depth + 1u); else { c.pc = 0x00252ED0u; return; } if (c.pc != 0x00238CBCu) [[unlikely]] return; }
L_00238CBC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00238CC0:
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00238C8Cu | kUnwind; return; } goto L_00238C8C; }
L_00238CCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00238CF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 4u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 1340u), c.r[6].w[0]);
    set32(c.r[5], 0u + 17u);
    st32((c.r[4].w[0] + 1344u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 1348u), 0u);
    st32((c.r[4].w[0] + 1360u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 1372u), c.r[6].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238D30u); st32((c.r[4].w[0] + 1380u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00238D30u) [[unlikely]] return; }
L_00238D30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 1128u), 0u);  goto L_00238DA0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238D44u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00238D44u) [[unlikely]] return; }
L_00238D44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00238D9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238D54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 502u, depth + 1u); else { c.pc = 0x00233980u; return; } if (c.pc != 0x00238D54u) [[unlikely]] return; }
L_00238D54:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 176u)));  goto L_00238D6C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 1136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238D68u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 277u, depth + 1u); else { c.pc = 0x00252B40u; return; } if (c.pc != 0x00238D68u) [[unlikely]] return; }
L_00238D68:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 1;
L_00238D6C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00238DAC; }
    set32(c.r[5], ld32((c.r[17].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00238DA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238D88u);  if (depth < kMaxDepth) unit_004B(c, 388u, depth + 1u); else { c.pc = 0x0024F700u; return; } if (c.pc != 0x00238D88u) [[unlikely]] return; }
L_00238D88:
    set32(c.r[4], ld32((c.r[17].w[0] + 244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238D94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x00238D94u) [[unlikely]] return; }
L_00238D94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 244u), 0u);  if (t) { goto L_00238DA8; } }
L_00238D9C:
    st32((c.r[17].w[0] + 1128u), 0u);
    c.budget -= 1;
L_00238DA0:
    st32((c.r[17].w[0] + 1152u), 0u);
    st32((c.r[17].w[0] + 1156u), 0u);
    c.budget -= 2;
L_00238DA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00238DAC:
    set32(c.r[5], 0u + 13u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238DB8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00238DB8u) [[unlikely]] return; }
L_00238DB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238DC4u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00238DC4u) [[unlikely]] return; }
L_00238DC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00238EC0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238DD8u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00238DD8u) [[unlikely]] return; }
L_00238DD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 176u)));  goto L_00238DF8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238DECu); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00238DECu) [[unlikely]] return; }
L_00238DEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00238EBC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 1;
L_00238DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238E00u);  if (depth < kMaxDepth) unit_004B(c, 305u, depth + 1u); else { c.pc = 0x0024EC40u; return; } if (c.pc != 0x00238E00u) [[unlikely]] return; }
L_00238E00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], 0u + 100u);
    set32(c.r[5], 0u - 1u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238E24u); st32((c.r[17].w[0] + 1132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0046(c, 360u, depth + 1u); else { c.pc = 0x0023A7C0u; return; } if (c.pc != 0x00238E24u) [[unlikely]] return; }
L_00238E24:
    st32((c.r[17].w[0] + 1176u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238E34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 312u, depth + 1u); else { c.pc = 0x0024ECE0u; return; } if (c.pc != 0x00238E34u) [[unlikely]] return; }
L_00238E34:
    st32((c.r[17].w[0] + 1168u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[17].w[0] + 1172u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1184u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[17].w[0] + 1184u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[17].w[0] + 1184u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 1208u), 0u);
    st32((c.r[17].w[0] + 1204u), 0u);
    st32((c.r[17].w[0] + 1200u), 0u);
    st32((c.r[17].w[0] + 1212u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238E70u); set32(c.r[4], ld32((c.r[17].w[0] + 176u)));  if (depth < kMaxDepth) unit_004B(c, 312u, depth + 1u); else { c.pc = 0x0024ECE0u; return; } if (c.pc != 0x00238E70u) [[unlikely]] return; }
L_00238E70:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[17].w[0] + 1216u), c.r[2].w[0]);  if (t) { goto L_00238EAC; } }
    st32((c.r[17].w[0] + 1224u), c.r[16].w[0]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 1220u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 1228u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1232u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[17].w[0] + 1232u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 1256u), 0u);
    st32((c.r[17].w[0] + 1252u), 0u);
    st32((c.r[17].w[0] + 1248u), 0u);
    st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);
    c.budget -= 12;
L_00238EAC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238EBCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00238EBCu) [[unlikely]] return; }
L_00238EBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00238EC0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00238ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1132u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00238F40; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00238F98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238F04u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00238F04u) [[unlikely]] return; }
L_00238F04:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), c.r[17].w[0]);  goto L_00238F94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238F18u); set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  if (depth < kMaxDepth) unit_004F(c, 210u, depth + 1u); else { c.pc = 0x0025E250u; return; } if (c.pc != 0x00238F18u) [[unlikely]] return; }
L_00238F18:
    set32(c.r[7], ld32((c.r[16].w[0] + 1344u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 1384u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238F30u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 192u, depth + 1u); else { c.pc = 0x0023E390u; return; } if (c.pc != 0x00238F30u) [[unlikely]] return; }
L_00238F30:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 148u), c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00238F94; } }
L_00238F40:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00238F94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238F54u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00238F54u) [[unlikely]] return; }
L_00238F54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00238F94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238F64u); set32(c.r[4], 0u + 1120u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00238F64u) [[unlikely]] return; }
L_00238F64:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 156u), c.r[17].w[0]);  goto L_00238F94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238F78u); set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  if (depth < kMaxDepth) unit_004F(c, 210u, depth + 1u); else { c.pc = 0x0025E250u; return; } if (c.pc != 0x00238F78u) [[unlikely]] return; }
L_00238F78:
    set32(c.r[7], ld32((c.r[16].w[0] + 1132u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00238F8Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 391u, depth + 1u); else { c.pc = 0x0022EB20u; return; } if (c.pc != 0x00238F8Cu) [[unlikely]] return; }
L_00238F8C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 156u), c.r[17].w[0]);
    c.budget -= 2;
L_00238F94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00238F98:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00238FB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 10;
L_00238FD8:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[3].w[0] + 160u);
    set32(c.r[3], ld32((c.r[3].w[0] + 160u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00239050; }
    set32(c.r[4], c.r[17].w[0] << 1);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[19], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 1168u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023904C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239014u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00239014u) [[unlikely]] return; }
L_00239014:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[20].w[0]);  goto L_0023904C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023902Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 211u, depth + 1u); else { c.pc = 0x0025E290u; return; } if (c.pc != 0x0023902Cu) [[unlikely]] return; }
L_0023902C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], c.r[19].w[0] + 1168u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239044u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 346u, depth + 1u); else { c.pc = 0x0022B3F0u; return; } if (c.pc != 0x00239044u) [[unlikely]] return; }
L_00239044:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[20].w[0]);
    c.budget -= 2;
L_0023904C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00239050:
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00238FD8u | kUnwind; return; } goto L_00238FD8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00239080:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023909Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0045(c, 7u, depth + 1u); else { c.pc = 0x00234080u; return; } if (c.pc != 0x0023909Cu) [[unlikely]] return; }
L_0023909C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[16], 0u - 1u);  goto L_002390B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002390B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 72u, depth + 1u); else { c.pc = 0x0022C600u; return; } if (c.pc != 0x002390B0u) [[unlikely]] return; }
L_002390B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002390B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002390C0u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x002390C0u) [[unlikely]] return; }
L_002390C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00239194; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00239190; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1344u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[3], 0u + 4u);  goto L_002390F0; }
    set32(c.r[5], ld32((c.r[17].w[0] + 1132u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 5u);  goto L_00239138; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_002390F0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], 0u + 5u);  goto L_00239114; }
    set32(c.r[5], ld32((c.r[17].w[0] + 1132u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00239110; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_00239134; } }
L_00239110:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_00239114:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00239190; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 1132u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00239190; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00239190; } }
L_00239134:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_00239138:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00239160; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00239160; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239158u); set32(c.r[5], 0u + 180u);  if (depth < kMaxDepth) unit_0044(c, 538u, depth + 1u); else { c.pc = 0x00233D90u; return; } if (c.pc != 0x00239158u) [[unlikely]] return; }
L_00239158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00239180; } }
L_00239160:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 28976u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023917Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 538u, depth + 1u); else { c.pc = 0x00233D90u; return; } if (c.pc != 0x0023917Cu) [[unlikely]] return; }
L_0023917C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00239180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239188u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 293u, depth + 1u); else { c.pc = 0x002373B0u; return; } if (c.pc != 0x00239188u) [[unlikely]] return; }
L_00239188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002391A0; } }
L_00239190:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00239194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023919Cu);  if (depth < kMaxDepth) unit_0044(c, 529u, depth + 1u); else { c.pc = 0x00233CB0u; return; } if (c.pc != 0x0023919Cu) [[unlikely]] return; }
L_0023919C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002391A0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002391C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 1124u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 1120u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 1148u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002391E8u); st32((c.r[4].w[0] + 1152u), 0u);  if (depth < kMaxDepth) unit_0046(c, 360u, depth + 1u); else { c.pc = 0x0023A7C0u; return; } if (c.pc != 0x002391E8u) [[unlikely]] return; }
L_002391E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[16].w[0] + 1316u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002391F8u); set32(c.r[5], c.r[5].w[0] - 27099u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x002391F8u) [[unlikely]] return; }
L_002391F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[16].w[0] + 1312u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239208u); set32(c.r[5], c.r[5].w[0] - 27099u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x00239208u) [[unlikely]] return; }
L_00239208:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00239220:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 1132u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023924Cu); set32(c.r[4], ld32((c.r[4].w[0] + 172u)));  if (depth < kMaxDepth) unit_0046(c, 508u, depth + 1u); else { c.pc = 0x0023B9F0u; return; } if (c.pc != 0x0023924Cu) [[unlikely]] return; }
L_0023924C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239258u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00239258u) [[unlikely]] return; }
L_00239258:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0023928C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239268u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 502u, depth + 1u); else { c.pc = 0x00233980u; return; } if (c.pc != 0x00239268u) [[unlikely]] return; }
L_00239268:
    set32(c.r[5], ld32((c.r[16].w[0] + 1140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239274u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 282u, depth + 1u); else { c.pc = 0x00252DA0u; return; } if (c.pc != 0x00239274u) [[unlikely]] return; }
L_00239274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023927Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 502u, depth + 1u); else { c.pc = 0x00233980u; return; } if (c.pc != 0x0023927Cu) [[unlikely]] return; }
L_0023927C:
    set32(c.r[5], ld32((c.r[16].w[0] + 1144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239288u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 288u, depth + 1u); else { c.pc = 0x00252E50u; return; } if (c.pc != 0x00239288u) [[unlikely]] return; }
L_00239288:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0023928C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239294u); st32((c.r[16].w[0] + 1348u), 0u);  if (depth < kMaxDepth) unit_0046(c, 276u, depth + 1u); else { c.pc = 0x00239DF0u; return; } if (c.pc != 0x00239294u) [[unlikely]] return; }
L_00239294:
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_002396B8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 1360u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_002395A8; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002395A4; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_0023952C; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[6].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00239460; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 1132u)));  goto L_002392E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002395A4; } }
L_002392E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239308u); set32(c.r[18], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00239308u) [[unlikely]] return; }
L_00239308:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[19].w[0] << 2);
    c.budget -= 2;
L_00239310:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 160u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 160u);  if (t) { goto L_00239448; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239328u);  if (depth < kMaxDepth) unit_0043(c, 72u, depth + 1u); else { c.pc = 0x0022C600u; return; } if (c.pc != 0x00239328u) [[unlikely]] return; }
L_00239328:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0023944C; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239340u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x00239340u) [[unlikely]] return; }
L_00239340:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 1416u)));  goto L_00239360; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239350u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0043(c, 72u, depth + 1u); else { c.pc = 0x0022C600u; return; } if (c.pc != 0x00239350u) [[unlikely]] return; }
L_00239350:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00239448; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1416u)));
    c.budget -= 1;
L_00239360:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 1344u)));  goto L_0023939C; }
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 1176u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239384u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0043(c, 81u, depth + 1u); else { c.pc = 0x0022C6C0u; return; } if (c.pc != 0x00239384u) [[unlikely]] return; }
L_00239384:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239394u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00239394u) [[unlikely]] return; }
L_00239394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00239448; } }
L_0023939C:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 1132u)));  goto L_0023940C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 1132u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00239408; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002393C0u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0043(c, 72u, depth + 1u); else { c.pc = 0x0022C600u; return; } if (c.pc != 0x002393C0u) [[unlikely]] return; }
L_002393C0:
    set32(c.r[4], 0u + 51u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002393CCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 7u, depth + 1u); else { c.pc = 0x002504C0u; return; } if (c.pc != 0x002393CCu) [[unlikely]] return; }
L_002393CC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002393D8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 77u, depth + 1u); else { c.pc = 0x0022C660u; return; } if (c.pc != 0x002393D8u) [[unlikely]] return; }
L_002393D8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002393E4u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x002393E4u) [[unlikely]] return; }
L_002393E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00239448; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 507u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239400u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 63u, depth + 1u); else { c.pc = 0x0022C510u; return; } if (c.pc != 0x00239400u) [[unlikely]] return; }
L_00239400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00239448; } }
L_00239408:
    set32(c.r[4], ld32((c.r[16].w[0] + 1132u)));
    c.budget -= 1;
L_0023940C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239414u);  if (depth < kMaxDepth) unit_004C(c, 13u, depth + 1u); else { c.pc = 0x002505A0u; return; } if (c.pc != 0x00239414u) [[unlikely]] return; }
L_00239414:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239420u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 81u, depth + 1u); else { c.pc = 0x0022C6C0u; return; } if (c.pc != 0x00239420u) [[unlikely]] return; }
L_00239420:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023942Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0023942Cu) [[unlikely]] return; }
L_0023942C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00239448; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239448u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 63u, depth + 1u); else { c.pc = 0x0022C510u; return; } if (c.pc != 0x00239448u) [[unlikely]] return; }
L_00239448:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0023944C:
    c.r[3].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00239310u | kUnwind; return; } goto L_00239310; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002395A4; } }
L_00239460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239468u);  if (depth < kMaxDepth) unit_0045(c, 23u, depth + 1u); else { c.pc = 0x00234250u; return; } if (c.pc != 0x00239468u) [[unlikely]] return; }
L_00239468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239470u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 37u, depth + 1u); else { c.pc = 0x002487E0u; return; } if (c.pc != 0x00239470u) [[unlikely]] return; }
L_00239470:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 3;
L_0023947C:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 160u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 160u);  if (t) { goto L_00239514; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239494u);  if (depth < kMaxDepth) unit_0043(c, 72u, depth + 1u); else { c.pc = 0x0022C600u; return; } if (c.pc != 0x00239494u) [[unlikely]] return; }
L_00239494:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00239518; }
    set32(c.r[3], ld32((c.r[16].w[0] + 1344u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 1132u)));  goto L_002394D8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 1132u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002394D4; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002394CCu); set32(c.r[5], 0u + 42u);  if (depth < kMaxDepth) unit_0043(c, 81u, depth + 1u); else { c.pc = 0x0022C6C0u; return; } if (c.pc != 0x002394CCu) [[unlikely]] return; }
L_002394CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0])));  if (t) { goto L_002394F0; } }
L_002394D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 1132u)));
    c.budget -= 1;
L_002394D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002394E0u);  if (depth < kMaxDepth) unit_004C(c, 13u, depth + 1u); else { c.pc = 0x002505A0u; return; } if (c.pc != 0x002394E0u) [[unlikely]] return; }
L_002394E0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002394ECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 81u, depth + 1u); else { c.pc = 0x0022C6C0u; return; } if (c.pc != 0x002394ECu) [[unlikely]] return; }
L_002394EC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_002394F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002394F8u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x002394F8u) [[unlikely]] return; }
L_002394F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00239514; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239514u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 63u, depth + 1u); else { c.pc = 0x0022C510u; return; } if (c.pc != 0x00239514u) [[unlikely]] return; }
L_00239514:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00239518:
    c.r[3].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023947Cu | kUnwind; return; } goto L_0023947C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002395A4; } }
L_0023952C:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 1;
L_00239530:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 160u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 160u);  if (t) { goto L_00239594; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239548u);  if (depth < kMaxDepth) unit_0043(c, 72u, depth + 1u); else { c.pc = 0x0022C600u; return; } if (c.pc != 0x00239548u) [[unlikely]] return; }
L_00239548:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00239598; }
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1176u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239570u); set32(c.r[19], c.r[2].w[0] + 1176u);  if (depth < kMaxDepth) unit_004B(c, 448u, depth + 1u); else { c.pc = 0x0024FF40u; return; } if (c.pc != 0x00239570u) [[unlikely]] return; }
L_00239570:
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239580u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 81u, depth + 1u); else { c.pc = 0x0022C6C0u; return; } if (c.pc != 0x00239580u) [[unlikely]] return; }
L_00239580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239588u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 9u, depth + 1u); else { c.pc = 0x00250520u; return; } if (c.pc != 0x00239588u) [[unlikely]] return; }
L_00239588:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239594u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 101u, depth + 1u); else { c.pc = 0x0022C850u; return; } if (c.pc != 0x00239594u) [[unlikely]] return; }
L_00239594:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00239598:
    c.r[3].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00239530u | kUnwind; return; } goto L_00239530; }
L_002395A4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002395A8:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 1;
L_002395AC:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 160u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 160u);  if (t) { goto L_002396A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002395C4u);  if (depth < kMaxDepth) unit_0043(c, 72u, depth + 1u); else { c.pc = 0x0022C600u; return; } if (c.pc != 0x002395C4u) [[unlikely]] return; }
L_002395C4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_002395E4; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002395DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 112u, depth + 1u); else { c.pc = 0x0022C990u; return; } if (c.pc != 0x002395DCu) [[unlikely]] return; }
L_002395DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00239644; } }
L_002395E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002395ECu);  if (depth < kMaxDepth) unit_0043(c, 72u, depth + 1u); else { c.pc = 0x0022C600u; return; } if (c.pc != 0x002395ECu) [[unlikely]] return; }
L_002395EC:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00239640; } }
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239610u); set32(c.r[4], ld32((c.r[2].w[0] + 1176u)));  if (depth < kMaxDepth) unit_004B(c, 448u, depth + 1u); else { c.pc = 0x0024FF40u; return; } if (c.pc != 0x00239610u) [[unlikely]] return; }
L_00239610:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239620u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 7u, depth + 1u); else { c.pc = 0x002504C0u; return; } if (c.pc != 0x00239620u) [[unlikely]] return; }
L_00239620:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023962Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 77u, depth + 1u); else { c.pc = 0x0022C660u; return; } if (c.pc != 0x0023962Cu) [[unlikely]] return; }
L_0023962C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239634u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 11u, depth + 1u); else { c.pc = 0x00250560u; return; } if (c.pc != 0x00239634u) [[unlikely]] return; }
L_00239634:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239640u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 101u, depth + 1u); else { c.pc = 0x0022C850u; return; } if (c.pc != 0x00239640u) [[unlikely]] return; }
L_00239640:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00239644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023964Cu); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x0023964Cu) [[unlikely]] return; }
L_0023964C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002396A8; }
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239670u); set32(c.r[5], c.r[2].w[0] + 1200u);  if (depth < kMaxDepth) unit_0043(c, 77u, depth + 1u); else { c.pc = 0x0022C660u; return; } if (c.pc != 0x00239670u) [[unlikely]] return; }
L_00239670:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023967Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0043(c, 62u, depth + 1u); else { c.pc = 0x0022C4F0u; return; } if (c.pc != 0x0023967Cu) [[unlikely]] return; }
L_0023967C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002396A4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 1132u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239694u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0046(c, 511u, depth + 1u); else { c.pc = 0x0023BA20u; return; } if (c.pc != 0x00239694u) [[unlikely]] return; }
L_00239694:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002396A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 120u, depth + 1u); else { c.pc = 0x0022CA30u; return; } if (c.pc != 0x002396A4u) [[unlikely]] return; }
L_002396A4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002396A8:
    c.r[3].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002395ACu | kUnwind; return; } goto L_002395AC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002396B8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002396E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239700u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x00239700u) [[unlikely]] return; }
L_00239700:
    set32(c.r[5], ld32((c.r[18].w[0] + 1128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023970Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x0023970Cu) [[unlikely]] return; }
L_0023970C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239718u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00239718u) [[unlikely]] return; }
L_00239718:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239724u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 502u, depth + 1u); else { c.pc = 0x00233980u; return; } if (c.pc != 0x00239724u) [[unlikely]] return; }
L_00239724:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0023973C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00239ACC; } }
L_0023973C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00239740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239748u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00239748u) [[unlikely]] return; }
L_00239748:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 1152u)));  goto L_00239774; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 152u)));  goto L_002398D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00239AD0; } }
L_00239774:
    st32((c.r[18].w[0] + 1156u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 1152u), 0u);
    st32((c.r[18].w[0] + 1128u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239788u); set32(c.r[4], ld32((c.r[18].w[0] + 176u)));  if (depth < kMaxDepth) unit_004B(c, 321u, depth + 1u); else { c.pc = 0x0024EDE0u; return; } if (c.pc != 0x00239788u) [[unlikely]] return; }
L_00239788:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_00239840; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023979Cu); set32(c.r[5], 0u + 23u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x0023979Cu) [[unlikely]] return; }
L_0023979C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023983C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002397ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 276u, depth + 1u); else { c.pc = 0x00252B30u; return; } if (c.pc != 0x002397ACu) [[unlikely]] return; }
L_002397AC:
    set32(c.r[4], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002397B8u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 299u, depth + 1u); else { c.pc = 0x0024EBC0u; return; } if (c.pc != 0x002397B8u) [[unlikely]] return; }
L_002397B8:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023983C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002397CCu); set32(c.r[4], ld32((c.r[18].w[0] + 176u)));  if (depth < kMaxDepth) unit_004B(c, 302u, depth + 1u); else { c.pc = 0x0024EC00u; return; } if (c.pc != 0x002397CCu) [[unlikely]] return; }
L_002397CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);  goto L_00239820; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002397E0u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x002397E0u) [[unlikely]] return; }
L_002397E0:
    set32(c.r[5], ld32((c.r[18].w[0] + 1124u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002397F8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 322u, depth + 1u); else { c.pc = 0x001FBD20u; return; } if (c.pc != 0x002397F8u) [[unlikely]] return; }
L_002397F8:
    st32((c.r[18].w[0] + 1128u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 2u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 1152u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239818u); set32(c.r[5], c.r[5].w[0] - 26669u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x00239818u) [[unlikely]] return; }
L_00239818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00239834; } }
L_00239820:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023982Cu); set32(c.r[5], c.r[5].w[0] - 26286u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0023982Cu) [[unlikely]] return; }
L_0023982C:
    set32(c.r[3], 0u - 1u);
    st32((c.r[18].w[0] + 1328u), c.r[3].w[0]);
    c.budget -= 2;
L_00239834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00239ACC; } }
L_0023983C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_00239840:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023984Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0023984Cu) [[unlikely]] return; }
L_0023984C:
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00239864; } }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0023987C; } }
L_00239864:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00239878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 80u));  if (t) { goto L_0023987C; } }
L_00239878:
    c.f[0] = 0u;
    c.budget -= 1;
L_0023987C:
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.r[6].d[0] = c.r[2].d[0] << 32;
    set32(c.r[7], ld32((c.r[29].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023989Cu); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 403u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x0023989Cu) [[unlikely]] return; }
L_0023989C:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002398C4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002398C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002398C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002398C0u) [[unlikely]] return; }
L_002398C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002398C4:
    set32(c.r[5], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002398D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x002398D0u) [[unlikely]] return; }
L_002398D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00239740u | kUnwind; return; } goto L_00239740; } }
L_002398D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002398F4; }
    set32(c.r[2], 0u - 1u);
    st32((c.r[18].w[0] + 1368u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002398F0u); set32(c.r[4], ld32((c.r[18].w[0] + 152u)));  if (depth < kMaxDepth) unit_0043(c, 491u, depth + 1u); else { c.pc = 0x0022F5F0u; return; } if (c.pc != 0x002398F0u) [[unlikely]] return; }
L_002398F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002398F4:
    set32(c.r[5], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239900u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00239900u) [[unlikely]] return; }
L_00239900:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_00239908:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00239924; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239920u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 110u, depth + 1u); else { c.pc = 0x0022C970u; return; } if (c.pc != 0x00239920u) [[unlikely]] return; }
L_00239920:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00239924:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00239908u | kUnwind; return; } goto L_00239908; }
    set32(c.r[3], ld32((c.r[18].w[0] + 1156u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002399C0; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_00239954; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002399DC; } }
L_00239954:
    set32(c.r[3], c.r[16].w[0] << 1);
    c.budget -= 1;
L_00239958:
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 1172u)));
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002399AC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239980u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 360u, depth + 1u); else { c.pc = 0x0023A7C0u; return; } if (c.pc != 0x00239980u) [[unlikely]] return; }
L_00239980:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 160u);  if (t) { goto L_002399A8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002399A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002399A4u) [[unlikely]] return; }
L_002399A4:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_002399A8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002399AC:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00239958u | kUnwind; return; } goto L_00239958; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00239A1C; } }
L_002399C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002399C8u);  if (depth < kMaxDepth) unit_0046(c, 377u, depth + 1u); else { c.pc = 0x0023AA70u; return; } if (c.pc != 0x002399C8u) [[unlikely]] return; }
L_002399C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002399D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 331u, depth + 1u); else { c.pc = 0x00253330u; return; } if (c.pc != 0x002399D0u) [[unlikely]] return; }
L_002399D0:
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_00239ACC; } }
L_002399DC:
    set32(c.r[3], c.r[16].w[0] << 1);
    c.budget -= 1;
L_002399E0:
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 1172u)));
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00239A0C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239A08u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 360u, depth + 1u); else { c.pc = 0x0023A7C0u; return; } if (c.pc != 0x00239A08u) [[unlikely]] return; }
L_00239A08:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00239A0C:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002399E0u | kUnwind; return; } goto L_002399E0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00239A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239A24u);  if (depth < kMaxDepth) unit_004C(c, 287u, depth + 1u); else { c.pc = 0x00252E40u; return; } if (c.pc != 0x00239A24u) [[unlikely]] return; }
L_00239A24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 1340u)));  goto L_00239A38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239A34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 306u, depth + 1u); else { c.pc = 0x00253000u; return; } if (c.pc != 0x00239A34u) [[unlikely]] return; }
L_00239A34:
    set32(c.r[4], ld32((c.r[18].w[0] + 1340u)));
    c.budget -= 1;
L_00239A38:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00239A60; }
    set32(c.r[3], ld32((c.r[18].w[0] + 1132u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[18].w[0] + 1340u)));  goto L_00239A6C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00239A68; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00239A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239A68u);  if (depth < kMaxDepth) unit_0044(c, 529u, depth + 1u); else { c.pc = 0x00233CB0u; return; } if (c.pc != 0x00239A68u) [[unlikely]] return; }
L_00239A68:
    set32(c.r[5], ld32((c.r[18].w[0] + 1340u)));
    c.budget -= 1;
L_00239A6C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00239AC4; }
    set32(c.r[2], ld32((c.r[18].w[0] + 1156u)));
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00239AA0; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239A98u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0045(c, 293u, depth + 1u); else { c.pc = 0x002373B0u; return; } if (c.pc != 0x00239A98u) [[unlikely]] return; }
L_00239A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00239AAC; } }
L_00239AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239AA8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0045(c, 293u, depth + 1u); else { c.pc = 0x002373B0u; return; } if (c.pc != 0x00239AA8u) [[unlikely]] return; }
L_00239AA8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00239AAC:
    set32(c.r[5], 0u + 13u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239AB8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x00239AB8u) [[unlikely]] return; }
L_00239AB8:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_00239ACC; } }
L_00239AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239ACCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 546u, depth + 1u); else { c.pc = 0x00233E60u; return; } if (c.pc != 0x00239ACCu) [[unlikely]] return; }
L_00239ACC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00239AD0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00239AF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], 0u + 13u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239B14u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00239B14u) [[unlikely]] return; }
L_00239B14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_00239B60; }
    set32(c.r[4], ld32((c.r[19].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 148u)));  goto L_00239B40; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239B38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239B38u) [[unlikely]] return; }
L_00239B38:
    st32((c.r[19].w[0] + 152u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 148u)));
    c.budget -= 2;
L_00239B40:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00239B5C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239B58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239B58u) [[unlikely]] return; }
L_00239B58:
    st32((c.r[19].w[0] + 148u), 0u);
    c.budget -= 1;
L_00239B5C:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00239B60:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 1;
L_00239B64:
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[3].w[0] + 160u);
    set32(c.r[3], ld32((c.r[3].w[0] + 160u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00239C2C; }
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1184u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_00239BB0; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239BA4u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00239BA4u) [[unlikely]] return; }
L_00239BA4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 1172u)));  goto L_00239BC0; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00239BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239BB8u);  if (depth < kMaxDepth) unit_0043(c, 104u, depth + 1u); else { c.pc = 0x0022C880u; return; } if (c.pc != 0x00239BB8u) [[unlikely]] return; }
L_00239BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00239C28; } }
L_00239BC0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00239BDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239BD4u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0043(c, 104u, depth + 1u); else { c.pc = 0x0022C880u; return; } if (c.pc != 0x00239BD4u) [[unlikely]] return; }
L_00239BD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00239C28; } }
L_00239BDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239BE4u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00239BE4u) [[unlikely]] return; }
L_00239BE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00239C28; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239BF8u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x00239BF8u) [[unlikely]] return; }
L_00239BF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00239C28; } }
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 1168u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00239C28; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239C24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239C24u) [[unlikely]] return; }
L_00239C24:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_00239C28:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00239C2C:
    c.r[3].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00239B64u | kUnwind; return; } goto L_00239B64; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00239C60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 228u)));
    c.budget -= 10;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 232u)));  goto L_00239CA0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239C98u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239C98u) [[unlikely]] return; }
L_00239C98:
    st32((c.r[16].w[0] + 228u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 232u)));
    c.budget -= 2;
L_00239CA0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  goto L_00239CC0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239CB8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239CB8u) [[unlikely]] return; }
L_00239CB8:
    st32((c.r[16].w[0] + 232u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 2;
L_00239CC0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_00239CE0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239CD8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239CD8u) [[unlikely]] return; }
L_00239CD8:
    st32((c.r[16].w[0] + 152u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 2;
L_00239CE0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 176u)));  goto L_00239D00; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239CF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239CF8u) [[unlikely]] return; }
L_00239CF8:
    st32((c.r[16].w[0] + 148u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 2;
L_00239D00:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00239D20; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239D18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239D18u) [[unlikely]] return; }
L_00239D18:
    st32((c.r[16].w[0] + 176u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00239D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239D28u);  if (depth < kMaxDepth) unit_0046(c, 98u, depth + 1u); else { c.pc = 0x00238A90u; return; } if (c.pc != 0x00239D28u) [[unlikely]] return; }
L_00239D28:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 2;
L_00239D30:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 160u);  if (t) { goto L_00239D54; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239D50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239D50u) [[unlikely]] return; }
L_00239D50:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_00239D54:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00239D30u | kUnwind; return; } goto L_00239D30; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239D70u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0046(c, 360u, depth + 1u); else { c.pc = 0x0023A7C0u; return; } if (c.pc != 0x00239D70u) [[unlikely]] return; }
L_00239D70:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[19].w[0] << 4);
    c.budget -= 2;
L_00239D78:
    set32(c.r[18], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 252u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[18].w[0] + 252u);  if (t) { goto L_00239DA4; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0]), 0u);  goto L_00239DA4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239DA0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239DA0u) [[unlikely]] return; }
L_00239DA0:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_00239DA4:
    set32(c.r[4], ld32((c.r[18].w[0] + 256u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_00239DC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239DB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x00239DB8u) [[unlikely]] return; }
L_00239DB8:
    st32((c.r[18].w[0] + 256u), 0u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_00239DC0:
    c.r[3].d[0] = c.r[19].sd[0] < 54ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00239D78u | kUnwind; return; } goto L_00239D78; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00239DF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 212u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00239E50; } }
    set32(c.r[4], c.r[29].w[0] + 44u);
    set32(c.r[5], c.r[29].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239E18u); set32(c.r[6], 0u + 17u);  if (depth < kMaxDepth) unit_0012(c, 284u, depth + 1u); else { c.pc = 0x0016BDC0u; return; } if (c.pc != 0x00239E18u) [[unlikely]] return; }
L_00239E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239E20u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00239E20u) [[unlikely]] return; }
L_00239E20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 212u), c.r[2].w[0]);  goto L_00239E50; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF3000000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    c.r[7].d[0] = c.r[2].d[0] | 17ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239E4Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x00239E4Cu) [[unlikely]] return; }
L_00239E4C:
    st32((c.r[16].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 1;
L_00239E50:
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00239E60; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00239E60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00239E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239E84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 292u, depth + 1u); else { c.pc = 0x00239F90u; return; } if (c.pc != 0x00239E84u) [[unlikely]] return; }
L_00239E84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239E8Cu); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00239E8Cu) [[unlikely]] return; }
L_00239E8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 216u), c.r[2].w[0]);  goto L_00239EBC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF3000000u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] | 2ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239EB8u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x00239EB8u) [[unlikely]] return; }
L_00239EB8:
    st32((c.r[16].w[0] + 216u), c.r[2].w[0]);
    c.budget -= 1;
L_00239EBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00239F74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239ECCu); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00239ECCu) [[unlikely]] return; }
L_00239ECC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 220u), c.r[2].w[0]);  goto L_00239EFC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF3000000u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] | 2ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239EF8u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x00239EF8u) [[unlikely]] return; }
L_00239EF8:
    st32((c.r[16].w[0] + 220u), c.r[2].w[0]);
    c.budget -= 1;
L_00239EFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00239F70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239F0Cu);  if (depth < kMaxDepth) unit_0010(c, 57u, depth + 1u); else { c.pc = 0x00160990u; return; } if (c.pc != 0x00239F0Cu) [[unlikely]] return; }
L_00239F0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239F14u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00239F14u) [[unlikely]] return; }
L_00239F14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 224u), c.r[2].w[0]);  goto L_00239F44; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF3000000u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] | 2ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239F40u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x00239F40u) [[unlikely]] return; }
L_00239F40:
    st32((c.r[16].w[0] + 224u), c.r[2].w[0]);
    c.budget -= 1;
L_00239F44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00239F70; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239F58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 125u, depth + 1u); else { c.pc = 0x0015D370u; return; } if (c.pc != 0x00239F58u) [[unlikely]] return; }
L_00239F58:
    set32(c.r[5], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239F68u); set32(c.r[4], ld32((c.r[16].w[0] + 216u)));  if (depth < kMaxDepth) unit_00A8(c, 294u, depth + 1u); else { c.pc = 0x003C3580u; return; } if (c.pc != 0x00239F68u) [[unlikely]] return; }
L_00239F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00239F80; } }
L_00239F70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00239F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239F7Cu);  if (depth < kMaxDepth) unit_0046(c, 292u, depth + 1u); else { c.pc = 0x00239F90u; return; } if (c.pc != 0x00239F7Cu) [[unlikely]] return; }
L_00239F7C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00239F80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00239F90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239FACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 57u, depth + 1u); else { c.pc = 0x00160990u; return; } if (c.pc != 0x00239FACu) [[unlikely]] return; }
L_00239FAC:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 2;
L_00239FB4:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 216u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 216u);  if (t) { goto L_00239FD8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00239FD4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00239FD4u) [[unlikely]] return; }
L_00239FD4:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00239FD8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00239FB4u | kUnwind; return; } goto L_00239FB4; }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00239FF8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 294u, depth + 1u); else { c.pc = 0x003C3580u; return; } if (c.pc != 0x00239FF8u) [[unlikely]] return; }
L_00239FF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023A010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0023A040; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
L_0023A040:
    set32(c.r[5], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 152u)));  goto L_0023A064; }
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 6;
L_0023A064:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 148u)));  goto L_0023A084; }
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 6;
L_0023A084:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0023A0A4; }
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_0023A0A4:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0023A0A8:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 160u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0023A0C8; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A0C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x0023A0C4u) [[unlikely]] return; }
L_0023A0C4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0023A0C8:
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023A0A8u | kUnwind; return; } goto L_0023A0A8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023A0F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0023A120; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
L_0023A120:
    set32(c.r[5], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 152u)));  goto L_0023A144; }
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 6;
L_0023A144:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 148u)));  goto L_0023A164; }
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 6;
L_0023A164:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0023A184; }
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_0023A184:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0023A188:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 160u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0023A1A8; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A1A4u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 59u, depth + 1u); else { c.pc = 0x0022C450u; return; } if (c.pc != 0x0023A1A4u) [[unlikely]] return; }
L_0023A1A4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0023A1A8:
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023A188u | kUnwind; return; } goto L_0023A188; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023A1D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1364u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023A3B8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023A388; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 148u);  goto L_0023A214; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0023A48C; } }
L_0023A214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A21Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0023A21Cu) [[unlikely]] return; }
L_0023A21C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);  goto L_0023A254; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A230u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x0023A230u) [[unlikely]] return; }
L_0023A230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A238u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x0023A238u) [[unlikely]] return; }
L_0023A238:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A24Cu); c.r[7].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B7(c, 146u, depth + 1u); else { c.pc = 0x003FD710u; return; } if (c.pc != 0x0023A24Cu) [[unlikely]] return; }
L_0023A24C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.budget -= 2;
L_0023A254:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[5], 0u + 3u);
    c.f[13] = c.r[3].w[0];
    c.r[6].d[0] = 0ull + 0ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A27Cu); st32((c.r[17].w[0] + 204u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00B7(c, 153u, depth + 1u); else { c.pc = 0x003FD830u; return; } if (c.pc != 0x0023A27Cu) [[unlikely]] return; }
L_0023A27C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A284u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x0023A284u) [[unlikely]] return; }
L_0023A284:
    set32(c.r[5], ld32((c.r[17].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A290u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 89u, depth + 1u); else { c.pc = 0x003FCD40u; return; } if (c.pc != 0x0023A290u) [[unlikely]] return; }
L_0023A290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A298u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x0023A298u) [[unlikely]] return; }
L_0023A298:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A2A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 79u, depth + 1u); else { c.pc = 0x003FCC30u; return; } if (c.pc != 0x0023A2A4u) [[unlikely]] return; }
L_0023A2A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A2B4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x0023A2B4u) [[unlikely]] return; }
L_0023A2B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 212u)));  goto L_0023A2D0; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A2CCu); set32(c.r[6], 0u + 100u);  if (depth < kMaxDepth) unit_0043(c, 489u, depth + 1u); else { c.pc = 0x0022F5A0u; return; } if (c.pc != 0x0023A2CCu) [[unlikely]] return; }
L_0023A2CC:
    set32(c.r[4], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 1;
L_0023A2D0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0023A2F0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A2E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023A2E8u) [[unlikely]] return; }
L_0023A2E8:
    st32((c.r[17].w[0] + 212u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0023A2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A2F8u);  if (depth < kMaxDepth) unit_0046(c, 297u, depth + 1u); else { c.pc = 0x0023A010u; return; } if (c.pc != 0x0023A2F8u) [[unlikely]] return; }
L_0023A2F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A300u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 502u, depth + 1u); else { c.pc = 0x00233980u; return; } if (c.pc != 0x0023A300u) [[unlikely]] return; }
L_0023A300:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0023A318; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A314u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004C(c, 327u, depth + 1u); else { c.pc = 0x00253250u; return; } if (c.pc != 0x0023A314u) [[unlikely]] return; }
L_0023A314:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0023A318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A320u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x0023A320u) [[unlikely]] return; }
L_0023A320:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1424u)));  goto L_0023A334; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1364u), c.r[3].w[0]);  if (t) { goto L_0023A488; } }
L_0023A334:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 3u);  goto L_0023A35C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A344u);  if (depth < kMaxDepth) unit_0047(c, 146u, depth + 1u); else { c.pc = 0x0023DF30u; return; } if (c.pc != 0x0023A344u) [[unlikely]] return; }
L_0023A344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023A358; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1364u), c.r[3].w[0]);  if (t) { goto L_0023A360; } }
L_0023A358:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0023A35C:
    st32((c.r[17].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 1;
L_0023A360:
    set32(c.r[4], ld32((c.r[17].w[0] + 1364u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023A488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A378u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x0023A378u) [[unlikely]] return; }
L_0023A378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A380u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 82u, depth + 1u); else { c.pc = 0x003FCC70u; return; } if (c.pc != 0x0023A380u) [[unlikely]] return; }
L_0023A380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023A488; } }
L_0023A388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A390u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x0023A390u) [[unlikely]] return; }
L_0023A390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A398u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 86u, depth + 1u); else { c.pc = 0x003FCCD0u; return; } if (c.pc != 0x0023A398u) [[unlikely]] return; }
L_0023A398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023A488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A3A8u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x0023A3A8u) [[unlikely]] return; }
L_0023A3A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A3B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 84u, depth + 1u); else { c.pc = 0x003FCCA0u; return; } if (c.pc != 0x0023A3B0u) [[unlikely]] return; }
L_0023A3B0:
    set32(c.r[2], 0u + 3u);
    st32((c.r[17].w[0] + 1364u), c.r[2].w[0]);
    c.budget -= 2;
L_0023A3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A3C0u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x0023A3C0u) [[unlikely]] return; }
L_0023A3C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A3C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 86u, depth + 1u); else { c.pc = 0x003FCCD0u; return; } if (c.pc != 0x0023A3C8u) [[unlikely]] return; }
L_0023A3C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023A488; } }
    st32((c.r[17].w[0] + 1364u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 28u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A3E8u); st32((c.r[17].w[0] + 204u), 0u);  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x0023A3E8u) [[unlikely]] return; }
L_0023A3E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0023A424; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A3FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 88u, depth + 1u); else { c.pc = 0x002356E0u; return; } if (c.pc != 0x0023A3FCu) [[unlikely]] return; }
L_0023A3FC:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0023A420; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A420u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 485u, depth + 1u); else { c.pc = 0x0022F4F0u; return; } if (c.pc != 0x0023A420u) [[unlikely]] return; }
L_0023A420:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0023A424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A42Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x0023A42Cu) [[unlikely]] return; }
L_0023A42C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 31u);  goto L_0023A484; }
    set32(c.r[3], 0u + 18u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 1328u), c.r[3].w[0]);
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 4;
L_0023A444:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 160u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0023A470; }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A46Cu); set32(c.r[5], ld32((c.r[2].w[0] + 1176u)));  if (depth < kMaxDepth) unit_0043(c, 81u, depth + 1u); else { c.pc = 0x0022C6C0u; return; } if (c.pc != 0x0023A46Cu) [[unlikely]] return; }
L_0023A46C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0023A470:
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023A444u | kUnwind; return; } goto L_0023A444; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023A488; } }
L_0023A484:
    st32((c.r[17].w[0] + 1328u), c.r[3].w[0]);
    c.budget -= 1;
L_0023A488:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0023A48C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023A4A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 200u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0023A50C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1364u)));  goto L_0023A510; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A4CCu);  if (depth < kMaxDepth) unit_0044(c, 502u, depth + 1u); else { c.pc = 0x00233980u; return; } if (c.pc != 0x0023A4CCu) [[unlikely]] return; }
L_0023A4CC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A4D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004C(c, 327u, depth + 1u); else { c.pc = 0x00253250u; return; } if (c.pc != 0x0023A4D8u) [[unlikely]] return; }
L_0023A4D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 1132u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0023A4F4; }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_0023A504; } }
L_0023A4F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A4FCu);  if (depth < kMaxDepth) unit_0045(c, 81u, depth + 1u); else { c.pc = 0x00235640u; return; } if (c.pc != 0x0023A4FCu) [[unlikely]] return; }
L_0023A4FC:
    set32(c.r[3], 0u + 17u);
    st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);
    c.budget -= 2;
L_0023A504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0023A728; } }
L_0023A50C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1364u)));
    c.budget -= 1;
L_0023A510:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023A620; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 261u);  goto L_0023A5A4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 200u)));  goto L_0023A558; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0023A544; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023A724; } }
L_0023A544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A54Cu);  if (depth < kMaxDepth) unit_0045(c, 81u, depth + 1u); else { c.pc = 0x00235640u; return; } if (c.pc != 0x0023A54Cu) [[unlikely]] return; }
L_0023A54C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 1364u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 200u)));
    c.budget -= 3;
L_0023A558:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 208u)));  goto L_0023A574; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A568u);  if (depth < kMaxDepth) unit_00B7(c, 66u, depth + 1u); else { c.pc = 0x003FC990u; return; } if (c.pc != 0x0023A568u) [[unlikely]] return; }
L_0023A568:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023A724; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 1;
L_0023A574:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0023A590; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A584u);  if (depth < kMaxDepth) unit_00B7(c, 66u, depth + 1u); else { c.pc = 0x003FC990u; return; } if (c.pc != 0x0023A584u) [[unlikely]] return; }
L_0023A584:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023A724; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0023A590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A598u);  if (depth < kMaxDepth) unit_0046(c, 377u, depth + 1u); else { c.pc = 0x0023AA70u; return; } if (c.pc != 0x0023A598u) [[unlikely]] return; }
L_0023A598:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 1364u), c.r[2].w[0]);
    set32(c.r[4], 0u + 261u);
    c.budget -= 3;
L_0023A5A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A5ACu);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0023A5ACu) [[unlikely]] return; }
L_0023A5AC:
    st32((c.r[16].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A5B8u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0023A5B8u) [[unlikely]] return; }
L_0023A5B8:
    st32((c.r[16].w[0] + 192u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 188u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023A724; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023A724; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 200u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 208u)));  goto L_0023A604; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A5FCu);  if (depth < kMaxDepth) unit_00B7(c, 64u, depth + 1u); else { c.pc = 0x003FC940u; return; } if (c.pc != 0x0023A5FCu) [[unlikely]] return; }
L_0023A5FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0023A618; } }
L_0023A604:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023A614; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A614u);  if (depth < kMaxDepth) unit_00B7(c, 64u, depth + 1u); else { c.pc = 0x003FC940u; return; } if (c.pc != 0x0023A614u) [[unlikely]] return; }
L_0023A614:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0023A618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1364u), c.r[3].w[0]);  if (t) { goto L_0023A724; } }
L_0023A620:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 208u)));  goto L_0023A63C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A630u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 66u, depth + 1u); else { c.pc = 0x003FC990u; return; } if (c.pc != 0x0023A630u) [[unlikely]] return; }
L_0023A630:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023A724; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 1;
L_0023A63C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 288u);  goto L_0023A658; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A64Cu);  if (depth < kMaxDepth) unit_00B7(c, 66u, depth + 1u); else { c.pc = 0x003FC990u; return; } if (c.pc != 0x0023A64Cu) [[unlikely]] return; }
L_0023A64C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023A724; } }
    set32(c.r[4], 0u + 288u);
    c.budget -= 1;
L_0023A658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A660u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0023A660u) [[unlikely]] return; }
L_0023A660:
    set32(c.r[3], ld32((c.r[16].w[0] + 1352u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[2], ld32((c.r[16].w[0] + 200u)));  goto L_0023A694; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_0023A68C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023A724; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0023A68C:
    st32((c.r[16].w[0] + 1352u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 200u)));
    c.budget -= 2;
L_0023A694:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 200u)));  goto L_0023A6B0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A6ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 273u, depth + 1u); else { c.pc = 0x00237100u; return; } if (c.pc != 0x0023A6ACu) [[unlikely]] return; }
L_0023A6AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 200u)));
    c.budget -= 1;
L_0023A6B0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 208u)));  goto L_0023A6D0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A6C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023A6C8u) [[unlikely]] return; }
L_0023A6C8:
    st32((c.r[16].w[0] + 200u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 2;
L_0023A6D0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0023A6F0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A6E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023A6E8u) [[unlikely]] return; }
L_0023A6E8:
    st32((c.r[16].w[0] + 208u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0023A6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A6F8u); st32((c.r[16].w[0] + 1364u), 0u);  if (depth < kMaxDepth) unit_0044(c, 502u, depth + 1u); else { c.pc = 0x00233980u; return; } if (c.pc != 0x0023A6F8u) [[unlikely]] return; }
L_0023A6F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A704u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004C(c, 327u, depth + 1u); else { c.pc = 0x00253250u; return; } if (c.pc != 0x0023A704u) [[unlikely]] return; }
L_0023A704:
    set32(c.r[4], ld32((c.r[16].w[0] + 1132u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 17u);  goto L_0023A720; }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);  if (t) { goto L_0023A724; } }
L_0023A720:
    st32((c.r[16].w[0] + 1328u), c.r[3].w[0]);
    c.budget -= 1;
L_0023A724:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0023A728:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023A740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 7u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A758u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x0023A758u) [[unlikely]] return; }
L_0023A758:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0023A7B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A768u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 502u, depth + 1u); else { c.pc = 0x00233980u; return; } if (c.pc != 0x0023A768u) [[unlikely]] return; }
L_0023A768:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023A7B0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1132u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0023A7B0; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0023A798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023A7B0; } }
L_0023A798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A7A0u);  if (depth < kMaxDepth) unit_004C(c, 276u, depth + 1u); else { c.pc = 0x00252B30u; return; } if (c.pc != 0x0023A7A0u) [[unlikely]] return; }
L_0023A7A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 1132u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A7B0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 344u, depth + 1u); else { c.pc = 0x0024F1D0u; return; } if (c.pc != 0x0023A7B0u) [[unlikely]] return; }
L_0023A7B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0023A7B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023A7C0:
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { set32(c.r[3], c.r[5].w[0] << 1);  goto L_0023A808; }
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 2;
L_0023A7D0:
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 1168u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[6].w[0] + 1172u), 0u);
    st32((c.r[6].w[0] + 1176u), 0u);
    st32((c.r[6].w[0] + 1180u), 0u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[6].w[0] + 1184u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023A7D0u | kUnwind; return; } goto L_0023A7D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023A82C; } }
L_0023A808:
    set32(c.r[6], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 1168u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 1172u), 0u);
    st32((c.r[3].w[0] + 1176u), 0u);
    st32((c.r[3].w[0] + 1180u), 0u);
    st32((c.r[3].w[0] + 1184u), 0u);
    c.budget -= 9;
L_0023A82C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023A840:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[20] = c.r[2].w[0];
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 11;
L_0023A86C:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 160u);  if (t) { goto L_0023A92C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A884u);  if (depth < kMaxDepth) unit_0043(c, 72u, depth + 1u); else { c.pc = 0x0022C600u; return; } if (c.pc != 0x0023A884u) [[unlikely]] return; }
L_0023A884:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0023A930; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A89Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0043(c, 99u, depth + 1u); else { c.pc = 0x0022C830u; return; } if (c.pc != 0x0023A89Cu) [[unlikely]] return; }
L_0023A89C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A8B0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00234360u; return; } if (c.pc != 0x0023A8B0u) [[unlikely]] return; }
L_0023A8B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023A92C; } }
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A8CCu); st32((c.r[29].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x0023A8CCu) [[unlikely]] return; }
L_0023A8CC:
    c.f[4] = ld32((c.r[28].w[0] - 32292u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = ld32((c.r[28].w[0] - 32288u));
    c.f[3] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[2] = ld32((c.r[17].w[0] + 1412u));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0023A90C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_0023A91C; } }
L_0023A90C:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023A91C; } }
    c.f[0] = c.f[4];
    c.budget -= 1;
L_0023A91C:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023A92C; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0023A92C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0023A930:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023A86Cu | kUnwind; return; } goto L_0023A86C; }
    c.f[0] = c.f[20];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0023A960:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A988u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00235690u; return; } if (c.pc != 0x0023A988u) [[unlikely]] return; }
L_0023A988:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0023A9A4; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A99Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 308u, depth + 1u); else { c.pc = 0x002375A0u; return; } if (c.pc != 0x0023A99Cu) [[unlikely]] return; }
L_0023A99C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0023AA48; } }
L_0023A9A4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0023AA3C; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A9BCu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0023A9BCu) [[unlikely]] return; }
L_0023A9BC:
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A9E4u); st32((c.r[29].w[0] + 100u), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00234360u; return; } if (c.pc != 0x0023A9E4u) [[unlikely]] return; }
L_0023A9E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0023AA48; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023A9FCu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0023A9FCu) [[unlikely]] return; }
L_0023A9FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AA08u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0023AA08u) [[unlikely]] return; }
L_0023AA08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AA1Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0023AA1Cu) [[unlikely]] return; }
L_0023AA1C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_0023AA30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0023AA48; } }
L_0023AA30:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023AA48; } }
L_0023AA3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AA44u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 308u, depth + 1u); else { c.pc = 0x002375A0u; return; } if (c.pc != 0x0023AA44u) [[unlikely]] return; }
L_0023AA44:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0023AA48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0023AA70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AA88u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0023AA88u) [[unlikely]] return; }
L_0023AA88:
    st32((c.r[16].w[0] + 188u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AAA8u); c.r[5].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002B(c, 407u, depth + 1u); else { c.pc = 0x001CFA40u; return; } if (c.pc != 0x0023AAA8u) [[unlikely]] return; }
L_0023AAA8:
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AAB8u); c.r[5].d[0] = c.r[2].d[0] | 4101ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x0023AAB8u) [[unlikely]] return; }
L_0023AAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AAC0u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0023AAC0u) [[unlikely]] return; }
L_0023AAC0:
    st32((c.r[16].w[0] + 192u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AAD8u); c.r[5].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x0023AAD8u) [[unlikely]] return; }
L_0023AAD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023AAF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AB10u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0024(c, 330u, depth + 1u); else { c.pc = 0x001B25F0u; return; } if (c.pc != 0x0023AB10u) [[unlikely]] return; }
L_0023AB10:
    set32(c.r[3], ld32((c.r[17].w[0] + 1380u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0023AB28; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1380u), c.r[3].w[0]);  if (t) { goto L_0023ACA8; } }
L_0023AB28:
    set32(c.r[5], ld32((c.r[17].w[0] + 1328u)));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 14u);  goto L_0023AB84; }
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0023AB80; } }
    set32(c.r[3], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0023AB80; } }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0023AB80; } }
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0023AB80; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1152u)));
    c.budget -= 3;
    if (c.r[4].sd[0] <= 0) { set32(c.r[3], 0u + 6u);  goto L_0023ABFC; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023ABF8; } }
L_0023AB80:
    set32(c.r[3], 0u + 14u);
    c.budget -= 1;
L_0023AB84:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[4], 0u + 1u);  goto L_0023ABD0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AB98u); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_0045(c, 274u, depth + 1u); else { c.pc = 0x00237140u; return; } if (c.pc != 0x0023AB98u) [[unlikely]] return; }
L_0023AB98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023ABCC; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[4].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0023ACAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023ABB4u);  if (depth < kMaxDepth) unit_0024(c, 329u, depth + 1u); else { c.pc = 0x001B2590u; return; } if (c.pc != 0x0023ABB4u) [[unlikely]] return; }
L_0023ABB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023ABC4u); set32(c.r[5], c.r[5].w[0] - 26247u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0023ABC4u) [[unlikely]] return; }
L_0023ABC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023ACA8; } }
L_0023ABCC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0023ABD0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[4].d[0];  if (t) { goto L_0023ACA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023ABE0u);  if (depth < kMaxDepth) unit_0024(c, 329u, depth + 1u); else { c.pc = 0x001B2590u; return; } if (c.pc != 0x0023ABE0u) [[unlikely]] return; }
L_0023ABE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023ABF0u); set32(c.r[5], c.r[5].w[0] - 26220u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0023ABF0u) [[unlikely]] return; }
L_0023ABF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023ACA8; } }
L_0023ABF8:
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_0023ABFC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], 0u + 2u);  goto L_0023AC88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AC0Cu); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0023AC0Cu) [[unlikely]] return; }
L_0023AC0C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AC18u); set32(c.r[4], 0u + 4099u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0023AC18u) [[unlikely]] return; }
L_0023AC18:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0023AC30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AC28u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 221u, depth + 1u); else { c.pc = 0x00225F70u; return; } if (c.pc != 0x0023AC28u) [[unlikely]] return; }
L_0023AC28:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 1u);  goto L_0023AC5C; }
L_0023AC30:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0023AC48; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023AC58; } }
L_0023AC48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AC50u);  if (depth < kMaxDepth) unit_00BD(c, 363u, depth + 1u); else { c.pc = 0x004172F0u; return; } if (c.pc != 0x0023AC50u) [[unlikely]] return; }
L_0023AC50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023AC84; } }
L_0023AC58:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0023AC5C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[4].d[0];  if (t) { goto L_0023ACA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AC6Cu);  if (depth < kMaxDepth) unit_0024(c, 329u, depth + 1u); else { c.pc = 0x001B2590u; return; } if (c.pc != 0x0023AC6Cu) [[unlikely]] return; }
L_0023AC6C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AC7Cu); set32(c.r[5], c.r[5].w[0] - 26220u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0023AC7Cu) [[unlikely]] return; }
L_0023AC7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023ACA8; } }
L_0023AC84:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_0023AC88:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[4].d[0];  if (t) { goto L_0023ACA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AC98u);  if (depth < kMaxDepth) unit_0024(c, 329u, depth + 1u); else { c.pc = 0x001B2590u; return; } if (c.pc != 0x0023AC98u) [[unlikely]] return; }
L_0023AC98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023ACA8u); set32(c.r[5], c.r[5].w[0] - 26247u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0023ACA8u) [[unlikely]] return; }
L_0023ACA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0023ACAC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0023ACD0:
    c.budget -= 2;
    { set32(c.r[4], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00164070u | kUnwind; return; } [[clang::musttail]] return unit_0011(c, 3u, depth); }
L_0023ACE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AD0Cu); set32(c.r[4], ld32((c.r[4].w[0] + 180u)));  if (depth < kMaxDepth) unit_004F(c, 209u, depth + 1u); else { c.pc = 0x0025E210u; return; } if (c.pc != 0x0023AD0Cu) [[unlikely]] return; }
L_0023AD0C:
    set32(c.r[17], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 232u)));  goto L_0023AF00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AD20u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0023AD20u) [[unlikely]] return; }
L_0023AD20:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[21].w[0] + 232u), c.r[16].w[0]);  goto L_0023AD50; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AD38u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0023AD38u) [[unlikely]] return; }
L_0023AD38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AD48u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 130u, depth + 1u); else { c.pc = 0x0015D3D0u; return; } if (c.pc != 0x0023AD48u) [[unlikely]] return; }
L_0023AD48:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[21].w[0] + 232u), c.r[16].w[0]);
    c.budget -= 2;
L_0023AD50:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0023AEFC; } }
    goto L_0023AD58;
L_0023AD54:
    c.budget -= 1;
L_0023AD58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AD60u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0023AD60u) [[unlikely]] return; }
L_0023AD60:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[21].w[0] + 228u), c.r[16].w[0]);  goto L_0023AD90; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AD78u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0023AD78u) [[unlikely]] return; }
L_0023AD78:
    set32(c.r[6], ld32((c.r[21].w[0] + 232u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AD88u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 380u, depth + 1u); else { c.pc = 0x0016FE10u; return; } if (c.pc != 0x0023AD88u) [[unlikely]] return; }
L_0023AD88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[21].w[0] + 228u), c.r[16].w[0]);
    c.budget -= 2;
L_0023AD90:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0023AEFC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023ADA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x0023ADA4u) [[unlikely]] return; }
L_0023ADA4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023ADB0u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0023ADB0u) [[unlikely]] return; }
L_0023ADB0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0023ADCC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023ADC8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 178u, depth + 1u); else { c.pc = 0x00209830u; return; } if (c.pc != 0x0023ADC8u) [[unlikely]] return; }
L_0023ADC8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0023ADCC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0023AEFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0023AECC; } }
L_0023ADDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023ADE4u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0023ADE4u) [[unlikely]] return; }
L_0023ADE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] << 4);  goto L_0023AE00; }
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023ADFCu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 216u, depth + 1u); else { c.pc = 0x0020DFF0u; return; } if (c.pc != 0x0023ADFCu) [[unlikely]] return; }
L_0023ADFC:
    set32(c.r[3], c.r[18].w[0] << 4);
    c.budget -= 1;
L_0023AE00:
    set32(c.r[16], c.r[21].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 252u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[16].w[0] + 252u);  if (t) { goto L_0023AEFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AE18u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 278u, depth + 1u); else { c.pc = 0x0020EF80u; return; } if (c.pc != 0x0023AE18u) [[unlikely]] return; }
L_0023AE18:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AE28u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x0023AE28u) [[unlikely]] return; }
L_0023AE28:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AE38u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 100u, depth + 1u); else { c.pc = 0x00211210u; return; } if (c.pc != 0x0023AE38u) [[unlikely]] return; }
L_0023AE38:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 264u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0023AE5C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0023AE5C:
    st32((c.r[16].w[0] + 260u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AE6Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 185u, depth + 1u); else { c.pc = 0x002099C0u; return; } if (c.pc != 0x0023AE6Cu) [[unlikely]] return; }
L_0023AE6C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AE78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 151u, depth + 1u); else { c.pc = 0x00181DA0u; return; } if (c.pc != 0x0023AE78u) [[unlikely]] return; }
L_0023AE78:
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AE88u); set32(c.r[16], c.r[16].w[0] + 256u);  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x0023AE88u) [[unlikely]] return; }
L_0023AE88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0023AEFC; } }
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 13u);  if (t) { goto L_0023AEB8; } }
L_0023AE9C:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0023AEB8; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0023AEB4; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_0023AEB4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0023AEB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023AE9Cu | kUnwind; return; } goto L_0023AE9C; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0023AECC:
    c.r[2].d[0] = c.r[18].sd[0] < 54ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023ADDCu | kUnwind; return; } goto L_0023ADDC; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 180u)));  goto L_0023AEEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AEE8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0023AEE8u) [[unlikely]] return; }
L_0023AEE8:
    set32(c.r[4], ld32((c.r[21].w[0] + 180u)));
    c.budget -= 1;
L_0023AEEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AEF4u);  if (depth < kMaxDepth) unit_004F(c, 213u, depth + 1u); else { c.pc = 0x0025E310u; return; } if (c.pc != 0x0023AEF4u) [[unlikely]] return; }
L_0023AEF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0023AF70; } }
L_0023AEFC:
    set32(c.r[4], ld32((c.r[21].w[0] + 232u)));
    c.budget -= 1;
L_0023AF00:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 228u)));  goto L_0023AF20; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AF18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023AF18u) [[unlikely]] return; }
L_0023AF18:
    st32((c.r[21].w[0] + 232u), 0u);
    set32(c.r[4], ld32((c.r[21].w[0] + 228u)));
    c.budget -= 2;
L_0023AF20:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023AF3C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AF38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023AF38u) [[unlikely]] return; }
L_0023AF38:
    st32((c.r[21].w[0] + 228u), 0u);
    c.budget -= 1;
L_0023AF3C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0023AF4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AF4Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0023AF4Cu) [[unlikely]] return; }
L_0023AF4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AF5Cu); set32(c.r[5], c.r[5].w[0] - 26193u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0023AF5Cu) [[unlikely]] return; }
L_0023AF5C:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[21].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_0023AF70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0023AFA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1372u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0023AFCC; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AFC4u); set32(c.r[5], ld32((c.r[16].w[0] + 1120u)));  if (depth < kMaxDepth) unit_004C(c, 4u, depth + 1u); else { c.pc = 0x00250160u; return; } if (c.pc != 0x0023AFC4u) [[unlikely]] return; }
L_0023AFC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_0023AFDC; } }
L_0023AFCC:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AFD8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 4u, depth + 1u); else { c.pc = 0x00250160u; return; } if (c.pc != 0x0023AFD8u) [[unlikely]] return; }
L_0023AFD8:
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 1;
L_0023AFDC:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0023AFF8; }
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023AFF4u); set32(c.r[4], ld32((c.r[2].w[0] + 256u)));  if (depth < kMaxDepth) unit_0040(c, 395u, depth + 1u); else { c.pc = 0x002239B0u; return; } if (c.pc != 0x0023AFF4u) [[unlikely]] return; }
L_0023AFF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0023AFF8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023B010:
    set32(c.r[2], 0u + 100u);
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ 50ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0023B030:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 3;
L_0023B03C:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0] + 1388u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023B03Cu | kUnwind; return; } goto L_0023B03C; } }
    set32(c.r[5], 0u + 501u);
    c.budget -= 3;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00235D20u | kUnwind; return; } [[clang::musttail]] return unit_0045(c, 137u, depth); }
L_0023B070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 4);
    c.budget -= 7;
L_0023B08C:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 252u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0023B0A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B0A4u);  if (depth < kMaxDepth) unit_003B(c, 278u, depth + 1u); else { c.pc = 0x0020EF80u; return; } if (c.pc != 0x0023B0A4u) [[unlikely]] return; }
L_0023B0A4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0023B0A8:
    c.r[3].d[0] = c.r[16].sd[0] < 54ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023B08Cu | kUnwind; return; } goto L_0023B08C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023B0D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B0F0u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0023B0F0u) [[unlikely]] return; }
L_0023B0F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_0023B108; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B104u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 248u, depth + 1u); else { c.pc = 0x00166140u; return; } if (c.pc != 0x0023B104u) [[unlikely]] return; }
L_0023B104:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0023B108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B110u); set32(c.r[4], 0u + 352u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0023B110u) [[unlikely]] return; }
L_0023B110:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  goto L_0023B128; }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B124u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 99u, depth + 1u); else { c.pc = 0x00158890u; return; } if (c.pc != 0x0023B124u) [[unlikely]] return; }
L_0023B124:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_0023B128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B130u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 256u, depth + 1u); else { c.pc = 0x0016EE80u; return; } if (c.pc != 0x0023B130u) [[unlikely]] return; }
L_0023B130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B138u); c.f[12] = ld32((c.r[28].w[0] - 32268u));  if (depth < kMaxDepth) unit_0013(c, 260u, depth + 1u); else { c.pc = 0x0016EEC0u; return; } if (c.pc != 0x0023B138u) [[unlikely]] return; }
L_0023B138:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023B150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0023B1C4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_0023B190; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B188u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023B188u) [[unlikely]] return; }
L_0023B188:
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_0023B190:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0023B1B0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B1A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023B1A8u) [[unlikely]] return; }
L_0023B1A8:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 2;
L_0023B1B0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0023B1C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B1C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0023B1C4u) [[unlikely]] return; }
L_0023B1C4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0023B1C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023B1E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B1F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x0023B1F4u) [[unlikely]] return; }
L_0023B1F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B1FCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x0023B1FCu) [[unlikely]] return; }
L_0023B1FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B204u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x0023B204u) [[unlikely]] return; }
L_0023B204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B20Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0023B20Cu) [[unlikely]] return; }
L_0023B20C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 7920u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 7928u));
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 7932u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 32u), c.f[2]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B248u); st32((c.r[29].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0023B248u) [[unlikely]] return; }
L_0023B248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B250u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_000E(c, 213u, depth + 1u); else { c.pc = 0x00159910u; return; } if (c.pc != 0x0023B250u) [[unlikely]] return; }
L_0023B250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B258u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x0023B258u) [[unlikely]] return; }
L_0023B258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B260u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x0023B260u) [[unlikely]] return; }
L_0023B260:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023B270:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0023B294; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023B290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0023B294; } }
L_0023B290:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023B294:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023B2A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[2] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 72u), 0u);
    set32(c.r[7], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 76u), 0u);
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 40u), c.f[4]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[4]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B314u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 263u, depth + 1u); else { c.pc = 0x0016EEF0u; return; } if (c.pc != 0x0023B314u) [[unlikely]] return; }
L_0023B314:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_0023B328; }
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 3;
L_0023B328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0023B340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0023B364; }
    set32(c.r[4], c.r[3].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B360u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0018B0B0u; return; } if (c.pc != 0x0023B360u) [[unlikely]] return; }
L_0023B360:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0023B364:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023B370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B38Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0023B38Cu) [[unlikely]] return; }
L_0023B38C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);
    set32(c.r[3], c.r[3].w[0] + 19248u);
    c.r[2].d[0] = c.r[2].d[0] | 19777ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[6], 0u + 6u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 52u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    st32((c.r[16].w[0] + 56u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 68u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 120u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 136u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 144u), 0u);
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 152u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 108u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 43;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023B440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0023B51C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 19248u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B474u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x0023B474u) [[unlikely]] return; }
L_0023B474:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B480u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x0023B480u) [[unlikely]] return; }
L_0023B480:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 68u)));  goto L_0023B4AC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), 0u);  goto L_0023B4A8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B4A4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023B4A4u) [[unlikely]] return; }
L_0023B4A4:
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 1;
L_0023B4A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 1;
L_0023B4AC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  goto L_0023B4D4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 68u), 0u);  goto L_0023B4D0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B4CCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023B4CCu) [[unlikely]] return; }
L_0023B4CC:
    st32((c.r[17].w[0] + 68u), 0u);
    c.budget -= 1;
L_0023B4D0:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_0023B4D4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0023B4FC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 56u), 0u);  goto L_0023B4F8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B4F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023B4F4u) [[unlikely]] return; }
L_0023B4F4:
    st32((c.r[17].w[0] + 56u), 0u);
    c.budget -= 1;
L_0023B4F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0023B4FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B504u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0023B504u) [[unlikely]] return; }
L_0023B504:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0023B520; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B51Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0023B51Cu) [[unlikely]] return; }
L_0023B51C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0023B520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023B540:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 136u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0023B98C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 152u)));  goto L_0023B6FC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  goto L_0023B6D4; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], 0u + 336u);  goto L_0023B59C; }
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0023B98C; } }
L_0023B59C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B5A4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0023B5A4u) [[unlikely]] return; }
L_0023B5A4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], 0u + 264u);  goto L_0023B5DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B5B8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x0023B5B8u) [[unlikely]] return; }
L_0023B5B8:
    set32(c.r[17], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B5C4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x0023B5C4u) [[unlikely]] return; }
L_0023B5C4:
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B5D4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 208u, depth + 1u); else { c.pc = 0x00209C40u; return; } if (c.pc != 0x0023B5D4u) [[unlikely]] return; }
L_0023B5D4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 264u);
    c.budget -= 2;
L_0023B5DC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B5E8u); st32((c.r[16].w[0] + 56u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x0023B5E8u) [[unlikely]] return; }
L_0023B5E8:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], 0u + 264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B5F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x0023B5F8u) [[unlikely]] return; }
L_0023B5F8:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023B614; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 44u);  goto L_0023B630; }
L_0023B614:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B624u); set32(c.r[5], c.r[5].w[0] - 26128u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0023B624u) [[unlikely]] return; }
L_0023B624:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_0023B98C; } }
L_0023B630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B638u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0023B638u) [[unlikely]] return; }
L_0023B638:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  goto L_0023B654; }
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B650u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0018(c, 123u, depth + 1u); else { c.pc = 0x001810E0u; return; } if (c.pc != 0x0023B650u) [[unlikely]] return; }
L_0023B650:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_0023B654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B65Cu); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0023B65Cu) [[unlikely]] return; }
L_0023B65C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 68u), c.r[4].w[0]);  goto L_0023B67C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B674u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0018(c, 123u, depth + 1u); else { c.pc = 0x001810E0u; return; } if (c.pc != 0x0023B674u) [[unlikely]] return; }
L_0023B674:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    c.budget -= 2;
L_0023B67C:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023B6A0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023B6A0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  goto L_0023B6BC; }
L_0023B6A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B6B0u); set32(c.r[5], c.r[5].w[0] - 26128u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0023B6B0u) [[unlikely]] return; }
L_0023B6B0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_0023B98C; } }
L_0023B6BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_0023B98C; } }
L_0023B6D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B6DCu);  if (depth < kMaxDepth) unit_0044(c, 498u, depth + 1u); else { c.pc = 0x00233940u; return; } if (c.pc != 0x0023B6DCu) [[unlikely]] return; }
L_0023B6DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0023B990; }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B6F4u); st32((c.r[16].w[0] + 112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0046(c, 520u, depth + 1u); else { c.pc = 0x0023BAE0u; return; } if (c.pc != 0x0023B6F4u) [[unlikely]] return; }
L_0023B6F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023B98C; } }
L_0023B6FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 120u)));  goto L_0023B750; }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    st32((c.r[2].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    st32((c.r[2].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    st32((c.r[2].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    st32((c.r[2].w[0] + 60u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    st32((c.r[2].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    st32((c.r[2].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    st32((c.r[2].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 124u), c.f[0]);  if (t) { goto L_0023B944; } }
L_0023B750:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  goto L_0023B77C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B760u);  if (depth < kMaxDepth) unit_0046(c, 545u, depth + 1u); else { c.pc = 0x0023BD90u; return; } if (c.pc != 0x0023B760u) [[unlikely]] return; }
L_0023B760:
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), c.f[0]);  if (t) { goto L_0023B944; } }
L_0023B77C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B784u);  if (depth < kMaxDepth) unit_0045(c, 279u, depth + 1u); else { c.pc = 0x00237210u; return; } if (c.pc != 0x0023B784u) [[unlikely]] return; }
L_0023B784:
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B794u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0045(c, 10u, depth + 1u); else { c.pc = 0x00234100u; return; } if (c.pc != 0x0023B794u) [[unlikely]] return; }
L_0023B794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B79Cu); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 30u, depth + 1u); else { c.pc = 0x00234350u; return; } if (c.pc != 0x0023B79Cu) [[unlikely]] return; }
L_0023B79C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 144u), 0u);  goto L_0023B838; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 7936u));
    c.f[2] = ld32((c.r[2].w[0] + 7940u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 7944u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 7948u));
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 92u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 15;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_0023B810; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B7F0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x0023B7F0u) [[unlikely]] return; }
L_0023B7F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  goto L_0023B83C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 144u), 0u);  if (t) { goto L_0023B838; } }
L_0023B810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B818u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x0023B818u) [[unlikely]] return; }
L_0023B818:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023B838; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 2;
L_0023B838:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_0023B83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B844u);  if (depth < kMaxDepth) unit_0045(c, 30u, depth + 1u); else { c.pc = 0x00234350u; return; } if (c.pc != 0x0023B844u) [[unlikely]] return; }
L_0023B844:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), 0u);  goto L_0023B8E0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 7952u));
    c.f[2] = ld32((c.r[2].w[0] + 7956u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 7960u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 7964u));
    st32((c.r[29].w[0] + 68u), c.f[2]);
    st32((c.r[29].w[0] + 72u), c.f[1]);
    st32((c.r[29].w[0] + 76u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 15;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_0023B8B8; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B898u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x0023B898u) [[unlikely]] return; }
L_0023B898:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[5], ld32((c.r[16].w[0] + 124u)));  goto L_0023B8E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 148u), 0u);  if (t) { goto L_0023B8E0; } }
L_0023B8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B8C0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x0023B8C0u) [[unlikely]] return; }
L_0023B8C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023B8E0; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 2;
L_0023B8E0:
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 1;
L_0023B8E4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 144u)));  goto L_0023B8FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B8F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 549u, depth + 1u); else { c.pc = 0x0023BE80u; return; } if (c.pc != 0x0023B8F4u) [[unlikely]] return; }
L_0023B8F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 124u), 0u);  if (t) { goto L_0023B944; } }
L_0023B8FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 148u)));  goto L_0023B91C; }
    set32(c.r[5], 0u + 1002u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B914u); st32((c.r[16].w[0] + 124u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0046(c, 549u, depth + 1u); else { c.pc = 0x0023BE80u; return; } if (c.pc != 0x0023B914u) [[unlikely]] return; }
L_0023B914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 124u), 0u);  if (t) { goto L_0023B944; } }
L_0023B91C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0023B93C; }
    set32(c.r[5], 0u + 1003u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B934u); st32((c.r[16].w[0] + 124u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0046(c, 549u, depth + 1u); else { c.pc = 0x0023BE80u; return; } if (c.pc != 0x0023B934u) [[unlikely]] return; }
L_0023B934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 124u), 0u);  if (t) { goto L_0023B944; } }
L_0023B93C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B944u);  if (depth < kMaxDepth) unit_0046(c, 530u, depth + 1u); else { c.pc = 0x0023BC30u; return; } if (c.pc != 0x0023B944u) [[unlikely]] return; }
L_0023B944:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B950u); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_003A(c, 259u, depth + 1u); else { c.pc = 0x0020A630u; return; } if (c.pc != 0x0023B950u) [[unlikely]] return; }
L_0023B950:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B95Cu); set32(c.r[5], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_003A(c, 260u, depth + 1u); else { c.pc = 0x0020A6C0u; return; } if (c.pc != 0x0023B95Cu) [[unlikely]] return; }
L_0023B95C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B964u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_003A(c, 212u, depth + 1u); else { c.pc = 0x00209EC0u; return; } if (c.pc != 0x0023B964u) [[unlikely]] return; }
L_0023B964:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B974u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x0023B974u) [[unlikely]] return; }
L_0023B974:
    st32((c.r[2].w[0] + 36u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B988u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x0023B988u) [[unlikely]] return; }
L_0023B988:
    st32((c.r[2].w[0] + 40u), c.r[16].w[0]);
    c.budget -= 1;
L_0023B98C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0023B990:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0023B9B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 136u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0023B9DC; }
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023B9D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023B9D8u);  if (depth < kMaxDepth) unit_003A(c, 222u, depth + 1u); else { c.pc = 0x0020A030u; return; } if (c.pc != 0x0023B9D8u) [[unlikely]] return; }
L_0023B9D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0023B9DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023B9F0:
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 112u), c.r[3].w[0]);  c.pc = t; return; }
L_0023BA00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 136u), c.r[5].w[0]);  c.pc = t; return; }
L_0023BA10:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[5], c.r[2].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0018EA30u | kUnwind; return; } [[clang::musttail]] return unit_001B(c, 149u, depth); }
L_0023BA20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BA40u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 530u, depth + 1u); else { c.pc = 0x0023BC30u; return; } if (c.pc != 0x0023BA40u) [[unlikely]] return; }
L_0023BA40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BA4Cu); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0023BA4Cu) [[unlikely]] return; }
L_0023BA4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023BA60:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[5], c.r[2].w[0] + 96u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0018EA30u | kUnwind; return; } [[clang::musttail]] return unit_001B(c, 149u, depth); }
L_0023BA70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 156u)));  c.pc = t; return; }
L_0023BA80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BAA0u); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0023BAA0u) [[unlikely]] return; }
L_0023BAA0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BAACu); set32(c.r[4], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x0023BAACu) [[unlikely]] return; }
L_0023BAAC:
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 152u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023BAD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 152u), 0u);  c.pc = t; return; }
L_0023BAE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0023BB0C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BB0Cu); st32((c.r[16].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0046(c, 530u, depth + 1u); else { c.pc = 0x0023BC30u; return; } if (c.pc != 0x0023BB0Cu) [[unlikely]] return; }
L_0023BB0C:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BB18u); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_003A(c, 259u, depth + 1u); else { c.pc = 0x0020A630u; return; } if (c.pc != 0x0023BB18u) [[unlikely]] return; }
L_0023BB18:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    st32((c.r[2].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    st32((c.r[2].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    st32((c.r[2].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    st32((c.r[2].w[0] + 60u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BB48u); set32(c.r[5], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_003A(c, 260u, depth + 1u); else { c.pc = 0x0020A6C0u; return; } if (c.pc != 0x0023BB48u) [[unlikely]] return; }
L_0023BB48:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    st32((c.r[2].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    st32((c.r[2].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    st32((c.r[2].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    st32((c.r[2].w[0] + 124u), c.f[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BB78u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x0023BB78u) [[unlikely]] return; }
L_0023BB78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 1u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BB9Cu); set32(c.r[17], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x0023BB9Cu) [[unlikely]] return; }
L_0023BB9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 168u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BBBCu); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_003A(c, 212u, depth + 1u); else { c.pc = 0x00209EC0u; return; } if (c.pc != 0x0023BBBCu) [[unlikely]] return; }
L_0023BBBC:
    set32(c.r[17], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BBC8u); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x0023BBC8u) [[unlikely]] return; }
L_0023BBC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 10u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BBECu); set32(c.r[17], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x0023BBECu) [[unlikely]] return; }
L_0023BBEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BC10u); st32((c.r[17].w[0] + 168u), c.f[0]);  if (depth < kMaxDepth) unit_0046(c, 519u, depth + 1u); else { c.pc = 0x0023BAD0u; return; } if (c.pc != 0x0023BC10u) [[unlikely]] return; }
L_0023BC10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023BC30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0023BD7C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BC5Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0045(c, 10u, depth + 1u); else { c.pc = 0x00234100u; return; } if (c.pc != 0x0023BC5Cu) [[unlikely]] return; }
L_0023BC5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 84u));  goto L_0023BCFC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 26160u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00238000u < 16384u) { entry = entries_0046[(t - 0x00238000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0023BC88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BC94u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 38u, depth + 1u); else { c.pc = 0x0023C7F0u; return; } if (c.pc != 0x0023BC94u) [[unlikely]] return; }
L_0023BC94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023BCF8; } }
L_0023BC9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BCA8u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 40u, depth + 1u); else { c.pc = 0x0023CAF0u; return; } if (c.pc != 0x0023BCA8u) [[unlikely]] return; }
L_0023BCA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023BCF8; } }
L_0023BCB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BCBCu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 42u, depth + 1u); else { c.pc = 0x0023CE10u; return; } if (c.pc != 0x0023BCBCu) [[unlikely]] return; }
L_0023BCBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023BCF8; } }
L_0023BCC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BCD0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 44u, depth + 1u); else { c.pc = 0x0023CF60u; return; } if (c.pc != 0x0023BCD0u) [[unlikely]] return; }
L_0023BCD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023BCF8; } }
L_0023BCD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BCE4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 46u, depth + 1u); else { c.pc = 0x0023D2B0u; return; } if (c.pc != 0x0023BCE4u) [[unlikely]] return; }
L_0023BCE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023BCF8; } }
L_0023BCEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BCF8u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 47u, depth + 1u); else { c.pc = 0x0023D370u; return; } if (c.pc != 0x0023BCF8u) [[unlikely]] return; }
L_0023BCF8:
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    c.budget -= 1;
L_0023BCFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[16].w[0] + 140u)));  goto L_0023BD1C; }
    st32((c.r[16].w[0] + 84u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 2;
L_0023BD1C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023BD78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    st32((c.r[2].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    st32((c.r[2].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    st32((c.r[2].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    st32((c.r[2].w[0] + 60u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    st32((c.r[2].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    st32((c.r[2].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    st32((c.r[2].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    st32((c.r[2].w[0] + 124u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BD74u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 81u, depth + 1u); else { c.pc = 0x00235640u; return; } if (c.pc != 0x0023BD74u) [[unlikely]] return; }
L_0023BD74:
    st32((c.r[16].w[0] + 140u), 0u);
    c.budget -= 1;
L_0023BD78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0023BD7C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023BD90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0023BE68; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  goto L_0023BDC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023BE64; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 1;
L_0023BDC8:
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    set32(c.r[5], c.r[16].w[0] + 80u);
    set32(c.r[6], c.r[16].w[0] + 84u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BDDCu); set32(c.r[7], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_0018(c, 143u, depth + 1u); else { c.pc = 0x00181A20u; return; } if (c.pc != 0x0023BDDCu) [[unlikely]] return; }
L_0023BDDC:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    set32(c.r[5], c.r[16].w[0] + 96u);
    set32(c.r[6], c.r[16].w[0] + 100u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BDF4u); set32(c.r[7], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_0018(c, 143u, depth + 1u); else { c.pc = 0x00181A20u; return; } if (c.pc != 0x0023BDF4u) [[unlikely]] return; }
L_0023BDF4:
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 128u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[16].w[0] + 84u));  goto L_0023BE48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023BE1Cu); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0045(c, 138u, depth + 1u); else { c.pc = 0x00235D90u; return; } if (c.pc != 0x0023BE1Cu) [[unlikely]] return; }
L_0023BE1C:
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 128u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0023BE44; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 2;
L_0023BE44:
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    c.budget -= 1;
L_0023BE48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023BE64; } }
    st32((c.r[16].w[0] + 84u), c.f[0]);
    c.budget -= 1;
L_0023BE64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0023BE68:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023BE80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1003u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0047(c, 32u, depth); } }
    set32(c.r[3], 0u + 1002u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.f[1] = ld32((c.r[28].w[0] - 32588u));  [[clang::musttail]] return unit_0047(c, 31u, depth); }
    set32(c.r[3], 0u + 605u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x43040000u);  [[clang::musttail]] return unit_0047(c, 30u, depth); }
    set32(c.r[3], 0u + 604u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[28].w[0] - 32584u));  [[clang::musttail]] return unit_0047(c, 29u, depth); }
    set32(c.r[3], 0u + 603u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0xC1680000u);  [[clang::musttail]] return unit_0047(c, 28u, depth); }
    set32(c.r[3], 0u + 602u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.f[2] = ld32((c.r[28].w[0] - 32580u));  [[clang::musttail]] return unit_0047(c, 27u, depth); }
    set32(c.r[3], 0u + 601u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);  [[clang::musttail]] return unit_0047(c, 26u, depth); }
    set32(c.r[3], 0u + 506u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 80u), 0u);  [[clang::musttail]] return unit_0047(c, 25u, depth); }
    set32(c.r[3], 0u + 505u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x425C0000u);  [[clang::musttail]] return unit_0047(c, 24u, depth); }
    set32(c.r[3], 0u + 504u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0xC25C0000u);  [[clang::musttail]] return unit_0047(c, 23u, depth); }
    set32(c.r[3], 0u + 503u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[28].w[0] - 32576u));  [[clang::musttail]] return unit_0047(c, 22u, depth); }
    set32(c.r[3], 0u + 502u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.f[2] = ld32((c.r[28].w[0] - 32588u));  [[clang::musttail]] return unit_0047(c, 21u, depth); }
    set32(c.r[3], 0u + 405u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0xC2DC0000u);  [[clang::musttail]] return unit_0047(c, 20u, depth); }
    set32(c.r[3], 0u + 404u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x42220000u);  [[clang::musttail]] return unit_0047(c, 19u, depth); }
    set32(c.r[3], 0u + 403u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.f[1] = ld32((c.r[28].w[0] - 32572u));  [[clang::musttail]] return unit_0047(c, 18u, depth); }
    set32(c.r[3], 0u + 402u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[28].w[0] - 32568u));  [[clang::musttail]] return unit_0047(c, 17u, depth); }
    set32(c.r[3], 0u + 401u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.f[1] = ld32((c.r[28].w[0] - 32564u));  [[clang::musttail]] return unit_0047(c, 16u, depth); }
    set32(c.r[3], 0u + 304u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x42980000u);  [[clang::musttail]] return unit_0047(c, 15u, depth); }
    set32(c.r[3], 0u + 303u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[28].w[0] - 32560u));  [[clang::musttail]] return unit_0047(c, 14u, depth); }
    set32(c.r[3], 0u + 302u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x428E0000u);  [[clang::musttail]] return unit_0047(c, 13u, depth); }
    set32(c.r[3], 0u + 301u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.f[1] = ld32((c.r[28].w[0] - 32556u));  [[clang::musttail]] return unit_0047(c, 12u, depth); }
    set32(c.r[3], 0u + 205u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);  [[clang::musttail]] return unit_0047(c, 11u, depth); }
    set32(c.r[3], 0u + 204u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.f[1] = ld32((c.r[28].w[0] - 32552u));  [[clang::musttail]] return unit_0047(c, 10u, depth); }
    set32(c.r[3], 0u + 203u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  [[clang::musttail]] return unit_0047(c, 9u, depth); }
    set32(c.r[3], 0u + 202u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[28].w[0] - 32548u));  [[clang::musttail]] return unit_0047(c, 8u, depth); }
    set32(c.r[3], 0u + 201u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);  [[clang::musttail]] return unit_0047(c, 7u, depth); }
    set32(c.r[3], 0u + 105u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[28].w[0] - 32544u));  [[clang::musttail]] return unit_0047(c, 6u, depth); }
    set32(c.r[3], 0u + 104u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42960000u);  [[clang::musttail]] return unit_0047(c, 5u, depth); }
    set32(c.r[3], 0u + 103u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[28].w[0] - 32588u));  [[clang::musttail]] return unit_0047(c, 4u, depth); }
    set32(c.r[3], 0u + 102u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);  [[clang::musttail]] return unit_0047(c, 3u, depth); }
    set32(c.r[3], 0u + 101u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[28].w[0] - 32540u));  [[clang::musttail]] return unit_0047(c, 2u, depth); }
    [[clang::musttail]] return unit_0047(c, 1u, depth);
}

}
