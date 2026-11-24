#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000E[4096] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0,
    0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    31, 0, 32, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0,
    0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53,
    0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59,
    0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 66, 0, 67, 0, 0, 68, 0, 0, 69, 0, 70, 0, 0, 71,
    0, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 78, 0, 0, 0, 0, 79, 0, 80, 0, 0, 81, 0, 0, 0, 0, 82, 0,
    83, 0, 0, 84, 0, 0, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 93,
    0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173,
    0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0,
    0, 195, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0,
    0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0,
    0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 311,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321,
    322, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 330,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0,
    338, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352,
    353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0,
    0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0,
    0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0,
    382, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388,
    0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0,
    395, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0,
    402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0,
    0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410,
    0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0,
    0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 422, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0, 0,
    432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0,
    442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0,
    445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0,
    0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0,
    0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0,
    0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0,
};

void unit_000E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00158000;
    case 2u: goto L_00158010;
    case 3u: goto L_0015801C;
    case 4u: goto L_00158028;
    case 5u: goto L_00158050;
    case 6u: goto L_00158064;
    case 7u: goto L_00158080;
    case 8u: goto L_00158094;
    case 9u: goto L_001580B4;
    case 10u: goto L_001580C0;
    case 11u: goto L_001580D8;
    case 12u: goto L_001580E8;
    case 13u: goto L_00158100;
    case 14u: goto L_00158148;
    case 15u: goto L_00158158;
    case 16u: goto L_001581A0;
    case 17u: goto L_001581DC;
    case 18u: goto L_00158210;
    case 19u: goto L_00158218;
    case 20u: goto L_00158230;
    case 21u: goto L_00158240;
    case 22u: goto L_00158264;
    case 23u: goto L_00158274;
    case 24u: goto L_00158294;
    case 25u: goto L_001582B0;
    case 26u: goto L_001582C4;
    case 27u: goto L_001582D0;
    case 28u: goto L_00158300;
    case 29u: goto L_00158344;
    case 30u: goto L_00158378;
    case 31u: goto L_00158380;
    case 32u: goto L_00158388;
    case 33u: goto L_001583A0;
    case 34u: goto L_001583A8;
    case 35u: goto L_001583B8;
    case 36u: goto L_001583DC;
    case 37u: goto L_001583E4;
    case 38u: goto L_001583F4;
    case 39u: goto L_00158414;
    case 40u: goto L_0015841C;
    case 41u: goto L_00158438;
    case 42u: goto L_0015844C;
    case 43u: goto L_00158454;
    case 44u: goto L_00158460;
    case 45u: goto L_00158490;
    case 46u: goto L_001584D4;
    case 47u: goto L_001584E0;
    case 48u: goto L_001584F0;
    case 49u: goto L_00158518;
    case 50u: goto L_00158524;
    case 51u: goto L_0015855C;
    case 52u: goto L_0015856C;
    case 53u: goto L_0015857C;
    case 54u: goto L_00158584;
    case 55u: goto L_001585A4;
    case 56u: goto L_001585B4;
    case 57u: goto L_001585D0;
    case 58u: goto L_001585EC;
    case 59u: goto L_001585FC;
    case 60u: goto L_00158608;
    case 61u: goto L_00158640;
    case 62u: goto L_0015866C;
    case 63u: goto L_001586A4;
    case 64u: goto L_001586B4;
    case 65u: goto L_001586BC;
    case 66u: goto L_001586C8;
    case 67u: goto L_001586D0;
    case 68u: goto L_001586DC;
    case 69u: goto L_001586E8;
    case 70u: goto L_001586F0;
    case 71u: goto L_001586FC;
    case 72u: goto L_00158708;
    case 73u: goto L_00158710;
    case 74u: goto L_00158718;
    case 75u: goto L_00158720;
    case 76u: goto L_00158728;
    case 77u: goto L_00158730;
    case 78u: goto L_0015873C;
    case 79u: goto L_00158750;
    case 80u: goto L_00158758;
    case 81u: goto L_00158764;
    case 82u: goto L_00158778;
    case 83u: goto L_00158780;
    case 84u: goto L_0015878C;
    case 85u: goto L_001587A0;
    case 86u: goto L_001587A8;
    case 87u: goto L_001587B4;
    case 88u: goto L_001587C4;
    case 89u: goto L_001587CC;
    case 90u: goto L_001587D8;
    case 91u: goto L_001587E8;
    case 92u: goto L_001587F0;
    case 93u: goto L_001587FC;
    case 94u: goto L_0015880C;
    case 95u: goto L_00158830;
    case 96u: goto L_00158848;
    case 97u: goto L_0015885C;
    case 98u: goto L_00158880;
    case 99u: goto L_00158890;
    case 100u: goto L_001588B0;
    case 101u: goto L_001588C4;
    case 102u: goto L_001588F0;
    case 103u: goto L_00158920;
    case 104u: goto L_00158948;
    case 105u: goto L_0015895C;
    case 106u: goto L_00158988;
    case 107u: goto L_001589C0;
    case 108u: goto L_001589E8;
    case 109u: goto L_001589FC;
    case 110u: goto L_00158A28;
    case 111u: goto L_00158A60;
    case 112u: goto L_00158A90;
    case 113u: goto L_00158AA4;
    case 114u: goto L_00158AD0;
    case 115u: goto L_00158B10;
    case 116u: goto L_00158B3C;
    case 117u: goto L_00158B48;
    case 118u: goto L_00158B60;
    case 119u: goto L_00158B80;
    case 120u: goto L_00158B94;
    case 121u: goto L_00158B9C;
    case 122u: goto L_00158BA4;
    case 123u: goto L_00158BAC;
    case 124u: goto L_00158BB4;
    case 125u: goto L_00158BD0;
    case 126u: goto L_00158BF4;
    case 127u: goto L_00158C10;
    case 128u: goto L_00158C34;
    case 129u: goto L_00158C4C;
    case 130u: goto L_00158C60;
    case 131u: goto L_00158C84;
    case 132u: goto L_00158CA0;
    case 133u: goto L_00158CC4;
    case 134u: goto L_00158CE0;
    case 135u: goto L_00158D04;
    case 136u: goto L_00158D20;
    case 137u: goto L_00158D44;
    case 138u: goto L_00158D50;
    case 139u: goto L_00158D5C;
    case 140u: goto L_00158D80;
    case 141u: goto L_00158DC8;
    case 142u: goto L_00158DE0;
    case 143u: goto L_00158DF8;
    case 144u: goto L_00158E10;
    case 145u: goto L_00158E28;
    case 146u: goto L_00158E40;
    case 147u: goto L_00158E60;
    case 148u: goto L_00158E90;
    case 149u: goto L_00158EA0;
    case 150u: goto L_00158EB0;
    case 151u: goto L_00158EE0;
    case 152u: goto L_00158EF0;
    case 153u: goto L_00158F18;
    case 154u: goto L_00158F30;
    case 155u: goto L_00158F58;
    case 156u: goto L_00158F70;
    case 157u: goto L_00158FA0;
    case 158u: goto L_00158FC0;
    case 159u: goto L_00159008;
    case 160u: goto L_00159024;
    case 161u: goto L_00159030;
    case 162u: goto L_0015904C;
    case 163u: goto L_00159070;
    case 164u: goto L_001590B0;
    case 165u: goto L_001590C4;
    case 166u: goto L_001590F0;
    case 167u: goto L_00159138;
    case 168u: goto L_00159154;
    case 169u: goto L_00159180;
    case 170u: goto L_001591C0;
    case 171u: goto L_001591D0;
    case 172u: goto L_001591F0;
    case 173u: goto L_001591FC;
    case 174u: goto L_0015921C;
    case 175u: goto L_0015923C;
    case 176u: goto L_00159260;
    case 177u: goto L_001592E0;
    case 178u: goto L_001592F4;
    case 179u: goto L_00159308;
    case 180u: goto L_00159320;
    case 181u: goto L_0015937C;
    case 182u: goto L_001593B0;
    case 183u: goto L_001593D0;
    case 184u: goto L_00159400;
    case 185u: goto L_00159420;
    case 186u: goto L_00159460;
    case 187u: goto L_001594F0;
    case 188u: goto L_00159500;
    case 189u: goto L_00159520;
    case 190u: goto L_00159530;
    case 191u: goto L_00159560;
    case 192u: goto L_001595B0;
    case 193u: goto L_001595F0;
    case 194u: goto L_001595F8;
    case 195u: goto L_00159604;
    case 196u: goto L_00159618;
    case 197u: goto L_00159620;
    case 198u: goto L_0015964C;
    case 199u: goto L_00159664;
    case 200u: goto L_001596C8;
    case 201u: goto L_001596E0;
    case 202u: goto L_001596F8;
    case 203u: goto L_00159718;
    case 204u: goto L_00159764;
    case 205u: goto L_001597C0;
    case 206u: goto L_00159820;
    case 207u: goto L_0015982C;
    case 208u: goto L_00159860;
    case 209u: goto L_00159878;
    case 210u: goto L_00159880;
    case 211u: goto L_001598A4;
    case 212u: goto L_001598C4;
    case 213u: goto L_00159910;
    case 214u: goto L_00159948;
    case 215u: goto L_0015995C;
    case 216u: goto L_00159970;
    case 217u: goto L_00159998;
    case 218u: goto L_001599B0;
    case 219u: goto L_001599D8;
    case 220u: goto L_001599F0;
    case 221u: goto L_00159A18;
    case 222u: goto L_00159A30;
    case 223u: goto L_00159A60;
    case 224u: goto L_00159A70;
    case 225u: goto L_00159A80;
    case 226u: goto L_00159AB8;
    case 227u: goto L_00159AC8;
    case 228u: goto L_00159AE0;
    case 229u: goto L_00159AF0;
    case 230u: goto L_00159B00;
    case 231u: goto L_00159B3C;
    case 232u: goto L_00159B68;
    case 233u: goto L_00159BD0;
    case 234u: goto L_00159C0C;
    case 235u: goto L_00159C34;
    case 236u: goto L_00159C90;
    case 237u: goto L_00159CC4;
    case 238u: goto L_00159CF0;
    case 239u: goto L_00159D50;
    case 240u: goto L_00159D84;
    case 241u: goto L_00159DB0;
    case 242u: goto L_00159DEC;
    case 243u: goto L_00159E30;
    case 244u: goto L_00159E64;
    case 245u: goto L_00159E90;
    case 246u: goto L_00159EF0;
    case 247u: goto L_00159F18;
    case 248u: goto L_00159F24;
    case 249u: goto L_00159F90;
    case 250u: goto L_00159FB0;
    case 251u: goto L_0015A000;
    case 252u: goto L_0015A018;
    case 253u: goto L_0015A030;
    case 254u: goto L_0015A098;
    case 255u: goto L_0015A0C0;
    case 256u: goto L_0015A114;
    case 257u: goto L_0015A124;
    case 258u: goto L_0015A12C;
    case 259u: goto L_0015A164;
    case 260u: goto L_0015A178;
    case 261u: goto L_0015A194;
    case 262u: goto L_0015A1B8;
    case 263u: goto L_0015A1E0;
    case 264u: goto L_0015A214;
    case 265u: goto L_0015A22C;
    case 266u: goto L_0015A248;
    case 267u: goto L_0015A258;
    case 268u: goto L_0015A294;
    case 269u: goto L_0015A2B0;
    case 270u: goto L_0015A2C8;
    case 271u: goto L_0015A2E4;
    case 272u: goto L_0015A300;
    case 273u: goto L_0015A310;
    case 274u: goto L_0015A31C;
    case 275u: goto L_0015A33C;
    case 276u: goto L_0015A35C;
    case 277u: goto L_0015A394;
    case 278u: goto L_0015A3C0;
    case 279u: goto L_0015A3E0;
    case 280u: goto L_0015A3EC;
    case 281u: goto L_0015A430;
    case 282u: goto L_0015A440;
    case 283u: goto L_0015A450;
    case 284u: goto L_0015A480;
    case 285u: goto L_0015A498;
    case 286u: goto L_0015A4AC;
    case 287u: goto L_0015A4BC;
    case 288u: goto L_0015A4E0;
    case 289u: goto L_0015A54C;
    case 290u: goto L_0015A578;
    case 291u: goto L_0015A594;
    case 292u: goto L_0015A59C;
    case 293u: goto L_0015A5D4;
    case 294u: goto L_0015A630;
    case 295u: goto L_0015A69C;
    case 296u: goto L_0015A6C8;
    case 297u: goto L_0015A6DC;
    case 298u: goto L_0015A6E4;
    case 299u: goto L_0015A71C;
    case 300u: goto L_0015A770;
    case 301u: goto L_0015A7DC;
    case 302u: goto L_0015A808;
    case 303u: goto L_0015A824;
    case 304u: goto L_0015A82C;
    case 305u: goto L_0015A864;
    case 306u: goto L_0015A880;
    case 307u: goto L_0015A8C0;
    case 308u: goto L_0015A934;
    case 309u: goto L_0015A960;
    case 310u: goto L_0015A974;
    case 311u: goto L_0015A97C;
    case 312u: goto L_0015A9B4;
    case 313u: goto L_0015AA10;
    case 314u: goto L_0015AA84;
    case 315u: goto L_0015AAB0;
    case 316u: goto L_0015AAC4;
    case 317u: goto L_0015AACC;
    case 318u: goto L_0015AB08;
    case 319u: goto L_0015AB60;
    case 320u: goto L_0015ABD4;
    case 321u: goto L_0015ABFC;
    case 322u: goto L_0015AC00;
    case 323u: goto L_0015AC14;
    case 324u: goto L_0015AC1C;
    case 325u: goto L_0015AC54;
    case 326u: goto L_0015ACC0;
    case 327u: goto L_0015AD34;
    case 328u: goto L_0015AD60;
    case 329u: goto L_0015AD74;
    case 330u: goto L_0015AD7C;
    case 331u: goto L_0015ADB8;
    case 332u: goto L_0015AE20;
    case 333u: goto L_0015AE30;
    case 334u: goto L_0015AE40;
    case 335u: goto L_0015AE50;
    case 336u: goto L_0015AE60;
    case 337u: goto L_0015AE70;
    case 338u: goto L_0015AE80;
    case 339u: goto L_0015AE90;
    case 340u: goto L_0015AEA0;
    case 341u: goto L_0015AEB0;
    case 342u: goto L_0015AEC0;
    case 343u: goto L_0015AED0;
    case 344u: goto L_0015AF0C;
    case 345u: goto L_0015AF90;
    case 346u: goto L_0015AFB0;
    case 347u: goto L_0015AFD0;
    case 348u: goto L_0015B000;
    case 349u: goto L_0015B028;
    case 350u: goto L_0015B04C;
    case 351u: goto L_0015B06C;
    case 352u: goto L_0015B07C;
    case 353u: goto L_0015B080;
    case 354u: goto L_0015B088;
    case 355u: goto L_0015B0AC;
    case 356u: goto L_0015B0C0;
    case 357u: goto L_0015B0F0;
    case 358u: goto L_0015B120;
    case 359u: goto L_0015B130;
    case 360u: goto L_0015B14C;
    case 361u: goto L_0015B16C;
    case 362u: goto L_0015B18C;
    case 363u: goto L_0015B19C;
    case 364u: goto L_0015B1A8;
    case 365u: goto L_0015B1CC;
    case 366u: goto L_0015B1E0;
    case 367u: goto L_0015B1FC;
    case 368u: goto L_0015B248;
    case 369u: goto L_0015B250;
    case 370u: goto L_0015B270;
    case 371u: goto L_0015B278;
    case 372u: goto L_0015B298;
    case 373u: goto L_0015B2A0;
    case 374u: goto L_0015B2C0;
    case 375u: goto L_0015B2C8;
    case 376u: goto L_0015B2E4;
    case 377u: goto L_0015B2F0;
    case 378u: goto L_0015B328;
    case 379u: goto L_0015B33C;
    case 380u: goto L_0015B354;
    case 381u: goto L_0015B368;
    case 382u: goto L_0015B380;
    case 383u: goto L_0015B388;
    case 384u: goto L_0015B39C;
    case 385u: goto L_0015B3B0;
    case 386u: goto L_0015B3C4;
    case 387u: goto L_0015B3E0;
    case 388u: goto L_0015B3FC;
    case 389u: goto L_0015B410;
    case 390u: goto L_0015B420;
    case 391u: goto L_0015B430;
    case 392u: goto L_0015B454;
    case 393u: goto L_0015B464;
    case 394u: goto L_0015B470;
    case 395u: goto L_0015B480;
    case 396u: goto L_0015B498;
    case 397u: goto L_0015B4A0;
    case 398u: goto L_0015B4B4;
    case 399u: goto L_0015B4D0;
    case 400u: goto L_0015B4E0;
    case 401u: goto L_0015B4F0;
    case 402u: goto L_0015B500;
    case 403u: goto L_0015B518;
    case 404u: goto L_0015B52C;
    case 405u: goto L_0015B570;
    case 406u: goto L_0015B590;
    case 407u: goto L_0015B5A4;
    case 408u: goto L_0015B5C8;
    case 409u: goto L_0015B5EC;
    case 410u: goto L_0015B5FC;
    case 411u: goto L_0015B618;
    case 412u: goto L_0015B630;
    case 413u: goto L_0015B654;
    case 414u: goto L_0015B690;
    case 415u: goto L_0015B6D4;
    case 416u: goto L_0015B6E0;
    case 417u: goto L_0015B6F8;
    case 418u: goto L_0015B710;
    case 419u: goto L_0015B720;
    case 420u: goto L_0015B73C;
    case 421u: goto L_0015B750;
    case 422u: goto L_0015B788;
    case 423u: goto L_0015B794;
    case 424u: goto L_0015B7A4;
    case 425u: goto L_0015B7B4;
    case 426u: goto L_0015B7C4;
    case 427u: goto L_0015B7DC;
    case 428u: goto L_0015B7F0;
    case 429u: goto L_0015B94C;
    case 430u: goto L_0015B958;
    case 431u: goto L_0015B964;
    case 432u: goto L_0015B980;
    case 433u: goto L_0015BAB8;
    case 434u: goto L_0015BAC4;
    case 435u: goto L_0015BAD0;
    case 436u: goto L_0015BAE0;
    case 437u: goto L_0015BB24;
    case 438u: goto L_0015BB34;
    case 439u: goto L_0015BB50;
    case 440u: goto L_0015BB60;
    case 441u: goto L_0015BB70;
    case 442u: goto L_0015BB80;
    case 443u: goto L_0015BB90;
    case 444u: goto L_0015BBEC;
    case 445u: goto L_0015BC00;
    case 446u: goto L_0015BC20;
    case 447u: goto L_0015BC50;
    case 448u: goto L_0015BCAC;
    case 449u: goto L_0015BCC0;
    case 450u: goto L_0015BCE0;
    case 451u: goto L_0015BD10;
    case 452u: goto L_0015BD50;
    case 453u: goto L_0015BD78;
    case 454u: goto L_0015BD84;
    case 455u: goto L_0015BDA0;
    case 456u: goto L_0015BDD0;
    case 457u: goto L_0015BDE0;
    case 458u: goto L_0015BE10;
    case 459u: goto L_0015BE20;
    case 460u: goto L_0015BE30;
    case 461u: goto L_0015BE40;
    case 462u: goto L_0015BE70;
    case 463u: goto L_0015BE94;
    case 464u: goto L_0015BEA0;
    case 465u: goto L_0015BEA8;
    case 466u: goto L_0015BED0;
    case 467u: goto L_0015BEDC;
    case 468u: goto L_0015BF20;
    case 469u: goto L_0015BF48;
    case 470u: goto L_0015BF6C;
    case 471u: goto L_0015BF74;
    case 472u: goto L_0015BF98;
    case 473u: goto L_0015BFD0;
    case 474u: goto L_0015BFE0;
    default: bad_entry(c, 0x00158000u); return;
    }
L_00158000:
    set32(c.r[17], ld32((c.r[19].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158010u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 223u, depth + 1u); else { c.pc = 0x00165D70u; return; } if (c.pc != 0x00158010u) [[unlikely]] return; }
L_00158010:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015801Cu); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_001D(c, 336u, depth + 1u); else { c.pc = 0x00197520u; return; } if (c.pc != 0x0015801Cu) [[unlikely]] return; }
L_0015801C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001580E8; } }
    c.budget -= 1;
L_00158028:
    set32(c.r[17], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00158070; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    c.f[20] = ld32((c.r[19].w[0] + 16u));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[19].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158050u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 223u, depth + 1u); else { c.pc = 0x00165D70u; return; } if (c.pc != 0x00158050u) [[unlikely]] return; }
L_00158050:
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 64u);
    set32(c.r[6], c.r[18].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158064u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001D(c, 345u, depth + 1u); else { c.pc = 0x00197660u; return; } if (c.pc != 0x00158064u) [[unlikely]] return; }
L_00158064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001580E8; } }
    c.budget -= 1;
L_00158070:
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.f[20] = ld32((c.r[19].w[0] + 44u));
    set32(c.r[21], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 4;
L_00158080:
    c.f[21] = ld32((c.r[19].w[0] + 16u));
    c.f[22] = ld32((c.r[19].w[0] + 40u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158094u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 223u, depth + 1u); else { c.pc = 0x00165D70u; return; } if (c.pc != 0x00158094u) [[unlikely]] return; }
L_00158094:
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[5], c.r[21].w[0] + 64u);
    set32(c.r[6], c.r[17].w[0] + 64u);
    set32(c.r[7], c.r[18].w[0] + 64u);
    c.f[12] = c.f[22];
    c.f[13] = c.f[21];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001580B4u); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_001D(c, 348u, depth + 1u); else { c.pc = 0x001976B0u; return; } if (c.pc != 0x001580B4u) [[unlikely]] return; }
L_001580B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001580E8; } }
    c.budget -= 1;
L_001580C0:
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[19].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001580D8u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 223u, depth + 1u); else { c.pc = 0x00165D70u; return; } if (c.pc != 0x001580D8u) [[unlikely]] return; }
L_001580D8:
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001580E8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 364u, depth + 1u); else { c.pc = 0x00197900u; return; } if (c.pc != 0x001580E8u) [[unlikely]] return; }
L_001580E8:
    set32(c.r[2], ld32((c.r[19].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00158130; } }
    set32(c.r[4], c.r[19].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00158100:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00158120; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] << 33;
    c.r[2].d[0] = c.r[2].d[0] >> 33;
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
L_00158120:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00158100u | kUnwind; return; } goto L_00158100; } }
L_00158130:
    set32(c.r[2], ld32((c.r[19].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00158148; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158148u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 63u, depth + 1u); else { c.pc = 0x00188F50u; return; } if (c.pc != 0x00158148u) [[unlikely]] return; }
L_00158148:
    set32(c.r[19], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 132u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00157B7Cu | kUnwind; return; } [[clang::musttail]] return unit_000D(c, 399u, depth); }
    c.budget -= 1;
L_00158158:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001581A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001581DCu); set32(c.r[4], ld32((c.r[17].w[0] + 164u)));  if (depth < kMaxDepth) unit_0019(c, 159u, depth + 1u); else { c.pc = 0x00185E20u; return; } if (c.pc != 0x001581DCu) [[unlikely]] return; }
L_001581DC:
    set32(c.r[19], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_001582B8; }
    set32(c.r[16], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[19], ld32((c.r[17].w[0] + 36u)));  goto L_00158248; }
    set32(c.r[19], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_00158220; }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158210u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x00158210u) [[unlikely]] return; }
L_00158210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158218u); set32(c.r[4], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_001D(c, 13u, depth + 1u); else { c.pc = 0x00194280u; return; } if (c.pc != 0x00158218u) [[unlikely]] return; }
L_00158218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001582D4; } }
L_00158220:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158230u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x00158230u) [[unlikely]] return; }
L_00158230:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158240u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 20u, depth + 1u); else { c.pc = 0x00194410u; return; } if (c.pc != 0x00158240u) [[unlikely]] return; }
L_00158240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001582D0; } }
L_00158248:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_0015827C; }
    c.f[20] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158264u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x00158264u) [[unlikely]] return; }
L_00158264:
    set32(c.r[4], c.r[17].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158274u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001D(c, 29u, depth + 1u); else { c.pc = 0x001945E0u; return; } if (c.pc != 0x00158274u) [[unlikely]] return; }
L_00158274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001582D0; } }
L_0015827C:
    c.f[20] = ld32((c.r[17].w[0] + 44u));
    c.f[21] = ld32((c.r[17].w[0] + 16u));
    c.f[22] = ld32((c.r[17].w[0] + 40u));
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158294u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x00158294u) [[unlikely]] return; }
L_00158294:
    set32(c.r[4], c.r[18].w[0] + 80u);
    set32(c.r[5], c.r[19].w[0] + 64u);
    c.f[12] = c.f[22];
    set32(c.r[6], c.r[16].w[0] + 64u);
    c.f[13] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001582B0u); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_001D(c, 38u, depth + 1u); else { c.pc = 0x001947C0u; return; } if (c.pc != 0x001582B0u) [[unlikely]] return; }
L_001582B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001582D0; } }
L_001582B8:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001582C4u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x001582C4u) [[unlikely]] return; }
L_001582C4:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001582D0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 52u, depth + 1u); else { c.pc = 0x00194A50u; return; } if (c.pc != 0x001582D0u) [[unlikely]] return; }
L_001582D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001582D4:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00158300:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 168u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158344u); set32(c.r[19], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_0019(c, 159u, depth + 1u); else { c.pc = 0x00185E20u; return; } if (c.pc != 0x00158344u) [[unlikely]] return; }
L_00158344:
    set32(c.r[17], ld32((c.r[18].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 12u)));  goto L_00158440; }
    set32(c.r[17], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 36u)));  goto L_001583C0; }
    set32(c.r[17], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 12u)));  goto L_00158390; }
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158378u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x00158378u) [[unlikely]] return; }
L_00158378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158380u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 272u, depth + 1u); else { c.pc = 0x001936F0u; return; } if (c.pc != 0x00158380u) [[unlikely]] return; }
L_00158380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158388u); set32(c.r[4], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_001D(c, 13u, depth + 1u); else { c.pc = 0x00194280u; return; } if (c.pc != 0x00158388u) [[unlikely]] return; }
L_00158388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00158464; } }
L_00158390:
    set32(c.r[16], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[20], ld32((c.r[18].w[0] + 156u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001583A0u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x001583A0u) [[unlikely]] return; }
L_001583A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001583A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 272u, depth + 1u); else { c.pc = 0x001936F0u; return; } if (c.pc != 0x001583A8u) [[unlikely]] return; }
L_001583A8:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001583B8u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 20u, depth + 1u); else { c.pc = 0x00194410u; return; } if (c.pc != 0x001583B8u) [[unlikely]] return; }
L_001583B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158460; } }
L_001583C0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 12u)));  goto L_001583FC; }
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.f[20] = ld32((c.r[18].w[0] + 16u));
    set32(c.r[16], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001583DCu); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x001583DCu) [[unlikely]] return; }
L_001583DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001583E4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 272u, depth + 1u); else { c.pc = 0x001936F0u; return; } if (c.pc != 0x001583E4u) [[unlikely]] return; }
L_001583E4:
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001583F4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001D(c, 29u, depth + 1u); else { c.pc = 0x001945E0u; return; } if (c.pc != 0x001583F4u) [[unlikely]] return; }
L_001583F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158460; } }
L_001583FC:
    c.f[20] = ld32((c.r[18].w[0] + 44u));
    c.f[21] = ld32((c.r[18].w[0] + 16u));
    c.f[22] = ld32((c.r[18].w[0] + 40u));
    set32(c.r[20], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158414u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x00158414u) [[unlikely]] return; }
L_00158414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015841Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 272u, depth + 1u); else { c.pc = 0x001936F0u; return; } if (c.pc != 0x0015841Cu) [[unlikely]] return; }
L_0015841C:
    set32(c.r[4], c.r[20].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.f[12] = c.f[22];
    set32(c.r[6], c.r[17].w[0] + 64u);
    c.f[13] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158438u); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_001D(c, 38u, depth + 1u); else { c.pc = 0x001947C0u; return; } if (c.pc != 0x00158438u) [[unlikely]] return; }
L_00158438:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158460; } }
L_00158440:
    set32(c.r[16], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015844Cu); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x0015844Cu) [[unlikely]] return; }
L_0015844C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158454u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 272u, depth + 1u); else { c.pc = 0x001936F0u; return; } if (c.pc != 0x00158454u) [[unlikely]] return; }
L_00158454:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158460u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 52u, depth + 1u); else { c.pc = 0x00194A50u; return; } if (c.pc != 0x00158460u) [[unlikely]] return; }
L_00158460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00158464:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00158490:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 168u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001584D4u); set32(c.r[4], ld32((c.r[18].w[0] + 164u)));  if (depth < kMaxDepth) unit_0019(c, 159u, depth + 1u); else { c.pc = 0x00185E20u; return; } if (c.pc != 0x001584D4u) [[unlikely]] return; }
L_001584D4:
    set32(c.r[5], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001584E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 175u, depth + 1u); else { c.pc = 0x001618F0u; return; } if (c.pc != 0x001584E0u) [[unlikely]] return; }
L_001584E0:
    set32(c.r[5], ld32((c.r[18].w[0] + 140u)));
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001584F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 187u, depth + 1u); else { c.pc = 0x001619F0u; return; } if (c.pc != 0x001584F0u) [[unlikely]] return; }
L_001584F0:
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_0015860C; }
    set32(c.r[16], ld32((c.r[18].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 148u)));  goto L_0015852C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158518u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x00158518u) [[unlikely]] return; }
L_00158518:
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158524u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 214u, depth + 1u); else { c.pc = 0x001A2D60u; return; } if (c.pc != 0x00158524u) [[unlikely]] return; }
L_00158524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158608; } }
L_0015852C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 12u)));  goto L_001585F4; }
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[20], ld32((c.r[18].w[0] + 36u)));  goto L_0015858C; }
    set32(c.r[16], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 12u)));  goto L_00158574; }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[18], ld32((c.r[18].w[0] + 156u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015855Cu); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x0015855Cu) [[unlikely]] return; }
L_0015855C:
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015856Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 213u, depth + 1u); else { c.pc = 0x001A2D50u; return; } if (c.pc != 0x0015856Cu) [[unlikely]] return; }
L_0015856C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158608; } }
L_00158574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015857Cu); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x0015857Cu) [[unlikely]] return; }
L_0015857C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158584u); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_0020(c, 204u, depth + 1u); else { c.pc = 0x001A2C10u; return; } if (c.pc != 0x00158584u) [[unlikely]] return; }
L_00158584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158608; } }
L_0015858C:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 12u)));  goto L_001585BC; }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.f[20] = ld32((c.r[18].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001585A4u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x001585A4u) [[unlikely]] return; }
L_001585A4:
    set32(c.r[4], c.r[17].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001585B4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0020(c, 212u, depth + 1u); else { c.pc = 0x001A2D40u; return; } if (c.pc != 0x001585B4u) [[unlikely]] return; }
L_001585B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158608; } }
L_001585BC:
    c.f[20] = ld32((c.r[18].w[0] + 44u));
    c.f[21] = ld32((c.r[18].w[0] + 16u));
    c.f[22] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001585D0u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x001585D0u) [[unlikely]] return; }
L_001585D0:
    set32(c.r[4], c.r[17].w[0] + 80u);
    set32(c.r[5], c.r[20].w[0] + 64u);
    c.f[12] = c.f[22];
    set32(c.r[6], c.r[16].w[0] + 64u);
    c.f[13] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001585ECu); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_0020(c, 215u, depth + 1u); else { c.pc = 0x001A2D70u; return; } if (c.pc != 0x001585ECu) [[unlikely]] return; }
L_001585EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00158608; } }
L_001585F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001585FCu); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x001585FCu) [[unlikely]] return; }
L_001585FC:
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158608u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 216u, depth + 1u); else { c.pc = 0x001A2D80u; return; } if (c.pc != 0x00158608u) [[unlikely]] return; }
L_00158608:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0015860C:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00158640:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], c.r[18].w[0] + 16u);  if (t) { goto L_0015866C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015866Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31456u)));  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0015866Cu) [[unlikely]] return; }
L_0015866C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00158810; }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015880C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 19920u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00158000u < 16384u) { entry = entries_000E[(t - 0x00158000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001586A4:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001586B4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x001586B4u) [[unlikely]] return; }
L_001586B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015880C; } }
L_001586BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001586C8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x001586C8u) [[unlikely]] return; }
L_001586C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015880C; } }
L_001586D0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001586DCu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x001586DCu) [[unlikely]] return; }
L_001586DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001586E8u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x001586E8u) [[unlikely]] return; }
L_001586E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015880C; } }
L_001586F0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001586FCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 227u, depth + 1u); else { c.pc = 0x0018FA80u; return; } if (c.pc != 0x001586FCu) [[unlikely]] return; }
L_001586FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158708u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 227u, depth + 1u); else { c.pc = 0x0018FA80u; return; } if (c.pc != 0x00158708u) [[unlikely]] return; }
L_00158708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015880C; } }
L_00158710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158718u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 215u, depth + 1u); else { c.pc = 0x0018F400u; return; } if (c.pc != 0x00158718u) [[unlikely]] return; }
L_00158718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015880C; } }
L_00158720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158728u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 216u, depth + 1u); else { c.pc = 0x0018F420u; return; } if (c.pc != 0x00158728u) [[unlikely]] return; }
L_00158728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015880C; } }
L_00158730:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015873Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x0015873Cu) [[unlikely]] return; }
L_0015873C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 132u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158750u); st32((c.r[29].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x00158750u) [[unlikely]] return; }
L_00158750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015880C; } }
L_00158758:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158764u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x00158764u) [[unlikely]] return; }
L_00158764:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 136u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158778u); st32((c.r[29].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x00158778u) [[unlikely]] return; }
L_00158778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015880C; } }
L_00158780:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015878Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x0015878Cu) [[unlikely]] return; }
L_0015878C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001587A0u); st32((c.r[29].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x001587A0u) [[unlikely]] return; }
L_001587A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015880C; } }
L_001587A8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001587B4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x001587B4u) [[unlikely]] return; }
L_001587B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001587C4u); st32((c.r[29].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x001587C4u) [[unlikely]] return; }
L_001587C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015880C; } }
L_001587CC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001587D8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x001587D8u) [[unlikely]] return; }
L_001587D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001587E8u); st32((c.r[29].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x001587E8u) [[unlikely]] return; }
L_001587E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015880C; } }
L_001587F0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001587FCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x001587FCu) [[unlikely]] return; }
L_001587FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015880Cu); st32((c.r[29].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x0015880Cu) [[unlikely]] return; }
L_0015880C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00158810:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00158830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158848u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x00158848u) [[unlikely]] return; }
L_00158848:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015885Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 246u, depth + 1u); else { c.pc = 0x00159EF0u; return; } if (c.pc != 0x0015885Cu) [[unlikely]] return; }
L_0015885C:
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00158880:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 1;
    c.pc = 0x00158884u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00158890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001588B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x001588B0u) [[unlikely]] return; }
L_001588B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001588C4u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 246u, depth + 1u); else { c.pc = 0x00159EF0u; return; } if (c.pc != 0x001588C4u) [[unlikely]] return; }
L_001588C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001588E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00158908; } }
L_001588E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001588F0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 136u, depth + 1u); else { c.pc = 0x00158D20u; return; } if (c.pc != 0x001588F0u) [[unlikely]] return; }
L_001588F0:
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
L_00158908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00158920:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158948u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x00158948u) [[unlikely]] return; }
L_00158948:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015895Cu); st32((c.r[18].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 246u, depth + 1u); else { c.pc = 0x00159EF0u; return; } if (c.pc != 0x0015895Cu) [[unlikely]] return; }
L_0015895C:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00158978; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001589A0; } }
L_00158978:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158988u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 136u, depth + 1u); else { c.pc = 0x00158D20u; return; } if (c.pc != 0x00158988u) [[unlikely]] return; }
L_00158988:
    st32((c.r[18].w[0] + 28u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
L_001589A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001589C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001589E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x001589E8u) [[unlikely]] return; }
L_001589E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001589FCu); st32((c.r[18].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 246u, depth + 1u); else { c.pc = 0x00159EF0u; return; } if (c.pc != 0x001589FCu) [[unlikely]] return; }
L_001589FC:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00158A18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00158A40; } }
L_00158A18:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158A28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 136u, depth + 1u); else { c.pc = 0x00158D20u; return; } if (c.pc != 0x00158A28u) [[unlikely]] return; }
L_00158A28:
    st32((c.r[18].w[0] + 28u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
L_00158A40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00158A60:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158A90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x00158A90u) [[unlikely]] return; }
L_00158A90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158AA4u); st32((c.r[19].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 246u, depth + 1u); else { c.pc = 0x00159EF0u; return; } if (c.pc != 0x00158AA4u) [[unlikely]] return; }
L_00158AA4:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_00158AC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00158AE8; } }
L_00158AC0:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158AD0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 136u, depth + 1u); else { c.pc = 0x00158D20u; return; } if (c.pc != 0x00158AD0u) [[unlikely]] return; }
L_00158AD0:
    st32((c.r[19].w[0] + 28u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
L_00158AE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00158B10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00158B60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8608u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158B3Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 119u, depth + 1u); else { c.pc = 0x00158B80u; return; } if (c.pc != 0x00158B3Cu) [[unlikely]] return; }
L_00158B3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158B48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 240u, depth + 1u); else { c.pc = 0x00166010u; return; } if (c.pc != 0x00158B48u) [[unlikely]] return; }
L_00158B48:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00158B64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158B60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00158B60u) [[unlikely]] return; }
L_00158B60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00158B64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00158B80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158B94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 125u, depth + 1u); else { c.pc = 0x00158BD0u; return; } if (c.pc != 0x00158B94u) [[unlikely]] return; }
L_00158B94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158B9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 127u, depth + 1u); else { c.pc = 0x00158C10u; return; } if (c.pc != 0x00158B9Cu) [[unlikely]] return; }
L_00158B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158BA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 130u, depth + 1u); else { c.pc = 0x00158C60u; return; } if (c.pc != 0x00158BA4u) [[unlikely]] return; }
L_00158BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158BACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 132u, depth + 1u); else { c.pc = 0x00158CA0u; return; } if (c.pc != 0x00158BACu) [[unlikely]] return; }
L_00158BAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158BB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 134u, depth + 1u); else { c.pc = 0x00158CE0u; return; } if (c.pc != 0x00158BB4u) [[unlikely]] return; }
L_00158BB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00158BD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 244u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00158BFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158BF4u);  if (depth < kMaxDepth) unit_0011(c, 62u, depth + 1u); else { c.pc = 0x001646C0u; return; } if (c.pc != 0x00158BF4u) [[unlikely]] return; }
L_00158BF4:
    st32((c.r[16].w[0] + 244u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_00158BFC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00158C10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 260u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 264u)));  goto L_00158C3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158C34u);  if (depth < kMaxDepth) unit_0011(c, 62u, depth + 1u); else { c.pc = 0x001646C0u; return; } if (c.pc != 0x00158C34u) [[unlikely]] return; }
L_00158C34:
    st32((c.r[16].w[0] + 260u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 2;
L_00158C3C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00158C54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158C4Cu);  if (depth < kMaxDepth) unit_0011(c, 62u, depth + 1u); else { c.pc = 0x001646C0u; return; } if (c.pc != 0x00158C4Cu) [[unlikely]] return; }
L_00158C4C:
    st32((c.r[16].w[0] + 264u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_00158C54:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00158C60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 284u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00158C8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158C84u);  if (depth < kMaxDepth) unit_0011(c, 62u, depth + 1u); else { c.pc = 0x001646C0u; return; } if (c.pc != 0x00158C84u) [[unlikely]] return; }
L_00158C84:
    st32((c.r[16].w[0] + 284u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_00158C8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00158CA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 276u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00158CCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158CC4u);  if (depth < kMaxDepth) unit_0011(c, 62u, depth + 1u); else { c.pc = 0x001646C0u; return; } if (c.pc != 0x00158CC4u) [[unlikely]] return; }
L_00158CC4:
    st32((c.r[16].w[0] + 276u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_00158CCC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00158CE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 280u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00158D0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158D04u);  if (depth < kMaxDepth) unit_0011(c, 62u, depth + 1u); else { c.pc = 0x001646C0u; return; } if (c.pc != 0x00158D04u) [[unlikely]] return; }
L_00158D04:
    st32((c.r[16].w[0] + 280u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_00158D0C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00158D20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158D44u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 140u, depth + 1u); else { c.pc = 0x00158D80u; return; } if (c.pc != 0x00158D44u) [[unlikely]] return; }
L_00158D44:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158D50u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x00158E60u; return; } if (c.pc != 0x00158D50u) [[unlikely]] return; }
L_00158D50:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158D5Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 148u, depth + 1u); else { c.pc = 0x00158E90u; return; } if (c.pc != 0x00158D5Cu) [[unlikely]] return; }
L_00158D5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00158D80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 68u), c.r[5].w[0]);  if (t) { goto L_00158E44; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 244u)));  goto L_00158DB8; }
    set32(c.r[4], ld32((c.r[5].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 140u)));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_00158E48; }
    set32(c.r[4], ld32((c.r[16].w[0] + 244u)));
    c.budget -= 1;
L_00158DB8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 260u)));  goto L_00158DD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158DC8u);  if (depth < kMaxDepth) unit_0011(c, 62u, depth + 1u); else { c.pc = 0x001646C0u; return; } if (c.pc != 0x00158DC8u) [[unlikely]] return; }
L_00158DC8:
    st32((c.r[16].w[0] + 244u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 260u)));
    c.budget -= 2;
L_00158DD0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 264u)));  goto L_00158DE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158DE0u);  if (depth < kMaxDepth) unit_0011(c, 62u, depth + 1u); else { c.pc = 0x001646C0u; return; } if (c.pc != 0x00158DE0u) [[unlikely]] return; }
L_00158DE0:
    st32((c.r[16].w[0] + 260u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 2;
L_00158DE8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 284u)));  goto L_00158E00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158DF8u);  if (depth < kMaxDepth) unit_0011(c, 62u, depth + 1u); else { c.pc = 0x001646C0u; return; } if (c.pc != 0x00158DF8u) [[unlikely]] return; }
L_00158DF8:
    st32((c.r[16].w[0] + 264u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 284u)));
    c.budget -= 2;
L_00158E00:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 276u)));  goto L_00158E18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158E10u);  if (depth < kMaxDepth) unit_0011(c, 62u, depth + 1u); else { c.pc = 0x001646C0u; return; } if (c.pc != 0x00158E10u) [[unlikely]] return; }
L_00158E10:
    st32((c.r[16].w[0] + 284u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 276u)));
    c.budget -= 2;
L_00158E18:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 280u)));  goto L_00158E30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158E28u);  if (depth < kMaxDepth) unit_0011(c, 62u, depth + 1u); else { c.pc = 0x001646C0u; return; } if (c.pc != 0x00158E28u) [[unlikely]] return; }
L_00158E28:
    st32((c.r[16].w[0] + 276u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 2;
L_00158E30:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00158E44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158E40u);  if (depth < kMaxDepth) unit_0011(c, 62u, depth + 1u); else { c.pc = 0x001646C0u; return; } if (c.pc != 0x00158E40u) [[unlikely]] return; }
L_00158E40:
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 1;
L_00158E44:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00158E48:
    st32((c.r[16].w[0] + 248u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 252u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00158E60:
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    st32((c.r[4].w[0] + 228u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    st32((c.r[4].w[0] + 232u), c.f[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st32((c.r[4].w[0] + 76u), c.r[5].w[0]);  if (t) { goto L_00158E84; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 248u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 252u), c.r[3].w[0]);
    c.budget -= 3;
L_00158E84:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00158E90:
    st32((c.r[4].w[0] + 72u), c.r[5].w[0]);
    c.budget -= 3;
    { set32(c.r[5], 0u - 1u);  goto L_00159AE0; }
L_00158EA0:
    st32((c.r[4].w[0] + 88u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 92u), c.r[5].w[0]);  c.pc = t; return; }
L_00158EB0:
    c.f[1] = ld32((c.r[4].w[0] + 80u));
    st32((c.r[4].w[0] + 80u), c.f[12]);
    st32((c.r[4].w[0] + 240u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00158ED8; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 248u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 252u), c.r[3].w[0]);
    c.budget -= 3;
L_00158ED8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00158EE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 96u), c.f[12]);  c.pc = t; return; }
L_00158EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00158F10; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00158F1C; } }
L_00158F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F18u);  if (depth < kMaxDepth) unit_0011(c, 291u, depth + 1u); else { c.pc = 0x00166830u; return; } if (c.pc != 0x00158F18u) [[unlikely]] return; }
L_00158F18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00158F1C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00158F30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00158F50; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00158F5C; } }
L_00158F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00158F58u);  if (depth < kMaxDepth) unit_0013(c, 296u, depth + 1u); else { c.pc = 0x0016F350u; return; } if (c.pc != 0x00158F58u) [[unlikely]] return; }
L_00158F58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00158F5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00158F70:
    set32(c.r[6], ld32((c.r[6].w[0] + 72u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 144u), c.r[4].w[0]);  c.pc = t; return; }
L_00158FA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 140u)));  goto L_00158FB0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00158FB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00158FC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0015903C; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_0015903C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 140u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015903C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159008u);  if (depth < kMaxDepth) unit_000E(c, 255u, depth + 1u); else { c.pc = 0x0015A0C0u; return; } if (c.pc != 0x00159008u) [[unlikely]] return; }
L_00159008:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015903C; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00159050; }
    set32(c.r[4], ld32((c.r[18].w[0] + 244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159024u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 311u, depth + 1u); else { c.pc = 0x00166AB0u; return; } if (c.pc != 0x00159024u) [[unlikely]] return; }
L_00159024:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159030u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00159030u) [[unlikely]] return; }
L_00159030:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00159050; } }
L_0015903C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00159050; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015904Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0015904Cu) [[unlikely]] return; }
L_0015904C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00159050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00159070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001590CC; } }
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_001590D0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 140u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001590CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001590B0u);  if (depth < kMaxDepth) unit_000E(c, 255u, depth + 1u); else { c.pc = 0x0015A0C0u; return; } if (c.pc != 0x001590B0u) [[unlikely]] return; }
L_001590B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001590CC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001590C4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 311u, depth + 1u); else { c.pc = 0x00166AB0u; return; } if (c.pc != 0x001590C4u) [[unlikely]] return; }
L_001590C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001590D4; } }
L_001590CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001590D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001590D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001590F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0015915C; } }
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_00159160; }
    set32(c.r[2], ld32((c.r[2].w[0] + 140u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015915C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159138u);  if (depth < kMaxDepth) unit_000E(c, 255u, depth + 1u); else { c.pc = 0x0015A0C0u; return; } if (c.pc != 0x00159138u) [[unlikely]] return; }
L_00159138:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015915C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 244u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159154u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 312u, depth + 1u); else { c.pc = 0x00166AC0u; return; } if (c.pc != 0x00159154u) [[unlikely]] return; }
L_00159154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00159164; } }
L_0015915C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00159160:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00159164:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00159180:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00159208; } }
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_0015920C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 140u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001591C0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00159208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001591D0u);  if (depth < kMaxDepth) unit_000E(c, 255u, depth + 1u); else { c.pc = 0x0015A0C0u; return; } if (c.pc != 0x001591D0u) [[unlikely]] return; }
L_001591D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00159208; } }
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00159220; }
    set32(c.r[4], ld32((c.r[19].w[0] + 244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001591F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 311u, depth + 1u); else { c.pc = 0x00166AB0u; return; } if (c.pc != 0x001591F0u) [[unlikely]] return; }
L_001591F0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001591FCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x001591FCu) [[unlikely]] return; }
L_001591FC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00159220; } }
L_00159208:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_0015920C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00159220; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015921Cu);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0015921Cu) [[unlikely]] return; }
L_0015921C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00159220:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00159230; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00159244; } }
L_00159230:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015923Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x0015923Cu) [[unlikely]] return; }
L_0015923C:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_00159244:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00159260:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = c.r[17].sd[0] < 0; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0015937C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 140u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[22].d[0] + 0ull;  goto L_00159380; }
    set32(c.r[2], ld32((c.r[18].w[0] + 284u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00159330; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00159330; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 284u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  goto L_001592E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001592E0u);  if (depth < kMaxDepth) unit_0011(c, 62u, depth + 1u); else { c.pc = 0x001646C0u; return; } if (c.pc != 0x001592E0u) [[unlikely]] return; }
L_001592E0:
    st32((c.r[18].w[0] + 284u), 0u);
    set32(c.r[2], c.r[19].w[0] << 2);
    c.budget -= 2;
L_001592E8:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001592F4u); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0011(c, 59u, depth + 1u); else { c.pc = 0x00164670u; return; } if (c.pc != 0x001592F4u) [[unlikely]] return; }
L_001592F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 284u), c.r[2].w[0]);  if (t) { goto L_00159330; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00159330; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00159308:
    set32(c.r[3], ld32((c.r[18].w[0] + 284u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159320u); set32(c.r[4], c.r[3].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00159320u) [[unlikely]] return; }
L_00159320:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 80u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00159308u | kUnwind; return; } goto L_00159308; } }
L_00159330:
    set32(c.r[2], ld32((c.r[18].w[0] + 284u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015937C; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 284u)));
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[23].w[0]);
    st32((c.r[18].w[0] + 248u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 284u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[22], c.r[2].w[0] + 16u);  if (t) { goto L_0015937C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015937Cu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0015937Cu) [[unlikely]] return; }
L_0015937C:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_00159380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001593B0:
    st32((c.r[4].w[0] + 112u), c.f[12]);
    st32((c.r[4].w[0] + 120u), c.f[13]);
    st32((c.r[4].w[0] + 116u), c.f[12]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 124u), c.f[13]);  c.pc = t; return; }
L_001593D0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 2);  goto L_001593EC; }
    st32((c.r[4].w[0] + 112u), c.f[12]);
    st32((c.r[4].w[0] + 120u), c.f[13]);
    st32((c.r[4].w[0] + 116u), c.f[12]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 124u), c.f[13]);  if (t) { goto L_001593F8; } }
L_001593EC:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 108u), c.f[12]);
    st32((c.r[3].w[0] + 116u), c.f[13]);
    c.budget -= 3;
L_001593F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00159400:
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.f[0]);  c.pc = t; return; }
L_00159420:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 2);  goto L_0015943C; }
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.f[0]);  if (t) { goto L_00159450; } }
L_0015943C:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 108u));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 116u));
    st32((c.r[7].w[0]), c.f[0]);
    c.budget -= 5;
L_00159450:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00159460:
    set32(c.r[6], ld32((c.r[4].w[0] + 100u)));
    c.f[2] = ld32((c.r[4].w[0] + 104u));
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    st32((c.r[4].w[0] + 100u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 104u), c.f[12]);
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 108u), c.f[13]);  if (t) { goto L_00159490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_001594AC; } }
L_00159490:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[13]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[4].w[0] + 100u)));  goto L_001594B0; }
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.budget -= 1;
L_001594AC:
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 1;
L_001594B0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[6].d[0]) { set32(c.r[3], 0u + 1u);  goto L_001594DC; }
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001594D8; } }
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001594E4; } }
L_001594D8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001594DC:
    st32((c.r[4].w[0] + 248u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 252u), c.r[3].w[0]);
    c.budget -= 2;
L_001594E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001594F0:
    c.budget -= 2;
    { set32(c.r[5], ld32((c.r[4].w[0] + 228u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00159460u | kUnwind; return; } goto L_00159460; }
L_00159500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.f[13] = c.f[12];  if (t) { goto L_00159520; } }
    c.f[12] = ld32((c.r[4].w[0] + 232u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159520u); set32(c.r[5], ld32((c.r[4].w[0] + 228u)));  if (depth < kMaxDepth) unit_000E(c, 186u, depth + 1u); else { c.pc = 0x00159460u; return; } if (c.pc != 0x00159520u) [[unlikely]] return; }
L_00159520:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00159530:
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 100u), 0u);  if (t) { goto L_00159548; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00159558; } }
L_00159548:
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 248u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 252u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 256u), 0u);
    c.budget -= 4;
L_00159558:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00159560:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[28].w[0] - 31436u)));
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 19;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0] + 172u), c.r[7].w[0]);  if (t) { goto L_00159788; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 244u)));
    c.budget -= 1;
L_001595B0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001595D8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 284u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001595D8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00159618; } }
L_001595D8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00159610; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001595F0u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_001A(c, 63u, depth + 1u); else { c.pc = 0x00188F50u; return; } if (c.pc != 0x001595F0u) [[unlikely]] return; }
L_001595F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001595F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 255u, depth + 1u); else { c.pc = 0x0015A0C0u; return; } if (c.pc != 0x001595F8u) [[unlikely]] return; }
L_001595F8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159604u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 63u, depth + 1u); else { c.pc = 0x00188F50u; return; } if (c.pc != 0x00159604u) [[unlikely]] return; }
L_00159604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00159618; } }
    c.budget -= 1;
L_00159610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159618u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 255u, depth + 1u); else { c.pc = 0x0015A0C0u; return; } if (c.pc != 0x00159618u) [[unlikely]] return; }
L_00159618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159620u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x00159620u) [[unlikely]] return; }
L_00159620:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00159634; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015978C; } }
L_00159634:
    st32((c.r[19].w[0] + 356u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 352u)));
    st32((c.r[21].w[0] + 136u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 452u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015964Cu); set32(c.r[4], ld32((c.r[19].w[0] + 448u)));  if (depth < kMaxDepth) unit_000F(c, 11u, depth + 1u); else { c.pc = 0x0015C0D0u; return; } if (c.pc != 0x0015964Cu) [[unlikely]] return; }
L_0015964C:
    set32(c.r[2], ld32((c.r[19].w[0] + 448u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 64u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159664u); st32((c.r[21].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x00159664u) [[unlikely]] return; }
L_00159664:
    set32(c.r[2], ld32((c.r[18].w[0] + 244u)));
    st32((c.r[21].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    st32((c.r[21].w[0] + 152u), c.r[23].w[0]);
    st32((c.r[21].w[0] + 156u), c.r[30].w[0]);
    st32((c.r[21].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 204u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00159690; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 112u)));
    c.budget -= 2;
L_00159690:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] - 19856u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[21].w[0] + 144u), c.r[2].w[0]);  if (t) { goto L_001596E0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001596D0; } }
    set32(c.r[4], c.r[21].w[0] + 64u);
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001596C8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x001596C8u) [[unlikely]] return; }
L_001596C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001596E0; } }
L_001596D0:
    set32(c.r[4], c.r[21].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001596E0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x001596E0u) [[unlikely]] return; }
L_001596E0:
    set32(c.r[2], ld32((c.r[18].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00159728; } }
    set32(c.r[22], ld32((c.r[18].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001596F8u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x001596F8u) [[unlikely]] return; }
L_001596F8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 208u)));  goto L_0015970C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015978C; } }
L_0015970C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159718u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00159718u) [[unlikely]] return; }
L_00159718:
    st32((c.r[21].w[0] + 164u), c.r[20].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 168u), c.r[22].w[0]);  if (t) { goto L_00159730; } }
    c.budget -= 1;
L_00159728:
    st32((c.r[21].w[0] + 164u), 0u);
    st32((c.r[21].w[0] + 168u), 0u);
    c.budget -= 2;
L_00159730:
    st32((c.r[18].w[0] + 256u), 0u);
    st32((c.r[21].w[0] + 132u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 128u), 0u);
    st32((c.r[16].w[0]), c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[21].w[0] + 128u);  if (t) { goto L_00159778; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 172u)));
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159764u); c.r[6].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 191u, depth + 1u); else { c.pc = 0x00159560u; return; } if (c.pc != 0x00159764u) [[unlikely]] return; }
L_00159764:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[18], ld32((c.r[18].w[0] + 200u)));  goto L_0015977C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015978C; } }
L_00159778:
    set32(c.r[18], ld32((c.r[18].w[0] + 200u)));
    c.budget -= 1;
L_0015977C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 244u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001595B0u | kUnwind; return; } goto L_001595B0; }
    c.budget -= 1;
L_00159788:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015978C:
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
L_001597C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 244u)));
    set32(c.r[20], ld32((c.r[28].w[0] - 31436u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00159818; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 284u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 176u);  goto L_00159824; }
L_00159818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159820u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 255u, depth + 1u); else { c.pc = 0x0015A0C0u; return; } if (c.pc != 0x00159820u) [[unlikely]] return; }
L_00159820:
    set32(c.r[4], 0u + 176u);
    c.budget -= 1;
L_00159824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015982Cu);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x0015982Cu) [[unlikely]] return; }
L_0015982C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  goto L_00159840; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001598DC; } }
L_00159840:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0]), c.r[21].w[0]);
    st32((c.r[20].w[0] + 356u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    st32((c.r[21].w[0] + 136u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 452u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159860u); set32(c.r[4], ld32((c.r[20].w[0] + 448u)));  if (depth < kMaxDepth) unit_000F(c, 11u, depth + 1u); else { c.pc = 0x0015C0D0u; return; } if (c.pc != 0x00159860u) [[unlikely]] return; }
L_00159860:
    set32(c.r[2], ld32((c.r[20].w[0] + 448u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 64u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159878u); st32((c.r[21].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x00159878u) [[unlikely]] return; }
L_00159878:
    set32(c.r[2], ld32((c.r[19].w[0] + 244u)));
    st32((c.r[21].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 2;
L_00159880:
    st32((c.r[21].w[0] + 152u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 156u), c.r[16].w[0]);
    st32((c.r[21].w[0] + 160u), c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 208u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { st32((c.r[21].w[0] + 164u), 0u);  goto L_001598D0; }
    set32(c.r[16], ld32((c.r[19].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001598A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x001598A4u) [[unlikely]] return; }
L_001598A4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 208u)));  goto L_001598B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001598DC; } }
L_001598B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001598C4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001598C4u) [[unlikely]] return; }
L_001598C4:
    st32((c.r[21].w[0] + 164u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 168u), c.r[16].w[0]);  if (t) { goto L_001598D4; } }
L_001598D0:
    st32((c.r[21].w[0] + 168u), 0u);
    c.budget -= 1;
L_001598D4:
    st32((c.r[19].w[0] + 256u), 0u);
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_001598DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00159910:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 136u)));  goto L_0015992C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015995C; } }
L_0015992C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00159950; }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159948u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 230u, depth + 1u); else { c.pc = 0x00159B00u; return; } if (c.pc != 0x00159948u) [[unlikely]] return; }
L_00159948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015995C; } }
L_00159950:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015995Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 233u, depth + 1u); else { c.pc = 0x00159BD0u; return; } if (c.pc != 0x0015995Cu) [[unlikely]] return; }
L_0015995C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00159970:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0015998C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00159998; } }
L_0015998C:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159998u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 236u, depth + 1u); else { c.pc = 0x00159C90u; return; } if (c.pc != 0x00159998u) [[unlikely]] return; }
L_00159998:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001599B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_001599CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001599D8; } }
L_001599CC:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001599D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 239u, depth + 1u); else { c.pc = 0x00159D50u; return; } if (c.pc != 0x001599D8u) [[unlikely]] return; }
L_001599D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001599F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00159A0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00159A18; } }
L_00159A0C:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159A18u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 243u, depth + 1u); else { c.pc = 0x00159E30u; return; } if (c.pc != 0x00159A18u) [[unlikely]] return; }
L_00159A18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00159A30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 136u)));  goto L_00159A4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00159A70; } }
L_00159A4C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_00159A68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159A60u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 230u, depth + 1u); else { c.pc = 0x00159B00u; return; } if (c.pc != 0x00159A60u) [[unlikely]] return; }
L_00159A60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00159A70; } }
L_00159A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159A70u);  if (depth < kMaxDepth) unit_000E(c, 233u, depth + 1u); else { c.pc = 0x00159BD0u; return; } if (c.pc != 0x00159A70u) [[unlikely]] return; }
L_00159A70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00159A80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00159A9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00159AC8; } }
L_00159A9C:
    set32(c.r[3], ld32((c.r[2].w[0] + 136u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00159AC0; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159AB8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 230u, depth + 1u); else { c.pc = 0x00159B00u; return; } if (c.pc != 0x00159AB8u) [[unlikely]] return; }
L_00159AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00159AC8; } }
L_00159AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159AC8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 233u, depth + 1u); else { c.pc = 0x00159BD0u; return; } if (c.pc != 0x00159AC8u) [[unlikely]] return; }
L_00159AC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00159AE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 84u), c.r[5].w[0]);  c.pc = t; return; }
L_00159AF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 84u)));  c.pc = t; return; }
L_00159B00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 7u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159B3Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0010(c, 163u, depth + 1u); else { c.pc = 0x001616E0u; return; } if (c.pc != 0x00159B3Cu) [[unlikely]] return; }
L_00159B3C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_00159B50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00159BA8; } }
L_00159B50:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159B68u); set32(c.r[9], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_000E(c, 191u, depth + 1u); else { c.pc = 0x00159560u; return; } if (c.pc != 0x00159B68u) [[unlikely]] return; }
L_00159B68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 100u)));  goto L_00159B90; }
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00150000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 31520u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 8;
L_00159B90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00159BA8; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 256u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 100u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_00159BA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00159BD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 7u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159C0Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0010(c, 163u, depth + 1u); else { c.pc = 0x001616E0u; return; } if (c.pc != 0x00159C0Cu) [[unlikely]] return; }
L_00159C0C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { c.r[6].d[0] = c.r[20].d[0] + 0ull;  goto L_00159C20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00159C70; } }
L_00159C20:
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159C34u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 205u, depth + 1u); else { c.pc = 0x001597C0u; return; } if (c.pc != 0x00159C34u) [[unlikely]] return; }
L_00159C34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 100u)));  goto L_00159C58; }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[4], c.r[4].w[0] - 31600u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 7;
L_00159C58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00159C70; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 256u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 100u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_00159C70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00159C90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159CC4u); c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 240u, depth + 1u); else { c.pc = 0x001621B0u; return; } if (c.pc != 0x00159CC4u) [[unlikely]] return; }
L_00159CC4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_00159CD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00159D30; } }
L_00159CD8:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159CF0u); set32(c.r[9], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_000E(c, 191u, depth + 1u); else { c.pc = 0x00159560u; return; } if (c.pc != 0x00159CF0u) [[unlikely]] return; }
L_00159CF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 100u)));  goto L_00159D18; }
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 32352u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 8;
L_00159D18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00159D30; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 256u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 100u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_00159D30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00159D50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159D84u); c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 240u, depth + 1u); else { c.pc = 0x001621B0u; return; } if (c.pc != 0x00159D84u) [[unlikely]] return; }
L_00159D84:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_00159D98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00159E08; } }
L_00159D98:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159DB0u); set32(c.r[9], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_000E(c, 191u, depth + 1u); else { c.pc = 0x00159560u; return; } if (c.pc != 0x00159DB0u) [[unlikely]] return; }
L_00159DB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 100u)));  goto L_00159DF0; }
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 32000u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[2].w[0] + 48u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159DECu); set32(c.r[4], c.r[3].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 149u, depth + 1u); else { c.pc = 0x0018EA30u; return; } if (c.pc != 0x00159DECu) [[unlikely]] return; }
L_00159DEC:
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 1;
L_00159DF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00159E08; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 256u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 100u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_00159E08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00159E30:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159E64u); c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 243u, depth + 1u); else { c.pc = 0x001622C0u; return; } if (c.pc != 0x00159E64u) [[unlikely]] return; }
L_00159E64:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_00159E78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00159ED0; } }
L_00159E78:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159E90u); set32(c.r[9], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_000E(c, 191u, depth + 1u); else { c.pc = 0x00159560u; return; } if (c.pc != 0x00159E90u) [[unlikely]] return; }
L_00159E90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 100u)));  goto L_00159EB8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00150000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 31520u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 8;
L_00159EB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00159ED0; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 256u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 100u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_00159ED0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00159EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4A420000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 20296ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 4u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159F18u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0018(c, 191u, depth + 1u); else { c.pc = 0x001825D0u; return; } if (c.pc != 0x00159F18u) [[unlikely]] return; }
L_00159F18:
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159F24u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0018(c, 191u, depth + 1u); else { c.pc = 0x001825D0u; return; } if (c.pc != 0x00159F24u) [[unlikely]] return; }
L_00159F24:
    set32(c.r[2], 0u + 1023u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 288u);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 192u), 0u);
    st32((c.r[16].w[0] + 196u), 0u);
    st32((c.r[16].w[0] + 200u), 0u);
    st32((c.r[16].w[0] + 204u), 0u);
    st32((c.r[16].w[0] + 228u), 0u);
    st32((c.r[16].w[0] + 232u), 0u);
    st32((c.r[16].w[0] + 220u), 0u);
    st32((c.r[16].w[0] + 224u), 0u);
    st32((c.r[16].w[0] + 216u), 0u);
    st32((c.r[16].w[0] + 236u), 0u);
    st32((c.r[16].w[0] + 240u), 0u);
    st32((c.r[16].w[0] + 244u), 0u);
    st32((c.r[16].w[0] + 248u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 252u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 256u), 0u);
    st32((c.r[16].w[0] + 260u), 0u);
    st32((c.r[16].w[0] + 264u), 0u);
    st32((c.r[16].w[0] + 268u), 0u);
    st32((c.r[16].w[0] + 272u), 0u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00159F90u); st32((c.r[16].w[0] + 284u), 0u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00159F90u) [[unlikely]] return; }
L_00159F90:
    st32((c.r[16].w[0] + 276u), 0u);
    st32((c.r[16].w[0] + 280u), 0u);
    st32((c.r[16].w[0] + 208u), 0u);
    st32((c.r[16].w[0] + 212u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00159FB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 280u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0015A04C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0015A03C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 280u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 68u)));  goto L_0015A008; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A000u);  if (depth < kMaxDepth) unit_0011(c, 62u, depth + 1u); else { c.pc = 0x001646C0u; return; } if (c.pc != 0x0015A000u) [[unlikely]] return; }
L_0015A000:
    st32((c.r[18].w[0] + 280u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 2;
L_0015A008:
    set32(c.r[2], ld32((c.r[2].w[0] + 140u)));
    set32(c.r[19], c.r[2].w[0] << 1);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A018u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 59u, depth + 1u); else { c.pc = 0x00164670u; return; } if (c.pc != 0x0015A018u) [[unlikely]] return; }
L_0015A018:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 280u), c.r[2].w[0]);  if (t) { goto L_0015A038; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A030u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0015A030u) [[unlikely]] return; }
L_0015A030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0015A03C; } }
L_0015A038:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015A03C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015A04C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015A09C; } }
L_0015A04C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0015A070; }
    set32(c.r[2], ld32((c.r[18].w[0] + 280u)));
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0015A090; } }
L_0015A070:
    set32(c.r[3], c.r[17].w[0] << 1);
    st32((c.r[18].w[0] + 248u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 280u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 65531ull;
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
L_0015A090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A098u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 255u, depth + 1u); else { c.pc = 0x0015A0C0u; return; } if (c.pc != 0x0015A098u) [[unlikely]] return; }
L_0015A098:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0015A09C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015A0C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 248u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015A370; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 244u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] + 288u);  goto L_0015A154; }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0015A140; }
    set32(c.r[4], ld32((c.r[16].w[0] + 244u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  goto L_0015A11C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A114u);  if (depth < kMaxDepth) unit_0011(c, 62u, depth + 1u); else { c.pc = 0x001646C0u; return; } if (c.pc != 0x0015A114u) [[unlikely]] return; }
L_0015A114:
    st32((c.r[16].w[0] + 244u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 2;
L_0015A11C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A124u);  if (depth < kMaxDepth) unit_0011(c, 297u, depth + 1u); else { c.pc = 0x00166910u; return; } if (c.pc != 0x0015A124u) [[unlikely]] return; }
L_0015A124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A12Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 59u, depth + 1u); else { c.pc = 0x00164670u; return; } if (c.pc != 0x0015A12Cu) [[unlikely]] return; }
L_0015A12C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 244u), c.r[2].w[0]);  if (t) { goto L_0015A13C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0015A140; } }
L_0015A13C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015A140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015A150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015A398; } }
L_0015A150:
    set32(c.r[2], c.r[16].w[0] + 288u);
    c.budget -= 1;
L_0015A154:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[4], c.r[4].w[0] - 31168u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A164u); st32((c.r[28].w[0] - 31456u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 324u, depth + 1u); else { c.pc = 0x00166C30u; return; } if (c.pc != 0x0015A164u) [[unlikely]] return; }
L_0015A164:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A178u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 269u, depth + 1u); else { c.pc = 0x00166510u; return; } if (c.pc != 0x0015A178u) [[unlikely]] return; }
L_0015A178:
    set32(c.r[2], ld32((c.r[16].w[0] + 284u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015A1C8; } }
    set32(c.r[18], ld32((c.r[16].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0015A1C8; } }
L_0015A194:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015A1B8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A1B8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 269u, depth + 1u); else { c.pc = 0x00166510u; return; } if (c.pc != 0x0015A1B8u) [[unlikely]] return; }
L_0015A1B8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 80u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A194u | kUnwind; return; } goto L_0015A194; } }
L_0015A1C8:
    set32(c.r[7], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 100u)));  goto L_0015A1E8; }
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A1E0u); set32(c.r[4], ld32((c.r[16].w[0] + 244u)));  if (depth < kMaxDepth) unit_0011(c, 300u, depth + 1u); else { c.pc = 0x00166950u; return; } if (c.pc != 0x0015A1E0u) [[unlikely]] return; }
L_0015A1E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0015A314; } }
L_0015A1E8:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 272u)));  goto L_0015A264; }
    set32(c.r[2], ld32((c.r[16].w[0] + 260u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 260u)));  goto L_0015A21C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 244u)));
    c.f[12] = ld32((c.r[16].w[0] + 80u));
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A214u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 305u, depth + 1u); else { c.pc = 0x001669C0u; return; } if (c.pc != 0x0015A214u) [[unlikely]] return; }
L_0015A214:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 268u), 0u);  if (t) { goto L_0015A25C; } }
L_0015A21C:
    c.f[12] = ld32((c.r[16].w[0] + 80u));
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A22Cu); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 313u, depth + 1u); else { c.pc = 0x00166AD0u; return; } if (c.pc != 0x0015A22Cu) [[unlikely]] return; }
L_0015A22C:
    set32(c.r[6], ld32((c.r[16].w[0] + 220u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 244u)));  goto L_0015A24C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 260u)));
    c.f[12] = ld32((c.r[16].w[0] + 224u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A248u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 323u, depth + 1u); else { c.pc = 0x00166C20u; return; } if (c.pc != 0x0015A248u) [[unlikely]] return; }
L_0015A248:
    set32(c.r[4], ld32((c.r[16].w[0] + 244u)));
    c.budget -= 1;
L_0015A24C:
    set32(c.r[6], ld32((c.r[16].w[0] + 260u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A258u); set32(c.r[5], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_0011(c, 319u, depth + 1u); else { c.pc = 0x00166BC0u; return; } if (c.pc != 0x0015A258u) [[unlikely]] return; }
L_0015A258:
    st32((c.r[16].w[0] + 268u), 0u);
    c.budget -= 1;
L_0015A25C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 272u), 0u);  if (t) { goto L_0015A310; } }
L_0015A264:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 260u)));  goto L_0015A2D0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 260u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 260u)));  goto L_0015A29C; }
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.f[13] = ld32((c.r[16].w[0] + 80u));
    c.f[14] = ld32((c.r[16].w[0] + 108u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A294u); set32(c.r[4], ld32((c.r[16].w[0] + 244u)));  if (depth < kMaxDepth) unit_0011(c, 308u, depth + 1u); else { c.pc = 0x00166A20u; return; } if (c.pc != 0x0015A294u) [[unlikely]] return; }
L_0015A294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015A310; } }
L_0015A29C:
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.f[13] = ld32((c.r[16].w[0] + 80u));
    c.f[14] = ld32((c.r[16].w[0] + 108u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A2B0u); c.f[12] = ld32((c.r[16].w[0] + 104u));  if (depth < kMaxDepth) unit_0011(c, 316u, depth + 1u); else { c.pc = 0x00166B30u; return; } if (c.pc != 0x0015A2B0u) [[unlikely]] return; }
L_0015A2B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[16].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 260u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A2C8u); set32(c.r[4], ld32((c.r[16].w[0] + 244u)));  if (depth < kMaxDepth) unit_0011(c, 319u, depth + 1u); else { c.pc = 0x00166BC0u; return; } if (c.pc != 0x0015A2C8u) [[unlikely]] return; }
L_0015A2C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015A310; } }
L_0015A2D0:
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.f[13] = ld32((c.r[16].w[0] + 108u));
    set32(c.r[6], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A2E4u); c.f[12] = ld32((c.r[16].w[0] + 80u));  if (depth < kMaxDepth) unit_0011(c, 322u, depth + 1u); else { c.pc = 0x00166C10u; return; } if (c.pc != 0x0015A2E4u) [[unlikely]] return; }
L_0015A2E4:
    set32(c.r[6], ld32((c.r[16].w[0] + 220u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 244u)));  goto L_0015A304; }
    set32(c.r[4], ld32((c.r[16].w[0] + 260u)));
    c.f[12] = ld32((c.r[16].w[0] + 224u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A300u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 323u, depth + 1u); else { c.pc = 0x00166C20u; return; } if (c.pc != 0x0015A300u) [[unlikely]] return; }
L_0015A300:
    set32(c.r[4], ld32((c.r[16].w[0] + 244u)));
    c.budget -= 1;
L_0015A304:
    set32(c.r[6], ld32((c.r[16].w[0] + 260u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A310u); set32(c.r[5], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_0011(c, 319u, depth + 1u); else { c.pc = 0x00166BC0u; return; } if (c.pc != 0x0015A310u) [[unlikely]] return; }
L_0015A310:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015A314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A31Cu); st32((c.r[16].w[0] + 248u), 0u);  if (depth < kMaxDepth) unit_0011(c, 324u, depth + 1u); else { c.pc = 0x00166C30u; return; } if (c.pc != 0x0015A31Cu) [[unlikely]] return; }
L_0015A31C:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 284u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 140u)));  if (t) { goto L_0015A370; } }
    set32(c.r[18], ld32((c.r[16].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0015A370; } }
L_0015A33C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015A360; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A35Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 272u, depth + 1u); else { c.pc = 0x00166560u; return; } if (c.pc != 0x0015A35Cu) [[unlikely]] return; }
L_0015A35C:
    c.budget -= 1;
L_0015A360:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 80u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A33Cu | kUnwind; return; } goto L_0015A33C; } }
L_0015A370:
    set32(c.r[4], ld32((c.r[16].w[0] + 244u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0015A398; }
    set32(c.r[5], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0015A394; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A394u); set32(c.r[6], ld32((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0018D2F0u; return; } if (c.pc != 0x0015A394u) [[unlikely]] return; }
L_0015A394:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0015A398:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0015A3C0:
    st32((c.r[5].w[0] + 192u), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 196u)));
    st32((c.r[5].w[0] + 200u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 196u), c.r[5].w[0]);  c.pc = t; return; }
L_0015A3E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 196u);  if (t) { goto L_0015A418; } }
L_0015A3EC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[6], c.r[2].w[0] + 200u);  goto L_0015A40C; }
    set32(c.r[3], ld32((c.r[2].w[0] + 200u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[5].w[0] + 192u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 200u), 0u);  if (t) { goto L_0015A41C; } }
L_0015A40C:
    set32(c.r[2], ld32((c.r[2].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A3ECu | kUnwind; return; } goto L_0015A3EC; } }
L_0015A418:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015A41C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015A430:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015A440:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015A450:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A480u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 181u, depth + 1u); else { c.pc = 0x00161970u; return; } if (c.pc != 0x0015A480u) [[unlikely]] return; }
L_0015A480:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  goto L_0015A49C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A498u); set32(c.r[6], 0u + 1023u);  if (depth < kMaxDepth) unit_0010(c, 187u, depth + 1u); else { c.pc = 0x001619F0u; return; } if (c.pc != 0x0015A498u) [[unlikely]] return; }
L_0015A498:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_0015A49C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_0015A4B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A4ACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 300u, depth + 1u); else { c.pc = 0x0015FA40u; return; } if (c.pc != 0x0015A4ACu) [[unlikely]] return; }
L_0015A4AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_0015A4B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A4BCu); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 346u, depth + 1u); else { c.pc = 0x0018BF30u; return; } if (c.pc != 0x0015A4BCu) [[unlikely]] return; }
L_0015A4BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015A4E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 16;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0015A538; } }
    c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0015A5FC; }
    c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], 0u + 48u);  goto L_0015A544; }
L_0015A538:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015A5FC; } }
L_0015A544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A54Cu);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x0015A54Cu) [[unlikely]] return; }
L_0015A54C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0015A560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015A5FC; } }
L_0015A560:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0015A56C; }
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_0015A56C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A578u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_001A(c, 343u, depth + 1u); else { c.pc = 0x0018BE90u; return; } if (c.pc != 0x0015A578u) [[unlikely]] return; }
L_0015A578:
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A594u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 12u, depth + 1u); else { c.pc = 0x0018C580u; return; } if (c.pc != 0x0015A594u) [[unlikely]] return; }
L_0015A594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A59Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 344u, depth + 1u); else { c.pc = 0x0018BEF0u; return; } if (c.pc != 0x0015A59Cu) [[unlikely]] return; }
L_0015A59C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    set32(c.r[6], 0u + 2u);
    st32((c.r[21].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 24u), 0u);
    st32((c.r[21].w[0] + 20u), 0u);
    st32((c.r[21].w[0] + 28u), c.r[22].w[0]);
    st32((c.r[21].w[0] + 32u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 36u), c.r[18].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A5D4u); st32((c.r[21].w[0] + 40u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0010(c, 163u, depth + 1u); else { c.pc = 0x001616E0u; return; } if (c.pc != 0x0015A5D4u) [[unlikely]] return; }
L_0015A5D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 8u)));  goto L_0015A5E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015A5FC; } }
L_0015A5E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[4], c.r[4].w[0] - 23472u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0]), c.r[21].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
L_0015A5FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0015A630:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 16;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0015A688; } }
    c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0015A744; }
    c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], 0u + 48u);  goto L_0015A694; }
L_0015A688:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015A744; } }
L_0015A694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A69Cu);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x0015A69Cu) [[unlikely]] return; }
L_0015A69C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0015A6B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015A744; } }
L_0015A6B0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0015A6BC; }
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_0015A6BC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A6C8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_001A(c, 343u, depth + 1u); else { c.pc = 0x0018BE90u; return; } if (c.pc != 0x0015A6C8u) [[unlikely]] return; }
L_0015A6C8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A6DCu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 9u, depth + 1u); else { c.pc = 0x0018C3B0u; return; } if (c.pc != 0x0015A6DCu) [[unlikely]] return; }
L_0015A6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A6E4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 344u, depth + 1u); else { c.pc = 0x0018BEF0u; return; } if (c.pc != 0x0015A6E4u) [[unlikely]] return; }
L_0015A6E4:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    set32(c.r[6], 0u + 2u);
    st32((c.r[21].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 24u), 0u);
    st32((c.r[21].w[0] + 20u), 0u);
    st32((c.r[21].w[0] + 28u), c.r[22].w[0]);
    st32((c.r[21].w[0] + 32u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 36u), c.r[18].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A71Cu); st32((c.r[21].w[0] + 40u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0010(c, 163u, depth + 1u); else { c.pc = 0x001616E0u; return; } if (c.pc != 0x0015A71Cu) [[unlikely]] return; }
L_0015A71C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 8u)));  goto L_0015A72C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015A744; } }
L_0015A72C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[4], c.r[4].w[0] - 23472u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0]), c.r[21].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
L_0015A744:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0015A770:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 16;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0015A7C8; } }
    c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0015A88C; }
    c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], 0u + 48u);  goto L_0015A7D4; }
L_0015A7C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015A88C; } }
L_0015A7D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A7DCu);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x0015A7DCu) [[unlikely]] return; }
L_0015A7DC:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0015A7F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015A88C; } }
L_0015A7F0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0015A7FC; }
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_0015A7FC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A808u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_001A(c, 343u, depth + 1u); else { c.pc = 0x0018BE90u; return; } if (c.pc != 0x0015A808u) [[unlikely]] return; }
L_0015A808:
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A824u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 12u, depth + 1u); else { c.pc = 0x0018C580u; return; } if (c.pc != 0x0015A824u) [[unlikely]] return; }
L_0015A824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A82Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 344u, depth + 1u); else { c.pc = 0x0018BEF0u; return; } if (c.pc != 0x0015A82Cu) [[unlikely]] return; }
L_0015A82C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    set32(c.r[6], 0u + 2u);
    st32((c.r[21].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 24u), 0u);
    st32((c.r[21].w[0] + 20u), 0u);
    st32((c.r[21].w[0] + 28u), c.r[22].w[0]);
    st32((c.r[21].w[0] + 32u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 36u), c.r[18].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A864u); st32((c.r[21].w[0] + 40u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0010(c, 163u, depth + 1u); else { c.pc = 0x001616E0u; return; } if (c.pc != 0x0015A864u) [[unlikely]] return; }
L_0015A864:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 8u)));  goto L_0015A874; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015A88C; } }
L_0015A874:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[4], c.r[4].w[0] - 23472u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 3;
L_0015A880:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0]), c.r[21].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_0015A88C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0015A8C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 16;
    { const bool t = c.r[19].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0015A908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015A9DC; } }
L_0015A908:
    c.r[1].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;  goto L_0015A91C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015A9DC; } }
L_0015A91C:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], 0u + 48u);  goto L_0015A92C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015A9DC; } }
L_0015A92C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A934u);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x0015A934u) [[unlikely]] return; }
L_0015A934:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0015A948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015A9DC; } }
L_0015A948:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0015A954; }
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_0015A954:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A960u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_001A(c, 343u, depth + 1u); else { c.pc = 0x0018BE90u; return; } if (c.pc != 0x0015A960u) [[unlikely]] return; }
L_0015A960:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A974u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 9u, depth + 1u); else { c.pc = 0x0018C3B0u; return; } if (c.pc != 0x0015A974u) [[unlikely]] return; }
L_0015A974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A97Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 344u, depth + 1u); else { c.pc = 0x0018BEF0u; return; } if (c.pc != 0x0015A97Cu) [[unlikely]] return; }
L_0015A97C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    set32(c.r[6], 0u + 2u);
    st32((c.r[21].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 24u), 0u);
    st32((c.r[21].w[0] + 20u), 0u);
    st32((c.r[21].w[0] + 28u), c.r[22].w[0]);
    st32((c.r[21].w[0] + 32u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 36u), c.r[18].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015A9B4u); st32((c.r[21].w[0] + 40u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0010(c, 163u, depth + 1u); else { c.pc = 0x001616E0u; return; } if (c.pc != 0x0015A9B4u) [[unlikely]] return; }
L_0015A9B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 8u)));  goto L_0015A9C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015A9DC; } }
L_0015A9C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[4], c.r[4].w[0] - 23472u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0]), c.r[21].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
L_0015A9DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0015AA10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 16;
    { const bool t = c.r[19].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0015AA58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015AB30; } }
L_0015AA58:
    c.r[1].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;  goto L_0015AA6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015AB30; } }
L_0015AA6C:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], 0u + 48u);  goto L_0015AA7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015AB30; } }
L_0015AA7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AA84u);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x0015AA84u) [[unlikely]] return; }
L_0015AA84:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0015AA98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015AB30; } }
L_0015AA98:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0015AAA4; }
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_0015AAA4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AAB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001A(c, 343u, depth + 1u); else { c.pc = 0x0018BE90u; return; } if (c.pc != 0x0015AAB0u) [[unlikely]] return; }
L_0015AAB0:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AAC4u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 6u, depth + 1u); else { c.pc = 0x0018C1F0u; return; } if (c.pc != 0x0015AAC4u) [[unlikely]] return; }
L_0015AAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AACCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 344u, depth + 1u); else { c.pc = 0x0018BEF0u; return; } if (c.pc != 0x0015AACCu) [[unlikely]] return; }
L_0015AACC:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    set32(c.r[6], 0u + 2u);
    st32((c.r[21].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 28u), c.r[22].w[0]);
    st32((c.r[21].w[0] + 32u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 36u), c.r[18].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AB08u); st32((c.r[21].w[0] + 40u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0010(c, 163u, depth + 1u); else { c.pc = 0x001616E0u; return; } if (c.pc != 0x0015AB08u) [[unlikely]] return; }
L_0015AB08:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 8u)));  goto L_0015AB18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015AB30; } }
L_0015AB18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[4], c.r[4].w[0] - 23472u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[2].w[0]), c.r[21].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
L_0015AB30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0015AB60:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 16;
    { const bool t = c.r[19].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0015ABA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015AC8C; } }
L_0015ABA8:
    c.r[1].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;  goto L_0015ABBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015AC8C; } }
L_0015ABBC:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], 0u + 48u);  goto L_0015ABCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015AC8C; } }
L_0015ABCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ABD4u);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x0015ABD4u) [[unlikely]] return; }
L_0015ABD4:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0015ABE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015AC8C; } }
L_0015ABE8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0015ABF4; }
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_0015ABF4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AC00u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_001A(c, 343u, depth + 1u); else { c.pc = 0x0018BE90u; return; } if (c.pc != 0x0015AC00u) [[unlikely]] return; }
    goto L_0015AC00;
L_0015ABFC:
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_0015AC00:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AC14u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 9u, depth + 1u); else { c.pc = 0x0018C3B0u; return; } if (c.pc != 0x0015AC14u) [[unlikely]] return; }
L_0015AC14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AC1Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 344u, depth + 1u); else { c.pc = 0x0018BEF0u; return; } if (c.pc != 0x0015AC1Cu) [[unlikely]] return; }
L_0015AC1C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    set32(c.r[6], 0u + 2u);
    st32((c.r[21].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 24u), 0u);
    st32((c.r[21].w[0] + 20u), 0u);
    st32((c.r[21].w[0] + 28u), c.r[22].w[0]);
    st32((c.r[21].w[0] + 32u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 36u), c.r[18].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AC54u); st32((c.r[21].w[0] + 40u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0010(c, 163u, depth + 1u); else { c.pc = 0x001616E0u; return; } if (c.pc != 0x0015AC54u) [[unlikely]] return; }
L_0015AC54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 8u)));  goto L_0015AC64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015AC8C; } }
L_0015AC64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[4], c.r[4].w[0] - 23472u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[3].w[0]), c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 10;
L_0015AC8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0015ACC0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 16;
    { const bool t = c.r[19].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0015AD08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015ADF0; } }
L_0015AD08:
    c.r[1].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;  goto L_0015AD1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015ADF0; } }
L_0015AD1C:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], 0u + 48u);  goto L_0015AD2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015ADF0; } }
L_0015AD2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AD34u);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x0015AD34u) [[unlikely]] return; }
L_0015AD34:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0015AD48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015ADF0; } }
L_0015AD48:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0015AD54; }
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_0015AD54:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AD60u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_001A(c, 343u, depth + 1u); else { c.pc = 0x0018BE90u; return; } if (c.pc != 0x0015AD60u) [[unlikely]] return; }
L_0015AD60:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AD74u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 6u, depth + 1u); else { c.pc = 0x0018C1F0u; return; } if (c.pc != 0x0015AD74u) [[unlikely]] return; }
L_0015AD74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AD7Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 344u, depth + 1u); else { c.pc = 0x0018BEF0u; return; } if (c.pc != 0x0015AD7Cu) [[unlikely]] return; }
L_0015AD7C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    set32(c.r[6], 0u + 2u);
    st32((c.r[21].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 28u), c.r[22].w[0]);
    st32((c.r[21].w[0] + 32u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 36u), c.r[18].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ADB8u); st32((c.r[21].w[0] + 40u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0010(c, 163u, depth + 1u); else { c.pc = 0x001616E0u; return; } if (c.pc != 0x0015ADB8u) [[unlikely]] return; }
L_0015ADB8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 8u)));  goto L_0015ADC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0015ADF0; } }
L_0015ADC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[4], c.r[4].w[0] - 23472u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[3].w[0]), c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 10;
L_0015ADF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0015AE20:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 4;
    { c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A8C0u | kUnwind; return; } goto L_0015A8C0; }
L_0015AE30:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[8], 0u + 3u);
    c.budget -= 4;
    { c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015AA10u | kUnwind; return; } goto L_0015AA10; }
L_0015AE40:
    c.budget -= 2;
    { set32(c.r[8], 0u + 6u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015AB60u | kUnwind; return; } goto L_0015AB60; }
L_0015AE50:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[8], 0u + 7u);
    c.budget -= 4;
    { c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015AB60u | kUnwind; return; } goto L_0015AB60; }
L_0015AE60:
    c.budget -= 2;
    { set32(c.r[8], 0u + 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015ACC0u | kUnwind; return; } goto L_0015ACC0; }
L_0015AE70:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[8], 0u + 9u);
    c.budget -= 4;
    { c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015ACC0u | kUnwind; return; } goto L_0015ACC0; }
L_0015AE80:
    c.budget -= 2;
    { set32(c.r[8], 0u + 10u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A4E0u | kUnwind; return; } goto L_0015A4E0; }
L_0015AE90:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[8], 0u + 11u);
    c.budget -= 4;
    { c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A4E0u | kUnwind; return; } goto L_0015A4E0; }
L_0015AEA0:
    c.budget -= 2;
    { set32(c.r[8], 0u + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A630u | kUnwind; return; } goto L_0015A630; }
L_0015AEB0:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[8], 0u + 13u);
    c.budget -= 4;
    { c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A630u | kUnwind; return; } goto L_0015A630; }
L_0015AEC0:
    c.budget -= 2;
    { set32(c.r[8], 0u + 30u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015A770u | kUnwind; return; } goto L_0015A770; }
L_0015AED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 127u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u - 1u);
    st16((c.r[4].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st8((c.r[4].w[0] + 85u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015AF0Cu); st32((c.r[4].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_000E(c, 345u, depth + 1u); else { c.pc = 0x0015AF90u; return; } if (c.pc != 0x0015AF0Cu) [[unlikely]] return; }
L_0015AF0C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[6], 0u - 1u);
    st32((c.r[16].w[0] + 36u), c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC7800000u);
    st32((c.r[16].w[0] + 40u), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[5], 0u + 3952u);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 56u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 60u), c.r[6].w[0]);
    st16((c.r[16].w[0] + 72u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st64((c.r[16].w[0] + 16u), 0ull);
    st32((c.r[16].w[0] + 64u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 76u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 77u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 78u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 79u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 81u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 82u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 83u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015AF90:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  c.pc = t; return; }
L_0015AFB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] - 19792u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { set32(c.r[4], ld32((c.r[2].w[0])));  [[clang::musttail]] return unit_001A(c, 304u, depth); }
L_0015AFD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] - 19792u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 11;
    { c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  [[clang::musttail]] return unit_0019(c, 138u, depth); }
L_0015B000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015B030; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B028u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 135u, depth + 1u); else { c.pc = 0x00185A30u; return; } if (c.pc != 0x0015B028u) [[unlikely]] return; }
L_0015B028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[16].w[0] + 64u));  if (t) { goto L_0015B080; } }
L_0015B030:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);  goto L_0015B054; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B04Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0019(c, 135u, depth + 1u); else { c.pc = 0x00185A30u; return; } if (c.pc != 0x0015B04Cu) [[unlikely]] return; }
L_0015B04C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015B07C; } }
L_0015B054:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0015B074; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B06Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 135u, depth + 1u); else { c.pc = 0x00185A30u; return; } if (c.pc != 0x0015B06Cu) [[unlikely]] return; }
L_0015B06C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015B07C; } }
L_0015B074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B07Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 135u, depth + 1u); else { c.pc = 0x00185A30u; return; } if (c.pc != 0x0015B07Cu) [[unlikely]] return; }
L_0015B07C:
    c.f[12] = ld32((c.r[16].w[0] + 64u));
    c.budget -= 1;
L_0015B080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B088u);  if (depth < kMaxDepth) unit_0019(c, 176u, depth + 1u); else { c.pc = 0x001862A0u; return; } if (c.pc != 0x0015B088u) [[unlikely]] return; }
L_0015B088:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 72u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 12));
    c.r[6].d[0] = c.r[5].d[0] & 4095ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B0ACu); c.r[4].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0019(c, 152u, depth + 1u); else { c.pc = 0x00185D20u; return; } if (c.pc != 0x0015B0ACu) [[unlikely]] return; }
L_0015B0AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015B0C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 19744u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 85u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B0F0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_001A(c, 305u, depth + 1u); else { c.pc = 0x0018B800u; return; } if (c.pc != 0x0015B0F0u) [[unlikely]] return; }
L_0015B0F0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 85u));
    c.r[2].d[0] = c.r[2].d[0] & 56ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld64((c.r[16].w[0] + 16u));  goto L_0015B128; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 19728u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B120u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_001A(c, 307u, depth + 1u); else { c.pc = 0x0018B840u; return; } if (c.pc != 0x0015B120u) [[unlikely]] return; }
L_0015B120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_0015B134; } }
L_0015B128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B130u);  if (depth < kMaxDepth) unit_001A(c, 308u, depth + 1u); else { c.pc = 0x0018B870u; return; } if (c.pc != 0x0015B130u) [[unlikely]] return; }
L_0015B130:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_0015B134:
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);  goto L_0015B154; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B14Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 135u, depth + 1u); else { c.pc = 0x00185A30u; return; } if (c.pc != 0x0015B14Cu) [[unlikely]] return; }
L_0015B14C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[16].w[0] + 64u));  if (t) { goto L_0015B1A0; } }
L_0015B154:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);  goto L_0015B174; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B16Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0019(c, 135u, depth + 1u); else { c.pc = 0x00185A30u; return; } if (c.pc != 0x0015B16Cu) [[unlikely]] return; }
L_0015B16C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015B19C; } }
L_0015B174:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0015B194; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B18Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 135u, depth + 1u); else { c.pc = 0x00185A30u; return; } if (c.pc != 0x0015B18Cu) [[unlikely]] return; }
L_0015B18C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015B19C; } }
L_0015B194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B19Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 135u, depth + 1u); else { c.pc = 0x00185A30u; return; } if (c.pc != 0x0015B19Cu) [[unlikely]] return; }
L_0015B19C:
    c.f[12] = ld32((c.r[16].w[0] + 64u));
    c.budget -= 1;
L_0015B1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B1A8u);  if (depth < kMaxDepth) unit_0019(c, 176u, depth + 1u); else { c.pc = 0x001862A0u; return; } if (c.pc != 0x0015B1A8u) [[unlikely]] return; }
L_0015B1A8:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 72u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 12));
    c.r[6].d[0] = c.r[5].d[0] & 4095ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B1CCu); c.r[4].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0019(c, 152u, depth + 1u); else { c.pc = 0x00185D20u; return; } if (c.pc != 0x0015B1CCu) [[unlikely]] return; }
L_0015B1CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015B1E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B1FCu); set32(c.r[4], 0u - 1286u);  if (depth < kMaxDepth) unit_0019(c, 153u, depth + 1u); else { c.pc = 0x00185D80u; return; } if (c.pc != 0x0015B1FCu) [[unlikely]] return; }
L_0015B1FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[2].d[0] = c.r[2].d[0] | 35ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 24u)));  goto L_0015B2F4; }
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    st32((c.r[29].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 40u), c.f[0]);  if (t) { goto L_0015B258; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B248u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_0019(c, 153u, depth + 1u); else { c.pc = 0x00185D80u; return; } if (c.pc != 0x0015B248u) [[unlikely]] return; }
L_0015B248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B250u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0019(c, 129u, depth + 1u); else { c.pc = 0x00185910u; return; } if (c.pc != 0x0015B250u) [[unlikely]] return; }
L_0015B250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_0015B27C; } }
L_0015B258:
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015B278; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B270u); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_0019(c, 153u, depth + 1u); else { c.pc = 0x00185D80u; return; } if (c.pc != 0x0015B270u) [[unlikely]] return; }
L_0015B270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B278u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0019(c, 132u, depth + 1u); else { c.pc = 0x001859D0u; return; } if (c.pc != 0x0015B278u) [[unlikely]] return; }
L_0015B278:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_0015B27C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  goto L_0015B2A8; }
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B298u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 153u, depth + 1u); else { c.pc = 0x00185D80u; return; } if (c.pc != 0x0015B298u) [[unlikely]] return; }
L_0015B298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B2A0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0019(c, 128u, depth + 1u); else { c.pc = 0x001858D0u; return; } if (c.pc != 0x0015B2A0u) [[unlikely]] return; }
L_0015B2A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_0015B2CC; } }
L_0015B2A8:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015B2C8; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B2C0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0019(c, 153u, depth + 1u); else { c.pc = 0x00185D80u; return; } if (c.pc != 0x0015B2C0u) [[unlikely]] return; }
L_0015B2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B2C8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0019(c, 131u, depth + 1u); else { c.pc = 0x00185990u; return; } if (c.pc != 0x0015B2C8u) [[unlikely]] return; }
L_0015B2C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_0015B2CC:
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015B2F0; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B2E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 153u, depth + 1u); else { c.pc = 0x00185D80u; return; } if (c.pc != 0x0015B2E4u) [[unlikely]] return; }
L_0015B2E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B2F0u); set32(c.r[4], c.r[4].w[0] - 19712u);  if (depth < kMaxDepth) unit_0019(c, 128u, depth + 1u); else { c.pc = 0x001858D0u; return; } if (c.pc != 0x0015B2F0u) [[unlikely]] return; }
L_0015B2F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_0015B2F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0015B31C; } }
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0015B320; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015B320; } }
L_0015B31C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015B320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B328u);  if (depth < kMaxDepth) unit_0019(c, 141u, depth + 1u); else { c.pc = 0x00185B20u; return; } if (c.pc != 0x0015B328u) [[unlikely]] return; }
L_0015B328:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B33Cu); c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0019(c, 147u, depth + 1u); else { c.pc = 0x00185C10u; return; } if (c.pc != 0x0015B33Cu) [[unlikely]] return; }
L_0015B33C:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B354u); c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0019(c, 144u, depth + 1u); else { c.pc = 0x00185B90u; return; } if (c.pc != 0x0015B354u) [[unlikely]] return; }
L_0015B354:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B368u); c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0019(c, 179u, depth + 1u); else { c.pc = 0x001862F0u; return; } if (c.pc != 0x0015B368u) [[unlikely]] return; }
L_0015B368:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B380u); c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0019(c, 181u, depth + 1u); else { c.pc = 0x00186310u; return; } if (c.pc != 0x0015B380u) [[unlikely]] return; }
L_0015B380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B388u); c.f[12] = ld32((c.r[16].w[0] + 68u));  if (depth < kMaxDepth) unit_0019(c, 182u, depth + 1u); else { c.pc = 0x00186320u; return; } if (c.pc != 0x0015B388u) [[unlikely]] return; }
L_0015B388:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B39Cu); c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0019(c, 183u, depth + 1u); else { c.pc = 0x00186330u; return; } if (c.pc != 0x0015B39Cu) [[unlikely]] return; }
L_0015B39C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015B3B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B3C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 67u, depth + 1u); else { c.pc = 0x00164760u; return; } if (c.pc != 0x0015B3C4u) [[unlikely]] return; }
L_0015B3C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[2].w[0] + 32u), 0u);  goto L_0015B418; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B3E0u); st32((c.r[2].w[0] + 32u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0019(c, 166u, depth + 1u); else { c.pc = 0x00185FE0u; return; } if (c.pc != 0x0015B3E0u) [[unlikely]] return; }
L_0015B3E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] >> 8);
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B3FCu); c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0019(c, 171u, depth + 1u); else { c.pc = 0x00186190u; return; } if (c.pc != 0x0015B3FCu) [[unlikely]] return; }
L_0015B3FC:
    c.f[13] = ld32((c.r[16].w[0] + 44u));
    c.f[14] = ld32((c.r[16].w[0] + 52u));
    c.f[15] = ld32((c.r[16].w[0] + 56u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B410u); c.f[12] = ld32((c.r[16].w[0] + 48u));  if (depth < kMaxDepth) unit_0019(c, 168u, depth + 1u); else { c.pc = 0x00186000u; return; } if (c.pc != 0x0015B410u) [[unlikely]] return; }
L_0015B410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0015B424; } }
L_0015B418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B420u);  if (depth < kMaxDepth) unit_0019(c, 167u, depth + 1u); else { c.pc = 0x00185FF0u; return; } if (c.pc != 0x0015B420u) [[unlikely]] return; }
L_0015B420:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0015B424:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015B430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 76u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[4].w[0] + 77u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 78u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B454u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 172u, depth + 1u); else { c.pc = 0x001861C0u; return; } if (c.pc != 0x0015B454u) [[unlikely]] return; }
L_0015B454:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 80u));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 81u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B464u); c.r[4].d[0] = ld8((c.r[16].w[0] + 79u));  if (depth < kMaxDepth) unit_0019(c, 173u, depth + 1u); else { c.pc = 0x001861F0u; return; } if (c.pc != 0x0015B464u) [[unlikely]] return; }
L_0015B464:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 82u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B470u); c.r[4].d[0] = ld8((c.r[16].w[0] + 83u));  if (depth < kMaxDepth) unit_0019(c, 174u, depth + 1u); else { c.pc = 0x00186220u; return; } if (c.pc != 0x0015B470u) [[unlikely]] return; }
L_0015B470:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015B480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[12] = ld32((c.r[4].w[0] + 36u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B498u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 180u, depth + 1u); else { c.pc = 0x00186300u; return; } if (c.pc != 0x0015B498u) [[unlikely]] return; }
L_0015B498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B4A0u); c.f[12] = ld32((c.r[16].w[0] + 68u));  if (depth < kMaxDepth) unit_0019(c, 182u, depth + 1u); else { c.pc = 0x00186320u; return; } if (c.pc != 0x0015B4A0u) [[unlikely]] return; }
L_0015B4A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B4B4u); c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0019(c, 183u, depth + 1u); else { c.pc = 0x00186330u; return; } if (c.pc != 0x0015B4B4u) [[unlikely]] return; }
L_0015B4B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015B4D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B4E0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 99u, depth + 1u); else { c.pc = 0x00185410u; return; } if (c.pc != 0x0015B4E0u) [[unlikely]] return; }
L_0015B4E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015B4F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0015B500:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B518u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x0015B518u) [[unlikely]] return; }
L_0015B518:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B52Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 421u, depth + 1u); else { c.pc = 0x0015B750u; return; } if (c.pc != 0x0015B52Cu) [[unlikely]] return; }
L_0015B52C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 28u), 0u);  goto L_0015B548; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0015B55C; } }
L_0015B548:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_0015B55C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015B570:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B590u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x0015B590u) [[unlikely]] return; }
L_0015B590:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B5A4u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 421u, depth + 1u); else { c.pc = 0x0015B750u; return; } if (c.pc != 0x0015B5A4u) [[unlikely]] return; }
L_0015B5A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 32u)));  goto L_0015B5C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015B66C; } }
L_0015B5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B5C8u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_001C(c, 108u, depth + 1u); else { c.pc = 0x001918E0u; return; } if (c.pc != 0x0015B5C8u) [[unlikely]] return; }
L_0015B5C8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 64u);  goto L_0015B5F4; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 77u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B5ECu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0015B5ECu) [[unlikely]] return; }
L_0015B5EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0015B66C; } }
L_0015B5F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B5FCu);  if (depth < kMaxDepth) unit_001C(c, 131u, depth + 1u); else { c.pc = 0x00191C70u; return; } if (c.pc != 0x0015B5FCu) [[unlikely]] return; }
L_0015B5FC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[5], 0u + 4u);  goto L_0015B620; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B618u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 459u, depth + 1u); else { c.pc = 0x0015BE20u; return; } if (c.pc != 0x0015B618u) [[unlikely]] return; }
L_0015B618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0015B634; } }
L_0015B620:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[5].d[0];  if (t) { goto L_0015B630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B630u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 459u, depth + 1u); else { c.pc = 0x0015BE20u; return; } if (c.pc != 0x0015B630u) [[unlikely]] return; }
L_0015B630:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0015B634:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { st32((c.r[17].w[0] + 28u), 0u);  goto L_0015B658; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0015B654; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B654u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 459u, depth + 1u); else { c.pc = 0x0015BE20u; return; } if (c.pc != 0x0015B654u) [[unlikely]] return; }
L_0015B654:
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 1;
L_0015B658:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_0015B66C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015B690:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015B6F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], c.r[3].w[0] + 8640u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0015B6D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B6D4u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001C(c, 114u, depth + 1u); else { c.pc = 0x00191A10u; return; } if (c.pc != 0x0015B6D4u) [[unlikely]] return; }
L_0015B6D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015B6D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B6E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 240u, depth + 1u); else { c.pc = 0x00166010u; return; } if (c.pc != 0x0015B6E0u) [[unlikely]] return; }
L_0015B6E0:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0015B6FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B6F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0015B6F8u) [[unlikely]] return; }
L_0015B6F8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015B6FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015B710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015B720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0015B73C; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0015B740; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B73Cu); set32(c.r[4], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_001C(c, 115u, depth + 1u); else { c.pc = 0x00191A20u; return; } if (c.pc != 0x0015B73Cu) [[unlikely]] return; }
L_0015B73C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0015B740:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015B750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x54490000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[3].d[0] | 19528ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B788u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001C(c, 104u, depth + 1u); else { c.pc = 0x00191890u; return; } if (c.pc != 0x0015B788u) [[unlikely]] return; }
L_0015B788:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B794u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 459u, depth + 1u); else { c.pc = 0x0015BE20u; return; } if (c.pc != 0x0015B794u) [[unlikely]] return; }
L_0015B794:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B7A4u); set32(c.r[5], c.r[5].w[0] - 19696u);  if (depth < kMaxDepth) unit_000E(c, 447u, depth + 1u); else { c.pc = 0x0015BC50u; return; } if (c.pc != 0x0015B7A4u) [[unlikely]] return; }
L_0015B7A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B7B4u); set32(c.r[5], c.r[5].w[0] - 19680u);  if (depth < kMaxDepth) unit_000E(c, 439u, depth + 1u); else { c.pc = 0x0015BB50u; return; } if (c.pc != 0x0015B7B4u) [[unlikely]] return; }
L_0015B7B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B7C4u); set32(c.r[5], c.r[5].w[0] - 19664u);  if (depth < kMaxDepth) unit_000E(c, 441u, depth + 1u); else { c.pc = 0x0015BB70u; return; } if (c.pc != 0x0015B7C4u) [[unlikely]] return; }
L_0015B7C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B7DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 451u, depth + 1u); else { c.pc = 0x0015BD10u; return; } if (c.pc != 0x0015B7DCu) [[unlikely]] return; }
L_0015B7DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015B7F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[2].w[0] - 6348u));
    c.f[0] = ld32((c.r[3].w[0] - 6344u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[7], ld32((c.r[2].w[0] - 6340u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] - 6336u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 6332u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] - 6328u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 6324u));
    st32((c.r[29].w[0] + 56u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] - 6320u));
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 6316u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] - 6312u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 6308u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 72u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] - 6304u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 6300u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] - 6296u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 6292u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] - 6288u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 6284u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 96u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] - 6280u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 6276u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 6352u)));
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[29].w[0] + 92u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 85;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015B94C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B94Cu); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001C(c, 114u, depth + 1u); else { c.pc = 0x00191A10u; return; } if (c.pc != 0x0015B94Cu) [[unlikely]] return; }
L_0015B94C:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B958u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_001C(c, 105u, depth + 1u); else { c.pc = 0x001918A0u; return; } if (c.pc != 0x0015B958u) [[unlikely]] return; }
L_0015B958:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015B964u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 459u, depth + 1u); else { c.pc = 0x0015BE20u; return; } if (c.pc != 0x0015B964u) [[unlikely]] return; }
L_0015B964:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0015B980:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[2] = ld32((c.r[3].w[0] - 6272u));
    c.f[0] = ld32((c.r[2].w[0] - 6268u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 6264u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[2]);
    set32(c.r[3], ld32((c.r[2].w[0] - 6260u)));
    st32((c.r[29].w[0] + 40u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] - 6256u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] - 6252u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 6248u));
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] - 6244u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 6240u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 60u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] - 6236u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 6232u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] - 6228u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 6220u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 76u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] - 6216u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 6212u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] - 6208u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 6204u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 96u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] - 6200u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 6196u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 6224u)));
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[29].w[0] + 92u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 76;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0015BAB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BAB8u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001C(c, 114u, depth + 1u); else { c.pc = 0x00191A10u; return; } if (c.pc != 0x0015BAB8u) [[unlikely]] return; }
L_0015BAB8:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BAC4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_001C(c, 105u, depth + 1u); else { c.pc = 0x001918A0u; return; } if (c.pc != 0x0015BAC4u) [[unlikely]] return; }
L_0015BAC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BAD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 459u, depth + 1u); else { c.pc = 0x0015BE20u; return; } if (c.pc != 0x0015BAD0u) [[unlikely]] return; }
L_0015BAD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0015BAE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0015BB38; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0015BB3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BB24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 378u, depth + 1u); else { c.pc = 0x001673B0u; return; } if (c.pc != 0x0015BB24u) [[unlikely]] return; }
L_0015BB24:
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BB34u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_001C(c, 151u, depth + 1u); else { c.pc = 0x00191F60u; return; } if (c.pc != 0x0015BB34u) [[unlikely]] return; }
L_0015BB34:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0015BB38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0015BB3C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015BB50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 64u);  [[clang::musttail]] return unit_001C(c, 116u, depth); }
L_0015BB60:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[5], c.r[2].w[0] + 64u);  [[clang::musttail]] return unit_001C(c, 124u, depth); }
L_0015BB70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 64u);  [[clang::musttail]] return unit_001C(c, 117u, depth); }
L_0015BB80:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[5], c.r[2].w[0] + 64u);  [[clang::musttail]] return unit_001C(c, 125u, depth); }
L_0015BB90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 64u);
    c.f[2] = ld32((c.r[2].w[0] - 6188u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] - 6184u));
    st32((c.r[29].w[0] + 20u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 6180u));
    st32((c.r[29].w[0] + 24u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 6192u)));
    st32((c.r[29].w[0] + 28u), c.f[0]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BBECu); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_001C(c, 118u, depth + 1u); else { c.pc = 0x00191A50u; return; } if (c.pc != 0x0015BBECu) [[unlikely]] return; }
L_0015BBEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015BC00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BC20u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001C(c, 126u, depth + 1u); else { c.pc = 0x00191BC0u; return; } if (c.pc != 0x0015BC20u) [[unlikely]] return; }
L_0015BC20:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015BC50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 64u);
    c.f[2] = ld32((c.r[2].w[0] - 6172u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] - 6168u));
    st32((c.r[29].w[0] + 20u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 6164u));
    st32((c.r[29].w[0] + 24u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 6176u)));
    st32((c.r[29].w[0] + 28u), c.f[0]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BCACu); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_001C(c, 119u, depth + 1u); else { c.pc = 0x00191A80u; return; } if (c.pc != 0x0015BCACu) [[unlikely]] return; }
L_0015BCAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015BCC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BCE0u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001C(c, 127u, depth + 1u); else { c.pc = 0x00191BF0u; return; } if (c.pc != 0x0015BCE0u) [[unlikely]] return; }
L_0015BCE0:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015BD10:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015BD28; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_0015BD28:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[4].w[0] + 64u);  goto L_0015BD44; }
    c.f[13] = c.f[0];
    set32(c.r[4], c.r[4].w[0] + 64u);
    c.budget -= 2;
L_0015BD44:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_001C(c, 120u, depth); }
L_0015BD50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BD78u); set32(c.r[4], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_001C(c, 128u, depth + 1u); else { c.pc = 0x00191C10u; return; } if (c.pc != 0x0015BD78u) [[unlikely]] return; }
L_0015BD78:
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BD84u); set32(c.r[4], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_001C(c, 130u, depth + 1u); else { c.pc = 0x00191C40u; return; } if (c.pc != 0x0015BD84u) [[unlikely]] return; }
L_0015BD84:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015BDA0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[4].w[0] + 64u);  goto L_0015BDBC; }
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[4].w[0] + 64u);
    c.budget -= 2;
L_0015BDBC:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_001C(c, 121u, depth); }
L_0015BDD0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 64u);  [[clang::musttail]] return unit_001C(c, 128u, depth); }
L_0015BDE0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[4].w[0] + 64u);  goto L_0015BDFC; }
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[4].w[0] + 64u);
    c.budget -= 2;
L_0015BDFC:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_001C(c, 122u, depth); }
L_0015BE10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 64u);  [[clang::musttail]] return unit_001C(c, 130u, depth); }
L_0015BE20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 164u), c.r[5].w[0]);  c.pc = t; return; }
L_0015BE30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 164u)));  c.pc = t; return; }
L_0015BE40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[17].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE70u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 99u, depth + 1u); else { c.pc = 0x00185410u; return; } if (c.pc != 0x0015BE70u) [[unlikely]] return; }
L_0015BE70:
    set32(c.r[16], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], c.r[17].w[0] >> 2);  goto L_0015BEA4; }
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015BEA0; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BE94u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 98u, depth + 1u); else { c.pc = 0x001853C0u; return; } if (c.pc != 0x0015BE94u) [[unlikely]] return; }
L_0015BE94:
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BEA0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0019(c, 92u, depth + 1u); else { c.pc = 0x001852C0u; return; } if (c.pc != 0x0015BEA0u) [[unlikely]] return; }
L_0015BEA0:
    set32(c.r[16], c.r[17].w[0] >> 2);
    c.budget -= 1;
L_0015BEA4:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015BEA8:
    set32(c.r[19], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0015BEE0; } }
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015BEE0; } }
    set32(c.r[20], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BED0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 98u, depth + 1u); else { c.pc = 0x001853C0u; return; } if (c.pc != 0x0015BED0u) [[unlikely]] return; }
L_0015BED0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BEDCu); set32(c.r[5], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_0019(c, 92u, depth + 1u); else { c.pc = 0x001852C0u; return; } if (c.pc != 0x0015BEDCu) [[unlikely]] return; }
L_0015BEDC:
    c.budget -= 1;
L_0015BEE0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] >> 1);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015BEA8u | kUnwind; return; } goto L_0015BEA8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0015BF20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF48u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 99u, depth + 1u); else { c.pc = 0x00185410u; return; } if (c.pc != 0x0015BF48u) [[unlikely]] return; }
L_0015BF48:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] >> 2);  goto L_0015BF70; }
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015BF6C; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF6Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 98u, depth + 1u); else { c.pc = 0x001853C0u; return; } if (c.pc != 0x0015BF6Cu) [[unlikely]] return; }
L_0015BF6C:
    set32(c.r[17], c.r[17].w[0] >> 2);
    c.budget -= 1;
L_0015BF70:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0015BF74:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015BF98; } }
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015BF98; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015BF98u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 98u, depth + 1u); else { c.pc = 0x001853C0u; return; } if (c.pc != 0x0015BF98u) [[unlikely]] return; }
L_0015BF98:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] >> 1);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015BF74u | kUnwind; return; } goto L_0015BF74; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015BFD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[5].w[0]);  c.pc = t; return; }
L_0015BFE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[3].w[0] + 12u), c.r[16].w[0]);  if (t) { [[clang::musttail]] return unit_000F(c, 10u, depth); } }
    [[clang::musttail]] return unit_000F(c, 1u, depth);
}

}
