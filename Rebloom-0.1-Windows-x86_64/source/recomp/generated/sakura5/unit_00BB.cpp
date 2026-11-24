#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BB[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0,
    9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0,
    33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59,
    0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80, 0, 81, 0, 0,
    0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91,
    0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101,
    0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0,
    0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166,
    0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 177, 0, 178, 0, 0, 0, 0, 179, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187,
    0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0,
    203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0,
    0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0,
    0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241,
    0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0,
    0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0,
    0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0,
    0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0,
    0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0,
    0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0,
    0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0,
    0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0,
    0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0,
    0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0,
    0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 358, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0,
    366, 0, 0, 0, 367, 0, 368, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 373, 0, 374, 0, 0, 0, 0, 0,
    375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0,
    0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0,
    0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0,
    425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 0, 0,
    434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 451, 0,
    0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0,
    460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466,
};

void unit_00BB(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0040C000;
    case 2u: goto L_0040C024;
    case 3u: goto L_0040C02C;
    case 4u: goto L_0040C038;
    case 5u: goto L_0040C040;
    case 6u: goto L_0040C048;
    case 7u: goto L_0040C064;
    case 8u: goto L_0040C078;
    case 9u: goto L_0040C080;
    case 10u: goto L_0040C094;
    case 11u: goto L_0040C0A8;
    case 12u: goto L_0040C0B4;
    case 13u: goto L_0040C0BC;
    case 14u: goto L_0040C0C4;
    case 15u: goto L_0040C0E0;
    case 16u: goto L_0040C114;
    case 17u: goto L_0040C15C;
    case 18u: goto L_0040C1F0;
    case 19u: goto L_0040C240;
    case 20u: goto L_0040C270;
    case 21u: goto L_0040C290;
    case 22u: goto L_0040C2A0;
    case 23u: goto L_0040C2C0;
    case 24u: goto L_0040C2D4;
    case 25u: goto L_0040C31C;
    case 26u: goto L_0040C324;
    case 27u: goto L_0040C340;
    case 28u: goto L_0040C350;
    case 29u: goto L_0040C370;
    case 30u: goto L_0040C390;
    case 31u: goto L_0040C3E8;
    case 32u: goto L_0040C3F0;
    case 33u: goto L_0040C400;
    case 34u: goto L_0040C410;
    case 35u: goto L_0040C434;
    case 36u: goto L_0040C468;
    case 37u: goto L_0040C48C;
    case 38u: goto L_0040C49C;
    case 39u: goto L_0040C4B0;
    case 40u: goto L_0040C520;
    case 41u: goto L_0040C56C;
    case 42u: goto L_0040C590;
    case 43u: goto L_0040C5A8;
    case 44u: goto L_0040C5C0;
    case 45u: goto L_0040C608;
    case 46u: goto L_0040C618;
    case 47u: goto L_0040C644;
    case 48u: goto L_0040C6B0;
    case 49u: goto L_0040C760;
    case 50u: goto L_0040C79C;
    case 51u: goto L_0040C7A8;
    case 52u: goto L_0040C7CC;
    case 53u: goto L_0040C7F0;
    case 54u: goto L_0040C808;
    case 55u: goto L_0040C828;
    case 56u: goto L_0040C83C;
    case 57u: goto L_0040C844;
    case 58u: goto L_0040C850;
    case 59u: goto L_0040C87C;
    case 60u: goto L_0040C8A0;
    case 61u: goto L_0040C8C4;
    case 62u: goto L_0040C8E8;
    case 63u: goto L_0040C940;
    case 64u: goto L_0040C97C;
    case 65u: goto L_0040C994;
    case 66u: goto L_0040CA40;
    case 67u: goto L_0040CA80;
    case 68u: goto L_0040CAFC;
    case 69u: goto L_0040CB24;
    case 70u: goto L_0040CB3C;
    case 71u: goto L_0040CB80;
    case 72u: goto L_0040CB9C;
    case 73u: goto L_0040CBC4;
    case 74u: goto L_0040CC50;
    case 75u: goto L_0040CCC8;
    case 76u: goto L_0040CCE0;
    case 77u: goto L_0040CD38;
    case 78u: goto L_0040CD54;
    case 79u: goto L_0040CD64;
    case 80u: goto L_0040CD6C;
    case 81u: goto L_0040CD74;
    case 82u: goto L_0040CD84;
    case 83u: goto L_0040CD9C;
    case 84u: goto L_0040CDBC;
    case 85u: goto L_0040CDD4;
    case 86u: goto L_0040CDE8;
    case 87u: goto L_0040CE00;
    case 88u: goto L_0040CE50;
    case 89u: goto L_0040CE94;
    case 90u: goto L_0040CEA8;
    case 91u: goto L_0040CEFC;
    case 92u: goto L_0040CF08;
    case 93u: goto L_0040CF40;
    case 94u: goto L_0040CF54;
    case 95u: goto L_0040CF90;
    case 96u: goto L_0040CFE8;
    case 97u: goto L_0040CFF0;
    case 98u: goto L_0040D000;
    case 99u: goto L_0040D024;
    case 100u: goto L_0040D070;
    case 101u: goto L_0040D07C;
    case 102u: goto L_0040D088;
    case 103u: goto L_0040D094;
    case 104u: goto L_0040D0A0;
    case 105u: goto L_0040D0AC;
    case 106u: goto L_0040D0D0;
    case 107u: goto L_0040D118;
    case 108u: goto L_0040D14C;
    case 109u: goto L_0040D180;
    case 110u: goto L_0040D1B4;
    case 111u: goto L_0040D1E8;
    case 112u: goto L_0040D21C;
    case 113u: goto L_0040D250;
    case 114u: goto L_0040D284;
    case 115u: goto L_0040D2B8;
    case 116u: goto L_0040D2EC;
    case 117u: goto L_0040D300;
    case 118u: goto L_0040D324;
    case 119u: goto L_0040D334;
    case 120u: goto L_0040D348;
    case 121u: goto L_0040D35C;
    case 122u: goto L_0040D3B0;
    case 123u: goto L_0040D3FC;
    case 124u: goto L_0040D424;
    case 125u: goto L_0040D43C;
    case 126u: goto L_0040D44C;
    case 127u: goto L_0040D464;
    case 128u: goto L_0040D480;
    case 129u: goto L_0040D49C;
    case 130u: goto L_0040D4AC;
    case 131u: goto L_0040D4C0;
    case 132u: goto L_0040D4D0;
    case 133u: goto L_0040D50C;
    case 134u: goto L_0040D528;
    case 135u: goto L_0040D538;
    case 136u: goto L_0040D564;
    case 137u: goto L_0040D574;
    case 138u: goto L_0040D5B8;
    case 139u: goto L_0040D5C8;
    case 140u: goto L_0040D5EC;
    case 141u: goto L_0040D5F8;
    case 142u: goto L_0040D624;
    case 143u: goto L_0040D62C;
    case 144u: goto L_0040D634;
    case 145u: goto L_0040D680;
    case 146u: goto L_0040D6B0;
    case 147u: goto L_0040D6E8;
    case 148u: goto L_0040D6F0;
    case 149u: goto L_0040D6F8;
    case 150u: goto L_0040D75C;
    case 151u: goto L_0040D794;
    case 152u: goto L_0040D7C0;
    case 153u: goto L_0040D7C8;
    case 154u: goto L_0040D7D8;
    case 155u: goto L_0040D7EC;
    case 156u: goto L_0040D824;
    case 157u: goto L_0040D838;
    case 158u: goto L_0040D840;
    case 159u: goto L_0040D858;
    case 160u: goto L_0040D878;
    case 161u: goto L_0040D88C;
    case 162u: goto L_0040D8B0;
    case 163u: goto L_0040D8C4;
    case 164u: goto L_0040D8D0;
    case 165u: goto L_0040D8E8;
    case 166u: goto L_0040D8FC;
    case 167u: goto L_0040D904;
    case 168u: goto L_0040D914;
    case 169u: goto L_0040D938;
    case 170u: goto L_0040D940;
    case 171u: goto L_0040D948;
    case 172u: goto L_0040D9B4;
    case 173u: goto L_0040D9E0;
    case 174u: goto L_0040D9EC;
    case 175u: goto L_0040DA3C;
    case 176u: goto L_0040DA90;
    case 177u: goto L_0040DA9C;
    case 178u: goto L_0040DAA4;
    case 179u: goto L_0040DAB8;
    case 180u: goto L_0040DAC4;
    case 181u: goto L_0040DACC;
    case 182u: goto L_0040DB00;
    case 183u: goto L_0040DB1C;
    case 184u: goto L_0040DB30;
    case 185u: goto L_0040DB4C;
    case 186u: goto L_0040DB54;
    case 187u: goto L_0040DB7C;
    case 188u: goto L_0040DB90;
    case 189u: goto L_0040DBA0;
    case 190u: goto L_0040DBB4;
    case 191u: goto L_0040DBC8;
    case 192u: goto L_0040DBD0;
    case 193u: goto L_0040DBE8;
    case 194u: goto L_0040DBF8;
    case 195u: goto L_0040DC08;
    case 196u: goto L_0040DC50;
    case 197u: goto L_0040DC70;
    case 198u: goto L_0040DC88;
    case 199u: goto L_0040DC98;
    case 200u: goto L_0040DCB8;
    case 201u: goto L_0040DCEC;
    case 202u: goto L_0040DCF8;
    case 203u: goto L_0040DD00;
    case 204u: goto L_0040DD20;
    case 205u: goto L_0040DD30;
    case 206u: goto L_0040DD40;
    case 207u: goto L_0040DD60;
    case 208u: goto L_0040DD70;
    case 209u: goto L_0040DDA0;
    case 210u: goto L_0040DDB4;
    case 211u: goto L_0040DDCC;
    case 212u: goto L_0040DDE0;
    case 213u: goto L_0040DDE8;
    case 214u: goto L_0040DE00;
    case 215u: goto L_0040DE20;
    case 216u: goto L_0040DE50;
    case 217u: goto L_0040DE80;
    case 218u: goto L_0040DE9C;
    case 219u: goto L_0040DEA4;
    case 220u: goto L_0040DEC8;
    case 221u: goto L_0040DEDC;
    case 222u: goto L_0040DF10;
    case 223u: goto L_0040DF38;
    case 224u: goto L_0040DF40;
    case 225u: goto L_0040DF50;
    case 226u: goto L_0040DF80;
    case 227u: goto L_0040DFA8;
    case 228u: goto L_0040DFC0;
    case 229u: goto L_0040DFDC;
    case 230u: goto L_0040DFF4;
    case 231u: goto L_0040E00C;
    case 232u: goto L_0040E024;
    case 233u: goto L_0040E03C;
    case 234u: goto L_0040E054;
    case 235u: goto L_0040E06C;
    case 236u: goto L_0040E084;
    case 237u: goto L_0040E09C;
    case 238u: goto L_0040E0B4;
    case 239u: goto L_0040E0CC;
    case 240u: goto L_0040E0E4;
    case 241u: goto L_0040E0FC;
    case 242u: goto L_0040E114;
    case 243u: goto L_0040E12C;
    case 244u: goto L_0040E144;
    case 245u: goto L_0040E15C;
    case 246u: goto L_0040E174;
    case 247u: goto L_0040E18C;
    case 248u: goto L_0040E1A4;
    case 249u: goto L_0040E1C0;
    case 250u: goto L_0040E1F0;
    case 251u: goto L_0040E210;
    case 252u: goto L_0040E230;
    case 253u: goto L_0040E250;
    case 254u: goto L_0040E2A8;
    case 255u: goto L_0040E2C8;
    case 256u: goto L_0040E2E8;
    case 257u: goto L_0040E308;
    case 258u: goto L_0040E324;
    case 259u: goto L_0040E344;
    case 260u: goto L_0040E364;
    case 261u: goto L_0040E384;
    case 262u: goto L_0040E3A4;
    case 263u: goto L_0040E3C4;
    case 264u: goto L_0040E3E4;
    case 265u: goto L_0040E404;
    case 266u: goto L_0040E424;
    case 267u: goto L_0040E444;
    case 268u: goto L_0040E464;
    case 269u: goto L_0040E484;
    case 270u: goto L_0040E4A4;
    case 271u: goto L_0040E4C4;
    case 272u: goto L_0040E4E4;
    case 273u: goto L_0040E504;
    case 274u: goto L_0040E520;
    case 275u: goto L_0040E54C;
    case 276u: goto L_0040E568;
    case 277u: goto L_0040E584;
    case 278u: goto L_0040E5A0;
    case 279u: goto L_0040E5BC;
    case 280u: goto L_0040E5D8;
    case 281u: goto L_0040E5F4;
    case 282u: goto L_0040E610;
    case 283u: goto L_0040E62C;
    case 284u: goto L_0040E648;
    case 285u: goto L_0040E664;
    case 286u: goto L_0040E680;
    case 287u: goto L_0040E6DC;
    case 288u: goto L_0040E700;
    case 289u: goto L_0040E724;
    case 290u: goto L_0040E748;
    case 291u: goto L_0040E768;
    case 292u: goto L_0040E78C;
    case 293u: goto L_0040E7B0;
    case 294u: goto L_0040E7D4;
    case 295u: goto L_0040E7F8;
    case 296u: goto L_0040E81C;
    case 297u: goto L_0040E840;
    case 298u: goto L_0040E864;
    case 299u: goto L_0040E888;
    case 300u: goto L_0040E8AC;
    case 301u: goto L_0040E8D0;
    case 302u: goto L_0040E8F4;
    case 303u: goto L_0040E918;
    case 304u: goto L_0040E93C;
    case 305u: goto L_0040E960;
    case 306u: goto L_0040E984;
    case 307u: goto L_0040E9A0;
    case 308u: goto L_0040E9BC;
    case 309u: goto L_0040E9D8;
    case 310u: goto L_0040E9F4;
    case 311u: goto L_0040EA10;
    case 312u: goto L_0040EA38;
    case 313u: goto L_0040EA40;
    case 314u: goto L_0040EA50;
    case 315u: goto L_0040EA68;
    case 316u: goto L_0040EA78;
    case 317u: goto L_0040EAA0;
    case 318u: goto L_0040EAC8;
    case 319u: goto L_0040EB08;
    case 320u: goto L_0040EB3C;
    case 321u: goto L_0040EB60;
    case 322u: goto L_0040EB80;
    case 323u: goto L_0040EB98;
    case 324u: goto L_0040EBC0;
    case 325u: goto L_0040EBF0;
    case 326u: goto L_0040EC0C;
    case 327u: goto L_0040EC30;
    case 328u: goto L_0040EC48;
    case 329u: goto L_0040EC70;
    case 330u: goto L_0040EC88;
    case 331u: goto L_0040EC9C;
    case 332u: goto L_0040ECB0;
    case 333u: goto L_0040ECCC;
    case 334u: goto L_0040ECF0;
    case 335u: goto L_0040ED50;
    case 336u: goto L_0040ED5C;
    case 337u: goto L_0040ED70;
    case 338u: goto L_0040ED94;
    case 339u: goto L_0040EDA4;
    case 340u: goto L_0040EDB8;
    case 341u: goto L_0040EDC0;
    case 342u: goto L_0040EDD4;
    case 343u: goto L_0040EE04;
    case 344u: goto L_0040EE14;
    case 345u: goto L_0040EE28;
    case 346u: goto L_0040EE40;
    case 347u: goto L_0040EE4C;
    case 348u: goto L_0040EE5C;
    case 349u: goto L_0040EE64;
    case 350u: goto L_0040EEE0;
    case 351u: goto L_0040EF10;
    case 352u: goto L_0040EF38;
    case 353u: goto L_0040EF60;
    case 354u: goto L_0040EF6C;
    case 355u: goto L_0040EF9C;
    case 356u: goto L_0040EFB4;
    case 357u: goto L_0040EFD0;
    case 358u: goto L_0040F00C;
    case 359u: goto L_0040F014;
    case 360u: goto L_0040F024;
    case 361u: goto L_0040F038;
    case 362u: goto L_0040F040;
    case 363u: goto L_0040F054;
    case 364u: goto L_0040F068;
    case 365u: goto L_0040F070;
    case 366u: goto L_0040F080;
    case 367u: goto L_0040F090;
    case 368u: goto L_0040F098;
    case 369u: goto L_0040F0A8;
    case 370u: goto L_0040F0B0;
    case 371u: goto L_0040F0C8;
    case 372u: goto L_0040F0D0;
    case 373u: goto L_0040F0E0;
    case 374u: goto L_0040F0E8;
    case 375u: goto L_0040F100;
    case 376u: goto L_0040F11C;
    case 377u: goto L_0040F12C;
    case 378u: goto L_0040F158;
    case 379u: goto L_0040F170;
    case 380u: goto L_0040F190;
    case 381u: goto L_0040F198;
    case 382u: goto L_0040F1CC;
    case 383u: goto L_0040F1F0;
    case 384u: goto L_0040F210;
    case 385u: goto L_0040F220;
    case 386u: goto L_0040F280;
    case 387u: goto L_0040F2B4;
    case 388u: goto L_0040F2D8;
    case 389u: goto L_0040F2EC;
    case 390u: goto L_0040F30C;
    case 391u: goto L_0040F350;
    case 392u: goto L_0040F3C4;
    case 393u: goto L_0040F404;
    case 394u: goto L_0040F450;
    case 395u: goto L_0040F46C;
    case 396u: goto L_0040F4A4;
    case 397u: goto L_0040F4B0;
    case 398u: goto L_0040F4C0;
    case 399u: goto L_0040F4EC;
    case 400u: goto L_0040F4FC;
    case 401u: goto L_0040F528;
    case 402u: goto L_0040F538;
    case 403u: goto L_0040F564;
    case 404u: goto L_0040F590;
    case 405u: goto L_0040F5D0;
    case 406u: goto L_0040F698;
    case 407u: goto L_0040F6A8;
    case 408u: goto L_0040F6C8;
    case 409u: goto L_0040F724;
    case 410u: goto L_0040F744;
    case 411u: goto L_0040F754;
    case 412u: goto L_0040F76C;
    case 413u: goto L_0040F7E8;
    case 414u: goto L_0040F7F8;
    case 415u: goto L_0040F82C;
    case 416u: goto L_0040F888;
    case 417u: goto L_0040F8C4;
    case 418u: goto L_0040F8DC;
    case 419u: goto L_0040F8F8;
    case 420u: goto L_0040F960;
    case 421u: goto L_0040F998;
    case 422u: goto L_0040F9A0;
    case 423u: goto L_0040F9B0;
    case 424u: goto L_0040F9F8;
    case 425u: goto L_0040FA00;
    case 426u: goto L_0040FA10;
    case 427u: goto L_0040FA40;
    case 428u: goto L_0040FA50;
    case 429u: goto L_0040FA58;
    case 430u: goto L_0040FA70;
    case 431u: goto L_0040FAB0;
    case 432u: goto L_0040FAE8;
    case 433u: goto L_0040FAF0;
    case 434u: goto L_0040FB00;
    case 435u: goto L_0040FB48;
    case 436u: goto L_0040FB50;
    case 437u: goto L_0040FB60;
    case 438u: goto L_0040FB90;
    case 439u: goto L_0040FBA0;
    case 440u: goto L_0040FBA8;
    case 441u: goto L_0040FBC0;
    case 442u: goto L_0040FC00;
    case 443u: goto L_0040FC38;
    case 444u: goto L_0040FC40;
    case 445u: goto L_0040FC50;
    case 446u: goto L_0040FC98;
    case 447u: goto L_0040FCA0;
    case 448u: goto L_0040FCB0;
    case 449u: goto L_0040FCE0;
    case 450u: goto L_0040FCF0;
    case 451u: goto L_0040FCF8;
    case 452u: goto L_0040FD10;
    case 453u: goto L_0040FD50;
    case 454u: goto L_0040FE04;
    case 455u: goto L_0040FE24;
    case 456u: goto L_0040FE3C;
    case 457u: goto L_0040FE4C;
    case 458u: goto L_0040FE8C;
    case 459u: goto L_0040FEE8;
    case 460u: goto L_0040FF00;
    case 461u: goto L_0040FF10;
    case 462u: goto L_0040FF2C;
    case 463u: goto L_0040FFA4;
    case 464u: goto L_0040FFC4;
    case 465u: goto L_0040FFDC;
    case 466u: goto L_0040FFFC;
    default: bad_entry(c, 0x0040C000u); return;
    }
L_0040C000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040C0C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C024u);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x0040C024u) [[unlikely]] return; }
L_0040C024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C02Cu);  if (depth < kMaxDepth) unit_0024(c, 202u, depth + 1u); else { c.pc = 0x001B16D0u; return; } if (c.pc != 0x0040C02Cu) [[unlikely]] return; }
L_0040C02C:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C038u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x0040C038u) [[unlikely]] return; }
L_0040C038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C040u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x0040C040u) [[unlikely]] return; }
L_0040C040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C048u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0040C048u) [[unlikely]] return; }
L_0040C048:
    set32(c.r[5], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[2], 0u - 65u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C064u); st32((c.r[5].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0040C064u) [[unlikely]] return; }
L_0040C064:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C078u); st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0040C078u) [[unlikely]] return; }
L_0040C078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C080u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0040C080u) [[unlikely]] return; }
L_0040C080:
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 168u)));  goto L_0040C098; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C094u);  if (depth < kMaxDepth) unit_003B(c, 248u, depth + 1u); else { c.pc = 0x0020E740u; return; } if (c.pc != 0x0040C094u) [[unlikely]] return; }
L_0040C094:
    set32(c.r[4], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 1;
L_0040C098:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0040C0AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C0A8u);  if (depth < kMaxDepth) unit_003B(c, 248u, depth + 1u); else { c.pc = 0x0020E740u; return; } if (c.pc != 0x0040C0A8u) [[unlikely]] return; }
L_0040C0A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0040C0AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C0B4u);  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x0040C0B4u) [[unlikely]] return; }
L_0040C0B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C0BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x0040C0BCu) [[unlikely]] return; }
L_0040C0BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C0C4u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x0040C0C4u) [[unlikely]] return; }
L_0040C0C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040C0E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    st32((c.r[29].w[0] + 32u), c.f[2]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 36u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C114u); st32((c.r[29].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00142090u; return; } if (c.pc != 0x0040C114u) [[unlikely]] return; }
L_0040C114:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0040C1E4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0040C1D4; }
    st32((c.r[16].w[0] + 176u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 180u)));  goto L_0040C168; }
    set32(c.r[6], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0040C164; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C15Cu); set32(c.r[5], c.r[5].w[0] - 32352u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x0040C15Cu) [[unlikely]] return; }
L_0040C15C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040C1E0; } }
L_0040C164:
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 1;
L_0040C168:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0040C1AC; }
    st32((c.r[16].w[0] + 80u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 184u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[16].w[0] + 84u), c.r[6].w[0]);
    c.f[2] = ld32((c.r[5].w[0] + 16272u));
    c.f[1] = ld32((c.r[4].w[0] + 16276u));
    c.f[0] = ld32((c.r[3].w[0] + 16280u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0040C1E0; } }
L_0040C1AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16288u));
    c.f[1] = ld32((c.r[4].w[0] + 16292u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16296u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0040C1E0; } }
L_0040C1D4:
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_0040C1E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0040C1E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040C1F0:
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[2], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[6].sd[0] < 0; st32((c.r[4].w[0] + 180u), c.r[5].w[0]);  if (t) { goto L_0040C218; } }
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0040C218:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_0040C224; }
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0040C224:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 4;
    { set32(c.r[5], c.r[5].w[0] - 32320u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B5DD0u | kUnwind; return; } [[clang::musttail]] return unit_0025(c, 316u, depth); }
L_0040C240:
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] - 32296u);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 12;
    { st32((c.r[4].w[0] + 184u), c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B5DD0u | kUnwind; return; } [[clang::musttail]] return unit_0025(c, 316u, depth); }
L_0040C270:
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 120u)));  goto L_0040C280; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040C280:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040C290:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 188u), c.r[6].w[0]);  c.pc = t; return; }
L_0040C2A0:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 188u), c.r[4].w[0]);  c.pc = t; return; }
L_0040C2C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C2D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 15u, depth + 1u); else { c.pc = 0x0040C0E0u; return; } if (c.pc != 0x0040C2D4u) [[unlikely]] return; }
L_0040C2D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0040C2F0; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040C308; } }
L_0040C2F0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_0040C308:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C31Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00C0(c, 435u, depth + 1u); else { c.pc = 0x004230B0u; return; } if (c.pc != 0x0040C31Cu) [[unlikely]] return; }
L_0040C31C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C324u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 436u, depth + 1u); else { c.pc = 0x004230E0u; return; } if (c.pc != 0x0040C324u) [[unlikely]] return; }
L_0040C324:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040C340:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C000u | kUnwind; return; } goto L_0040C000; }
L_0040C350:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  c.pc = t; return; }
L_0040C370:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  c.pc = t; return; }
L_0040C390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040C3B8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040C3D4; } }
L_0040C3B8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0040C3D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C3E8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00C0(c, 435u, depth + 1u); else { c.pc = 0x004230B0u; return; } if (c.pc != 0x0040C3E8u) [[unlikely]] return; }
L_0040C3E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C3F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 436u, depth + 1u); else { c.pc = 0x004230E0u; return; } if (c.pc != 0x0040C3F0u) [[unlikely]] return; }
L_0040C3F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040C400:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  c.pc = t; return; }
L_0040C410:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C434u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 433u, depth + 1u); else { c.pc = 0x00423030u; return; } if (c.pc != 0x0040C434u) [[unlikely]] return; }
L_0040C434:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14688u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 92u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C468u); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_00BB(c, 93u, depth + 1u); else { c.pc = 0x0040CF40u; return; } if (c.pc != 0x0040C468u) [[unlikely]] return; }
L_0040C468:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 872u);  goto L_0040C494; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 84u), 0u);  goto L_0040C490; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C48Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040C48Cu) [[unlikely]] return; }
L_0040C48C:
    st32((c.r[16].w[0] + 84u), 0u);
    c.budget -= 1;
L_0040C490:
    set32(c.r[4], 0u + 872u);
    c.budget -= 1;
L_0040C494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C49Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0040C49Cu) [[unlikely]] return; }
L_0040C49C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  goto L_0040C4B4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C4B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 421u, depth + 1u); else { c.pc = 0x001B6BB0u; return; } if (c.pc != 0x0040C4B0u) [[unlikely]] return; }
L_0040C4B0:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 1;
L_0040C4B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[2].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[2].w[0] + 16304u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[2].w[0] + 16308u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 16312u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040C520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040C5A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 14688u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040C570; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 84u), 0u);  goto L_0040C570; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C56Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040C56Cu) [[unlikely]] return; }
L_0040C56C:
    st32((c.r[17].w[0] + 84u), 0u);
    c.budget -= 1;
L_0040C570:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0040C594; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14624u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C590u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0040C590u) [[unlikely]] return; }
L_0040C590:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0040C594:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0040C5AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C5A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0040C5A8u) [[unlikely]] return; }
L_0040C5A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040C5AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040C5C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 96u)));  goto L_0040C65C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  goto L_0040C5F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0040C6A4; } }
L_0040C5F0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 124u);  goto L_0040C610; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C608u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040C608u) [[unlikely]] return; }
L_0040C608:
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[4], 0u + 124u);
    c.budget -= 2;
L_0040C610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C618u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0040C618u) [[unlikely]] return; }
L_0040C618:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 96u), c.r[4].w[0]);  goto L_0040C64C; }
    set32(c.r[6], ld32((c.r[16].w[0] + 88u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 32280u);
    set32(c.r[8], c.r[8].w[0] - 32264u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C644u); set32(c.r[9], 0u + 2u);  if (depth < kMaxDepth) unit_008B(c, 355u, depth + 1u); else { c.pc = 0x0034F160u; return; } if (c.pc != 0x0040C644u) [[unlikely]] return; }
L_0040C644:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 96u), c.r[4].w[0]);
    c.budget -= 2;
L_0040C64C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040C6A0; } }
L_0040C65C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040C6A0; } }
    set32(c.r[6], ld32((c.r[5].w[0] + 100u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[16].w[0] + 100u), c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[5].w[0] + 16320u));
    c.f[1] = ld32((c.r[4].w[0] + 16324u));
    c.f[0] = ld32((c.r[3].w[0] + 16328u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 12;
L_0040C6A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0040C6A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040C6B0:
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_0040C708; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 4u)));  goto L_0040C6D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040C750; } }
L_0040C6D0:
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
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040C750; } }
L_0040C708:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040C750; } }
    set32(c.r[8], ld32((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    st32((c.r[4].w[0] + 4u), c.r[7].w[0]);
    c.f[2] = ld32((c.r[6].w[0] + 16336u));
    c.f[1] = ld32((c.r[5].w[0] + 16340u));
    c.f[0] = ld32((c.r[3].w[0] + 16344u));
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    st32((c.r[4].w[0] + 76u), 0u);
    c.budget -= 14;
L_0040C750:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040C760:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040C900; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0040C794; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0040C92C; } }
L_0040C794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C79Cu);  if (depth < kMaxDepth) unit_00BB(c, 93u, depth + 1u); else { c.pc = 0x0040CF40u; return; } if (c.pc != 0x0040C79Cu) [[unlikely]] return; }
L_0040C79C:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C7A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 480u, depth + 1u); else { c.pc = 0x0034FBF0u; return; } if (c.pc != 0x0040C7A8u) [[unlikely]] return; }
L_0040C7A8:
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[5], 0u + 202u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C7CCu); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A8(c, 249u, depth + 1u); else { c.pc = 0x003C2ED0u; return; } if (c.pc != 0x0040C7CCu) [[unlikely]] return; }
L_0040C7CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 104u)));  goto L_0040C7F8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 202u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C7F0u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x0040C7F0u) [[unlikely]] return; }
L_0040C7F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 108u)));  if (t) { goto L_0040C80C; } }
L_0040C7F8:
    set32(c.r[5], 0u + 202u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C808u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x0040C808u) [[unlikely]] return; }
L_0040C808:
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 1;
L_0040C80C:
    set32(c.r[5], 0u + 209u);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C828u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A8(c, 249u, depth + 1u); else { c.pc = 0x003C2ED0u; return; } if (c.pc != 0x0040C828u) [[unlikely]] return; }
L_0040C828:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 120u)));
    set32(c.r[5], 0u + 208u);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C83Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x0040C83Cu) [[unlikely]] return; }
L_0040C83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C844u); set32(c.r[4], ld32((c.r[17].w[0] + 112u)));  if (depth < kMaxDepth) unit_00C0(c, 415u, depth + 1u); else { c.pc = 0x00422CB0u; return; } if (c.pc != 0x0040C844u) [[unlikely]] return; }
L_0040C844:
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C850u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 416u, depth + 1u); else { c.pc = 0x00422CE0u; return; } if (c.pc != 0x0040C850u) [[unlikely]] return; }
L_0040C850:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], 0u + 10u);
    set32(c.r[5], 0u + 203u);
    mmi::divu(c, 0, c.r[18].w[0], c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C87Cu); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x0040C87Cu) [[unlikely]] return; }
L_0040C87C:
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    mmi::divu(c, 0, c.r[18].w[0], c.r[2].w[0]);
    set32(c.r[5], 0u + 204u);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C8A0u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x0040C8A0u) [[unlikely]] return; }
L_0040C8A0:
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    mmi::divu(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[5], 0u + 206u);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C8C4u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x0040C8C4u) [[unlikely]] return; }
L_0040C8C4:
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    mmi::divu(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[5], 0u + 207u);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C8E8u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x0040C8E8u) [[unlikely]] return; }
L_0040C8E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040C928; } }
L_0040C900:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16352u));
    c.f[1] = ld32((c.r[4].w[0] + 16356u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16360u));
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 10;
L_0040C928:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0040C92C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040C940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_0040C98C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_0040C970; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0040CA74; } }
L_0040C970:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C97Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0040C97Cu) [[unlikely]] return; }
L_0040C97C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040CA70; } }
L_0040C98C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C994u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0040C994u) [[unlikely]] return; }
L_0040C994:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0040CA10; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0040C9E8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0040C9C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CA38; } }
L_0040C9C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16368u));
    c.f[1] = ld32((c.r[4].w[0] + 16372u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16376u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0040CA70; } }
L_0040C9E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16384u));
    c.f[1] = ld32((c.r[4].w[0] + 16388u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16392u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0040CA70; } }
L_0040CA10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16400u));
    c.f[1] = ld32((c.r[4].w[0] + 16404u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16408u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0040CA70; } }
L_0040CA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CA40u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x0040CA40u) [[unlikely]] return; }
L_0040CA40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CA70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16416u));
    c.f[1] = ld32((c.r[4].w[0] + 16420u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16424u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_0040CA70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0040CA74:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040CA80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 300u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040CC14; } }
    set32(c.r[3], 0u + 203u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0040CBF4; }
    set32(c.r[3], 0u + 202u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_0040CBD4; }
    set32(c.r[3], 0u + 201u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_0040CBBC; }
    set32(c.r[3], 0u + 200u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0040CB94; } }
    set32(c.r[3], 0u + 101u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_0040CB34; }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_0040CB18; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0040CAF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0040CC40; } }
L_0040CAF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CAFCu);  if (depth < kMaxDepth) unit_00C0(c, 356u, depth + 1u); else { c.pc = 0x004225C0u; return; } if (c.pc != 0x0040CAFCu) [[unlikely]] return; }
L_0040CAFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 100u);  goto L_0040CB10; }
    set32(c.r[3], 0u + 200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040CC3C; } }
L_0040CB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040CC3C; } }
L_0040CB18:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CB24u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0040CB24u) [[unlikely]] return; }
L_0040CB24:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040CC3C; } }
L_0040CB34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CB3Cu);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0040CB3Cu) [[unlikely]] return; }
L_0040CB3C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0040CB50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CB78; } }
L_0040CB50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16432u));
    c.f[1] = ld32((c.r[4].w[0] + 16436u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16440u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0040CC3C; } }
L_0040CB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CB80u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x0040CB80u) [[unlikely]] return; }
L_0040CB80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CC3C; } }
    set32(c.r[3], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040CC3C; } }
L_0040CB94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CB9Cu);  if (depth < kMaxDepth) unit_00C0(c, 351u, depth + 1u); else { c.pc = 0x00422570u; return; } if (c.pc != 0x0040CB9Cu) [[unlikely]] return; }
L_0040CB9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040CC3C; } }
L_0040CBBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CBC4u);  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x0040CBC4u) [[unlikely]] return; }
L_0040CBC4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040CC3C; } }
L_0040CBD4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040CC3C; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040CC3C; } }
L_0040CBF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0040CC3C; } }
L_0040CC14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16448u));
    c.f[1] = ld32((c.r[4].w[0] + 16452u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16456u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_0040CC3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0040CC40:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040CC50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 200u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0040CE1C; }
    set32(c.r[3], 0u + 103u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_0040CDF8; }
    set32(c.r[3], 0u + 102u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0040CDB4; } }
    set32(c.r[3], 0u + 101u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0040CD94; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0040CD4C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_0040CCD8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_0040CCBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0040CE44; } }
L_0040CCBC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CCC8u); set32(c.r[6], 0u + 28u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0040CCC8u) [[unlikely]] return; }
L_0040CCC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040CE40; } }
L_0040CCD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CCE0u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0040CCE0u) [[unlikely]] return; }
L_0040CCE0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0040CD08; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 100u);  goto L_0040CD00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CD30; } }
L_0040CD00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040CE40; } }
L_0040CD08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16464u));
    c.f[1] = ld32((c.r[4].w[0] + 16468u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16472u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0040CE40; } }
L_0040CD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CD38u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x0040CD38u) [[unlikely]] return; }
L_0040CD38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CE40; } }
    set32(c.r[3], 0u + 200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040CE40; } }
L_0040CD4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CD54u);  if (depth < kMaxDepth) unit_00C0(c, 303u, depth + 1u); else { c.pc = 0x00422190u; return; } if (c.pc != 0x0040CD54u) [[unlikely]] return; }
L_0040CD54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040CE40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CD64u);  if (depth < kMaxDepth) unit_00C0(c, 354u, depth + 1u); else { c.pc = 0x004225A0u; return; } if (c.pc != 0x0040CD64u) [[unlikely]] return; }
L_0040CD64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CD6Cu);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0040CD6Cu) [[unlikely]] return; }
L_0040CD6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CD74u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 311u, depth + 1u); else { c.pc = 0x00422280u; return; } if (c.pc != 0x0040CD74u) [[unlikely]] return; }
L_0040CD74:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CD84u); set32(c.r[6], 0u + 29u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0040CD84u) [[unlikely]] return; }
L_0040CD84:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040CE40; } }
L_0040CD94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CD9Cu);  if (depth < kMaxDepth) unit_00C0(c, 303u, depth + 1u); else { c.pc = 0x00422190u; return; } if (c.pc != 0x0040CD9Cu) [[unlikely]] return; }
L_0040CD9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040CE40; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040CE40; } }
L_0040CDB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CDBCu);  if (depth < kMaxDepth) unit_00C0(c, 304u, depth + 1u); else { c.pc = 0x004221A0u; return; } if (c.pc != 0x0040CDBCu) [[unlikely]] return; }
L_0040CDBC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_0040CDDC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CDD4u); set32(c.r[6], 0u + 30u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0040CDD4u) [[unlikely]] return; }
L_0040CDD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  if (t) { goto L_0040CDEC; } }
L_0040CDDC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CDE8u); set32(c.r[6], 0u + 31u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0040CDE8u) [[unlikely]] return; }
L_0040CDE8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0040CDEC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040CE40; } }
L_0040CDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CE00u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0040CE00u) [[unlikely]] return; }
L_0040CE00:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 200u);  goto L_0040CE14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CE40; } }
L_0040CE14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040CE40; } }
L_0040CE1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16480u));
    c.f[1] = ld32((c.r[4].w[0] + 16484u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16488u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 9;
L_0040CE40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0040CE44:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040CE50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  goto L_0040CEF4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  goto L_0040CEC0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_0040CE8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0040CF34; } }
L_0040CE8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CE94u);  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x0040CE94u) [[unlikely]] return; }
L_0040CE94:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CEA8u); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040CEA8u) [[unlikely]] return; }
L_0040CEA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040CF30; } }
L_0040CEC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[5].d[0] = c.r[5].d[0] << 33;
    c.r[5].d[0] = c.r[5].d[0] >> 33;
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040CF30; } }
L_0040CEF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CEFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 486u, depth + 1u); else { c.pc = 0x0034FCB0u; return; } if (c.pc != 0x0040CEFCu) [[unlikely]] return; }
L_0040CEFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CF08u); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_00BB(c, 93u, depth + 1u); else { c.pc = 0x0040CF40u; return; } if (c.pc != 0x0040CF08u) [[unlikely]] return; }
L_0040CF08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16496u));
    c.f[1] = ld32((c.r[4].w[0] + 16500u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16504u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_0040CF30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0040CF34:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040CF40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CF54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 316u, depth + 1u); else { c.pc = 0x004222F0u; return; } if (c.pc != 0x0040CF54u) [[unlikely]] return; }
L_0040CF54:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5u)));
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 6u));
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 7u));
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040CF90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040CFB8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040CFD4; } }
L_0040CFB8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0040CFD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CFE8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00C0(c, 435u, depth + 1u); else { c.pc = 0x004230B0u; return; } if (c.pc != 0x0040CFE8u) [[unlikely]] return; }
L_0040CFE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CFF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 436u, depth + 1u); else { c.pc = 0x004230E0u; return; } if (c.pc != 0x0040CFF0u) [[unlikely]] return; }
L_0040CFF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040D000:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D024u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0040D024u) [[unlikely]] return; }
L_0040D024:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 14752u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 60u), 0u);
    st32((c.r[17].w[0] + 64u), 0u);
    st32((c.r[17].w[0] + 68u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 72u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 84u), 0u);
    st32((c.r[17].w[0] + 88u), 0u);
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 192u), 0u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D070u); st32((c.r[17].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_00C1(c, 75u, depth + 1u); else { c.pc = 0x00424960u; return; } if (c.pc != 0x0040D070u) [[unlikely]] return; }
L_0040D070:
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D07Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00C1(c, 75u, depth + 1u); else { c.pc = 0x00424960u; return; } if (c.pc != 0x0040D07Cu) [[unlikely]] return; }
L_0040D07C:
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D088u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_00C1(c, 75u, depth + 1u); else { c.pc = 0x00424960u; return; } if (c.pc != 0x0040D088u) [[unlikely]] return; }
L_0040D088:
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D094u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_00C1(c, 75u, depth + 1u); else { c.pc = 0x00424960u; return; } if (c.pc != 0x0040D094u) [[unlikely]] return; }
L_0040D094:
    st32((c.r[17].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D0A0u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_00C1(c, 75u, depth + 1u); else { c.pc = 0x00424960u; return; } if (c.pc != 0x0040D0A0u) [[unlikely]] return; }
L_0040D0A0:
    st32((c.r[17].w[0] + 124u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[16].w[0] << 2);
    c.budget -= 3;
L_0040D0AC:
    set32(c.r[2], c.r[17].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 128u), 0u);
    set32(c.r[2], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0040D0E0; }
    set32(c.r[6], c.r[16].w[0] + 2u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D0D0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BB(c, 128u, depth + 1u); else { c.pc = 0x0040D480u; return; } if (c.pc != 0x0040D0D0u) [[unlikely]] return; }
L_0040D0D0:
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[17].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 128u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
L_0040D0E0:
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D0ACu | kUnwind; return; } goto L_0040D0AC; }
    st32((c.r[17].w[0] + 148u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 152u), 0u);  goto L_0040D124; }
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D120; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D118u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_00BB(c, 128u, depth + 1u); else { c.pc = 0x0040D480u; return; } if (c.pc != 0x0040D118u) [[unlikely]] return; }
L_0040D118:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 2;
L_0040D120:
    st32((c.r[17].w[0] + 152u), 0u);
    c.budget -= 1;
L_0040D124:
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 156u), 0u);  goto L_0040D158; }
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D154; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D14Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00BB(c, 128u, depth + 1u); else { c.pc = 0x0040D480u; return; } if (c.pc != 0x0040D14Cu) [[unlikely]] return; }
L_0040D14C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 2;
L_0040D154:
    st32((c.r[17].w[0] + 156u), 0u);
    c.budget -= 1;
L_0040D158:
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 160u), 0u);  goto L_0040D18C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D188; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D180u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_00BB(c, 128u, depth + 1u); else { c.pc = 0x0040D480u; return; } if (c.pc != 0x0040D180u) [[unlikely]] return; }
L_0040D180:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 2;
L_0040D188:
    st32((c.r[17].w[0] + 160u), 0u);
    c.budget -= 1;
L_0040D18C:
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 164u), 0u);  goto L_0040D1C0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D1BC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D1B4u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_00BB(c, 128u, depth + 1u); else { c.pc = 0x0040D480u; return; } if (c.pc != 0x0040D1B4u) [[unlikely]] return; }
L_0040D1B4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 2;
L_0040D1BC:
    st32((c.r[17].w[0] + 164u), 0u);
    c.budget -= 1;
L_0040D1C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 168u), 0u);  goto L_0040D1F4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D1F0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D1E8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00BB(c, 128u, depth + 1u); else { c.pc = 0x0040D480u; return; } if (c.pc != 0x0040D1E8u) [[unlikely]] return; }
L_0040D1E8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 2;
L_0040D1F0:
    st32((c.r[17].w[0] + 168u), 0u);
    c.budget -= 1;
L_0040D1F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 172u), 0u);  goto L_0040D228; }
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D224; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D21Cu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_00BB(c, 128u, depth + 1u); else { c.pc = 0x0040D480u; return; } if (c.pc != 0x0040D21Cu) [[unlikely]] return; }
L_0040D21C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 2;
L_0040D224:
    st32((c.r[17].w[0] + 172u), 0u);
    c.budget -= 1;
L_0040D228:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 176u), 0u);  goto L_0040D25C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D258; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D250u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_00BB(c, 128u, depth + 1u); else { c.pc = 0x0040D480u; return; } if (c.pc != 0x0040D250u) [[unlikely]] return; }
L_0040D250:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 2;
L_0040D258:
    st32((c.r[17].w[0] + 176u), 0u);
    c.budget -= 1;
L_0040D25C:
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 180u), 0u);  goto L_0040D290; }
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D28C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D284u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_00BB(c, 128u, depth + 1u); else { c.pc = 0x0040D480u; return; } if (c.pc != 0x0040D284u) [[unlikely]] return; }
L_0040D284:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 2;
L_0040D28C:
    st32((c.r[17].w[0] + 180u), 0u);
    c.budget -= 1;
L_0040D290:
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 184u), 0u);  goto L_0040D2C4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D2C0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D2B8u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_00BB(c, 128u, depth + 1u); else { c.pc = 0x0040D480u; return; } if (c.pc != 0x0040D2B8u) [[unlikely]] return; }
L_0040D2B8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 2;
L_0040D2C0:
    st32((c.r[17].w[0] + 184u), 0u);
    c.budget -= 1;
L_0040D2C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0040D2F8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D2F4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D2ECu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_00BB(c, 128u, depth + 1u); else { c.pc = 0x0040D480u; return; } if (c.pc != 0x0040D2ECu) [[unlikely]] return; }
L_0040D2EC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 2;
L_0040D2F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040D2F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D300u);  if (depth < kMaxDepth) unit_00BB(c, 131u, depth + 1u); else { c.pc = 0x0040D4C0u; return; } if (c.pc != 0x0040D300u) [[unlikely]] return; }
L_0040D300:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 872u);  goto L_0040D32C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), 0u);  goto L_0040D328; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D324u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D324u) [[unlikely]] return; }
L_0040D324:
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 1;
L_0040D328:
    set32(c.r[4], 0u + 872u);
    c.budget -= 1;
L_0040D32C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D334u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0040D334u) [[unlikely]] return; }
L_0040D334:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  goto L_0040D34C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D348u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 421u, depth + 1u); else { c.pc = 0x001B6BB0u; return; } if (c.pc != 0x0040D348u) [[unlikely]] return; }
L_0040D348:
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_0040D34C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D35Cu); st32((c.r[2].w[0] + 52u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 489u, depth + 1u); else { c.pc = 0x00423AD0u; return; } if (c.pc != 0x0040D35Cu) [[unlikely]] return; }
L_0040D35C:
    set32(c.r[6], ld32((c.r[17].w[0] + 64u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[6].w[0] + 752u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040D3B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040D464; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 14752u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  goto L_0040D404; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), 0u);  goto L_0040D400; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D3FCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D3FCu) [[unlikely]] return; }
L_0040D3FC:
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 1;
L_0040D400:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 1;
L_0040D404:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  goto L_0040D42C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 88u), 0u);  goto L_0040D428; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D424u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D424u) [[unlikely]] return; }
L_0040D424:
    st32((c.r[17].w[0] + 88u), 0u);
    c.budget -= 1;
L_0040D428:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_0040D42C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0040D444; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D43Cu);  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x0040D43Cu) [[unlikely]] return; }
L_0040D43C:
    st32((c.r[17].w[0] + 96u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0040D444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D44Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0040D44Cu) [[unlikely]] return; }
L_0040D44C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0040D468; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D464u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0040D464u) [[unlikely]] return; }
L_0040D464:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040D468:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040D480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D49Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 45u, depth + 1u); else { c.pc = 0x00424670u; return; } if (c.pc != 0x0040D49Cu) [[unlikely]] return; }
L_0040D49C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D4ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 255u, depth + 1u); else { c.pc = 0x00292250u; return; } if (c.pc != 0x0040D4ACu) [[unlikely]] return; }
L_0040D4AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040D4C0:
    st32((c.r[4].w[0] + 100u), 0u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  c.pc = t; return; }
L_0040D4D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040DD40; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 32192u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0040C000u < 16384u) { entry = entries_00BB[(t - 0x0040C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040D50C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 124u);  goto L_0040D530; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D528u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D528u) [[unlikely]] return; }
L_0040D528:
    st32((c.r[17].w[0] + 76u), 0u);
    set32(c.r[4], 0u + 124u);
    c.budget -= 2;
L_0040D530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D538u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0040D538u) [[unlikely]] return; }
L_0040D538:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 76u), c.r[4].w[0]);  goto L_0040D56C; }
    set32(c.r[6], ld32((c.r[17].w[0] + 68u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 32248u);
    set32(c.r[8], c.r[8].w[0] - 32232u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D564u); set32(c.r[9], 0u + 2u);  if (depth < kMaxDepth) unit_008B(c, 355u, depth + 1u); else { c.pc = 0x0034F160u; return; } if (c.pc != 0x0040D564u) [[unlikely]] return; }
L_0040D564:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 76u), c.r[4].w[0]);
    c.budget -= 2;
L_0040D56C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 2;
L_0040D574:
    set32(c.r[5], ld32((c.r[17].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0040DD44; }
    set32(c.r[2], ld32((c.r[5].w[0] + 100u)));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 16u);  goto L_0040D5C0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 88u), 0u);  goto L_0040D5BC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D5B8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D5B8u) [[unlikely]] return; }
L_0040D5B8:
    st32((c.r[17].w[0] + 88u), 0u);
    c.budget -= 1;
L_0040D5BC:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_0040D5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D5C8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0040D5C8u) [[unlikely]] return; }
L_0040D5C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  goto L_0040D5F0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 32248u);
    set32(c.r[6], c.r[6].w[0] - 32216u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D5ECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 87u, depth + 1u); else { c.pc = 0x001809E0u; return; } if (c.pc != 0x0040D5ECu) [[unlikely]] return; }
L_0040D5EC:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 1;
L_0040D5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D5F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x0040D5F8u) [[unlikely]] return; }
L_0040D5F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  goto L_0040D61C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u + 13u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0040DD40; } }
L_0040D61C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D624u);  if (depth < kMaxDepth) unit_0018(c, 108u, depth + 1u); else { c.pc = 0x00180D10u; return; } if (c.pc != 0x0040D624u) [[unlikely]] return; }
L_0040D624:
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_0040D62C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D634u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x0040D634u) [[unlikely]] return; }
L_0040D634:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  goto L_0040D658; }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u + 13u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0040DD40; } }
L_0040D658:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0040D670; }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_0040D670:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040DD40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D680u);  if (depth < kMaxDepth) unit_0018(c, 116u, depth + 1u); else { c.pc = 0x00180DD0u; return; } if (c.pc != 0x0040D680u) [[unlikely]] return; }
L_0040D680:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[17].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_0040D6A8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u + 13u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0040DD40; } }
L_0040D6A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D6B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 408u, depth + 1u); else { c.pc = 0x001B2F10u; return; } if (c.pc != 0x0040D6B0u) [[unlikely]] return; }
L_0040D6B0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_0040D6D8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u + 13u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0040DD40; } }
L_0040D6D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D6E8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x00180D40u; return; } if (c.pc != 0x0040D6E8u) [[unlikely]] return; }
L_0040D6E8:
    set32(c.r[2], 0u + 3u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_0040D6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D6F8u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x0040D6F8u) [[unlikely]] return; }
L_0040D6F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  goto L_0040D71C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u + 13u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0040DD40; } }
L_0040D71C:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0040D734; }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_0040D734:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040DD40; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 4u)));  goto L_0040D764; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 88u), 0u);  goto L_0040D760; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D75Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D75Cu) [[unlikely]] return; }
L_0040D75C:
    st32((c.r[17].w[0] + 88u), 0u);
    c.budget -= 1;
L_0040D760:
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0040D764:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], 0u + 4u);
    c.r[6].d[0] = c.r[6].d[0] << 33;
    c.r[6].d[0] = c.r[6].d[0] >> 33;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[17].w[0] + 4u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 12;
L_0040D794:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040DD40; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[2], 0u + 5u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 6;
L_0040D7C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D7C8u);  if (depth < kMaxDepth) unit_00C1(c, 135u, depth + 1u); else { c.pc = 0x00424F80u; return; } if (c.pc != 0x0040D7C8u) [[unlikely]] return; }
L_0040D7C8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], 0u + 2u);  goto L_0040D818; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D7D8u);  if (depth < kMaxDepth) unit_00C1(c, 120u, depth + 1u); else { c.pc = 0x00424DD0u; return; } if (c.pc != 0x0040D7D8u) [[unlikely]] return; }
L_0040D7D8:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D7ECu);  if (depth < kMaxDepth) unit_00C1(c, 120u, depth + 1u); else { c.pc = 0x00424DD0u; return; } if (c.pc != 0x0040D7ECu) [[unlikely]] return; }
L_0040D7EC:
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], 0u + 1u);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[5], 0u + 1u);  goto L_0040D818; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0040D814; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_0040D818; } }
L_0040D814:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0040D818:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D824u);  if (depth < kMaxDepth) unit_0038(c, 104u, depth + 1u); else { c.pc = 0x00200E70u; return; } if (c.pc != 0x0040D824u) [[unlikely]] return; }
L_0040D824:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D838u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 132u, depth + 1u); else { c.pc = 0x003C5550u; return; } if (c.pc != 0x0040D838u) [[unlikely]] return; }
L_0040D838:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_0040D840:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0040D870; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D858u);  if (depth < kMaxDepth) unit_00C1(c, 135u, depth + 1u); else { c.pc = 0x00424F80u; return; } if (c.pc != 0x0040D858u) [[unlikely]] return; }
L_0040D858:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 1);  goto L_0040D86C; }
    set32(c.r[2], c.r[16].w[0] << 1);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 4u);  if (t) { goto L_0040D870; } }
L_0040D86C:
    set32(c.r[5], c.r[2].w[0] + 5u);
    c.budget -= 1;
L_0040D870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D878u); set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  if (depth < kMaxDepth) unit_0038(c, 104u, depth + 1u); else { c.pc = 0x00200E70u; return; } if (c.pc != 0x0040D878u) [[unlikely]] return; }
L_0040D878:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D88Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 132u, depth + 1u); else { c.pc = 0x003C5550u; return; } if (c.pc != 0x0040D88Cu) [[unlikely]] return; }
L_0040D88C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D840u | kUnwind; return; } goto L_0040D840; }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = 0ull | 40006ull;  goto L_0040D8B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D8B0u);  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x0040D8B0u) [[unlikely]] return; }
L_0040D8B0:
    st32((c.r[17].w[0] + 96u), 0u);
    c.r[4].d[0] = 0ull | 40006ull;
    c.budget -= 2;
L_0040D8B8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D8C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 494u, depth + 1u); else { c.pc = 0x00423B70u; return; } if (c.pc != 0x0040D8C4u) [[unlikely]] return; }
L_0040D8C4:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D8D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 480u, depth + 1u); else { c.pc = 0x0034FBF0u; return; } if (c.pc != 0x0040D8D0u) [[unlikely]] return; }
L_0040D8D0:
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D8E8u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D8E8u) [[unlikely]] return; }
L_0040D8E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D8FCu); set32(c.r[5], 0u + 200u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D8FCu) [[unlikely]] return; }
L_0040D8FC:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 2;
L_0040D904:
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D914u); set32(c.r[5], c.r[16].w[0] + 21u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D914u) [[unlikely]] return; }
L_0040D914:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D904u | kUnwind; return; } goto L_0040D904; }
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D938u); set32(c.r[5], 0u + 99u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D938u) [[unlikely]] return; }
L_0040D938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D940u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 208u, depth + 1u); else { c.pc = 0x0040DD70u; return; } if (c.pc != 0x0040D940u) [[unlikely]] return; }
L_0040D940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D948u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 321u, depth + 1u); else { c.pc = 0x0040EB60u; return; } if (c.pc != 0x0040D948u) [[unlikely]] return; }
L_0040D948:
    st32((c.r[17].w[0] + 100u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { st32((c.r[17].w[0] + 192u), 0u);  goto L_0040D98C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040D988; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040D988; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040D988; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_0040D998; }
L_0040D988:
    st32((c.r[17].w[0] + 192u), 0u);
    c.budget -= 1;
L_0040D98C:
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 188u), c.r[3].w[0]);  if (t) { goto L_0040D9A0; } }
L_0040D998:
    st32((c.r[17].w[0] + 192u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 188u), 0u);
    c.budget -= 2;
L_0040D9A0:
    set32(c.r[4], 0u + 6u);
    set32(c.r[3], 0u + 100u);
    st32((c.r[17].w[0] + 52u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0040DD40; } }
L_0040D9B4:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  goto L_0040D9CC; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0040DD40; } }
L_0040D9CC:
    set32(c.r[5], 0u + 99u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D9E0u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D9E0u) [[unlikely]] return; }
L_0040D9E0:
    set32(c.r[3], 0u + 7u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 56u), 0u);
    c.budget -= 3;
L_0040D9EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], ld32((c.r[17].w[0] + 56u)));  goto L_0040DA04; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 188u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
L_0040DA04:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 64u)));  goto L_0040DA18; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0040DD40; } }
L_0040DA18:
    c.r[3].d[0] = ld64((c.r[2].w[0] + 96u));
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 32ull;  goto L_0040DA48; }
    c.r[4].d[0] = 0ull | 40005ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA3Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 494u, depth + 1u); else { c.pc = 0x00423B70u; return; } if (c.pc != 0x0040DA3Cu) [[unlikely]] return; }
L_0040DA3C:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0040DD40; } }
L_0040DA48:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0040DA70; }
    set32(c.r[2], ld32((c.r[17].w[0] + 192u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].d[0] & 256ull;  goto L_0040DAE4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0040DAE0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0040DA70:
    st32((c.r[17].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = 0ull | 40006ull;  goto L_0040DAAC; }
    c.r[4].d[0] = 0ull | 40008ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA90u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 494u, depth + 1u); else { c.pc = 0x00423B70u; return; } if (c.pc != 0x0040DA90u) [[unlikely]] return; }
L_0040DA90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA9Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BB(c, 216u, depth + 1u); else { c.pc = 0x0040DE50u; return; } if (c.pc != 0x0040DA9Cu) [[unlikely]] return; }
L_0040DA9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DAA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 226u, depth + 1u); else { c.pc = 0x0040DF80u; return; } if (c.pc != 0x0040DAA4u) [[unlikely]] return; }
L_0040DAA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), 0u);  if (t) { goto L_0040DACC; } }
L_0040DAAC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DAB8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 494u, depth + 1u); else { c.pc = 0x00423B70u; return; } if (c.pc != 0x0040DAB8u) [[unlikely]] return; }
L_0040DAB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DAC4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BB(c, 274u, depth + 1u); else { c.pc = 0x0040E520u; return; } if (c.pc != 0x0040DAC4u) [[unlikely]] return; }
L_0040DAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DACCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 208u, depth + 1u); else { c.pc = 0x0040DD70u; return; } if (c.pc != 0x0040DACCu) [[unlikely]] return; }
L_0040DACC:
    set32(c.r[4], 0u + 8u);
    set32(c.r[3], 0u + 100u);
    st32((c.r[17].w[0] + 52u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0040DD40; } }
L_0040DAE0:
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 1;
L_0040DAE4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0040DB44; }
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB00u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0040DB00u) [[unlikely]] return; }
L_0040DB00:
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  goto L_0040DB24; }
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB1Cu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0040DB1Cu) [[unlikely]] return; }
L_0040DB1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 12u);  if (t) { goto L_0040DB34; } }
L_0040DB24:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB30u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0040DB30u) [[unlikely]] return; }
L_0040DB30:
    set32(c.r[4], 0u + 12u);
    c.budget -= 1;
L_0040DB34:
    set32(c.r[3], 0u + 30u);
    st32((c.r[17].w[0] + 52u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0040DD40; } }
L_0040DB44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB4Cu);  if (depth < kMaxDepth) unit_00BB(c, 317u, depth + 1u); else { c.pc = 0x0040EAA0u; return; } if (c.pc != 0x0040DB4Cu) [[unlikely]] return; }
L_0040DB4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040DD40; } }
L_0040DB54:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 100u)));  goto L_0040DB6C; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0040DD40; } }
L_0040DB6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040DB88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB7Cu);  if (depth < kMaxDepth) unit_00BB(c, 222u, depth + 1u); else { c.pc = 0x0040DF10u; return; } if (c.pc != 0x0040DB7Cu) [[unlikely]] return; }
L_0040DB7C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_0040DB94; } }
L_0040DB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB90u);  if (depth < kMaxDepth) unit_00BB(c, 311u, depth + 1u); else { c.pc = 0x0040EA10u; return; } if (c.pc != 0x0040DB90u) [[unlikely]] return; }
L_0040DB90:
    st32((c.r[17].w[0] + 100u), 0u);
    c.budget -= 1;
L_0040DB94:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0040DD40; } }
L_0040DBA0:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DBB4u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040DBB4u) [[unlikely]] return; }
L_0040DBB4:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], 0u + 99u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DBC8u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040DBC8u) [[unlikely]] return; }
L_0040DBC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DBD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 325u, depth + 1u); else { c.pc = 0x0040EBF0u; return; } if (c.pc != 0x0040DBD0u) [[unlikely]] return; }
L_0040DBD0:
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0040DBF0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DBE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 216u, depth + 1u); else { c.pc = 0x0040DE50u; return; } if (c.pc != 0x0040DBE8u) [[unlikely]] return; }
L_0040DBE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 10u);  if (t) { goto L_0040DBFC; } }
L_0040DBF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DBF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 274u, depth + 1u); else { c.pc = 0x0040E520u; return; } if (c.pc != 0x0040DBF8u) [[unlikely]] return; }
L_0040DBF8:
    set32(c.r[4], 0u + 10u);
    c.budget -= 1;
L_0040DBFC:
    set32(c.r[3], 0u + 30u);
    st32((c.r[17].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 3;
L_0040DC08:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_0040DC20; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0040DD40; } }
L_0040DC20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DC50u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040DC50u) [[unlikely]] return; }
L_0040DC50:
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  goto L_0040DC78; }
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], 0u + 200u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DC70u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040DC70u) [[unlikely]] return; }
L_0040DC70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 11u);  if (t) { goto L_0040DC8C; } }
L_0040DC78:
    set32(c.r[5], 0u + 300u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DC88u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040DC88u) [[unlikely]] return; }
L_0040DC88:
    set32(c.r[4], 0u + 11u);
    c.budget -= 1;
L_0040DC8C:
    set32(c.r[3], 0u + 30u);
    st32((c.r[17].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 3;
L_0040DC98:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_0040DCB0; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0040DD40; } }
L_0040DCB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DCB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 486u, depth + 1u); else { c.pc = 0x0034FCB0u; return; } if (c.pc != 0x0040DCB8u) [[unlikely]] return; }
L_0040DCB8:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[5].d[0] = c.r[5].d[0] << 33;
    c.r[5].d[0] = c.r[5].d[0] >> 33;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DCECu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 131u, depth + 1u); else { c.pc = 0x0040D4C0u; return; } if (c.pc != 0x0040DCECu) [[unlikely]] return; }
L_0040DCEC:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0040DD40; } }
L_0040DCF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DD00u);  if (depth < kMaxDepth) unit_00BB(c, 317u, depth + 1u); else { c.pc = 0x0040EAA0u; return; } if (c.pc != 0x0040DD00u) [[unlikely]] return; }
L_0040DD00:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040DD40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DD20u);  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x0040DD20u) [[unlikely]] return; }
L_0040DD20:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DD30u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0040DD30u) [[unlikely]] return; }
L_0040DD30:
    set32(c.r[4], 0u + 7u);
    set32(c.r[3], 0u + 30u);
    st32((c.r[17].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_0040DD40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0040DD44:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040DD60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040DD70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DDA0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DDA0u) [[unlikely]] return; }
L_0040DDA0:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DDB4u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040DDB4u) [[unlikely]] return; }
L_0040DDB4:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], 0u + 200u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DDCCu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DDCCu) [[unlikely]] return; }
L_0040DDCC:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DDE0u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040DDE0u) [[unlikely]] return; }
L_0040DDE0:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 2;
L_0040DDE8:
    set32(c.r[18], c.r[16].w[0] + 21u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DE00u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DE00u) [[unlikely]] return; }
L_0040DE00:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 128u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DE20u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040DE20u) [[unlikely]] return; }
L_0040DE20:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040DDE8u | kUnwind; return; } goto L_0040DDE8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040DE50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DE80u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040DE80u) [[unlikely]] return; }
L_0040DE80:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0040DEA0; }
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[5], 0u + 200u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DE9Cu); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040DE9Cu) [[unlikely]] return; }
L_0040DE9C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040DEA0:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0040DEA4:
    set32(c.r[16], c.r[17].w[0] + 21u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 128u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DEC8u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040DEC8u) [[unlikely]] return; }
L_0040DEC8:
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DEDCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DEDCu) [[unlikely]] return; }
L_0040DEDC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040DEA4u | kUnwind; return; } goto L_0040DEA4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040DF10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DF38u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DF38u) [[unlikely]] return; }
L_0040DF38:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 2;
L_0040DF40:
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DF50u); set32(c.r[5], c.r[16].w[0] + 21u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DF50u) [[unlikely]] return; }
L_0040DF50:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040DF40u | kUnwind; return; } goto L_0040DF40; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040DF80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DFA8u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DFA8u) [[unlikely]] return; }
L_0040DFA8:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], 0u + 300u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DFC0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DFC0u) [[unlikely]] return; }
L_0040DFC0:
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[5], 0u + 30u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DFDCu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DFDCu) [[unlikely]] return; }
L_0040DFDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[5], 0u + 30u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DFF4u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040DFF4u) [[unlikely]] return; }
L_0040DFF4:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], 0u + 31u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E00Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E00Cu) [[unlikely]] return; }
L_0040E00C:
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[5], 0u + 31u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E024u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E024u) [[unlikely]] return; }
L_0040E024:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], 0u + 32u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E03Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E03Cu) [[unlikely]] return; }
L_0040E03C:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E054u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E054u) [[unlikely]] return; }
L_0040E054:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], 0u + 33u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E06Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E06Cu) [[unlikely]] return; }
L_0040E06C:
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[5], 0u + 33u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E084u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E084u) [[unlikely]] return; }
L_0040E084:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], 0u + 34u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E09Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E09Cu) [[unlikely]] return; }
L_0040E09C:
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[5], 0u + 34u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E0B4u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E0B4u) [[unlikely]] return; }
L_0040E0B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], 0u + 35u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E0CCu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E0CCu) [[unlikely]] return; }
L_0040E0CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[5], 0u + 35u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E0E4u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E0E4u) [[unlikely]] return; }
L_0040E0E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], 0u + 36u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E0FCu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E0FCu) [[unlikely]] return; }
L_0040E0FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[5], 0u + 36u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E114u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E114u) [[unlikely]] return; }
L_0040E114:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], 0u + 37u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E12Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E12Cu) [[unlikely]] return; }
L_0040E12C:
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[5], 0u + 37u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E144u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E144u) [[unlikely]] return; }
L_0040E144:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], 0u + 38u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E15Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E15Cu) [[unlikely]] return; }
L_0040E15C:
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[5], 0u + 38u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E174u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E174u) [[unlikely]] return; }
L_0040E174:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], 0u + 39u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E18Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E18Cu) [[unlikely]] return; }
L_0040E18C:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[5], 0u + 39u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E1A4u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E1A4u) [[unlikely]] return; }
L_0040E1A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040E1C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E1F0u); set32(c.r[5], c.r[2].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E1F0u) [[unlikely]] return; }
L_0040E1F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E210u); set32(c.r[5], c.r[2].w[0] + 41u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E210u) [[unlikely]] return; }
L_0040E210:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E230u); set32(c.r[5], c.r[2].w[0] + 42u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E230u) [[unlikely]] return; }
L_0040E230:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E250u); set32(c.r[5], c.r[2].w[0] + 43u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E250u) [[unlikely]] return; }
L_0040E250:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[4].w[0] << 2);  goto L_0040E48C; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[4].w[0] << 2);  goto L_0040E40C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[4].w[0] << 2);  goto L_0040E38C; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[6].d[0]) { set32(c.r[3], c.r[4].w[0] << 2);  goto L_0040E310; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  goto L_0040E294; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0040E508; } }
L_0040E294:
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], c.r[3].w[0] + 40u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E2A8u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E2A8u) [[unlikely]] return; }
L_0040E2A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + 41u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E2C8u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E2C8u) [[unlikely]] return; }
L_0040E2C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + 42u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E2E8u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E2E8u) [[unlikely]] return; }
L_0040E2E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + 43u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E308u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E308u) [[unlikely]] return; }
L_0040E308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E504; } }
L_0040E310:
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], c.r[3].w[0] + 40u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E324u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E324u) [[unlikely]] return; }
L_0040E324:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + 41u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E344u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E344u) [[unlikely]] return; }
L_0040E344:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + 42u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E364u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E364u) [[unlikely]] return; }
L_0040E364:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + 43u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E384u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E384u) [[unlikely]] return; }
L_0040E384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E504; } }
L_0040E38C:
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], c.r[3].w[0] + 40u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E3A4u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E3A4u) [[unlikely]] return; }
L_0040E3A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + 41u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E3C4u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E3C4u) [[unlikely]] return; }
L_0040E3C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + 42u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E3E4u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E3E4u) [[unlikely]] return; }
L_0040E3E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + 43u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E404u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E404u) [[unlikely]] return; }
L_0040E404:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E504; } }
L_0040E40C:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], c.r[3].w[0] + 40u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E424u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E424u) [[unlikely]] return; }
L_0040E424:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + 41u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E444u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E444u) [[unlikely]] return; }
L_0040E444:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + 42u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E464u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E464u) [[unlikely]] return; }
L_0040E464:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + 43u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E484u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E484u) [[unlikely]] return; }
L_0040E484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E504; } }
L_0040E48C:
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], c.r[3].w[0] + 40u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E4A4u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E4A4u) [[unlikely]] return; }
L_0040E4A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + 41u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E4C4u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E4C4u) [[unlikely]] return; }
L_0040E4C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + 42u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E4E4u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E4E4u) [[unlikely]] return; }
L_0040E4E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + 43u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E504u); set32(c.r[7], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E504u) [[unlikely]] return; }
L_0040E504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0040E508:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040E520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E54Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E54Cu) [[unlikely]] return; }
L_0040E54C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 148u)));  goto L_0040E56C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], 0u + 300u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E568u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E568u) [[unlikely]] return; }
L_0040E568:
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 1;
L_0040E56C:
    set32(c.r[5], 0u + 30u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E584u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E584u) [[unlikely]] return; }
L_0040E584:
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[5], 0u + 31u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E5A0u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E5A0u) [[unlikely]] return; }
L_0040E5A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E5BCu); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E5BCu) [[unlikely]] return; }
L_0040E5BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[5], 0u + 33u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E5D8u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E5D8u) [[unlikely]] return; }
L_0040E5D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[5], 0u + 34u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E5F4u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E5F4u) [[unlikely]] return; }
L_0040E5F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[5], 0u + 35u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E610u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E610u) [[unlikely]] return; }
L_0040E610:
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[5], 0u + 36u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E62Cu); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E62Cu) [[unlikely]] return; }
L_0040E62C:
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[5], 0u + 37u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E648u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E648u) [[unlikely]] return; }
L_0040E648:
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[5], 0u + 38u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E664u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E664u) [[unlikely]] return; }
L_0040E664:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[5], 0u + 39u);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E680u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E680u) [[unlikely]] return; }
L_0040E680:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 160u)));  goto L_0040E8FC; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 184u)));  goto L_0040E86C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 176u)));  goto L_0040E7DC; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[6].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 164u)));  goto L_0040E750; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 148u)));  goto L_0040E6C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (t) { goto L_0040E988; } }
L_0040E6C4:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], c.r[3].w[0] + 40u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E6DCu); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E6DCu) [[unlikely]] return; }
L_0040E6DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + 41u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E700u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E700u) [[unlikely]] return; }
L_0040E700:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + 42u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E724u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E724u) [[unlikely]] return; }
L_0040E724:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + 43u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E748u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E748u) [[unlikely]] return; }
L_0040E748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E984; } }
L_0040E750:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], c.r[3].w[0] + 40u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E768u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E768u) [[unlikely]] return; }
L_0040E768:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + 41u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E78Cu); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E78Cu) [[unlikely]] return; }
L_0040E78C:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + 42u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E7B0u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E7B0u) [[unlikely]] return; }
L_0040E7B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + 43u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E7D4u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E7D4u) [[unlikely]] return; }
L_0040E7D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E984; } }
L_0040E7DC:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], c.r[3].w[0] + 40u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E7F8u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E7F8u) [[unlikely]] return; }
L_0040E7F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + 41u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E81Cu); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E81Cu) [[unlikely]] return; }
L_0040E81C:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + 42u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E840u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E840u) [[unlikely]] return; }
L_0040E840:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + 43u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E864u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E864u) [[unlikely]] return; }
L_0040E864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E984; } }
L_0040E86C:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], c.r[3].w[0] + 40u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E888u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E888u) [[unlikely]] return; }
L_0040E888:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + 41u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E8ACu); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E8ACu) [[unlikely]] return; }
L_0040E8AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + 42u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E8D0u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E8D0u) [[unlikely]] return; }
L_0040E8D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + 43u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E8F4u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E8F4u) [[unlikely]] return; }
L_0040E8F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E984; } }
L_0040E8FC:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], c.r[3].w[0] + 40u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E918u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E918u) [[unlikely]] return; }
L_0040E918:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + 41u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E93Cu); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E93Cu) [[unlikely]] return; }
L_0040E93C:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + 42u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E960u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E960u) [[unlikely]] return; }
L_0040E960:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + 43u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E984u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040E984u) [[unlikely]] return; }
L_0040E984:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_0040E988:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E9A0u); set32(c.r[5], c.r[2].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E9A0u) [[unlikely]] return; }
L_0040E9A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E9BCu); set32(c.r[5], c.r[2].w[0] + 41u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E9BCu) [[unlikely]] return; }
L_0040E9BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E9D8u); set32(c.r[5], c.r[2].w[0] + 42u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E9D8u) [[unlikely]] return; }
L_0040E9D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E9F4u); set32(c.r[5], c.r[2].w[0] + 43u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E9F4u) [[unlikely]] return; }
L_0040E9F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040EA10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EA38u); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040EA38u) [[unlikely]] return; }
L_0040EA38:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 2;
L_0040EA40:
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EA50u); set32(c.r[5], c.r[16].w[0] + 30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040EA50u) [[unlikely]] return; }
L_0040EA50:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040EA40u | kUnwind; return; } goto L_0040EA40; }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 2;
L_0040EA68:
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EA78u); set32(c.r[5], c.r[16].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040EA78u) [[unlikely]] return; }
L_0040EA78:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040EA68u | kUnwind; return; } goto L_0040EA68; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040EAA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0040EB44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0040EAE0; } }
L_0040EAC8:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0040EAE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0040EAEC; } }
L_0040EAE0:
    c.r[3].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040EAC8u | kUnwind; return; } goto L_0040EAC8; }
L_0040EAEC:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0040EB48; }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_0040EB44; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 1;
L_0040EB08:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_0040EB1C; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_0040EB1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040EB08u | kUnwind; return; } goto L_0040EB08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EB3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 249u, depth + 1u); else { c.pc = 0x0040E1C0u; return; } if (c.pc != 0x0040EB3Cu) [[unlikely]] return; }
L_0040EB3C:
    set32(c.r[3], 0u + 290u);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 2;
L_0040EB44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0040EB48:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040EB60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 8;
L_0040EB80:
    set32(c.r[18], c.r[16].w[0] + 11u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EB98u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040EB98u) [[unlikely]] return; }
L_0040EB98:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0040EBC4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EBC0u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040EBC0u) [[unlikely]] return; }
L_0040EBC0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0040EBC4:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040EB80u | kUnwind; return; } goto L_0040EB80; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040EBF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 7;
L_0040EC0C:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  goto L_0040EC38; }
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], c.r[16].w[0] + 11u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EC30u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040EC30u) [[unlikely]] return; }
L_0040EC30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0040EC4C; } }
L_0040EC38:
    set32(c.r[5], c.r[16].w[0] + 11u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EC48u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040EC48u) [[unlikely]] return; }
L_0040EC48:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0040EC4C:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040EC0Cu | kUnwind; return; } goto L_0040EC0C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040EC70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EC88u); set32(c.r[4], 0u + 148u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0040EC88u) [[unlikely]] return; }
L_0040EC88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0040ECA0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EC9Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 332u, depth + 1u); else { c.pc = 0x0040ECB0u; return; } if (c.pc != 0x0040EC9Cu) [[unlikely]] return; }
L_0040EC9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0040ECA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040ECB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ECCCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 433u, depth + 1u); else { c.pc = 0x00423030u; return; } if (c.pc != 0x0040ECCCu) [[unlikely]] return; }
L_0040ECCC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    set32(c.r[3], c.r[3].w[0] + 14816u);
    c.r[2].d[0] = c.r[2].d[0] | 22867ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ECF0u); st32((c.r[16].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0024(c, 611u, depth + 1u); else { c.pc = 0x001B3F90u; return; } if (c.pc != 0x0040ECF0u) [[unlikely]] return; }
L_0040ECF0:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0040ED1C; }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0040ED1C:
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ED50u); st32((c.r[16].w[0] + 140u), 0u);  if (depth < kMaxDepth) unit_0024(c, 192u, depth + 1u); else { c.pc = 0x001B15E0u; return; } if (c.pc != 0x0040ED50u) [[unlikely]] return; }
L_0040ED50:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ED5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 192u, depth + 1u); else { c.pc = 0x001B15E0u; return; } if (c.pc != 0x0040ED5Cu) [[unlikely]] return; }
L_0040ED5C:
    set32(c.r[6], 0u + 128u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ED70u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 517u, depth + 1u); else { c.pc = 0x00423DE0u; return; } if (c.pc != 0x0040ED70u) [[unlikely]] return; }
L_0040ED70:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 36u);  goto L_0040ED9C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 92u), 0u);  goto L_0040ED98; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ED94u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040ED94u) [[unlikely]] return; }
L_0040ED94:
    st32((c.r[16].w[0] + 92u), 0u);
    c.budget -= 1;
L_0040ED98:
    set32(c.r[4], 0u + 36u);
    c.budget -= 1;
L_0040ED9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EDA4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0040EDA4u) [[unlikely]] return; }
L_0040EDA4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 92u), c.r[18].w[0]);  goto L_0040EDDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EDB8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x0040EDB8u) [[unlikely]] return; }
L_0040EDB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EDC0u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 147u, depth + 1u); else { c.pc = 0x001B0F70u; return; } if (c.pc != 0x0040EDC0u) [[unlikely]] return; }
L_0040EDC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EDD4u); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0014(c, 233u, depth + 1u); else { c.pc = 0x00171E30u; return; } if (c.pc != 0x0040EDD4u) [[unlikely]] return; }
L_0040EDD4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 92u), c.r[18].w[0]);
    c.budget -= 2;
L_0040EDDC:
    st32((c.r[18].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 872u);  goto L_0040EE0C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 88u), 0u);  goto L_0040EE08; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EE04u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040EE04u) [[unlikely]] return; }
L_0040EE04:
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 1;
L_0040EE08:
    set32(c.r[4], 0u + 872u);
    c.budget -= 1;
L_0040EE0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EE14u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0040EE14u) [[unlikely]] return; }
L_0040EE14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  goto L_0040EE2C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EE28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 421u, depth + 1u); else { c.pc = 0x001B6BB0u; return; } if (c.pc != 0x0040EE28u) [[unlikely]] return; }
L_0040EE28:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 1;
L_0040EE2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EE40u); st32((c.r[2].w[0] + 52u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 489u, depth + 1u); else { c.pc = 0x00423AD0u; return; } if (c.pc != 0x0040EE40u) [[unlikely]] return; }
L_0040EE40:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EE4Cu); st32((c.r[3].w[0] + 752u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0040EE4Cu) [[unlikely]] return; }
L_0040EE4C:
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EE5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 305u, depth + 1u); else { c.pc = 0x004221B0u; return; } if (c.pc != 0x0040EE5Cu) [[unlikely]] return; }
L_0040EE5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EE64u);  if (depth < kMaxDepth) unit_00C0(c, 412u, depth + 1u); else { c.pc = 0x00422C70u; return; } if (c.pc != 0x0040EE64u) [[unlikely]] return; }
L_0040EE64:
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    set32(c.r[7], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 24u), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[16].w[0] + 64u), c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[2] = ld32((c.r[5].w[0] + 16512u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 16516u));
    c.f[0] = ld32((c.r[3].w[0] + 16520u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040EEE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040EFB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 14816u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EF10u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0026(c, 14u, depth + 1u); else { c.pc = 0x001B8100u; return; } if (c.pc != 0x0040EF10u) [[unlikely]] return; }
L_0040EF10:
    st32((c.r[17].w[0] + 80u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 92u)));  goto L_0040EF40; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 88u), 0u);  goto L_0040EF3C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EF38u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040EF38u) [[unlikely]] return; }
L_0040EF38:
    st32((c.r[17].w[0] + 88u), 0u);
    c.budget -= 1;
L_0040EF3C:
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 1;
L_0040EF40:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040EF64; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 92u), 0u);  goto L_0040EF64; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EF60u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040EF60u) [[unlikely]] return; }
L_0040EF60:
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 1;
L_0040EF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EF6Cu);  if (depth < kMaxDepth) unit_00C0(c, 412u, depth + 1u); else { c.pc = 0x00422C70u; return; } if (c.pc != 0x0040EF6Cu) [[unlikely]] return; }
L_0040EF6C:
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[2].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0040EF9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14624u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EF9Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0040EF9Cu) [[unlikely]] return; }
L_0040EF9C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0040EFB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EFB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0040EFB4u) [[unlikely]] return; }
L_0040EFB4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040EFB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040EFD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040F268; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 32048u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0040C000u < 16384u) { entry = entries_00BB[(t - 0x0040C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040F00C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F014u);  if (depth < kMaxDepth) unit_00C0(c, 303u, depth + 1u); else { c.pc = 0x00422190u; return; } if (c.pc != 0x0040F014u) [[unlikely]] return; }
L_0040F014:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0040F26C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F024u);  if (depth < kMaxDepth) unit_00C0(c, 358u, depth + 1u); else { c.pc = 0x004225F0u; return; } if (c.pc != 0x0040F024u) [[unlikely]] return; }
L_0040F024:
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040F268; } }
L_0040F038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F040u);  if (depth < kMaxDepth) unit_00C1(c, 143u, depth + 1u); else { c.pc = 0x00425020u; return; } if (c.pc != 0x0040F040u) [[unlikely]] return; }
L_0040F040:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F054u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 13u, depth + 1u); else { c.pc = 0x001B80E0u; return; } if (c.pc != 0x0040F054u) [[unlikely]] return; }
L_0040F054:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040F268; } }
L_0040F068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F070u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0026(c, 16u, depth + 1u); else { c.pc = 0x001B8120u; return; } if (c.pc != 0x0040F070u) [[unlikely]] return; }
L_0040F070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F080u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0026(c, 15u, depth + 1u); else { c.pc = 0x001B8110u; return; } if (c.pc != 0x0040F080u) [[unlikely]] return; }
L_0040F080:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040F268; } }
L_0040F090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F098u);  if (depth < kMaxDepth) unit_00C1(c, 41u, depth + 1u); else { c.pc = 0x00424610u; return; } if (c.pc != 0x0040F098u) [[unlikely]] return; }
L_0040F098:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040F268; } }
L_0040F0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F0B0u);  if (depth < kMaxDepth) unit_00C1(c, 44u, depth + 1u); else { c.pc = 0x00424650u; return; } if (c.pc != 0x0040F0B0u) [[unlikely]] return; }
L_0040F0B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040F268; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040F268; } }
L_0040F0C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F0D0u);  if (depth < kMaxDepth) unit_00C0(c, 490u, depth + 1u); else { c.pc = 0x00423AE0u; return; } if (c.pc != 0x0040F0D0u) [[unlikely]] return; }
L_0040F0D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040F268; } }
L_0040F0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F0E8u);  if (depth < kMaxDepth) unit_00C0(c, 493u, depth + 1u); else { c.pc = 0x00423B50u; return; } if (c.pc != 0x0040F0E8u) [[unlikely]] return; }
L_0040F0E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040F268; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040F268; } }
L_0040F100:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 124u);  goto L_0040F124; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F11Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040F11Cu) [[unlikely]] return; }
L_0040F11C:
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[4], 0u + 124u);
    c.budget -= 2;
L_0040F124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F12Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0040F12Cu) [[unlikely]] return; }
L_0040F12C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 96u), c.r[4].w[0]);  goto L_0040F160; }
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 32136u);
    set32(c.r[8], c.r[8].w[0] - 32120u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F158u); set32(c.r[9], 0u + 2u);  if (depth < kMaxDepth) unit_008B(c, 355u, depth + 1u); else { c.pc = 0x0034F160u; return; } if (c.pc != 0x0040F158u) [[unlikely]] return; }
L_0040F158:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 96u), c.r[4].w[0]);
    c.budget -= 2;
L_0040F160:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040F268; } }
L_0040F170:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040F268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F190u);  if (depth < kMaxDepth) unit_00C1(c, 126u, depth + 1u); else { c.pc = 0x00424E50u; return; } if (c.pc != 0x0040F190u) [[unlikely]] return; }
L_0040F190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F198u); c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00C1(c, 124u, depth + 1u); else { c.pc = 0x00424E20u; return; } if (c.pc != 0x0040F198u) [[unlikely]] return; }
L_0040F198:
    set32(c.r[8], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_0040F1B0; } }
    c.r[1].d[0] = c.r[8].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0040F1D0; } }
L_0040F1B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 32096u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F1CCu); set32(c.r[6], c.r[6].w[0] - 32072u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0040F1CCu) [[unlikely]] return; }
L_0040F1CC:
    set32(c.r[8], 0u + 1u);
    c.budget -= 1;
L_0040F1D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] - 12352u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], c.r[6].w[0] - 32064u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F1F0u); set32(c.r[7], c.r[7].w[0] - 32072u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x0040F1F0u) [[unlikely]] return; }
L_0040F1F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 32136u);
    set32(c.r[6], c.r[6].w[0] - 12352u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F210u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 477u, depth + 1u); else { c.pc = 0x0034FBA0u; return; } if (c.pc != 0x0040F210u) [[unlikely]] return; }
L_0040F210:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040F268; } }
L_0040F220:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040F268; } }
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[16].w[0] + 116u), c.r[4].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 16528u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[4].w[0] + 16532u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16536u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 12;
L_0040F268:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0040F26C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040F280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040F304; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  goto L_0040F2AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0040F338; } }
L_0040F2AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F2B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 480u, depth + 1u); else { c.pc = 0x0034FBF0u; return; } if (c.pc != 0x0040F2B4u) [[unlikely]] return; }
L_0040F2B4:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x426C0000u);  goto L_0040F2F0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F2D8u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040F2D8u) [[unlikely]] return; }
L_0040F2D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 21u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F2ECu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040F2ECu) [[unlikely]] return; }
L_0040F2EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x426C0000u);
    c.budget -= 1;
L_0040F2F0:
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040F334; } }
L_0040F304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F30Cu);  if (depth < kMaxDepth) unit_00BC(c, 61u, depth + 1u); else { c.pc = 0x004105A0u; return; } if (c.pc != 0x0040F30Cu) [[unlikely]] return; }
L_0040F30C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16544u));
    c.f[1] = ld32((c.r[4].w[0] + 16548u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16552u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_0040F334:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0040F338:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040F350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040F374; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0040F5BC; } }
L_0040F374:
    set32(c.r[5], ld32((c.r[17].w[0] + 88u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = ld64((c.r[5].w[0] + 96u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0040F394; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0040F394:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040F3AC; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_0040F3AC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[5].w[0] + 80u));  goto L_0040F410; }
    c.r[4].d[0] = 0ull | 40002ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F3C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 494u, depth + 1u); else { c.pc = 0x00423B70u; return; } if (c.pc != 0x0040F3C4u) [[unlikely]] return; }
L_0040F3C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_0040F3E4; } }
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_0040F3E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0040F3FC; }
    set32(c.r[2], 0u + 5u);
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_0040F3FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F404u);  if (depth < kMaxDepth) unit_00BC(c, 70u, depth + 1u); else { c.pc = 0x00410680u; return; } if (c.pc != 0x0040F404u) [[unlikely]] return; }
L_0040F404:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_0040F5B8; } }
L_0040F410:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040F5B8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040F5B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 32000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0040C000u < 16384u) { entry = entries_00BB[(t - 0x0040C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040F450:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 3u);  goto L_0040F498; }
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F46Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0040F46Cu) [[unlikely]] return; }
L_0040F46C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16560u));
    c.f[1] = ld32((c.r[4].w[0] + 16564u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16568u));
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), 0u);  if (t) { goto L_0040F5B8; } }
L_0040F498:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F4A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0040F4A4u) [[unlikely]] return; }
L_0040F4A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_0040F5B8; } }
L_0040F4B0:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F4C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0040F4C0u) [[unlikely]] return; }
L_0040F4C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16576u));
    c.f[1] = ld32((c.r[4].w[0] + 16580u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16584u));
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), 0u);  if (t) { goto L_0040F5B8; } }
L_0040F4EC:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F4FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0040F4FCu) [[unlikely]] return; }
L_0040F4FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16592u));
    c.f[1] = ld32((c.r[4].w[0] + 16596u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16600u));
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), 0u);  if (t) { goto L_0040F5B8; } }
L_0040F528:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F538u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0040F538u) [[unlikely]] return; }
L_0040F538:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16608u));
    c.f[1] = ld32((c.r[4].w[0] + 16612u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16616u));
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), 0u);  if (t) { goto L_0040F5B8; } }
L_0040F564:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16624u));
    c.f[1] = ld32((c.r[4].w[0] + 16628u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16632u));
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), 0u);  if (t) { goto L_0040F5B8; } }
L_0040F590:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16640u));
    c.f[1] = ld32((c.r[4].w[0] + 16644u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16648u));
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 10;
L_0040F5B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0040F5BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040F5D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 401u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040F908; } }
    set32(c.r[3], 0u + 400u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_0040F8F0; }
    set32(c.r[5], 0u + 304u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[5].d[0];  if (t) { goto L_0040F8D4; } }
    set32(c.r[5], 0u + 303u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[5].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 128u)));  goto L_0040F898; }
    set32(c.r[5], 0u + 302u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[5].d[0];  if (t) { goto L_0040F880; } }
    set32(c.r[5], 0u + 301u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[5].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 128u)));  goto L_0040F83C; }
    set32(c.r[5], 0u + 300u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[5].d[0];  if (t) { goto L_0040F824; } }
    set32(c.r[4], 0u + 201u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_0040F808; }
    set32(c.r[7], 0u + 200u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[7].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_0040F7F0; }
    set32(c.r[4], 0u + 101u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[4].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 140u)));  goto L_0040F784; }
    set32(c.r[6], 0u + 100u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[6].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  goto L_0040F72C; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[4].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 140u)));  goto L_0040F6E0; }
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  goto L_0040F680; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0040F94C; } }
L_0040F680:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 132u);  goto L_0040F6A0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F698u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040F698u) [[unlikely]] return; }
L_0040F698:
    st32((c.r[16].w[0] + 140u), 0u);
    set32(c.r[4], 0u + 132u);
    c.budget -= 2;
L_0040F6A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F6A8u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0040F6A8u) [[unlikely]] return; }
L_0040F6A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 140u), c.r[4].w[0]);  goto L_0040F6D0; }
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F6C8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 297u, depth + 1u); else { c.pc = 0x0041ED30u; return; } if (c.pc != 0x0040F6C8u) [[unlikely]] return; }
L_0040F6C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 140u), c.r[4].w[0]);
    c.budget -= 2;
L_0040F6D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040F948; } }
L_0040F6E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0040F948; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  goto L_0040F708; }
    st32((c.r[16].w[0] + 76u), c.r[6].w[0]);
    c.budget -= 1;
L_0040F708:
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040F948; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F724u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040F724u) [[unlikely]] return; }
L_0040F724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 140u), 0u);  if (t) { goto L_0040F948; } }
L_0040F72C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 120u);  goto L_0040F74C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F744u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040F744u) [[unlikely]] return; }
L_0040F744:
    st32((c.r[16].w[0] + 140u), 0u);
    set32(c.r[4], 0u + 120u);
    c.budget -= 2;
L_0040F74C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F754u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0040F754u) [[unlikely]] return; }
L_0040F754:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 140u), c.r[4].w[0]);  goto L_0040F774; }
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F76Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 417u, depth + 1u); else { c.pc = 0x00422D20u; return; } if (c.pc != 0x0040F76Cu) [[unlikely]] return; }
L_0040F76C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 140u), c.r[4].w[0]);
    c.budget -= 2;
L_0040F774:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040F948; } }
L_0040F784:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0040F948; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { st32((c.r[16].w[0] + 76u), 0u);  goto L_0040F7CC; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[4].d[0]) { st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  goto L_0040F7CC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 76u), c.r[7].w[0]);  goto L_0040F7CC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 76u), c.r[7].w[0]);  goto L_0040F7CC; }
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 1;
L_0040F7CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040F948; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F7E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040F7E8u) [[unlikely]] return; }
L_0040F7E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 140u), 0u);  if (t) { goto L_0040F948; } }
L_0040F7F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F7F8u);  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x0040F7F8u) [[unlikely]] return; }
L_0040F7F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040F948; } }
L_0040F808:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040F948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[5].w[0]);  if (t) { goto L_0040F948; } }
L_0040F824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F82Cu);  if (depth < kMaxDepth) unit_00BC(c, 85u, depth + 1u); else { c.pc = 0x004108E0u; return; } if (c.pc != 0x0040F82Cu) [[unlikely]] return; }
L_0040F82C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040F948; } }
L_0040F83C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0040F948; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040F948; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040F948; } }
L_0040F880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F888u);  if (depth < kMaxDepth) unit_00BC(c, 103u, depth + 1u); else { c.pc = 0x00410B00u; return; } if (c.pc != 0x0040F888u) [[unlikely]] return; }
L_0040F888:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040F948; } }
L_0040F898:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040F948; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040F948; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F8C4u);  if (depth < kMaxDepth) unit_00BC(c, 109u, depth + 1u); else { c.pc = 0x00410BA0u; return; } if (c.pc != 0x0040F8C4u) [[unlikely]] return; }
L_0040F8C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040F948; } }
L_0040F8D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F8DCu);  if (depth < kMaxDepth) unit_00BC(c, 94u, depth + 1u); else { c.pc = 0x004109F0u; return; } if (c.pc != 0x0040F8DCu) [[unlikely]] return; }
L_0040F8DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41F80000u);
    set32(c.r[3], 0u + 400u);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040F948; } }
L_0040F8F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F8F8u);  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x0040F8F8u) [[unlikely]] return; }
L_0040F8F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040F948; } }
L_0040F908:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040F948; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16656u));
    c.f[1] = ld32((c.r[4].w[0] + 16660u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16664u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_0040F948:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0040F94C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040F960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040FA98; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 31968u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0040C000u < 16384u) { entry = entries_00BB[(t - 0x0040C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040F998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F9A0u);  if (depth < kMaxDepth) unit_00BC(c, 85u, depth + 1u); else { c.pc = 0x004108E0u; return; } if (c.pc != 0x0040F9A0u) [[unlikely]] return; }
L_0040F9A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040FA98; } }
L_0040F9B0:
    set32(c.r[6], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0040FA9C; }
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040FA98; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040FA98; } }
L_0040F9F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FA00u);  if (depth < kMaxDepth) unit_00BC(c, 103u, depth + 1u); else { c.pc = 0x00410B00u; return; } if (c.pc != 0x0040FA00u) [[unlikely]] return; }
L_0040FA00:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040FA98; } }
L_0040FA10:
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040FA98; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040FA98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FA40u);  if (depth < kMaxDepth) unit_00BC(c, 109u, depth + 1u); else { c.pc = 0x00410BA0u; return; } if (c.pc != 0x0040FA40u) [[unlikely]] return; }
L_0040FA40:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040FA98; } }
L_0040FA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FA58u);  if (depth < kMaxDepth) unit_00BC(c, 94u, depth + 1u); else { c.pc = 0x004109F0u; return; } if (c.pc != 0x0040FA58u) [[unlikely]] return; }
L_0040FA58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F80000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040FA98; } }
L_0040FA70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16672u));
    c.f[1] = ld32((c.r[4].w[0] + 16676u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16680u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_0040FA98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0040FA9C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040FAB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040FBE8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 31936u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0040C000u < 16384u) { entry = entries_00BB[(t - 0x0040C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040FAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FAF0u);  if (depth < kMaxDepth) unit_00BC(c, 85u, depth + 1u); else { c.pc = 0x004108E0u; return; } if (c.pc != 0x0040FAF0u) [[unlikely]] return; }
L_0040FAF0:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040FBE8; } }
L_0040FB00:
    set32(c.r[6], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0040FBEC; }
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040FBE8; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040FBE8; } }
L_0040FB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FB50u);  if (depth < kMaxDepth) unit_00BC(c, 103u, depth + 1u); else { c.pc = 0x00410B00u; return; } if (c.pc != 0x0040FB50u) [[unlikely]] return; }
L_0040FB50:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040FBE8; } }
L_0040FB60:
    set32(c.r[5], ld32((c.r[16].w[0] + 132u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040FBE8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040FBE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FB90u);  if (depth < kMaxDepth) unit_00BC(c, 109u, depth + 1u); else { c.pc = 0x00410BA0u; return; } if (c.pc != 0x0040FB90u) [[unlikely]] return; }
L_0040FB90:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040FBE8; } }
L_0040FBA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FBA8u);  if (depth < kMaxDepth) unit_00BC(c, 94u, depth + 1u); else { c.pc = 0x004109F0u; return; } if (c.pc != 0x0040FBA8u) [[unlikely]] return; }
L_0040FBA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F80000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040FBE8; } }
L_0040FBC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16688u));
    c.f[1] = ld32((c.r[4].w[0] + 16692u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16696u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_0040FBE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0040FBEC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040FC00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040FD38; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 31904u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0040C000u < 16384u) { entry = entries_00BB[(t - 0x0040C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040FC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FC40u);  if (depth < kMaxDepth) unit_00BC(c, 85u, depth + 1u); else { c.pc = 0x004108E0u; return; } if (c.pc != 0x0040FC40u) [[unlikely]] return; }
L_0040FC40:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040FD38; } }
L_0040FC50:
    set32(c.r[6], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0040FD3C; }
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040FD38; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040FD38; } }
L_0040FC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FCA0u);  if (depth < kMaxDepth) unit_00BC(c, 103u, depth + 1u); else { c.pc = 0x00410B00u; return; } if (c.pc != 0x0040FCA0u) [[unlikely]] return; }
L_0040FCA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040FD38; } }
L_0040FCB0:
    set32(c.r[5], ld32((c.r[16].w[0] + 136u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040FD38; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040FD38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FCE0u);  if (depth < kMaxDepth) unit_00BC(c, 109u, depth + 1u); else { c.pc = 0x00410BA0u; return; } if (c.pc != 0x0040FCE0u) [[unlikely]] return; }
L_0040FCE0:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040FD38; } }
L_0040FCF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FCF8u);  if (depth < kMaxDepth) unit_00BC(c, 94u, depth + 1u); else { c.pc = 0x004109F0u; return; } if (c.pc != 0x0040FCF8u) [[unlikely]] return; }
L_0040FCF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F80000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0040FD38; } }
L_0040FD10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16704u));
    c.f[1] = ld32((c.r[4].w[0] + 16708u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16712u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_0040FD38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0040FD3C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040FD50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 302u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00BC(c, 3u, depth); } }
    set32(c.r[3], 0u + 301u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_0040FFF4; }
    set32(c.r[3], 0u + 300u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  goto L_0040FFB0; }
    set32(c.r[5], 0u + 200u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0040FF9C; } }
    set32(c.r[3], 0u + 103u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_0040FF3C; }
    set32(c.r[3], 0u + 102u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_0040FF24; }
    set32(c.r[3], 0u + 101u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_0040FEF8; }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_0040FEDC; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_0040FE9C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_0040FE84; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_0040FE34; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 84u)));  goto L_0040FDF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { [[clang::musttail]] return unit_00BC(c, 4u, depth); } }
L_0040FDF4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 100u);  goto L_0040FE10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FE04u);  if (depth < kMaxDepth) unit_00BC(c, 60u, depth + 1u); else { c.pc = 0x00410590u; return; } if (c.pc != 0x0040FE04u) [[unlikely]] return; }
L_0040FE04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  goto L_0040FE18; }
    set32(c.r[3], 0u + 100u);
    c.budget -= 1;
L_0040FE10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BC(c, 3u, depth); } }
L_0040FE18:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FE24u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0040FE24u) [[unlikely]] return; }
L_0040FE24:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BC(c, 3u, depth); } }
L_0040FE34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FE3Cu);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0040FE3Cu) [[unlikely]] return; }
L_0040FE3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00BC(c, 3u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FE4Cu); set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0040FE4Cu) [[unlikely]] return; }
L_0040FE4C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_0040FE78; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 100u);  goto L_0040FE6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040FE74; } }
L_0040FE6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BC(c, 3u, depth); } }
L_0040FE74:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0040FE78:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BC(c, 3u, depth); } }
L_0040FE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FE8Cu);  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x0040FE8Cu) [[unlikely]] return; }
L_0040FE8C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BC(c, 3u, depth); } }
L_0040FE9C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00BC(c, 3u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16720u));
    c.f[1] = ld32((c.r[4].w[0] + 16724u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16728u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { [[clang::musttail]] return unit_00BC(c, 3u, depth); } }
L_0040FEDC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FEE8u); set32(c.r[6], 0u + 65u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x0040FEE8u) [[unlikely]] return; }
L_0040FEE8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BC(c, 3u, depth); } }
L_0040FEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FF00u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0040FF00u) [[unlikely]] return; }
L_0040FF00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00BC(c, 3u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FF10u); set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x0040FF10u) [[unlikely]] return; }
L_0040FF10:
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BC(c, 3u, depth); } }
L_0040FF24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FF2Cu);  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x0040FF2Cu) [[unlikely]] return; }
L_0040FF2C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BC(c, 3u, depth); } }
L_0040FF3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00BC(c, 3u, depth); } }
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_0040FF74; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 76u), c.r[5].w[0]);  [[clang::musttail]] return unit_00BC(c, 3u, depth); }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00BC(c, 3u, depth); } }
L_0040FF74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 16736u));
    c.f[1] = ld32((c.r[4].w[0] + 16740u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 16744u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { [[clang::musttail]] return unit_00BC(c, 3u, depth); } }
L_0040FF9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FFA4u);  if (depth < kMaxDepth) unit_00BC(c, 85u, depth + 1u); else { c.pc = 0x004108E0u; return; } if (c.pc != 0x0040FFA4u) [[unlikely]] return; }
L_0040FFA4:
    set32(c.r[3], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BC(c, 3u, depth); } }
L_0040FFB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FFC4u);  if (depth < kMaxDepth) unit_0026(c, 18u, depth + 1u); else { c.pc = 0x001B8140u; return; } if (c.pc != 0x0040FFC4u) [[unlikely]] return; }
L_0040FFC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[5], 0u + 51u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FFDCu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040FFDCu) [[unlikely]] return; }
L_0040FFDC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BC(c, 3u, depth); } }
L_0040FFF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FFFCu);  if (depth < kMaxDepth) unit_0024(c, 608u, depth + 1u); else { c.pc = 0x001B3F60u; return; } if (c.pc != 0x0040FFFCu) [[unlikely]] return; }
L_0040FFFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410004u);  if (depth < kMaxDepth) unit_0024(c, 504u, depth + 1u); else { c.pc = 0x001B3720u; return; } if (c.pc != 0x00410004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00BC(c, 2u, depth);
}

}
