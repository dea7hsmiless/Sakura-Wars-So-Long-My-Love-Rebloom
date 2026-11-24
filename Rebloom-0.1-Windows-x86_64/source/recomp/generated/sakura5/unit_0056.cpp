#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0056[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 17, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 30, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0,
    0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0,
    0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70,
    0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0,
    0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0,
    0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0,
    0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0,
    0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0,
    0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0,
    0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0,
    241, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0,
    0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0,
    0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0,
    0, 264, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0,
    0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 284, 0,
    0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0,
    296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0,
    303, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0,
    0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0,
    0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 320,
    0, 0, 321, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 328, 0,
    0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0,
    0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339,
    0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 349, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 352, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0,
    356, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0,
    0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0,
    0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0,
    0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0,
    0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398,
    0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0,
    0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0,
    421, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0,
    0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0,
    0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0,
    0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0,
    0, 444, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 452,
    0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 461, 0, 0, 0,
    0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0,
    0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0,
    0, 0, 476, 0, 477, 0, 478, 0, 479, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 488, 0, 489, 0, 490,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 493, 0, 0, 494, 0, 495, 0, 0, 0, 0, 496, 0, 0, 497, 0, 498,
};

void unit_0056(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00278000;
    case 2u: goto L_00278004;
    case 3u: goto L_00278038;
    case 4u: goto L_0027803C;
    case 5u: goto L_00278060;
    case 6u: goto L_002780BC;
    case 7u: goto L_002780C8;
    case 8u: goto L_002780E0;
    case 9u: goto L_00278100;
    case 10u: goto L_00278110;
    case 11u: goto L_00278124;
    case 12u: goto L_00278170;
    case 13u: goto L_00278180;
    case 14u: goto L_00278198;
    case 15u: goto L_002781B4;
    case 16u: goto L_002781BC;
    case 17u: goto L_002781C8;
    case 18u: goto L_002781CC;
    case 19u: goto L_002781E0;
    case 20u: goto L_0027820C;
    case 21u: goto L_0027829C;
    case 22u: goto L_002782A8;
    case 23u: goto L_002782C4;
    case 24u: goto L_002782CC;
    case 25u: goto L_002782EC;
    case 26u: goto L_002782FC;
    case 27u: goto L_00278310;
    case 28u: goto L_00278324;
    case 29u: goto L_00278354;
    case 30u: goto L_00278388;
    case 31u: goto L_00278390;
    case 32u: goto L_002783A4;
    case 33u: goto L_002783FC;
    case 34u: goto L_0027845C;
    case 35u: goto L_00278478;
    case 36u: goto L_00278490;
    case 37u: goto L_002784CC;
    case 38u: goto L_002784E8;
    case 39u: goto L_00278504;
    case 40u: goto L_002785A0;
    case 41u: goto L_002785C0;
    case 42u: goto L_0027860C;
    case 43u: goto L_0027862C;
    case 44u: goto L_00278650;
    case 45u: goto L_002786EC;
    case 46u: goto L_002787C4;
    case 47u: goto L_002787E0;
    case 48u: goto L_002787F4;
    case 49u: goto L_0027882C;
    case 50u: goto L_0027883C;
    case 51u: goto L_002788A0;
    case 52u: goto L_002788A8;
    case 53u: goto L_002788D0;
    case 54u: goto L_002788E4;
    case 55u: goto L_00278900;
    case 56u: goto L_0027895C;
    case 57u: goto L_00278968;
    case 58u: goto L_00278980;
    case 59u: goto L_002789A0;
    case 60u: goto L_002789B0;
    case 61u: goto L_002789C4;
    case 62u: goto L_00278A00;
    case 63u: goto L_00278A10;
    case 64u: goto L_00278A20;
    case 65u: goto L_00278A34;
    case 66u: goto L_00278A60;
    case 67u: goto L_00278A70;
    case 68u: goto L_00278A84;
    case 69u: goto L_00278AA0;
    case 70u: goto L_00278AFC;
    case 71u: goto L_00278B08;
    case 72u: goto L_00278B20;
    case 73u: goto L_00278B40;
    case 74u: goto L_00278B50;
    case 75u: goto L_00278B68;
    case 76u: goto L_00278B94;
    case 77u: goto L_00278BA4;
    case 78u: goto L_00278BAC;
    case 79u: goto L_00278BD4;
    case 80u: goto L_00278BE0;
    case 81u: goto L_00278BF4;
    case 82u: goto L_00278C10;
    case 83u: goto L_00278C3C;
    case 84u: goto L_00278C54;
    case 85u: goto L_00278C58;
    case 86u: goto L_00278CA4;
    case 87u: goto L_00278CC0;
    case 88u: goto L_00278CCC;
    case 89u: goto L_00278CE0;
    case 90u: goto L_00278D00;
    case 91u: goto L_00278D18;
    case 92u: goto L_00278D20;
    case 93u: goto L_00278D30;
    case 94u: goto L_00278D48;
    case 95u: goto L_00278D5C;
    case 96u: goto L_00278D70;
    case 97u: goto L_00278D78;
    case 98u: goto L_00278D8C;
    case 99u: goto L_00278D94;
    case 100u: goto L_00278DB0;
    case 101u: goto L_00278DC4;
    case 102u: goto L_00278DE0;
    case 103u: goto L_00278DF0;
    case 104u: goto L_00278E38;
    case 105u: goto L_00278E50;
    case 106u: goto L_00278E64;
    case 107u: goto L_00278E80;
    case 108u: goto L_00278EDC;
    case 109u: goto L_00278EE8;
    case 110u: goto L_00278F00;
    case 111u: goto L_00278F20;
    case 112u: goto L_00278F30;
    case 113u: goto L_00278F4C;
    case 114u: goto L_00278F98;
    case 115u: goto L_00278FE0;
    case 116u: goto L_00279060;
    case 117u: goto L_00279078;
    case 118u: goto L_00279090;
    case 119u: goto L_002790A4;
    case 120u: goto L_002790D0;
    case 121u: goto L_002790F4;
    case 122u: goto L_00279104;
    case 123u: goto L_00279110;
    case 124u: goto L_00279140;
    case 125u: goto L_0027915C;
    case 126u: goto L_00279168;
    case 127u: goto L_002791C0;
    case 128u: goto L_002791F0;
    case 129u: goto L_002791F8;
    case 130u: goto L_00279208;
    case 131u: goto L_00279210;
    case 132u: goto L_0027923C;
    case 133u: goto L_00279250;
    case 134u: goto L_00279258;
    case 135u: goto L_0027926C;
    case 136u: goto L_00279278;
    case 137u: goto L_002792A4;
    case 138u: goto L_002792B8;
    case 139u: goto L_002792E0;
    case 140u: goto L_00279314;
    case 141u: goto L_00279334;
    case 142u: goto L_00279344;
    case 143u: goto L_00279350;
    case 144u: goto L_00279370;
    case 145u: goto L_002793A4;
    case 146u: goto L_002793B0;
    case 147u: goto L_002793F0;
    case 148u: goto L_0027940C;
    case 149u: goto L_00279424;
    case 150u: goto L_002794B0;
    case 151u: goto L_002794C0;
    case 152u: goto L_002794D4;
    case 153u: goto L_002794F4;
    case 154u: goto L_00279500;
    case 155u: goto L_00279520;
    case 156u: goto L_00279528;
    case 157u: goto L_00279540;
    case 158u: goto L_00279550;
    case 159u: goto L_00279570;
    case 160u: goto L_00279590;
    case 161u: goto L_002795B0;
    case 162u: goto L_002795D4;
    case 163u: goto L_002795F0;
    case 164u: goto L_00279610;
    case 165u: goto L_00279644;
    case 166u: goto L_00279670;
    case 167u: goto L_00279684;
    case 168u: goto L_002796B0;
    case 169u: goto L_002796CC;
    case 170u: goto L_002796D4;
    case 171u: goto L_00279700;
    case 172u: goto L_00279718;
    case 173u: goto L_00279728;
    case 174u: goto L_0027973C;
    case 175u: goto L_00279760;
    case 176u: goto L_00279798;
    case 177u: goto L_002797A8;
    case 178u: goto L_00279800;
    case 179u: goto L_00279828;
    case 180u: goto L_00279838;
    case 181u: goto L_00279860;
    case 182u: goto L_00279870;
    case 183u: goto L_00279878;
    case 184u: goto L_00279890;
    case 185u: goto L_002798D0;
    case 186u: goto L_002798DC;
    case 187u: goto L_002798F4;
    case 188u: goto L_00279910;
    case 189u: goto L_00279920;
    case 190u: goto L_00279930;
    case 191u: goto L_0027994C;
    case 192u: goto L_00279958;
    case 193u: goto L_00279A48;
    case 194u: goto L_00279A68;
    case 195u: goto L_00279A74;
    case 196u: goto L_00279A94;
    case 197u: goto L_00279AA0;
    case 198u: goto L_00279AC0;
    case 199u: goto L_00279ACC;
    case 200u: goto L_00279AEC;
    case 201u: goto L_00279AF8;
    case 202u: goto L_00279B18;
    case 203u: goto L_00279B24;
    case 204u: goto L_00279B44;
    case 205u: goto L_00279B50;
    case 206u: goto L_00279B64;
    case 207u: goto L_00279B70;
    case 208u: goto L_00279B90;
    case 209u: goto L_00279B9C;
    case 210u: goto L_00279BBC;
    case 211u: goto L_00279BC8;
    case 212u: goto L_00279BE8;
    case 213u: goto L_00279BF4;
    case 214u: goto L_00279C14;
    case 215u: goto L_00279C20;
    case 216u: goto L_00279C34;
    case 217u: goto L_00279C40;
    case 218u: goto L_00279C54;
    case 219u: goto L_00279C60;
    case 220u: goto L_00279C80;
    case 221u: goto L_00279C8C;
    case 222u: goto L_00279CA0;
    case 223u: goto L_00279CB0;
    case 224u: goto L_00279CD0;
    case 225u: goto L_00279CE4;
    case 226u: goto L_00279CF4;
    case 227u: goto L_00279D20;
    case 228u: goto L_00279D44;
    case 229u: goto L_00279D50;
    case 230u: goto L_00279D98;
    case 231u: goto L_00279DA4;
    case 232u: goto L_00279DB4;
    case 233u: goto L_00279E00;
    case 234u: goto L_00279E10;
    case 235u: goto L_00279E44;
    case 236u: goto L_00279E58;
    case 237u: goto L_00279E74;
    case 238u: goto L_00279EA8;
    case 239u: goto L_00279ED8;
    case 240u: goto L_00279EF4;
    case 241u: goto L_00279F00;
    case 242u: goto L_00279F14;
    case 243u: goto L_00279F24;
    case 244u: goto L_00279F34;
    case 245u: goto L_00279F40;
    case 246u: goto L_00279F6C;
    case 247u: goto L_00279F88;
    case 248u: goto L_00279F98;
    case 249u: goto L_00279FB4;
    case 250u: goto L_0027A024;
    case 251u: goto L_0027A054;
    case 252u: goto L_0027A070;
    case 253u: goto L_0027A084;
    case 254u: goto L_0027A094;
    case 255u: goto L_0027A0A4;
    case 256u: goto L_0027A0B0;
    case 257u: goto L_0027A0DC;
    case 258u: goto L_0027A0F8;
    case 259u: goto L_0027A10C;
    case 260u: goto L_0027A114;
    case 261u: goto L_0027A144;
    case 262u: goto L_0027A160;
    case 263u: goto L_0027A174;
    case 264u: goto L_0027A184;
    case 265u: goto L_0027A194;
    case 266u: goto L_0027A1A0;
    case 267u: goto L_0027A1CC;
    case 268u: goto L_0027A1FC;
    case 269u: goto L_0027A23C;
    case 270u: goto L_0027A270;
    case 271u: goto L_0027A28C;
    case 272u: goto L_0027A2B0;
    case 273u: goto L_0027A2D0;
    case 274u: goto L_0027A324;
    case 275u: goto L_0027A340;
    case 276u: goto L_0027A354;
    case 277u: goto L_0027A368;
    case 278u: goto L_0027A378;
    case 279u: goto L_0027A388;
    case 280u: goto L_0027A394;
    case 281u: goto L_0027A3C0;
    case 282u: goto L_0027A3DC;
    case 283u: goto L_0027A3F0;
    case 284u: goto L_0027A3F8;
    case 285u: goto L_0027A414;
    case 286u: goto L_0027A428;
    case 287u: goto L_0027A43C;
    case 288u: goto L_0027A44C;
    case 289u: goto L_0027A45C;
    case 290u: goto L_0027A468;
    case 291u: goto L_0027A498;
    case 292u: goto L_0027A4B8;
    case 293u: goto L_0027A4C8;
    case 294u: goto L_0027A4D0;
    case 295u: goto L_0027A4E4;
    case 296u: goto L_0027A500;
    case 297u: goto L_0027A524;
    case 298u: goto L_0027A52C;
    case 299u: goto L_0027A548;
    case 300u: goto L_0027A554;
    case 301u: goto L_0027A55C;
    case 302u: goto L_0027A570;
    case 303u: goto L_0027A580;
    case 304u: goto L_0027A590;
    case 305u: goto L_0027A59C;
    case 306u: goto L_0027A5CC;
    case 307u: goto L_0027A5E8;
    case 308u: goto L_0027A5F8;
    case 309u: goto L_0027A618;
    case 310u: goto L_0027A620;
    case 311u: goto L_0027A638;
    case 312u: goto L_0027A654;
    case 313u: goto L_0027A668;
    case 314u: goto L_0027A688;
    case 315u: goto L_0027A6D4;
    case 316u: goto L_0027A6F4;
    case 317u: goto L_0027A740;
    case 318u: goto L_0027A760;
    case 319u: goto L_0027A7F4;
    case 320u: goto L_0027A7FC;
    case 321u: goto L_0027A808;
    case 322u: goto L_0027A810;
    case 323u: goto L_0027A824;
    case 324u: goto L_0027A838;
    case 325u: goto L_0027A848;
    case 326u: goto L_0027A85C;
    case 327u: goto L_0027A870;
    case 328u: goto L_0027A878;
    case 329u: goto L_0027A88C;
    case 330u: goto L_0027A90C;
    case 331u: goto L_0027A91C;
    case 332u: goto L_0027A968;
    case 333u: goto L_0027A978;
    case 334u: goto L_0027A99C;
    case 335u: goto L_0027A9A8;
    case 336u: goto L_0027A9C4;
    case 337u: goto L_0027A9CC;
    case 338u: goto L_0027A9D8;
    case 339u: goto L_0027A9FC;
    case 340u: goto L_0027AA14;
    case 341u: goto L_0027AA28;
    case 342u: goto L_0027AA30;
    case 343u: goto L_0027AA6C;
    case 344u: goto L_0027AA90;
    case 345u: goto L_0027AAB4;
    case 346u: goto L_0027AAC0;
    case 347u: goto L_0027AAE0;
    case 348u: goto L_0027AAE8;
    case 349u: goto L_0027AAF8;
    case 350u: goto L_0027AB10;
    case 351u: goto L_0027AB20;
    case 352u: goto L_0027AB28;
    case 353u: goto L_0027AB30;
    case 354u: goto L_0027AB40;
    case 355u: goto L_0027AB60;
    case 356u: goto L_0027AB80;
    case 357u: goto L_0027AB8C;
    case 358u: goto L_0027ABA0;
    case 359u: goto L_0027ABC4;
    case 360u: goto L_0027AC70;
    case 361u: goto L_0027ACB0;
    case 362u: goto L_0027ACC0;
    case 363u: goto L_0027AD78;
    case 364u: goto L_0027AE5C;
    case 365u: goto L_0027AEA0;
    case 366u: goto L_0027AEC0;
    case 367u: goto L_0027AF18;
    case 368u: goto L_0027AF24;
    case 369u: goto L_0027AFB0;
    case 370u: goto L_0027AFC0;
    case 371u: goto L_0027AFDC;
    case 372u: goto L_0027B010;
    case 373u: goto L_0027B050;
    case 374u: goto L_0027B108;
    case 375u: goto L_0027B154;
    case 376u: goto L_0027B16C;
    case 377u: goto L_0027B18C;
    case 378u: goto L_0027B254;
    case 379u: goto L_0027B264;
    case 380u: goto L_0027B274;
    case 381u: goto L_0027B284;
    case 382u: goto L_0027B2B4;
    case 383u: goto L_0027B2D8;
    case 384u: goto L_0027B2F0;
    case 385u: goto L_0027B34C;
    case 386u: goto L_0027B36C;
    case 387u: goto L_0027B378;
    case 388u: goto L_0027B3A4;
    case 389u: goto L_0027B3D0;
    case 390u: goto L_0027B430;
    case 391u: goto L_0027B46C;
    case 392u: goto L_0027B488;
    case 393u: goto L_0027B4B0;
    case 394u: goto L_0027B4EC;
    case 395u: goto L_0027B508;
    case 396u: goto L_0027B530;
    case 397u: goto L_0027B570;
    case 398u: goto L_0027B57C;
    case 399u: goto L_0027B594;
    case 400u: goto L_0027B5B0;
    case 401u: goto L_0027B5C0;
    case 402u: goto L_0027B5D0;
    case 403u: goto L_0027B5E8;
    case 404u: goto L_0027B5F0;
    case 405u: goto L_0027B604;
    case 406u: goto L_0027B614;
    case 407u: goto L_0027B660;
    case 408u: goto L_0027B68C;
    case 409u: goto L_0027B6AC;
    case 410u: goto L_0027B6B8;
    case 411u: goto L_0027B700;
    case 412u: goto L_0027B728;
    case 413u: goto L_0027B750;
    case 414u: goto L_0027B760;
    case 415u: goto L_0027B780;
    case 416u: goto L_0027B790;
    case 417u: goto L_0027B798;
    case 418u: goto L_0027B7D0;
    case 419u: goto L_0027B828;
    case 420u: goto L_0027B860;
    case 421u: goto L_0027B880;
    case 422u: goto L_0027B894;
    case 423u: goto L_0027B8A4;
    case 424u: goto L_0027B8B8;
    case 425u: goto L_0027B8D4;
    case 426u: goto L_0027B8EC;
    case 427u: goto L_0027B904;
    case 428u: goto L_0027B918;
    case 429u: goto L_0027B92C;
    case 430u: goto L_0027B940;
    case 431u: goto L_0027B954;
    case 432u: goto L_0027B968;
    case 433u: goto L_0027B984;
    case 434u: goto L_0027B99C;
    case 435u: goto L_0027B9B8;
    case 436u: goto L_0027B9D0;
    case 437u: goto L_0027B9EC;
    case 438u: goto L_0027BA10;
    case 439u: goto L_0027BA28;
    case 440u: goto L_0027BA6C;
    case 441u: goto L_0027BA94;
    case 442u: goto L_0027BABC;
    case 443u: goto L_0027BAF0;
    case 444u: goto L_0027BB04;
    case 445u: goto L_0027BB0C;
    case 446u: goto L_0027BB20;
    case 447u: goto L_0027BB98;
    case 448u: goto L_0027BBAC;
    case 449u: goto L_0027BBC0;
    case 450u: goto L_0027BBD8;
    case 451u: goto L_0027BBEC;
    case 452u: goto L_0027BBFC;
    case 453u: goto L_0027BC10;
    case 454u: goto L_0027BC24;
    case 455u: goto L_0027BC30;
    case 456u: goto L_0027BC90;
    case 457u: goto L_0027BCB0;
    case 458u: goto L_0027BCBC;
    case 459u: goto L_0027BCDC;
    case 460u: goto L_0027BCE8;
    case 461u: goto L_0027BCF0;
    case 462u: goto L_0027BD10;
    case 463u: goto L_0027BD24;
    case 464u: goto L_0027BD2C;
    case 465u: goto L_0027BD38;
    case 466u: goto L_0027BD60;
    case 467u: goto L_0027BD8C;
    case 468u: goto L_0027BDAC;
    case 469u: goto L_0027BDCC;
    case 470u: goto L_0027BDEC;
    case 471u: goto L_0027BE0C;
    case 472u: goto L_0027BE2C;
    case 473u: goto L_0027BE4C;
    case 474u: goto L_0027BE58;
    case 475u: goto L_0027BE70;
    case 476u: goto L_0027BE88;
    case 477u: goto L_0027BE90;
    case 478u: goto L_0027BE98;
    case 479u: goto L_0027BEA0;
    case 480u: goto L_0027BEA8;
    case 481u: goto L_0027BEB4;
    case 482u: goto L_0027BEDC;
    case 483u: goto L_0027BF20;
    case 484u: goto L_0027BF30;
    case 485u: goto L_0027BF38;
    case 486u: goto L_0027BF50;
    case 487u: goto L_0027BF64;
    case 488u: goto L_0027BF6C;
    case 489u: goto L_0027BF74;
    case 490u: goto L_0027BF7C;
    case 491u: goto L_0027BFAC;
    case 492u: goto L_0027BFB8;
    case 493u: goto L_0027BFC0;
    case 494u: goto L_0027BFCC;
    case 495u: goto L_0027BFD4;
    case 496u: goto L_0027BFE8;
    case 497u: goto L_0027BFF4;
    case 498u: goto L_0027BFFC;
    default: bad_entry(c, 0x00278000u); return;
    }
L_00278000:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00278004:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00278038; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027801C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_0027801C:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 40u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278038u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x00278038u) [[unlikely]] return; }
L_00278038:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0027803C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00278060:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002780E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23024u);
    set32(c.r[2], c.r[2].w[0] + 23080u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002780C8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002780BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002780BCu) [[unlikely]] return; }
L_002780BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002780C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002780C8u) [[unlikely]] return; }
L_002780C8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002780E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002780E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002780E0u) [[unlikely]] return; }
L_002780E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002780E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00278100:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00278060u | kUnwind; return; } goto L_00278060; }
L_00278110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278124u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x00278124u) [[unlikely]] return; }
L_00278124:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 23120u);
    set32(c.r[3], c.r[3].w[0] + 23176u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52560000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 17234ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278170:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_005A(c, 191u, depth); }
L_00278180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278198u); set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 82u, depth + 1u); else { c.pc = 0x0028CF00u; return; } if (c.pc != 0x00278198u) [[unlikely]] return; }
L_00278198:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_002781B8; }
    set32(c.r[4], 0u + 27u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002781B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x002781B4u) [[unlikely]] return; }
L_002781B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_002781B8:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_002781BC:
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002781C8u); set32(c.r[5], 0u + 36u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002781C8u) [[unlikely]] return; }
L_002781C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002781CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002781E0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027820Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x0027820Cu) [[unlikely]] return; }
L_0027820C:
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_002788AC; }
    set32(c.r[6], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 80u)));
    set32(c.r[16], c.r[6].w[0] + 112u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[5].w[0] + 380u);  if (t) { goto L_002787B8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_00278720; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  goto L_00278670; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  goto L_002783B8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027826C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002788A8; } }
L_0027826C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 512u)));  goto L_00278278; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00278278:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], 0u + 19u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027829Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x0027829Cu) [[unlikely]] return; }
L_0027829C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002782A8u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_005A(c, 335u, depth + 1u); else { c.pc = 0x0028B6D0u; return; } if (c.pc != 0x002782A8u) [[unlikely]] return; }
L_002782A8:
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] & 33ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 76u)));  goto L_0027833C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002782C4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_006A(c, 58u, depth + 1u); else { c.pc = 0x002C8900u; return; } if (c.pc != 0x002782C4u) [[unlikely]] return; }
L_002782C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002782CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x002782CCu) [[unlikely]] return; }
L_002782CC:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 112u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_00278328; } }
L_002782EC:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 2916u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002782FCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 32u, depth + 1u); else { c.pc = 0x0028C6D0u; return; } if (c.pc != 0x002782FCu) [[unlikely]] return; }
L_002782FC:
    set32(c.r[4], ld32((c.r[19].w[0] + 1312u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.f[0] = ld32((c.r[19].w[0] + 1148u));  goto L_00278314; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278310u);  if (depth < kMaxDepth) unit_0059(c, 333u, depth + 1u); else { c.pc = 0x00286530u; return; } if (c.pc != 0x00278310u) [[unlikely]] return; }
L_00278310:
    c.f[0] = ld32((c.r[19].w[0] + 1148u));
    c.budget -= 1;
L_00278314:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278324u); st32((c.r[19].w[0] + 1148u), c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 365u, depth + 1u); else { c.pc = 0x0028BB30u; return; } if (c.pc != 0x00278324u) [[unlikely]] return; }
L_00278324:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00278328:
    set32(c.r[2], ld32((c.r[16].w[0] + 2912u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002782ECu | kUnwind; return; } goto L_002782EC; }
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_0027833C:
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278354u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x00278354u) [[unlikely]] return; }
L_00278354:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.f[0] = ld32((c.r[2].w[0] + 1152u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 592u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 1152u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278388u); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 365u, depth + 1u); else { c.pc = 0x0028BB30u; return; } if (c.pc != 0x00278388u) [[unlikely]] return; }
L_00278388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278390u); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x00278390u) [[unlikely]] return; }
L_00278390:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002783A4u); set32(c.r[5], 0u + 35u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002783A4u) [[unlikely]] return; }
L_002783A4:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 108u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 5;
L_002783B8:
    c.r[3].d[0] = c.r[4].d[0] & 33ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[7], ld32((c.r[20].w[0] + 76u)));  goto L_00278508; }
    c.r[3].d[0] = c.r[4].d[0] & 9ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 108u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], ld32((c.r[4].w[0] + 2916u)));  if (t) { goto L_0027847C; } }
    set32(c.r[18], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002783F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0027844C; } }
L_002783F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002783FCu); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002783FCu) [[unlikely]] return; }
L_002783FC:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0027841C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0027842C; } }
L_0027841C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0027842C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0027844C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00278444; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00278444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027844C; } }
L_0027844C:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[6], 0u + 19u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027845Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0027845Cu) [[unlikely]] return; }
L_0027845C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 1312u)));  goto L_00278480; }
    set32(c.r[5], ld32((c.r[19].w[0] + 144u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278478u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00278478u) [[unlikely]] return; }
L_00278478:
    st32((c.r[18].w[0] + 328u), 0u);
    c.budget -= 1;
L_0027847C:
    set32(c.r[4], ld32((c.r[19].w[0] + 1312u)));
    c.budget -= 1;
L_00278480:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 72u)));  goto L_00278494; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278490u);  if (depth < kMaxDepth) unit_0059(c, 335u, depth + 1u); else { c.pc = 0x00286550u; return; } if (c.pc != 0x00278490u) [[unlikely]] return; }
L_00278490:
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_00278494:
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 72u)));  goto L_002784D0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002784B0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_002784B0:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002784CCu); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x002784CCu) [[unlikely]] return; }
L_002784CC:
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_002784D0:
    c.r[3].d[0] = c.r[3].d[0] & 257ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  goto L_002784EC; }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002784E8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x002784E8u) [[unlikely]] return; }
L_002784E8:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_002784EC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[4].d[0];  if (t) { goto L_00278504; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00278504u); set32(c.r[5], 0u + 37u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00278504u) [[unlikely]] return; }
L_00278504:
    set32(c.r[7], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_00278508:
    set32(c.r[5], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 148u)));
    set32(c.r[6], c.r[4].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + 3u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[1].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);  goto L_0027865C; }
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00278550; } }
    c.r[1].d[0] = c.r[4].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00278550; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00278550:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00278658; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 2916u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_00278658; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 148u)));
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00278590; } }
    c.r[1].d[0] = c.r[5].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00278590; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_00278590:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00278658; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002785A0u); set32(c.r[5], ld32((c.r[6].w[0] + 148u)));  if (depth < kMaxDepth) unit_0067(c, 266u, depth + 1u); else { c.pc = 0x002BE830u; return; } if (c.pc != 0x002785A0u) [[unlikely]] return; }
L_002785A0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] < 0;  if (t) { goto L_00278658; } }
    set32(c.r[21], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002785C0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002785C0u) [[unlikely]] return; }
L_002785C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002785D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 128u)));  if (t) { goto L_002785E8; } }
L_002785D4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_002785E8; }
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 3;
L_002785E8:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[21].w[0] + c.r[18].w[0]);  goto L_00278610; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0027860C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027860Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0027860Cu) [[unlikely]] return; }
L_0027860C:
    set32(c.r[2], c.r[21].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_00278610:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 164u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027862Cu); st32((c.r[29].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x0027862Cu) [[unlikely]] return; }
L_0027862C:
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_00278654; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00278650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278650u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00278650u) [[unlikely]] return; }
L_00278650:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00278654:
    st32((c.r[20].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 1;
L_00278658:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.budget -= 1;
L_0027865C:
    st32((c.r[20].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 5;
L_00278670:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[2] = ld32((c.r[5].w[0] + 80u));  goto L_00278694; }
    c.f[2] = 0u;
    c.budget -= 1;
L_00278694:
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[20].w[0] + 104u), c.f[1]);  if (t) { goto L_002788A8; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 33ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 108u)));  goto L_002786F0; }
    set32(c.r[3], ld32((c.r[20].w[0] + 108u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 2916u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002786EC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002786ECu); set32(c.r[5], 0u + 38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002786ECu) [[unlikely]] return; }
L_002786EC:
    set32(c.r[3], ld32((c.r[20].w[0] + 108u)));
    c.budget -= 1;
L_002786F0:
    set32(c.r[4], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 108u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 2912u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 96u)));  goto L_00278714; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002788A8; } }
L_00278714:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
L_00278720:
    set32(c.r[5], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[4], c.r[6].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + 3u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 96u)));  goto L_002787B0; }
    c.r[3].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00278768; } }
    c.r[1].d[0] = c.r[6].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00278768; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00278768:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002787AC; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002787AC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002787AC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002787AC; } }
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 7;
L_002787AC:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 1;
L_002787B0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_002787B8:
    set32(c.r[18], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00278808; } }
L_002787C4:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0] + 2916u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 1312u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00278808; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002787E0u);  if (depth < kMaxDepth) unit_0059(c, 328u, depth + 1u); else { c.pc = 0x00286460u; return; } if (c.pc != 0x002787E0u) [[unlikely]] return; }
L_002787E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00278804; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002787F4u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x002787F4u) [[unlikely]] return; }
L_002787F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00278804; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00278818; } }
L_00278804:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00278808:
    set32(c.r[3], ld32((c.r[16].w[0] + 2912u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002787C4u | kUnwind; return; } goto L_002787C4; }
L_00278818:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002788A8; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027882Cu); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x0027882Cu) [[unlikely]] return; }
L_0027882C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002788A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027883Cu); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0027883Cu) [[unlikely]] return; }
L_0027883C:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 76u)));  goto L_0027887C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 176u)));  goto L_00278868; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00278870; } }
L_00278868:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 2;
L_00278870:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002788A8; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 1;
L_0027887C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 1104u)));  if (t) { goto L_00278890; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 2;
L_00278890:
    set32(c.r[4], ld32((c.r[20].w[0] + 76u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002788A0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 344u, depth + 1u); else { c.pc = 0x0028B8A0u; return; } if (c.pc != 0x002788A0u) [[unlikely]] return; }
L_002788A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002788A8u); set32(c.r[4], ld32((c.r[20].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 290u, depth + 1u); else { c.pc = 0x0028AF40u; return; } if (c.pc != 0x002788A8u) [[unlikely]] return; }
L_002788A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_002788AC:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002788D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002788E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 193u, depth + 1u); else { c.pc = 0x00289A70u; return; } if (c.pc != 0x002788E4u) [[unlikely]] return; }
L_002788E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00278980; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23120u);
    set32(c.r[2], c.r[2].w[0] + 23176u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00278968; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027895Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0027895Cu) [[unlikely]] return; }
L_0027895C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278968u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00278968u) [[unlikely]] return; }
L_00278968:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00278984; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278980u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00278980u) [[unlikely]] return; }
L_00278980:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00278984:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002789A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00278900u | kUnwind; return; } goto L_00278900; }
L_002789B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002789C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x002789C4u) [[unlikely]] return; }
L_002789C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 23216u);
    set32(c.r[3], c.r[3].w[0] + 23272u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x59410000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21587ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278A00:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_005A(c, 191u, depth); }
L_00278A10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00278A20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x00278A34u) [[unlikely]] return; }
L_00278A34:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00278A64; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00278A60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A60u);  if (depth < kMaxDepth) unit_005B(c, 12u, depth + 1u); else { c.pc = 0x0028C120u; return; } if (c.pc != 0x00278A60u) [[unlikely]] return; }
L_00278A60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00278A64:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 193u, depth + 1u); else { c.pc = 0x00289A70u; return; } if (c.pc != 0x00278A84u) [[unlikely]] return; }
L_00278A84:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278AA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00278B20; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23216u);
    set32(c.r[2], c.r[2].w[0] + 23272u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00278B08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278AFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00278AFCu) [[unlikely]] return; }
L_00278AFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278B08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00278B08u) [[unlikely]] return; }
L_00278B08:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00278B24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278B20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00278B20u) [[unlikely]] return; }
L_00278B20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00278B24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00278B40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00278AA0u | kUnwind; return; } goto L_00278AA0; }
L_00278B50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278B68u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00289920u; return; } if (c.pc != 0x00278B68u) [[unlikely]] return; }
L_00278B68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 23312u);
    set32(c.r[3], c.r[3].w[0] + 23368u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C4C0000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 17753ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278B94u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 32u, depth + 1u); else { c.pc = 0x0028C6D0u; return; } if (c.pc != 0x00278B94u) [[unlikely]] return; }
L_00278B94:
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278BA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 58u, depth + 1u); else { c.pc = 0x002C8900u; return; } if (c.pc != 0x00278BA4u) [[unlikely]] return; }
L_00278BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278BACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x00278BACu) [[unlikely]] return; }
L_00278BAC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 118u)));
    c.f[0] = ld32((c.r[17].w[0] + 1152u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 1152u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278BD4u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 365u, depth + 1u); else { c.pc = 0x0028BB30u; return; } if (c.pc != 0x00278BD4u) [[unlikely]] return; }
L_00278BD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278BE0u); set32(c.r[4], ld32((c.r[2].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0059(c, 335u, depth + 1u); else { c.pc = 0x00286550u; return; } if (c.pc != 0x00278BE0u) [[unlikely]] return; }
L_00278BE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 21u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278BF4u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00278BF4u) [[unlikely]] return; }
L_00278BF4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C10u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_005A(c, 335u, depth + 1u); else { c.pc = 0x0028B6D0u; return; } if (c.pc != 0x00278C10u) [[unlikely]] return; }
L_00278C10:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 508u)));  goto L_00278C24; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00278C24:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C3Cu); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x00278C3Cu) [[unlikely]] return; }
L_00278C3C:
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 544u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C58u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x00278C58u) [[unlikely]] return; }
    goto L_00278C58;
L_00278C54:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00278C58:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 72u)));  goto L_00278CA8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00278C88; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 1;
L_00278C88:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 21u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278CA4u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_0068(c, 247u, depth + 1u); else { c.pc = 0x002C2D00u; return; } if (c.pc != 0x00278CA4u) [[unlikely]] return; }
L_00278CA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_00278CA8:
    c.r[2].d[0] = c.r[2].d[0] & 257ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_00278CC4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278CC0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x00278CC0u) [[unlikely]] return; }
L_00278CC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00278CC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278CCCu);  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x00278CCCu) [[unlikely]] return; }
L_00278CCC:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00278CE0u); set32(c.r[5], 0u + 33u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00278CE0u) [[unlikely]] return; }
L_00278CE0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00278D00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278D18u); set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 35u, depth + 1u); else { c.pc = 0x0028C720u; return; } if (c.pc != 0x00278D18u) [[unlikely]] return; }
L_00278D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278D20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 191u, depth + 1u); else { c.pc = 0x00289A00u; return; } if (c.pc != 0x00278D20u) [[unlikely]] return; }
L_00278D20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278D30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278D48u); set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 82u, depth + 1u); else { c.pc = 0x0028CF00u; return; } if (c.pc != 0x00278D48u) [[unlikely]] return; }
L_00278D48:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00278D5Cu); set32(c.r[5], 0u + 34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00278D5Cu) [[unlikely]] return; }
L_00278D5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00278D70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00278D70u) [[unlikely]] return; }
L_00278D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278D78u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 5u, depth + 1u); else { c.pc = 0x00288060u; return; } if (c.pc != 0x00278D78u) [[unlikely]] return; }
L_00278D78:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00278D8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00278D8Cu) [[unlikely]] return; }
L_00278D8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278D94u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0059(c, 408u, depth + 1u); else { c.pc = 0x002877B0u; return; } if (c.pc != 0x00278D94u) [[unlikely]] return; }
L_00278D94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278DB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278DC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 175u, depth + 1u); else { c.pc = 0x001A6260u; return; } if (c.pc != 0x00278DC4u) [[unlikely]] return; }
L_00278DC4:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00278E3C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278DE0u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x00278DE0u) [[unlikely]] return; }
L_00278DE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00278E38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278DF0u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00278DF0u) [[unlikely]] return; }
L_00278DF0:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_00278E30; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 176u)));  goto L_00278E1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00278E24; } }
L_00278E1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 2;
L_00278E24:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00278E38; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00278E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278E38u);  if (depth < kMaxDepth) unit_005A(c, 290u, depth + 1u); else { c.pc = 0x0028AF40u; return; } if (c.pc != 0x00278E38u) [[unlikely]] return; }
L_00278E38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00278E3C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278E64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 193u, depth + 1u); else { c.pc = 0x00289A70u; return; } if (c.pc != 0x00278E64u) [[unlikely]] return; }
L_00278E64:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278E80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00278F00; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23312u);
    set32(c.r[2], c.r[2].w[0] + 23368u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00278EE8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278EDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00278EDCu) [[unlikely]] return; }
L_00278EDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278EE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00278EE8u) [[unlikely]] return; }
L_00278EE8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00278F04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278F00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00278F00u) [[unlikely]] return; }
L_00278F00:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00278F04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00278F20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00278E80u | kUnwind; return; } goto L_00278E80; }
L_00278F30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278F4Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 339u, depth + 1u); else { c.pc = 0x002A3280u; return; } if (c.pc != 0x00278F4Cu) [[unlikely]] return; }
L_00278F4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 23408u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] + 8u);  goto L_00278F80; }
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30384u), c.r[16].w[0]);  if (t) { goto L_00278FC0; } }
    set32(c.r[2], c.r[3].w[0] + 8u);
    c.budget -= 1;
L_00278F80:
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 16u)));  goto L_00278FA0; }
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_00278FBC; } }
L_00278F98:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 2;
L_00278FA0:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00278F98u | kUnwind; return; } goto L_00278F98; } }
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 2;
L_00278FBC:
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 1;
L_00278FC0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00278FE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00279078; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 23408u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 16u)));  goto L_0027901C; }
    st32((c.r[28].w[0] - 30384u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 2;
L_0027901C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  goto L_00279030; }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
L_00279030:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_00279044; }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00279054; } }
L_00279044:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00279058; }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_00279054:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00279058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279060u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 342u, depth + 1u); else { c.pc = 0x002A32F0u; return; } if (c.pc != 0x00279060u) [[unlikely]] return; }
L_00279060:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0027907C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279078u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00279078u) [[unlikely]] return; }
L_00279078:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027907C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00279090:
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002790C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[5].w[0] + 16u)));  if (t) { goto L_002790B4; } }
L_002790A4:
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002790C4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 1;
L_002790B4:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002790A4u | kUnwind; return; } goto L_002790A4; } }
L_002790C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002790D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 30384u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00279114; } }
L_002790F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279104u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279104u) [[unlikely]] return; }
L_00279104:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279110u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 118u, depth + 1u); else { c.pc = 0x00279090u; return; } if (c.pc != 0x00279110u) [[unlikely]] return; }
L_00279110:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00279114:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002790F4u | kUnwind; return; } goto L_002790F4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00279140:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027915Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0027915Cu) [[unlikely]] return; }
L_0027915C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279168u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x00279168u) [[unlikely]] return; }
L_00279168:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 23440u);
    set32(c.r[3], c.r[3].w[0] + 23496u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32668u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4E430000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 17747ull;
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 76u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 22;
L_002791C0:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 120u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002791C0u | kUnwind; return; } goto L_002791C0; } }
    st32((c.r[16].w[0] + 132u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002791F0u); st32((c.r[16].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_0056(c, 178u, depth + 1u); else { c.pc = 0x00279800u; return; } if (c.pc != 0x002791F0u) [[unlikely]] return; }
L_002791F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002791F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x002795F0u; return; } if (c.pc != 0x002791F8u) [[unlikely]] return; }
L_002791F8:
    set32(c.r[4], c.r[29].w[0] + 60u);
    set32(c.r[5], c.r[29].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279208u); set32(c.r[6], 0u + 17u);  if (depth < kMaxDepth) unit_0012(c, 284u, depth + 1u); else { c.pc = 0x0016BDC0u; return; } if (c.pc != 0x00279208u) [[unlikely]] return; }
L_00279208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279210u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00279210u) [[unlikely]] return; }
L_00279210:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), c.r[2].w[0]);  goto L_00279240; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF3000000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 56u)));
    c.r[7].d[0] = c.r[2].d[0] | 17ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027923Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x0027923Cu) [[unlikely]] return; }
L_0027923C:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_00279240:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002792AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279250u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 292u, depth + 1u); else { c.pc = 0x003C3560u; return; } if (c.pc != 0x00279250u) [[unlikely]] return; }
L_00279250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279258u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00279258u) [[unlikely]] return; }
L_00279258:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 112u), c.r[17].w[0]);  goto L_00279280; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027926Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x0027926Cu) [[unlikely]] return; }
L_0027926C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279278u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 71u, depth + 1u); else { c.pc = 0x002007B0u; return; } if (c.pc != 0x00279278u) [[unlikely]] return; }
L_00279278:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 112u), c.r[17].w[0]);
    c.budget -= 2;
L_00279280:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002792AC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] - 5056u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002792A4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002792A4u) [[unlikely]] return; }
L_002792A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002792CC; } }
L_002792AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002792B8u); set32(c.r[4], c.r[4].w[0] - 5024u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002792B8u) [[unlikely]] return; }
L_002792B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_002792CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002792E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  goto L_0027931C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 112u), 0u);  goto L_00279318; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279314u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279314u) [[unlikely]] return; }
L_00279314:
    st32((c.r[16].w[0] + 112u), 0u);
    c.budget -= 1;
L_00279318:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_0027931C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0027933C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279334u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279334u) [[unlikely]] return; }
L_00279334:
    st32((c.r[16].w[0] + 80u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0027933C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279344u);  if (depth < kMaxDepth) unit_0056(c, 159u, depth + 1u); else { c.pc = 0x00279570u; return; } if (c.pc != 0x00279344u) [[unlikely]] return; }
L_00279344:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279350u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 178u, depth + 1u); else { c.pc = 0x00279800u; return; } if (c.pc != 0x00279350u) [[unlikely]] return; }
L_00279350:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002793A8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002793A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002793A4u); set32(c.r[4], ld32((c.r[4].w[0] + 112u)));  if (depth < kMaxDepth) unit_0038(c, 81u, depth + 1u); else { c.pc = 0x00200990u; return; } if (c.pc != 0x002793A4u) [[unlikely]] return; }
L_002793A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002793A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002793B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00279554; }
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002793F0u); c.r[4].d[0] = c.r[2].d[0] & 1ull;  if (depth < kMaxDepth) unit_0011(c, 3u, depth + 1u); else { c.pc = 0x00164070u; return; } if (c.pc != 0x002793F0u) [[unlikely]] return; }
L_002793F0:
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 72u)));  goto L_00279410; }
    c.f[12] = ld32((c.r[19].w[0] + 116u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027940Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 286u, depth + 1u); else { c.pc = 0x00162AB0u; return; } if (c.pc != 0x0027940Cu) [[unlikely]] return; }
L_0027940C:
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    c.budget -= 1;
L_00279410:
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_00279428; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279424u); set32(c.r[4], ld32((c.r[19].w[0] + 112u)));  if (depth < kMaxDepth) unit_0038(c, 83u, depth + 1u); else { c.pc = 0x002009D0u; return; } if (c.pc != 0x00279424u) [[unlikely]] return; }
L_00279424:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00279428:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00279550; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0027944C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_00279494; } }
L_0027944C:
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00279494; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00279494; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00279494; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_00279494:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00279550; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 24u)));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002794B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002794B0u) [[unlikely]] return; }
L_002794B0:
    set32(c.r[4], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002794C0u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x002794C0u) [[unlikely]] return; }
L_002794C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002794F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002794D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002794D4u) [[unlikely]] return; }
L_002794D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[3], 0u + 5500u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002794F4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 233u, depth + 1u); else { c.pc = 0x00162040u; return; } if (c.pc != 0x002794F4u) [[unlikely]] return; }
L_002794F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002794F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279500u);  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00279500u) [[unlikely]] return; }
L_00279500:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[3], 0u + 6000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279520u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 233u, depth + 1u); else { c.pc = 0x00162040u; return; } if (c.pc != 0x00279520u) [[unlikely]] return; }
L_00279520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279528u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00279528u) [[unlikely]] return; }
L_00279528:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279540u); st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00279540u) [[unlikely]] return; }
L_00279540:
    set32(c.r[4], ld32((c.r[18].w[0] + 352u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279550u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x00279550u) [[unlikely]] return; }
L_00279550:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00279554:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00279570:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 8;
L_00279590:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 120u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 120u);  if (t) { goto L_002795B4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002795B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002795B0u) [[unlikely]] return; }
L_002795B0:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002795B4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00279590u | kUnwind; return; } goto L_00279590; }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002795D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 294u, depth + 1u); else { c.pc = 0x003C3580u; return; } if (c.pc != 0x002795D4u) [[unlikely]] return; }
L_002795D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002795F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279610u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0056(c, 159u, depth + 1u); else { c.pc = 0x00279570u; return; } if (c.pc != 0x00279610u) [[unlikely]] return; }
L_00279610:
    set32(c.r[2], ld32((c.r[19].w[0] + 132u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0027962C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 72u);  if (t) { goto L_0027963C; } }
L_0027962C:
    set32(c.r[17], 0u + 64u);
    set32(c.r[18], 0u + 1u);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 72u);
    c.budget -= 4;
L_0027963C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279644u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00279644u) [[unlikely]] return; }
L_00279644:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 120u), c.r[2].w[0]);  goto L_00279674; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF3000000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] | 2ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279670u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x00279670u) [[unlikely]] return; }
L_00279670:
    st32((c.r[19].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 1;
L_00279674:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00279734; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279684u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00279684u) [[unlikely]] return; }
L_00279684:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 124u), c.r[2].w[0]);  goto L_002796B4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF3000000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] | 2ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002796B0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x002796B0u) [[unlikely]] return; }
L_002796B0:
    st32((c.r[19].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 1;
L_002796B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00279730; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 120u)));  goto L_0027971C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002796CCu);  if (depth < kMaxDepth) unit_0010(c, 57u, depth + 1u); else { c.pc = 0x00160990u; return; } if (c.pc != 0x002796CCu) [[unlikely]] return; }
L_002796CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002796D4u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002796D4u) [[unlikely]] return; }
L_002796D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 128u), c.r[2].w[0]);  goto L_00279704; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF3000000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] | 2ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279700u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x00279700u) [[unlikely]] return; }
L_00279700:
    st32((c.r[19].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 1;
L_00279704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00279730; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279718u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 125u, depth + 1u); else { c.pc = 0x0015D370u; return; } if (c.pc != 0x00279718u) [[unlikely]] return; }
L_00279718:
    set32(c.r[4], ld32((c.r[19].w[0] + 120u)));
    c.budget -= 1;
L_0027971C:
    set32(c.r[6], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279728u); set32(c.r[5], ld32((c.r[19].w[0] + 124u)));  if (depth < kMaxDepth) unit_00A8(c, 294u, depth + 1u); else { c.pc = 0x003C3580u; return; } if (c.pc != 0x00279728u) [[unlikely]] return; }
L_00279728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00279740; } }
L_00279730:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00279734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027973Cu);  if (depth < kMaxDepth) unit_0056(c, 159u, depth + 1u); else { c.pc = 0x00279570u; return; } if (c.pc != 0x0027973Cu) [[unlikely]] return; }
L_0027973C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00279740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00279760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002797B0; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u + 1u);  goto L_002797A0; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00279790; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002797F0; } }
L_00279790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279798u);  if (depth < kMaxDepth) unit_0056(c, 178u, depth + 1u); else { c.pc = 0x00279800u; return; } if (c.pc != 0x00279798u) [[unlikely]] return; }
L_00279798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002797EC; } }
L_002797A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002797A8u);  if (depth < kMaxDepth) unit_0056(c, 178u, depth + 1u); else { c.pc = 0x00279800u; return; } if (c.pc != 0x002797A8u) [[unlikely]] return; }
L_002797A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002797EC; } }
L_002797B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002797E4; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 9;
L_002797E4:
    set32(c.r[3], ld32((c.r[3].w[0] + 428u)));
    st32((c.r[4].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 2;
L_002797EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002797F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00279800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 4976u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 10;
L_00279828:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279838u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 192u, depth + 1u); else { c.pc = 0x001B15E0u; return; } if (c.pc != 0x00279838u) [[unlikely]] return; }
L_00279838:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00279828u | kUnwind; return; } goto L_00279828; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00279860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279870u);  if (depth < kMaxDepth) unit_0013(c, 317u, depth + 1u); else { c.pc = 0x0016F560u; return; } if (c.pc != 0x00279870u) [[unlikely]] return; }
L_00279870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279878u);  if (depth < kMaxDepth) unit_0010(c, 72u, depth + 1u); else { c.pc = 0x00160B70u; return; } if (c.pc != 0x00279878u) [[unlikely]] return; }
L_00279878:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00279890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002798F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23440u);
    set32(c.r[2], c.r[2].w[0] + 23496u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002798D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002798D0u) [[unlikely]] return; }
L_002798D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002798DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002798DCu) [[unlikely]] return; }
L_002798DC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002798F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002798F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002798F4u) [[unlikely]] return; }
L_002798F4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002798F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00279910:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00279890u | kUnwind; return; } goto L_00279890; }
L_00279920:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00279760u | kUnwind; return; } goto L_00279760; }
L_00279930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027994Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0027994Cu) [[unlikely]] return; }
L_0027994C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279958u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x00279958u) [[unlikely]] return; }
L_00279958:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 23520u);
    set32(c.r[3], c.r[3].w[0] + 23576u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], 0u + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x49410000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 19795ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    st32((c.r[28].w[0] - 30380u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    st32((c.r[16].w[0] + 144u), 0u);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 152u), 0u);
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 164u), 0u);
    st32((c.r[16].w[0] + 168u), 0u);
    st32((c.r[16].w[0] + 172u), 0u);
    st32((c.r[16].w[0] + 176u), 0u);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[2].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[2].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[2].w[0] + 60u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[2].w[0] + 68u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[2].w[0] + 72u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 60;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279A48u); st32((c.r[2].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00279A48u) [[unlikely]] return; }
L_00279A48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 120u), c.r[2].w[0]);  goto L_00279A6C; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00279A5C; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_00279A5C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279A68u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 124u, depth + 1u); else { c.pc = 0x00291200u; return; } if (c.pc != 0x00279A68u) [[unlikely]] return; }
L_00279A68:
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 1;
L_00279A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279A74u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00279A74u) [[unlikely]] return; }
L_00279A74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 156u), c.r[2].w[0]);  goto L_00279A98; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00279A88; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_00279A88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279A94u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 50u, depth + 1u); else { c.pc = 0x002B06F0u; return; } if (c.pc != 0x00279A94u) [[unlikely]] return; }
L_00279A94:
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 1;
L_00279A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279AA0u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00279AA0u) [[unlikely]] return; }
L_00279AA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 160u), c.r[2].w[0]);  goto L_00279AC4; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00279AB4; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_00279AB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279AC0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 226u, depth + 1u); else { c.pc = 0x002CA310u; return; } if (c.pc != 0x00279AC0u) [[unlikely]] return; }
L_00279AC0:
    st32((c.r[16].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 1;
L_00279AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279ACCu); set32(c.r[4], 0u + 164u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00279ACCu) [[unlikely]] return; }
L_00279ACC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), c.r[2].w[0]);  goto L_00279AF0; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00279AE0; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_00279AE0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279AECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 101u, depth + 1u); else { c.pc = 0x002B0B80u; return; } if (c.pc != 0x00279AECu) [[unlikely]] return; }
L_00279AEC:
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 1;
L_00279AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279AF8u); set32(c.r[4], 0u + 336u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00279AF8u) [[unlikely]] return; }
L_00279AF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 144u), c.r[2].w[0]);  goto L_00279B1C; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00279B0C; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_00279B0C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B18u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 340u, depth + 1u); else { c.pc = 0x00266DF0u; return; } if (c.pc != 0x00279B18u) [[unlikely]] return; }
L_00279B18:
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 1;
L_00279B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B24u); set32(c.r[4], 0u + 336u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00279B24u) [[unlikely]] return; }
L_00279B24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 136u), c.r[2].w[0]);  goto L_00279B48; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00279B38; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_00279B38:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B44u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 238u, depth + 1u); else { c.pc = 0x00265C90u; return; } if (c.pc != 0x00279B44u) [[unlikely]] return; }
L_00279B44:
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 1;
L_00279B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B50u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00279B50u) [[unlikely]] return; }
L_00279B50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 128u), c.r[2].w[0]);  goto L_00279B68; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B64u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x00279B64u) [[unlikely]] return; }
L_00279B64:
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 1;
L_00279B68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B70u); set32(c.r[4], 0u + 180u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00279B70u) [[unlikely]] return; }
L_00279B70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 132u), c.r[2].w[0]);  goto L_00279B94; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00279B84; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_00279B84:
    set32(c.r[5], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B90u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 105u, depth + 1u); else { c.pc = 0x0028D240u; return; } if (c.pc != 0x00279B90u) [[unlikely]] return; }
L_00279B90:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 1;
L_00279B94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B9Cu); set32(c.r[4], 0u + 184u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00279B9Cu) [[unlikely]] return; }
L_00279B9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 140u), c.r[2].w[0]);  goto L_00279BC0; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00279BB0; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_00279BB0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279BBCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 223u, depth + 1u); else { c.pc = 0x0029A640u; return; } if (c.pc != 0x00279BBCu) [[unlikely]] return; }
L_00279BBC:
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 1;
L_00279BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279BC8u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00279BC8u) [[unlikely]] return; }
L_00279BC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 124u), c.r[2].w[0]);  goto L_00279BEC; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00279BDC; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_00279BDC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279BE8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 419u, depth + 1u); else { c.pc = 0x002678E0u; return; } if (c.pc != 0x00279BE8u) [[unlikely]] return; }
L_00279BE8:
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 1;
L_00279BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279BF4u); set32(c.r[4], 0u + 84u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00279BF4u) [[unlikely]] return; }
L_00279BF4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  goto L_00279C18; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00279C08; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_00279C08:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279C14u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 294u, depth + 1u); else { c.pc = 0x002C33F0u; return; } if (c.pc != 0x00279C14u) [[unlikely]] return; }
L_00279C14:
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 1;
L_00279C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279C20u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00279C20u) [[unlikely]] return; }
L_00279C20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 164u), c.r[2].w[0]);  goto L_00279C38; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279C34u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 359u, depth + 1u); else { c.pc = 0x002C3DA0u; return; } if (c.pc != 0x00279C34u) [[unlikely]] return; }
L_00279C34:
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 1;
L_00279C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279C40u); set32(c.r[4], 0u + 132u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00279C40u) [[unlikely]] return; }
L_00279C40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  goto L_00279C58; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279C54u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 42u, depth + 1u); else { c.pc = 0x002C4600u; return; } if (c.pc != 0x00279C54u) [[unlikely]] return; }
L_00279C54:
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 1;
L_00279C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279C60u); set32(c.r[4], 0u + 120u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00279C60u) [[unlikely]] return; }
L_00279C60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 172u), c.r[2].w[0]);  goto L_00279C84; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00279C74; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_00279C74:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279C80u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 222u, depth + 1u); else { c.pc = 0x002C6500u; return; } if (c.pc != 0x00279C80u) [[unlikely]] return; }
L_00279C80:
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 1;
L_00279C84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279C8Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00279C8Cu) [[unlikely]] return; }
L_00279C8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00279CA0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279CA0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 284u, depth + 1u); else { c.pc = 0x002E6590u; return; } if (c.pc != 0x00279CA0u) [[unlikely]] return; }
L_00279CA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279CB0u); set32(c.r[4], c.r[4].w[0] - 4944u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00279CB0u) [[unlikely]] return; }
L_00279CB0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00279CD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279CE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 173u, depth + 1u); else { c.pc = 0x002D5E90u; return; } if (c.pc != 0x00279CE4u) [[unlikely]] return; }
L_00279CE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[28].w[0] - 30380u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279CF4u); set32(c.r[4], c.r[4].w[0] - 4912u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00279CF4u) [[unlikely]] return; }
L_00279CF4:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279D20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00279D48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D44u);  if (depth < kMaxDepth) unit_006D(c, 189u, depth + 1u); else { c.pc = 0x002D60A0u; return; } if (c.pc != 0x00279D44u) [[unlikely]] return; }
L_00279D44:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00279D48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00279D50:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(27ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0027AA30; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 4752u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_0056[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00279D98:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0027AA30; } }
L_00279DA4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279DB4u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00279DB4u) [[unlikely]] return; }
L_00279DB4:
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00279DC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 176u)));  if (t) { goto L_00279DDC; } }
L_00279DC8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_00279DDC; }
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_00279DDC:
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00279E00; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00279E00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279E00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00279E00u) [[unlikely]] return; }
L_00279E00:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));  goto L_00279E28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279E10u);  if (depth < kMaxDepth) unit_0024(c, 612u, depth + 1u); else { c.pc = 0x001B3FA0u; return; } if (c.pc != 0x00279E10u) [[unlikely]] return; }
L_00279E10:
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[2].w[0] - 2001u);  if (t) { goto L_00279E4C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_00279E4C; } }
L_00279E28:
    set32(c.r[4], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[4].sd[0] < 0) { set32(c.r[3], ld32((c.r[18].w[0] + 76u)));  goto L_00279E50; }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279E44u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 13u, depth + 1u); else { c.pc = 0x001B80E0u; return; } if (c.pc != 0x00279E44u) [[unlikely]] return; }
L_00279E44:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_00279E4C:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_00279E50:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 2;
L_00279E58:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 7;
L_00279E74:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 76u)));  goto L_00279EA0; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0027AA30; } }
L_00279EA0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 2;
L_00279EA8:
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 124u)));  goto L_00279FB8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30376u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00279FB4; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], 0u + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279ED8u); st32((c.r[18].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00279ED8u) [[unlikely]] return; }
L_00279ED8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 80u), c.r[17].w[0]);  goto L_00279F1C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279EF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 33u, depth + 1u); else { c.pc = 0x002905E0u; return; } if (c.pc != 0x00279EF4u) [[unlikely]] return; }
L_00279EF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279F00u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 37u, depth + 1u); else { c.pc = 0x002906B0u; return; } if (c.pc != 0x00279F00u) [[unlikely]] return; }
L_00279F00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279F14u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 348u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x00279F14u) [[unlikely]] return; }
L_00279F14:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 80u), c.r[17].w[0]);
    c.budget -= 2;
L_00279F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279F24u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x00279F24u) [[unlikely]] return; }
L_00279F24:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279F34u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 34u, depth + 1u); else { c.pc = 0x002BC4C0u; return; } if (c.pc != 0x00279F34u) [[unlikely]] return; }
L_00279F34:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 3;
L_00279F40:
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[5].w[0] + 60u)));  goto L_00279F64; }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  goto L_0027AA34; }
    set32(c.r[5], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 1;
L_00279F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279F6Cu); set32(c.r[4], ld32((c.r[18].w[0] + 120u)));  if (depth < kMaxDepth) unit_005C(c, 129u, depth + 1u); else { c.pc = 0x002912C0u; return; } if (c.pc != 0x00279F6Cu) [[unlikely]] return; }
L_00279F6C:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));  goto L_00279F90; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279F88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279F88u) [[unlikely]] return; }
L_00279F88:
    st32((c.r[18].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 2;
L_00279F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279F98u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0056(c, 443u, depth + 1u); else { c.pc = 0x0027BAF0u; return; } if (c.pc != 0x00279F98u) [[unlikely]] return; }
L_00279F98:
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[18].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0027AA30; } }
L_00279FB4:
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 1;
L_00279FB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 132u)));  goto L_0027A2D4; }
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027A2D0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30372u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027A2D0; } }
    set32(c.r[3], 0u + 5u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] | 32768ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], 0u + 88u);  goto L_0027A01C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], 0u + 88u);
    c.budget -= 4;
L_0027A01C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A024u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0027A024u) [[unlikely]] return; }
L_0027A024:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 80u), c.r[17].w[0]);  goto L_0027A08C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A054u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 33u, depth + 1u); else { c.pc = 0x002905E0u; return; } if (c.pc != 0x0027A054u) [[unlikely]] return; }
L_0027A054:
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A070u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 39u, depth + 1u); else { c.pc = 0x002906F0u; return; } if (c.pc != 0x0027A070u) [[unlikely]] return; }
L_0027A070:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A084u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 348u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x0027A084u) [[unlikely]] return; }
L_0027A084:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 80u), c.r[17].w[0]);
    c.budget -= 2;
L_0027A08C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A094u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0027A094u) [[unlikely]] return; }
L_0027A094:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A0A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 34u, depth + 1u); else { c.pc = 0x002BC4C0u; return; } if (c.pc != 0x0027A0A4u) [[unlikely]] return; }
L_0027A0A4:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 3;
L_0027A0B0:
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[5].w[0] + 60u)));  goto L_0027A0D4; }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027AA30; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 1;
L_0027A0D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A0DCu); set32(c.r[4], ld32((c.r[18].w[0] + 124u)));  if (depth < kMaxDepth) unit_0052(c, 7u, depth + 1u); else { c.pc = 0x002681B0u; return; } if (c.pc != 0x0027A0DCu) [[unlikely]] return; }
L_0027A0DC:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 76u)));  goto L_0027A100; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A0F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A0F8u) [[unlikely]] return; }
L_0027A0F8:
    st32((c.r[18].w[0] + 80u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 2;
L_0027A100:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0027AA30; } }
L_0027A10C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A114u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0027A114u) [[unlikely]] return; }
L_0027A114:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 80u), c.r[17].w[0]);  goto L_0027A17C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A144u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 33u, depth + 1u); else { c.pc = 0x002905E0u; return; } if (c.pc != 0x0027A144u) [[unlikely]] return; }
L_0027A144:
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A160u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_005C(c, 39u, depth + 1u); else { c.pc = 0x002906F0u; return; } if (c.pc != 0x0027A160u) [[unlikely]] return; }
L_0027A160:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A174u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 348u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x0027A174u) [[unlikely]] return; }
L_0027A174:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 80u), c.r[17].w[0]);
    c.budget -= 2;
L_0027A17C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A184u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0027A184u) [[unlikely]] return; }
L_0027A184:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A194u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 34u, depth + 1u); else { c.pc = 0x002BC4C0u; return; } if (c.pc != 0x0027A194u) [[unlikely]] return; }
L_0027A194:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 3;
L_0027A1A0:
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[5].w[0] + 60u)));  goto L_0027A1C4; }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027AA30; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 1;
L_0027A1C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A1CCu); set32(c.r[4], ld32((c.r[18].w[0] + 124u)));  if (depth < kMaxDepth) unit_0052(c, 55u, depth + 1u); else { c.pc = 0x002687D0u; return; } if (c.pc != 0x0027A1CCu) [[unlikely]] return; }
L_0027A1CC:
    set32(c.r[3], ld32((c.r[18].w[0] + 124u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 124u)));  goto L_0027A200; }
    set32(c.r[4], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027A1FC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A1FCu); set32(c.r[5], ld32((c.r[2].w[0] + 84u)));  if (depth < kMaxDepth) unit_0051(c, 349u, depth + 1u); else { c.pc = 0x00266F00u; return; } if (c.pc != 0x0027A1FCu) [[unlikely]] return; }
L_0027A1FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 1;
L_0027A200:
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0027A230; }
    set32(c.r[3], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0027A230; }
    set32(c.r[2], ld32((c.r[2].w[0] + 104u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], ld32((c.r[3].w[0] + 4u)));  goto L_0027A230; }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027A230:
    set32(c.r[4], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A23Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 306u, depth + 1u); else { c.pc = 0x002C35A0u; return; } if (c.pc != 0x0027A23Cu) [[unlikely]] return; }
L_0027A23C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  goto L_0027A254; }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0027A260; } }
L_0027A254:
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_0027A260:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0027AA30; } }
L_0027A270:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  goto L_0027A298; }
    set32(c.r[2], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A28Cu); set32(c.r[4], ld32((c.r[2].w[0] + 72u)));  if (depth < kMaxDepth) unit_0068(c, 244u, depth + 1u); else { c.pc = 0x002C2CC0u; return; } if (c.pc != 0x0027A28Cu) [[unlikely]] return; }
L_0027A28C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027AA30; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 1;
L_0027A298:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 84u)));  goto L_0027A2B8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A2B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A2B0u) [[unlikely]] return; }
L_0027A2B0:
    st32((c.r[18].w[0] + 80u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 2;
L_0027A2B8:
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[18].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0027AA30; } }
L_0027A2D0:
    set32(c.r[2], ld32((c.r[18].w[0] + 132u)));
    c.budget -= 1;
L_0027A2D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 18u);  goto L_0027A63C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027A638; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30372u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027A638; } }
    set32(c.r[3], 0u + 10u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 132u)));
    set32(c.r[4], 0u + 88u);
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A324u); st32((c.r[5].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0027A324u) [[unlikely]] return; }
L_0027A324:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { st32((c.r[18].w[0] + 80u), c.r[19].w[0]);  goto L_0027A370; }
    set32(c.r[16], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A340u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 33u, depth + 1u); else { c.pc = 0x002905E0u; return; } if (c.pc != 0x0027A340u) [[unlikely]] return; }
L_0027A340:
    set32(c.r[5], ld32((c.r[16].w[0] + 520u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A354u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 42u, depth + 1u); else { c.pc = 0x00290770u; return; } if (c.pc != 0x0027A354u) [[unlikely]] return; }
L_0027A354:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A368u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 348u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x0027A368u) [[unlikely]] return; }
L_0027A368:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 80u), c.r[19].w[0]);
    c.budget -= 2;
L_0027A370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A378u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0027A378u) [[unlikely]] return; }
L_0027A378:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A388u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 34u, depth + 1u); else { c.pc = 0x002BC4C0u; return; } if (c.pc != 0x0027A388u) [[unlikely]] return; }
L_0027A388:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 3;
L_0027A394:
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[5].w[0] + 60u)));  goto L_0027A3B8; }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027AA30; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 1;
L_0027A3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A3C0u); set32(c.r[4], ld32((c.r[18].w[0] + 132u)));  if (depth < kMaxDepth) unit_005B(c, 188u, depth + 1u); else { c.pc = 0x0028DD40u; return; } if (c.pc != 0x0027A3C0u) [[unlikely]] return; }
L_0027A3C0:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 76u)));  goto L_0027A3E4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A3DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A3DCu) [[unlikely]] return; }
L_0027A3DC:
    st32((c.r[18].w[0] + 80u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 2;
L_0027A3E4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0027AA30; } }
L_0027A3F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A3F8u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0027A3F8u) [[unlikely]] return; }
L_0027A3F8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { st32((c.r[18].w[0] + 80u), c.r[19].w[0]);  goto L_0027A444; }
    set32(c.r[16], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A414u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 33u, depth + 1u); else { c.pc = 0x002905E0u; return; } if (c.pc != 0x0027A414u) [[unlikely]] return; }
L_0027A414:
    set32(c.r[5], ld32((c.r[16].w[0] + 520u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A428u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 42u, depth + 1u); else { c.pc = 0x00290770u; return; } if (c.pc != 0x0027A428u) [[unlikely]] return; }
L_0027A428:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A43Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 348u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x0027A43Cu) [[unlikely]] return; }
L_0027A43C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 80u), c.r[19].w[0]);
    c.budget -= 2;
L_0027A444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A44Cu);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0027A44Cu) [[unlikely]] return; }
L_0027A44C:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A45Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 34u, depth + 1u); else { c.pc = 0x002BC4C0u; return; } if (c.pc != 0x0027A45Cu) [[unlikely]] return; }
L_0027A45C:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 3;
L_0027A468:
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[5].w[0] + 60u)));  goto L_0027A48C; }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027AA30; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 1;
L_0027A48C:
    set32(c.r[4], ld32((c.r[18].w[0] + 132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A498u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 209u, depth + 1u); else { c.pc = 0x0028DFB0u; return; } if (c.pc != 0x0027A498u) [[unlikely]] return; }
L_0027A498:
    set32(c.r[2], ld32((c.r[18].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0027A4B0; }
    set32(c.r[5], ld32((c.r[2].w[0] + 120u)));
    c.budget -= 1;
L_0027A4B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A4B8u); set32(c.r[4], ld32((c.r[18].w[0] + 140u)));  if (depth < kMaxDepth) unit_005E(c, 243u, depth + 1u); else { c.pc = 0x0029A980u; return; } if (c.pc != 0x0027A4B8u) [[unlikely]] return; }
L_0027A4B8:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0027AA30; } }
L_0027A4C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A4D0u); set32(c.r[4], ld32((c.r[18].w[0] + 140u)));  if (depth < kMaxDepth) unit_005E(c, 260u, depth + 1u); else { c.pc = 0x0029AC60u; return; } if (c.pc != 0x0027A4D0u) [[unlikely]] return; }
L_0027A4D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027AA30; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A4E4u); set32(c.r[4], ld32((c.r[18].w[0] + 132u)));  if (depth < kMaxDepth) unit_005B(c, 221u, depth + 1u); else { c.pc = 0x0028E0D0u; return; } if (c.pc != 0x0027A4E4u) [[unlikely]] return; }
L_0027A4E4:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0027A508; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A500u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A500u) [[unlikely]] return; }
L_0027A500:
    st32((c.r[18].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 2;
L_0027A508:
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 17u);  goto L_0027A5FC; }
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 3;
L_0027A524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A52Cu); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0027A52Cu) [[unlikely]] return; }
L_0027A52C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { st32((c.r[18].w[0] + 80u), c.r[19].w[0]);  goto L_0027A578; }
    set32(c.r[16], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A548u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 33u, depth + 1u); else { c.pc = 0x002905E0u; return; } if (c.pc != 0x0027A548u) [[unlikely]] return; }
L_0027A548:
    set32(c.r[5], ld32((c.r[16].w[0] + 520u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
L_0027A554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A55Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 42u, depth + 1u); else { c.pc = 0x00290770u; return; } if (c.pc != 0x0027A55Cu) [[unlikely]] return; }
L_0027A55C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A570u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 348u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x0027A570u) [[unlikely]] return; }
L_0027A570:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 80u), c.r[19].w[0]);
    c.budget -= 2;
L_0027A578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A580u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0027A580u) [[unlikely]] return; }
L_0027A580:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A590u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 34u, depth + 1u); else { c.pc = 0x002BC4C0u; return; } if (c.pc != 0x0027A590u) [[unlikely]] return; }
L_0027A590:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 3;
L_0027A59C:
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[5].w[0] + 60u)));  goto L_0027A5C0; }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027AA30; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 1;
L_0027A5C0:
    set32(c.r[4], ld32((c.r[18].w[0] + 132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A5CCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_005B(c, 209u, depth + 1u); else { c.pc = 0x0028DFB0u; return; } if (c.pc != 0x0027A5CCu) [[unlikely]] return; }
L_0027A5CC:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 76u)));  goto L_0027A5F0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A5E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A5E8u) [[unlikely]] return; }
L_0027A5E8:
    st32((c.r[18].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 2;
L_0027A5F0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 2;
L_0027A5F8:
    set32(c.r[2], 0u + 17u);
    c.budget -= 1;
L_0027A5FC:
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A618u); set32(c.r[4], ld32((c.r[3].w[0] + 84u)));  if (depth < kMaxDepth) unit_0058(c, 28u, depth + 1u); else { c.pc = 0x002804A0u; return; } if (c.pc != 0x0027A618u) [[unlikely]] return; }
L_0027A618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A620u); set32(c.r[4], ld32((c.r[18].w[0] + 132u)));  if (depth < kMaxDepth) unit_005B(c, 226u, depth + 1u); else { c.pc = 0x0028E130u; return; } if (c.pc != 0x0027A620u) [[unlikely]] return; }
L_0027A620:
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 6;
L_0027A638:
    set32(c.r[2], 0u + 18u);
    c.budget -= 1;
L_0027A63C:
    set32(c.r[4], c.r[18].w[0] + 52u);
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A654u); set32(c.r[5], 0u + 11u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A654u) [[unlikely]] return; }
L_0027A654:
    set32(c.r[25], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[4], c.r[18].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A668u); set32(c.r[5], 0u + 19u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A668u) [[unlikely]] return; }
L_0027A668:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 5u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A688u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0027A688u) [[unlikely]] return; }
L_0027A688:
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0027A69C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 144u)));  if (t) { goto L_0027A6B0; } }
L_0027A69C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_0027A6B0; }
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_0027A6B0:
    set32(c.r[4], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_0027A6D8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0027A6D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A6D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0027A6D4u) [[unlikely]] return; }
L_0027A6D4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0027A6D8:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[5].d[0]) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_0027A6EC; }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0027AA30; } }
L_0027A6EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A6F4u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0027A6F4u) [[unlikely]] return; }
L_0027A6F4:
    set32(c.r[4], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0027A708; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 112u)));  if (t) { goto L_0027A71C; } }
L_0027A708:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_0027A71C; }
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_0027A71C:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 2u);  goto L_0027A744; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0027A740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A740u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0027A740u) [[unlikely]] return; }
L_0027A740:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0027A744:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 76u)));  goto L_0027A758; }
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0027AA30; } }
L_0027A758:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 2;
L_0027A760:
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027AA30; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 144u)));  goto L_0027A794; }
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 6;
L_0027A794:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 132u)));  goto L_0027A7B4; }
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 132u)));
    c.budget -= 6;
L_0027A7B4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 24u)));  goto L_0027A7D4; }
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 6;
L_0027A7D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0027AA30; } }
L_0027A7F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A7FCu); set32(c.r[16], 0u + 2432u);  if (depth < kMaxDepth) unit_00C0(c, 386u, depth + 1u); else { c.pc = 0x00422960u; return; } if (c.pc != 0x0027A7FCu) [[unlikely]] return; }
L_0027A7FC:
    set32(c.r[5], c.r[2].w[0] + 2432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A808u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 393u, depth + 1u); else { c.pc = 0x0027B4B0u; return; } if (c.pc != 0x0027A808u) [[unlikely]] return; }
L_0027A808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A810u); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 388u, depth + 1u); else { c.pc = 0x004229A0u; return; } if (c.pc != 0x0027A810u) [[unlikely]] return; }
L_0027A810:
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027A840; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A824u);  if (depth < kMaxDepth) unit_00C0(c, 388u, depth + 1u); else { c.pc = 0x004229A0u; return; } if (c.pc != 0x0027A824u) [[unlikely]] return; }
L_0027A824:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 4880u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A838u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0027A838u) [[unlikely]] return; }
L_0027A838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027AA30; } }
L_0027A840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A848u);  if (depth < kMaxDepth) unit_00C0(c, 388u, depth + 1u); else { c.pc = 0x004229A0u; return; } if (c.pc != 0x0027A848u) [[unlikely]] return; }
L_0027A848:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A85Cu); set32(c.r[4], c.r[4].w[0] - 4816u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0027A85Cu) [[unlikely]] return; }
L_0027A85C:
    set32(c.r[25], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[4], c.r[18].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A870u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A870u) [[unlikely]] return; }
L_0027A870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A878u); set32(c.r[4], ld32((c.r[18].w[0] + 132u)));  if (depth < kMaxDepth) unit_005B(c, 255u, depth + 1u); else { c.pc = 0x0028E770u; return; } if (c.pc != 0x0027A878u) [[unlikely]] return; }
L_0027A878:
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A88Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 243u, depth + 1u); else { c.pc = 0x0028E5A0u; return; } if (c.pc != 0x0027A88Cu) [[unlikely]] return; }
L_0027A88C:
    set32(c.r[4], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 144u)));  goto L_0027A8B0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 6;
L_0027A8B0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 132u)));  goto L_0027A8D0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 132u)));
    c.budget -= 6;
L_0027A8D0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 24u)));  goto L_0027A8F0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 6;
L_0027A8F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 7;
L_0027A90C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A91Cu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0027A91Cu) [[unlikely]] return; }
L_0027A91C:
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0027A930; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_0027A944; } }
L_0027A930:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_0027A944; }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_0027A944:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027A968; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0027A968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A968u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0027A968u) [[unlikely]] return; }
L_0027A968:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0027AA30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A978u); set32(c.r[4], ld32((c.r[18].w[0] + 148u)));  if (depth < kMaxDepth) unit_0064(c, 196u, depth + 1u); else { c.pc = 0x002B16A0u; return; } if (c.pc != 0x0027A978u) [[unlikely]] return; }
L_0027A978:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    st32((c.r[28].w[0] - 30280u), 0u);
    set32(c.r[4], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 76u)));  goto L_0027A9A0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A99Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A99Cu) [[unlikely]] return; }
L_0027A99C:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_0027A9A0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 2;
L_0027A9A8:
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027AA30; } }
    set32(c.r[3], 0u + 19u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0027AA30; } }
L_0027A9C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A9CCu); set32(c.r[4], ld32((c.r[18].w[0] + 148u)));  if (depth < kMaxDepth) unit_0064(c, 196u, depth + 1u); else { c.pc = 0x002B16A0u; return; } if (c.pc != 0x0027A9CCu) [[unlikely]] return; }
L_0027A9CC:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 3;
L_0027A9D8:
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027AA30; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[4], c.r[18].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A9FCu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A9FCu) [[unlikely]] return; }
L_0027A9FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0027AA0C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0027AA0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AA14u);  if (depth < kMaxDepth) unit_005B(c, 365u, depth + 1u); else { c.pc = 0x0028FC20u; return; } if (c.pc != 0x0027AA14u) [[unlikely]] return; }
L_0027AA14:
    set32(c.r[25], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[4], c.r[18].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AA28u); set32(c.r[5], 0u + 27u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027AA28u) [[unlikely]] return; }
L_0027AA28:
    set32(c.r[3], 0u + 19u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 2;
L_0027AA30:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_0027AA34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[12] = ld32((c.r[5].w[0] + 80u));  goto L_0027AA58; }
    c.f[12] = 0u;
    c.budget -= 1;
L_0027AA58:
    set32(c.r[4], ld32((c.r[28].w[0] - 30264u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0027AA70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AA6Cu);  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x0027AA6Cu) [[unlikely]] return; }
L_0027AA6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0027AA70:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0027AA90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0027AAB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AAB4u);  if (depth < kMaxDepth) unit_006D(c, 195u, depth + 1u); else { c.pc = 0x002D6110u; return; } if (c.pc != 0x0027AAB4u) [[unlikely]] return; }
L_0027AAB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0027AAB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027AAC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AAE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x0027AAE0u) [[unlikely]] return; }
L_0027AAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AAE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0027AAE8u) [[unlikely]] return; }
L_0027AAE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AAF8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x0027AAF8u) [[unlikely]] return; }
L_0027AAF8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027AB20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AB10u);  if (depth < kMaxDepth) unit_0064(c, 73u, depth + 1u); else { c.pc = 0x002B08C0u; return; } if (c.pc != 0x0027AB10u) [[unlikely]] return; }
L_0027AB10:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AB20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 190u, depth + 1u); else { c.pc = 0x002C2440u; return; } if (c.pc != 0x0027AB20u) [[unlikely]] return; }
L_0027AB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AB28u);  if (depth < kMaxDepth) unit_006A(c, 232u, depth + 1u); else { c.pc = 0x002CA3E0u; return; } if (c.pc != 0x0027AB28u) [[unlikely]] return; }
L_0027AB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AB30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0027AB30u) [[unlikely]] return; }
L_0027AB30:
    set32(c.r[4], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AB40u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x0027AB40u) [[unlikely]] return; }
L_0027AB40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027AB60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  goto L_0027AB84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AB80u);  if (depth < kMaxDepth) unit_0064(c, 77u, depth + 1u); else { c.pc = 0x002B0910u; return; } if (c.pc != 0x0027AB80u) [[unlikely]] return; }
L_0027AB80:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_0027AB84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AB8Cu);  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x0027AB8Cu) [[unlikely]] return; }
L_0027AB8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027ABA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30264u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.f[4] = ld32((c.r[16].w[0] + 108u));  goto L_0027ABC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ABC4u);  if (depth < kMaxDepth) unit_00A8(c, 168u, depth + 1u); else { c.pc = 0x003C1EF0u; return; } if (c.pc != 0x0027ABC4u) [[unlikely]] return; }
L_0027ABC4:
    c.f[4] = ld32((c.r[16].w[0] + 108u));
    c.budget -= 1;
L_0027ABC8:
    c.f[3] = 0u;
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[4]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0027AC5C; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[3] = ld32((c.r[5].w[0] + 80u));  goto L_0027AC00; }
L_0027AC00:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = 0u;
    c.f[0] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 104u), c.f[2]);  if (t) { goto L_0027AC30; } }
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[1]);
    c.budget -= 2;
L_0027AC30:
    c.f[3] = ld32((c.r[16].w[0] + 112u));
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    st32((c.r[3].w[0] + 64u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
L_0027AC5C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027AC70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0027ACB4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[7], 0u - 1u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ACB0u); c.r[10].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0027ACC0u; return; } if (c.pc != 0x0027ACB0u) [[unlikely]] return; }
L_0027ACB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0027ACB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027ACC0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 160u), c.r[5].w[0]);  if (t) { goto L_0027AD24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027B014; } }
L_0027AD24:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_0027AD38; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_0027AD78; } }
L_0027AD38:
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[3].d[0]) { c.r[30].d[0] = 0ull + 0ull;  goto L_0027AD7C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[20].w[0] + 52u)));  goto L_0027AD68; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 8u), c.r[19].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 3;
L_0027AD68:
    set32(c.r[4], c.r[20].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AD78u); set32(c.r[5], 0u + 10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027AD78u) [[unlikely]] return; }
L_0027AD78:
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027AD7C:
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { set32(c.r[30], 0u + 1u);  goto L_0027ADAC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0027ADAC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0027ADAC; } }
    set32(c.r[30], 0u + 1u);
    c.budget -= 1;
L_0027ADAC:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_0027ADCC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], c.r[19].w[0] + 176u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[18].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 6;
L_0027ADCC:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_0027ADF0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], c.r[19].w[0] + 176u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] >> 4);
    c.r[17].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 7;
L_0027ADF0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0027AE00; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 520u)));
    c.budget -= 2;
L_0027AE00:
    c.budget -= 2;
    if (c.r[21].sd[0] >= 0) { set32(c.r[2], ld32((c.r[20].w[0] + 132u)));  goto L_0027AE14; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[21], ld32((c.r[2].w[0] + 524u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 132u)));
    c.budget -= 3;
L_0027AE14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 124u)));  goto L_0027AEC4; }
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 84u)));  goto L_0027AE48; }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_0027AE44; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_0027AE74; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 520u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0027AE74; } }
L_0027AE44:
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    c.budget -= 1;
L_0027AE48:
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[20].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AE5Cu); set32(c.r[4], ld32((c.r[20].w[0] + 132u)));  if (depth < kMaxDepth) unit_005B(c, 211u, depth + 1u); else { c.pc = 0x0028E000u; return; } if (c.pc != 0x0027AE5Cu) [[unlikely]] return; }
L_0027AE5C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[23], 0u + 1u);  goto L_0027AE74; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 520u), c.r[16].w[0]);
    set32(c.r[23], 0u + 1u);
    c.budget -= 3;
L_0027AE74:
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 132u)));  goto L_0027AE98; }
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] < 0;  if (t) { goto L_0027AEC0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 524u)));
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_0027AEC0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 132u)));
    c.budget -= 1;
L_0027AE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AEA0u);  if (depth < kMaxDepth) unit_005B(c, 235u, depth + 1u); else { c.pc = 0x0028E3F0u; return; } if (c.pc != 0x0027AEA0u) [[unlikely]] return; }
L_0027AEA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 132u)));  goto L_0027AEB8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 524u), c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 132u)));
    c.budget -= 3;
L_0027AEB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AEC0u);  if (depth < kMaxDepth) unit_005B(c, 226u, depth + 1u); else { c.pc = 0x0028E130u; return; } if (c.pc != 0x0027AEC0u) [[unlikely]] return; }
L_0027AEC0:
    set32(c.r[2], ld32((c.r[20].w[0] + 124u)));
    c.budget -= 1;
L_0027AEC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027AFB0; } }
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 84u)));  goto L_0027AEF8; }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_0027AEF4; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_0027AF84; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 512u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0027AF84; } }
L_0027AEF4:
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    c.budget -= 1;
L_0027AEF8:
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[20].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 144u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 124u)));  goto L_0027AF1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AF18u);  if (depth < kMaxDepth) unit_0051(c, 366u, depth + 1u); else { c.pc = 0x002671B0u; return; } if (c.pc != 0x0027AF18u) [[unlikely]] return; }
L_0027AF18:
    set32(c.r[4], ld32((c.r[20].w[0] + 124u)));
    c.budget -= 1;
L_0027AF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AF24u);  if (depth < kMaxDepth) unit_0052(c, 62u, depth + 1u); else { c.pc = 0x00268890u; return; } if (c.pc != 0x0027AF24u) [[unlikely]] return; }
L_0027AF24:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 30280u)));  goto L_0027AF3C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 512u), c.r[18].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
L_0027AF3C:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[23], 0u + 1u);  goto L_0027AF84; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], ld32((c.r[5].w[0] + 8u)));  if (t) { goto L_0027AF80; } }
    set32(c.r[3], c.r[2].w[0] + 176u);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[2].d[0] = c.r[18].d[0] & 15ull;
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u - 16u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (t) { goto L_0027AF80; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0027AF80; } }
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0027AF80:
    set32(c.r[23], 0u + 1u);
    c.budget -= 1;
L_0027AF84:
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 124u)));  goto L_0027AFA8; }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_0027AFB0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 516u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0027AFB0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 124u)));
    c.budget -= 1;
L_0027AFA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AFB0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 83u, depth + 1u); else { c.pc = 0x00268B80u; return; } if (c.pc != 0x0027AFB0u) [[unlikely]] return; }
L_0027AFB0:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_0027AFC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AFC0u); set32(c.r[4], ld32((c.r[29].w[0] + 160u)));  if (depth < kMaxDepth) unit_0056(c, 443u, depth + 1u); else { c.pc = 0x0027BAF0u; return; } if (c.pc != 0x0027AFC0u) [[unlikely]] return; }
L_0027AFC0:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { set32(c.r[25], ld32((c.r[20].w[0] + 52u)));  goto L_0027B000; }
    set32(c.r[25], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[4], c.r[20].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AFDCu); set32(c.r[5], 0u + 18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027AFDCu) [[unlikely]] return; }
L_0027AFDC:
    set32(c.r[4], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    st32((c.r[20].w[0] + 88u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 76u), c.r[4].w[0]);  if (t) { goto L_0027B010; } }
L_0027B000:
    set32(c.r[4], c.r[20].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B010u); set32(c.r[5], 0u + 11u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027B010u) [[unlikely]] return; }
L_0027B010:
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_0027B014:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0027B050:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 27u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0027B298; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 1u);  goto L_0027B29C; }
    set32(c.r[3], 0u + 85u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 72u)));  goto L_0027B28C; }
    set32(c.r[3], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027B27C; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027B26C; } }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027B25C; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027B24C; } }
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_0027B240; }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_0027B238; }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_0027B22C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 72u)));  goto L_0027B21C; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 72u)));  goto L_0027B0EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0027B2DC; } }
L_0027B0EC:
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], 0u + 5u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B108u); st32((c.r[2].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0027B108u) [[unlikely]] return; }
L_0027B108:
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0027B11C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 64u)));  if (t) { goto L_0027B130; } }
L_0027B11C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_0027B130; }
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_0027B130:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_0027B158; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0027B154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B154u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0027B154u) [[unlikely]] return; }
L_0027B154:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0027B158:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0027B2D8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B16Cu); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_005C(c, 285u, depth + 1u); else { c.pc = 0x00292710u; return; } if (c.pc != 0x0027B16Cu) [[unlikely]] return; }
L_0027B16C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0027B184; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
L_0027B184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B18Cu); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_005C(c, 287u, depth + 1u); else { c.pc = 0x00292730u; return; } if (c.pc != 0x0027B18Cu) [[unlikely]] return; }
L_0027B18C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));  goto L_0027B1A4; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 660u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
L_0027B1A4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));  goto L_0027B1B8; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 664u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
L_0027B1B8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));  goto L_0027B1CC; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 52u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
L_0027B1CC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));  goto L_0027B1E0; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 32u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
L_0027B1E0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));  goto L_0027B1F4; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 60u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
L_0027B1F4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));  goto L_0027B208; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
L_0027B208:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027B2D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 20u), 0u);  if (t) { goto L_0027B2D8; } }
L_0027B21C:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), 0u);  if (t) { goto L_0027B2D8; } }
L_0027B22C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.r[4].w[0]);  if (t) { goto L_0027B2D8; } }
L_0027B238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), 0u);  if (t) { goto L_0027B2D8; } }
L_0027B240:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.r[4].w[0]);  if (t) { goto L_0027B2D8; } }
L_0027B24C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B254u);  if (depth < kMaxDepth) unit_006D(c, 204u, depth + 1u); else { c.pc = 0x002D6520u; return; } if (c.pc != 0x0027B254u) [[unlikely]] return; }
L_0027B254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B2D8; } }
L_0027B25C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B264u);  if (depth < kMaxDepth) unit_006D(c, 205u, depth + 1u); else { c.pc = 0x002D6530u; return; } if (c.pc != 0x0027B264u) [[unlikely]] return; }
L_0027B264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B2D8; } }
L_0027B26C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B274u);  if (depth < kMaxDepth) unit_006D(c, 206u, depth + 1u); else { c.pc = 0x002D6540u; return; } if (c.pc != 0x0027B274u) [[unlikely]] return; }
L_0027B274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B2D8; } }
L_0027B27C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B284u);  if (depth < kMaxDepth) unit_006D(c, 215u, depth + 1u); else { c.pc = 0x002D66C0u; return; } if (c.pc != 0x0027B284u) [[unlikely]] return; }
L_0027B284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B2D8; } }
L_0027B28C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 72u), c.r[4].w[0]);  if (t) { goto L_0027B2D8; } }
L_0027B298:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0027B29C:
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 32u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B2B4u); st32((c.r[29].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x0027B2B4u) [[unlikely]] return; }
L_0027B2B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027B2D8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0027B2D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B2D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0027B2D8u) [[unlikely]] return; }
L_0027B2D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0027B2DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0027B2F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027B3B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0027B3B4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 124u)));  goto L_0027B350; }
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B34Cu); set32(c.r[4], ld32((c.r[17].w[0] + 132u)));  if (depth < kMaxDepth) unit_005B(c, 211u, depth + 1u); else { c.pc = 0x0028E000u; return; } if (c.pc != 0x0027B34Cu) [[unlikely]] return; }
L_0027B34C:
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 1;
L_0027B350:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_0027B38C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 124u)));  goto L_0027B370; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B36Cu);  if (depth < kMaxDepth) unit_0051(c, 366u, depth + 1u); else { c.pc = 0x002671B0u; return; } if (c.pc != 0x0027B36Cu) [[unlikely]] return; }
L_0027B36C:
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 1;
L_0027B370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B378u);  if (depth < kMaxDepth) unit_0052(c, 62u, depth + 1u); else { c.pc = 0x00268890u; return; } if (c.pc != 0x0027B378u) [[unlikely]] return; }
L_0027B378:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
L_0027B38C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B3A4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 443u, depth + 1u); else { c.pc = 0x0027BAF0u; return; } if (c.pc != 0x0027B3A4u) [[unlikely]] return; }
L_0027B3A4:
    set32(c.r[3], 0u + 2u);
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_0027B3B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0027B3B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027B3D0:
    c.f[0] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[13]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0027B400; }
    st32((c.r[4].w[0] + 112u), c.f[12]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 116u), c.f[12]);
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 108u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 64u), c.f[12]);  if (t) { goto L_0027B424; } }
L_0027B400:
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[13]);
    c.f[1] = ld32((c.r[5].w[0] + 64u));
    st32((c.r[4].w[0] + 112u), c.f[1]);
    st32((c.r[4].w[0] + 116u), c.f[12]);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.budget -= 9;
L_0027B424:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027B430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 124u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B46Cu); set32(c.r[5], c.r[16].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0052(c, 99u, depth + 1u); else { c.pc = 0x00268FF0u; return; } if (c.pc != 0x0027B46Cu) [[unlikely]] return; }
L_0027B46C:
    set32(c.r[3], c.r[2].w[0] + 15u);
    set32(c.r[4], ld32((c.r[18].w[0] + 132u)));
    set32(c.r[2], 0u - 16u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B488u); set32(c.r[5], c.r[16].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_005B(c, 336u, depth + 1u); else { c.pc = 0x0028F650u; return; } if (c.pc != 0x0027B488u) [[unlikely]] return; }
L_0027B488:
    set32(c.r[3], c.r[2].w[0] + 15u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u - 16u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027B4B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[2].w[0] + 16u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 124u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B4ECu); set32(c.r[5], c.r[16].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0052(c, 100u, depth + 1u); else { c.pc = 0x00269000u; return; } if (c.pc != 0x0027B4ECu) [[unlikely]] return; }
L_0027B4EC:
    set32(c.r[3], c.r[2].w[0] + 15u);
    set32(c.r[4], ld32((c.r[18].w[0] + 132u)));
    set32(c.r[2], 0u - 16u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B508u); set32(c.r[5], c.r[16].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_005B(c, 341u, depth + 1u); else { c.pc = 0x0028F760u; return; } if (c.pc != 0x0027B508u) [[unlikely]] return; }
L_0027B508:
    set32(c.r[3], c.r[2].w[0] + 15u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u - 16u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027B530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027B594; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23520u);
    set32(c.r[2], c.r[2].w[0] + 23576u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B570u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0027B570u) [[unlikely]] return; }
L_0027B570:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B57Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0027B57Cu) [[unlikely]] return; }
L_0027B57C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0027B598; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B594u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0027B594u) [[unlikely]] return; }
L_0027B594:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027B598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027B5B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B530u | kUnwind; return; } goto L_0027B530; }
L_0027B5C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B050u | kUnwind; return; } goto L_0027B050; }
L_0027B5D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[4], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B5E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x0027B5E8u) [[unlikely]] return; }
L_0027B5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B5F0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 147u, depth + 1u); else { c.pc = 0x001B0F70u; return; } if (c.pc != 0x0027B5F0u) [[unlikely]] return; }
L_0027B5F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B604u); set32(c.r[4], c.r[4].w[0] - 4640u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0027B604u) [[unlikely]] return; }
L_0027B604:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B614u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0027B614u) [[unlikely]] return; }
L_0027B614:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0027B628; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_0027B63C; } }
L_0027B628:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_0027B63C; }
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_0027B63C:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027B660; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0027B660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B660u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0027B660u) [[unlikely]] return; }
L_0027B660:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], 0u + 1024u);  goto L_0027B684; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027B680; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_0027B680:
    set32(c.r[4], 0u + 1024u);
    c.budget -= 1;
L_0027B684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B68Cu);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x0027B68Cu) [[unlikely]] return; }
L_0027B68C:
    set32(c.r[3], c.r[2].w[0] + 15u);
    set32(c.r[2], 0u - 16u);
    c.r[17].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(257ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[17], 0u + 256u);  goto L_0027B6A4; }
L_0027B6A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B6ACu);  if (depth < kMaxDepth) unit_0024(c, 147u, depth + 1u); else { c.pc = 0x001B0F70u; return; } if (c.pc != 0x0027B6ACu) [[unlikely]] return; }
L_0027B6AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B6B8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x0027B6B8u) [[unlikely]] return; }
L_0027B6B8:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[2].w[0] + 63u);
    set32(c.r[4], 0u - 64u);
    c.r[2].d[0] = c.r[16].d[0] & 63ull;
    c.r[6].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[6].d[0] << 32;
    st32((c.r[28].w[0] - 30348u), c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 16224u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[28].w[0] - 30356u), c.r[6].w[0]);
    st32((c.r[28].w[0] - 30376u), c.r[7].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0027B734; } }
L_0027B700:
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 63u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0027B730; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B728u); set32(c.r[4], c.r[4].w[0] - 4592u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0027B728u) [[unlikely]] return; }
L_0027B728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0027B758; } }
L_0027B730:
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 1;
L_0027B734:
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[7].w[0]), c.r[6].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B700u | kUnwind; return; } goto L_0027B700; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[28].w[0] - 30352u), c.r[6].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B750u); set32(c.r[4], c.r[4].w[0] - 4528u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0027B750u) [[unlikely]] return; }
L_0027B750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027B764; } }
L_0027B758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B760u); set32(c.r[4], c.r[4].w[0] - 4496u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0027B760u) [[unlikely]] return; }
L_0027B760:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027B764:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0027B780:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B790u);  if (depth < kMaxDepth) unit_0056(c, 438u, depth + 1u); else { c.pc = 0x0027BA10u; return; } if (c.pc != 0x0027B790u) [[unlikely]] return; }
L_0027B790:
    set32(c.r[5], ld32((c.r[28].w[0] - 30376u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0027B798:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0027B7AC; }
    st32((c.r[5].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_0027B7AC:
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B798u | kUnwind; return; } goto L_0027B798; } }
    st32((c.r[28].w[0] - 30376u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027B7D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027B7F4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 2;
L_0027B7F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 16240u);
    set32(c.r[17], ld32((c.r[28].w[0] - 30352u)));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30356u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30348u)));
    set32(c.r[4], 0u - 64u);
    st32((c.r[28].w[0] - 30372u), c.r[16].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0027B86C; } }
L_0027B828:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027B834; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027B834:
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 63u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0027B868; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B860u); set32(c.r[4], c.r[4].w[0] - 4448u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0027B860u) [[unlikely]] return; }
L_0027B860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027B9F4; } }
L_0027B868:
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 1;
L_0027B86C:
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B828u | kUnwind; return; } goto L_0027B828; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B880u);  if (depth < kMaxDepth) unit_0024(c, 129u, depth + 1u); else { c.pc = 0x001B0C00u; return; } if (c.pc != 0x0027B880u) [[unlikely]] return; }
L_0027B880:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_0027B958; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B894u); set32(c.r[4], c.r[4].w[0] - 4384u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0027B894u) [[unlikely]] return; }
L_0027B894:
    set32(c.r[5], ld32((c.r[28].w[0] - 30348u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B8A4u); set32(c.r[4], c.r[4].w[0] - 4344u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0027B8A4u) [[unlikely]] return; }
L_0027B8A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30356u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] - 4328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B8B8u); set32(c.r[5], c.r[17].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0027B8B8u) [[unlikely]] return; }
L_0027B8B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30356u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30348u)));
    set32(c.r[4], c.r[4].w[0] - 4312u);
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B8D4u); set32(c.r[5], c.r[3].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0027B8D4u) [[unlikely]] return; }
L_0027B8D4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30376u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B8ECu); set32(c.r[4], c.r[4].w[0] - 4288u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0027B8ECu) [[unlikely]] return; }
L_0027B8EC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30376u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B904u); set32(c.r[4], c.r[4].w[0] - 4256u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0027B904u) [[unlikely]] return; }
L_0027B904:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B918u); set32(c.r[4], c.r[4].w[0] - 4224u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0027B918u) [[unlikely]] return; }
L_0027B918:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B92Cu); set32(c.r[4], c.r[4].w[0] - 4192u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0027B92Cu) [[unlikely]] return; }
L_0027B92C:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B940u); set32(c.r[4], c.r[4].w[0] - 4160u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0027B940u) [[unlikely]] return; }
L_0027B940:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B954u); set32(c.r[4], c.r[4].w[0] - 4128u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0027B954u) [[unlikely]] return; }
L_0027B954:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_0027B958:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_0027B98C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B968u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0027B968u) [[unlikely]] return; }
L_0027B968:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 30368u), c.r[2].w[0]);  goto L_0027B988; }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B984u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_0014(c, 233u, depth + 1u); else { c.pc = 0x00171E30u; return; } if (c.pc != 0x0027B984u) [[unlikely]] return; }
L_0027B984:
    st32((c.r[28].w[0] - 30368u), c.r[2].w[0]);
    c.budget -= 1;
L_0027B988:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0027B98C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 28u)));  goto L_0027B9C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B99Cu); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0027B99Cu) [[unlikely]] return; }
L_0027B99C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 30364u), c.r[2].w[0]);  goto L_0027B9BC; }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B9B8u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_0014(c, 233u, depth + 1u); else { c.pc = 0x00171E30u; return; } if (c.pc != 0x0027B9B8u) [[unlikely]] return; }
L_0027B9B8:
    st32((c.r[28].w[0] - 30364u), c.r[2].w[0]);
    c.budget -= 1;
L_0027B9BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_0027B9C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0027B9F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B9D0u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0027B9D0u) [[unlikely]] return; }
L_0027B9D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 30360u), c.r[2].w[0]);  goto L_0027B9F0; }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B9ECu); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0014(c, 233u, depth + 1u); else { c.pc = 0x00171E30u; return; } if (c.pc != 0x0027B9ECu) [[unlikely]] return; }
L_0027B9EC:
    st32((c.r[28].w[0] - 30360u), c.r[2].w[0]);
    c.budget -= 1;
L_0027B9F0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0027B9F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027BA10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30372u)));
    c.budget -= 5;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0027BADC; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027BA28:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0027BA3C; }
    st32((c.r[5].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_0027BA3C:
    c.r[3].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BA28u | kUnwind; return; } goto L_0027BA28; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30360u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30364u)));  goto L_0027BA74; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 30360u), 0u);  goto L_0027BA70; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BA6Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027BA6Cu) [[unlikely]] return; }
L_0027BA6C:
    st32((c.r[28].w[0] - 30360u), 0u);
    c.budget -= 1;
L_0027BA70:
    set32(c.r[4], ld32((c.r[28].w[0] - 30364u)));
    c.budget -= 1;
L_0027BA74:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30368u)));  goto L_0027BA9C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 30364u), 0u);  goto L_0027BA98; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BA94u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027BA94u) [[unlikely]] return; }
L_0027BA94:
    st32((c.r[28].w[0] - 30364u), 0u);
    c.budget -= 1;
L_0027BA98:
    set32(c.r[4], ld32((c.r[28].w[0] - 30368u)));
    c.budget -= 1;
L_0027BA9C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));  goto L_0027BAC4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 30368u), 0u);  goto L_0027BAC0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BABCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027BABCu) [[unlikely]] return; }
L_0027BABC:
    st32((c.r[28].w[0] - 30368u), 0u);
    c.budget -= 1;
L_0027BAC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 1;
L_0027BAC4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 30372u), 0u);  if (t) { goto L_0027BAD8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[4], 0u - 1u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 3;
L_0027BAD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0027BADC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027BAF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BB04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 438u, depth + 1u); else { c.pc = 0x0027BA10u; return; } if (c.pc != 0x0027BB04u) [[unlikely]] return; }
L_0027BB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BB0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 418u, depth + 1u); else { c.pc = 0x0027B7D0u; return; } if (c.pc != 0x0027BB0Cu) [[unlikely]] return; }
L_0027BB0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027BB20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 16536u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[9], ld32((c.r[28].w[0] - 30376u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[8], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] + 16540u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 16544u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 16548u)));
    set32(c.r[2], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[9].w[0])));
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 16552u)));
    st32((c.r[4].w[0] + 16528u), c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[9].w[0] + 4u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 27;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[3].w[0] + 16532u), c.r[4].w[0]);  if (t) { goto L_0027BBA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BB98u); set32(c.r[4], c.r[4].w[0] - 4096u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0027BB98u) [[unlikely]] return; }
L_0027BB98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027BBB0; } }
L_0027BBA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BBACu); set32(c.r[4], c.r[4].w[0] + 16528u);  if (depth < kMaxDepth) unit_002B(c, 302u, depth + 1u); else { c.pc = 0x001CE6C0u; return; } if (c.pc != 0x0027BBACu) [[unlikely]] return; }
L_0027BBAC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0027BBB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027BBC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BBD8u); set32(c.r[4], 0u + 120u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0027BBD8u) [[unlikely]] return; }
L_0027BBD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027BBEC; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BBECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 453u, depth + 1u); else { c.pc = 0x0027BC10u; return; } if (c.pc != 0x0027BBECu) [[unlikely]] return; }
L_0027BBEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[28].w[0] - 30344u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BBFCu); set32(c.r[4], c.r[4].w[0] - 4048u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0027BBFCu) [[unlikely]] return; }
L_0027BBFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027BC10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BC24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0027BC24u) [[unlikely]] return; }
L_0027BC24:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BC30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x0027BC30u) [[unlikely]] return; }
L_0027BC30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 23600u);
    set32(c.r[3], c.r[3].w[0] + 23656u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], 0u + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x544F0000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21075ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BC90u); st32((c.r[16].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0027BC90u) [[unlikely]] return; }
L_0027BC90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  goto L_0027BCB4; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027BCA4; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_0027BCA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BCB0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 124u, depth + 1u); else { c.pc = 0x00279140u; return; } if (c.pc != 0x0027BCB0u) [[unlikely]] return; }
L_0027BCB0:
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 1;
L_0027BCB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BCBCu); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0027BCBCu) [[unlikely]] return; }
L_0027BCBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 112u), c.r[2].w[0]);  goto L_0027BCE0; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0027BCD0; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_0027BCD0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BCDCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 101u, depth + 1u); else { c.pc = 0x00269010u; return; } if (c.pc != 0x0027BCDCu) [[unlikely]] return; }
L_0027BCDC:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 1;
L_0027BCE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BCE8u); st32((c.r[28].w[0] - 30280u), 0u);  if (depth < kMaxDepth) unit_0067(c, 235u, depth + 1u); else { c.pc = 0x002BE3E0u; return; } if (c.pc != 0x0027BCE8u) [[unlikely]] return; }
L_0027BCE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BCF0u);  if (depth < kMaxDepth) unit_0056(c, 402u, depth + 1u); else { c.pc = 0x0027B5D0u; return; } if (c.pc != 0x0027BCF0u) [[unlikely]] return; }
L_0027BCF0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027BD10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 466u, depth + 1u); else { c.pc = 0x0027BD60u; return; } if (c.pc != 0x0027BD24u) [[unlikely]] return; }
L_0027BD24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD2Cu);  if (depth < kMaxDepth) unit_0067(c, 247u, depth + 1u); else { c.pc = 0x002BE5C0u; return; } if (c.pc != 0x0027BD2Cu) [[unlikely]] return; }
L_0027BD2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD38u); set32(c.r[4], c.r[4].w[0] + 11120u);  if (depth < kMaxDepth) unit_0011(c, 57u, depth + 1u); else { c.pc = 0x00164500u; return; } if (c.pc != 0x0027BD38u) [[unlikely]] return; }
L_0027BD38:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027BD60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_0027BD94; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027BD8Cu) [[unlikely]] return; }
L_0027BD8C:
    st32((c.r[16].w[0] + 116u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 2;
L_0027BD94:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 108u)));  goto L_0027BDB4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BDACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027BDACu) [[unlikely]] return; }
L_0027BDAC:
    st32((c.r[16].w[0] + 112u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 2;
L_0027BDB4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_0027BDD4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BDCCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027BDCCu) [[unlikely]] return; }
L_0027BDCC:
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 2;
L_0027BDD4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  goto L_0027BDF4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BDECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027BDECu) [[unlikely]] return; }
L_0027BDEC:
    st32((c.r[16].w[0] + 92u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 2;
L_0027BDF4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  goto L_0027BE14; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BE0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027BE0Cu) [[unlikely]] return; }
L_0027BE0C:
    st32((c.r[16].w[0] + 88u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 2;
L_0027BE14:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  goto L_0027BE34; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BE2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027BE2Cu) [[unlikely]] return; }
L_0027BE2C:
    st32((c.r[16].w[0] + 100u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 2;
L_0027BE34:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027BE50; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BE4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027BE4Cu) [[unlikely]] return; }
L_0027BE4C:
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_0027BE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BE58u);  if (depth < kMaxDepth) unit_0056(c, 415u, depth + 1u); else { c.pc = 0x0027B780u; return; } if (c.pc != 0x0027BE58u) [[unlikely]] return; }
L_0027BE58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027BE70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BE88u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x0027BE88u) [[unlikely]] return; }
L_0027BE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BE90u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x0027BE90u) [[unlikely]] return; }
L_0027BE90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BE98u);  if (depth < kMaxDepth) unit_0011(c, 107u, depth + 1u); else { c.pc = 0x00164CA0u; return; } if (c.pc != 0x0027BE98u) [[unlikely]] return; }
L_0027BE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BEA0u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0011(c, 104u, depth + 1u); else { c.pc = 0x00164C60u; return; } if (c.pc != 0x0027BEA0u) [[unlikely]] return; }
L_0027BEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BEA8u); set32(c.r[4], 0u + 4099u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0027BEA8u) [[unlikely]] return; }
L_0027BEA8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BEB4u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0027BEB4u) [[unlikely]] return; }
L_0027BEB4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027BECC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_0027BEE8; }
L_0027BECC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_0027BEFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BEDCu);  if (depth < kMaxDepth) unit_0041(c, 221u, depth + 1u); else { c.pc = 0x00225F70u; return; } if (c.pc != 0x0027BEDCu) [[unlikely]] return; }
L_0027BEDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027BEF8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_0027BEE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F00000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0027BF0C; } }
L_0027BEF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_0027BEFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 4;
L_0027BF0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027BF20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BF30u);  if (depth < kMaxDepth) unit_0011(c, 113u, depth + 1u); else { c.pc = 0x00164D10u; return; } if (c.pc != 0x0027BF30u) [[unlikely]] return; }
L_0027BF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BF38u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x0027BF38u) [[unlikely]] return; }
L_0027BF38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027BF50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BF64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x0027BF64u) [[unlikely]] return; }
L_0027BF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BF6Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x0027BF6Cu) [[unlikely]] return; }
L_0027BF6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BF74u);  if (depth < kMaxDepth) unit_0011(c, 107u, depth + 1u); else { c.pc = 0x00164CA0u; return; } if (c.pc != 0x0027BF74u) [[unlikely]] return; }
L_0027BF74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BF7Cu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0011(c, 104u, depth + 1u); else { c.pc = 0x00164C60u; return; } if (c.pc != 0x0027BF7Cu) [[unlikely]] return; }
L_0027BF7C:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  [[clang::musttail]] return unit_0057(c, 13u, depth); }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 4016u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_0056[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027BFAC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0057(c, 12u, depth); } }
L_0027BFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BFC0u);  if (depth < kMaxDepth) unit_0056(c, 446u, depth + 1u); else { c.pc = 0x0027BB20u; return; } if (c.pc != 0x0027BFC0u) [[unlikely]] return; }
L_0027BFC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
L_0027BFCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BFD4u);  if (depth < kMaxDepth) unit_002B(c, 306u, depth + 1u); else { c.pc = 0x001CE760u; return; } if (c.pc != 0x0027BFD4u) [[unlikely]] return; }
L_0027BFD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 12u, depth); } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
L_0027BFE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
L_0027BFF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BFFCu); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0027BFFCu) [[unlikely]] return; }
L_0027BFFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  [[clang::musttail]] return unit_0057(c, 4u, depth); }
    [[clang::musttail]] return unit_0057(c, 2u, depth);
}

}
