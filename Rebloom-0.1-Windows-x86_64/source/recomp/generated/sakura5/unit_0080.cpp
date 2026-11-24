#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0080[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 7, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0,
    0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0,
    0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0,
    0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0,
    0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 156, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187,
    0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196,
    0, 0, 0, 197, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 204, 0, 0, 0, 205, 0, 0,
    0, 206, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215,
    0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220,
    0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 278, 0, 0, 0, 279, 0, 280, 0, 0, 0, 281, 0, 282, 0, 0, 0, 283, 0, 284, 0, 0,
    0, 285, 0, 286, 0, 0, 0, 287, 0, 288, 0, 0, 0, 289, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 300, 0, 0, 0, 301, 0,
    0, 0, 302, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 309, 0, 0, 0, 310, 0, 0, 0,
    311, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0,
    0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0,
    340, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0,
    0, 345, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0,
    0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 364, 0, 365,
    0, 0, 366, 0, 367, 0, 368, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0,
    0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382,
    0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0,
    0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0,
    394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0,
    405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0,
    0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0,
    0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0,
    0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0,
    0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0,
    0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 439, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 446, 0, 447, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0,
    458, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 464, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0080(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00320000;
    case 2u: goto L_00320008;
    case 3u: goto L_0032002C;
    case 4u: goto L_0032005C;
    case 5u: goto L_00320068;
    case 6u: goto L_00320074;
    case 7u: goto L_00320078;
    case 8u: goto L_00320090;
    case 9u: goto L_003200EC;
    case 10u: goto L_003200F8;
    case 11u: goto L_00320104;
    case 12u: goto L_0032011C;
    case 13u: goto L_00320140;
    case 14u: goto L_0032019C;
    case 15u: goto L_003201A8;
    case 16u: goto L_003201C0;
    case 17u: goto L_003201E0;
    case 18u: goto L_00320200;
    case 19u: goto L_00320220;
    case 20u: goto L_00320240;
    case 21u: goto L_00320260;
    case 22u: goto L_00320270;
    case 23u: goto L_00320290;
    case 24u: goto L_003202A0;
    case 25u: goto L_003202B0;
    case 26u: goto L_003202C0;
    case 27u: goto L_003202D0;
    case 28u: goto L_00320300;
    case 29u: goto L_00320320;
    case 30u: goto L_00320340;
    case 31u: goto L_00320354;
    case 32u: goto L_00320390;
    case 33u: goto L_003203EC;
    case 34u: goto L_003203F8;
    case 35u: goto L_00320404;
    case 36u: goto L_0032041C;
    case 37u: goto L_00320440;
    case 38u: goto L_003204A0;
    case 39u: goto L_003204C0;
    case 40u: goto L_003204F0;
    case 41u: goto L_00320504;
    case 42u: goto L_00320540;
    case 43u: goto L_0032055C;
    case 44u: goto L_003205F0;
    case 45u: goto L_00320600;
    case 46u: goto L_00320610;
    case 47u: goto L_00320620;
    case 48u: goto L_00320634;
    case 49u: goto L_0032064C;
    case 50u: goto L_0032065C;
    case 51u: goto L_0032066C;
    case 52u: goto L_0032067C;
    case 53u: goto L_00320698;
    case 54u: goto L_003206F8;
    case 55u: goto L_0032070C;
    case 56u: goto L_0032071C;
    case 57u: goto L_0032072C;
    case 58u: goto L_0032073C;
    case 59u: goto L_00320758;
    case 60u: goto L_003207B8;
    case 61u: goto L_003207CC;
    case 62u: goto L_003207DC;
    case 63u: goto L_003207EC;
    case 64u: goto L_003207FC;
    case 65u: goto L_00320810;
    case 66u: goto L_00320828;
    case 67u: goto L_00320838;
    case 68u: goto L_00320848;
    case 69u: goto L_00320858;
    case 70u: goto L_00320874;
    case 71u: goto L_003208D4;
    case 72u: goto L_003208E8;
    case 73u: goto L_003208F8;
    case 74u: goto L_00320908;
    case 75u: goto L_00320918;
    case 76u: goto L_00320934;
    case 77u: goto L_00320994;
    case 78u: goto L_003209A8;
    case 79u: goto L_003209C0;
    case 80u: goto L_00320A38;
    case 81u: goto L_00320A44;
    case 82u: goto L_00320A5C;
    case 83u: goto L_00320A80;
    case 84u: goto L_00320A90;
    case 85u: goto L_00320AA0;
    case 86u: goto L_00320AD0;
    case 87u: goto L_00320AF0;
    case 88u: goto L_00320B10;
    case 89u: goto L_00320B2C;
    case 90u: goto L_00320BA8;
    case 91u: goto L_00320BC0;
    case 92u: goto L_00320BE0;
    case 93u: goto L_00320BFC;
    case 94u: goto L_00320C10;
    case 95u: goto L_00320C40;
    case 96u: goto L_00320C6C;
    case 97u: goto L_00320C7C;
    case 98u: goto L_00320C90;
    case 99u: goto L_00320D84;
    case 100u: goto L_00320DB0;
    case 101u: goto L_00320E20;
    case 102u: goto L_00320E3C;
    case 103u: goto L_00320E8C;
    case 104u: goto L_00320EAC;
    case 105u: goto L_00320EC0;
    case 106u: goto L_00320EE0;
    case 107u: goto L_00320EF4;
    case 108u: goto L_00320F14;
    case 109u: goto L_00320F28;
    case 110u: goto L_00320F48;
    case 111u: goto L_00320F5C;
    case 112u: goto L_00320F7C;
    case 113u: goto L_00320FB0;
    case 114u: goto L_00320FD0;
    case 115u: goto L_00321020;
    case 116u: goto L_00321048;
    case 117u: goto L_00321058;
    case 118u: goto L_00321090;
    case 119u: goto L_00321098;
    case 120u: goto L_003210A0;
    case 121u: goto L_003210B0;
    case 122u: goto L_003210BC;
    case 123u: goto L_003210CC;
    case 124u: goto L_003210D8;
    case 125u: goto L_003210E0;
    case 126u: goto L_003210E8;
    case 127u: goto L_00321110;
    case 128u: goto L_00321124;
    case 129u: goto L_00321160;
    case 130u: goto L_0032117C;
    case 131u: goto L_003211A4;
    case 132u: goto L_003211C4;
    case 133u: goto L_0032120C;
    case 134u: goto L_00321218;
    case 135u: goto L_00321250;
    case 136u: goto L_00321264;
    case 137u: goto L_003212A0;
    case 138u: goto L_003212B4;
    case 139u: goto L_003212C8;
    case 140u: goto L_003212E0;
    case 141u: goto L_003212F4;
    case 142u: goto L_0032138C;
    case 143u: goto L_0032139C;
    case 144u: goto L_003213AC;
    case 145u: goto L_003213BC;
    case 146u: goto L_003213CC;
    case 147u: goto L_003213DC;
    case 148u: goto L_003213EC;
    case 149u: goto L_003213FC;
    case 150u: goto L_00321410;
    case 151u: goto L_00321430;
    case 152u: goto L_00321460;
    case 153u: goto L_003214E8;
    case 154u: goto L_00321540;
    case 155u: goto L_00321558;
    case 156u: goto L_0032158C;
    case 157u: goto L_0032159C;
    case 158u: goto L_003215A4;
    case 159u: goto L_003215C0;
    case 160u: goto L_003215D0;
    case 161u: goto L_00321608;
    case 162u: goto L_00321614;
    case 163u: goto L_00321620;
    case 164u: goto L_00321630;
    case 165u: goto L_00321644;
    case 166u: goto L_00321680;
    case 167u: goto L_00321694;
    case 168u: goto L_003216D0;
    case 169u: goto L_003216F0;
    case 170u: goto L_0032170C;
    case 171u: goto L_00321738;
    case 172u: goto L_0032175C;
    case 173u: goto L_00321780;
    case 174u: goto L_00321790;
    case 175u: goto L_003217C4;
    case 176u: goto L_003217D0;
    case 177u: goto L_00321848;
    case 178u: goto L_0032188C;
    case 179u: goto L_003218C0;
    case 180u: goto L_0032191C;
    case 181u: goto L_003219A0;
    case 182u: goto L_00321A00;
    case 183u: goto L_00321A18;
    case 184u: goto L_00321A30;
    case 185u: goto L_00321A54;
    case 186u: goto L_00321A60;
    case 187u: goto L_00321A7C;
    case 188u: goto L_00321A8C;
    case 189u: goto L_00321AE0;
    case 190u: goto L_00321B10;
    case 191u: goto L_00321B20;
    case 192u: goto L_00321B3C;
    case 193u: goto L_00321B94;
    case 194u: goto L_00321BB0;
    case 195u: goto L_00321BEC;
    case 196u: goto L_00321BFC;
    case 197u: goto L_00321C0C;
    case 198u: goto L_00321C14;
    case 199u: goto L_00321C24;
    case 200u: goto L_00321C34;
    case 201u: goto L_00321C3C;
    case 202u: goto L_00321C4C;
    case 203u: goto L_00321C5C;
    case 204u: goto L_00321C64;
    case 205u: goto L_00321C74;
    case 206u: goto L_00321C84;
    case 207u: goto L_00321C8C;
    case 208u: goto L_00321C9C;
    case 209u: goto L_00321CAC;
    case 210u: goto L_00321CB4;
    case 211u: goto L_00321CC4;
    case 212u: goto L_00321CD4;
    case 213u: goto L_00321CDC;
    case 214u: goto L_00321CEC;
    case 215u: goto L_00321CFC;
    case 216u: goto L_00321D04;
    case 217u: goto L_00321D14;
    case 218u: goto L_00321D24;
    case 219u: goto L_00321D40;
    case 220u: goto L_00321D7C;
    case 221u: goto L_00321D8C;
    case 222u: goto L_00321DC8;
    case 223u: goto L_00321DF0;
    case 224u: goto L_00321E4C;
    case 225u: goto L_00321E58;
    case 226u: goto L_00321E70;
    case 227u: goto L_00321E90;
    case 228u: goto L_00321F08;
    case 229u: goto L_00321F14;
    case 230u: goto L_00321F2C;
    case 231u: goto L_00321F50;
    case 232u: goto L_00321FC8;
    case 233u: goto L_00321FD4;
    case 234u: goto L_00321FEC;
    case 235u: goto L_00322010;
    case 236u: goto L_00322088;
    case 237u: goto L_00322094;
    case 238u: goto L_003220AC;
    case 239u: goto L_003220D0;
    case 240u: goto L_00322148;
    case 241u: goto L_00322154;
    case 242u: goto L_0032216C;
    case 243u: goto L_00322190;
    case 244u: goto L_00322208;
    case 245u: goto L_00322214;
    case 246u: goto L_0032222C;
    case 247u: goto L_00322250;
    case 248u: goto L_003222AC;
    case 249u: goto L_003222B8;
    case 250u: goto L_003222C4;
    case 251u: goto L_003222DC;
    case 252u: goto L_00322300;
    case 253u: goto L_00322310;
    case 254u: goto L_00322320;
    case 255u: goto L_00322330;
    case 256u: goto L_00322340;
    case 257u: goto L_00322350;
    case 258u: goto L_00322360;
    case 259u: goto L_00322370;
    case 260u: goto L_00322380;
    case 261u: goto L_003223B0;
    case 262u: goto L_003223D0;
    case 263u: goto L_003223F0;
    case 264u: goto L_00322404;
    case 265u: goto L_00322440;
    case 266u: goto L_003224A0;
    case 267u: goto L_003224C0;
    case 268u: goto L_003224F0;
    case 269u: goto L_0032250C;
    case 270u: goto L_00322550;
    case 271u: goto L_00322564;
    case 272u: goto L_003225A0;
    case 273u: goto L_003225B8;
    case 274u: goto L_003225C4;
    case 275u: goto L_003225E0;
    case 276u: goto L_00322614;
    case 277u: goto L_00322624;
    case 278u: goto L_0032262C;
    case 279u: goto L_0032263C;
    case 280u: goto L_00322644;
    case 281u: goto L_00322654;
    case 282u: goto L_0032265C;
    case 283u: goto L_0032266C;
    case 284u: goto L_00322674;
    case 285u: goto L_00322684;
    case 286u: goto L_0032268C;
    case 287u: goto L_0032269C;
    case 288u: goto L_003226A4;
    case 289u: goto L_003226B4;
    case 290u: goto L_003226BC;
    case 291u: goto L_003226CC;
    case 292u: goto L_003226E4;
    case 293u: goto L_003226F0;
    case 294u: goto L_00322798;
    case 295u: goto L_003227A8;
    case 296u: goto L_003227B8;
    case 297u: goto L_003227C0;
    case 298u: goto L_003227D0;
    case 299u: goto L_003227E0;
    case 300u: goto L_003227E8;
    case 301u: goto L_003227F8;
    case 302u: goto L_00322808;
    case 303u: goto L_00322810;
    case 304u: goto L_00322820;
    case 305u: goto L_00322830;
    case 306u: goto L_00322838;
    case 307u: goto L_00322848;
    case 308u: goto L_00322858;
    case 309u: goto L_00322860;
    case 310u: goto L_00322870;
    case 311u: goto L_00322880;
    case 312u: goto L_00322888;
    case 313u: goto L_00322898;
    case 314u: goto L_003228A8;
    case 315u: goto L_003228B0;
    case 316u: goto L_003228C0;
    case 317u: goto L_003228D0;
    case 318u: goto L_0032291C;
    case 319u: goto L_0032292C;
    case 320u: goto L_0032293C;
    case 321u: goto L_00322A50;
    case 322u: goto L_00322B20;
    case 323u: goto L_00322B98;
    case 324u: goto L_00322BA4;
    case 325u: goto L_00322BBC;
    case 326u: goto L_00322BE0;
    case 327u: goto L_00322C3C;
    case 328u: goto L_00322C48;
    case 329u: goto L_00322C54;
    case 330u: goto L_00322C6C;
    case 331u: goto L_00322C90;
    case 332u: goto L_00322CA0;
    case 333u: goto L_00322CB0;
    case 334u: goto L_00322CC0;
    case 335u: goto L_00322CF0;
    case 336u: goto L_00322D10;
    case 337u: goto L_00322D30;
    case 338u: goto L_00322D44;
    case 339u: goto L_00322D70;
    case 340u: goto L_00322D80;
    case 341u: goto L_00322D90;
    case 342u: goto L_00322DA0;
    case 343u: goto L_00322DC0;
    case 344u: goto L_00322DF4;
    case 345u: goto L_00322E04;
    case 346u: goto L_00322E0C;
    case 347u: goto L_00322E20;
    case 348u: goto L_00322E90;
    case 349u: goto L_00322EB0;
    case 350u: goto L_00322EDC;
    case 351u: goto L_00322F14;
    case 352u: goto L_00322F24;
    case 353u: goto L_00322F44;
    case 354u: goto L_00322F70;
    case 355u: goto L_00322F8C;
    case 356u: goto L_00322FA0;
    case 357u: goto L_00322FD0;
    case 358u: goto L_00322FE4;
    case 359u: goto L_00323020;
    case 360u: goto L_00323030;
    case 361u: goto L_00323040;
    case 362u: goto L_00323060;
    case 363u: goto L_0032306C;
    case 364u: goto L_00323074;
    case 365u: goto L_0032307C;
    case 366u: goto L_00323088;
    case 367u: goto L_00323090;
    case 368u: goto L_00323098;
    case 369u: goto L_003230A0;
    case 370u: goto L_003230B0;
    case 371u: goto L_003230E0;
    case 372u: goto L_00323140;
    case 373u: goto L_00323154;
    case 374u: goto L_00323160;
    case 375u: goto L_003231B4;
    case 376u: goto L_003231C4;
    case 377u: goto L_003231D4;
    case 378u: goto L_003231E4;
    case 379u: goto L_00323204;
    case 380u: goto L_00323230;
    case 381u: goto L_0032326C;
    case 382u: goto L_0032327C;
    case 383u: goto L_00323290;
    case 384u: goto L_003232C8;
    case 385u: goto L_003232E0;
    case 386u: goto L_00323308;
    case 387u: goto L_00323338;
    case 388u: goto L_00323348;
    case 389u: goto L_00323360;
    case 390u: goto L_00323388;
    case 391u: goto L_003233F4;
    case 392u: goto L_00323408;
    case 393u: goto L_0032346C;
    case 394u: goto L_00323480;
    case 395u: goto L_00323494;
    case 396u: goto L_003234C0;
    case 397u: goto L_003234E8;
    case 398u: goto L_00323564;
    case 399u: goto L_00323578;
    case 400u: goto L_00323590;
    case 401u: goto L_003235B0;
    case 402u: goto L_003235D8;
    case 403u: goto L_00323654;
    case 404u: goto L_00323668;
    case 405u: goto L_00323680;
    case 406u: goto L_003236A0;
    case 407u: goto L_003236BC;
    case 408u: goto L_003236D4;
    case 409u: goto L_003236F0;
    case 410u: goto L_00323750;
    case 411u: goto L_0032376C;
    case 412u: goto L_00323790;
    case 413u: goto L_003237B0;
    case 414u: goto L_003237D0;
    case 415u: goto L_003237E4;
    case 416u: goto L_00323808;
    case 417u: goto L_00323828;
    case 418u: goto L_00323874;
    case 419u: goto L_00323888;
    case 420u: goto L_00323894;
    case 421u: goto L_003238A8;
    case 422u: goto L_003238C0;
    case 423u: goto L_003238D0;
    case 424u: goto L_003238E4;
    case 425u: goto L_003238F4;
    case 426u: goto L_00323910;
    case 427u: goto L_00323944;
    case 428u: goto L_00323960;
    case 429u: goto L_00323970;
    case 430u: goto L_003239B0;
    case 431u: goto L_003239CC;
    case 432u: goto L_003239E0;
    case 433u: goto L_00323A1C;
    case 434u: goto L_00323A4C;
    case 435u: goto L_00323A74;
    case 436u: goto L_00323A84;
    case 437u: goto L_00323AE8;
    case 438u: goto L_00323AF0;
    case 439u: goto L_00323AF8;
    case 440u: goto L_00323B50;
    case 441u: goto L_00323B8C;
    case 442u: goto L_00323BBC;
    case 443u: goto L_00323BE4;
    case 444u: goto L_00323BF4;
    case 445u: goto L_00323C58;
    case 446u: goto L_00323C60;
    case 447u: goto L_00323C68;
    case 448u: goto L_00323CC0;
    case 449u: goto L_00323D00;
    case 450u: goto L_00323D38;
    case 451u: goto L_00323DA0;
    case 452u: goto L_00323DBC;
    case 453u: goto L_00323DF4;
    case 454u: goto L_00323E1C;
    case 455u: goto L_00323E40;
    case 456u: goto L_00323E64;
    case 457u: goto L_00323E6C;
    case 458u: goto L_00323E80;
    case 459u: goto L_00323E9C;
    case 460u: goto L_00323EA4;
    case 461u: goto L_00323EC0;
    case 462u: goto L_00323ED8;
    case 463u: goto L_00323F50;
    case 464u: goto L_00323F84;
    case 465u: goto L_00323F98;
    case 466u: goto L_00323FA4;
    case 467u: goto L_00323FC8;
    case 468u: goto L_00323FD4;
    default: bad_entry(c, 0x00320000u); return;
    }
L_00320000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320008u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00320008u) [[unlikely]] return; }
L_00320008:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0032002C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032002C; } }
    set32(c.r[6], 0u - c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032002Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0032002Cu) [[unlikely]] return; }
L_0032002C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  goto L_00320054; }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 8;
L_00320054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032005Cu); set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));  if (depth < kMaxDepth) unit_006D(c, 131u, depth + 1u); else { c.pc = 0x002D5890u; return; } if (c.pc != 0x0032005Cu) [[unlikely]] return; }
L_0032005C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00320074; } }
L_00320068:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_00320074:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00320078:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00320090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032011C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 16928u);
    set32(c.r[2], c.r[2].w[0] - 16872u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00320104; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003200ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x003200ECu) [[unlikely]] return; }
L_003200EC:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003200F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x003200F8u) [[unlikely]] return; }
L_003200F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320104u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00320104u) [[unlikely]] return; }
L_00320104:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00320120; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032011Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0032011Cu) [[unlikely]] return; }
L_0032011C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00320120:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00320140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003201C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 16688u);
    set32(c.r[2], c.r[2].w[0] - 16632u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003201A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25440u);
    set32(c.r[2], c.r[2].w[0] + 25496u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032019Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0032019Cu) [[unlikely]] return; }
L_0032019C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003201A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x003201A8u) [[unlikely]] return; }
L_003201A8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003201C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003201C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003201C0u) [[unlikely]] return; }
L_003201C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003201C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003201E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 10u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00320228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320200u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00320200u) [[unlikely]] return; }
L_00320200:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00320230; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00320214; } }
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_00320214:
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320220u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 416u, depth + 1u); else { c.pc = 0x0031FC10u; return; } if (c.pc != 0x00320220u) [[unlikely]] return; }
L_00320220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032022C; } }
L_00320228:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032022C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00320230:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00320240:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00320258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00320260; } }
L_00320258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320260u);  if (depth < kMaxDepth) unit_0063(c, 207u, depth + 1u); else { c.pc = 0x002AE0E0u; return; } if (c.pc != 0x00320260u) [[unlikely]] return; }
L_00320260:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00320270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00320288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00320290; } }
L_00320288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320290u);  if (depth < kMaxDepth) unit_0063(c, 214u, depth + 1u); else { c.pc = 0x002AE2C0u; return; } if (c.pc != 0x00320290u) [[unlikely]] return; }
L_00320290:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003202A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00320140u | kUnwind; return; } goto L_00320140; }
L_003202B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00320090u | kUnwind; return; } goto L_00320090; }
L_003202C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031FCD0u | kUnwind; return; } [[clang::musttail]] return unit_007F(c, 421u, depth); }
L_003202D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320300u); set32(c.r[4], 0u + 1424u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00320300u) [[unlikely]] return; }
L_00320300:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00320324; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320320u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 30u, depth + 1u); else { c.pc = 0x00320340u; return; } if (c.pc != 0x00320320u) [[unlikely]] return; }
L_00320320:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00320324:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00320340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320354u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x00320354u) [[unlikely]] return; }
L_00320354:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 16496u);
    set32(c.r[2], c.r[2].w[0] - 16440u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00320390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032041C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 16496u);
    set32(c.r[2], c.r[2].w[0] - 16440u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00320404; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003203ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x003203ECu) [[unlikely]] return; }
L_003203EC:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003203F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x003203F8u) [[unlikely]] return; }
L_003203F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320404u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00320404u) [[unlikely]] return; }
L_00320404:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00320420; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032041Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0032041Cu) [[unlikely]] return; }
L_0032041C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00320420:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00320440:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00320480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003204CC; } }
L_00320480:
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 124u);  goto L_00320498; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003204CC; } }
    set32(c.r[4], 0u + 124u);
    c.budget -= 1;
L_00320498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003204A0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003204A0u) [[unlikely]] return; }
L_003204A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003204D0; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003204C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 40u, depth + 1u); else { c.pc = 0x003204F0u; return; } if (c.pc != 0x003204C0u) [[unlikely]] return; }
L_003204C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003204CC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003204CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003204D0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003204F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320504u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 294u, depth + 1u); else { c.pc = 0x00272710u; return; } if (c.pc != 0x00320504u) [[unlikely]] return; }
L_00320504:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 16592u);
    set32(c.r[3], c.r[3].w[0] - 16536u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00320540:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032055Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x0032055Cu) [[unlikely]] return; }
L_0032055C:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_00320584; }
    c.f[1] = 0u;
    c.budget -= 1;
L_00320584:
    c.f[0] = ld32((c.r[17].w[0] + 116u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 116u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003209AC; }
    c.f[1] = ld32((c.r[17].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A40000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003209A8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], 0u + 4004u);
    set32(c.r[16], ld32((c.r[3].w[0] + 1320u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003207C0; }
    set32(c.r[2], 0u + 4003u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003205E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0032099C; } }
L_003205E4:
    set32(c.r[5], 0u + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003205F0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x003205F0u) [[unlikely]] return; }
L_003205F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 31u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320600u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00320600u) [[unlikely]] return; }
L_00320600:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 29u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320610u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00320610u) [[unlikely]] return; }
L_00320610:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320620u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00320620u) [[unlikely]] return; }
L_00320620:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 4004u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320634u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00320634u) [[unlikely]] return; }
L_00320634:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00320700; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032064Cu); set32(c.r[6], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0032064Cu) [[unlikely]] return; }
L_0032064C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032065Cu); set32(c.r[6], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0032065Cu) [[unlikely]] return; }
L_0032065C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032066Cu); set32(c.r[6], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0032066Cu) [[unlikely]] return; }
L_0032066C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032067Cu); set32(c.r[6], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0032067Cu) [[unlikely]] return; }
L_0032067C:
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00320690; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003206E8; } }
L_00320690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320698u); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00320698u) [[unlikely]] return; }
L_00320698:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003206B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003206C8; } }
L_003206B8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003206C8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003206E8; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_003206E0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003206E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003206E8; } }
L_003206E8:
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003206F8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 127u, depth + 1u); else { c.pc = 0x002D57D0u; return; } if (c.pc != 0x003206F8u) [[unlikely]] return; }
L_003206F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 520u), c.r[18].w[0]);  if (t) { goto L_00320998; } }
L_00320700:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032070Cu); set32(c.r[6], 0u + 71u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0032070Cu) [[unlikely]] return; }
L_0032070C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032071Cu); set32(c.r[6], 0u + 71u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0032071Cu) [[unlikely]] return; }
L_0032071C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032072Cu); set32(c.r[6], 0u + 71u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0032072Cu) [[unlikely]] return; }
L_0032072C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032073Cu); set32(c.r[6], 0u + 71u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x0032073Cu) [[unlikely]] return; }
L_0032073C:
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00320750; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003207A8; } }
L_00320750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320758u); set32(c.r[5], 0u + 71u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00320758u) [[unlikely]] return; }
L_00320758:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00320778; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00320788; } }
L_00320778:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00320788:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003207A8; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_003207A0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003207A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003207A8; } }
L_003207A8:
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003207B8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 127u, depth + 1u); else { c.pc = 0x002D57D0u; return; } if (c.pc != 0x003207B8u) [[unlikely]] return; }
L_003207B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 520u), c.r[18].w[0]);  if (t) { goto L_00320998; } }
L_003207C0:
    set32(c.r[5], 0u + 35u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003207CCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x003207CCu) [[unlikely]] return; }
L_003207CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 38u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003207DCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x003207DCu) [[unlikely]] return; }
L_003207DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003207ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x003207ECu) [[unlikely]] return; }
L_003207EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 39u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003207FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x003207FCu) [[unlikely]] return; }
L_003207FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 4003u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320810u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00320810u) [[unlikely]] return; }
L_00320810:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003208DC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320828u); set32(c.r[6], 0u + 70u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x00320828u) [[unlikely]] return; }
L_00320828:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320838u); set32(c.r[6], 0u + 70u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x00320838u) [[unlikely]] return; }
L_00320838:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320848u); set32(c.r[6], 0u + 70u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x00320848u) [[unlikely]] return; }
L_00320848:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320858u); set32(c.r[6], 0u + 70u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x00320858u) [[unlikely]] return; }
L_00320858:
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0032086C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003208C4; } }
L_0032086C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320874u); set32(c.r[5], 0u + 70u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00320874u) [[unlikely]] return; }
L_00320874:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00320894; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003208A4; } }
L_00320894:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003208A4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003208C4; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_003208BC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003208BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003208C4; } }
L_003208C4:
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003208D4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 127u, depth + 1u); else { c.pc = 0x002D57D0u; return; } if (c.pc != 0x003208D4u) [[unlikely]] return; }
L_003208D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 520u), c.r[18].w[0]);  if (t) { goto L_00320998; } }
L_003208DC:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003208E8u); set32(c.r[6], 0u + 71u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x003208E8u) [[unlikely]] return; }
L_003208E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003208F8u); set32(c.r[6], 0u + 71u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x003208F8u) [[unlikely]] return; }
L_003208F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320908u); set32(c.r[6], 0u + 71u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x00320908u) [[unlikely]] return; }
L_00320908:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320918u); set32(c.r[6], 0u + 71u);  if (depth < kMaxDepth) unit_006D(c, 157u, depth + 1u); else { c.pc = 0x002D5C40u; return; } if (c.pc != 0x00320918u) [[unlikely]] return; }
L_00320918:
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0032092C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00320984; } }
L_0032092C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320934u); set32(c.r[5], 0u + 71u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00320934u) [[unlikely]] return; }
L_00320934:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00320954; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00320964; } }
L_00320954:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00320964:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00320984; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_0032097C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0032097C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320984; } }
L_00320984:
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320994u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 127u, depth + 1u); else { c.pc = 0x002D57D0u; return; } if (c.pc != 0x00320994u) [[unlikely]] return; }
L_00320994:
    st32((c.r[16].w[0] + 520u), c.r[18].w[0]);
    c.budget -= 1;
L_00320998:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0032099C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003209A8u); st32((c.r[17].w[0] + 120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006D(c, 131u, depth + 1u); else { c.pc = 0x002D5890u; return; } if (c.pc != 0x003209A8u) [[unlikely]] return; }
L_003209A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003209AC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003209C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00320A5C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 16592u);
    set32(c.r[2], c.r[2].w[0] - 16536u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00320A44; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22256u);
    set32(c.r[2], c.r[2].w[0] + 22312u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00320A44; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320A38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00320A38u) [[unlikely]] return; }
L_00320A38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320A44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00320A44u) [[unlikely]] return; }
L_00320A44:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00320A60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320A5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00320A5Cu) [[unlikely]] return; }
L_00320A5C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00320A60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00320A80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00320390u | kUnwind; return; } goto L_00320390; }
L_00320A90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003209C0u | kUnwind; return; } goto L_003209C0; }
L_00320AA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320AD0u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00320AD0u) [[unlikely]] return; }
L_00320AD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00320AF4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320AF0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 88u, depth + 1u); else { c.pc = 0x00320B10u; return; } if (c.pc != 0x00320AF0u) [[unlikely]] return; }
L_00320AF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00320AF4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00320B10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320B2Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x00320B2Cu) [[unlikely]] return; }
L_00320B2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 15632u);
    set32(c.r[3], c.r[3].w[0] - 15576u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 1428u), 0u);
    st32((c.r[16].w[0] + 1424u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1432u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 584u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 14;
    if (c.r[3].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_00320B74; }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[3].w[0])));  goto L_00320B74; }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00320B74:
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00320B90; }
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[3].w[0])));  goto L_00320B90; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00320B90:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00320BC8; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00320BC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320BA8u); set32(c.r[4], 0u + 352u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00320BA8u) [[unlikely]] return; }
L_00320BA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 1428u), c.r[2].w[0]);  goto L_00320BC4; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320BC0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 107u, depth + 1u); else { c.pc = 0x001589C0u; return; } if (c.pc != 0x00320BC0u) [[unlikely]] return; }
L_00320BC0:
    st32((c.r[16].w[0] + 1428u), c.r[2].w[0]);
    c.budget -= 1;
L_00320BC4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00320BC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00320BE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320BFCu); set32(c.r[4], 0u + 660u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00320BFCu) [[unlikely]] return; }
L_00320BFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00320C28; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320C10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 8u, depth + 1u); else { c.pc = 0x002AC0E0u; return; } if (c.pc != 0x00320C10u) [[unlikely]] return; }
L_00320C10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 16256u);
    set32(c.r[2], c.r[2].w[0] - 16200u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 6;
L_00320C28:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00320C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1428u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00320C74; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00320C6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00320C6Cu) [[unlikely]] return; }
L_00320C6C:
    st32((c.r[16].w[0] + 1428u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00320C74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320C7Cu);  if (depth < kMaxDepth) unit_0057(c, 85u, depth + 1u); else { c.pc = 0x0027CCC0u; return; } if (c.pc != 0x00320C7Cu) [[unlikely]] return; }
L_00320C7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00320C90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00320CD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00320F88; } }
L_00320CD0:
    set32(c.r[2], ld32((c.r[19].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[19].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 1424u)));  if (t) { goto L_00320D5C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_00320D60; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_00320D44; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00320D40; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00320D40; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00320D40; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00320D40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00320D54; } }
L_00320D40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_00320D44:
    c.r[2].d[0] = c.r[2].d[0] | 33464ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1424u), c.r[2].w[0]);  if (t) { goto L_00320D64; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00320D54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1424u), c.r[2].w[0]);  if (t) { goto L_00320D64; } }
L_00320D5C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00320D60:
    st32((c.r[19].w[0] + 1424u), c.r[2].w[0]);
    c.budget -= 1;
L_00320D64:
    set32(c.r[2], ld32((c.r[19].w[0] + 1424u)));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 26u);  goto L_00320E40; }
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { set32(c.r[2], ld32((c.r[19].w[0] + 1424u)));  goto L_00320D88; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320D84u); set32(c.r[5], 0u + 11100u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00320D84u) [[unlikely]] return; }
L_00320D84:
    set32(c.r[2], ld32((c.r[19].w[0] + 1424u)));
    c.budget -= 1;
L_00320D88:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00320E3C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00320DA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00320E10; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00320DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320DB0u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00320DB0u) [[unlikely]] return; }
L_00320DB0:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00320DD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00320DE4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_00320DD4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00320DE4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00320E10; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00320E04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00320E04; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_00320E04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320E10; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00320E10:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 11100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320E20u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00320E20u) [[unlikely]] return; }
L_00320E20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00320E3C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320E3Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00320E3Cu) [[unlikely]] return; }
L_00320E3C:
    set32(c.r[2], 0u + 26u);
    c.budget -= 1;
L_00320E40:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 116u);  goto L_00320F54; }
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 124u);  goto L_00320F20; }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 240u);  goto L_00320EEC; }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 140u);  goto L_00320EB8; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 116u);  goto L_00320E84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00320F88; } }
    set32(c.r[4], 0u + 116u);
    c.budget -= 1;
L_00320E84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320E8Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00320E8Cu) [[unlikely]] return; }
L_00320E8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00320F8C; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320EACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 127u, depth + 1u); else { c.pc = 0x00321110u; return; } if (c.pc != 0x00320EACu) [[unlikely]] return; }
L_00320EAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320F88; } }
    set32(c.r[4], 0u + 140u);
    c.budget -= 1;
L_00320EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320EC0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00320EC0u) [[unlikely]] return; }
L_00320EC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00320F88; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320EE0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 135u, depth + 1u); else { c.pc = 0x00321250u; return; } if (c.pc != 0x00320EE0u) [[unlikely]] return; }
L_00320EE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320F88; } }
    set32(c.r[4], 0u + 240u);
    c.budget -= 1;
L_00320EEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320EF4u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00320EF4u) [[unlikely]] return; }
L_00320EF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00320F88; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320F14u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 154u, depth + 1u); else { c.pc = 0x00321540u; return; } if (c.pc != 0x00320F14u) [[unlikely]] return; }
L_00320F14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320F88; } }
    set32(c.r[4], 0u + 124u);
    c.budget -= 1;
L_00320F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320F28u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00320F28u) [[unlikely]] return; }
L_00320F28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00320F88; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320F48u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 164u, depth + 1u); else { c.pc = 0x00321630u; return; } if (c.pc != 0x00320F48u) [[unlikely]] return; }
L_00320F48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320F88; } }
    set32(c.r[4], 0u + 116u);
    c.budget -= 1;
L_00320F54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320F5Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00320F5Cu) [[unlikely]] return; }
L_00320F5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00320F88; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320F7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 169u, depth + 1u); else { c.pc = 0x003216F0u; return; } if (c.pc != 0x00320F7Cu) [[unlikely]] return; }
L_00320F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320F88; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00320F88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00320F8C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00320FB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320FD0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0057(c, 181u, depth + 1u); else { c.pc = 0x0027DC70u; return; } if (c.pc != 0x00320FD0u) [[unlikely]] return; }
L_00320FD0:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003210EC; }
    set32(c.r[3], ld32((c.r[19].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_00321004; }
    set32(c.r[3], ld32((c.r[19].w[0] + 1432u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003210E8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00321004:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  goto L_00321088; }
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321020u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00321020u) [[unlikely]] return; }
L_00321020:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00321084; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[3].w[0] + 3024u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + 2916u);  if (t) { goto L_00321078; } }
L_00321048:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321058u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x00321058u) [[unlikely]] return; }
L_00321058:
    c.r[3].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00321084; } }
    set32(c.r[3], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_003210E8; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00321078:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00321048u | kUnwind; return; } goto L_00321048; }
L_00321084:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 1;
L_00321088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321090u);  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x00321090u) [[unlikely]] return; }
L_00321090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321098u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x00321098u) [[unlikely]] return; }
L_00321098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003210A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003210A0u) [[unlikely]] return; }
L_003210A0:
    set32(c.r[16], ld32((c.r[19].w[0] + 1320u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 464u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003210B0u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000E(c, 163u, depth + 1u); else { c.pc = 0x00159070u; return; } if (c.pc != 0x003210B0u) [[unlikely]] return; }
L_003210B0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003210BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x003210BCu) [[unlikely]] return; }
L_003210BC:
    set32(c.r[5], c.r[16].w[0] + 352u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003210CCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x003210CCu) [[unlikely]] return; }
L_003210CC:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003210D8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0010(c, 150u, depth + 1u); else { c.pc = 0x001615B0u; return; } if (c.pc != 0x003210D8u) [[unlikely]] return; }
L_003210D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003210E0u); set32(c.r[4], ld32((c.r[19].w[0] + 1428u)));  if (depth < kMaxDepth) unit_000E(c, 213u, depth + 1u); else { c.pc = 0x00159910u; return; } if (c.pc != 0x003210E0u) [[unlikely]] return; }
L_003210E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003210E8u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x003210E8u) [[unlikely]] return; }
L_003210E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003210EC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00321110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321124u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 148u, depth + 1u); else { c.pc = 0x00275380u; return; } if (c.pc != 0x00321124u) [[unlikely]] return; }
L_00321124:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 15728u);
    set32(c.r[3], c.r[3].w[0] - 15672u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 112u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00321160:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032117Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0055(c, 166u, depth + 1u); else { c.pc = 0x002756A0u; return; } if (c.pc != 0x0032117Cu) [[unlikely]] return; }
L_0032117C:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00321230; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 1104u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032122C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003211A4u); set32(c.r[5], 0u + 10900u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x003211A4u) [[unlikely]] return; }
L_003211A4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], ld32((c.r[3].w[0] + 3028u)));  if (t) { goto L_0032122C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0032122C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003211C4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001C(c, 2u, depth + 1u); else { c.pc = 0x00190050u; return; } if (c.pc != 0x003211C4u) [[unlikely]] return; }
L_003211C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = ld32((c.r[2].w[0] + 20640u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[3] = ld32((c.r[18].w[0] + 196u));
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 20644u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 20648u));
    st32((c.r[29].w[0] + 68u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 20652u));
    st32((c.r[29].w[0] + 72u), c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032120Cu); st32((c.r[29].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0032120Cu) [[unlikely]] return; }
L_0032120C:
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321218u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00321218u) [[unlikely]] return; }
L_00321218:
    set32(c.r[4], ld32((c.r[16].w[0] + 308u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 5;
L_0032122C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00321230:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00321250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321264u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x00321264u) [[unlikely]] return; }
L_00321264:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 15824u);
    set32(c.r[2], c.r[2].w[0] - 15768u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003212A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003212B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 57u, depth + 1u); else { c.pc = 0x0026C870u; return; } if (c.pc != 0x003212B4u) [[unlikely]] return; }
L_003212B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003212CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003212C8u);  if (depth < kMaxDepth) unit_005B(c, 82u, depth + 1u); else { c.pc = 0x0028CF00u; return; } if (c.pc != 0x003212C8u) [[unlikely]] return; }
L_003212C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003212CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003212E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003212F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x003212F4u) [[unlikely]] return; }
L_003212F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0032141C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00321418; } }
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], 0u + 186u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 136u), c.r[4].w[0]);  if (t) { goto L_00321404; } }
    set32(c.r[3], 0u + 148u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_003213F4; }
    set32(c.r[3], 0u + 140u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_003213E4; }
    set32(c.r[3], 0u + 133u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_003213D4; }
    set32(c.r[3], 0u + 127u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_003213C4; }
    set32(c.r[3], 0u + 116u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_003213B4; }
    set32(c.r[3], 0u + 109u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_003213A4; }
    set32(c.r[3], 0u + 99u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_00321394; }
    set32(c.r[3], 0u + 87u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_00321384; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321418; } }
L_00321384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032138Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x0032138Cu) [[unlikely]] return; }
L_0032138C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321418; } }
L_00321394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032139Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x0032139Cu) [[unlikely]] return; }
L_0032139C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321418; } }
L_003213A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003213ACu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x003213ACu) [[unlikely]] return; }
L_003213AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321418; } }
L_003213B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003213BCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x003213BCu) [[unlikely]] return; }
L_003213BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321418; } }
L_003213C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003213CCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x003213CCu) [[unlikely]] return; }
L_003213CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321418; } }
L_003213D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003213DCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x003213DCu) [[unlikely]] return; }
L_003213DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321418; } }
L_003213E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003213ECu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x003213ECu) [[unlikely]] return; }
L_003213EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321418; } }
L_003213F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003213FCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x003213FCu) [[unlikely]] return; }
L_003213FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321418; } }
L_00321404:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321410u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x00321410u) [[unlikely]] return; }
L_00321410:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 2;
L_00321418:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0032141C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00321430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 44u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00321454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0032152C; } }
L_00321454:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321460u); set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));  if (depth < kMaxDepth) unit_005A(c, 338u, depth + 1u); else { c.pc = 0x0028B760u; return; } if (c.pc != 0x00321460u) [[unlikely]] return; }
L_00321460:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u + 750u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], 0u + 650u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[16], ld32((c.r[4].w[0] + 3028u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[9], ld32((c.r[16].w[0] + 244u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[8], ld32((c.r[16].w[0] + 248u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 252u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 240u), 0u);
    st32((c.r[16].w[0] + 244u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 248u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 252u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003214E8u); set32(c.r[6], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003214E8u) [[unlikely]] return; }
L_003214E8:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[16].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[16].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[16].w[0] + 204u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 136u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 17;
L_0032152C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00321540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321558u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0053(c, 143u, depth + 1u); else { c.pc = 0x0026D670u; return; } if (c.pc != 0x00321558u) [[unlikely]] return; }
L_00321558:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 15968u);
    set32(c.r[2], c.r[2].w[0] - 15912u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], 0u + 72u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032158Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x0032158Cu) [[unlikely]] return; }
L_0032158C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032159Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0032159Cu) [[unlikely]] return; }
L_0032159C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003215A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003215A4u) [[unlikely]] return; }
L_003215A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003215C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D8E0u | kUnwind; return; } [[clang::musttail]] return unit_0053(c, 154u, depth); }
L_003215D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00321614; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00321618; }
    set32(c.r[5], 0u + 72u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321608u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x00321608u) [[unlikely]] return; }
L_00321608:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321614u); set32(c.r[5], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00321614u) [[unlikely]] return; }
L_00321614:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00321618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321620u);  if (depth < kMaxDepth) unit_0053(c, 159u, depth + 1u); else { c.pc = 0x0026D950u; return; } if (c.pc != 0x00321620u) [[unlikely]] return; }
L_00321620:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00321630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321644u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 294u, depth + 1u); else { c.pc = 0x00272710u; return; } if (c.pc != 0x00321644u) [[unlikely]] return; }
L_00321644:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 16064u);
    set32(c.r[3], c.r[3].w[0] - 16008u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00321680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321694u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x00321694u) [[unlikely]] return; }
L_00321694:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003216E4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.r[1].d[0] = c.r[3].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003216E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003216D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x003216D0u) [[unlikely]] return; }
L_003216D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 1432u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 120u), c.r[4].w[0]);
    c.budget -= 4;
L_003216E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003216E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003216F0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032170Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006B(c, 249u, depth + 1u); else { c.pc = 0x002CEE10u; return; } if (c.pc != 0x0032170Cu) [[unlikely]] return; }
L_0032170C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 16160u);
    set32(c.r[2], c.r[2].w[0] - 16104u);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 100u), 0u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[18].w[0] + 104u), 0u);
    c.budget -= 11;
L_00321738:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 96u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00321738u | kUnwind; return; } goto L_00321738; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0032175C:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 136u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032175Cu | kUnwind; return; } goto L_0032175C; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 2;
L_00321780:
    set32(c.r[5], c.r[16].w[0] + 4006u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321790u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00321790u) [[unlikely]] return; }
L_00321790:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_003217AC; }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[2].w[0] + 96u), c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 5;
L_003217AC:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00321780u | kUnwind; return; } goto L_00321780; }
    set32(c.r[16], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003217C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003217C4u) [[unlikely]] return; }
L_003217C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003217D0u); st32((c.r[29].w[0] + 136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x003217D0u) [[unlikely]] return; }
L_003217D0:
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (t) { goto L_003217F0; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 140u), c.r[3].w[0]);  if (t) { goto L_003217F0; } }
    st32((c.r[29].w[0] + 140u), 0u);
    c.budget -= 1;
L_003217F0:
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[4], c.r[4].w[0] + 4006u);
    st32((c.r[18].w[0] + 108u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4006u);
    st32((c.r[18].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 22;
L_00321848:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 1296u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 144u)));  if (t) { goto L_00321860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_00321864; } }
L_00321860:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00321864:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[8], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[9], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[2].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032188Cu); set32(c.r[10], 0u - 1u);  if (depth < kMaxDepth) unit_005B(c, 291u, depth + 1u); else { c.pc = 0x0028ED50u; return; } if (c.pc != 0x0032188Cu) [[unlikely]] return; }
L_0032188C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 76u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00321848u | kUnwind; return; } goto L_00321848; }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003218C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 9;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00321B8C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  goto L_00321A64; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 76u)));  goto L_00321900; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00321B98; } }
L_00321900:
    set32(c.r[3], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00321914; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00321978; } }
L_00321914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032191Cu); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0032191Cu) [[unlikely]] return; }
L_0032191C:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0032193C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0032194C; } }
L_0032193C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0032194C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00321978; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 9u));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_0032196C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00321970; } }
L_0032196C:
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.budget -= 1;
L_00321970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321978; } }
L_00321978:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00321B94; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00321998; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003219F0; } }
L_00321998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003219A0u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003219A0u) [[unlikely]] return; }
L_003219A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003219C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003219D0; } }
L_003219C0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003219D0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_003219F0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_003219E8; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003219E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003219F0; } }
L_003219F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[6], 0u + 20000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321A00u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00321A00u) [[unlikely]] return; }
L_00321A00:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00321B94; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321A18u); set32(c.r[5], 0u + 11100u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00321A18u) [[unlikely]] return; }
L_00321A18:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321A30u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00321A30u) [[unlikely]] return; }
L_00321A30:
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[16].w[0] + 100u), c.r[6].w[0]);
    set32(c.r[5], 0u + 25u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00321A54u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00321A54u) [[unlikely]] return; }
L_00321A54:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321A60u); set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));  if (depth < kMaxDepth) unit_005A(c, 338u, depth + 1u); else { c.pc = 0x0028B760u; return; } if (c.pc != 0x00321A60u) [[unlikely]] return; }
L_00321A60:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 1;
L_00321A64:
    set32(c.r[3], 0u + 80u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[16].w[0] + 104u), c.r[4].w[0]);  if (t) { goto L_00321A9C; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 2;
L_00321A7C:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321A8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 194u, depth + 1u); else { c.pc = 0x00321BB0u; return; } if (c.pc != 0x00321A8Cu) [[unlikely]] return; }
L_00321A8C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00321A7Cu | kUnwind; return; } goto L_00321A7C; }
L_00321A9C:
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    c.r[1].d[0] = c.r[5].sd[0] < 341ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00321B0C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 604u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00321B94; } }
    c.r[1].d[0] = c.r[5].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00321B94; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00321B00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321AE0u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x00321AE0u) [[unlikely]] return; }
L_00321AE0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  goto L_00321AF4; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321B00; } }
L_00321AF4:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 152u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00321B00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00321B94; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00321B0C:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_00321B10:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321B20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 194u, depth + 1u); else { c.pc = 0x00321BB0u; return; } if (c.pc != 0x00321B20u) [[unlikely]] return; }
L_00321B20:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00321B10u | kUnwind; return; } goto L_00321B10; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321B3Cu); set32(c.r[5], 0u + 20000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00321B3Cu) [[unlikely]] return; }
L_00321B3C:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));  goto L_00321B6C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00321B68; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 600u), c.r[3].w[0]);
    c.budget -= 3;
L_00321B68:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 1;
L_00321B6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00321B88; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00321B88; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 604u), c.r[3].w[0]);
    c.budget -= 3;
L_00321B88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00321B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321B94u);  if (depth < kMaxDepth) unit_006B(c, 257u, depth + 1u); else { c.pc = 0x002CEEE0u; return; } if (c.pc != 0x00321B94u) [[unlikely]] return; }
L_00321B94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00321B98:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00321BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[5].w[0] - 4006u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 1320u)));  if (t) { goto L_00321D24; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 20880u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0080[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00321BEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 57u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321BFCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00321BFCu) [[unlikely]] return; }
L_00321BFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 59u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321C0Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00321C0Cu) [[unlikely]] return; }
L_00321C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00321D28; } }
L_00321C14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 53u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321C24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00321C24u) [[unlikely]] return; }
L_00321C24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 55u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321C34u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00321C34u) [[unlikely]] return; }
L_00321C34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321D24; } }
L_00321C3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 49u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321C4Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00321C4Cu) [[unlikely]] return; }
L_00321C4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 51u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321C5Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00321C5Cu) [[unlikely]] return; }
L_00321C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321D24; } }
L_00321C64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 45u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321C74u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00321C74u) [[unlikely]] return; }
L_00321C74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 47u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321C84u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00321C84u) [[unlikely]] return; }
L_00321C84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321D24; } }
L_00321C8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 41u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321C9Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00321C9Cu) [[unlikely]] return; }
L_00321C9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 43u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321CACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00321CACu) [[unlikely]] return; }
L_00321CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321D24; } }
L_00321CB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 69u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321CC4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00321CC4u) [[unlikely]] return; }
L_00321CC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 71u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321CD4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00321CD4u) [[unlikely]] return; }
L_00321CD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321D24; } }
L_00321CDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 65u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321CECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00321CECu) [[unlikely]] return; }
L_00321CEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 67u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321CFCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00321CFCu) [[unlikely]] return; }
L_00321CFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321D24; } }
L_00321D04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 61u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321D14u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00321D14u) [[unlikely]] return; }
L_00321D14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 63u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321D24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00321D24u) [[unlikely]] return; }
L_00321D24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00321D28:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00321D40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 9u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00321D70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00321DC0; } }
L_00321D70:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
L_00321D7C:
    set32(c.r[5], c.r[16].w[0] + 4006u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321D8Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00321D8Cu) [[unlikely]] return; }
L_00321D8C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00321D9C; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00321D9C:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00321D7Cu | kUnwind; return; } goto L_00321D7C; }
    c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00321DBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00321DC8; } }
L_00321DBC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00321DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321DC8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 207u, depth + 1u); else { c.pc = 0x002AE0E0u; return; } if (c.pc != 0x00321DC8u) [[unlikely]] return; }
L_00321DC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00321DF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00321E70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 16256u);
    set32(c.r[2], c.r[2].w[0] - 16200u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00321E58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25440u);
    set32(c.r[2], c.r[2].w[0] + 25496u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321E4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00321E4Cu) [[unlikely]] return; }
L_00321E4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321E58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00321E58u) [[unlikely]] return; }
L_00321E58:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00321E74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321E70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00321E70u) [[unlikely]] return; }
L_00321E70:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00321E74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00321E90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00321F2C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 16160u);
    set32(c.r[2], c.r[2].w[0] - 16104u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00321F14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28416u);
    set32(c.r[2], c.r[2].w[0] + 28472u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00321F14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321F08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00321F08u) [[unlikely]] return; }
L_00321F08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321F14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00321F14u) [[unlikely]] return; }
L_00321F14:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00321F30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321F2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00321F2Cu) [[unlikely]] return; }
L_00321F2C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00321F30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00321F50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00321FEC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 16064u);
    set32(c.r[2], c.r[2].w[0] - 16008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00321FD4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22256u);
    set32(c.r[2], c.r[2].w[0] + 22312u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00321FD4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321FC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00321FC8u) [[unlikely]] return; }
L_00321FC8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321FD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00321FD4u) [[unlikely]] return; }
L_00321FD4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00321FF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321FECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00321FECu) [[unlikely]] return; }
L_00321FEC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00321FF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00322010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003220AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 15968u);
    set32(c.r[2], c.r[2].w[0] - 15912u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00322094; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21632u);
    set32(c.r[2], c.r[2].w[0] + 21688u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00322094; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322088u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00322088u) [[unlikely]] return; }
L_00322088:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322094u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00322094u) [[unlikely]] return; }
L_00322094:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003220B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003220ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003220ACu) [[unlikely]] return; }
L_003220AC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003220B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003220D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032216C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 15824u);
    set32(c.r[2], c.r[2].w[0] - 15768u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00322154; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00322154; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322148u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00322148u) [[unlikely]] return; }
L_00322148:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322154u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00322154u) [[unlikely]] return; }
L_00322154:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00322170; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032216Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0032216Cu) [[unlikely]] return; }
L_0032216C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00322170:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00322190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032222C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 15728u);
    set32(c.r[2], c.r[2].w[0] - 15672u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00322214; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22832u);
    set32(c.r[2], c.r[2].w[0] + 22888u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00322214; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322208u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00322208u) [[unlikely]] return; }
L_00322208:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322214u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00322214u) [[unlikely]] return; }
L_00322214:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00322230; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032222Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0032222Cu) [[unlikely]] return; }
L_0032222C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00322230:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00322250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003222DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 15632u);
    set32(c.r[2], c.r[2].w[0] - 15576u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003222C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003222ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x003222ACu) [[unlikely]] return; }
L_003222AC:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003222B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x003222B8u) [[unlikely]] return; }
L_003222B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003222C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x003222C4u) [[unlikely]] return; }
L_003222C4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003222E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003222DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003222DCu) [[unlikely]] return; }
L_003222DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003222E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00322300:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00322250u | kUnwind; return; } goto L_00322250; }
L_00322310:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00322190u | kUnwind; return; } goto L_00322190; }
L_00322320:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003220D0u | kUnwind; return; } goto L_003220D0; }
L_00322330:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00321430u | kUnwind; return; } goto L_00321430; }
L_00322340:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00322010u | kUnwind; return; } goto L_00322010; }
L_00322350:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00321F50u | kUnwind; return; } goto L_00321F50; }
L_00322360:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00321E90u | kUnwind; return; } goto L_00321E90; }
L_00322370:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00321DF0u | kUnwind; return; } goto L_00321DF0; }
L_00322380:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003223B0u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003223B0u) [[unlikely]] return; }
L_003223B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003223D4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003223D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 263u, depth + 1u); else { c.pc = 0x003223F0u; return; } if (c.pc != 0x003223D0u) [[unlikely]] return; }
L_003223D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003223D4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003223F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322404u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x00322404u) [[unlikely]] return; }
L_00322404:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 15296u);
    set32(c.r[3], c.r[3].w[0] - 15240u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1424u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00322440:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00322480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003224CC; } }
L_00322480:
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 128u);  goto L_00322498; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003224CC; } }
    set32(c.r[4], 0u + 128u);
    c.budget -= 1;
L_00322498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003224A0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003224A0u) [[unlikely]] return; }
L_003224A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003224D0; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003224C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x00322550u; return; } if (c.pc != 0x003224C0u) [[unlikely]] return; }
L_003224C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003224CC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003224CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003224D0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003224F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032250Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 134u, depth + 1u); else { c.pc = 0x002CDC50u; return; } if (c.pc != 0x0032250Cu) [[unlikely]] return; }
L_0032250C:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 1424u)));  goto L_00322520; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00322538; } }
L_00322520:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00322534; } }
    set32(c.r[3], 0u + 50u);
    st16((c.r[4].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 1424u), 0u);
    c.budget -= 3;
L_00322534:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00322538:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00322550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322564u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 294u, depth + 1u); else { c.pc = 0x00272710u; return; } if (c.pc != 0x00322564u) [[unlikely]] return; }
L_00322564:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 15392u);
    set32(c.r[3], c.r[3].w[0] - 15336u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003225A0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003225B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x003225B8u) [[unlikely]] return; }
L_003225B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003225C4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x003225C4u) [[unlikely]] return; }
L_003225C4:
    set32(c.r[3], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00322704; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  goto L_00322708; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003225E0u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x003225E0u) [[unlikely]] return; }
L_003225E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[2], c.r[2].w[0] - 4006u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 76u)));  goto L_003226D0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 20816u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0080[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00322614:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[6].d[0] = 0ull | 32768ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322624u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x00322624u) [[unlikely]] return; }
L_00322624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003226CC; } }
L_0032262C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], 0u + 24576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032263Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0032263Cu) [[unlikely]] return; }
L_0032263C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003226CC; } }
L_00322644:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], 0u + 16384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322654u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x00322654u) [[unlikely]] return; }
L_00322654:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003226CC; } }
L_0032265C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], 0u + 8192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032266Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0032266Cu) [[unlikely]] return; }
L_0032266C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003226CC; } }
L_00322674:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322684u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x00322684u) [[unlikely]] return; }
L_00322684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003226CC; } }
L_0032268C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[6].d[0] = 0ull | 57344ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032269Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x0032269Cu) [[unlikely]] return; }
L_0032269C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003226CC; } }
L_003226A4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[6].d[0] = 0ull | 49152ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003226B4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x003226B4u) [[unlikely]] return; }
L_003226B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003226CC; } }
L_003226BC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[6].d[0] = 0ull | 40960ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003226CCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x003226CCu) [[unlikely]] return; }
L_003226CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_003226D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003226E4u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x003226E4u) [[unlikely]] return; }
L_003226E4:
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003226F0u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003226F0u) [[unlikely]] return; }
L_003226F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 308u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 5;
L_00322704:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_00322708:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_0032272C; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0032272C:
    c.f[0] = ld32((c.r[17].w[0] + 116u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 116u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00322B0C; }
    c.f[1] = ld32((c.r[17].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00322B08; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 1320u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[2], c.r[2].w[0] - 4006u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003228D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 20848u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0080[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00322798:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 57u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003227A8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x003227A8u) [[unlikely]] return; }
L_003227A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 59u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003227B8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x003227B8u) [[unlikely]] return; }
L_003227B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003228D0; } }
L_003227C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 53u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003227D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x003227D0u) [[unlikely]] return; }
L_003227D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 55u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003227E0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x003227E0u) [[unlikely]] return; }
L_003227E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003228D0; } }
L_003227E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 49u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003227F8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x003227F8u) [[unlikely]] return; }
L_003227F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 51u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322808u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00322808u) [[unlikely]] return; }
L_00322808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003228D0; } }
L_00322810:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 45u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322820u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00322820u) [[unlikely]] return; }
L_00322820:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 47u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322830u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00322830u) [[unlikely]] return; }
L_00322830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003228D0; } }
L_00322838:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 41u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322848u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00322848u) [[unlikely]] return; }
L_00322848:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 43u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322858u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00322858u) [[unlikely]] return; }
L_00322858:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003228D0; } }
L_00322860:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 69u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322870u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00322870u) [[unlikely]] return; }
L_00322870:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 71u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322880u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00322880u) [[unlikely]] return; }
L_00322880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003228D0; } }
L_00322888:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 65u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322898u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00322898u) [[unlikely]] return; }
L_00322898:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 67u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003228A8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x003228A8u) [[unlikely]] return; }
L_003228A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003228D0; } }
L_003228B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 61u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003228C0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x003228C0u) [[unlikely]] return; }
L_003228C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 63u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003228D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x003228D0u) [[unlikely]] return; }
L_003228D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 20656u));
    set32(c.r[5], 0u + 72u);
    c.f[2] = ld32((c.r[2].w[0] + 20660u));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 20664u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20668u));
    st32((c.r[29].w[0] + 132u), c.f[2]);
    st32((c.r[29].w[0] + 136u), c.f[1]);
    st32((c.r[29].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032291Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 176u, depth + 1u); else { c.pc = 0x00159260u; return; } if (c.pc != 0x0032291Cu) [[unlikely]] return; }
L_0032291C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032292Cu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0018FB30u; return; } if (c.pc != 0x0032292Cu) [[unlikely]] return; }
L_0032292C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 20672u);
    set32(c.r[3], 0u + 15u);
    c.budget -= 4;
L_0032293C:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032293Cu | kUnwind; return; } goto L_0032293C; } }
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = ld32((c.r[28].w[0] - 32116u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[28].w[0] - 32112u));  goto L_00322974; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 48u);  if (t) { goto L_00322A28; } }
L_00322974:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[29].w[0] + 112u));  goto L_003229A0; }
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032299C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 76u);  if (t) { goto L_00322A28; } }
L_0032299C:
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_003229A0:
    c.f[0] = ld32((c.r[28].w[0] - 32156u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[28].w[0] - 32272u));  goto L_003229B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 72u);  if (t) { goto L_00322A28; } }
L_003229B8:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[28].w[0] - 32156u));  goto L_003229DC; }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003229D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 68u);  if (t) { goto L_00322A28; } }
L_003229D8:
    c.f[0] = ld32((c.r[28].w[0] - 32156u));
    c.budget -= 1;
L_003229DC:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[28].w[0] - 32272u));  goto L_003229F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 64u);  if (t) { goto L_00322A28; } }
L_003229F0:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[28].w[0] - 32116u));  goto L_00322A18; }
    c.f[0] = ld32((c.r[28].w[0] - 32112u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00322A14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 60u);  if (t) { goto L_00322A28; } }
L_00322A14:
    c.f[0] = ld32((c.r[28].w[0] - 32116u));
    c.budget -= 1;
L_00322A18:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[5], c.r[29].w[0] + 52u);  goto L_00322A28; }
    set32(c.r[5], c.r[29].w[0] + 56u);
    c.budget -= 1;
L_00322A28:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 148u)));
    set32(c.r[4], c.r[2].w[0] + 112u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] - 16024u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322A50u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00322A50u) [[unlikely]] return; }
L_00322A50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_00322B04; }
    c.r[3].d[0] = c.r[16].sd[0] < 4014ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[16].sd[0] < 4017ll ? 1ull : 0ull;  goto L_00322AA0; }
    c.r[1].d[0] = c.r[16].sd[0] < 4017ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00322A9C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 76u)));  goto L_00322A94; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00322A90; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 588u), c.r[4].w[0]);
    c.budget -= 3;
L_00322A90:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_00322A94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1424u), c.r[2].w[0]);  if (t) { goto L_00322B00; } }
L_00322A9C:
    c.r[3].d[0] = c.r[16].sd[0] < 4017ll ? 1ull : 0ull;
    c.budget -= 1;
L_00322AA0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));  goto L_00322AE4; }
    c.r[1].d[0] = c.r[16].sd[0] < 4021ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00322AE0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 76u)));  goto L_00322AD8; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00322AD4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 584u), c.r[4].w[0]);
    c.budget -= 3;
L_00322AD4:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_00322AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1424u), c.r[2].w[0]);  if (t) { goto L_00322B00; } }
L_00322AE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 1;
L_00322AE4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00322B00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00322B00; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 580u), c.r[4].w[0]);
    c.budget -= 3;
L_00322B00:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00322B04:
    st32((c.r[17].w[0] + 124u), c.r[3].w[0]);
    c.budget -= 1;
L_00322B08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00322B0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00322B20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00322BBC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 15392u);
    set32(c.r[2], c.r[2].w[0] - 15336u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00322BA4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22256u);
    set32(c.r[2], c.r[2].w[0] + 22312u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00322BA4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322B98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00322B98u) [[unlikely]] return; }
L_00322B98:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322BA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00322BA4u) [[unlikely]] return; }
L_00322BA4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00322BC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322BBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00322BBCu) [[unlikely]] return; }
L_00322BBC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00322BC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00322BE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00322C6C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 15296u);
    set32(c.r[2], c.r[2].w[0] - 15240u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00322C54; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322C3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x00322C3Cu) [[unlikely]] return; }
L_00322C3C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322C48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00322C48u) [[unlikely]] return; }
L_00322C48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322C54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00322C54u) [[unlikely]] return; }
L_00322C54:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00322C70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322C6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00322C6Cu) [[unlikely]] return; }
L_00322C6C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00322C70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00322C90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00322BE0u | kUnwind; return; } goto L_00322BE0; }
L_00322CA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003224F0u | kUnwind; return; } goto L_003224F0; }
L_00322CB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00322B20u | kUnwind; return; } goto L_00322B20; }
L_00322CC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322CF0u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00322CF0u) [[unlikely]] return; }
L_00322CF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00322D14; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322D10u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 337u, depth + 1u); else { c.pc = 0x00322D30u; return; } if (c.pc != 0x00322D10u) [[unlikely]] return; }
L_00322D10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00322D14:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00322D30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322D44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x00322D44u) [[unlikely]] return; }
L_00322D44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 14768u);
    set32(c.r[2], c.r[2].w[0] - 14712u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], 0u + 20u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1424u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 464u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322D70u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 250u, depth + 1u); else { c.pc = 0x00159FB0u; return; } if (c.pc != 0x00322D70u) [[unlikely]] return; }
L_00322D70:
    set32(c.r[4], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322D80u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 250u, depth + 1u); else { c.pc = 0x00159FB0u; return; } if (c.pc != 0x00322D80u) [[unlikely]] return; }
L_00322D80:
    set32(c.r[4], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[5], 0u + 22u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322D90u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 250u, depth + 1u); else { c.pc = 0x00159FB0u; return; } if (c.pc != 0x00322D90u) [[unlikely]] return; }
L_00322D90:
    set32(c.r[4], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322DA0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 250u, depth + 1u); else { c.pc = 0x00159FB0u; return; } if (c.pc != 0x00322DA0u) [[unlikely]] return; }
L_00322DA0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00322DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1424u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00322DFC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 1424u), 0u);  goto L_00322DF8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00322DF4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00322DF4u) [[unlikely]] return; }
L_00322DF4:
    st32((c.r[16].w[0] + 1424u), 0u);
    c.budget -= 1;
L_00322DF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00322DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322E04u); set32(c.r[5], 0u + 11000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00322E04u) [[unlikely]] return; }
L_00322E04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322E0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 85u, depth + 1u); else { c.pc = 0x0027CCC0u; return; } if (c.pc != 0x00322E0Cu) [[unlikely]] return; }
L_00322E0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00322E20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00322E64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00322F50; } }
L_00322E64:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 1424u)));  goto L_00322EF4; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 96u);  goto L_00322E88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00322F50; } }
    set32(c.r[4], 0u + 96u);
    c.budget -= 1;
L_00322E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322E90u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00322E90u) [[unlikely]] return; }
L_00322E90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00322EE8; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322EB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 60u, depth + 1u); else { c.pc = 0x002789B0u; return; } if (c.pc != 0x00322EB0u) [[unlikely]] return; }
L_00322EB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 14864u);
    set32(c.r[2], c.r[2].w[0] - 14808u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], 0u + 2u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322EDCu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00322EDCu) [[unlikely]] return; }
L_00322EDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 3;
L_00322EE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00322F50; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 1424u)));
    c.budget -= 1;
L_00322EF4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 108u);  goto L_00322F1C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 1424u), 0u);  goto L_00322F18; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00322F14u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00322F14u) [[unlikely]] return; }
L_00322F14:
    st32((c.r[20].w[0] + 1424u), 0u);
    c.budget -= 1;
L_00322F18:
    set32(c.r[4], 0u + 108u);
    c.budget -= 1;
L_00322F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322F24u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00322F24u) [[unlikely]] return; }
L_00322F24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00322F54; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322F44u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 451u, depth + 1u); else { c.pc = 0x00323DA0u; return; } if (c.pc != 0x00322F44u) [[unlikely]] return; }
L_00322F44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00322F50; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00322F50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00322F54:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00322F70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322F8Cu); set32(c.r[4], 0u + 660u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00322F8Cu) [[unlikely]] return; }
L_00322F8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00322FB8; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322FA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 8u, depth + 1u); else { c.pc = 0x002AC0E0u; return; } if (c.pc != 0x00322FA0u) [[unlikely]] return; }
L_00322FA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 15056u);
    set32(c.r[2], c.r[2].w[0] - 15000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 6;
L_00322FB8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00322FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322FE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x00322FE4u) [[unlikely]] return; }
L_00322FE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 1424u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00323024; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[5].w[0] + 80u));  goto L_00323018; }
    c.f[12] = 0u;
    c.budget -= 1;
L_00323018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323020u);  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x00323020u) [[unlikely]] return; }
L_00323020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00323024:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00323030:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027DC70u | kUnwind; return; } [[clang::musttail]] return unit_0057(c, 181u, depth); }
L_00323040:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1424u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003230A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323060u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00323060u) [[unlikely]] return; }
L_00323060:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032306Cu); set32(c.r[5], c.r[16].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0032306Cu) [[unlikely]] return; }
L_0032306C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323074u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 216u, depth + 1u); else { c.pc = 0x0018F420u; return; } if (c.pc != 0x00323074u) [[unlikely]] return; }
L_00323074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032307Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x0032307Cu) [[unlikely]] return; }
L_0032307C:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323088u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 150u, depth + 1u); else { c.pc = 0x001615B0u; return; } if (c.pc != 0x00323088u) [[unlikely]] return; }
L_00323088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323090u); set32(c.r[4], ld32((c.r[16].w[0] + 1424u)));  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x00323090u) [[unlikely]] return; }
L_00323090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323098u); set32(c.r[4], ld32((c.r[16].w[0] + 1424u)));  if (depth < kMaxDepth) unit_00A8(c, 168u, depth + 1u); else { c.pc = 0x003C1EF0u; return; } if (c.pc != 0x00323098u) [[unlikely]] return; }
L_00323098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003230A0u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x003230A0u) [[unlikely]] return; }
L_003230A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003230B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 13u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003230D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00323158; } }
L_003230D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003230E0u);  if (depth < kMaxDepth) unit_0080(c, 428u, depth + 1u); else { c.pc = 0x00323960u; return; } if (c.pc != 0x003230E0u) [[unlikely]] return; }
L_003230E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00323154; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u + 28u);
    set32(c.r[4], ld32((c.r[3].w[0] + 116u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1180u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00323154; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[2], 0u + 5005u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0032314C; }
    set32(c.r[2], 0u + 5004u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00323148; } }
    set32(c.r[2], 0u + 5001u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00323138; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323154; } }
L_00323138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323140u);  if (depth < kMaxDepth) unit_0080(c, 432u, depth + 1u); else { c.pc = 0x003239E0u; return; } if (c.pc != 0x00323140u) [[unlikely]] return; }
L_00323140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323154; } }
L_00323148:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0032314C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323154u);  if (depth < kMaxDepth) unit_0080(c, 440u, depth + 1u); else { c.pc = 0x00323B50u; return; } if (c.pc != 0x00323154u) [[unlikely]] return; }
L_00323154:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00323158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323160u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 134u, depth + 1u); else { c.pc = 0x002CDC50u; return; } if (c.pc != 0x00323160u) [[unlikely]] return; }
L_00323160:
    set32(c.r[3], 0u + 67u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00323220; }
    set32(c.r[3], 0u + 91u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003231FC; }
    set32(c.r[3], 0u + 87u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003231DC; }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003231CC; }
    set32(c.r[3], 0u + 44u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003231BC; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003231AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00323280; } }
L_003231AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003231B4u);  if (depth < kMaxDepth) unit_0080(c, 412u, depth + 1u); else { c.pc = 0x00323790u; return; } if (c.pc != 0x003231B4u) [[unlikely]] return; }
L_003231B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032327C; } }
L_003231BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003231C4u);  if (depth < kMaxDepth) unit_0080(c, 429u, depth + 1u); else { c.pc = 0x00323970u; return; } if (c.pc != 0x003231C4u) [[unlikely]] return; }
L_003231C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032327C; } }
L_003231CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003231D4u);  if (depth < kMaxDepth) unit_0080(c, 426u, depth + 1u); else { c.pc = 0x00323910u; return; } if (c.pc != 0x003231D4u) [[unlikely]] return; }
L_003231D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032327C; } }
L_003231DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003231E4u); set32(c.r[5], 0u + 11000u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x003231E4u) [[unlikely]] return; }
L_003231E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032327C; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 308u), c.r[3].w[0]);  if (t) { goto L_0032327C; } }
L_003231FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323204u); set32(c.r[5], 0u + 11000u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x00323204u) [[unlikely]] return; }
L_00323204:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032327C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 308u)));
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 308u), c.r[3].w[0]);  if (t) { goto L_0032327C; } }
L_00323220:
    set32(c.r[5], 0u + 5001u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323230u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00323230u) [[unlikely]] return; }
L_00323230:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032327C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 1180u)));
    set32(c.r[3], 0u + 21u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0032327C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1424u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00323274; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 1424u), 0u);  goto L_00323270; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032326Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032326Cu) [[unlikely]] return; }
L_0032326C:
    st32((c.r[17].w[0] + 1424u), 0u);
    c.budget -= 1;
L_00323270:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00323274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032327Cu); set32(c.r[5], 0u + 11000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0032327Cu) [[unlikely]] return; }
L_0032327C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00323280:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00323290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 100u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003232A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003232CC; } }
L_003232A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 576u)));
    c.budget -= 4;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], c.r[2].w[0] - 1u);  goto L_003232C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003232CC; } }
L_003232C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003232C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0080(c, 401u, depth + 1u); else { c.pc = 0x003235B0u; return; } if (c.pc != 0x003232C8u) [[unlikely]] return; }
L_003232C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003232CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003232E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 52u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323308u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x00323308u) [[unlikely]] return; }
L_00323308:
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003234A8; }
    set32(c.r[4], ld32((c.r[19].w[0] + 1424u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 272u);  goto L_00323340; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 1424u), 0u);  goto L_0032333C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00323338u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00323338u) [[unlikely]] return; }
L_00323338:
    st32((c.r[19].w[0] + 1424u), 0u);
    c.budget -= 1;
L_0032333C:
    set32(c.r[4], 0u + 272u);
    c.budget -= 1;
L_00323340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323348u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x00323348u) [[unlikely]] return; }
L_00323348:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 1424u), c.r[2].w[0]);  goto L_00323364; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323360u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 96u, depth + 1u); else { c.pc = 0x003C12F0u; return; } if (c.pc != 0x00323360u) [[unlikely]] return; }
L_00323360:
    st32((c.r[19].w[0] + 1424u), c.r[2].w[0]);
    c.budget -= 1;
L_00323364:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00323404; }
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00323380; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003233D8; } }
L_00323380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323388u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00323388u) [[unlikely]] return; }
L_00323388:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003233A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003233B8; } }
L_003233A8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003233B8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003233D8; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_003233D0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003233D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003233D8; } }
L_003233D8:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 1424u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003233F4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 178u, depth + 1u); else { c.pc = 0x003C20D0u; return; } if (c.pc != 0x003233F4u) [[unlikely]] return; }
L_003233F4:
    set32(c.r[2], ld32((c.r[19].w[0] + 1424u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 208u), c.r[3].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00323404:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00323408:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[5].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00323420; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[16].d[0] = c.r[5].d[0] + 0ull;  goto L_00323454; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323454; } }
L_00323420:
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 20784u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 584u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00323454; } }
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00323454:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00323474; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032346Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0080(c, 396u, depth + 1u); else { c.pc = 0x003234C0u; return; } if (c.pc != 0x0032346Cu) [[unlikely]] return; }
L_0032346C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323480; } }
L_00323474:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323480u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0080(c, 401u, depth + 1u); else { c.pc = 0x003235B0u; return; } if (c.pc != 0x00323480u) [[unlikely]] return; }
L_00323480:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] - 20704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323494u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00323494u) [[unlikely]] return; }
L_00323494:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00323408u | kUnwind; return; } goto L_00323408; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003234A8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003234C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003234E8u); set32(c.r[4], c.r[18].w[0] + 52u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x003234E8u) [[unlikely]] return; }
L_003234E8:
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00323594; }
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00323590; } }
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 20784u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00323564; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    set32(c.r[5], c.r[4].w[0] + 584u);
    set32(c.r[4], ld32((c.r[4].w[0] + 584u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];  if (t) { goto L_00323544; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 1424u)));  goto L_00323548; }
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00323544:
    set32(c.r[4], ld32((c.r[18].w[0] + 1424u)));
    c.budget -= 1;
L_00323548:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00323568; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00323564u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00323564u) [[unlikely]] return; }
L_00323564:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00323568:
    set32(c.r[5], ld32((c.r[18].w[0] + 1296u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323578u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 407u, depth + 1u); else { c.pc = 0x00267790u; return; } if (c.pc != 0x00323578u) [[unlikely]] return; }
L_00323578:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00323590; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323590u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 327u, depth + 1u); else { c.pc = 0x00266C90u; return; } if (c.pc != 0x00323590u) [[unlikely]] return; }
L_00323590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00323594:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003235B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003235D8u); set32(c.r[4], c.r[18].w[0] + 52u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x003235D8u) [[unlikely]] return; }
L_003235D8:
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00323684; }
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00323680; } }
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 20784u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00323654; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    set32(c.r[5], c.r[4].w[0] + 584u);
    set32(c.r[4], ld32((c.r[4].w[0] + 584u)));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];  if (t) { goto L_00323638; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 1424u)));  goto L_0032363C; }
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00323638:
    set32(c.r[4], ld32((c.r[18].w[0] + 1424u)));
    c.budget -= 1;
L_0032363C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00323658; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00323654u); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00323654u) [[unlikely]] return; }
L_00323654:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00323658:
    set32(c.r[5], ld32((c.r[18].w[0] + 1296u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323668u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 407u, depth + 1u); else { c.pc = 0x00267790u; return; } if (c.pc != 0x00323668u) [[unlikely]] return; }
L_00323668:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00323680; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323680u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 327u, depth + 1u); else { c.pc = 0x00266C90u; return; } if (c.pc != 0x00323680u) [[unlikely]] return; }
L_00323680:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00323684:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003236A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003236BCu); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x003236BCu) [[unlikely]] return; }
L_003236BC:
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0032377C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003236D4u); set32(c.r[5], 0u + 11000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x003236D4u) [[unlikely]] return; }
L_003236D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003236E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00323740; } }
L_003236E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003236F0u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003236F0u) [[unlikely]] return; }
L_003236F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00323710; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00323720; } }
L_00323710:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00323720:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00323740; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00323738; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00323738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323740; } }
L_00323740:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 11000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323750u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00323750u) [[unlikely]] return; }
L_00323750:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00323778; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032376Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0032376Cu) [[unlikely]] return; }
L_0032376C:
    set32(c.r[3], ld32((c.r[17].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st32((c.r[17].w[0] + 308u), c.r[3].w[0]);
    c.budget -= 3;
L_00323778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0032377C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00323790:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[18].w[0] + 52u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003237B0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x003237B0u) [[unlikely]] return; }
L_003237B0:
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_0032381C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 1296u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003237D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 407u, depth + 1u); else { c.pc = 0x00267790u; return; } if (c.pc != 0x003237D0u) [[unlikely]] return; }
L_003237D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00323818; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 1);
    c.budget -= 2;
L_003237E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 20784u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323808u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 327u, depth + 1u); else { c.pc = 0x00266C90u; return; } if (c.pc != 0x00323808u) [[unlikely]] return; }
L_00323808:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003237E4u | kUnwind; return; } goto L_003237E4; }
L_00323818:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_0032381C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323828u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00323828u) [[unlikely]] return; }
L_00323828:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0032383C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 64u)));  if (t) { goto L_00323850; } }
L_0032383C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_00323850; }
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_00323850:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_00323878; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00323874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323874u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00323874u) [[unlikely]] return; }
L_00323874:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00323878:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[5].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0032388C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323888u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 385u, depth + 1u); else { c.pc = 0x003232E0u; return; } if (c.pc != 0x00323888u) [[unlikely]] return; }
L_00323888:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0032388C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323894u);  if (depth < kMaxDepth) unit_0080(c, 406u, depth + 1u); else { c.pc = 0x003236A0u; return; } if (c.pc != 0x00323894u) [[unlikely]] return; }
L_00323894:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 5007u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003238A8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003238A8u) [[unlikely]] return; }
L_003238A8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 464u)));  goto L_003238D8; }
    set32(c.r[4], ld32((c.r[18].w[0] + 464u)));
    set32(c.r[5], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003238C0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 250u, depth + 1u); else { c.pc = 0x00159FB0u; return; } if (c.pc != 0x003238C0u) [[unlikely]] return; }
L_003238C0:
    set32(c.r[4], ld32((c.r[18].w[0] + 464u)));
    set32(c.r[5], 0u + 25u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003238D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 250u, depth + 1u); else { c.pc = 0x00159FB0u; return; } if (c.pc != 0x003238D0u) [[unlikely]] return; }
L_003238D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003238F8; } }
L_003238D8:
    set32(c.r[5], 0u + 25u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003238E4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 250u, depth + 1u); else { c.pc = 0x00159FB0u; return; } if (c.pc != 0x003238E4u) [[unlikely]] return; }
L_003238E4:
    set32(c.r[4], ld32((c.r[18].w[0] + 464u)));
    set32(c.r[5], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003238F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 250u, depth + 1u); else { c.pc = 0x00159FB0u; return; } if (c.pc != 0x003238F4u) [[unlikely]] return; }
L_003238F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003238F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00323910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1424u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0032394C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 1424u), 0u);  goto L_00323948; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00323944u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00323944u) [[unlikely]] return; }
L_00323944:
    st32((c.r[16].w[0] + 1424u), 0u);
    c.budget -= 1;
L_00323948:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0032394C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00323960:
    c.budget -= 2;
    { set32(c.r[5], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003232E0u | kUnwind; return; } goto L_003232E0; }
L_00323970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 5004u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 10;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003239A8; }
    set32(c.r[3], 0u + 5005u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003239D0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003239A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003239B0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003239B0u) [[unlikely]] return; }
L_003239B0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003239CC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] - 71u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003239CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0080(c, 401u, depth + 1u); else { c.pc = 0x003235B0u; return; } if (c.pc != 0x003239CCu) [[unlikely]] return; }
L_003239CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003239D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003239E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[21], ld32((c.r[4].w[0] + 3024u)));
    set32(c.r[3], c.r[4].w[0] + 112u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + 2916u);  if (t) { goto L_00323B14; } }
L_00323A1C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 648u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 148u)));
    c.budget -= 7;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_00323B14; }
    ld128((c.r[18].w[0] + 192u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[20].w[0] + 608u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323A4Cu); set32(c.r[4], c.r[2].w[0] + 2064u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x00323A4Cu) [[unlikely]] return; }
L_00323A4C:
    c.f[2] = ld32((c.r[29].w[0] + 132u));
    c.f[1] = 0u;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 132u), c.f[0]);  if (t) { goto L_00323A6C; } }
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.budget -= 1;
L_00323A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00323B04; } }
L_00323A74:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323A84u); set32(c.r[7], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0080(c, 448u, depth + 1u); else { c.pc = 0x00323CC0u; return; } if (c.pc != 0x00323A84u) [[unlikely]] return; }
L_00323A84:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[29].w[0] + 112u));  goto L_00323AA8; }
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 132u), c.f[0]);  if (t) { goto L_00323B00; } }
L_00323AA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[18].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[18].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[18].w[0] + 204u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323AE8u); st32((c.r[18].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x00323AE8u) [[unlikely]] return; }
L_00323AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323AF0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x00323AF0u) [[unlikely]] return; }
L_00323AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323AF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00323AF8u) [[unlikely]] return; }
L_00323AF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323B10; } }
L_00323B00:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00323B04:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00323A74u | kUnwind; return; } goto L_00323A74; }
L_00323B10:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00323B14:
    c.r[3].d[0] = c.r[19].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00323A1Cu | kUnwind; return; } goto L_00323A1C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00323B50:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[21], ld32((c.r[4].w[0] + 3024u)));
    set32(c.r[3], c.r[4].w[0] + 112u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + 2916u);  if (t) { goto L_00323C84; } }
L_00323B8C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 648u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 148u)));
    c.budget -= 7;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_00323C84; }
    ld128((c.r[18].w[0] + 192u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[20].w[0] + 608u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323BBCu); set32(c.r[4], c.r[2].w[0] + 2072u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x00323BBCu) [[unlikely]] return; }
L_00323BBC:
    c.f[2] = ld32((c.r[29].w[0] + 132u));
    c.f[1] = 0u;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 132u), c.f[0]);  if (t) { goto L_00323BDC; } }
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.budget -= 1;
L_00323BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00323C74; } }
L_00323BE4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323BF4u); set32(c.r[7], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0080(c, 448u, depth + 1u); else { c.pc = 0x00323CC0u; return; } if (c.pc != 0x00323BF4u) [[unlikely]] return; }
L_00323BF4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[29].w[0] + 112u));  goto L_00323C18; }
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 132u), c.f[0]);  if (t) { goto L_00323C70; } }
L_00323C18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[18].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[18].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[18].w[0] + 204u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323C58u); st32((c.r[18].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x00323C58u) [[unlikely]] return; }
L_00323C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323C60u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x00323C60u) [[unlikely]] return; }
L_00323C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323C68u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00323C68u) [[unlikely]] return; }
L_00323C68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323C80; } }
L_00323C70:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00323C74:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00323BE4u | kUnwind; return; } goto L_00323BE4; }
L_00323C80:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00323C84:
    c.r[3].d[0] = c.r[19].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00323B8Cu | kUnwind; return; } goto L_00323B8C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00323CC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 1296u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00323CF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (t) { goto L_00323CF8; } }
L_00323CF4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00323CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323D00u);  if (depth < kMaxDepth) unit_0052(c, 96u, depth + 1u); else { c.pc = 0x00268F00u; return; } if (c.pc != 0x00323D00u) [[unlikely]] return; }
L_00323D00:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[16].w[0] + 192u) & ~15u, c.r[6]);  goto L_00323D10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00323D80; } }
L_00323D10:
    c.f[12] = ld32((c.r[28].w[0] - 32164u));
    set32(c.r[3], ld32((c.r[16].w[0] + 608u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 1304u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[6]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323D38u); set32(c.r[6], c.r[3].w[0] + 688u);  if (depth < kMaxDepth) unit_0073(c, 343u, depth + 1u); else { c.pc = 0x002EFCD0u; return; } if (c.pc != 0x00323D38u) [[unlikely]] return; }
L_00323D38:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[29].w[0] + 68u));  goto L_00323D48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00323D80; } }
L_00323D48:
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[29].w[0] + 80u));  goto L_00323D60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00323D80; } }
L_00323D60:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_00323D80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00323DA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323DBCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 112u, depth + 1u); else { c.pc = 0x00270FA0u; return; } if (c.pc != 0x00323DBCu) [[unlikely]] return; }
L_00323DBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 14960u);
    set32(c.r[2], c.r[2].w[0] - 14904u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], 0u + 69u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 96u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 100u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323DF4u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00323DF4u) [[unlikely]] return; }
L_00323DF4:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[5], 0u + 25u);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00323E1Cu); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00323E1Cu) [[unlikely]] return; }
L_00323E1C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00323E40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00323E64u); set32(c.r[5], 0u + 25u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00323E64u) [[unlikely]] return; }
L_00323E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323E6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 120u, depth + 1u); else { c.pc = 0x00271070u; return; } if (c.pc != 0x00323E6Cu) [[unlikely]] return; }
L_00323E6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00323E80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323E9Cu); set32(c.r[5], 0u + 10001u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00323E9Cu) [[unlikely]] return; }
L_00323E9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323EA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 117u, depth + 1u); else { c.pc = 0x00271030u; return; } if (c.pc != 0x00323EA4u) [[unlikely]] return; }
L_00323EA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00323EC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323ED8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 125u, depth + 1u); else { c.pc = 0x002710C0u; return; } if (c.pc != 0x00323ED8u) [[unlikely]] return; }
L_00323ED8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  [[clang::musttail]] return unit_0081(c, 15u, depth); }
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0081(c, 12u, depth); } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 100u)));  [[clang::musttail]] return unit_0081(c, 11u, depth); }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30400u)));  [[clang::musttail]] return unit_0081(c, 8u, depth); }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 104u));  goto L_00323F24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  if (t) { [[clang::musttail]] return unit_0081(c, 14u, depth); } }
L_00323F24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_00323FFC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00323F70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323F50u);  if (depth < kMaxDepth) unit_0052(c, 138u, depth + 1u); else { c.pc = 0x00269AC0u; return; } if (c.pc != 0x00323F50u) [[unlikely]] return; }
L_00323F50:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30400u)));  goto L_00323F64; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323F70; } }
L_00323F64:
    c.r[2].d[0] = ld64((c.r[2].w[0] + 152u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00323F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00323FF8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323F84u); set32(c.r[4], ld32((c.r[2].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x00158EF0u; return; } if (c.pc != 0x00323F84u) [[unlikely]] return; }
L_00323F84:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[2].w[0] + 496u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323F98u); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00323F98u) [[unlikely]] return; }
L_00323F98:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323FA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0080(c, 385u, depth + 1u); else { c.pc = 0x003232E0u; return; } if (c.pc != 0x00323FA4u) [[unlikely]] return; }
L_00323FA4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 576u)));
    c.budget -= 4;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], 0u + 2u);  goto L_00323FF0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323FC8u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x00323FC8u) [[unlikely]] return; }
L_00323FC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323FD4u); set32(c.r[4], ld32((c.r[2].w[0] + 464u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x00158EF0u; return; } if (c.pc != 0x00323FD4u) [[unlikely]] return; }
L_00323FD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 496u), c.f[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 7;
L_00323FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0081(c, 13u, depth); } }
L_00323FF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00323FFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324004u); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x00324004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0081(c, 2u, depth);
}

}
