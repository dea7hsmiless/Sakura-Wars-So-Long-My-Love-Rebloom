#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0001[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0,
    0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0,
    63, 0, 64, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0,
    77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 100, 0,
    101, 0, 102, 0, 0, 0, 0, 0, 103, 0, 104, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0,
    0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0,
    117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 134, 0,
    135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 144, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    159, 0, 160, 0, 0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0,
    0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0,
    0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 233, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0,
    244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 248, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263,
    0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0,
    280, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0,
    289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0,
    0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0,
    0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0,
    0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0,
    0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0,
    0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 362, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 369, 0, 370, 0, 371, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0, 379,
    0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0,
    388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 398, 0, 399, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0,
    0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0,
    0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0,
    0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0,
    0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0,
    0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0,
    0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 450, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 454,
    0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    458, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    462, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0,
};

void unit_0001(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00124000;
    case 2u: goto L_00124010;
    case 3u: goto L_00124030;
    case 4u: goto L_0012403C;
    case 5u: goto L_00124088;
    case 6u: goto L_00124094;
    case 7u: goto L_001240A8;
    case 8u: goto L_001240CC;
    case 9u: goto L_001240D8;
    case 10u: goto L_001240E8;
    case 11u: goto L_00124170;
    case 12u: goto L_001241B0;
    case 13u: goto L_001241D0;
    case 14u: goto L_00124230;
    case 15u: goto L_00124268;
    case 16u: goto L_001242A8;
    case 17u: goto L_001242C8;
    case 18u: goto L_00124318;
    case 19u: goto L_00124370;
    case 20u: goto L_0012438C;
    case 21u: goto L_001243A0;
    case 22u: goto L_001243AC;
    case 23u: goto L_001243C8;
    case 24u: goto L_001243D4;
    case 25u: goto L_001243E8;
    case 26u: goto L_001243F4;
    case 27u: goto L_00124410;
    case 28u: goto L_00124428;
    case 29u: goto L_00124434;
    case 30u: goto L_00124450;
    case 31u: goto L_001244D8;
    case 32u: goto L_001244E8;
    case 33u: goto L_001244F8;
    case 34u: goto L_0012450C;
    case 35u: goto L_00124570;
    case 36u: goto L_00124584;
    case 37u: goto L_001245E8;
    case 38u: goto L_00124600;
    case 39u: goto L_00124648;
    case 40u: goto L_0012466C;
    case 41u: goto L_001246D0;
    case 42u: goto L_00124754;
    case 43u: goto L_00124760;
    case 44u: goto L_00124790;
    case 45u: goto L_00124820;
    case 46u: goto L_0012483C;
    case 47u: goto L_00124848;
    case 48u: goto L_00124888;
    case 49u: goto L_0012489C;
    case 50u: goto L_00124900;
    case 51u: goto L_00124910;
    case 52u: goto L_00124928;
    case 53u: goto L_00124958;
    case 54u: goto L_001249E0;
    case 55u: goto L_00124A18;
    case 56u: goto L_00124A70;
    case 57u: goto L_00124A80;
    case 58u: goto L_00124AA8;
    case 59u: goto L_00124AE0;
    case 60u: goto L_00124B10;
    case 61u: goto L_00124B60;
    case 62u: goto L_00124B68;
    case 63u: goto L_00124B80;
    case 64u: goto L_00124B88;
    case 65u: goto L_00124BA0;
    case 66u: goto L_00124BA8;
    case 67u: goto L_00124C10;
    case 68u: goto L_00124C18;
    case 69u: goto L_00124C40;
    case 70u: goto L_00124C48;
    case 71u: goto L_00124C50;
    case 72u: goto L_00124C58;
    case 73u: goto L_00124C60;
    case 74u: goto L_00124C68;
    case 75u: goto L_00124C70;
    case 76u: goto L_00124C78;
    case 77u: goto L_00124C80;
    case 78u: goto L_00124C88;
    case 79u: goto L_00124C90;
    case 80u: goto L_00124C98;
    case 81u: goto L_00124CA0;
    case 82u: goto L_00124CA8;
    case 83u: goto L_00124CB0;
    case 84u: goto L_00124CB8;
    case 85u: goto L_00124CC0;
    case 86u: goto L_00124CC8;
    case 87u: goto L_00124CD0;
    case 88u: goto L_00124CD8;
    case 89u: goto L_00124D00;
    case 90u: goto L_00124D08;
    case 91u: goto L_00124D10;
    case 92u: goto L_00124D18;
    case 93u: goto L_00124D20;
    case 94u: goto L_00124D28;
    case 95u: goto L_00124D30;
    case 96u: goto L_00124D38;
    case 97u: goto L_00124D60;
    case 98u: goto L_00124D68;
    case 99u: goto L_00124D70;
    case 100u: goto L_00124D78;
    case 101u: goto L_00124D80;
    case 102u: goto L_00124D88;
    case 103u: goto L_00124DA0;
    case 104u: goto L_00124DA8;
    case 105u: goto L_00124DB0;
    case 106u: goto L_00124DB8;
    case 107u: goto L_00124DF0;
    case 108u: goto L_00124DF8;
    case 109u: goto L_00124E10;
    case 110u: goto L_00124E18;
    case 111u: goto L_00124E50;
    case 112u: goto L_00124E58;
    case 113u: goto L_00124E60;
    case 114u: goto L_00124E68;
    case 115u: goto L_00124E70;
    case 116u: goto L_00124E78;
    case 117u: goto L_00124E80;
    case 118u: goto L_00124E88;
    case 119u: goto L_00124E90;
    case 120u: goto L_00124E98;
    case 121u: goto L_00124EA0;
    case 122u: goto L_00124EA8;
    case 123u: goto L_00124ED0;
    case 124u: goto L_00124ED8;
    case 125u: goto L_00124EE0;
    case 126u: goto L_00124EE8;
    case 127u: goto L_00124EF0;
    case 128u: goto L_00124EF8;
    case 129u: goto L_00124F40;
    case 130u: goto L_00124F48;
    case 131u: goto L_00124F60;
    case 132u: goto L_00124F68;
    case 133u: goto L_00124F70;
    case 134u: goto L_00124F78;
    case 135u: goto L_00124F80;
    case 136u: goto L_00124F88;
    case 137u: goto L_00124F90;
    case 138u: goto L_00124F98;
    case 139u: goto L_00124FA0;
    case 140u: goto L_00124FA8;
    case 141u: goto L_00124FB0;
    case 142u: goto L_00124FB8;
    case 143u: goto L_00125000;
    case 144u: goto L_00125008;
    case 145u: goto L_00125010;
    case 146u: goto L_00125018;
    case 147u: goto L_001251E0;
    case 148u: goto L_001251E8;
    case 149u: goto L_00125210;
    case 150u: goto L_00125218;
    case 151u: goto L_00125230;
    case 152u: goto L_00125238;
    case 153u: goto L_00125280;
    case 154u: goto L_00125288;
    case 155u: goto L_001252A0;
    case 156u: goto L_001252A8;
    case 157u: goto L_001252D0;
    case 158u: goto L_001252D8;
    case 159u: goto L_00125300;
    case 160u: goto L_00125308;
    case 161u: goto L_00125320;
    case 162u: goto L_00125328;
    case 163u: goto L_00125330;
    case 164u: goto L_00125338;
    case 165u: goto L_00125340;
    case 166u: goto L_00125348;
    case 167u: goto L_00125350;
    case 168u: goto L_00125358;
    case 169u: goto L_00125360;
    case 170u: goto L_00125368;
    case 171u: goto L_00125370;
    case 172u: goto L_00125378;
    case 173u: goto L_00125390;
    case 174u: goto L_00125398;
    case 175u: goto L_001253C0;
    case 176u: goto L_001253C8;
    case 177u: goto L_001253D0;
    case 178u: goto L_001253D8;
    case 179u: goto L_001253E0;
    case 180u: goto L_001253F0;
    case 181u: goto L_00125400;
    case 182u: goto L_00125424;
    case 183u: goto L_00125430;
    case 184u: goto L_00125454;
    case 185u: goto L_00125480;
    case 186u: goto L_00125498;
    case 187u: goto L_001254A0;
    case 188u: goto L_001254C4;
    case 189u: goto L_001254D0;
    case 190u: goto L_001254F4;
    case 191u: goto L_00125514;
    case 192u: goto L_00125528;
    case 193u: goto L_00125568;
    case 194u: goto L_00125580;
    case 195u: goto L_001255A8;
    case 196u: goto L_001255E0;
    case 197u: goto L_001255F8;
    case 198u: goto L_00125620;
    case 199u: goto L_00125630;
    case 200u: goto L_00125648;
    case 201u: goto L_00125658;
    case 202u: goto L_00125660;
    case 203u: goto L_00125688;
    case 204u: goto L_001256B8;
    case 205u: goto L_001256CC;
    case 206u: goto L_00125710;
    case 207u: goto L_00125718;
    case 208u: goto L_00125738;
    case 209u: goto L_00125750;
    case 210u: goto L_00125760;
    case 211u: goto L_00125770;
    case 212u: goto L_00125788;
    case 213u: goto L_00125798;
    case 214u: goto L_001257B0;
    case 215u: goto L_001257C0;
    case 216u: goto L_0012583C;
    case 217u: goto L_00125858;
    case 218u: goto L_00125890;
    case 219u: goto L_001258A4;
    case 220u: goto L_001258F0;
    case 221u: goto L_00125900;
    case 222u: goto L_00125998;
    case 223u: goto L_001259D0;
    case 224u: goto L_001259E4;
    case 225u: goto L_00125A30;
    case 226u: goto L_00125A40;
    case 227u: goto L_00125A70;
    case 228u: goto L_00125A78;
    case 229u: goto L_00125A90;
    case 230u: goto L_00125AA8;
    case 231u: goto L_00125AD8;
    case 232u: goto L_00125AE0;
    case 233u: goto L_00125AF8;
    case 234u: goto L_00125B10;
    case 235u: goto L_00125B40;
    case 236u: goto L_00125B48;
    case 237u: goto L_00125B60;
    case 238u: goto L_00125B78;
    case 239u: goto L_00125BA8;
    case 240u: goto L_00125BB0;
    case 241u: goto L_00125BC8;
    case 242u: goto L_00125BE0;
    case 243u: goto L_00125BF0;
    case 244u: goto L_00125C00;
    case 245u: goto L_00125C10;
    case 246u: goto L_00125C20;
    case 247u: goto L_00125C30;
    case 248u: goto L_00125C3C;
    case 249u: goto L_00125C40;
    case 250u: goto L_00125C50;
    case 251u: goto L_00125C60;
    case 252u: goto L_00125CA0;
    case 253u: goto L_00125CA8;
    case 254u: goto L_00125D00;
    case 255u: goto L_00125D10;
    case 256u: goto L_00125D20;
    case 257u: goto L_00125D30;
    case 258u: goto L_00125D38;
    case 259u: goto L_00125D7C;
    case 260u: goto L_00125DC0;
    case 261u: goto L_00125DD4;
    case 262u: goto L_00125DF4;
    case 263u: goto L_00125DFC;
    case 264u: goto L_00125E08;
    case 265u: goto L_00125E28;
    case 266u: goto L_00125E3C;
    case 267u: goto L_00125E50;
    case 268u: goto L_00125EA8;
    case 269u: goto L_00125EC0;
    case 270u: goto L_00125F28;
    case 271u: goto L_00125F40;
    case 272u: goto L_00125F54;
    case 273u: goto L_00125F68;
    case 274u: goto L_00125FC4;
    case 275u: goto L_00125FD8;
    case 276u: goto L_00126028;
    case 277u: goto L_00126048;
    case 278u: goto L_0012605C;
    case 279u: goto L_00126070;
    case 280u: goto L_00126080;
    case 281u: goto L_00126088;
    case 282u: goto L_001260A0;
    case 283u: goto L_001260C0;
    case 284u: goto L_001260D0;
    case 285u: goto L_001260E0;
    case 286u: goto L_001260F4;
    case 287u: goto L_00126110;
    case 288u: goto L_001261F4;
    case 289u: goto L_00126200;
    case 290u: goto L_00126218;
    case 291u: goto L_00126228;
    case 292u: goto L_00126240;
    case 293u: goto L_00126278;
    case 294u: goto L_00126288;
    case 295u: goto L_001262A0;
    case 296u: goto L_001262B0;
    case 297u: goto L_001262D4;
    case 298u: goto L_001262E0;
    case 299u: goto L_001262F8;
    case 300u: goto L_00126308;
    case 301u: goto L_0012632C;
    case 302u: goto L_00126338;
    case 303u: goto L_00126350;
    case 304u: goto L_00126360;
    case 305u: goto L_00126388;
    case 306u: goto L_00126398;
    case 307u: goto L_001263C0;
    case 308u: goto L_00126400;
    case 309u: goto L_00126418;
    case 310u: goto L_00126428;
    case 311u: goto L_00126440;
    case 312u: goto L_00126450;
    case 313u: goto L_00126468;
    case 314u: goto L_00126478;
    case 315u: goto L_001264A0;
    case 316u: goto L_001264E0;
    case 317u: goto L_00126520;
    case 318u: goto L_0012658C;
    case 319u: goto L_001265A4;
    case 320u: goto L_001265BC;
    case 321u: goto L_001265F0;
    case 322u: goto L_00126610;
    case 323u: goto L_00126640;
    case 324u: goto L_00126658;
    case 325u: goto L_00126698;
    case 326u: goto L_001266B8;
    case 327u: goto L_00126708;
    case 328u: goto L_00126738;
    case 329u: goto L_001267A4;
    case 330u: goto L_001267C0;
    case 331u: goto L_001267D8;
    case 332u: goto L_001267E4;
    case 333u: goto L_00126800;
    case 334u: goto L_00126830;
    case 335u: goto L_00126868;
    case 336u: goto L_00126878;
    case 337u: goto L_001268B0;
    case 338u: goto L_00126900;
    case 339u: goto L_0012691C;
    case 340u: goto L_00126934;
    case 341u: goto L_001269A0;
    case 342u: goto L_001269C0;
    case 343u: goto L_001269C8;
    case 344u: goto L_001269F8;
    case 345u: goto L_00126A38;
    case 346u: goto L_00126AA8;
    case 347u: goto L_00126AC0;
    case 348u: goto L_00126AE0;
    case 349u: goto L_00126B70;
    case 350u: goto L_00126BCC;
    case 351u: goto L_00126BDC;
    case 352u: goto L_00126BF4;
    case 353u: goto L_00126C10;
    case 354u: goto L_00126C20;
    case 355u: goto L_00126C30;
    case 356u: goto L_00126C44;
    case 357u: goto L_00126C64;
    case 358u: goto L_00126C78;
    case 359u: goto L_00126C88;
    case 360u: goto L_00126C9C;
    case 361u: goto L_00126CB4;
    case 362u: goto L_00126CBC;
    case 363u: goto L_00126CC4;
    case 364u: goto L_00126CDC;
    case 365u: goto L_00126D18;
    case 366u: goto L_00126D48;
    case 367u: goto L_00126DA8;
    case 368u: goto L_00126DC8;
    case 369u: goto L_00126E04;
    case 370u: goto L_00126E0C;
    case 371u: goto L_00126E14;
    case 372u: goto L_00126E1C;
    case 373u: goto L_00126E28;
    case 374u: goto L_00126E54;
    case 375u: goto L_00126E64;
    case 376u: goto L_00126EB0;
    case 377u: goto L_00126EEC;
    case 378u: goto L_00126EF4;
    case 379u: goto L_00126EFC;
    case 380u: goto L_00126F04;
    case 381u: goto L_00126F0C;
    case 382u: goto L_00126F78;
    case 383u: goto L_00126FC0;
    case 384u: goto L_00126FEC;
    case 385u: goto L_00127080;
    case 386u: goto L_001270AC;
    case 387u: goto L_00127170;
    case 388u: goto L_00127180;
    case 389u: goto L_00127198;
    case 390u: goto L_001271C4;
    case 391u: goto L_00127230;
    case 392u: goto L_00127240;
    case 393u: goto L_00127258;
    case 394u: goto L_00127288;
    case 395u: goto L_00127294;
    case 396u: goto L_001272C4;
    case 397u: goto L_001272D8;
    case 398u: goto L_001272E4;
    case 399u: goto L_001272EC;
    case 400u: goto L_00127314;
    case 401u: goto L_00127328;
    case 402u: goto L_0012733C;
    case 403u: goto L_00127350;
    case 404u: goto L_00127364;
    case 405u: goto L_00127378;
    case 406u: goto L_001273A8;
    case 407u: goto L_001273F8;
    case 408u: goto L_00127430;
    case 409u: goto L_00127468;
    case 410u: goto L_001274B8;
    case 411u: goto L_00127514;
    case 412u: goto L_001275D0;
    case 413u: goto L_001275F0;
    case 414u: goto L_00127628;
    case 415u: goto L_00127640;
    case 416u: goto L_00127658;
    case 417u: goto L_00127670;
    case 418u: goto L_00127690;
    case 419u: goto L_001276A8;
    case 420u: goto L_001276E8;
    case 421u: goto L_0012770C;
    case 422u: goto L_00127748;
    case 423u: goto L_00127768;
    case 424u: goto L_00127798;
    case 425u: goto L_001277B8;
    case 426u: goto L_001277F8;
    case 427u: goto L_00127818;
    case 428u: goto L_00127840;
    case 429u: goto L_00127858;
    case 430u: goto L_00127870;
    case 431u: goto L_00127888;
    case 432u: goto L_001278B8;
    case 433u: goto L_001278D8;
    case 434u: goto L_00127918;
    case 435u: goto L_00127938;
    case 436u: goto L_00127960;
    case 437u: goto L_00127978;
    case 438u: goto L_00127990;
    case 439u: goto L_001279A8;
    case 440u: goto L_001279E0;
    case 441u: goto L_00127A28;
    case 442u: goto L_00127A60;
    case 443u: goto L_00127AB8;
    case 444u: goto L_00127AD0;
    case 445u: goto L_00127AE0;
    case 446u: goto L_00127AF8;
    case 447u: goto L_00127B08;
    case 448u: goto L_00127B34;
    case 449u: goto L_00127B58;
    case 450u: goto L_00127B84;
    case 451u: goto L_00127B90;
    case 452u: goto L_00127BCC;
    case 453u: goto L_00127BD8;
    case 454u: goto L_00127BFC;
    case 455u: goto L_00127C20;
    case 456u: goto L_00127C30;
    case 457u: goto L_00127C48;
    case 458u: goto L_00127C80;
    case 459u: goto L_00127CA4;
    case 460u: goto L_00127CB4;
    case 461u: goto L_00127CC8;
    case 462u: goto L_00127D00;
    case 463u: goto L_00127D24;
    case 464u: goto L_00127D34;
    case 465u: goto L_00127D48;
    case 466u: goto L_00127D68;
    case 467u: goto L_00127D78;
    case 468u: goto L_00127DC0;
    case 469u: goto L_00127DE0;
    case 470u: goto L_00127E78;
    case 471u: goto L_00127EA8;
    case 472u: goto L_00127EF4;
    case 473u: goto L_00127EFC;
    case 474u: goto L_00127F3C;
    case 475u: goto L_00127F50;
    case 476u: goto L_00127F60;
    case 477u: goto L_00127F6C;
    case 478u: goto L_00127FB8;
    case 479u: goto L_00127FC0;
    case 480u: goto L_00127FD4;
    case 481u: goto L_00127FE4;
    case 482u: goto L_00127FF4;
    default: bad_entry(c, 0x00124000u); return;
    }
L_00124000:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_00124010:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0012409C; } }
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00124010u | kUnwind; return; } goto L_00124010; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_00124030:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[2].d[0] | 15360ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.budget -= 3;
L_0012403C:
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 4160ull;
    set32(c.r[2], 0u + 1u);
    st64((c.r[3].w[0]), c.r[2].d[0]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0012418C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 36896ull;
    c.r[3].d[0] = c.r[21].d[0] & c.r[4].d[0];
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);  if (t) { goto L_0012412C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[21].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 36880ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_0012413C; } }
L_00124088:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00124094u); set32(c.r[4], c.r[4].w[0] + 21248u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x00124094u) [[unlikely]] return; }
L_00124094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00124344; } }
L_0012409C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001240A8u); set32(c.r[4], c.r[4].w[0] + 21304u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x001240A8u) [[unlikely]] return; }
L_001240A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], c.r[2].w[0] - 16336u);
    c.r[4].d[0] = c.r[4].d[0] | 20480ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], 0u - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_00124348; } }
L_001240CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 21352u);  if (t) { goto L_001240E0; } }
L_001240D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[4].w[0] + 21416u);
    c.budget -= 2;
L_001240E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001240E8u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x001240E8u) [[unlikely]] return; }
L_001240E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    set32(c.r[4], 0u + 256u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0]), c.r[4].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 4160ull;
    st64((c.r[3].w[0]), 0ull);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 12288ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 15376ull;
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_00124348; } }
L_0012412C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 36880ull;
    c.r[2].d[0] = c.r[21].d[0] & c.r[2].d[0];
    c.budget -= 4;
L_0012413C:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 256u);
    c.r[2].d[0] = c.r[2].d[0] | 36864ull;
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012418C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    c.budget -= 4;
L_00124170:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001240CCu | kUnwind; return; } goto L_001240CC; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00124170u | kUnwind; return; } goto L_00124170; } }
L_0012418C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00124204; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], c.r[18].w[0] << 4);
    c.r[9].d[0] = c.r[9].d[0] | 15360ull;
    set32(c.r[6], c.r[2].w[0] + c.r[21].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    c.r[8].d[0] = c.r[8].d[0] | 20480ull;
    c.budget -= 7;
L_001241B0:
    set32(c.r[2], ld32((c.r[9].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_001241EC; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 15360ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_001241D0:
    c.r[2].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001240D8u | kUnwind; return; } goto L_001240D8; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001241D0u | kUnwind; return; } goto L_001241D0; } }
L_001241EC:
    ld128((c.r[8].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001241B0u | kUnwind; return; } goto L_001241B0; } }
L_00124204:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_001242F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    c.r[2].d[0] = c.r[2].d[0] | 15360ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00124250; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 15360ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_00124230:
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001240D8u | kUnwind; return; } goto L_001240D8; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00124230u | kUnwind; return; } goto L_00124230; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_00124250:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 20480ull;
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[2]);  if (t) { goto L_0012428C; } }
    set32(c.r[6], c.r[18].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_00124268:
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[29].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00124268u | kUnwind; return; } goto L_00124268; } }
L_0012428C:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001242F8; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[8].d[0] = c.r[8].d[0] | 15360ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    c.r[7].d[0] = c.r[7].d[0] | 20480ull;
    c.budget -= 5;
L_001242A8:
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_001242E4; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 15360ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_001242C8:
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001240D8u | kUnwind; return; } goto L_001240D8; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001242C8u | kUnwind; return; } goto L_001242C8; } }
L_001242E4:
    ld128((c.r[7].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001242A8u | kUnwind; return; } goto L_001242A8; } }
L_001242F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[2].d[0] = c.r[2].d[0] | 15360ull;
    c.r[3].d[0] = c.r[3].d[0] | 4160ull;
    st32((c.r[2].w[0]), 0u);
    c.r[4].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00124318u); st64((c.r[3].w[0]), 0ull);  if (depth < kMaxDepth) unit_0001(c, 155u, depth + 1u); else { c.pc = 0x001252A0u; return; } if (c.pc != 0x00124318u) [[unlikely]] return; }
L_00124318:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    set32(c.r[3], c.r[3].w[0] - 16336u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    ld128((c.r[3].w[0]) & ~15u, c.r[5]);
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[2].w[0]), c.r[4].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 20480ull;
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[5]);
    c.budget -= 11;
L_00124344:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_00124348:
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00124370:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012438Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 328u, depth + 1u); else { c.pc = 0x00122AF8u; return; } if (c.pc != 0x0012438Cu) [[unlikely]] return; }
L_0012438C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[18], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_001243B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001243A0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 226u, depth + 1u); else { c.pc = 0x00125A40u; return; } if (c.pc != 0x001243A0u) [[unlikely]] return; }
L_001243A0:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001243ACu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 73u, depth + 1u); else { c.pc = 0x00124C60u; return; } if (c.pc != 0x001243ACu) [[unlikely]] return; }
L_001243AC:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_001243F4; } }
L_001243B8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), c.r[17].w[0]);  goto L_001243D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001243C8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 226u, depth + 1u); else { c.pc = 0x00125A40u; return; } if (c.pc != 0x001243C8u) [[unlikely]] return; }
L_001243C8:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001243D4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 73u, depth + 1u); else { c.pc = 0x00124C60u; return; } if (c.pc != 0x001243D4u) [[unlikely]] return; }
L_001243D4:
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 1;
L_001243D8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001243E8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0001(c, 69u, depth + 1u); else { c.pc = 0x00124C40u; return; } if (c.pc != 0x001243E8u) [[unlikely]] return; }
L_001243E8:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001243F4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 230u, depth + 1u); else { c.pc = 0x00125AA8u; return; } if (c.pc != 0x001243F4u) [[unlikely]] return; }
L_001243F4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00124410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00124428u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 153u, depth + 1u); else { c.pc = 0x00125280u; return; } if (c.pc != 0x00124428u) [[unlikely]] return; }
L_00124428:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00124434u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 155u, depth + 1u); else { c.pc = 0x001252A0u; return; } if (c.pc != 0x00124434u) [[unlikely]] return; }
L_00124434:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00124450:
    c.r[2].d[0] = ld64((c.r[4].w[0] + 48u));
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.r[3].d[0] = c.r[2].d[0] >> 16;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    c.r[2].d[0] = c.r[2].d[0] >> 48;
    c.r[3].d[0] = c.r[3].d[0] & 2047ull;
    c.r[2].d[0] = c.r[2].d[0] & 2047ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] << 48;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 1;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] >> 1;
    c.r[6].d[0] = c.r[6].d[0] - c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] - c.r[3].d[0];
    c.r[2].d[0] = c.r[6].d[0] << 4;
    set32(c.r[7], c.r[7].w[0] << 16);
    c.budget -= 27;
    { const bool t = c.r[7].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] << 4;  if (t) { goto L_001244C8; } }
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(8ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_001244CC; } }
L_001244C8:
    c.r[2].d[0] = c.r[6].d[0] << 36;
    c.budget -= 1;
L_001244CC:
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 32u), c.r[2].d[0]);  c.pc = t; return; }
L_001244D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001244E8u);  if (depth < kMaxDepth) unit_0001(c, 153u, depth + 1u); else { c.pc = 0x00125280u; return; } if (c.pc != 0x001244E8u) [[unlikely]] return; }
L_001244E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001244F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012450Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x0012450Cu) [[unlikely]] return; }
L_0012450C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] | 62752ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | 62864ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 45056ull;
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    st32((c.r[4].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00124560; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0003(c, 292u, depth); }
L_00124560:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00124570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00124584u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00124584u) [[unlikely]] return; }
L_00124584:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] | 62752ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | 62864ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 46080ull;
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    st32((c.r[4].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001245D8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0003(c, 292u, depth); }
L_001245D8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001245E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00124600u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 35u, depth + 1u); else { c.pc = 0x00124570u; return; } if (c.pc != 0x00124600u) [[unlikely]] return; }
L_00124600:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46096ull;
    c.r[6].d[0] = c.r[6].d[0] | 46128ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[4].d[0] | 46112ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 46080ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | 8208ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 18;
L_00124648:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00124648u | kUnwind; return; } goto L_00124648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012466Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x001244F8u; return; } if (c.pc != 0x0012466Cu) [[unlikely]] return; }
L_0012466C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 45072ull;
    c.r[7].d[0] = c.r[7].d[0] | 45088ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].d[0] = c.r[5].d[0] | 45056ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 8224ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001246D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] >> 8);
    c.r[19].d[0] = c.r[2].d[0] & 127ull;
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[18], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 21;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[17], c.r[5].w[0] - c.r[2].w[0]);  if (t) { goto L_00124754; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00124754; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 45072ull;
    c.r[4].d[0] = c.r[4].d[0] | 45088ull;
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00124754u); c.r[4].d[0] = c.r[4].d[0] | 256ull;  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x001244F8u; return; } if (c.pc != 0x00124754u) [[unlikely]] return; }
L_00124754:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    c.budget -= 3;
L_00124760:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00124760u | kUnwind; return; } goto L_00124760; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 5;
L_00124790:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00124790u | kUnwind; return; } goto L_00124790; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00124808; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0012480C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46096ull;
    c.r[4].d[0] = c.r[4].d[0] | 46128ull;
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 46112ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[18].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[4].d[0] | 256ull;
    c.budget -= 19;
    { set32(c.r[29], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124570u | kUnwind; return; } goto L_00124570; }
L_00124808:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0012480C:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00124820:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0012483C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0012486C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00124880; } }
L_0012483C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    c.budget -= 3;
L_00124848:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00124848u | kUnwind; return; } goto L_00124848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0012487C; } }
L_0012486C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8208ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] >> 31);
    c.budget -= 4;
L_0012487C:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_00124880:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124888:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012489Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x0012489Cu) [[unlikely]] return; }
L_0012489C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] | 62752ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | 62864ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 46080ull;
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    st32((c.r[4].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001248F0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0003(c, 292u, depth); }
L_001248F0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00124900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00124910u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 48u, depth + 1u); else { c.pc = 0x00124888u; return; } if (c.pc != 0x00124910u) [[unlikely]] return; }
L_00124910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8208ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    c.budget -= 6;
L_00124928:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00124928u | kUnwind; return; } goto L_00124928; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    st32((c.r[2].w[0]), 0u);
    c.budget -= 5;
L_00124958:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00124958u | kUnwind; return; } goto L_00124958; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], c.r[5].w[0] - 16304u);
    c.r[4].d[0] = c.r[4].d[0] | 28688ull;
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[6].d[0] = c.r[6].d[0] | 8192ull;
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[8].d[0] = c.r[8].d[0] | 8208ull;
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    c.budget -= 27;
L_001249E0:
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001249E0u | kUnwind; return; } goto L_001249E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x58000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    c.budget -= 7;
L_00124A18:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00124A18u | kUnwind; return; } goto L_00124A18; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], c.r[3].w[0] - 16224u);
    c.r[4].d[0] = c.r[4].d[0] | 28688ull;
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x60000000u);
    c.r[5].d[0] = c.r[5].d[0] | 8192ull;
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].d[0] = c.r[7].d[0] | 8208ull;
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.budget -= 15;
L_00124A70:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 4;
L_00124A80:
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00124A70u | kUnwind; return; } goto L_00124A70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x90000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    c.budget -= 7;
L_00124AA8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00124AA8u | kUnwind; return; } goto L_00124AA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8208ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    c.budget -= 7;
L_00124AE0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00124AE0u | kUnwind; return; } goto L_00124AE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    st32((c.r[2].w[0]), 0u);
    c.budget -= 5;
L_00124B10:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00124B10u | kUnwind; return; } goto L_00124B10; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00124B60:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
    c.pc = 0x00124B68u; syscall(c, 0x00124B64u); if (c.pc != 0x00124B68u) return;
    c.budget -= 1;
L_00124B68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124B80:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
    c.pc = 0x00124B88u; syscall(c, 0x00124B84u); if (c.pc != 0x00124B88u) return;
    c.budget -= 1;
L_00124B88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124BA0:
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
    c.pc = 0x00124BA8u; syscall(c, 0x00124BA4u); if (c.pc != 0x00124BA8u) return;
    c.budget -= 1;
L_00124BA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124C10:
    set32(c.r[3], 0u + 13u);
    c.budget -= 1;
    c.pc = 0x00124C18u; syscall(c, 0x00124C14u); if (c.pc != 0x00124C18u) return;
    c.budget -= 1;
L_00124C18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124C40:
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
    c.pc = 0x00124C48u; syscall(c, 0x00124C44u); if (c.pc != 0x00124C48u) return;
    c.budget -= 1;
L_00124C48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124C50:
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
    c.pc = 0x00124C58u; syscall(c, 0x00124C54u); if (c.pc != 0x00124C58u) return;
    c.budget -= 1;
L_00124C58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124C60:
    set32(c.r[3], 0u + 17u);
    c.budget -= 1;
    c.pc = 0x00124C68u; syscall(c, 0x00124C64u); if (c.pc != 0x00124C68u) return;
    c.budget -= 1;
L_00124C68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124C70:
    set32(c.r[3], 0u + 18u);
    c.budget -= 1;
    c.pc = 0x00124C78u; syscall(c, 0x00124C74u); if (c.pc != 0x00124C78u) return;
    c.budget -= 1;
L_00124C78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124C80:
    set32(c.r[3], 0u + 18u);
    c.budget -= 1;
    c.pc = 0x00124C88u; syscall(c, 0x00124C84u); if (c.pc != 0x00124C88u) return;
    c.budget -= 1;
L_00124C88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124C90:
    set32(c.r[3], 0u + 19u);
    c.budget -= 1;
    c.pc = 0x00124C98u; syscall(c, 0x00124C94u); if (c.pc != 0x00124C98u) return;
    c.budget -= 1;
L_00124C98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124CA0:
    set32(c.r[3], 0u + 20u);
    c.budget -= 1;
    c.pc = 0x00124CA8u; syscall(c, 0x00124CA4u); if (c.pc != 0x00124CA8u) return;
    c.budget -= 1;
L_00124CA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124CB0:
    set32(c.r[3], 0u + 21u);
    c.budget -= 1;
    c.pc = 0x00124CB8u; syscall(c, 0x00124CB4u); if (c.pc != 0x00124CB8u) return;
    c.budget -= 1;
L_00124CB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124CC0:
    set32(c.r[3], 0u + 22u);
    c.budget -= 1;
    c.pc = 0x00124CC8u; syscall(c, 0x00124CC4u); if (c.pc != 0x00124CC8u) return;
    c.budget -= 1;
L_00124CC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124CD0:
    set32(c.r[3], 0u + 23u);
    c.budget -= 1;
    c.pc = 0x00124CD8u; syscall(c, 0x00124CD4u); if (c.pc != 0x00124CD8u) return;
    c.budget -= 1;
L_00124CD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124D00:
    set32(c.r[3], 0u - 26u);
    c.budget -= 1;
    c.pc = 0x00124D08u; syscall(c, 0x00124D04u); if (c.pc != 0x00124D08u) return;
    c.budget -= 1;
L_00124D08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124D10:
    set32(c.r[3], 0u - 27u);
    c.budget -= 1;
    c.pc = 0x00124D18u; syscall(c, 0x00124D14u); if (c.pc != 0x00124D18u) return;
    c.budget -= 1;
L_00124D18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124D20:
    set32(c.r[3], 0u - 28u);
    c.budget -= 1;
    c.pc = 0x00124D28u; syscall(c, 0x00124D24u); if (c.pc != 0x00124D28u) return;
    c.budget -= 1;
L_00124D28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124D30:
    set32(c.r[3], 0u - 29u);
    c.budget -= 1;
    c.pc = 0x00124D38u; syscall(c, 0x00124D34u); if (c.pc != 0x00124D38u) return;
    c.budget -= 1;
L_00124D38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124D60:
    set32(c.r[3], 0u + 32u);
    c.budget -= 1;
    c.pc = 0x00124D68u; syscall(c, 0x00124D64u); if (c.pc != 0x00124D68u) return;
    c.budget -= 1;
L_00124D68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124D70:
    set32(c.r[3], 0u + 33u);
    c.budget -= 1;
    c.pc = 0x00124D78u; syscall(c, 0x00124D74u); if (c.pc != 0x00124D78u) return;
    c.budget -= 1;
L_00124D78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124D80:
    set32(c.r[3], 0u + 34u);
    c.budget -= 1;
    c.pc = 0x00124D88u; syscall(c, 0x00124D84u); if (c.pc != 0x00124D88u) return;
    c.budget -= 1;
L_00124D88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124DA0:
    set32(c.r[3], 0u + 36u);
    c.budget -= 1;
    c.pc = 0x00124DA8u; syscall(c, 0x00124DA4u); if (c.pc != 0x00124DA8u) return;
    c.budget -= 1;
L_00124DA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124DB0:
    set32(c.r[3], 0u + 37u);
    c.budget -= 1;
    c.pc = 0x00124DB8u; syscall(c, 0x00124DB4u); if (c.pc != 0x00124DB8u) return;
    c.budget -= 1;
L_00124DB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124DF0:
    set32(c.r[3], 0u + 41u);
    c.budget -= 1;
    c.pc = 0x00124DF8u; syscall(c, 0x00124DF4u); if (c.pc != 0x00124DF8u) return;
    c.budget -= 1;
L_00124DF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124E10:
    set32(c.r[3], 0u + 43u);
    c.budget -= 1;
    c.pc = 0x00124E18u; syscall(c, 0x00124E14u); if (c.pc != 0x00124E18u) return;
    c.budget -= 1;
L_00124E18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124E50:
    set32(c.r[3], 0u + 47u);
    c.budget -= 1;
    c.pc = 0x00124E58u; syscall(c, 0x00124E54u); if (c.pc != 0x00124E58u) return;
    c.budget -= 1;
L_00124E58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124E60:
    set32(c.r[3], 0u + 48u);
    c.budget -= 1;
    c.pc = 0x00124E68u; syscall(c, 0x00124E64u); if (c.pc != 0x00124E68u) return;
    c.budget -= 1;
L_00124E68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124E70:
    set32(c.r[3], 0u - 49u);
    c.budget -= 1;
    c.pc = 0x00124E78u; syscall(c, 0x00124E74u); if (c.pc != 0x00124E78u) return;
    c.budget -= 1;
L_00124E78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124E80:
    set32(c.r[3], 0u + 50u);
    c.budget -= 1;
    c.pc = 0x00124E88u; syscall(c, 0x00124E84u); if (c.pc != 0x00124E88u) return;
    c.budget -= 1;
L_00124E88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124E90:
    set32(c.r[3], 0u + 51u);
    c.budget -= 1;
    c.pc = 0x00124E98u; syscall(c, 0x00124E94u); if (c.pc != 0x00124E98u) return;
    c.budget -= 1;
L_00124E98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124EA0:
    set32(c.r[3], 0u - 52u);
    c.budget -= 1;
    c.pc = 0x00124EA8u; syscall(c, 0x00124EA4u); if (c.pc != 0x00124EA8u) return;
    c.budget -= 1;
L_00124EA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124ED0:
    set32(c.r[3], 0u + 55u);
    c.budget -= 1;
    c.pc = 0x00124ED8u; syscall(c, 0x00124ED4u); if (c.pc != 0x00124ED8u) return;
    c.budget -= 1;
L_00124ED8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124EE0:
    set32(c.r[3], 0u - 56u);
    c.budget -= 1;
    c.pc = 0x00124EE8u; syscall(c, 0x00124EE4u); if (c.pc != 0x00124EE8u) return;
    c.budget -= 1;
L_00124EE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124EF0:
    set32(c.r[3], 0u + 57u);
    c.budget -= 1;
    c.pc = 0x00124EF8u; syscall(c, 0x00124EF4u); if (c.pc != 0x00124EF8u) return;
    c.budget -= 1;
L_00124EF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124F40:
    set32(c.r[3], 0u + 62u);
    c.budget -= 1;
    c.pc = 0x00124F48u; syscall(c, 0x00124F44u); if (c.pc != 0x00124F48u) return;
    c.budget -= 1;
L_00124F48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124F60:
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
    c.pc = 0x00124F68u; syscall(c, 0x00124F64u); if (c.pc != 0x00124F68u) return;
    c.budget -= 1;
L_00124F68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124F70:
    set32(c.r[3], 0u + 65u);
    c.budget -= 1;
    c.pc = 0x00124F78u; syscall(c, 0x00124F74u); if (c.pc != 0x00124F78u) return;
    c.budget -= 1;
L_00124F78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124F80:
    set32(c.r[3], 0u + 66u);
    c.budget -= 1;
    c.pc = 0x00124F88u; syscall(c, 0x00124F84u); if (c.pc != 0x00124F88u) return;
    c.budget -= 1;
L_00124F88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124F90:
    set32(c.r[3], 0u - 67u);
    c.budget -= 1;
    c.pc = 0x00124F98u; syscall(c, 0x00124F94u); if (c.pc != 0x00124F98u) return;
    c.budget -= 1;
L_00124F98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124FA0:
    set32(c.r[3], 0u + 68u);
    c.budget -= 1;
    c.pc = 0x00124FA8u; syscall(c, 0x00124FA4u); if (c.pc != 0x00124FA8u) return;
    c.budget -= 1;
L_00124FA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00124FB0:
    set32(c.r[3], 0u + 69u);
    c.budget -= 1;
    c.pc = 0x00124FB8u; syscall(c, 0x00124FB4u); if (c.pc != 0x00124FB8u) return;
    c.budget -= 1;
L_00124FB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00125000:
    set32(c.r[3], 0u + 74u);
    c.budget -= 1;
    c.pc = 0x00125008u; syscall(c, 0x00125004u); if (c.pc != 0x00125008u) return;
    c.budget -= 1;
L_00125008:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00125010:
    set32(c.r[3], 0u + 75u);
    c.budget -= 1;
    c.pc = 0x00125018u; syscall(c, 0x00125014u); if (c.pc != 0x00125018u) return;
    c.budget -= 1;
L_00125018:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001251E0:
    set32(c.r[3], 0u + 100u);
    c.budget -= 1;
    c.pc = 0x001251E8u; syscall(c, 0x001251E4u); if (c.pc != 0x001251E8u) return;
    c.budget -= 1;
L_001251E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00125210:
    set32(c.r[3], 0u - 104u);
    c.budget -= 1;
    c.pc = 0x00125218u; syscall(c, 0x00125214u); if (c.pc != 0x00125218u) return;
    c.budget -= 1;
L_00125218:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00125230:
    set32(c.r[3], 0u + 107u);
    c.budget -= 1;
    c.pc = 0x00125238u; syscall(c, 0x00125234u); if (c.pc != 0x00125238u) return;
    c.budget -= 1;
L_00125238:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00125280:
    set32(c.r[3], 0u + 112u);
    c.budget -= 1;
    c.pc = 0x00125288u; syscall(c, 0x00125284u); if (c.pc != 0x00125288u) return;
    c.budget -= 1;
L_00125288:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001252A0:
    set32(c.r[3], 0u + 113u);
    c.budget -= 1;
    c.pc = 0x001252A8u; syscall(c, 0x001252A4u); if (c.pc != 0x001252A8u) return;
    c.budget -= 1;
L_001252A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001252D0:
    set32(c.r[3], 0u + 115u);
    c.budget -= 1;
    c.pc = 0x001252D8u; syscall(c, 0x001252D4u); if (c.pc != 0x001252D8u) return;
    c.budget -= 1;
L_001252D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00125300:
    set32(c.r[3], 0u + 118u);
    c.budget -= 1;
    c.pc = 0x00125308u; syscall(c, 0x00125304u); if (c.pc != 0x00125308u) return;
    c.budget -= 1;
L_00125308:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00125320:
    set32(c.r[3], 0u + 119u);
    c.budget -= 1;
    c.pc = 0x00125328u; syscall(c, 0x00125324u); if (c.pc != 0x00125328u) return;
    c.budget -= 1;
L_00125328:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00125330:
    set32(c.r[3], 0u - 119u);
    c.budget -= 1;
    c.pc = 0x00125338u; syscall(c, 0x00125334u); if (c.pc != 0x00125338u) return;
    c.budget -= 1;
L_00125338:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00125340:
    set32(c.r[3], 0u + 120u);
    c.budget -= 1;
    c.pc = 0x00125348u; syscall(c, 0x00125344u); if (c.pc != 0x00125348u) return;
    c.budget -= 1;
L_00125348:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00125350:
    set32(c.r[3], 0u - 120u);
    c.budget -= 1;
    c.pc = 0x00125358u; syscall(c, 0x00125354u); if (c.pc != 0x00125358u) return;
    c.budget -= 1;
L_00125358:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00125360:
    set32(c.r[3], 0u + 121u);
    c.budget -= 1;
    c.pc = 0x00125368u; syscall(c, 0x00125364u); if (c.pc != 0x00125368u) return;
    c.budget -= 1;
L_00125368:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00125370:
    set32(c.r[3], 0u + 122u);
    c.budget -= 1;
    c.pc = 0x00125378u; syscall(c, 0x00125374u); if (c.pc != 0x00125378u) return;
    c.budget -= 1;
L_00125378:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00125390:
    set32(c.r[3], 0u + 124u);
    c.budget -= 1;
    c.pc = 0x00125398u; syscall(c, 0x00125394u); if (c.pc != 0x00125398u) return;
    c.budget -= 1;
L_00125398:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001253C0:
    set32(c.r[3], 0u + 127u);
    c.budget -= 1;
    c.pc = 0x001253C8u; syscall(c, 0x001253C4u); if (c.pc != 0x001253C8u) return;
    c.budget -= 1;
L_001253C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001253D0:
    set32(c.r[3], 0u + 130u);
    c.budget -= 1;
    c.pc = 0x001253D8u; syscall(c, 0x001253D4u); if (c.pc != 0x001253D8u) return;
    c.budget -= 1;
L_001253D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001253E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 16176u), 0u);  c.pc = t; return; }
L_001253F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125400u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00125400u) [[unlikely]] return; }
L_00125400:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00125428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125424u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x00125424u) [[unlikely]] return; }
L_00125424:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_00125428:
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    c.budget -= 2;
L_00125430:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00125430u | kUnwind; return; } goto L_00125430; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125454u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00125454u) [[unlikely]] return; }
L_00125454:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00125478; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0003(c, 292u, depth); }
L_00125478:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00125480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125498u); c.r[5].d[0] = c.r[29].d[0] | 8ull;  if (depth < kMaxDepth) unit_0001(c, 157u, depth + 1u); else { c.pc = 0x001252D0u; return; } if (c.pc != 0x00125498u) [[unlikely]] return; }
L_00125498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001254A0u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x001254A0u) [[unlikely]] return; }
L_001254A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_001254C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001254C4u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x001254C4u) [[unlikely]] return; }
L_001254C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_001254C8:
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    c.budget -= 2;
L_001254D0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001254EC; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001254D0u | kUnwind; return; } goto L_001254D0; } }
L_001254EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001254F4u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x001254F4u) [[unlikely]] return; }
L_001254F4:
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 4096u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00125514; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125514u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x00125514u) [[unlikely]] return; }
L_00125514:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00125528:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_00125588; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[16].w[0] - 16176u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00125578; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125568u);  if (depth < kMaxDepth) unit_0001(c, 338u, depth + 1u); else { c.pc = 0x00126900u; return; } if (c.pc != 0x00125568u) [[unlikely]] return; }
L_00125568:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00125588; } }
    st32((c.r[16].w[0] - 16176u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00125578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125580u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 326u, depth + 1u); else { c.pc = 0x001266B8u; return; } if (c.pc != 0x00125580u) [[unlikely]] return; }
L_00125580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00125590; } }
L_00125588:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_00125590:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001255A8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_00125600; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[16].w[0] - 16176u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001255F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001255E0u);  if (depth < kMaxDepth) unit_0001(c, 338u, depth + 1u); else { c.pc = 0x00126900u; return; } if (c.pc != 0x001255E0u) [[unlikely]] return; }
L_001255E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00125600; } }
    st32((c.r[16].w[0] - 16176u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001255F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001255F8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 334u, depth + 1u); else { c.pc = 0x00126830u; return; } if (c.pc != 0x001255F8u) [[unlikely]] return; }
L_001255F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00125608; } }
L_00125600:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_00125608:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00125620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125630u);  if (depth < kMaxDepth) unit_0008(c, 316u, depth + 1u); else { c.pc = 0x00143700u; return; } if (c.pc != 0x00125630u) [[unlikely]] return; }
L_00125630:
    set32(c.r[3], 0u + 5u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00125648:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_00125658:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_00125660:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_001256AC; } }
L_00125688:
    set_interrupts(c, false);
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00125688u | kUnwind; return; } goto L_00125688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] - 16172u)));  if (t) { goto L_001256B0; } }
L_001256AC:
    set32(c.r[2], ld32((c.r[18].w[0] - 16172u)));
    c.budget -= 1;
L_001256B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001256B8u); set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00124F40u; return; } if (c.pc != 0x001256B8u) [[unlikely]] return; }
L_001256B8:
    c.r[2].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[18].w[0] - 16172u)));  if (t) { goto L_001256E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001256CCu);  if (depth < kMaxDepth) unit_0008(c, 316u, depth + 1u); else { c.pc = 0x00143700u; return; } if (c.pc != 0x001256CCu) [[unlikely]] return; }
L_001256CC:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001256DC; } }
    set_interrupts(c, true);
    c.budget -= 1;
L_001256DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_001256F4; } }
L_001256E8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] - 16172u), c.r[16].w[0]);  if (t) { goto L_001256F4; } }
    set_interrupts(c, true);
    c.budget -= 1;
L_001256F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00125710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00125718:
    set32(c.r[2], 0u + 8192u);
    st64((c.r[5].w[0] + 72u), 0ull);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00125738:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00125750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125750u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 363u, depth + 1u); else { c.pc = 0x0012F6D8u; return; } if (c.pc != 0x00125750u) [[unlikely]] return; }
L_00125750:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00125760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125770u);  if (depth < kMaxDepth) unit_0008(c, 316u, depth + 1u); else { c.pc = 0x00143700u; return; } if (c.pc != 0x00125770u) [[unlikely]] return; }
L_00125770:
    set32(c.r[3], 0u + 5u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00125788:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125798u);  if (depth < kMaxDepth) unit_0008(c, 316u, depth + 1u); else { c.pc = 0x00143700u; return; } if (c.pc != 0x00125798u) [[unlikely]] return; }
L_00125798:
    set32(c.r[3], 0u + 5u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001257B0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 61440ull;
    c.budget -= 4;
L_001257C0:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001257FC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001257FC; } }
    c.budget -= 3;
L_001257FC:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00125838; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00125838; } }
    c.budget -= 3;
L_00125838:
    c.budget -= 1;
L_0012583C:
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.r[2].d[0] = c.r[6].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001257C0u | kUnwind; return; } goto L_001257C0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00125858:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00125890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125890u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00125890u) [[unlikely]] return; }
L_00125890:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65472ull;
    c.r[5].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001258A4u); c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_0001(c, 214u, depth + 1u); else { c.pc = 0x001257B0u; return; } if (c.pc != 0x001258A4u) [[unlikely]] return; }
L_001258A4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001258C0; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0003(c, 292u, depth); }
L_001258C0:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001258F0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 61440ull;
    c.budget -= 4;
L_00125900:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012593C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0012593C; } }
    c.budget -= 3;
L_0012593C:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00125978; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00125978; } }
    c.budget -= 3;
L_00125978:
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.r[2].d[0] = c.r[6].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00125900u | kUnwind; return; } goto L_00125900; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00125998:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001259D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001259D0u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x001259D0u) [[unlikely]] return; }
L_001259D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65472ull;
    c.r[5].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001259E4u); c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_0001(c, 220u, depth + 1u); else { c.pc = 0x001258F0u; return; } if (c.pc != 0x001259E4u) [[unlikely]] return; }
L_001259E4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00125A00; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0003(c, 292u, depth); }
L_00125A00:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00125A30:
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 1ull;  c.pc = t; return; }
L_00125A40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00125A70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125A70u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00125A70u) [[unlikely]] return; }
L_00125A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125A78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 83u, depth + 1u); else { c.pc = 0x00124CB0u; return; } if (c.pc != 0x00125A78u) [[unlikely]] return; }
L_00125A78:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00125A94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125A90u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x00125A90u) [[unlikely]] return; }
L_00125A90:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00125A94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00125AA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00125AD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125AD8u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00125AD8u) [[unlikely]] return; }
L_00125AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125AE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 81u, depth + 1u); else { c.pc = 0x00124CA0u; return; } if (c.pc != 0x00125AE0u) [[unlikely]] return; }
L_00125AE0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00125AFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125AF8u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x00125AF8u) [[unlikely]] return; }
L_00125AF8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00125AFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00125B10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00125B40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125B40u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00125B40u) [[unlikely]] return; }
L_00125B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125B48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 87u, depth + 1u); else { c.pc = 0x00124CD0u; return; } if (c.pc != 0x00125B48u) [[unlikely]] return; }
L_00125B48:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00125B64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125B60u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x00125B60u) [[unlikely]] return; }
L_00125B60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00125B64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00125B78:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00125BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125BA8u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00125BA8u) [[unlikely]] return; }
L_00125BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125BB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 85u, depth + 1u); else { c.pc = 0x00124CC0u; return; } if (c.pc != 0x00125BB0u) [[unlikely]] return; }
L_00125BB0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00125BCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125BC8u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x00125BC8u) [[unlikely]] return; }
L_00125BC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00125BCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00125BE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125BF0u);  if (depth < kMaxDepth) unit_0001(c, 89u, depth + 1u); else { c.pc = 0x00124D00u; return; } if (c.pc != 0x00125BF0u) [[unlikely]] return; }
L_00125BF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00125C00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125C10u);  if (depth < kMaxDepth) unit_0001(c, 91u, depth + 1u); else { c.pc = 0x00124D10u; return; } if (c.pc != 0x00125C10u) [[unlikely]] return; }
L_00125C10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00125C20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125C30u);  if (depth < kMaxDepth) unit_0001(c, 93u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x00125C30u) [[unlikely]] return; }
L_00125C30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00125C3C:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 1;
L_00125C40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125C50u);  if (depth < kMaxDepth) unit_0001(c, 95u, depth + 1u); else { c.pc = 0x00124D30u; return; } if (c.pc != 0x00125C50u) [[unlikely]] return; }
L_00125C50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00125C60:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[20], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[19], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[18], c.r[17].w[0] + 8u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 9u);
    c.budget -= 16;
L_00125CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125CA8u); set32(c.r[4], ld32((c.r[22].w[0] + 20912u)));  if (depth < kMaxDepth) unit_0001(c, 139u, depth + 1u); else { c.pc = 0x00124FA0u; return; } if (c.pc != 0x00125CA8u) [[unlikely]] return; }
L_00125CA8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 511ull;
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    st32((c.r[17].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[20].d[0]; c.r[5].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00125D08; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] + 21712u);  if (t) { goto L_00125CE8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00125CF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00125D28; } }
L_00125CE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_00125D18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00125D28; } }
L_00125CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125D00u); c.r[4].d[0] = ld8((c.r[3].w[0]));  if (depth < kMaxDepth) unit_0001(c, 119u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x00125D00u) [[unlikely]] return; }
L_00125D00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00125CA0u | kUnwind; return; } goto L_00125CA0; } }
L_00125D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125D10u); c.r[4].d[0] = ld8((c.r[6].w[0]));  if (depth < kMaxDepth) unit_0001(c, 109u, depth + 1u); else { c.pc = 0x00124E10u; return; } if (c.pc != 0x00125D10u) [[unlikely]] return; }
L_00125D10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00125CA0u | kUnwind; return; } goto L_00125CA0; } }
L_00125D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125D20u); c.r[4].d[0] = ld8((c.r[3].w[0]));  if (depth < kMaxDepth) unit_0001(c, 123u, depth + 1u); else { c.pc = 0x00124ED0u; return; } if (c.pc != 0x00125D20u) [[unlikely]] return; }
L_00125D20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00125CA0u | kUnwind; return; } goto L_00125CA0; } }
L_00125D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125D30u);  if (depth < kMaxDepth) unit_0001(c, 461u, depth + 1u); else { c.pc = 0x00127CC8u; return; } if (c.pc != 0x00125D30u) [[unlikely]] return; }
L_00125D30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00125CA0u | kUnwind; return; } goto L_00125CA0; } }
L_00125D38:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] - 16168u)));
    st64((c.r[29].w[0] + 112u), c.r[18].d[0]);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0; st64((c.r[29].w[0] + 96u), c.r[17].d[0]);  if (t) { goto L_00125DD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[17], c.r[2].w[0] + 21752u);
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 56u), 0u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 68u), c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125D7Cu); c.r[18].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (depth < kMaxDepth) unit_0001(c, 131u, depth + 1u); else { c.pc = 0x00124F60u; return; } if (c.pc != 0x00125D7Cu) [[unlikely]] return; }
L_00125D7C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[18].w[0] + 20912u), c.r[2].w[0]);  if (t) { goto L_00125DD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 23648u);
    set32(c.r[3], c.r[3].w[0] + 19888u);
    set32(c.r[5], c.r[5].w[0] - 16272u);
    set32(c.r[6], 0u + 1024u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[17].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125DC0u); st32((c.r[29].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_0001(c, 97u, depth + 1u); else { c.pc = 0x00124D60u; return; } if (c.pc != 0x00125DC0u) [[unlikely]] return; }
L_00125DC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; st32((c.r[16].w[0] - 16168u), c.r[4].w[0]);  if (t) { goto L_00125DDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125DD4u); set32(c.r[4], ld32((c.r[18].w[0] + 20912u)));  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x00125DD4u) [[unlikely]] return; }
L_00125DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00125E0C; } }
L_00125DDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[2].w[0] + 20920u);
    st32((c.r[2].w[0] + 20920u), 0u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125DF4u); st32((c.r[3].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0001(c, 282u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x00125DF4u) [[unlikely]] return; }
L_00125DF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125DFCu);  if (depth < kMaxDepth) unit_0001(c, 111u, depth + 1u); else { c.pc = 0x00124E50u; return; } if (c.pc != 0x00125DFCu) [[unlikely]] return; }
L_00125DFC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125E08u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 107u, depth + 1u); else { c.pc = 0x00124DF0u; return; } if (c.pc != 0x00125E08u) [[unlikely]] return; }
L_00125E08:
    set32(c.r[2], ld32((c.r[16].w[0] - 16168u)));
    c.budget -= 1;
L_00125E0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00125E28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], 0u - 47u);
    c.budget -= 4;
    c.pc = 0x00125E3Cu; syscall(c, 0x00125E38u); if (c.pc != 0x00125E3Cu) return;
    c.budget -= 1;
L_00125E3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[4].d[0]; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;  if (t) { goto L_00125E58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125E50u);  if (depth < kMaxDepth) unit_0001(c, 121u, depth + 1u); else { c.pc = 0x00124EA0u; return; } if (c.pc != 0x00125E50u) [[unlikely]] return; }
L_00125E50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00125EB0; } }
L_00125E58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00125E6C; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 16168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { goto L_00125E74; } }
L_00125E6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00125EAC; } }
L_00125E74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 20920u);
    set32(c.r[4], ld32((c.r[5].w[0] + 20912u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125EA8u); st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0001(c, 137u, depth + 1u); else { c.pc = 0x00124F90u; return; } if (c.pc != 0x00125EA8u) [[unlikely]] return; }
L_00125EA8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00125EAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00125EB0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00125EC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00125EE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 16168u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { goto L_00125EF0; } }
L_00125EE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00125F2C; } }
L_00125EF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 20920u);
    set32(c.r[4], ld32((c.r[5].w[0] + 20912u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125F28u); st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0001(c, 137u, depth + 1u); else { c.pc = 0x00124F90u; return; } if (c.pc != 0x00125F28u) [[unlikely]] return; }
L_00125F28:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00125F2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00125F40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], 0u - 47u);
    c.budget -= 4;
    c.pc = 0x00125F54u; syscall(c, 0x00125F50u); if (c.pc != 0x00125F54u) return;
    c.budget -= 1;
L_00125F54:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[4].d[0]; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;  if (t) { goto L_00125F70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125F68u);  if (depth < kMaxDepth) unit_0001(c, 125u, depth + 1u); else { c.pc = 0x00124EE0u; return; } if (c.pc != 0x00125F68u) [[unlikely]] return; }
L_00125F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00125FCC; } }
L_00125F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00125F84; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 16168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { goto L_00125F8C; } }
L_00125F84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00125FC8; } }
L_00125F8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 20920u);
    set32(c.r[4], ld32((c.r[5].w[0] + 20912u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00125FC4u); st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0001(c, 137u, depth + 1u); else { c.pc = 0x00124F90u; return; } if (c.pc != 0x00125FC4u) [[unlikely]] return; }
L_00125FC4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00125FC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00125FCC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00125FD8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0012600C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32776ull;  if (t) { goto L_0012608C; } }
L_0012600C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 21776u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126028u); st32((c.r[29].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0001(c, 131u, depth + 1u); else { c.pc = 0x00124F60u; return; } if (c.pc != 0x00126028u) [[unlikely]] return; }
L_00126028:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00126040; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32771ull;  if (t) { goto L_0012608C; } }
L_00126040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126048u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0004(c, 72u, depth + 1u); else { c.pc = 0x00130B00u; return; } if (c.pc != 0x00126048u) [[unlikely]] return; }
L_00126048:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 25112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012605Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 82u, depth + 1u); else { c.pc = 0x00130CB0u; return; } if (c.pc != 0x0012605Cu) [[unlikely]] return; }
L_0012605C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_00126078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126070u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x00126070u) [[unlikely]] return; }
L_00126070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012608C; } }
L_00126078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126080u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 139u, depth + 1u); else { c.pc = 0x00124FA0u; return; } if (c.pc != 0x00126080u) [[unlikely]] return; }
L_00126080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126088u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00124F70u; return; } if (c.pc != 0x00126088u) [[unlikely]] return; }
L_00126088:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012608C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001260A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001260C0u); st64((c.r[29].w[0] + 48u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0001(c, 225u, depth + 1u); else { c.pc = 0x00125A30u; return; } if (c.pc != 0x001260C0u) [[unlikely]] return; }
L_001260C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00126200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001260D0u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x001260D0u) [[unlikely]] return; }
L_001260D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00126110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001260E0u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 113u, depth + 1u); else { c.pc = 0x00124E60u; return; } if (c.pc != 0x001260E0u) [[unlikely]] return; }
L_001260E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_001260FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001260F4u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x001260F4u) [[unlikely]] return; }
L_001260F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00126200; } }
L_001260FC:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_00126118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126110u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x00126110u) [[unlikely]] return; }
L_00126110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00126200; } }
L_00126118:
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 672u);
    st128((c.r[2].w[0]) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 64u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 80u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 96u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 112u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 128u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 144u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 160u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 176u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 192u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 208u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 240u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 256u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 272u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 288u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 304u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 320u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 336u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 352u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 368u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 384u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 400u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 416u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 432u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 512u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 528u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 544u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 560u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 576u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 592u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 608u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 624u) & ~15u, c.r[0]);
    set32(c.r[8], c.r[18].w[0] << 0);
    st64((c.r[2].w[0] + 64u), c.r[8].d[0]);
    set32(c.r[8], ld32((c.r[2].w[0] + 448u)));
    st64((c.r[2].w[0] + 448u), c.r[8].d[0]);
    st64((c.r[2].w[0] + 456u), 0ull);
    set32(c.r[8], ld32((c.r[2].w[0] + 464u)));
    st64((c.r[2].w[0] + 464u), c.r[8].d[0]);
    st64((c.r[2].w[0] + 472u), 0ull);
    set32(c.r[8], ld32((c.r[2].w[0] + 480u)));
    st64((c.r[2].w[0] + 480u), c.r[8].d[0]);
    st64((c.r[2].w[0] + 488u), 0ull);
    set32(c.r[8], ld32((c.r[2].w[0] + 496u)));
    st64((c.r[2].w[0] + 496u), c.r[8].d[0]);
    st64((c.r[2].w[0] + 504u), 0ull);
    c.budget -= 55;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001261F4u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x001261F4u) [[unlikely]] return; }
L_001261F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126200u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 101u, depth + 1u); else { c.pc = 0x00124D80u; return; } if (c.pc != 0x00126200u) [[unlikely]] return; }
L_00126200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00126218:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126228u); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 137u, depth + 1u); else { c.pc = 0x00124F90u; return; } if (c.pc != 0x00126228u) [[unlikely]] return; }
L_00126228:
    set_interrupts(c, true);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00126240:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[2].w[0] + 21952u);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126278u); st32((c.r[29].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 173u, depth + 1u); else { c.pc = 0x00125390u; return; } if (c.pc != 0x00126278u) [[unlikely]] return; }
L_00126278:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00126288:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001262A0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 173u, depth + 1u); else { c.pc = 0x00125390u; return; } if (c.pc != 0x001262A0u) [[unlikely]] return; }
L_001262A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001262B0:
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 24));
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001262D4u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 173u, depth + 1u); else { c.pc = 0x00125390u; return; } if (c.pc != 0x001262D4u) [[unlikely]] return; }
L_001262D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001262E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001262F8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 173u, depth + 1u); else { c.pc = 0x00125390u; return; } if (c.pc != 0x001262F8u) [[unlikely]] return; }
L_001262F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00126308:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], 0u + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012632Cu); st32((c.r[29].w[0] + 8u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0001(c, 173u, depth + 1u); else { c.pc = 0x00125390u; return; } if (c.pc != 0x0012632Cu) [[unlikely]] return; }
L_0012632C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00126338:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126350u); set32(c.r[4], 0u + 33u);  if (depth < kMaxDepth) unit_0001(c, 173u, depth + 1u); else { c.pc = 0x00125390u; return; } if (c.pc != 0x00126350u) [[unlikely]] return; }
L_00126350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00126360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], 0u - 5u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126388u); st32((c.r[29].w[0] + 8u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0001(c, 173u, depth + 1u); else { c.pc = 0x00125390u; return; } if (c.pc != 0x00126388u) [[unlikely]] return; }
L_00126388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00126398:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], 0u - 6u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001263C0u); st32((c.r[29].w[0] + 8u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0001(c, 173u, depth + 1u); else { c.pc = 0x00125390u; return; } if (c.pc != 0x001263C0u) [[unlikely]] return; }
L_001263C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00126400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126418u); set32(c.r[4], 0u - 8u);  if (depth < kMaxDepth) unit_0001(c, 173u, depth + 1u); else { c.pc = 0x00125390u; return; } if (c.pc != 0x00126418u) [[unlikely]] return; }
L_00126418:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00126428:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126440u); set32(c.r[4], 0u - 9u);  if (depth < kMaxDepth) unit_0001(c, 173u, depth + 1u); else { c.pc = 0x00125390u; return; } if (c.pc != 0x00126440u) [[unlikely]] return; }
L_00126440:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00126450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126468u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0001(c, 173u, depth + 1u); else { c.pc = 0x00125390u; return; } if (c.pc != 0x00126468u) [[unlikely]] return; }
L_00126468:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00126478:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[2].w[0] + 22016u);
    st32((c.r[2].w[0] + 22016u), c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + 16u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 12u), c.r[4].w[0]);  c.pc = t; return; }
L_001264A0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[5].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_001264D4; } }
    set32(c.r[2], c.r[5].w[0] + 16u);
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_001264D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001264E0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[5].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_00126514; } }
    set32(c.r[2], c.r[5].w[0] + 16u);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_00126514:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00126520:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (t) { goto L_0012662C; } }
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00126560; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0012667C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001266A4; } }
L_00126560:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001266A0; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 20u)));  goto L_001265D0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(321ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_0012658C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012658Cu); set32(c.r[4], c.r[4].w[0] + 21800u);  if (depth < kMaxDepth) unit_0001(c, 461u, depth + 1u); else { c.pc = 0x00127CC8u; return; } if (c.pc != 0x0012658Cu) [[unlikely]] return; }
L_0012658C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001265A4u); set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 304u, depth + 1u); else { c.pc = 0x00126360u; return; } if (c.pc != 0x001265A4u) [[unlikely]] return; }
L_001265A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_001265BC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001265BCu); set32(c.r[4], c.r[4].w[0] + 21840u);  if (depth < kMaxDepth) unit_0001(c, 461u, depth + 1u); else { c.pc = 0x00127CC8u; return; } if (c.pc != 0x001265BCu) [[unlikely]] return; }
L_001265BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001266A0; } }
L_001265D0:
    set32(c.r[16], 0u + 12u);
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00126620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_001265F4; } }
    c.budget -= 1;
L_001265F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_001265F4:
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126610u); set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_0001(c, 315u, depth + 1u); else { c.pc = 0x001264A0u; return; } if (c.pc != 0x00126610u) [[unlikely]] return; }
L_00126610:
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001265F0u | kUnwind; return; } goto L_001265F0; }
L_00126620:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001266A0; } }
L_0012662C:
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126640u); c.r[6].d[0] = c.r[6].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0001(c, 306u, depth + 1u); else { c.pc = 0x00126398u; return; } if (c.pc != 0x00126640u) [[unlikely]] return; }
L_00126640:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_00126660; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126658u); set32(c.r[4], c.r[4].w[0] + 21864u);  if (depth < kMaxDepth) unit_0001(c, 461u, depth + 1u); else { c.pc = 0x00127CC8u; return; } if (c.pc != 0x00126658u) [[unlikely]] return; }
L_00126658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00126698; } }
L_00126660:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001266A0; } }
L_0012667C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00126698; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126698u); set32(c.r[4], c.r[4].w[0] + 21888u);  if (depth < kMaxDepth) unit_0001(c, 461u, depth + 1u); else { c.pc = 0x00127CC8u; return; } if (c.pc != 0x00126698u) [[unlikely]] return; }
L_00126698:
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_001266A0:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001266A4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001266B8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[19], c.r[21].w[0] + 22288u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00126804; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126708u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00126708u) [[unlikely]] return; }
L_00126708:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 22336u);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[8], 0u - 1u);
    st32((c.r[19].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[7], 0u + 10u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[6].w[0] + 12u);
    c.budget -= 12;
L_00126738:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[8].d[0]) { set32(c.r[16], c.r[21].w[0] + 22288u);  goto L_00126788; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_00126768; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_00126784; } }
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_00126768:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00126738u | kUnwind; return; } goto L_00126738; } }
L_00126784:
    set32(c.r[16], c.r[21].w[0] + 22288u);
    c.budget -= 1;
L_00126788:
    set32(c.r[2], c.r[17].w[0] + 12u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 22288u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001267A4u); st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0001(c, 296u, depth + 1u); else { c.pc = 0x001262B0u; return; } if (c.pc != 0x001267A4u) [[unlikely]] return; }
L_001267A4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001267C8; } }
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00126804; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001267C0u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x001267C0u) [[unlikely]] return; }
L_001267C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00126804; } }
L_001267C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001267F0; } }
    c.budget -= 1;
L_001267D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 22288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001267E4u);  if (depth < kMaxDepth) unit_0001(c, 298u, depth + 1u); else { c.pc = 0x001262E0u; return; } if (c.pc != 0x001267E4u) [[unlikely]] return; }
L_001267E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001267D8u | kUnwind; return; } goto L_001267D8; } }
L_001267F0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00126804; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126800u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x00126800u) [[unlikely]] return; }
L_00126800:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00126804:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00126830:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 11;
    { const bool t = c.r[18].sd[0] <= 0; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_001268DC; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
L_00126868:
    set32(c.r[17], c.r[3].w[0] + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 22312u)));
    set32(c.r[16], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00126878:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00126878u | kUnwind; return; } goto L_00126878; } }
    set32(c.r[5], c.r[19].w[0] + 22288u);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001268B0u); set32(c.r[4], ld32((c.r[5].w[0] + 24u)));  if (depth < kMaxDepth) unit_0001(c, 316u, depth + 1u); else { c.pc = 0x001264E0u; return; } if (c.pc != 0x001268B0u) [[unlikely]] return; }
L_001268B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 13u);  if (t) { goto L_001268C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001268D0; } }
L_001268C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001268E0; } }
L_001268D0:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00126868u | kUnwind; return; } goto L_00126868; } }
L_001268DC:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001268E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00126900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012691Cu); c.r[16].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (depth < kMaxDepth) unit_0001(c, 147u, depth + 1u); else { c.pc = 0x001251E0u; return; } if (c.pc != 0x0012691Cu) [[unlikely]] return; }
L_0012691C:
    set32(c.r[17], c.r[16].w[0] + 22288u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00120000u);
    set32(c.r[4], 0u + 528u);
    set32(c.r[6], c.r[6].w[0] + 25888u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126934u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 292u, depth + 1u); else { c.pc = 0x00126240u; return; } if (c.pc != 0x00126934u) [[unlikely]] return; }
L_00126934:
    st32((c.r[16].w[0] + 22288u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 22288u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { goto L_0012694C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001269A8; } }
L_0012694C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], c.r[4].w[0] + 22656u);
    set32(c.r[2], c.r[2].w[0] + 22336u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[6], 0u + 528u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], 0u + 69u);
    set32(c.r[3], 0u + 72u);
    set32(c.r[4], 0u + 256u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001269A0u); st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0001(c, 314u, depth + 1u); else { c.pc = 0x00126478u; return; } if (c.pc != 0x001269A0u) [[unlikely]] return; }
L_001269A0:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001269A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001269C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 61744ull;
    c.budget -= 2;
L_001269C8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001269C8u | kUnwind; return; } goto L_001269C8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 61824ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_001269F8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], ld32((c.r[17].w[0] - 16160u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 126ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (t) { goto L_00126A40; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[17].w[0] - 16160u), 0u);
    set32(c.r[2], c.r[18].w[0] + 22976u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126A38u); st8((c.r[2].w[0] + 127u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0001(c, 312u, depth + 1u); else { c.pc = 0x00126450u; return; } if (c.pc != 0x00126A38u) [[unlikely]] return; }
L_00126A38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] - 16160u)));  if (t) { goto L_00126A44; } }
L_00126A40:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 1;
L_00126A44:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[18].w[0] + 22976u);  if (t) { goto L_00126A80; } }
    set32(c.r[4], c.r[18].w[0] + 22976u);
    st32((c.r[17].w[0] - 16160u), 0u);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00126450u | kUnwind; return; } goto L_00126450; }
L_00126A80:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[17].w[0] - 16160u), c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00126AA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00126AD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126AC0u); set32(c.r[4], 0u + 13u);  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x001269C0u; return; } if (c.pc != 0x00126AC0u) [[unlikely]] return; }
L_00126AC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], 0u + 10u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001269C0u | kUnwind; return; } goto L_001269C0; }
L_00126AD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001269C0u | kUnwind; return; } goto L_001269C0; }
L_00126AE0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] << 1;
    c.r[6].d[0] = c.r[2].d[0] >> 53;
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-1075ll);
    c.r[2].d[0] = c.r[6].sd[0] < -53ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[6].sd[0] < 13ll ? 1ull : 0ull;  if (t) { goto L_00126B04; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00126B04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] << 12;  if (t) { goto L_00126B14; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 9999u);  c.pc = t; return; }
L_00126B14:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 37;
    c.r[5].d[0] = c.r[2].d[0] >> 12;
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] >= 0; c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];  if (t) { goto L_00126B58; } }
    c.r[6].d[0] = 0ull - c.r[6].d[0];
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-2ll);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] >> (c.r[3].w[0] & 63u);
    c.r[4].d[0] = c.r[5].d[0] & 3ull;
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[5].d[0] >> 2;  goto L_00126B64; }
    c.r[2].d[0] = c.r[5].d[0] >> 2;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00126B64; } }
L_00126B58:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << (c.r[2].w[0] & 63u);
    c.budget -= 3;
L_00126B64:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_00126B70:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00126BBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00126D20; } }
L_00126BBC:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126BCCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x00126BCCu) [[unlikely]] return; }
L_00126BCC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00126C00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126BDCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0014E400u; return; } if (c.pc != 0x00126BDCu) [[unlikely]] return; }
L_00126BDC:
    set32(c.r[20], 0u + 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[21].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00126BF4u); set32(c.r[6], 0u + 45u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00126BF4u) [[unlikely]] return; }
L_00126BF4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_00126C00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 21944u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126C10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x00126C10u) [[unlikely]] return; }
L_00126C10:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[19].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00126C54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00126C34; } }
L_00126C20:
    c.r[5].d[0] = 0ull | 32840ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126C30u); set32(c.r[18], c.r[18].w[0] - 1u);  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x00126C30u) [[unlikely]] return; }
L_00126C30:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00126C34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 21952u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126C44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x00126C44u) [[unlikely]] return; }
L_00126C44:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00126C20u | kUnwind; return; } goto L_00126C20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00126CA4; } }
L_00126C54:
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126C64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x00126C64u) [[unlikely]] return; }
L_00126C64:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[19].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00126CA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00126C8C; } }
    c.budget -= 1;
L_00126C78:
    c.r[5].d[0] = 0ull | 32840ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126C88u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0014E6F0u; return; } if (c.pc != 0x00126C88u) [[unlikely]] return; }
L_00126C88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00126C8C:
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126C9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0014E950u; return; } if (c.pc != 0x00126C9Cu) [[unlikely]] return; }
L_00126C9C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00126C78u | kUnwind; return; } goto L_00126C78; } }
L_00126CA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 21960u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126CB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 67u, depth + 1u); else { c.pc = 0x0014E468u; return; } if (c.pc != 0x00126CB4u) [[unlikely]] return; }
L_00126CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126CBCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 28u, depth + 1u); else { c.pc = 0x0014DB70u; return; } if (c.pc != 0x00126CBCu) [[unlikely]] return; }
L_00126CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126CC4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 348u, depth + 1u); else { c.pc = 0x00126AE0u; return; } if (c.pc != 0x00126CC4u) [[unlikely]] return; }
L_00126CC4:
    set32(c.r[7], c.r[19].w[0] + 21920u);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126CDCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 447u, depth + 1u); else { c.pc = 0x00127B08u; return; } if (c.pc != 0x00126CDCu) [[unlikely]] return; }
L_00126CDC:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0; set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_00126CFC; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 21928u);  if (t) { goto L_00126D10; } }
L_00126CFC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 21936u);
    c.budget -= 5;
L_00126D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00126D18u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 447u, depth + 1u); else { c.pc = 0x00127B08u; return; } if (c.pc != 0x00126D18u) [[unlikely]] return; }
L_00126D18:
    set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_00126D20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00126D48:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 256u), c.r[30].d[0]);
    set32(c.r[2], c.r[29].w[0] + 31u);
    st64((c.r[29].w[0] + 224u), c.r[22].d[0]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 272u), c.r[31].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 240u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 208u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[16].d[0]);
    st32((c.r[29].w[0] + 64u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[22].w[0]));
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 88u), 0u);  if (t) { goto L_00127A0C; } }
    set32(c.r[3], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 2;
L_00126DA8:
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 37u);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 84u), 0u);  if (t) { goto L_001279C4; } }
L_00126DC8:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[5].d[0] = ld8((c.r[22].w[0]));
    set32(c.r[2], c.r[5].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(89ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00127514; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 22016u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00124000u < 16384u) { entry = entries_0001[(t - 0x00124000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00126E04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00126DC8u | kUnwind; return; } goto L_00126DC8; } }
L_00126E0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 2ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00126DC8u | kUnwind; return; } goto L_00126DC8; } }
L_00126E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 4ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00126DC8u | kUnwind; return; } goto L_00126DC8; } }
L_00126E1C:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 10u);
    c.budget -= 3;
L_00126E28:
    mmi::mult(c, 0, c.r[16].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] << 24);
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    c.r[5].d[0] = ld8((c.r[22].w[0]));
    set32(c.r[4], c.r[4].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00126E28u | kUnwind; return; } goto L_00126E28; } }
    st32((c.r[29].w[0] + 80u), c.r[16].w[0]);
    c.budget -= 1;
L_00126E54:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_001279F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[22].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00126DC8u | kUnwind; return; } goto L_00126DC8; } }
L_00126E64:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[21].d[0] = c.r[21].d[0] | 32ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    set32(c.r[2], 0u + 42u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_00126E98; } }
    set32(c.r[30], c.r[30].w[0] + 8u);
    set32(c.r[2], 0u - 2u);
    set32(c.r[16], ld32((c.r[30].w[0] - 8u)));
    set32(c.r[8], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00126DC8u | kUnwind; return; } goto L_00126DC8; } }
L_00126E98:
    set32(c.r[2], c.r[5].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00126ED8; } }
    set32(c.r[6], 0u + 10u);
    c.budget -= 2;
L_00126EB0:
    mmi::mult(c, 0, c.r[16].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] << 24);
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    c.r[5].d[0] = ld8((c.r[22].w[0]));
    set32(c.r[4], c.r[4].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00126EB0u | kUnwind; return; } goto L_00126EB0; } }
L_00126ED8:
    set32(c.r[2], 0u - 2u);
    set32(c.r[8], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00126E54u | kUnwind; return; } goto L_00126E54; } }
L_00126EEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 8ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00126DC8u | kUnwind; return; } goto L_00126DC8; } }
L_00126EF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 16ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00126DC8u | kUnwind; return; } goto L_00126DC8; } }
L_00126EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 64ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00126DC8u | kUnwind; return; } goto L_00126DC8; } }
L_00126F04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 128ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00126DC8u | kUnwind; return; } goto L_00126DC8; } }
L_00126F0C:
    c.r[2].d[0] = c.r[21].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 128ull;  if (t) { goto L_00126F24; } }
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[30].w[0] - 8u));  if (t) { goto L_00126F38; } }
L_00126F24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[30], c.r[30].w[0] + 8u);  if (t) { goto L_00126F34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[30].w[0] - 8u));  if (t) { goto L_00126F38; } }
L_00126F34:
    c.r[16].d[0] = ld32((c.r[30].w[0] - 8u));
    c.budget -= 1;
L_00126F38:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_00126F68; } }
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_00126F54; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_00126FAC; } }
L_00126F54:
    set32(c.r[23], c.r[22].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_00126FB0; } }
L_00126F68:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[3].d[0] = c.r[21].d[0] & 16ull;
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 4;
L_00126F78:
    c.r[2].d[0] = c.r[16].d[0] & 7ull;
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[16].d[0] = c.r[16].d[0] >> 3;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00126F78u | kUnwind; return; } goto L_00126F78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_00126FB4; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_00126FB4; } }
L_00126FAC:
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 1;
L_00126FB0:
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 1;
L_00126FB4:
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + 1u);  if (t) { goto L_00127544; } }
L_00126FC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].d[0] = c.r[21].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 21968u);  if (t) { goto L_00127014; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], 0u + 120u);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_00127014; } }
L_00126FEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].d[0] = c.r[21].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 21992u);  if (t) { goto L_00127014; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], 0u + 88u);
    set32(c.r[5], 0u + 2u);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 84u), c.r[5].w[0]);
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00127014:
    c.r[2].d[0] = c.r[21].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 128ull;  if (t) { goto L_0012702C; } }
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[30].w[0] - 8u));  if (t) { goto L_00127040; } }
L_0012702C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[30], c.r[30].w[0] + 8u);  if (t) { goto L_0012703C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[30].w[0] - 8u));  if (t) { goto L_00127040; } }
L_0012703C:
    c.r[16].d[0] = ld32((c.r[30].w[0] - 8u));
    c.budget -= 1;
L_00127040:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_00127074; } }
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 84u), 0u);  if (t) { goto L_0012705C; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_00127270; } }
L_0012705C:
    set32(c.r[2], 0u + 48u);
    set32(c.r[23], c.r[22].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_00127274; } }
L_00127074:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 3;
L_00127080:
    c.r[2].d[0] = c.r[16].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[16].d[0] = c.r[16].d[0] >> 4;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00127080u | kUnwind; return; } goto L_00127080; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0012727C; } }
L_001270AC:
    c.r[2].d[0] = c.r[21].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 128ull;  if (t) { goto L_001270C4; } }
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[30].w[0] - 8u));  if (t) { goto L_001270D8; } }
L_001270C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[30], c.r[30].w[0] + 8u);  if (t) { goto L_001270D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0] - 8u)));  if (t) { goto L_001270D8; } }
L_001270D4:
    set32(c.r[16], ld32((c.r[30].w[0] - 8u)));
    c.budget -= 1;
L_001270D8:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_00127110; } }
    c.r[2].d[0] = c.r[21].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 43u);  if (t) { goto L_001270F8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_0012711C; } }
L_001270F8:
    c.r[2].d[0] = c.r[21].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_00127120; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.r[4].w[0]);  if (t) { goto L_0012711C; } }
L_00127110:
    set32(c.r[2], 0u + 45u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0] + 84u), c.r[5].w[0]);
    c.budget -= 3;
L_0012711C:
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00127120:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00127154; } }
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0012713C; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_001271B0; } }
L_0012713C:
    set32(c.r[2], 0u + 48u);
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    set32(c.r[17], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001271B4; } }
L_00127154:
    c.r[3].d[0] = 0ull - c.r[16].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_001271B0; } }
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 2;
L_00127170:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127180u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_000B(c, 9u, depth + 1u); else { c.pc = 0x0014C868u; return; } if (c.pc != 0x00127180u) [[unlikely]] return; }
L_00127180:
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127198u); st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 8u, depth + 1u); else { c.pc = 0x0014C1D0u; return; } if (c.pc != 0x00127198u) [[unlikely]] return; }
L_00127198:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00127170u | kUnwind; return; } goto L_00127170; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_001271BC; } }
L_001271B0:
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 1;
L_001271B4:
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 2;
L_001271BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + 1u);  if (t) { goto L_00127544; } }
L_001271C4:
    c.r[2].d[0] = c.r[21].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 128ull;  if (t) { goto L_001271DC; } }
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[30].w[0] - 8u));  if (t) { goto L_001271F0; } }
L_001271DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[30], c.r[30].w[0] + 8u);  if (t) { goto L_001271EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[30].w[0] - 8u));  if (t) { goto L_001271F0; } }
L_001271EC:
    c.r[16].d[0] = ld32((c.r[30].w[0] - 8u));
    c.budget -= 1;
L_001271F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_00127220; } }
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_0012720C; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_00127270; } }
L_0012720C:
    set32(c.r[23], c.r[22].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_00127274; } }
L_00127220:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 4;
L_00127230:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127240u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_000B(c, 12u, depth + 1u); else { c.pc = 0x0014D478u; return; } if (c.pc != 0x00127240u) [[unlikely]] return; }
L_00127240:
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127258u); st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 11u, depth + 1u); else { c.pc = 0x0014CEF8u; return; } if (c.pc != 0x00127258u) [[unlikely]] return; }
L_00127258:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00127230u | kUnwind; return; } goto L_00127230; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0012727C; } }
L_00127270:
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 1;
L_00127274:
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 2;
L_0012727C:
    set32(c.r[18], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] - c.r[17].w[0]);  if (t) { goto L_00127548; } }
L_00127288:
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127294u); c.r[4].d[0] = ld64((c.r[30].w[0] - 8u));  if (depth < kMaxDepth) unit_000B(c, 94u, depth + 1u); else { c.pc = 0x0014EB28u; return; } if (c.pc != 0x00127294u) [[unlikely]] return; }
L_00127294:
    c.f[12] = c.f[0];
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (t) { goto L_001272BC; } }
    set32(c.r[6], 0u + 48u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_001279D4; } }
L_001272BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001272C4u); set32(c.r[23], c.r[22].w[0] + 1u);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001272C4u) [[unlikely]] return; }
L_001272C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001272D8u); set32(c.r[6], ld32((c.r[29].w[0] + 92u)));  if (depth < kMaxDepth) unit_0001(c, 349u, depth + 1u); else { c.pc = 0x00126B70u; return; } if (c.pc != 0x001272D8u) [[unlikely]] return; }
L_001272D8:
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[5].w[0]);
    c.budget -= 3;
L_001272E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_001279F4; } }
L_001272EC:
    set32(c.r[30], c.r[30].w[0] + 8u);
    set32(c.r[3], ld32((c.r[30].w[0] - 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[21].d[0] & 32ull;  if (t) { goto L_00127380; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 40u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00127314u); set32(c.r[23], c.r[22].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00127314u) [[unlikely]] return; }
L_00127314:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 110u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00127328u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00127328u) [[unlikely]] return; }
L_00127328:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 117u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012733Cu); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012733Cu) [[unlikely]] return; }
L_0012733C:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 108u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00127350u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00127350u) [[unlikely]] return; }
L_00127350:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 108u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00127364u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00127364u) [[unlikely]] return; }
L_00127364:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 41u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00127378u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00127378u) [[unlikely]] return; }
L_00127378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_001279F4; } }
L_00127380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001273E0; } }
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001273CC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_001273CC; } }
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 3;
L_001273A8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00127428; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001273A8u | kUnwind; return; } goto L_001273A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00127548; } }
L_001273CC:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00127428; } }
L_001273E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0012741C; } }
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 3;
L_001273F8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001273F8u | kUnwind; return; } goto L_001273F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00127548; } }
L_0012741C:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 3;
L_00127428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00127548; } }
L_00127430:
    set32(c.r[30], c.r[30].w[0] + 8u);
    set32(c.r[17], ld32((c.r[29].w[0] + 76u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] - 8u)));
    c.r[21].d[0] = c.r[21].d[0] | 256ull;
    set32(c.r[8], 0u + 1u);
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + 1u);  if (t) { goto L_00127544; } }
L_00127468:
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[16].d[0] = ld32((c.r[30].w[0] - 8u));
    set32(c.r[4], c.r[2].w[0] + 21968u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_001274A8; } }
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_00127494; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_001274E4; } }
L_00127494:
    set32(c.r[23], c.r[22].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_001274E8; } }
L_001274A8:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 4;
L_001274B8:
    c.r[2].d[0] = c.r[16].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[16].d[0] = c.r[16].d[0] >> 4;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001274B8u | kUnwind; return; } goto L_001274B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_001274F0; } }
L_001274E4:
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 1;
L_001274E8:
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    set32(c.r[2], 0u + 48u);
    c.budget -= 2;
L_001274F0:
    set32(c.r[3], 0u + 120u);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] - c.r[17].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_00127548; } }
L_00127514:
    set32(c.r[2], c.r[6].w[0] << 24);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_001279F0; } }
    c.r[21].d[0] = c.r[21].d[0] | 256ull;
    set32(c.r[8], 0u + 1u);
    set32(c.r[23], c.r[22].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[18], c.r[17].w[0] + 1u);
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 9;
L_00127544:
    set32(c.r[4], c.r[5].w[0] - c.r[17].w[0]);
    c.budget -= 1;
L_00127548:
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] - c.r[4].w[0]);
    if (c.r[2].d[0] == 0) c.r[8].d[0] = 0ull;
    set32(c.r[3], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[17], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    c.budget -= 12;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_00127594; } }
    c.r[2].d[0] = c.r[21].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], 0u + 32u);  if (t) { goto L_001275B4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].sd[0] < 1ll ? 1ull : 0ull;  if (t) { goto L_001275B0; } }
L_00127594:
    c.r[3].d[0] = c.r[21].d[0] & 36ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[7], 0u + 32u);  if (t) { goto L_001275B4; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[3], 0u + 48u);
    c.r[2].d[0] = c.r[5].sd[0] < 1ll ? 1ull : 0ull;
    c.budget -= 3;
L_001275B0:
    if (c.r[2].d[0] == 0) c.r[7].d[0] = c.r[3].d[0];
    c.budget -= 1;
L_001275B4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  if (t) { goto L_001276C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00127614; } }
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_001275D0:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001275F0u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001275F0u) [[unlikely]] return; }
L_001275F0:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001275D0u | kUnwind; return; } goto L_001275D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00127618; } }
L_00127614:
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00127618:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_00127650; } }
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 2;
L_00127628:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 48u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00127640u); set32(c.r[16], c.r[16].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00127640u) [[unlikely]] return; }
L_00127640:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00127628u | kUnwind; return; } goto L_00127628; } }
L_00127650:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_00127688; } }
L_00127658:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00127670u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00127670u) [[unlikely]] return; }
L_00127670:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00127658u | kUnwind; return; } goto L_00127658; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 1;
L_00127688:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001272E4u | kUnwind; return; } goto L_001272E4; } }
L_00127690:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 32u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001276A8u); set32(c.r[16], c.r[16].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001276A8u) [[unlikely]] return; }
L_001276A8:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00127690u | kUnwind; return; } goto L_00127690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_001279F4; } }
L_001276C0:
    c.r[2].d[0] = c.r[21].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_001278A4; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[5], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_00127788; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00127734; } }
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001276E8:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012770Cu); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012770Cu) [[unlikely]] return; }
L_0012770C:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    st32((c.r[29].w[0] + 88u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001276E8u | kUnwind; return; } goto L_001276E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_0012773C; } }
L_00127734:
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 2;
L_0012773C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00127834; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00127748:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00127768u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00127768u) [[unlikely]] return; }
L_00127768:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00127748u | kUnwind; return; } goto L_00127748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00127834; } }
L_00127788:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001277E0; } }
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00127798:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001277B8u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001277B8u) [[unlikely]] return; }
L_001277B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    st32((c.r[29].w[0] + 88u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00127798u | kUnwind; return; } goto L_00127798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  if (t) { goto L_001277E8; } }
L_001277E0:
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 2;
L_001277E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00127834; } }
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_001277F8:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00127818u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00127818u) [[unlikely]] return; }
L_00127818:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001277F8u | kUnwind; return; } goto L_001277F8; } }
L_00127834:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_00127868; } }
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00127840:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 48u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00127858u); set32(c.r[16], c.r[16].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00127858u) [[unlikely]] return; }
L_00127858:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00127840u | kUnwind; return; } goto L_00127840; } }
L_00127868:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[5].d[0] = ld8((c.r[22].w[0]));  goto L_001279F4; }
L_00127870:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00127888u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00127888u) [[unlikely]] return; }
L_00127888:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00127870u | kUnwind; return; } goto L_00127870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_001279F4; } }
L_001278A4:
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00127900; } }
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001278B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001278D8u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001278D8u) [[unlikely]] return; }
L_001278D8:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    st32((c.r[29].w[0] + 88u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001278B8u | kUnwind; return; } goto L_001278B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  if (t) { goto L_00127908; } }
L_00127900:
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 2;
L_00127908:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00127954; } }
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_00127918:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00127938u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00127938u) [[unlikely]] return; }
L_00127938:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00127918u | kUnwind; return; } goto L_00127918; } }
L_00127954:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_00127988; } }
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00127960:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 48u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00127978u); set32(c.r[16], c.r[16].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00127978u) [[unlikely]] return; }
L_00127978:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00127960u | kUnwind; return; } goto L_00127960; } }
L_00127988:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[5].d[0] = ld8((c.r[22].w[0]));  goto L_001279F4; }
L_00127990:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001279A8u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001279A8u) [[unlikely]] return; }
L_001279A8:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00127990u | kUnwind; return; } goto L_00127990; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_001279F4; } }
L_001279C4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (t) { goto L_001279F0; } }
    set32(c.r[23], c.r[22].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 2;
L_001279D4:
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001279E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001279E0u) [[unlikely]] return; }
L_001279E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001272E4u | kUnwind; return; } goto L_001272E4; } }
L_001279F0:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_001279F4:
    if (c.r[5].d[0] != 0) c.r[22].d[0] = c.r[23].d[0];
    c.r[2].d[0] = ld8((c.r[22].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00126DA8u | kUnwind; return; } goto L_00126DA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (t) { goto L_00127A18; } }
L_00127A0C:
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 92u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
L_00127A18:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00127A28u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00127A28u) [[unlikely]] return; }
L_00127A28:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 256u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 240u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 224u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_00127A60:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00127A74; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00127A74:
    c.r[2].d[0] = c.r[6].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[7].w[0])));  goto L_00127AAC; }
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[4], ld32((c.r[7].w[0])));
    if (c.r[2].d[0] == 0) c.r[6].d[0] = 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00127AAC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00127AB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00127AD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127AD0u);  if (depth < kMaxDepth) unit_0001(c, 344u, depth + 1u); else { c.pc = 0x001269F8u; return; } if (c.pc != 0x00127AD0u) [[unlikely]] return; }
L_00127AD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00127AE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00127AF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127AF8u);  if (depth < kMaxDepth) unit_0001(c, 346u, depth + 1u); else { c.pc = 0x00126AA8u; return; } if (c.pc != 0x00127AF8u) [[unlikely]] return; }
L_00127AF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00127B08:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[8].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], c.r[29].w[0] + 96u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    st64((c.r[29].w[0] + 104u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[10].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127B34u); st64((c.r[29].w[0] + 120u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0001(c, 366u, depth + 1u); else { c.pc = 0x00126D48u; return; } if (c.pc != 0x00127B34u) [[unlikely]] return; }
L_00127B34:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00127B58:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00120000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 31328u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127B84u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 366u, depth + 1u); else { c.pc = 0x00126D48u; return; } if (c.pc != 0x00127B84u) [[unlikely]] return; }
L_00127B84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00127B90:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 104u), c.r[7].d[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[8].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00120000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[9].d[0]);
    set32(c.r[4], c.r[4].w[0] + 31328u);
    st64((c.r[29].w[0] + 128u), c.r[10].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 136u), c.r[11].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127BCCu); set32(c.r[8], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0001(c, 366u, depth + 1u); else { c.pc = 0x00126D48u; return; } if (c.pc != 0x00127BCCu) [[unlikely]] return; }
L_00127BCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00127BD8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127BFCu); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00127BFCu) [[unlikely]] return; }
L_00127BFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 31416u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127C20u); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  if (depth < kMaxDepth) unit_0001(c, 366u, depth + 1u); else { c.pc = 0x00126D48u; return; } if (c.pc != 0x00127C20u) [[unlikely]] return; }
L_00127C20:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00127C34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127C30u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x00127C30u) [[unlikely]] return; }
L_00127C30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00127C34:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00127C48:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 168u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 184u), c.r[11].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127C80u); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00127C80u) [[unlikely]] return; }
L_00127C80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 31416u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127CA4u); set32(c.r[8], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0001(c, 366u, depth + 1u); else { c.pc = 0x00126D48u; return; } if (c.pc != 0x00127CA4u) [[unlikely]] return; }
L_00127CA4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00127CB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127CB4u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x00127CB4u) [[unlikely]] return; }
L_00127CB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00127CB8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00127CC8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 168u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 184u), c.r[11].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127D00u); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00127D00u) [[unlikely]] return; }
L_00127D00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 31456u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127D24u); set32(c.r[8], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0001(c, 366u, depth + 1u); else { c.pc = 0x00126D48u; return; } if (c.pc != 0x00127D24u) [[unlikely]] return; }
L_00127D24:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00127D38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127D34u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x00127D34u) [[unlikely]] return; }
L_00127D34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00127D38:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00127D48:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00127D68:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  c.pc = t; return; }
L_00127D78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 23744u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_00127DC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127DE0u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00127DE0u) [[unlikely]] return; }
L_00127DE0:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[10].w[0] - 16152u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { goto L_00127E10; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 96u);  [[clang::musttail]] return unit_0003(c, 292u, depth); }
L_00127E10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], c.r[5].w[0] + 23232u);
    set32(c.r[6], c.r[19].w[0] + 23104u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[3], 0u + 1u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[18].w[0] + 23320u);
    st32((c.r[10].w[0] - 16152u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 23744u);
    set32(c.r[8], c.r[9].w[0] + 23360u);
    st32((c.r[18].w[0] + 23320u), c.r[6].w[0]);
    set32(c.r[7], 0u + 32u);
    st32((c.r[2].w[0] + 28u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[4], c.r[3].w[0] + 384u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[2].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 26;
L_00127E78:
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00127E78u | kUnwind; return; } goto L_00127E78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[16], 0u + 31u);
    set32(c.r[2], c.r[2].w[0] + 23744u);
    set32(c.r[2], c.r[2].w[0] + 124u);
    c.budget -= 5;
L_00127EA8:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00127EA8u | kUnwind; return; } goto L_00127EA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00120000u);
    set32(c.r[2], c.r[2].w[0] + 32104u);
    set32(c.r[4], c.r[9].w[0] + 23360u);
    set32(c.r[3], c.r[3].w[0] + 32072u);
    set32(c.r[17], c.r[18].w[0] + 23320u);
    st32((c.r[9].w[0] + 23360u), c.r[2].w[0]);
    set32(c.r[16], 0u + 32u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127EF4u); st32((c.r[4].w[0] + 4u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x00127EF4u) [[unlikely]] return; }
L_00127EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127EFCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 147u, depth + 1u); else { c.pc = 0x001251E0u; return; } if (c.pc != 0x00127EFCu) [[unlikely]] return; }
L_00127EFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 57360ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00127F20; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 8176u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 3;
L_00127F20:
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);  if (t) { goto L_00127F40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127F3Cu);  if (depth < kMaxDepth) unit_0001(c, 165u, depth + 1u); else { c.pc = 0x00125340u; return; } if (c.pc != 0x00127F3Cu) [[unlikely]] return; }
L_00127F3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.budget -= 1;
L_00127F40:
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] - 31960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127F50u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 75u, depth + 1u); else { c.pc = 0x00124C70u; return; } if (c.pc != 0x00127F50u) [[unlikely]] return; }
L_00127F50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127F60u); st32((c.r[3].w[0] + 23316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 238u, depth + 1u); else { c.pc = 0x00125B78u; return; } if (c.pc != 0x00127F60u) [[unlikely]] return; }
L_00127F60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127F6Cu);  if (depth < kMaxDepth) unit_0001(c, 171u, depth + 1u); else { c.pc = 0x00125370u; return; } if (c.pc != 0x00127F6Cu) [[unlikely]] return; }
L_00127F6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00127FB4; } }
    set32(c.r[5], c.r[20].w[0] + 23296u);
    set32(c.r[2], c.r[19].w[0] + 23104u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[6], 0u + 20u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 16;
    { set32(c.r[29], c.r[29].w[0] + 96u);  [[clang::musttail]] return unit_0002(c, 15u, depth); }
L_00127FB4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 1;
L_00127FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127FC0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 171u, depth + 1u); else { c.pc = 0x00125370u; return; } if (c.pc != 0x00127FC0u) [[unlikely]] return; }
L_00127FC0:
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00127FB8u | kUnwind; return; } goto L_00127FB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127FD4u); set32(c.r[16], c.r[18].w[0] + 23320u);  if (depth < kMaxDepth) unit_0001(c, 171u, depth + 1u); else { c.pc = 0x00125370u; return; } if (c.pc != 0x00127FD4u) [[unlikely]] return; }
L_00127FD4:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127FE4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 169u, depth + 1u); else { c.pc = 0x00125360u; return; } if (c.pc != 0x00127FE4u) [[unlikely]] return; }
L_00127FE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00127FF4u); c.r[4].d[0] = c.r[4].d[0] | 1ull;  if (depth < kMaxDepth) unit_0001(c, 169u, depth + 1u); else { c.pc = 0x00125360u; return; } if (c.pc != 0x00127FF4u) [[unlikely]] return; }
L_00127FF4:
    set32(c.r[3], c.r[20].w[0] + 23296u);
    set32(c.r[2], c.r[19].w[0] + 23104u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    [[clang::musttail]] return unit_0002(c, 1u, depth);
}

}
