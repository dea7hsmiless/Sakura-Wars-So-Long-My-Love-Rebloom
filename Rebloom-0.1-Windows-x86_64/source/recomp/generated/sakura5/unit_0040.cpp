#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0040[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 13, 0, 0,
    0, 14, 15, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 20, 21, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0,
    0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0,
    0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63,
    0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67,
    0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 77, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100,
    0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 111,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0,
    126, 0, 0, 127, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0,
    0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0,
    0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 0,
    0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0,
    211, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0,
    0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0,
    0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 237, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0,
    241, 0, 242, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251,
    0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0,
    0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0,
    0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 0, 267,
    0, 0, 268, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0,
    0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0,
    0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 283, 0, 0,
    0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0,
    0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0,
    0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    297, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308,
    0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314,
    0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0,
    0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0,
    0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0,
    0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0,
    0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0,
    0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0,
    0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0,
    0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0,
    0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0,
    0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0,
    0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0,
    0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0,
    0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0,
    0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0,
    0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0,
    0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0,
    0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0,
    0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0,
    0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0,
    0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0,
    0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 467, 0, 0, 468, 0, 0, 0, 469, 0, 0,
};

void unit_0040(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00220000;
    case 2u: goto L_00220004;
    case 3u: goto L_00220010;
    case 4u: goto L_00220028;
    case 5u: goto L_0022002C;
    case 6u: goto L_00220044;
    case 7u: goto L_00220074;
    case 8u: goto L_0022008C;
    case 9u: goto L_00220094;
    case 10u: goto L_002200C4;
    case 11u: goto L_002200D8;
    case 12u: goto L_002200F0;
    case 13u: goto L_002200F4;
    case 14u: goto L_00220104;
    case 15u: goto L_00220108;
    case 16u: goto L_0022010C;
    case 17u: goto L_00220134;
    case 18u: goto L_00220150;
    case 19u: goto L_0022016C;
    case 20u: goto L_00220170;
    case 21u: goto L_00220174;
    case 22u: goto L_00220190;
    case 23u: goto L_002201BC;
    case 24u: goto L_002201E0;
    case 25u: goto L_0022020C;
    case 26u: goto L_00220244;
    case 27u: goto L_00220260;
    case 28u: goto L_002202AC;
    case 29u: goto L_002202B4;
    case 30u: goto L_002202D8;
    case 31u: goto L_00220330;
    case 32u: goto L_0022034C;
    case 33u: goto L_00220354;
    case 34u: goto L_00220380;
    case 35u: goto L_002203B8;
    case 36u: goto L_002203F4;
    case 37u: goto L_0022040C;
    case 38u: goto L_00220470;
    case 39u: goto L_00220490;
    case 40u: goto L_002204B0;
    case 41u: goto L_002204D0;
    case 42u: goto L_002204E8;
    case 43u: goto L_002204FC;
    case 44u: goto L_0022051C;
    case 45u: goto L_0022053C;
    case 46u: goto L_00220544;
    case 47u: goto L_0022054C;
    case 48u: goto L_00220558;
    case 49u: goto L_0022056C;
    case 50u: goto L_00220580;
    case 51u: goto L_00220590;
    case 52u: goto L_002205BC;
    case 53u: goto L_002205D4;
    case 54u: goto L_002205EC;
    case 55u: goto L_002205F8;
    case 56u: goto L_00220604;
    case 57u: goto L_0022061C;
    case 58u: goto L_00220640;
    case 59u: goto L_00220664;
    case 60u: goto L_0022068C;
    case 61u: goto L_002206C0;
    case 62u: goto L_002206D8;
    case 63u: goto L_002206FC;
    case 64u: goto L_0022071C;
    case 65u: goto L_0022073C;
    case 66u: goto L_0022075C;
    case 67u: goto L_0022077C;
    case 68u: goto L_00220794;
    case 69u: goto L_002207A0;
    case 70u: goto L_002207B4;
    case 71u: goto L_002207DC;
    case 72u: goto L_00220808;
    case 73u: goto L_00220824;
    case 74u: goto L_00220840;
    case 75u: goto L_00220854;
    case 76u: goto L_00220858;
    case 77u: goto L_00220894;
    case 78u: goto L_00220898;
    case 79u: goto L_002208D0;
    case 80u: goto L_002208E0;
    case 81u: goto L_00220950;
    case 82u: goto L_0022096C;
    case 83u: goto L_0022097C;
    case 84u: goto L_002209B0;
    case 85u: goto L_002209C0;
    case 86u: goto L_002209DC;
    case 87u: goto L_002209F0;
    case 88u: goto L_00220A0C;
    case 89u: goto L_00220A1C;
    case 90u: goto L_00220A40;
    case 91u: goto L_00220A64;
    case 92u: goto L_00220A80;
    case 93u: goto L_00220AA0;
    case 94u: goto L_00220AB8;
    case 95u: goto L_00220AE0;
    case 96u: goto L_00220B0C;
    case 97u: goto L_00220B28;
    case 98u: goto L_00220B44;
    case 99u: goto L_00220B60;
    case 100u: goto L_00220B7C;
    case 101u: goto L_00220B98;
    case 102u: goto L_00220BA8;
    case 103u: goto L_00220BB4;
    case 104u: goto L_00220BD0;
    case 105u: goto L_00220BF0;
    case 106u: goto L_00220C08;
    case 107u: goto L_00220C14;
    case 108u: goto L_00220C40;
    case 109u: goto L_00220C58;
    case 110u: goto L_00220C64;
    case 111u: goto L_00220C7C;
    case 112u: goto L_00220C90;
    case 113u: goto L_00220CD0;
    case 114u: goto L_00220CD8;
    case 115u: goto L_00220CE4;
    case 116u: goto L_00220D0C;
    case 117u: goto L_00220D14;
    case 118u: goto L_00220D3C;
    case 119u: goto L_00220D5C;
    case 120u: goto L_00220D8C;
    case 121u: goto L_00220DA0;
    case 122u: goto L_00220DB0;
    case 123u: goto L_00220DC8;
    case 124u: goto L_00220DE0;
    case 125u: goto L_00220DF4;
    case 126u: goto L_00220E00;
    case 127u: goto L_00220E0C;
    case 128u: goto L_00220E20;
    case 129u: goto L_00220E28;
    case 130u: goto L_00220E40;
    case 131u: goto L_00220E54;
    case 132u: goto L_00220E60;
    case 133u: goto L_00220E6C;
    case 134u: goto L_00220E78;
    case 135u: goto L_00220E98;
    case 136u: goto L_00220EC0;
    case 137u: goto L_00220EC8;
    case 138u: goto L_00220ED8;
    case 139u: goto L_00220EE4;
    case 140u: goto L_00220F10;
    case 141u: goto L_00220F48;
    case 142u: goto L_00220F64;
    case 143u: goto L_00220F94;
    case 144u: goto L_00220FA8;
    case 145u: goto L_00220FB8;
    case 146u: goto L_00220FC8;
    case 147u: goto L_00220FF0;
    case 148u: goto L_0022101C;
    case 149u: goto L_00221030;
    case 150u: goto L_00221064;
    case 151u: goto L_00221080;
    case 152u: goto L_002210AC;
    case 153u: goto L_002210E4;
    case 154u: goto L_0022110C;
    case 155u: goto L_0022113C;
    case 156u: goto L_0022116C;
    case 157u: goto L_00221180;
    case 158u: goto L_0022119C;
    case 159u: goto L_002211CC;
    case 160u: goto L_002211E0;
    case 161u: goto L_00221204;
    case 162u: goto L_00221248;
    case 163u: goto L_00221270;
    case 164u: goto L_00221298;
    case 165u: goto L_002212C0;
    case 166u: goto L_002212D8;
    case 167u: goto L_002212E0;
    case 168u: goto L_0022130C;
    case 169u: goto L_00221330;
    case 170u: goto L_00221378;
    case 171u: goto L_00221390;
    case 172u: goto L_002213A4;
    case 173u: goto L_002213B0;
    case 174u: goto L_002213BC;
    case 175u: goto L_002213C8;
    case 176u: goto L_002213F8;
    case 177u: goto L_00221404;
    case 178u: goto L_00221450;
    case 179u: goto L_00221458;
    case 180u: goto L_00221498;
    case 181u: goto L_002214B0;
    case 182u: goto L_002214C4;
    case 183u: goto L_002214D0;
    case 184u: goto L_002214DC;
    case 185u: goto L_002214EC;
    case 186u: goto L_0022151C;
    case 187u: goto L_00221528;
    case 188u: goto L_00221570;
    case 189u: goto L_00221594;
    case 190u: goto L_002215B4;
    case 191u: goto L_002215CC;
    case 192u: goto L_002215EC;
    case 193u: goto L_00221620;
    case 194u: goto L_00221654;
    case 195u: goto L_002216E0;
    case 196u: goto L_00221718;
    case 197u: goto L_00221734;
    case 198u: goto L_00221760;
    case 199u: goto L_0022177C;
    case 200u: goto L_002217C0;
    case 201u: goto L_0022187C;
    case 202u: goto L_00221890;
    case 203u: goto L_00221920;
    case 204u: goto L_00221948;
    case 205u: goto L_00221958;
    case 206u: goto L_00221960;
    case 207u: goto L_0022196C;
    case 208u: goto L_00221984;
    case 209u: goto L_002219B0;
    case 210u: goto L_002219E0;
    case 211u: goto L_00221A00;
    case 212u: goto L_00221A08;
    case 213u: goto L_00221A14;
    case 214u: goto L_00221A2C;
    case 215u: goto L_00221A50;
    case 216u: goto L_00221A80;
    case 217u: goto L_00221A94;
    case 218u: goto L_00221B54;
    case 219u: goto L_00221B74;
    case 220u: goto L_00221B98;
    case 221u: goto L_00221BD0;
    case 222u: goto L_00221BE0;
    case 223u: goto L_00221BF8;
    case 224u: goto L_00221C44;
    case 225u: goto L_00221C80;
    case 226u: goto L_00221CB8;
    case 227u: goto L_00221CEC;
    case 228u: goto L_00221D08;
    case 229u: goto L_00221D2C;
    case 230u: goto L_00221D44;
    case 231u: goto L_00221D54;
    case 232u: goto L_00221D84;
    case 233u: goto L_00221D94;
    case 234u: goto L_00221DC4;
    case 235u: goto L_00221E00;
    case 236u: goto L_00221E44;
    case 237u: goto L_00221E48;
    case 238u: goto L_00221E54;
    case 239u: goto L_00221E5C;
    case 240u: goto L_00221E78;
    case 241u: goto L_00221E80;
    case 242u: goto L_00221E88;
    case 243u: goto L_00221E90;
    case 244u: goto L_00221EA4;
    case 245u: goto L_00221ED4;
    case 246u: goto L_00221EE8;
    case 247u: goto L_00221F30;
    case 248u: goto L_00221F40;
    case 249u: goto L_00221F48;
    case 250u: goto L_00221F60;
    case 251u: goto L_00221F7C;
    case 252u: goto L_00221F98;
    case 253u: goto L_00221FB8;
    case 254u: goto L_00221FC8;
    case 255u: goto L_00221FEC;
    case 256u: goto L_00222008;
    case 257u: goto L_00222014;
    case 258u: goto L_00222048;
    case 259u: goto L_00222064;
    case 260u: goto L_00222074;
    case 261u: goto L_00222094;
    case 262u: goto L_002220A8;
    case 263u: goto L_002220C8;
    case 264u: goto L_002220D4;
    case 265u: goto L_002220E0;
    case 266u: goto L_002220EC;
    case 267u: goto L_002220FC;
    case 268u: goto L_00222108;
    case 269u: goto L_00222114;
    case 270u: goto L_0022211C;
    case 271u: goto L_0022217C;
    case 272u: goto L_002221E4;
    case 273u: goto L_00222204;
    case 274u: goto L_00222230;
    case 275u: goto L_00222238;
    case 276u: goto L_00222244;
    case 277u: goto L_00222260;
    case 278u: goto L_00222274;
    case 279u: goto L_00222294;
    case 280u: goto L_002222B0;
    case 281u: goto L_002222E4;
    case 282u: goto L_002222EC;
    case 283u: goto L_002222F4;
    case 284u: goto L_00222314;
    case 285u: goto L_00222330;
    case 286u: goto L_00222350;
    case 287u: goto L_00222374;
    case 288u: goto L_0022238C;
    case 289u: goto L_00222398;
    case 290u: goto L_002223B0;
    case 291u: goto L_00222480;
    case 292u: goto L_002224A4;
    case 293u: goto L_002224E4;
    case 294u: goto L_002224F4;
    case 295u: goto L_00222504;
    case 296u: goto L_00222554;
    case 297u: goto L_00222600;
    case 298u: goto L_0022260C;
    case 299u: goto L_00222614;
    case 300u: goto L_0022262C;
    case 301u: goto L_00222640;
    case 302u: goto L_00222650;
    case 303u: goto L_00222658;
    case 304u: goto L_00222660;
    case 305u: goto L_00222690;
    case 306u: goto L_002226C0;
    case 307u: goto L_002226E0;
    case 308u: goto L_002226FC;
    case 309u: goto L_0022271C;
    case 310u: goto L_0022273C;
    case 311u: goto L_00222748;
    case 312u: goto L_00222830;
    case 313u: goto L_002228D8;
    case 314u: goto L_002228FC;
    case 315u: goto L_0022291C;
    case 316u: goto L_00222928;
    case 317u: goto L_00222950;
    case 318u: goto L_0022297C;
    case 319u: goto L_002229A8;
    case 320u: goto L_00222A28;
    case 321u: goto L_00222A3C;
    case 322u: goto L_00222A6C;
    case 323u: goto L_00222A8C;
    case 324u: goto L_00222AAC;
    case 325u: goto L_00222ACC;
    case 326u: goto L_00222AF4;
    case 327u: goto L_00222B74;
    case 328u: goto L_00222B88;
    case 329u: goto L_00222BB8;
    case 330u: goto L_00222BD8;
    case 331u: goto L_00222BF8;
    case 332u: goto L_00222C18;
    case 333u: goto L_00222C40;
    case 334u: goto L_00222CA8;
    case 335u: goto L_00222CC8;
    case 336u: goto L_00222CE8;
    case 337u: goto L_00222D08;
    case 338u: goto L_00222D28;
    case 339u: goto L_00222D50;
    case 340u: goto L_00222DB8;
    case 341u: goto L_00222DD8;
    case 342u: goto L_00222DF8;
    case 343u: goto L_00222E18;
    case 344u: goto L_00222E38;
    case 345u: goto L_00222E64;
    case 346u: goto L_00222F38;
    case 347u: goto L_00223018;
    case 348u: goto L_00223050;
    case 349u: goto L_002230D4;
    case 350u: goto L_002230E8;
    case 351u: goto L_0022313C;
    case 352u: goto L_00223164;
    case 353u: goto L_002231AC;
    case 354u: goto L_002231D8;
    case 355u: goto L_002231F0;
    case 356u: goto L_00223258;
    case 357u: goto L_00223278;
    case 358u: goto L_00223298;
    case 359u: goto L_002232B8;
    case 360u: goto L_002232E8;
    case 361u: goto L_00223308;
    case 362u: goto L_00223328;
    case 363u: goto L_00223348;
    case 364u: goto L_00223354;
    case 365u: goto L_00223380;
    case 366u: goto L_0022339C;
    case 367u: goto L_002233B4;
    case 368u: goto L_002234A4;
    case 369u: goto L_002234B0;
    case 370u: goto L_002234D8;
    case 371u: goto L_002234F4;
    case 372u: goto L_00223500;
    case 373u: goto L_00223524;
    case 374u: goto L_00223578;
    case 375u: goto L_002235A8;
    case 376u: goto L_002235C8;
    case 377u: goto L_002235E8;
    case 378u: goto L_00223608;
    case 379u: goto L_00223638;
    case 380u: goto L_00223658;
    case 381u: goto L_00223678;
    case 382u: goto L_00223698;
    case 383u: goto L_002236A4;
    case 384u: goto L_002236E4;
    case 385u: goto L_00223704;
    case 386u: goto L_00223724;
    case 387u: goto L_00223730;
    case 388u: goto L_00223740;
    case 389u: goto L_00223818;
    case 390u: goto L_002238B0;
    case 391u: goto L_0022393C;
    case 392u: goto L_00223950;
    case 393u: goto L_00223958;
    case 394u: goto L_00223988;
    case 395u: goto L_002239B0;
    case 396u: goto L_002239C8;
    case 397u: goto L_002239D8;
    case 398u: goto L_00223A00;
    case 399u: goto L_00223A10;
    case 400u: goto L_00223A38;
    case 401u: goto L_00223A48;
    case 402u: goto L_00223A54;
    case 403u: goto L_00223A88;
    case 404u: goto L_00223AA0;
    case 405u: goto L_00223AB8;
    case 406u: goto L_00223ACC;
    case 407u: goto L_00223AE0;
    case 408u: goto L_00223AF8;
    case 409u: goto L_00223B0C;
    case 410u: goto L_00223B20;
    case 411u: goto L_00223B38;
    case 412u: goto L_00223B4C;
    case 413u: goto L_00223B60;
    case 414u: goto L_00223B78;
    case 415u: goto L_00223B8C;
    case 416u: goto L_00223BA0;
    case 417u: goto L_00223BB8;
    case 418u: goto L_00223BCC;
    case 419u: goto L_00223BE0;
    case 420u: goto L_00223BF8;
    case 421u: goto L_00223C0C;
    case 422u: goto L_00223C20;
    case 423u: goto L_00223C38;
    case 424u: goto L_00223C4C;
    case 425u: goto L_00223C60;
    case 426u: goto L_00223C78;
    case 427u: goto L_00223C8C;
    case 428u: goto L_00223CA0;
    case 429u: goto L_00223CB8;
    case 430u: goto L_00223CCC;
    case 431u: goto L_00223CE0;
    case 432u: goto L_00223CF8;
    case 433u: goto L_00223D0C;
    case 434u: goto L_00223D20;
    case 435u: goto L_00223D38;
    case 436u: goto L_00223D4C;
    case 437u: goto L_00223D60;
    case 438u: goto L_00223D78;
    case 439u: goto L_00223D8C;
    case 440u: goto L_00223DA0;
    case 441u: goto L_00223DB8;
    case 442u: goto L_00223DCC;
    case 443u: goto L_00223DE0;
    case 444u: goto L_00223DF8;
    case 445u: goto L_00223E0C;
    case 446u: goto L_00223E20;
    case 447u: goto L_00223E38;
    case 448u: goto L_00223E4C;
    case 449u: goto L_00223E60;
    case 450u: goto L_00223E78;
    case 451u: goto L_00223E8C;
    case 452u: goto L_00223EA0;
    case 453u: goto L_00223EB8;
    case 454u: goto L_00223ECC;
    case 455u: goto L_00223EE0;
    case 456u: goto L_00223EF8;
    case 457u: goto L_00223F0C;
    case 458u: goto L_00223F20;
    case 459u: goto L_00223F38;
    case 460u: goto L_00223F4C;
    case 461u: goto L_00223F60;
    case 462u: goto L_00223F78;
    case 463u: goto L_00223F8C;
    case 464u: goto L_00223FA0;
    case 465u: goto L_00223FBC;
    case 466u: goto L_00223FCC;
    case 467u: goto L_00223FD8;
    case 468u: goto L_00223FE4;
    case 469u: goto L_00223FF4;
    default: bad_entry(c, 0x00220000u); return;
    }
L_00220000:
    c.budget -= 1;
L_00220004:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220010u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 243u, depth + 1u); else { c.pc = 0x0021A2B0u; return; } if (c.pc != 0x00220010u) [[unlikely]] return; }
L_00220010:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00220028; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220028u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 279u, depth + 1u); else { c.pc = 0x0021A720u; return; } if (c.pc != 0x00220028u) [[unlikely]] return; }
L_00220028:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 1;
L_0022002C:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002200F0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 2;
L_00220044:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  goto L_00220058; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00220060; } }
L_00220058:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 2;
L_00220060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002200F0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220074u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 249u, depth + 1u); else { c.pc = 0x0021A380u; return; } if (c.pc != 0x00220074u) [[unlikely]] return; }
L_00220074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002200F0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022008Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 284u, depth + 1u); else { c.pc = 0x0021A7E0u; return; } if (c.pc != 0x0022008Cu) [[unlikely]] return; }
L_0022008C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002200F0; } }
L_00220094:
    set32(c.r[4], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002200F0; } }
    c.r[2].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 44u)));  goto L_002200BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002200C4; } }
L_002200BC:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_002200C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002200F0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002200D8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 255u, depth + 1u); else { c.pc = 0x0021A450u; return; } if (c.pc != 0x002200D8u) [[unlikely]] return; }
L_002200D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002200F0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002200F0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 288u, depth + 1u); else { c.pc = 0x0021A880u; return; } if (c.pc != 0x002200F0u) [[unlikely]] return; }
L_002200F0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002200F4:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FFA0u | kUnwind; return; } [[clang::musttail]] return unit_003F(c, 313u, depth); }
    goto L_00220108;
L_00220104:
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 1;
L_00220108:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0022010C:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FF18u | kUnwind; return; } [[clang::musttail]] return unit_003F(c, 310u, depth); }
    set32(c.r[4], ld32((c.r[16].w[0] + 200u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220134u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 34u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x00220134u) [[unlikely]] return; }
L_00220134:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 200u)));  goto L_00220144; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00220170; } }
L_00220144:
    set32(c.r[5], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220150u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0040(c, 34u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x00220150u) [[unlikely]] return; }
L_00220150:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_00220160; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00220170; } }
L_00220160:
    set32(c.r[5], c.r[16].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022016Cu); set32(c.r[4], c.r[4].w[0] + 31840u);  if (depth < kMaxDepth) unit_0014(c, 186u, depth + 1u); else { c.pc = 0x001717F0u; return; } if (c.pc != 0x0022016Cu) [[unlikely]] return; }
L_0022016C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00220170:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00220174:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00220190:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[5], c.r[5].w[0] + 18712u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48530000u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 11;
L_002201BC:
    c.r[3].d[0] = c.r[2].d[0] | 16961ull;
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), 0u);  c.pc = t; return; }
L_002201E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00220244; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 18712u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022020Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0040(c, 31u, depth + 1u); else { c.pc = 0x00220330u; return; } if (c.pc != 0x0022020Cu) [[unlikely]] return; }
L_0022020C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_00220230; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_00220230:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00220248; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220244u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00220244u) [[unlikely]] return; }
L_00220244:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00220248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00220260:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = c.r[19].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00220298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00220304; } }
L_00220298:
    set32(c.r[16], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 16u)));  goto L_002202BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002202ACu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002202ACu) [[unlikely]] return; }
L_002202AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_002202DC; } }
L_002202B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 2;
L_002202BC:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002202B4u | kUnwind; return; } goto L_002202B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002202D8u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002202D8u) [[unlikely]] return; }
L_002202D8:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 1;
L_002202DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0]), c.r[19].w[0]);  goto L_002202F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00220304; } }
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_002202F0:
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
L_00220304:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00220330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  if (t) { goto L_00220358; } }
L_0022034C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220354u); set32(c.r[16], ld32((c.r[4].w[0] + 16u)));  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00220354u) [[unlikely]] return; }
L_00220354:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00220358:
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022034Cu | kUnwind; return; } goto L_0022034C; } }
    st32((c.r[17].w[0] + 20u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00220380:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] != 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002203B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0022044C; } }
L_002203B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[5].w[0] + 76u);  if (t) { goto L_00220440; } }
L_002203B8:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_002203D0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 16u)));  goto L_00220440; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002203D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022043C; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002203F4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 39u, depth + 1u); else { c.pc = 0x00220490u; return; } if (c.pc != 0x002203F4u) [[unlikely]] return; }
L_002203F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022043C; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022040Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x0022040Cu) [[unlikely]] return; }
L_0022040C:
    set32(c.r[4], c.r[2].w[0] + 76u);
    set32(c.r[3], 0u - 64u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[3].w[0] - 4u), c.r[2].w[0]);
    st32((c.r[3].w[0] - 12u), c.r[17].w[0]);
    set32(c.r[2], c.r[3].w[0] - 12u);
    st32((c.r[3].w[0] - 8u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 12u);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0022044C; } }
L_0022043C:
    set32(c.r[17], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_00220440:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002203B8u | kUnwind; return; } goto L_002203B8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022044C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00220470:
    set32(c.r[3], ld32((c.r[5].w[0] - 12u)));
    set32(c.r[6], ld32((c.r[5].w[0] - 8u)));
    set32(c.r[4], ld32((c.r[5].w[0] - 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 8;
    { st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00171CA0u | kUnwind; return; } [[clang::musttail]] return unit_0014(c, 222u, depth); }
L_00220490:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002204B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 252u, depth + 1u); else { c.pc = 0x001721D0u; return; } if (c.pc != 0x002204B0u) [[unlikely]] return; }
L_002204B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002204D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 4099u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002204E8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x002204E8u) [[unlikely]] return; }
L_002204E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[16].w[0] + 608u);
    set32(c.r[2], c.r[2].w[0] + 18736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002204FCu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 44u, depth + 1u); else { c.pc = 0x00210980u; return; } if (c.pc != 0x002204FCu) [[unlikely]] return; }
L_002204FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[16].w[0] + 960u);
    set32(c.r[5], c.r[5].w[0] + 1408u);
    set32(c.r[6], c.r[6].w[0] - 7920u);
    set32(c.r[7], 0u + 160u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022051Cu); set32(c.r[8], 0u + 11u);  if (depth < kMaxDepth) unit_0008(c, 147u, depth + 1u); else { c.pc = 0x00141CB0u; return; } if (c.pc != 0x0022051Cu) [[unlikely]] return; }
L_0022051C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[16].w[0] + 2720u);
    set32(c.r[5], c.r[5].w[0] + 1408u);
    set32(c.r[6], c.r[6].w[0] - 7920u);
    set32(c.r[7], 0u + 160u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022053Cu); set32(c.r[8], 0u + 11u);  if (depth < kMaxDepth) unit_0008(c, 147u, depth + 1u); else { c.pc = 0x00141CB0u; return; } if (c.pc != 0x0022053Cu) [[unlikely]] return; }
L_0022053C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220544u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 58u, depth + 1u); else { c.pc = 0x00220640u; return; } if (c.pc != 0x00220544u) [[unlikely]] return; }
L_00220544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022054Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 104u, depth + 1u); else { c.pc = 0x00220BD0u; return; } if (c.pc != 0x0022054Cu) [[unlikely]] return; }
L_0022054C:
    set32(c.r[4], 0u + 276u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220558u); st32((c.r[16].w[0] + 4544u), 0u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00220558u) [[unlikely]] return; }
L_00220558:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 4556u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022056Cu); set32(c.r[5], c.r[5].w[0] + 31904u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x0022056Cu) [[unlikely]] return; }
L_0022056C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00220580:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020DFF0u | kUnwind; return; } [[clang::musttail]] return unit_003B(c, 216u, depth); }
L_00220590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022061C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 18736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002205BCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0040(c, 61u, depth + 1u); else { c.pc = 0x002206C0u; return; } if (c.pc != 0x002205BCu) [[unlikely]] return; }
L_002205BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[17].w[0] + 2720u);
    set32(c.r[5], c.r[5].w[0] - 7920u);
    set32(c.r[6], 0u + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002205D4u); set32(c.r[7], 0u + 11u);  if (depth < kMaxDepth) unit_0008(c, 144u, depth + 1u); else { c.pc = 0x00141C40u; return; } if (c.pc != 0x002205D4u) [[unlikely]] return; }
L_002205D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[17].w[0] + 960u);
    set32(c.r[5], c.r[5].w[0] - 7920u);
    set32(c.r[6], 0u + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002205ECu); set32(c.r[7], 0u + 11u);  if (depth < kMaxDepth) unit_0008(c, 144u, depth + 1u); else { c.pc = 0x00141C40u; return; } if (c.pc != 0x002205ECu) [[unlikely]] return; }
L_002205EC:
    set32(c.r[4], c.r[17].w[0] + 608u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002205F8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003C(c, 46u, depth + 1u); else { c.pc = 0x002109D0u; return; } if (c.pc != 0x002205F8u) [[unlikely]] return; }
L_002205F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220604u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x00220604u) [[unlikely]] return; }
L_00220604:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00220620; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022061Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0022061Cu) [[unlikely]] return; }
L_0022061C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00220620:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00220640:
    st32((c.r[4].w[0] + 148u), 0u);
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 152u), 0u);
    st32((c.r[4].w[0] + 156u), 0u);
    st32((c.r[4].w[0] + 160u), 0u);
    st32((c.r[4].w[0] + 4560u), 0u);
    st32((c.r[4].w[0] + 4496u), 0u);
    st32((c.r[4].w[0] + 4508u), 0u);
    set32(c.r[3], c.r[9].w[0] << 2);
    c.budget -= 9;
L_00220664:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[7].w[0] + 960u);
    set32(c.r[3], c.r[7].w[0] + 2720u);
    st32((c.r[6].w[0] + 168u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 172u), c.r[3].w[0]);
    c.budget -= 10;
L_0022068C:
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[3].w[0] + 176u), 0u);
    c.r[3].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022068Cu | kUnwind; return; } goto L_0022068C; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[9].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00220664u | kUnwind; return; } goto L_00220664; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002206C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
L_002206D8:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 152u)));  goto L_00220704; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002206FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002206FCu) [[unlikely]] return; }
L_002206FC:
    st32((c.r[19].w[0] + 148u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 152u)));
    c.budget -= 2;
L_00220704:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 160u)));  goto L_00220724; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022071Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022071Cu) [[unlikely]] return; }
L_0022071C:
    st32((c.r[19].w[0] + 152u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 160u)));
    c.budget -= 2;
L_00220724:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 4496u)));  goto L_00220744; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022073Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022073Cu) [[unlikely]] return; }
L_0022073C:
    st32((c.r[19].w[0] + 160u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 4496u)));
    c.budget -= 2;
L_00220744:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 4560u)));  goto L_00220764; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022075Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022075Cu) [[unlikely]] return; }
L_0022075C:
    st32((c.r[19].w[0] + 4496u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 4560u)));
    c.budget -= 2;
L_00220764:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 156u)));  goto L_00220784; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022077Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022077Cu) [[unlikely]] return; }
L_0022077C:
    st32((c.r[19].w[0] + 4560u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 156u)));
    c.budget -= 2;
L_00220784:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0022079C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220794u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x00220794u) [[unlikely]] return; }
L_00220794:
    st32((c.r[19].w[0] + 156u), 0u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0022079C:
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 1;
L_002207A0:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 5;
L_002207B4:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 176u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[20], c.r[2].w[0] + 176u);  if (t) { goto L_002207E0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0]), 0u);  goto L_002207E0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002207DCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002207DCu) [[unlikely]] return; }
L_002207DC:
    st32((c.r[20].w[0]), 0u);
    c.budget -= 1;
L_002207E0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002207B4u | kUnwind; return; } goto L_002207B4; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002207A0u | kUnwind; return; } goto L_002207A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220808u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 90u, depth + 1u); else { c.pc = 0x00220A40u; return; } if (c.pc != 0x00220808u) [[unlikely]] return; }
L_00220808:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.budget -= 7;
L_00220824:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00220840:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 4544u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_0022086C; } }
    goto L_00220858;
L_00220854:
    c.r[8].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 1;
L_00220858:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4520u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[8].d[0];  if (t) { goto L_00220878; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0022086C:
    c.r[3].d[0] = c.r[9].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[9].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00220858u | kUnwind; return; } goto L_00220858; }
L_00220878:
    c.budget -= 2;
    if (c.r[9].d[0] != c.r[7].d[0]) { set32(c.r[3], c.r[9].w[0] << 2);  goto L_002208AC; }
    c.r[3].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4544u)));  goto L_002208A0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220898u); set32(c.r[5], c.r[5].w[0] + 32076u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00220898u) [[unlikely]] return; }
    goto L_00220898;
L_00220894:
    set32(c.r[5], c.r[5].w[0] + 32076u);
    c.budget -= 1;
L_00220898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002208BC; } }
L_002208A0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4544u), c.r[3].w[0]);
    set32(c.r[3], c.r[9].w[0] << 2);
    c.budget -= 3;
L_002208AC:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 4520u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[3].w[0] + 4522u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_002208BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002208D0:
    set32(c.r[7], ld32((c.r[4].w[0] + 4544u)));
    c.r[8].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_00220938; } }
L_002208E0:
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[6].w[0] + 4520u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[8].d[0]; set32(c.r[5], c.r[6].w[0] + 4520u);  if (t) { goto L_00220934; } }
    set32(c.r[3], c.r[7].w[0] - 1u);
    c.r[1].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4544u)));  goto L_00220928; }
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4516u));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 4544u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4518u));
    st16((c.r[6].w[0] + 4522u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 4544u)));
    c.budget -= 10;
L_00220928:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4544u), c.r[3].w[0]);  if (t) { goto L_00220944; } }
L_00220934:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_00220938:
    c.r[3].d[0] = c.r[9].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[9].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002208E0u | kUnwind; return; } goto L_002208E0; }
L_00220944:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00220950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022096Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0022096Cu) [[unlikely]] return; }
L_0022096C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 4544u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00220998; } }
L_0022097C:
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 4520u));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_00220998; }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 4522u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002209A4; } }
L_00220998:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022097Cu | kUnwind; return; } goto L_0022097C; }
L_002209A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4556u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002209B0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_002C(c, 458u, depth + 1u); else { c.pc = 0x001D3E90u; return; } if (c.pc != 0x002209B0u) [[unlikely]] return; }
L_002209B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002209C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4556u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002209E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002209DCu);  if (depth < kMaxDepth) unit_002D(c, 12u, depth + 1u); else { c.pc = 0x001D4200u; return; } if (c.pc != 0x002209DCu) [[unlikely]] return; }
L_002209DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002209E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002209F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220A0Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 90u, depth + 1u); else { c.pc = 0x00220A40u; return; } if (c.pc != 0x00220A0Cu) [[unlikely]] return; }
L_00220A0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220A1Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 529u, depth + 1u); else { c.pc = 0x001B7F40u; return; } if (c.pc != 0x00220A1Cu) [[unlikely]] return; }
L_00220A1C:
    st32((c.r[17].w[0] + 4508u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00220A40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4508u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00220A6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220A64u);  if (depth < kMaxDepth) unit_0025(c, 530u, depth + 1u); else { c.pc = 0x001B7F60u; return; } if (c.pc != 0x00220A64u) [[unlikely]] return; }
L_00220A64:
    st32((c.r[16].w[0] + 4508u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_00220A6C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00220A80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4556u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220AA0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 9u, depth + 1u); else { c.pc = 0x001D4160u; return; } if (c.pc != 0x00220AA0u) [[unlikely]] return; }
L_00220AA0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4556u)));  goto L_00220AB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00220AC4; } }
L_00220AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220AB8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 9u, depth + 1u); else { c.pc = 0x001D4160u; return; } if (c.pc != 0x00220AB8u) [[unlikely]] return; }
L_00220AB8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00220AC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00220AE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[6], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 152u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220B0Cu); set32(c.r[4], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00220B0Cu) [[unlikely]] return; }
L_00220B0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[29].w[0] + 68u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220B28u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00220B28u) [[unlikely]] return; }
L_00220B28:
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[29].w[0] + 60u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220B44u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00220B44u) [[unlikely]] return; }
L_00220B44:
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[29].w[0] + 52u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220B60u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00220B60u) [[unlikely]] return; }
L_00220B60:
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[29].w[0] + 44u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220B7Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00220B7Cu) [[unlikely]] return; }
L_00220B7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[29].w[0] + 36u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220B98u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00220B98u) [[unlikely]] return; }
L_00220B98:
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220BA8u); set32(c.r[4], ld32((c.r[2].w[0] + 20u)));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00220BA8u) [[unlikely]] return; }
L_00220BA8:
    set32(c.r[4], c.r[16].w[0] + 608u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220BB4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 412u, depth + 1u); else { c.pc = 0x0020BFA0u; return; } if (c.pc != 0x00220BB4u) [[unlikely]] return; }
L_00220BB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00220BD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 8;
L_00220BF0:
    set32(c.r[4], c.r[16].w[0] + 608u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220C08u); set32(c.r[5], c.r[17].w[0] + 960u);  if (depth < kMaxDepth) unit_003C(c, 64u, depth + 1u); else { c.pc = 0x00210D10u; return; } if (c.pc != 0x00220C08u) [[unlikely]] return; }
L_00220C08:
    set32(c.r[5], c.r[17].w[0] + 2720u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220C14u); set32(c.r[4], c.r[16].w[0] + 608u);  if (depth < kMaxDepth) unit_003C(c, 64u, depth + 1u); else { c.pc = 0x00210D10u; return; } if (c.pc != 0x00220C14u) [[unlikely]] return; }
L_00220C14:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00220BF0u | kUnwind; return; } goto L_00220BF0; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00220C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_00220C58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220C64u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 112u, depth + 1u); else { c.pc = 0x00220C90u; return; } if (c.pc != 0x00220C64u) [[unlikely]] return; }
L_00220C64:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00220C58u | kUnwind; return; } goto L_00220C58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220C7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 188u, depth + 1u); else { c.pc = 0x00221570u; return; } if (c.pc != 0x00220C7Cu) [[unlikely]] return; }
L_00220C7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00220C90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[18].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 168u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220CD0u); set32(c.r[16], c.r[2].w[0] + 164u);  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x00220CD0u) [[unlikely]] return; }
L_00220CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220CD8u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x00220CD8u) [[unlikely]] return; }
L_00220CD8:
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 3;
L_00220CE4:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[20], c.r[3].w[0] + 12u);  if (t) { goto L_00220D10; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0]), 0u);  goto L_00220D10; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00220D0Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00220D0Cu) [[unlikely]] return; }
L_00220D0C:
    st32((c.r[20].w[0]), 0u);
    c.budget -= 1;
L_00220D10:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00220D14:
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00220CE4u | kUnwind; return; } goto L_00220CE4; }
    set32(c.r[3], ld32((c.r[19].w[0] + 4488u)));
    set32(c.r[4], c.r[18].w[0] - 5u);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    if (c.r[17].sd[0] < 0) { st32((c.r[16].w[0]), 0u);  goto L_00220D4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220D3Cu); set32(c.r[4], ld32((c.r[19].w[0] + 4556u)));  if (depth < kMaxDepth) unit_002D(c, 8u, depth + 1u); else { c.pc = 0x001D4130u; return; } if (c.pc != 0x00220D3Cu) [[unlikely]] return; }
L_00220D3C:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 4556u)));  goto L_00220D54; }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00220D4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), 0u);  if (t) { goto L_0022130C; } }
L_00220D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220D5Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 9u, depth + 1u); else { c.pc = 0x001D4160u; return; } if (c.pc != 0x00220D5Cu) [[unlikely]] return; }
L_00220D5C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_00220E14; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_00220D80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_00220E70; } }
L_00220D80:
    set32(c.r[5], ld32((c.r[19].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220D8Cu); set32(c.r[6], 0u + 41u);  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x00220D8Cu) [[unlikely]] return; }
L_00220D8C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0] + 156u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220DA0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_003C(c, 100u, depth + 1u); else { c.pc = 0x00211210u; return; } if (c.pc != 0x00220DA0u) [[unlikely]] return; }
L_00220DA0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 156u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220DB0u); set32(c.r[6], 0u + 40u);  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x00220DB0u) [[unlikely]] return; }
L_00220DB0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00220E6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220DC8u); set32(c.r[4], 0u + 384u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00220DC8u) [[unlikely]] return; }
L_00220DC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  goto L_00220DE4; }
    set32(c.r[3], ld32((c.r[19].w[0] + 4496u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220DE0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 125u, depth + 1u); else { c.pc = 0x0020D1A0u; return; } if (c.pc != 0x00220DE0u) [[unlikely]] return; }
L_00220DE0:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 1;
L_00220DE4:
    set32(c.r[2], ld32((c.r[19].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220DF4u); set32(c.r[4], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00220DF4u) [[unlikely]] return; }
L_00220DF4:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220E00u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 412u, depth + 1u); else { c.pc = 0x0020BFA0u; return; } if (c.pc != 0x00220E00u) [[unlikely]] return; }
L_00220E00:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220E0Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_003B(c, 136u, depth + 1u); else { c.pc = 0x0020D320u; return; } if (c.pc != 0x00220E0Cu) [[unlikely]] return; }
L_00220E0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00220E6C; } }
L_00220E14:
    set32(c.r[5], ld32((c.r[19].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220E20u); set32(c.r[6], 0u + 43u);  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x00220E20u) [[unlikely]] return; }
L_00220E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220E28u); set32(c.r[4], 0u + 384u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00220E28u) [[unlikely]] return; }
L_00220E28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  goto L_00220E44; }
    set32(c.r[3], ld32((c.r[19].w[0] + 4496u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220E40u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 125u, depth + 1u); else { c.pc = 0x0020D1A0u; return; } if (c.pc != 0x00220E40u) [[unlikely]] return; }
L_00220E40:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_00220E44:
    set32(c.r[2], ld32((c.r[19].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220E54u); set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00220E54u) [[unlikely]] return; }
L_00220E54:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220E60u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 412u, depth + 1u); else { c.pc = 0x0020BFA0u; return; } if (c.pc != 0x00220E60u) [[unlikely]] return; }
L_00220E60:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220E6Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_003B(c, 136u, depth + 1u); else { c.pc = 0x0020D320u; return; } if (c.pc != 0x00220E6Cu) [[unlikely]] return; }
L_00220E6C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_00220E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220E78u);  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x00220E78u) [[unlikely]] return; }
L_00220E78:
    st32((c.r[29].w[0] + 124u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 120u);  goto L_00220FA0; }
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220E98u); set32(c.r[4], ld32((c.r[19].w[0] + 4556u)));  if (depth < kMaxDepth) unit_002D(c, 7u, depth + 1u); else { c.pc = 0x001D40E0u; return; } if (c.pc != 0x00220E98u) [[unlikely]] return; }
L_00220E98:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  goto L_00220F28; }
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00220EC8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00220EC8; } }
L_00220EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220EC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00220EC8u) [[unlikely]] return; }
L_00220EC8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[29].w[0] + 124u), 0u);  goto L_0022110C; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00220F1C; } }
    goto L_00220EDC;
L_00220ED8:
    c.budget -= 1;
L_00220EDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220EE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00220EE4u) [[unlikely]] return; }
L_00220EE4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00220F10; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00220F00; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00220F10; } }
L_00220F00:
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220F10u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x00220F10u) [[unlikely]] return; }
L_00220F10:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022110C; } }
L_00220F1C:
    st32((c.r[29].w[0] + 124u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022110C; } }
L_00220F28:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00220F48; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00220F48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220F48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00220F48u) [[unlikely]] return; }
L_00220F48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 32096u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 124u), 0u);  goto L_0022110C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220F64u); set32(c.r[4], c.r[4].w[0] + 32096u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00220F64u) [[unlikely]] return; }
L_00220F64:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 32096u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00220F94; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[29].w[0] + 124u);  goto L_00220F88; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00220F94; } }
L_00220F88:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220F94u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x00220F94u) [[unlikely]] return; }
L_00220F94:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022110C; } }
L_00220FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220FA8u);  if (depth < kMaxDepth) unit_0037(c, 420u, depth + 1u); else { c.pc = 0x001FF5A0u; return; } if (c.pc != 0x00220FA8u) [[unlikely]] return; }
L_00220FA8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220FB8u); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0037(c, 421u, depth + 1u); else { c.pc = 0x001FF5B0u; return; } if (c.pc != 0x00220FB8u) [[unlikely]] return; }
L_00220FB8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220FC8u); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0037(c, 422u, depth + 1u); else { c.pc = 0x001FF5C0u; return; } if (c.pc != 0x00220FC8u) [[unlikely]] return; }
L_00220FC8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00220FE0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00220FE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0022101C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220FF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00220FF0u) [[unlikely]] return; }
L_00220FF0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0022101C; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_0022100C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022101C; } }
L_0022100C:
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022101Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x0022101Cu) [[unlikely]] return; }
L_0022101C:
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 116u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221030u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 135u, depth + 1u); else { c.pc = 0x001E10E0u; return; } if (c.pc != 0x00221030u) [[unlikely]] return; }
L_00221030:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 31912u)));  goto L_00221040; }
    set32(c.r[17], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_00221040:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00221064; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00221064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221064u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00221064u) [[unlikely]] return; }
L_00221064:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[29].w[0] + 124u), 0u);  goto L_002210BC; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002210B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221080u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00221080u) [[unlikely]] return; }
L_00221080:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002210AC; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_0022109C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002210AC; } }
L_0022109C:
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002210ACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x002210ACu) [[unlikely]] return; }
L_002210AC:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 112u)));  if (t) { goto L_002210C0; } }
L_002210B8:
    st32((c.r[29].w[0] + 124u), 0u);
    c.budget -= 1;
L_002210BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 1;
L_002210C0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 116u)));  goto L_002210E8; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002210E4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002210E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002210E4u) [[unlikely]] return; }
L_002210E4:
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 1;
L_002210E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022110C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0022110C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022110Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0022110Cu) [[unlikely]] return; }
L_0022110C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 124u)));  goto L_002212C4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 32121u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0022116C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022113Cu); set32(c.r[4], c.r[4].w[0] + 32121u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x0022113Cu) [[unlikely]] return; }
L_0022113C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 32121u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0022116C; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[29].w[0] + 108u);  goto L_00221160; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022116C; } }
L_00221160:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022116Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x0022116Cu) [[unlikely]] return; }
L_0022116C:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221180u); set32(c.r[6], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0021(c, 352u, depth + 1u); else { c.pc = 0x001A7E70u; return; } if (c.pc != 0x00221180u) [[unlikely]] return; }
L_00221180:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 32126u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002211CC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022119Cu); set32(c.r[4], c.r[4].w[0] + 32126u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x0022119Cu) [[unlikely]] return; }
L_0022119C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 32126u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002211CC; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[29].w[0] + 100u);  goto L_002211C0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002211CC; } }
L_002211C0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002211CCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x002211CCu) [[unlikely]] return; }
L_002211CC:
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002211E0u); set32(c.r[6], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_0021(c, 352u, depth + 1u); else { c.pc = 0x001A7E70u; return; } if (c.pc != 0x002211E0u) [[unlikely]] return; }
L_002211E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 96u)));  goto L_00221208; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00221204; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221204u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00221204u) [[unlikely]] return; }
L_00221204:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 1;
L_00221208:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 96u)));  goto L_00221220; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 4;
L_00221220:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (t) { goto L_00221248; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00221248; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221248u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00221248u) [[unlikely]] return; }
L_00221248:
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_00221274; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00221270; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221270u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00221270u) [[unlikely]] return; }
L_00221270:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_00221274:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 108u)));  goto L_0022129C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00221298; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221298u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00221298u) [[unlikely]] return; }
L_00221298:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_0022129C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002212C0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002212C0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002212C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002212C0u) [[unlikely]] return; }
L_002212C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 1;
L_002212C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_002212D0; }
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_002212D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002212D8u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_003B(c, 314u, depth + 1u); else { c.pc = 0x0020FC40u; return; } if (c.pc != 0x002212D8u) [[unlikely]] return; }
L_002212D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002212E0u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_003B(c, 246u, depth + 1u); else { c.pc = 0x0020E6A0u; return; } if (c.pc != 0x002212E0u) [[unlikely]] return; }
L_002212E0:
    st32((c.r[16].w[0] + 24u), c.f[0]);
    st32((c.r[16].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00221310; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0022130C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022130Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0022130Cu) [[unlikely]] return; }
L_0022130C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00221310:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00221330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00221434; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  goto L_00221368; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00221438; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_00221368:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  goto L_002213CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221378u); set32(c.r[4], 0u + 384u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00221378u) [[unlikely]] return; }
L_00221378:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  goto L_00221394; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4496u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221390u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 125u, depth + 1u); else { c.pc = 0x0020D1A0u; return; } if (c.pc != 0x00221390u) [[unlikely]] return; }
L_00221390:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_00221394:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002213A4u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x002213A4u) [[unlikely]] return; }
L_002213A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002213B0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 412u, depth + 1u); else { c.pc = 0x0020BFA0u; return; } if (c.pc != 0x002213B0u) [[unlikely]] return; }
L_002213B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002213BCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 136u, depth + 1u); else { c.pc = 0x0020D320u; return; } if (c.pc != 0x002213BCu) [[unlikely]] return; }
L_002213BC:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002213C8u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_003B(c, 144u, depth + 1u); else { c.pc = 0x0020D3F0u; return; } if (c.pc != 0x002213C8u) [[unlikely]] return; }
L_002213C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_002213CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[3].w[0] + 348u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st16((c.r[4].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x41700000u);  goto L_00221428; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002213F8u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_003B(c, 136u, depth + 1u); else { c.pc = 0x0020D320u; return; } if (c.pc != 0x002213F8u) [[unlikely]] return; }
L_002213F8:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221404u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_003B(c, 144u, depth + 1u); else { c.pc = 0x0020D3F0u; return; } if (c.pc != 0x00221404u) [[unlikely]] return; }
L_00221404:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st16((c.r[4].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st16((c.r[4].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.budget -= 9;
L_00221428:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 3;
L_00221434:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00221438:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00221450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 2;
L_00221458:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00221554; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  goto L_00221488; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00221558; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_00221488:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  goto L_002214F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221498u); set32(c.r[4], 0u + 384u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00221498u) [[unlikely]] return; }
L_00221498:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  goto L_002214B4; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4496u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002214B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 125u, depth + 1u); else { c.pc = 0x0020D1A0u; return; } if (c.pc != 0x002214B0u) [[unlikely]] return; }
L_002214B0:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_002214B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002214C4u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x002214C4u) [[unlikely]] return; }
L_002214C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002214D0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 412u, depth + 1u); else { c.pc = 0x0020BFA0u; return; } if (c.pc != 0x002214D0u) [[unlikely]] return; }
L_002214D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002214DCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 136u, depth + 1u); else { c.pc = 0x0020D320u; return; } if (c.pc != 0x002214DCu) [[unlikely]] return; }
L_002214DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002214ECu); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_003B(c, 144u, depth + 1u); else { c.pc = 0x0020D3F0u; return; } if (c.pc != 0x002214ECu) [[unlikely]] return; }
L_002214EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_002214F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    st32((c.r[3].w[0] + 348u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st16((c.r[4].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);  goto L_0022154C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022151Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_003B(c, 136u, depth + 1u); else { c.pc = 0x0020D320u; return; } if (c.pc != 0x0022151Cu) [[unlikely]] return; }
L_0022151C:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221528u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_003B(c, 144u, depth + 1u); else { c.pc = 0x0020D3F0u; return; } if (c.pc != 0x00221528u) [[unlikely]] return; }
L_00221528:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st16((c.r[4].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st16((c.r[4].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.budget -= 9;
L_0022154C:
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 2;
L_00221554:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00221558:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00221570:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43640000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], 0u + 4u);
    st32((c.r[4].w[0] + 392u), c.r[2].w[0]);
    c.budget -= 9;
L_00221594:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[6], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002215B4u); set32(c.r[18], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0040(c, 195u, depth + 1u); else { c.pc = 0x002216E0u; return; } if (c.pc != 0x002215B4u) [[unlikely]] return; }
L_002215B4:
    c.f[1] = ld32((c.r[18].w[0] + 232u));
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; st32((c.r[18].w[0] + 192u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221594u | kUnwind; return; } goto L_00221594; } }
    set32(c.r[16], 0u + 6u);
    c.budget -= 1;
L_002215CC:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002215ECu); set32(c.r[18], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0040(c, 195u, depth + 1u); else { c.pc = 0x002216E0u; return; } if (c.pc != 0x002215ECu) [[unlikely]] return; }
L_002215EC:
    c.f[1] = ld32((c.r[18].w[0] + 152u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 11ll ? 1ull : 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[18].w[0] + 192u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002215CCu | kUnwind; return; } goto L_002215CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43640000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[2] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[3], c.r[8].w[0] << 2);
    c.budget -= 7;
L_00221620:
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 168u)));
    c.f[0] = ld32((c.r[7].w[0] + 192u));
    st32((c.r[3].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 192u));
    set32(c.r[3], ld32((c.r[7].w[0] + 172u)));
    st32((c.r[3].w[0] + 40u), c.f[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 176u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], c.r[7].w[0] + 192u);  if (t) { goto L_00221668; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 1;
L_00221654:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 212u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    c.budget -= 5;
L_00221668:
    set32(c.r[4], ld32((c.r[7].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[7].w[0] + 180u)));  goto L_00221690; }
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 212u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 180u)));
    c.budget -= 7;
L_00221690:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002216B4; }
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 212u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 7;
L_002216B4:
    c.r[3].d[0] = c.r[8].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00221620u | kUnwind; return; } goto L_00221620; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002216E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.f[20] = 0u;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00221758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00221744; } }
L_00221718:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 204u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221734u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 200u, depth + 1u); else { c.pc = 0x002217C0u; return; } if (c.pc != 0x00221734u) [[unlikely]] return; }
L_00221734:
    c.f[1] = ld32((c.r[19].w[0] + 188u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 4;
L_00221744:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00221718u | kUnwind; return; } goto L_00221718; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[20];  if (t) { goto L_0022179C; } }
L_00221758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022178C; } }
L_00221760:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022177Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 200u, depth + 1u); else { c.pc = 0x002217C0u; return; } if (c.pc != 0x0022177Cu) [[unlikely]] return; }
L_0022177C:
    c.f[1] = ld32((c.r[16].w[0] + 148u));
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[20] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 4;
L_0022178C:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00221760u | kUnwind; return; } goto L_00221760; }
    c.f[0] = c.f[20];
    c.budget -= 1;
L_0022179C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002217C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002217D4; } }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));  goto L_002217E0; }
L_002217D4:
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00221884; } }
L_002217E0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00221820; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00221820; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41D80000u);  goto L_00221814; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00221818; } }
L_00221814:
    c.f[0] = c.r[2].w[0];
    c.budget -= 1;
L_00221818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00221880; } }
L_00221820:
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0022184C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00221848; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42540000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00221880; } }
L_00221848:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0022184C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_00221870; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00221870; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D80000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00221880; } }
L_00221870:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022187Cu); set32(c.r[5], c.r[5].w[0] + 32131u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0022187Cu) [[unlikely]] return; }
L_0022187C:
    c.f[0] = 0u;
    c.budget -= 1;
L_00221880:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00221884:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00221890:
    set32(c.r[29], c.r[29].w[0] - 528u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4488u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 4516u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 4512u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002218CC; } }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_002218CC:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { st32((c.r[16].w[0] + 4488u), c.r[3].w[0]);  goto L_002218E0; }
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[16].w[0] + 4488u), c.r[3].w[0]);
    c.budget -= 2;
L_002218E0:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { goto L_0022198C; } }
    set32(c.r[18], 0u - c.r[19].w[0]);
    set32(c.r[2], 0u + 11u);
    set32(c.r[17], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[19], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221920u); set32(c.r[5], c.r[2].w[0] + 164u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00221920u) [[unlikely]] return; }
L_00221920:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[6], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 164u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221948u); set32(c.r[4], c.r[2].w[0] + 164u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00221948u) [[unlikely]] return; }
L_00221948:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 164u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221958u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00221958u) [[unlikely]] return; }
L_00221958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00221970; } }
L_00221960:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022196Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 112u, depth + 1u); else { c.pc = 0x00220C90u; return; } if (c.pc != 0x0022196Cu) [[unlikely]] return; }
L_0022196C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00221970:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221960u | kUnwind; return; } goto L_00221960; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221984u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 188u, depth + 1u); else { c.pc = 0x00221570u; return; } if (c.pc != 0x00221984u) [[unlikely]] return; }
L_00221984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00221A30; } }
L_0022198C:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_00221A2C; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[5], c.r[16].w[0] + 164u);
    set32(c.r[18], c.r[2].w[0] << 3);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002219B0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002219B0u) [[unlikely]] return; }
L_002219B0:
    set32(c.r[3], 0u + 11u);
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[17], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[16].w[0] + 164u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[3].w[0] + 164u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002219E0u); set32(c.r[6], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002219E0u) [[unlikely]] return; }
L_002219E0:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221A00u); set32(c.r[4], c.r[2].w[0] + 164u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00221A00u) [[unlikely]] return; }
L_00221A00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00221A18; } }
L_00221A08:
    set32(c.r[5], c.r[17].w[0] + c.r[18].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221A14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 112u, depth + 1u); else { c.pc = 0x00220C90u; return; } if (c.pc != 0x00221A14u) [[unlikely]] return; }
L_00221A14:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00221A18:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221A08u | kUnwind; return; } goto L_00221A08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221A2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 188u, depth + 1u); else { c.pc = 0x00221570u; return; } if (c.pc != 0x00221A2Cu) [[unlikely]] return; }
L_00221A2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00221A30:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 528u);  c.pc = t; return; }
L_00221A50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00221C58; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 2;
L_00221A80:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 196u));
    c.f[0] = 0u;
    c.budget -= 5;
L_00221A94:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[16].w[0] + 196u);  if (t) { goto L_00221B74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00221AC0; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00221AD8; } }
L_00221AC0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_00221AD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[16].w[0] + 200u);
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.f[1] = ld32((c.r[16].w[0] + 196u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = 0u;
    c.f[2] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 196u), c.f[1]);  if (t) { goto L_00221B10; } }
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 1;
L_00221B10:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00221B48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    c.budget -= 4;
L_00221B48:
    set32(c.r[5], ld32((c.r[18].w[0] + 4504u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221B54u); set32(c.r[4], ld32((c.r[18].w[0] + 4500u)));  if (depth < kMaxDepth) unit_001D(c, 235u, depth + 1u); else { c.pc = 0x00196640u; return; } if (c.pc != 0x00221B54u) [[unlikely]] return; }
L_00221B54:
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 60u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221B74u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003B(c, 239u, depth + 1u); else { c.pc = 0x0020E490u; return; } if (c.pc != 0x00221B74u) [[unlikely]] return; }
L_00221B74:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00221A80u | kUnwind; return; } goto L_00221A80; }
    set32(c.r[2], ld32((c.r[18].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221B98u); c.f[20] = ld32((c.r[18].w[0] + 4492u));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00221B98u) [[unlikely]] return; }
L_00221B98:
    st32((c.r[2].w[0] + 212u), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 4560u)));  goto L_00221C10; }
    set32(c.r[3], ld32((c.r[18].w[0] + 4560u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00221C0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221BD0u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00221BD0u) [[unlikely]] return; }
L_00221BD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00221C0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221BE0u); set32(c.r[4], 0u + 132u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00221BE0u) [[unlikely]] return; }
L_00221BE0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 4560u), c.r[4].w[0]);  goto L_00221C00; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221BF8u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_00BF(c, 90u, depth + 1u); else { c.pc = 0x0041C9D0u; return; } if (c.pc != 0x00221BF8u) [[unlikely]] return; }
L_00221BF8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 4560u), c.r[4].w[0]);
    c.budget -= 2;
L_00221C00:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_00221C0C:
    set32(c.r[4], ld32((c.r[18].w[0] + 4560u)));
    c.budget -= 1;
L_00221C10:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00221C5C; }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00221C58; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  goto L_00221C4C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00221C44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00221C44u) [[unlikely]] return; }
L_00221C44:
    st32((c.r[18].w[0] + 4560u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 2;
L_00221C4C:
    set32(c.r[3], 0u - 1025u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_00221C58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00221C5C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00221C80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4544u)));
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00221DDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221CB8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x00221CB8u) [[unlikely]] return; }
L_00221CB8:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00221CEC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00221CEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221CECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00221CECu) [[unlikely]] return; }
L_00221CEC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 8u), 0u);  goto L_00221D3C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00221D38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221D08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x00221D08u) [[unlikely]] return; }
L_00221D08:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00221D18; } }
    c.budget -= 2;
    if (c.r[6].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00221D20; }
L_00221D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00221D30; } }
L_00221D20:
    set32(c.r[4], c.r[18].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221D2Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x00221D2Cu) [[unlikely]] return; }
L_00221D2C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00221D30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00221D3C; } }
L_00221D38:
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 1;
L_00221D3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00221DCC; } }
L_00221D44:
    set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);
    c.r[21].d[0] = ld16((c.r[17].w[0] + 4520u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221D54u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x00221D54u) [[unlikely]] return; }
L_00221D54:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00221D84; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00221D84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221D84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00221D84u) [[unlikely]] return; }
L_00221D84:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[17].d[0] = ld16((c.r[17].w[0] + 4522u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221D94u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x00221D94u) [[unlikely]] return; }
L_00221D94:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00221DC4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00221DC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221DC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00221DC4u) [[unlikely]] return; }
L_00221DC4:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_00221DCC:
    set32(c.r[3], ld32((c.r[20].w[0] + 4544u)));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00221D44u | kUnwind; return; } goto L_00221D44; }
L_00221DDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00221E00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00222244; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 32016u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00220000u < 16384u) { entry = entries_0040[(t - 0x00220000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00221E44:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00221E48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221E54u); st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0040(c, 61u, depth + 1u); else { c.pc = 0x002206C0u; return; } if (c.pc != 0x00221E54u) [[unlikely]] return; }
L_00221E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221E5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 58u, depth + 1u); else { c.pc = 0x00220640u; return; } if (c.pc != 0x00221E5Cu) [[unlikely]] return; }
L_00221E5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], 0u - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221E78u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00221E78u) [[unlikely]] return; }
L_00221E78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00222248; } }
L_00221E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221E88u);  if (depth < kMaxDepth) unit_0040(c, 61u, depth + 1u); else { c.pc = 0x002206C0u; return; } if (c.pc != 0x00221E88u) [[unlikely]] return; }
L_00221E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221E90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 58u, depth + 1u); else { c.pc = 0x00220640u; return; } if (c.pc != 0x00221E90u) [[unlikely]] return; }
L_00221E90:
    set32(c.r[2], ld32((c.r[16].w[0] + 4556u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00221E48u | kUnwind; return; } goto L_00221E48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221EA4u); set32(c.r[4], 0u + 360u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00221EA4u) [[unlikely]] return; }
L_00221EA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), c.r[4].w[0]);  goto L_00221EDC; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 32156u);
    set32(c.r[7], c.r[7].w[0] + 32172u);
    set32(c.r[8], 0u + 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221ED4u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x00221ED4u) [[unlikely]] return; }
L_00221ED4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 148u), c.r[4].w[0]);
    c.budget -= 2;
L_00221EDC:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_00221EE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00222244; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00221F20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_00221F38; }
L_00221F20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221F30u); set32(c.r[5], c.r[5].w[0] + 32187u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00221F30u) [[unlikely]] return; }
L_00221F30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221E44u | kUnwind; return; } goto L_00221E44; } }
L_00221F38:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_00221F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221F48u); set32(c.r[4], 0u + 432u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00221F48u) [[unlikely]] return; }
L_00221F48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  goto L_00221F64; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221F60u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_0033(c, 344u, depth + 1u); else { c.pc = 0x001EEF40u; return; } if (c.pc != 0x00221F60u) [[unlikely]] return; }
L_00221F60:
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 1;
L_00221F64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48530000u);
    c.r[5].d[0] = c.r[2].d[0] | 20562ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221F7Cu); set32(c.r[4], ld32((c.r[2].w[0] + 72u)));  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x00221F7Cu) [[unlikely]] return; }
L_00221F7C:
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221F98u); c.r[5].d[0] = c.r[2].d[0] | 17752ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x00221F98u) [[unlikely]] return; }
L_00221F98:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00221FA8; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], 0u + 60u);  goto L_00221FC0; }
L_00221FA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221FB8u); set32(c.r[5], c.r[5].w[0] + 32202u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00221FB8u) [[unlikely]] return; }
L_00221FB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221E44u | kUnwind; return; } goto L_00221E44; } }
L_00221FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221FC8u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00221FC8u) [[unlikely]] return; }
L_00221FC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 4496u), c.r[2].w[0]);  goto L_00221FF0; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221FECu); set32(c.r[8], c.r[8].w[0] + 32075u);  if (depth < kMaxDepth) unit_0034(c, 57u, depth + 1u); else { c.pc = 0x001F08A0u; return; } if (c.pc != 0x00221FECu) [[unlikely]] return; }
L_00221FEC:
    st32((c.r[16].w[0] + 4496u), c.r[2].w[0]);
    c.budget -= 1;
L_00221FF0:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222008u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 397u, depth + 1u); else { c.pc = 0x001EF710u; return; } if (c.pc != 0x00222008u) [[unlikely]] return; }
L_00222008:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_00222014:
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00222244; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47540000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222048u); c.r[5].d[0] = c.r[2].d[0] | 20545ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x00222048u) [[unlikely]] return; }
L_00222048:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], 0u + 88u);  goto L_0022206C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222064u); set32(c.r[5], c.r[5].w[0] + 32202u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00222064u) [[unlikely]] return; }
L_00222064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221E44u | kUnwind; return; } goto L_00221E44; } }
L_0022206C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222074u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00222074u) [[unlikely]] return; }
L_00222074:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 160u), c.r[4].w[0]);  goto L_0022209C; }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222094u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 139u, depth + 1u); else { c.pc = 0x00205870u; return; } if (c.pc != 0x00222094u) [[unlikely]] return; }
L_00222094:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 160u), c.r[4].w[0]);
    c.budget -= 2;
L_0022209C:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_002220A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00222244; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002220C8u);  if (depth < kMaxDepth) unit_0039(c, 167u, depth + 1u); else { c.pc = 0x00205DC0u; return; } if (c.pc != 0x002220C8u) [[unlikely]] return; }
L_002220C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002220D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x002220D4u) [[unlikely]] return; }
L_002220D4:
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002220E0u); set32(c.r[4], ld32((c.r[16].w[0] + 160u)));  if (depth < kMaxDepth) unit_0039(c, 166u, depth + 1u); else { c.pc = 0x00205D90u; return; } if (c.pc != 0x002220E0u) [[unlikely]] return; }
L_002220E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002220ECu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 167u, depth + 1u); else { c.pc = 0x00205DC0u; return; } if (c.pc != 0x002220ECu) [[unlikely]] return; }
L_002220EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 156u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002220FCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002220FCu) [[unlikely]] return; }
L_002220FC:
    set32(c.r[5], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222108u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003A(c, 178u, depth + 1u); else { c.pc = 0x00209830u; return; } if (c.pc != 0x00222108u) [[unlikely]] return; }
L_00222108:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 41u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 3;
L_00222114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022211Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 187u, depth + 1u); else { c.pc = 0x00209A00u; return; } if (c.pc != 0x0022211Cu) [[unlikely]] return; }
L_0022211C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[5].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[6], 0u + 6u);
    set32(c.r[4], c.r[3].w[0] << 16);
    set32(c.r[5], c.r[5].w[0] >> 24);
    c.r[3].d[0] = c.r[2].d[0] & 65280ull;
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] >> 8);
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[5], 0u + 42u);
    c.r[7].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022217Cu); st32((c.r[16].w[0] + 4500u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 187u, depth + 1u); else { c.pc = 0x00209A00u; return; } if (c.pc != 0x0022217Cu) [[unlikely]] return; }
L_0022217C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[5].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[4], c.r[3].w[0] << 16);
    set32(c.r[5], c.r[5].w[0] >> 24);
    c.r[3].d[0] = c.r[2].d[0] & 65280ull;
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] >> 8);
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4504u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 22;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_002221EC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002221E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002221E4u) [[unlikely]] return; }
L_002221E4:
    st32((c.r[16].w[0] + 160u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 2;
L_002221EC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_0022220C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00222204u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00222204u) [[unlikely]] return; }
L_00222204:
    st32((c.r[16].w[0] + 148u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 2;
L_0022220C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], c.r[6].w[0] + 6240u);
    set32(c.r[7], 0u + 128u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222230u); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_0033(c, 359u, depth + 1u); else { c.pc = 0x001EF0E0u; return; } if (c.pc != 0x00222230u) [[unlikely]] return; }
L_00222230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222238u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 95u, depth + 1u); else { c.pc = 0x00220AE0u; return; } if (c.pc != 0x00222238u) [[unlikely]] return; }
L_00222238:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222244u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00222244u) [[unlikely]] return; }
L_00222244:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00222248:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00222260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222274u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 61u, depth + 1u); else { c.pc = 0x002206C0u; return; } if (c.pc != 0x00222274u) [[unlikely]] return; }
L_00222274:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222294u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00222294u) [[unlikely]] return; }
L_00222294:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002222B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[29].w[0] + 72u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002222E4u); st32((c.r[29].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x002222E4u) [[unlikely]] return; }
L_002222E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4544u), 0u);  if (t) { goto L_0022236C; } }
L_002222EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002222F4u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x002222F4u) [[unlikely]] return; }
L_002222F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4544u)));
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[5], c.r[29].w[0] + 72u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222314u); st16((c.r[2].w[0] + 4520u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x00222314u) [[unlikely]] return; }
L_00222314:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[5], c.r[29].w[0] + 72u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222330u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x00222330u) [[unlikely]] return; }
L_00222330:
    set32(c.r[2], ld32((c.r[16].w[0] + 4544u)));
    set32(c.r[4], c.r[29].w[0] + 40u);
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 72u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222350u); st16((c.r[2].w[0] + 4522u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x00222350u) [[unlikely]] return; }
L_00222350:
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4544u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 4544u), c.r[2].w[0]);
    c.budget -= 7;
L_0022236C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222374u); set32(c.r[4], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x00222374u) [[unlikely]] return; }
L_00222374:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002222ECu | kUnwind; return; } goto L_002222EC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022238Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x0022238Cu) [[unlikely]] return; }
L_0022238C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222398u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00222398u) [[unlikely]] return; }
L_00222398:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002223B0:
    set32(c.r[29], c.r[29].w[0] - 624u);
    set32(c.r[3], 0u + 30u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 12;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 22u);  goto L_00223930; }
    set32(c.r[3], 0u + 23u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_002238D8; }
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_00223894; }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_00223758; }
    set32(c.r[7], 0u + 20u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[7].d[0]) { set32(c.r[3], 0u + 20u);  goto L_002236B0; }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4548u)));  goto L_00223560; }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_002233C4; }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 15u);  goto L_00223360; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 10u);  goto L_0022292C; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4488u)));  goto L_002228B0; }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_0022275C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_00222580; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_002224AC; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u - 1u);  goto L_00222484; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0022398C; } }
L_00222480:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_00222484:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[17].w[0] + 88u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002224A4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x002224A4u) [[unlikely]] return; }
L_002224A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00223988; } }
L_002224AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00222480u | kUnwind; return; } goto L_00222480; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 616u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002224E4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x002224E4u) [[unlikely]] return; }
L_002224E4:
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002224F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x002224F4u) [[unlikely]] return; }
L_002224F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222504u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00222504u) [[unlikely]] return; }
L_00222504:
    set32(c.r[3], ld32((c.r[2].w[0] + 160u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    st32((c.r[2].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    st32((c.r[2].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 168u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    st32((c.r[2].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222554u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00222554u) [[unlikely]] return; }
L_00222554:
    st32((c.r[2].w[0] + 212u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 292u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[2].w[0] + 292u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 4480u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00223988; } }
L_00222580:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_00222598; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002225B0; } }
L_00222598:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_002225B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 4480u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 4480u), c.f[1]);  if (t) { goto L_00223988; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[7], 0u + 12u);
    set32(c.r[4], c.r[29].w[0] + 604u);
    set32(c.r[6], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222600u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00222600u) [[unlikely]] return; }
L_00222600:
    st32((c.r[17].w[0] + 4512u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00222624; } }
L_0022260C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222614u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 92u, depth + 1u); else { c.pc = 0x00220A80u; return; } if (c.pc != 0x00222614u) [[unlikely]] return; }
L_00222614:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00222624; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4512u), c.r[16].w[0]);  if (t) { goto L_00222638; } }
L_00222624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022262Cu); set32(c.r[4], ld32((c.r[17].w[0] + 4556u)));  if (depth < kMaxDepth) unit_002D(c, 8u, depth + 1u); else { c.pc = 0x001D4130u; return; } if (c.pc != 0x0022262Cu) [[unlikely]] return; }
L_0022262C:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022260Cu | kUnwind; return; } goto L_0022260C; }
L_00222638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222640u); set32(c.r[4], ld32((c.r[17].w[0] + 4556u)));  if (depth < kMaxDepth) unit_002D(c, 8u, depth + 1u); else { c.pc = 0x001D4130u; return; } if (c.pc != 0x00222640u) [[unlikely]] return; }
L_00222640:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 4516u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222650u); set32(c.r[4], ld32((c.r[17].w[0] + 4556u)));  if (depth < kMaxDepth) unit_002D(c, 8u, depth + 1u); else { c.pc = 0x001D4130u; return; } if (c.pc != 0x00222650u) [[unlikely]] return; }
L_00222650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] - 1u);  if (t) { goto L_00222670; } }
L_00222658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222660u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 92u, depth + 1u); else { c.pc = 0x00220A80u; return; } if (c.pc != 0x00222660u) [[unlikely]] return; }
L_00222660:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] - 1u);  goto L_00222670; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4516u), c.r[16].w[0]);  if (t) { goto L_00222678; } }
L_00222670:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00222658u | kUnwind; return; } goto L_00222658; }
L_00222678:
    set32(c.r[2], ld32((c.r[17].w[0] + 4516u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 4488u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4492u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222690u); st32((c.r[17].w[0] + 4484u), 0u);  if (depth < kMaxDepth) unit_0040(c, 108u, depth + 1u); else { c.pc = 0x00220C40u; return; } if (c.pc != 0x00222690u) [[unlikely]] return; }
L_00222690:
    set32(c.r[3], ld32((c.r[17].w[0] + 4488u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4512u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_002226C8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], 0u + 14u);
    set32(c.r[4], c.r[29].w[0] + 592u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002226C0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x002226C0u) [[unlikely]] return; }
L_002226C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  if (t) { goto L_002226E4; } }
L_002226C8:
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 580u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002226E0u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x002226E0u) [[unlikely]] return; }
L_002226E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_002226E4:
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 572u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002226FCu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x002226FCu) [[unlikely]] return; }
L_002226FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[7], 0u + 18u);
    set32(c.r[4], c.r[29].w[0] + 564u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022271Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0022271Cu) [[unlikely]] return; }
L_0022271C:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[7], 0u + 23u);
    set32(c.r[4], c.r[29].w[0] + 552u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022273Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0022273Cu) [[unlikely]] return; }
L_0022273C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222748u); set32(c.r[5], c.r[17].w[0] + 364u);  if (depth < kMaxDepth) unit_0040(c, 169u, depth + 1u); else { c.pc = 0x00221330u; return; } if (c.pc != 0x00222748u) [[unlikely]] return; }
L_00222748:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[17].w[0] + 4480u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 5;
L_0022275C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00222778; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00222790; } }
L_00222778:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_00222790:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 4480u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[2].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 4480u), c.f[1]);  if (t) { goto L_002227B8; } }
    st32((c.r[17].w[0] + 4480u), c.f[0]);
    c.budget -= 1;
L_002227B8:
    c.f[3] = ld32((c.r[17].w[0] + 4480u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[4] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 17;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_0022280C; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[16], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  if (t) { goto L_00222824; } }
L_0022280C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 6;
L_00222824:
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222830u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00222830u) [[unlikely]] return; }
L_00222830:
    set32(c.r[3], ld32((c.r[2].w[0] + 160u)));
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 24);
    c.f[0] = 0u;
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 168u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 172u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 4480u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00223988; } }
    st32((c.r[17].w[0] + 4480u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00223988; } }
L_002228B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4512u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_002228E0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], c.r[29].w[0] + 540u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002228D8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x002228D8u) [[unlikely]] return; }
L_002228D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  if (t) { goto L_00222900; } }
L_002228E0:
    set32(c.r[7], 0u + 19u);
    set32(c.r[4], c.r[29].w[0] + 528u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002228FCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x002228FCu) [[unlikely]] return; }
L_002228FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_00222900:
    set32(c.r[7], 0u + 24u);
    set32(c.r[4], c.r[29].w[0] + 516u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022291Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0022291Cu) [[unlikely]] return; }
L_0022291C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_00222928:
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
L_0022292C:
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);  goto L_00222948; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00222954; } }
L_00222948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222950u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00222950u) [[unlikely]] return; }
L_00222950:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00222954:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002236AC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], 0u + 8192u);  goto L_00222974; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00222980; } }
L_00222974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022297Cu);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x0022297Cu) [[unlikely]] return; }
L_0022297C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00222980:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002236AC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], 0u + 1024u);  goto L_002229A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002229AC; } }
L_002229A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002229A8u);  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x002229A8u) [[unlikely]] return; }
L_002229A8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002229AC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_00222AD8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 4488u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4512u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0] + 4484u), 0u);  goto L_002229E0; }
    c.f[1] = ld32((c.r[17].w[0] + 4492u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00222AD4; } }
    st32((c.r[17].w[0] + 4484u), 0u);
    c.budget -= 1;
L_002229E0:
    set32(c.r[2], 0u - 24577u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4488u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4516u)));
    set32(c.r[2], c.r[2].w[0] - 5u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 4512u)));  if (t) { goto L_00222A0C; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_00222A0C:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { st32((c.r[17].w[0] + 4548u), c.r[2].w[0]);  goto L_00222A30; }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 4548u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00222A30; } }
L_00222A28:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 4548u), c.r[2].w[0]);
    c.budget -= 2;
L_00222A30:
    set32(c.r[5], ld32((c.r[17].w[0] + 4548u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222A3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 92u, depth + 1u); else { c.pc = 0x00220A80u; return; } if (c.pc != 0x00222A3Cu) [[unlikely]] return; }
L_00222A3C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4548u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00222A28u | kUnwind; return; } goto L_00222A28; }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[7], 0u + 21u);
    set32(c.r[4], c.r[29].w[0] + 504u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222A6Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00222A6Cu) [[unlikely]] return; }
L_00222A6C:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], 0u + 25u);
    set32(c.r[4], c.r[29].w[0] + 492u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222A8Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00222A8Cu) [[unlikely]] return; }
L_00222A8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[7], 0u + 15u);
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222AACu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00222AACu) [[unlikely]] return; }
L_00222AAC:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], 0u + 16u);
    set32(c.r[4], c.r[29].w[0] + 468u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222ACCu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00222ACCu) [[unlikely]] return; }
L_00222ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022335C; } }
L_00222AD4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00222AD8:
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], 0u + 2048u);  goto L_00222AEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00222AF8; } }
L_00222AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222AF4u);  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x00222AF4u) [[unlikely]] return; }
L_00222AF4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00222AF8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_00222C24; }
    set32(c.r[4], ld32((c.r[17].w[0] + 4488u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4516u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0] + 4484u), 0u);  goto L_00222B2C; }
    c.f[1] = ld32((c.r[17].w[0] + 4492u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00222C20; } }
    st32((c.r[17].w[0] + 4484u), 0u);
    c.budget -= 1;
L_00222B2C:
    set32(c.r[2], 0u - 24577u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4488u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4516u)));
    set32(c.r[2], c.r[2].w[0] + 5u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 4512u)));  if (t) { goto L_00222B58; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_00222B58:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { st32((c.r[17].w[0] + 4548u), c.r[2].w[0]);  goto L_00222B7C; }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 4548u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00222B7C; } }
L_00222B74:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 4548u), c.r[2].w[0]);
    c.budget -= 2;
L_00222B7C:
    set32(c.r[5], ld32((c.r[17].w[0] + 4548u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222B88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 92u, depth + 1u); else { c.pc = 0x00220A80u; return; } if (c.pc != 0x00222B88u) [[unlikely]] return; }
L_00222B88:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4548u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00222B74u | kUnwind; return; } goto L_00222B74; }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], 0u + 20u);
    set32(c.r[4], c.r[29].w[0] + 456u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222BB8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00222BB8u) [[unlikely]] return; }
L_00222BB8:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[7], 0u + 26u);
    set32(c.r[4], c.r[29].w[0] + 444u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222BD8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00222BD8u) [[unlikely]] return; }
L_00222BD8:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], 0u + 14u);
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222BF8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00222BF8u) [[unlikely]] return; }
L_00222BF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[7], 0u + 17u);
    set32(c.r[4], c.r[29].w[0] + 420u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222C18u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00222C18u) [[unlikely]] return; }
L_00222C18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022335C; } }
L_00222C20:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00222C24:
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);  goto L_00222C38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00222C44; } }
L_00222C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222C40u);  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x00222C40u) [[unlikely]] return; }
L_00222C40:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00222C44:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_00222D34; }
    set32(c.r[4], ld32((c.r[17].w[0] + 4488u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4512u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_00222C78; }
    c.f[1] = ld32((c.r[17].w[0] + 4492u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00222D30; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00222C78:
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_00222E3C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u - 8193u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 364u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222CA8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0040(c, 178u, depth + 1u); else { c.pc = 0x00221450u; return; } if (c.pc != 0x00222CA8u) [[unlikely]] return; }
L_00222CA8:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], 0u + 20u);
    set32(c.r[4], c.r[29].w[0] + 408u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222CC8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00222CC8u) [[unlikely]] return; }
L_00222CC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], 0u + 25u);
    set32(c.r[4], c.r[29].w[0] + 396u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222CE8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00222CE8u) [[unlikely]] return; }
L_00222CE8:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], 0u + 15u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222D08u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00222D08u) [[unlikely]] return; }
L_00222D08:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], 0u + 16u);
    set32(c.r[4], c.r[29].w[0] + 372u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222D28u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00222D28u) [[unlikely]] return; }
L_00222D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00222E38; } }
L_00222D30:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00222D34:
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);  goto L_00222D48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00222D54; } }
L_00222D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222D50u);  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x00222D50u) [[unlikely]] return; }
L_00222D50:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00222D54:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00222E38; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4488u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4516u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_00222D88; }
    c.f[1] = ld32((c.r[17].w[0] + 4492u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00222E38; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00222D88:
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00222E38; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u - 16385u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 364u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222DB8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0040(c, 178u, depth + 1u); else { c.pc = 0x00221450u; return; } if (c.pc != 0x00222DB8u) [[unlikely]] return; }
L_00222DB8:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], 0u + 20u);
    set32(c.r[4], c.r[29].w[0] + 360u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222DD8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00222DD8u) [[unlikely]] return; }
L_00222DD8:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], 0u + 25u);
    set32(c.r[4], c.r[29].w[0] + 348u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222DF8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00222DF8u) [[unlikely]] return; }
L_00222DF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], 0u + 14u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222E18u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00222E18u) [[unlikely]] return; }
L_00222E18:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], 0u + 17u);
    set32(c.r[4], c.r[29].w[0] + 324u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222E38u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00222E38u) [[unlikely]] return; }
L_00222E38:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00222E3C:
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 8192ull;  goto L_00222F14; }
    c.r[3].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);  goto L_00222E5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00222E68; } }
L_00222E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222E64u);  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x00222E64u) [[unlikely]] return; }
L_00222E64:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00222E68:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[2] = ld32((c.r[17].w[0] + 4484u));  goto L_00222EC4; }
    c.f[2] = ld32((c.r[17].w[0] + 4484u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);  goto L_00222EA0; }
    c.f[1] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 2;
L_00222EA0:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[17].w[0] + 4484u), c.f[1]);  goto L_00222FE0; }
    c.f[1] = c.f[0];
    st32((c.r[17].w[0] + 4484u), c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00222FE0; } }
L_00222EC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);  goto L_00222EF0; }
    c.f[1] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 2;
L_00222EF0:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[17].w[0] + 4484u), c.f[1]);  goto L_00222FE0; }
    c.f[1] = c.f[0];
    st32((c.r[17].w[0] + 4484u), c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00222FE0; } }
L_00222F14:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00222FE0; } }
    c.r[3].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);  goto L_00222F30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00222F3C; } }
L_00222F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222F38u);  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x00222F38u) [[unlikely]] return; }
L_00222F38:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00222F3C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[2] = ld32((c.r[17].w[0] + 4484u));  goto L_00222F98; }
    c.f[2] = ld32((c.r[17].w[0] + 4484u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].sd[0] = static_cast<std::int32_t>(0xC1600000u);  goto L_00222F74; }
    c.f[1] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1600000u);
    c.budget -= 2;
L_00222F74:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[17].w[0] + 4484u), c.f[1]);  goto L_00222FE0; }
    c.f[1] = c.f[0];
    st32((c.r[17].w[0] + 4484u), c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00222FE0; } }
L_00222F98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0C00000u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].sd[0] = static_cast<std::int32_t>(0xC1600000u);  goto L_00222FC4; }
    c.f[1] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1600000u);
    c.budget -= 2;
L_00222FC4:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[17].w[0] + 4484u), c.f[1]);  goto L_00222FE0; }
    c.f[1] = c.f[0];
    st32((c.r[17].w[0] + 4484u), c.f[1]);
    c.budget -= 2;
L_00222FE0:
    c.f[1] = ld32((c.r[17].w[0] + 4484u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[4] = ld32((c.r[17].w[0] + 4484u));  goto L_00223054; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);  goto L_00223010; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0022301C; } }
L_00223010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223018u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00223018u) [[unlikely]] return; }
L_00223018:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0022301C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00223050; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00223050; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00223050; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_00223050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223050u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 87u, depth + 1u); else { c.pc = 0x002209F0u; return; } if (c.pc != 0x00223050u) [[unlikely]] return; }
L_00223050:
    c.f[4] = ld32((c.r[17].w[0] + 4484u));
    c.budget -= 1;
L_00223054:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00223988; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.f[20] = ld32((c.r[17].w[0] + 4492u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00223088; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002230A4; } }
L_00223088:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_002230A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[2].w[0] + 27140u));
    set32(c.r[5], 0u + 5u);
    c.f[1] = ld32((c.r[17].w[0] + 4492u));
    set32(c.r[6], 0u + 6u);
    c.f[0] = 0u;
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002230D4u); st32((c.r[17].w[0] + 4492u), c.f[0]);  if (depth < kMaxDepth) unit_0040(c, 195u, depth + 1u); else { c.pc = 0x002216E0u; return; } if (c.pc != 0x002230D4u) [[unlikely]] return; }
L_002230D4:
    c.f[21] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002230E8u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0040(c, 195u, depth + 1u); else { c.pc = 0x002216E0u; return; } if (c.pc != 0x002230E8u) [[unlikely]] return; }
L_002230E8:
    c.f[3] = ld32((c.r[17].w[0] + 4492u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[3]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], 0u + 1u);  goto L_00223168; }
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = c.f[21] ^ fp::kSign;  goto L_0022311C; }
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00223168; } }
L_0022311C:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00223144; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[21]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022313Cu); st32((c.r[17].w[0] + 4492u), c.f[0]);  if (depth < kMaxDepth) unit_0040(c, 202u, depth + 1u); else { c.pc = 0x00221890u; return; } if (c.pc != 0x0022313Cu) [[unlikely]] return; }
L_0022313C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00223168; } }
L_00223144:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00223168; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223164u); st32((c.r[17].w[0] + 4492u), c.f[0]);  if (depth < kMaxDepth) unit_0040(c, 202u, depth + 1u); else { c.pc = 0x00221890u; return; } if (c.pc != 0x00223164u) [[unlikely]] return; }
L_00223164:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_00223168:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 4484u));  goto L_00223204; }
    set32(c.r[4], ld32((c.r[17].w[0] + 4488u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4512u)));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[17].w[0] + 4484u), 0u);  goto L_002231FC; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4516u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002231F8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);  goto L_002231A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002231B0; } }
L_002231A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002231ACu);  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x002231ACu) [[unlikely]] return; }
L_002231AC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002231B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00223200; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);  goto L_002231D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002231DC; } }
L_002231D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002231D8u);  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x002231D8u) [[unlikely]] return; }
L_002231D8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002231DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00223200; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002231F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 92u, depth + 1u); else { c.pc = 0x00220A80u; return; } if (c.pc != 0x002231F0u) [[unlikely]] return; }
L_002231F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00223200; } }
L_002231F8:
    st32((c.r[17].w[0] + 4484u), 0u);
    c.budget -= 1;
L_002231FC:
    st32((c.r[17].w[0] + 4492u), 0u);
    c.budget -= 1;
L_00223200:
    c.f[1] = ld32((c.r[17].w[0] + 4484u));
    c.budget -= 1;
L_00223204:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00223988; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u - 24577u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4488u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4512u)));
    c.budget -= 8;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_00223280; }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], 0u + 14u);
    set32(c.r[4], c.r[29].w[0] + 312u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223258u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00223258u) [[unlikely]] return; }
L_00223258:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[7], 0u + 20u);
    set32(c.r[4], c.r[29].w[0] + 300u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223278u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00223278u) [[unlikely]] return; }
L_00223278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 4488u)));  if (t) { goto L_002232BC; } }
L_00223280:
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223298u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00223298u) [[unlikely]] return; }
L_00223298:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[7], 0u + 19u);
    set32(c.r[4], c.r[29].w[0] + 280u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002232B8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x002232B8u) [[unlikely]] return; }
L_002232B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4488u)));
    c.budget -= 1;
L_002232BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4516u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_00223310; }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], 0u + 16u);
    set32(c.r[4], c.r[29].w[0] + 268u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002232E8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x002232E8u) [[unlikely]] return; }
L_002232E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[7], 0u + 25u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223308u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00223308u) [[unlikely]] return; }
L_00223308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0022334C; } }
L_00223310:
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 244u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223328u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00223328u) [[unlikely]] return; }
L_00223328:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[7], 0u + 24u);
    set32(c.r[4], c.r[29].w[0] + 236u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223348u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00223348u) [[unlikely]] return; }
L_00223348:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022334C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223354u); set32(c.r[5], c.r[17].w[0] + 364u);  if (depth < kMaxDepth) unit_0040(c, 169u, depth + 1u); else { c.pc = 0x00221330u; return; } if (c.pc != 0x00223354u) [[unlikely]] return; }
L_00223354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00223988; } }
L_0022335C:
    set32(c.r[2], 0u + 15u);
    c.budget -= 1;
L_00223360:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[5], 0u + 5u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4548u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4488u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223380u); set32(c.r[6], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_0040(c, 195u, depth + 1u); else { c.pc = 0x002216E0u; return; } if (c.pc != 0x00223380u) [[unlikely]] return; }
L_00223380:
    c.f[1] = c.f[0] ^ fp::kSign;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 4492u));
    set32(c.r[5], c.r[17].w[0] + 364u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022339Cu); st32((c.r[17].w[0] + 4552u), c.f[0]);  if (depth < kMaxDepth) unit_0040(c, 178u, depth + 1u); else { c.pc = 0x00221450u; return; } if (c.pc != 0x0022339Cu) [[unlikely]] return; }
L_0022339C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    set32(c.r[4], 0u + 6u);
    st32((c.r[17].w[0] + 4480u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002233B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x002233B4u) [[unlikely]] return; }
L_002233B4:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00223988; } }
L_002233C4:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_002233DC; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002233F4; } }
L_002233DC:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_002233F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 4480u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 4480u), c.f[1]);  if (t) { goto L_0022341C; } }
    st32((c.r[17].w[0] + 4480u), c.f[0]);
    c.budget -= 1;
L_0022341C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; c.f[3] = ld32((c.r[28].w[0] - 32676u));  if (t) { goto L_00223438; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00223454; } }
L_00223438:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_00223454:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[3].w[0] + 27140u));
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[17].w[0] + 4552u));  goto L_00223484; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[3].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 4552u));
    c.budget -= 3;
L_00223484:
    c.f[0] = ld32((c.r[17].w[0] + 4492u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 4492u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4552u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4552u), c.f[0]);  if (t) { goto L_002234D8; } }
L_002234A4:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002234B0u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0040(c, 195u, depth + 1u); else { c.pc = 0x002216E0u; return; } if (c.pc != 0x002234B0u) [[unlikely]] return; }
L_002234B0:
    c.f[2] = ld32((c.r[17].w[0] + 4492u));
    c.f[1] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[17].w[0] + 4488u)));  goto L_00223528; }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002234D8u); st32((c.r[17].w[0] + 4492u), c.f[0]);  if (depth < kMaxDepth) unit_0040(c, 202u, depth + 1u); else { c.pc = 0x00221890u; return; } if (c.pc != 0x002234D8u) [[unlikely]] return; }
L_002234D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 4488u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4516u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002234A4u | kUnwind; return; } goto L_002234A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00223524; } }
L_002234F4:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223500u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0040(c, 195u, depth + 1u); else { c.pc = 0x002216E0u; return; } if (c.pc != 0x00223500u) [[unlikely]] return; }
L_00223500:
    c.f[1] = ld32((c.r[17].w[0] + 4492u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[17].w[0] + 4480u));  goto L_0022353C; }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223524u); st32((c.r[17].w[0] + 4492u), c.f[0]);  if (depth < kMaxDepth) unit_0040(c, 202u, depth + 1u); else { c.pc = 0x00221890u; return; } if (c.pc != 0x00223524u) [[unlikely]] return; }
L_00223524:
    set32(c.r[4], ld32((c.r[17].w[0] + 4488u)));
    c.budget -= 1;
L_00223528:
    set32(c.r[3], ld32((c.r[17].w[0] + 4512u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002234F4u | kUnwind; return; } goto L_002234F4; }
    c.f[1] = ld32((c.r[17].w[0] + 4480u));
    c.budget -= 1;
L_0022353C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00223988; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4548u)));
    c.budget -= 4;
L_00223560:
    set32(c.r[2], ld32((c.r[17].w[0] + 4488u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4488u)));  goto L_0022357C; }
    set32(c.r[5], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223578u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 202u, depth + 1u); else { c.pc = 0x00221890u; return; } if (c.pc != 0x00223578u) [[unlikely]] return; }
L_00223578:
    set32(c.r[3], ld32((c.r[17].w[0] + 4488u)));
    c.budget -= 1;
L_0022357C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4512u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_002235D0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[7], 0u + 14u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002235A8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x002235A8u) [[unlikely]] return; }
L_002235A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[7], 0u + 20u);
    set32(c.r[4], c.r[29].w[0] + 212u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002235C8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x002235C8u) [[unlikely]] return; }
L_002235C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 4488u)));  if (t) { goto L_0022360C; } }
L_002235D0:
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 200u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002235E8u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x002235E8u) [[unlikely]] return; }
L_002235E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[7], 0u + 19u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223608u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00223608u) [[unlikely]] return; }
L_00223608:
    set32(c.r[3], ld32((c.r[17].w[0] + 4488u)));
    c.budget -= 1;
L_0022360C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4516u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_00223660; }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[7], 0u + 16u);
    set32(c.r[4], c.r[29].w[0] + 180u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223638u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00223638u) [[unlikely]] return; }
L_00223638:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[7], 0u + 25u);
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223658u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00223658u) [[unlikely]] return; }
L_00223658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0022369C; } }
L_00223660:
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 156u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223678u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x00223678u) [[unlikely]] return; }
L_00223678:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[7], 0u + 24u);
    set32(c.r[4], c.r[29].w[0] + 148u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223698u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00223698u) [[unlikely]] return; }
L_00223698:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022369C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002236A4u); set32(c.r[5], c.r[17].w[0] + 364u);  if (depth < kMaxDepth) unit_0040(c, 169u, depth + 1u); else { c.pc = 0x00221330u; return; } if (c.pc != 0x002236A4u) [[unlikely]] return; }
L_002236A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4492u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00222928u | kUnwind; return; } goto L_00222928; } }
L_002236AC:
    set32(c.r[3], 0u + 20u);
    c.budget -= 1;
L_002236B0:
    set32(c.r[2], 0u - 513u);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[7], 0u + 13u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[6], 0u + 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002236E4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x002236E4u) [[unlikely]] return; }
L_002236E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[7], 0u + 22u);
    set32(c.r[4], c.r[29].w[0] + 124u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223704u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00223704u) [[unlikely]] return; }
L_00223704:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[7], 0u + 27u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223724u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x00223724u) [[unlikely]] return; }
L_00223724:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223730u); set32(c.r[5], c.r[17].w[0] + 364u);  if (depth < kMaxDepth) unit_0040(c, 178u, depth + 1u); else { c.pc = 0x00221450u; return; } if (c.pc != 0x00223730u) [[unlikely]] return; }
L_00223730:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223740u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00223740u) [[unlikely]] return; }
L_00223740:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[17].w[0] + 4480u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00223988; } }
L_00223758:
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00223770; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00223788; } }
L_00223770:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_00223788:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 4480u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[2].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 4480u), c.f[1]);  if (t) { goto L_002237B0; } }
    st32((c.r[17].w[0] + 4480u), c.f[0]);
    c.budget -= 1;
L_002237B0:
    c.f[2] = ld32((c.r[17].w[0] + 4480u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[3] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_002237F4; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[16], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  if (t) { goto L_0022380C; } }
L_002237F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 6;
L_0022380C:
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223818u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x00223818u) [[unlikely]] return; }
L_00223818:
    set32(c.r[3], ld32((c.r[2].w[0] + 160u)));
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 24);
    c.f[0] = 0u;
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 168u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 172u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 4480u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00223988; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 4;
L_00223894:
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 100u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002238B0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x002238B0u) [[unlikely]] return; }
L_002238B0:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], 0u - 4097u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 4480u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00223988; } }
L_002238D8:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_002238F0; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00223908; } }
L_002238F0:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_00223908:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 4480u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 4480u), c.f[1]);  if (t) { goto L_00223988; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 1;
L_00223930:
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 3;
L_0022393C:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[18], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223950u); set32(c.r[4], c.r[18].w[0] + 960u);  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x00223950u) [[unlikely]] return; }
L_00223950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223958u); set32(c.r[4], c.r[18].w[0] + 2720u);  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x00223958u) [[unlikely]] return; }
L_00223958:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022393Cu | kUnwind; return; } goto L_0022393C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223988u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00223988u) [[unlikely]] return; }
L_00223988:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0022398C:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 624u);  c.pc = t; return; }
L_002239B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002239C8u); set32(c.r[4], 0u + 276u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x002239C8u) [[unlikely]] return; }
L_002239C8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002239D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 460u, depth + 1u); else { c.pc = 0x001D3F10u; return; } if (c.pc != 0x002239D8u) [[unlikely]] return; }
L_002239D8:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 6624u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 32u), c.r[3].d[0]);
    c.f[0] = ld32((c.r[2].w[0] + 6632u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223A00u); st32((c.r[29].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_002C(c, 458u, depth + 1u); else { c.pc = 0x001D3E90u; return; } if (c.pc != 0x00223A00u) [[unlikely]] return; }
L_00223A00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00223A10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223A38u); set32(c.r[4], 0u + 276u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00223A38u) [[unlikely]] return; }
L_00223A38:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223A48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 460u, depth + 1u); else { c.pc = 0x001D3F10u; return; } if (c.pc != 0x00223A48u) [[unlikely]] return; }
L_00223A48:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 16u);  if (t) { goto L_00223A70; } }
L_00223A54:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00223A54u | kUnwind; return; } goto L_00223A54; } }
L_00223A70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 64u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223A88u); st32((c.r[29].w[0] + 68u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_002C(c, 458u, depth + 1u); else { c.pc = 0x001D3E90u; return; } if (c.pc != 0x00223A88u) [[unlikely]] return; }
L_00223A88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00223AA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223AB8u); set32(c.r[4], 0u + 276u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00223AB8u) [[unlikely]] return; }
L_00223AB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00223AD0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223ACCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 132u, depth + 1u); else { c.pc = 0x00224ED0u; return; } if (c.pc != 0x00223ACCu) [[unlikely]] return; }
L_00223ACC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00223AD0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223AE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223AF8u); set32(c.r[4], 0u + 4576u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00223AF8u) [[unlikely]] return; }
L_00223AF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00223B10; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223B0Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 41u, depth + 1u); else { c.pc = 0x002204D0u; return; } if (c.pc != 0x00223B0Cu) [[unlikely]] return; }
L_00223B0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00223B10:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223B20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223B38u); set32(c.r[4], 0u + 248u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00223B38u) [[unlikely]] return; }
L_00223B38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00223B50; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223B4Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 124u, depth + 1u); else { c.pc = 0x00228ED0u; return; } if (c.pc != 0x00223B4Cu) [[unlikely]] return; }
L_00223B4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00223B50:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223B60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223B78u); set32(c.r[4], 0u + 508u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00223B78u) [[unlikely]] return; }
L_00223B78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00223B90; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223B8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004D(c, 190u, depth + 1u); else { c.pc = 0x00255360u; return; } if (c.pc != 0x00223B8Cu) [[unlikely]] return; }
L_00223B8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00223B90:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223BB8u); set32(c.r[4], 0u + 164u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00223BB8u) [[unlikely]] return; }
L_00223BB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00223BD0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223BCCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 334u, depth + 1u); else { c.pc = 0x0023F670u; return; } if (c.pc != 0x00223BCCu) [[unlikely]] return; }
L_00223BCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00223BD0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223BE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223BF8u); set32(c.r[4], 0u + 212u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00223BF8u) [[unlikely]] return; }
L_00223BF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00223C10; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223C0Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 318u, depth + 1u); else { c.pc = 0x0024B5C0u; return; } if (c.pc != 0x00223C0Cu) [[unlikely]] return; }
L_00223C0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00223C10:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223C38u); set32(c.r[4], 0u + 312u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00223C38u) [[unlikely]] return; }
L_00223C38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00223C50; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223C4Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 70u, depth + 1u); else { c.pc = 0x0024CD40u; return; } if (c.pc != 0x00223C4Cu) [[unlikely]] return; }
L_00223C4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00223C50:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223C60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223C78u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00223C78u) [[unlikely]] return; }
L_00223C78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00223C90; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223C8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 112u, depth + 1u); else { c.pc = 0x0024D210u; return; } if (c.pc != 0x00223C8Cu) [[unlikely]] return; }
L_00223C8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00223C90:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223CA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223CB8u); set32(c.r[4], 0u + 720u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00223CB8u) [[unlikely]] return; }
L_00223CB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00223CD0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223CCCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 74u, depth + 1u); else { c.pc = 0x00250FB0u; return; } if (c.pc != 0x00223CCCu) [[unlikely]] return; }
L_00223CCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00223CD0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223CE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223CF8u); set32(c.r[4], 0u + 440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00223CF8u) [[unlikely]] return; }
L_00223CF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00223D10; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223D0Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 38u, depth + 1u); else { c.pc = 0x00258880u; return; } if (c.pc != 0x00223D0Cu) [[unlikely]] return; }
L_00223D0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00223D10:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223D38u); set32(c.r[4], 0u + 180u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00223D38u) [[unlikely]] return; }
L_00223D38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00223D50; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223D4Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 79u, depth + 1u); else { c.pc = 0x0025CE10u; return; } if (c.pc != 0x00223D4Cu) [[unlikely]] return; }
L_00223D4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00223D50:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223D60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223D78u); set32(c.r[4], 0u + 188u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00223D78u) [[unlikely]] return; }
L_00223D78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00223D90; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223D8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 220u, depth + 1u); else { c.pc = 0x0025E400u; return; } if (c.pc != 0x00223D8Cu) [[unlikely]] return; }
L_00223D8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00223D90:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223DB8u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00223DB8u) [[unlikely]] return; }
L_00223DB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00223DD0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223DCCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 210u, depth + 1u); else { c.pc = 0x00261DE0u; return; } if (c.pc != 0x00223DCCu) [[unlikely]] return; }
L_00223DCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00223DD0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223DF8u); set32(c.r[4], 0u + 172u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00223DF8u) [[unlikely]] return; }
L_00223DF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00223E10; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223E0Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 348u, depth + 1u); else { c.pc = 0x00263A10u; return; } if (c.pc != 0x00223E0Cu) [[unlikely]] return; }
L_00223E0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00223E10:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223E20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223E38u); set32(c.r[4], 0u + 228u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00223E38u) [[unlikely]] return; }
L_00223E38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00223E50; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223E4Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 33u, depth + 1u); else { c.pc = 0x002643F0u; return; } if (c.pc != 0x00223E4Cu) [[unlikely]] return; }
L_00223E4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00223E50:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223E60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223E78u); set32(c.r[4], 0u + 156u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00223E78u) [[unlikely]] return; }
L_00223E78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00223E90; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223E8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 115u, depth + 1u); else { c.pc = 0x00264E20u; return; } if (c.pc != 0x00223E8Cu) [[unlikely]] return; }
L_00223E8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00223E90:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223EA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223EB8u); set32(c.r[4], 0u + 152u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00223EB8u) [[unlikely]] return; }
L_00223EB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00223ED0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223ECCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 164u, depth + 1u); else { c.pc = 0x00265340u; return; } if (c.pc != 0x00223ECCu) [[unlikely]] return; }
L_00223ECC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00223ED0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223EE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223EF8u); set32(c.r[4], 0u + 156u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00223EF8u) [[unlikely]] return; }
L_00223EF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00223F10; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223F0Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 202u, depth + 1u); else { c.pc = 0x00265800u; return; } if (c.pc != 0x00223F0Cu) [[unlikely]] return; }
L_00223F0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00223F10:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223F20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223F38u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00223F38u) [[unlikely]] return; }
L_00223F38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00223F50; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223F4Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 220u, depth + 1u); else { c.pc = 0x00252450u; return; } if (c.pc != 0x00223F4Cu) [[unlikely]] return; }
L_00223F4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00223F50:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223F60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223F78u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00223F78u) [[unlikely]] return; }
L_00223F78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00223F90; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223F8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 170u, depth + 1u); else { c.pc = 0x00231AD0u; return; } if (c.pc != 0x00223F8Cu) [[unlikely]] return; }
L_00223F8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00223F90:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223FA0:
    set32(c.r[29], c.r[29].w[0] - 992u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223FBCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x00223FBCu) [[unlikely]] return; }
L_00223FBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 18864u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223FCCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x00223FCCu) [[unlikely]] return; }
L_00223FCC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223FD8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 289u, depth + 1u); else { c.pc = 0x0014FDA0u; return; } if (c.pc != 0x00223FD8u) [[unlikely]] return; }
L_00223FD8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223FE4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 287u, depth + 1u); else { c.pc = 0x0014FD50u; return; } if (c.pc != 0x00223FE4u) [[unlikely]] return; }
L_00223FE4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223FF4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 291u, depth + 1u); else { c.pc = 0x001FBA40u; return; } if (c.pc != 0x00223FF4u) [[unlikely]] return; }
L_00223FF4:
    set32(c.r[5], 0u + 256u);
    set32(c.r[9], 0u + 32u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    [[clang::musttail]] return unit_0041(c, 1u, depth);
}

}
