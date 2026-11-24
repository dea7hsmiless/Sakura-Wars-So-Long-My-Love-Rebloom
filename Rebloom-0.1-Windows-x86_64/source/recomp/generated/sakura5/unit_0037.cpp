#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0037[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0,
    0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0,
    36, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0,
    0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0,
    0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 67,
    0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0,
    0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96,
    0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0,
    0, 103, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0,
    0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0,
    0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0,
    120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0,
    0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0,
    0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0,
    0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0,
    142, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0,
    0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0,
    0, 159, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0,
    0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0,
    0, 0, 229, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 237, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0,
    0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259,
    260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0,
    0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279,
    0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 288, 0, 289, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 294, 0, 295, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0,
    0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    0, 330, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 336,
    0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0,
    340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0,
    0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364,
    0, 0, 365, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0,
    0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 387, 0, 388, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393,
    0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0,
    0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0,
    403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0,
    0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408,
    0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0,
    416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 427,
    0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0,
    433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0,
    448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 454, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    464, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0,
    469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0,
    0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0,
    0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0037(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001FC000;
    case 2u: goto L_001FC010;
    case 3u: goto L_001FC044;
    case 4u: goto L_001FC04C;
    case 5u: goto L_001FC068;
    case 6u: goto L_001FC070;
    case 7u: goto L_001FC084;
    case 8u: goto L_001FC0B0;
    case 9u: goto L_001FC0F0;
    case 10u: goto L_001FC110;
    case 11u: goto L_001FC13C;
    case 12u: goto L_001FC17C;
    case 13u: goto L_001FC1BC;
    case 14u: goto L_001FC1CC;
    case 15u: goto L_001FC1DC;
    case 16u: goto L_001FC1EC;
    case 17u: goto L_001FC200;
    case 18u: goto L_001FC2C0;
    case 19u: goto L_001FC2D0;
    case 20u: goto L_001FC2E0;
    case 21u: goto L_001FC2F0;
    case 22u: goto L_001FC30C;
    case 23u: goto L_001FC324;
    case 24u: goto L_001FC330;
    case 25u: goto L_001FC33C;
    case 26u: goto L_001FC35C;
    case 27u: goto L_001FC37C;
    case 28u: goto L_001FC3A0;
    case 29u: goto L_001FC3B4;
    case 30u: goto L_001FC3D8;
    case 31u: goto L_001FC410;
    case 32u: goto L_001FC430;
    case 33u: goto L_001FC440;
    case 34u: goto L_001FC460;
    case 35u: goto L_001FC470;
    case 36u: goto L_001FC480;
    case 37u: goto L_001FC490;
    case 38u: goto L_001FC498;
    case 39u: goto L_001FC4E0;
    case 40u: goto L_001FC4F0;
    case 41u: goto L_001FC510;
    case 42u: goto L_001FC520;
    case 43u: goto L_001FC570;
    case 44u: goto L_001FC580;
    case 45u: goto L_001FC590;
    case 46u: goto L_001FC5A0;
    case 47u: goto L_001FC604;
    case 48u: goto L_001FC634;
    case 49u: goto L_001FC658;
    case 50u: goto L_001FC670;
    case 51u: goto L_001FC6A0;
    case 52u: goto L_001FC6C4;
    case 53u: goto L_001FC6EC;
    case 54u: goto L_001FC6F4;
    case 55u: goto L_001FC704;
    case 56u: goto L_001FC73C;
    case 57u: goto L_001FC750;
    case 58u: goto L_001FC7C4;
    case 59u: goto L_001FC7E4;
    case 60u: goto L_001FC804;
    case 61u: goto L_001FC824;
    case 62u: goto L_001FC830;
    case 63u: goto L_001FC848;
    case 64u: goto L_001FC854;
    case 65u: goto L_001FC860;
    case 66u: goto L_001FC86C;
    case 67u: goto L_001FC87C;
    case 68u: goto L_001FC898;
    case 69u: goto L_001FC8A8;
    case 70u: goto L_001FC8C0;
    case 71u: goto L_001FC8DC;
    case 72u: goto L_001FC8F8;
    case 73u: goto L_001FC91C;
    case 74u: goto L_001FC930;
    case 75u: goto L_001FC938;
    case 76u: goto L_001FC94C;
    case 77u: goto L_001FC960;
    case 78u: goto L_001FC97C;
    case 79u: goto L_001FC9B0;
    case 80u: goto L_001FC9C8;
    case 81u: goto L_001FC9F0;
    case 82u: goto L_001FCA1C;
    case 83u: goto L_001FCA2C;
    case 84u: goto L_001FCA40;
    case 85u: goto L_001FCA4C;
    case 86u: goto L_001FCA64;
    case 87u: goto L_001FCA6C;
    case 88u: goto L_001FCA74;
    case 89u: goto L_001FCAA8;
    case 90u: goto L_001FCAC4;
    case 91u: goto L_001FCAF4;
    case 92u: goto L_001FCB04;
    case 93u: goto L_001FCB10;
    case 94u: goto L_001FCB40;
    case 95u: goto L_001FCB4C;
    case 96u: goto L_001FCB7C;
    case 97u: goto L_001FCB8C;
    case 98u: goto L_001FCBC0;
    case 99u: goto L_001FCC10;
    case 100u: goto L_001FCC50;
    case 101u: goto L_001FCC70;
    case 102u: goto L_001FCCF4;
    case 103u: goto L_001FCD04;
    case 104u: goto L_001FCD0C;
    case 105u: goto L_001FCD14;
    case 106u: goto L_001FCD64;
    case 107u: goto L_001FCD70;
    case 108u: goto L_001FCD88;
    case 109u: goto L_001FCDA8;
    case 110u: goto L_001FCDC0;
    case 111u: goto L_001FCDEC;
    case 112u: goto L_001FCE0C;
    case 113u: goto L_001FCE18;
    case 114u: goto L_001FCE68;
    case 115u: goto L_001FCE90;
    case 116u: goto L_001FCEB0;
    case 117u: goto L_001FCEF0;
    case 118u: goto L_001FCF68;
    case 119u: goto L_001FCF78;
    case 120u: goto L_001FCF80;
    case 121u: goto L_001FCF88;
    case 122u: goto L_001FCFAC;
    case 123u: goto L_001FCFC8;
    case 124u: goto L_001FCFE4;
    case 125u: goto L_001FCFF8;
    case 126u: goto L_001FD008;
    case 127u: goto L_001FD018;
    case 128u: goto L_001FD02C;
    case 129u: goto L_001FD058;
    case 130u: goto L_001FD064;
    case 131u: goto L_001FD084;
    case 132u: goto L_001FD08C;
    case 133u: goto L_001FD0A8;
    case 134u: goto L_001FD0B0;
    case 135u: goto L_001FD0C4;
    case 136u: goto L_001FD0EC;
    case 137u: goto L_001FD108;
    case 138u: goto L_001FD118;
    case 139u: goto L_001FD148;
    case 140u: goto L_001FD154;
    case 141u: goto L_001FD178;
    case 142u: goto L_001FD180;
    case 143u: goto L_001FD19C;
    case 144u: goto L_001FD1A4;
    case 145u: goto L_001FD1AC;
    case 146u: goto L_001FD1E4;
    case 147u: goto L_001FD1F4;
    case 148u: goto L_001FD210;
    case 149u: goto L_001FD234;
    case 150u: goto L_001FD23C;
    case 151u: goto L_001FD250;
    case 152u: goto L_001FD260;
    case 153u: goto L_001FD26C;
    case 154u: goto L_001FD284;
    case 155u: goto L_001FD2A4;
    case 156u: goto L_001FD2AC;
    case 157u: goto L_001FD2E8;
    case 158u: goto L_001FD2F0;
    case 159u: goto L_001FD304;
    case 160u: goto L_001FD30C;
    case 161u: goto L_001FD324;
    case 162u: goto L_001FD330;
    case 163u: goto L_001FD338;
    case 164u: goto L_001FD348;
    case 165u: goto L_001FD364;
    case 166u: goto L_001FD388;
    case 167u: goto L_001FD3A0;
    case 168u: goto L_001FD3A8;
    case 169u: goto L_001FD3B0;
    case 170u: goto L_001FD3E0;
    case 171u: goto L_001FD434;
    case 172u: goto L_001FD46C;
    case 173u: goto L_001FD478;
    case 174u: goto L_001FD4A0;
    case 175u: goto L_001FD4D0;
    case 176u: goto L_001FD510;
    case 177u: goto L_001FD534;
    case 178u: goto L_001FD56C;
    case 179u: goto L_001FD590;
    case 180u: goto L_001FD5B4;
    case 181u: goto L_001FD5C0;
    case 182u: goto L_001FD5D8;
    case 183u: goto L_001FD600;
    case 184u: goto L_001FD610;
    case 185u: goto L_001FD630;
    case 186u: goto L_001FD650;
    case 187u: goto L_001FD67C;
    case 188u: goto L_001FD6BC;
    case 189u: goto L_001FD6D8;
    case 190u: goto L_001FD6F0;
    case 191u: goto L_001FD710;
    case 192u: goto L_001FD738;
    case 193u: goto L_001FD750;
    case 194u: goto L_001FD76C;
    case 195u: goto L_001FD77C;
    case 196u: goto L_001FD7A0;
    case 197u: goto L_001FD7C8;
    case 198u: goto L_001FD7E0;
    case 199u: goto L_001FD818;
    case 200u: goto L_001FD848;
    case 201u: goto L_001FD860;
    case 202u: goto L_001FD8AC;
    case 203u: goto L_001FD8B4;
    case 204u: goto L_001FD8C8;
    case 205u: goto L_001FD8D0;
    case 206u: goto L_001FD8E0;
    case 207u: goto L_001FD900;
    case 208u: goto L_001FD92C;
    case 209u: goto L_001FD934;
    case 210u: goto L_001FD944;
    case 211u: goto L_001FD964;
    case 212u: goto L_001FD980;
    case 213u: goto L_001FD994;
    case 214u: goto L_001FD9C0;
    case 215u: goto L_001FD9E0;
    case 216u: goto L_001FDA30;
    case 217u: goto L_001FDA38;
    case 218u: goto L_001FDA40;
    case 219u: goto L_001FDA60;
    case 220u: goto L_001FDA80;
    case 221u: goto L_001FDAA4;
    case 222u: goto L_001FDAF8;
    case 223u: goto L_001FDB0C;
    case 224u: goto L_001FDB20;
    case 225u: goto L_001FDB30;
    case 226u: goto L_001FDB38;
    case 227u: goto L_001FDB48;
    case 228u: goto L_001FDB68;
    case 229u: goto L_001FDB88;
    case 230u: goto L_001FDB90;
    case 231u: goto L_001FDBA0;
    case 232u: goto L_001FDBC0;
    case 233u: goto L_001FDBE4;
    case 234u: goto L_001FDBF8;
    case 235u: goto L_001FDC20;
    case 236u: goto L_001FDC6C;
    case 237u: goto L_001FDC70;
    case 238u: goto L_001FDC80;
    case 239u: goto L_001FDCA4;
    case 240u: goto L_001FDCB8;
    case 241u: goto L_001FDCD0;
    case 242u: goto L_001FDD0C;
    case 243u: goto L_001FDD48;
    case 244u: goto L_001FDDB4;
    case 245u: goto L_001FDDF0;
    case 246u: goto L_001FDE0C;
    case 247u: goto L_001FDE28;
    case 248u: goto L_001FDE54;
    case 249u: goto L_001FDEA0;
    case 250u: goto L_001FDEC8;
    case 251u: goto L_001FDEE8;
    case 252u: goto L_001FDF00;
    case 253u: goto L_001FDF4C;
    case 254u: goto L_001FDF60;
    case 255u: goto L_001FDF6C;
    case 256u: goto L_001FDF88;
    case 257u: goto L_001FDFAC;
    case 258u: goto L_001FDFE0;
    case 259u: goto L_001FDFFC;
    case 260u: goto L_001FE000;
    case 261u: goto L_001FE008;
    case 262u: goto L_001FE058;
    case 263u: goto L_001FE0C0;
    case 264u: goto L_001FE0D4;
    case 265u: goto L_001FE0E0;
    case 266u: goto L_001FE130;
    case 267u: goto L_001FE160;
    case 268u: goto L_001FE1CC;
    case 269u: goto L_001FE1D4;
    case 270u: goto L_001FE1F4;
    case 271u: goto L_001FE20C;
    case 272u: goto L_001FE22C;
    case 273u: goto L_001FE238;
    case 274u: goto L_001FE254;
    case 275u: goto L_001FE278;
    case 276u: goto L_001FE29C;
    case 277u: goto L_001FE2F0;
    case 278u: goto L_001FE360;
    case 279u: goto L_001FE37C;
    case 280u: goto L_001FE398;
    case 281u: goto L_001FE3B4;
    case 282u: goto L_001FE3C8;
    case 283u: goto L_001FE3E0;
    case 284u: goto L_001FE400;
    case 285u: goto L_001FE42C;
    case 286u: goto L_001FE438;
    case 287u: goto L_001FE450;
    case 288u: goto L_001FE458;
    case 289u: goto L_001FE460;
    case 290u: goto L_001FE478;
    case 291u: goto L_001FE49C;
    case 292u: goto L_001FE4B4;
    case 293u: goto L_001FE4C8;
    case 294u: goto L_001FE504;
    case 295u: goto L_001FE50C;
    case 296u: goto L_001FE520;
    case 297u: goto L_001FE528;
    case 298u: goto L_001FE540;
    case 299u: goto L_001FE54C;
    case 300u: goto L_001FE554;
    case 301u: goto L_001FE564;
    case 302u: goto L_001FE580;
    case 303u: goto L_001FE5A4;
    case 304u: goto L_001FE5BC;
    case 305u: goto L_001FE5C4;
    case 306u: goto L_001FE5CC;
    case 307u: goto L_001FE600;
    case 308u: goto L_001FE64C;
    case 309u: goto L_001FE668;
    case 310u: goto L_001FE6A8;
    case 311u: goto L_001FE6E0;
    case 312u: goto L_001FE700;
    case 313u: goto L_001FE778;
    case 314u: goto L_001FE7C0;
    case 315u: goto L_001FE7D0;
    case 316u: goto L_001FE7E4;
    case 317u: goto L_001FE810;
    case 318u: goto L_001FE83C;
    case 319u: goto L_001FE870;
    case 320u: goto L_001FE88C;
    case 321u: goto L_001FE8BC;
    case 322u: goto L_001FE8E4;
    case 323u: goto L_001FE90C;
    case 324u: goto L_001FE930;
    case 325u: goto L_001FE958;
    case 326u: goto L_001FE97C;
    case 327u: goto L_001FE9A4;
    case 328u: goto L_001FE9C8;
    case 329u: goto L_001FE9F0;
    case 330u: goto L_001FEA04;
    case 331u: goto L_001FEA0C;
    case 332u: goto L_001FEA18;
    case 333u: goto L_001FEA30;
    case 334u: goto L_001FEA6C;
    case 335u: goto L_001FEA74;
    case 336u: goto L_001FEA7C;
    case 337u: goto L_001FEA9C;
    case 338u: goto L_001FEAC0;
    case 339u: goto L_001FEAF8;
    case 340u: goto L_001FEB00;
    case 341u: goto L_001FEB44;
    case 342u: goto L_001FEB88;
    case 343u: goto L_001FEBB0;
    case 344u: goto L_001FEBBC;
    case 345u: goto L_001FEBC4;
    case 346u: goto L_001FEBCC;
    case 347u: goto L_001FEBF0;
    case 348u: goto L_001FEC20;
    case 349u: goto L_001FEC54;
    case 350u: goto L_001FEC70;
    case 351u: goto L_001FECA0;
    case 352u: goto L_001FECC8;
    case 353u: goto L_001FECF0;
    case 354u: goto L_001FED14;
    case 355u: goto L_001FED3C;
    case 356u: goto L_001FED60;
    case 357u: goto L_001FED88;
    case 358u: goto L_001FEDAC;
    case 359u: goto L_001FEDD4;
    case 360u: goto L_001FEDE8;
    case 361u: goto L_001FEDFC;
    case 362u: goto L_001FEE30;
    case 363u: goto L_001FEE4C;
    case 364u: goto L_001FEE7C;
    case 365u: goto L_001FEE88;
    case 366u: goto L_001FEE90;
    case 367u: goto L_001FEECC;
    case 368u: goto L_001FEEF8;
    case 369u: goto L_001FEF2C;
    case 370u: goto L_001FEF48;
    case 371u: goto L_001FEF78;
    case 372u: goto L_001FEF84;
    case 373u: goto L_001FEFA4;
    case 374u: goto L_001FEFCC;
    case 375u: goto L_001FEFD4;
    case 376u: goto L_001FF010;
    case 377u: goto L_001FF018;
    case 378u: goto L_001FF020;
    case 379u: goto L_001FF040;
    case 380u: goto L_001FF064;
    case 381u: goto L_001FF09C;
    case 382u: goto L_001FF0A4;
    case 383u: goto L_001FF0E8;
    case 384u: goto L_001FF12C;
    case 385u: goto L_001FF154;
    case 386u: goto L_001FF160;
    case 387u: goto L_001FF168;
    case 388u: goto L_001FF170;
    case 389u: goto L_001FF1A0;
    case 390u: goto L_001FF1BC;
    case 391u: goto L_001FF1D0;
    case 392u: goto L_001FF1F4;
    case 393u: goto L_001FF1FC;
    case 394u: goto L_001FF204;
    case 395u: goto L_001FF20C;
    case 396u: goto L_001FF260;
    case 397u: goto L_001FF270;
    case 398u: goto L_001FF288;
    case 399u: goto L_001FF29C;
    case 400u: goto L_001FF2B0;
    case 401u: goto L_001FF2C0;
    case 402u: goto L_001FF2E4;
    case 403u: goto L_001FF300;
    case 404u: goto L_001FF350;
    case 405u: goto L_001FF370;
    case 406u: goto L_001FF394;
    case 407u: goto L_001FF3E8;
    case 408u: goto L_001FF3FC;
    case 409u: goto L_001FF410;
    case 410u: goto L_001FF420;
    case 411u: goto L_001FF440;
    case 412u: goto L_001FF450;
    case 413u: goto L_001FF470;
    case 414u: goto L_001FF490;
    case 415u: goto L_001FF4E0;
    case 416u: goto L_001FF500;
    case 417u: goto L_001FF520;
    case 418u: goto L_001FF530;
    case 419u: goto L_001FF550;
    case 420u: goto L_001FF5A0;
    case 421u: goto L_001FF5B0;
    case 422u: goto L_001FF5C0;
    case 423u: goto L_001FF5DC;
    case 424u: goto L_001FF5E8;
    case 425u: goto L_001FF640;
    case 426u: goto L_001FF670;
    case 427u: goto L_001FF67C;
    case 428u: goto L_001FF6A0;
    case 429u: goto L_001FF6C0;
    case 430u: goto L_001FF6CC;
    case 431u: goto L_001FF714;
    case 432u: goto L_001FF770;
    case 433u: goto L_001FF780;
    case 434u: goto L_001FF7B0;
    case 435u: goto L_001FF7D0;
    case 436u: goto L_001FF7E0;
    case 437u: goto L_001FF810;
    case 438u: goto L_001FF820;
    case 439u: goto L_001FF828;
    case 440u: goto L_001FF868;
    case 441u: goto L_001FF87C;
    case 442u: goto L_001FF8A8;
    case 443u: goto L_001FF8C8;
    case 444u: goto L_001FF8EC;
    case 445u: goto L_001FF924;
    case 446u: goto L_001FF960;
    case 447u: goto L_001FF970;
    case 448u: goto L_001FF980;
    case 449u: goto L_001FF990;
    case 450u: goto L_001FF9B4;
    case 451u: goto L_001FF9C8;
    case 452u: goto L_001FF9D8;
    case 453u: goto L_001FF9E8;
    case 454u: goto L_001FF9F8;
    case 455u: goto L_001FFA20;
    case 456u: goto L_001FFA38;
    case 457u: goto L_001FFA5C;
    case 458u: goto L_001FFA90;
    case 459u: goto L_001FFAC0;
    case 460u: goto L_001FFB04;
    case 461u: goto L_001FFB18;
    case 462u: goto L_001FFB30;
    case 463u: goto L_001FFB54;
    case 464u: goto L_001FFB80;
    case 465u: goto L_001FFBA4;
    case 466u: goto L_001FFBBC;
    case 467u: goto L_001FFBE8;
    case 468u: goto L_001FFC64;
    case 469u: goto L_001FFC80;
    case 470u: goto L_001FFCA8;
    case 471u: goto L_001FFCE4;
    case 472u: goto L_001FFCF8;
    case 473u: goto L_001FFD10;
    case 474u: goto L_001FFD34;
    case 475u: goto L_001FFD64;
    case 476u: goto L_001FFD88;
    case 477u: goto L_001FFDA0;
    case 478u: goto L_001FFDCC;
    case 479u: goto L_001FFE14;
    case 480u: goto L_001FFE30;
    case 481u: goto L_001FFE44;
    case 482u: goto L_001FFE70;
    case 483u: goto L_001FFE98;
    case 484u: goto L_001FFED0;
    case 485u: goto L_001FFF04;
    case 486u: goto L_001FFF30;
    case 487u: goto L_001FFF84;
    case 488u: goto L_001FFFA8;
    case 489u: goto L_001FFFBC;
    case 490u: goto L_001FFFD0;
    default: bad_entry(c, 0x001FC000u); return;
    }
L_001FC000:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FC010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001FC090; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001FC094; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FC054; } }
L_001FC044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC04Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 312u, depth + 1u); else { c.pc = 0x001FE700u; return; } if (c.pc != 0x001FC04Cu) [[unlikely]] return; }
L_001FC04C:
    set32(c.r[16], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 2;
L_001FC054:
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC044u | kUnwind; return; } goto L_001FC044; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 56u)));  if (t) { goto L_001FC088; } }
L_001FC068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC070u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 8u, depth + 1u); else { c.pc = 0x001FC0B0u; return; } if (c.pc != 0x001FC070u) [[unlikely]] return; }
L_001FC070:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 68u)));  goto L_001FC088; }
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC084u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 334u, depth + 1u); else { c.pc = 0x001FBEA0u; return; } if (c.pc != 0x001FC084u) [[unlikely]] return; }
L_001FC084:
    set32(c.r[16], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_001FC088:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC068u | kUnwind; return; } goto L_001FC068; }
L_001FC090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001FC094:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FC0B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FC104; }
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FC100; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FC100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC0F0u);  if (depth < kMaxDepth) unit_0037(c, 10u, depth + 1u); else { c.pc = 0x001FC110u; return; } if (c.pc != 0x001FC0F0u) [[unlikely]] return; }
L_001FC0F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FC100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FC104; } }
L_001FC100:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FC104:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001FC110:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FC290; } }
L_001FC13C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[19].d[0]) { set32(c.r[18], ld32((c.r[18].w[0] + 68u)));  goto L_001FC290; }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FC27C; }
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FC278; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FC278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[20].w[0] + 56u)));  if (t) { goto L_001FC25C; } }
L_001FC17C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], ld32((c.r[17].w[0] + 68u)));  goto L_001FC25C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FC248; }
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FC244; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FC244; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[20].w[0] + 56u)));  if (t) { goto L_001FC228; } }
L_001FC1BC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[16], ld32((c.r[16].w[0] + 68u)));  goto L_001FC228; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC1CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 20u, depth + 1u); else { c.pc = 0x001FC2E0u; return; } if (c.pc != 0x001FC1CCu) [[unlikely]] return; }
L_001FC1CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FC214; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC1DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 19u, depth + 1u); else { c.pc = 0x001FC2D0u; return; } if (c.pc != 0x001FC1DCu) [[unlikely]] return; }
L_001FC1DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FC210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC1ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 18u, depth + 1u); else { c.pc = 0x001FC2C0u; return; } if (c.pc != 0x001FC1ECu) [[unlikely]] return; }
L_001FC1EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FC210; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC200u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 10u, depth + 1u); else { c.pc = 0x001FC110u; return; } if (c.pc != 0x001FC200u) [[unlikely]] return; }
L_001FC200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FC210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FC214; } }
L_001FC210:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FC214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FC224; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FC234; } }
L_001FC224:
    set32(c.r[16], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_001FC228:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 64u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC1BCu | kUnwind; return; } goto L_001FC1BC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001FC234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FC244; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FC248; } }
L_001FC244:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FC248:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FC258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FC268; } }
L_001FC258:
    set32(c.r[17], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 1;
L_001FC25C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 64u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC17Cu | kUnwind; return; } goto L_001FC17C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001FC268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FC278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FC27C; } }
L_001FC278:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FC27C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FC28C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FC29C; } }
L_001FC28C:
    set32(c.r[18], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 1;
L_001FC290:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 64u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC13Cu | kUnwind; return; } goto L_001FC13C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001FC29C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001FC2C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;  c.pc = t; return; }
L_001FC2D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 16384ull;  c.pc = t; return; }
L_001FC2E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];  c.pc = t; return; }
L_001FC2F0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC30Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x001FC30Cu) [[unlikely]] return; }
L_001FC30C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_001FC3EC; }
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC324u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x00203990u; return; } if (c.pc != 0x001FC324u) [[unlikely]] return; }
L_001FC324:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001FC3DC; } }
L_001FC330:
    st32((c.r[29].w[0] + 112u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC33Cu); st32((c.r[29].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001FC33Cu) [[unlikely]] return; }
L_001FC33C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 52u);  goto L_001FC3A4; }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 52u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC35Cu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 82u, depth + 1u); else { c.pc = 0x001F4C50u; return; } if (c.pc != 0x001FC35Cu) [[unlikely]] return; }
L_001FC35C:
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 84u)));  goto L_001FC380; }
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC37Cu); set32(c.r[7], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FC37Cu) [[unlikely]] return; }
L_001FC37C:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 1;
L_001FC380:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FC3A0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FC3A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC3A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FC3A0u) [[unlikely]] return; }
L_001FC3A0:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_001FC3A4:
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC3B4u); set32(c.r[7], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0035(c, 92u, depth + 1u); else { c.pc = 0x001F4E30u; return; } if (c.pc != 0x001FC3B4u) [[unlikely]] return; }
L_001FC3B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001FC3DC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001FC3D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC3D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FC3D8u) [[unlikely]] return; }
L_001FC3D8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001FC3DC:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st32((c.r[29].w[0] + 116u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC330u | kUnwind; return; } goto L_001FC330; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001FC3EC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001FC410:
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[6], 0u + 32767u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 5;
    { c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6950u | kUnwind; return; } [[clang::musttail]] return unit_0035(c, 260u, depth); }
L_001FC430:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6890u | kUnwind; return; } [[clang::musttail]] return unit_0035(c, 257u, depth); }
L_001FC440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_001FC468; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC460u); set32(c.r[4], c.r[4].w[0] + 27174u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x001FC460u) [[unlikely]] return; }
L_001FC460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001FC474; } }
L_001FC468:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC470u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FC470u) [[unlikely]] return; }
L_001FC470:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001FC474:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001FC480:
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
L_001FC490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001FC4B0; } }
L_001FC498:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[8], ld32((c.r[8].w[0] + 68u)));  goto L_001FC4B0; }
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[2], c.r[2].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC490u | kUnwind; return; } goto L_001FC490; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC490u | kUnwind; return; } goto L_001FC490; } }
L_001FC4B0:
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { set32(c.r[6], ld32((c.r[8].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC498u | kUnwind; return; } goto L_001FC498; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], c.r[2].w[0] + 1u);  goto L_001FC4D0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_001FC4D4; } }
L_001FC4D0:
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 1;
L_001FC4D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001FC4E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC4F0u);  if (depth < kMaxDepth) unit_0037(c, 41u, depth + 1u); else { c.pc = 0x001FC510u; return; } if (c.pc != 0x001FC4F0u) [[unlikely]] return; }
L_001FC4F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FC500; }
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_001FC500:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001FC510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC520u); set32(c.r[4], ld32((c.r[4].w[0] + 72u)));  if (depth < kMaxDepth) unit_0034(c, 131u, depth + 1u); else { c.pc = 0x001F1290u; return; } if (c.pc != 0x001FC520u) [[unlikely]] return; }
L_001FC520:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FC564; } }
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4D530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 17234ull;
    set32(c.r[5], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[4], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 65280ull;
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[7].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001FC574; } }
L_001FC564:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC570u); set32(c.r[4], c.r[4].w[0] + 27177u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FC570u) [[unlikely]] return; }
L_001FC570:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FC574:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001FC580:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F12C0u | kUnwind; return; } [[clang::musttail]] return unit_0034(c, 133u, depth); }
L_001FC590:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F1470u | kUnwind; return; } [[clang::musttail]] return unit_0034(c, 145u, depth); }
L_001FC5A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001FC624; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45560000u);
    set32(c.r[2], c.r[6].w[0] - 16u);
    c.r[3].d[0] = c.r[3].d[0] | 21331ull;
    set32(c.r[6], 0u + 16u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[3], c.r[5].w[0] + 16u);
    st16((c.r[5].w[0] + 14u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 92u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC604u); st32((c.r[16].w[0] + 84u), 0u);  if (depth < kMaxDepth) unit_0037(c, 81u, depth + 1u); else { c.pc = 0x001FC9F0u; return; } if (c.pc != 0x001FC604u) [[unlikely]] return; }
L_001FC604:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FC624; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FC660; } }
L_001FC624:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC634u); set32(c.r[5], c.r[5].w[0] + 27197u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001FC634u) [[unlikely]] return; }
L_001FC634:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FC660; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 88u), 0u);  goto L_001FC65C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC658u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FC658u) [[unlikely]] return; }
L_001FC658:
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 1;
L_001FC65C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FC660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FC670:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001FC690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001FC740; } }
L_001FC690:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC6A0u); c.r[7].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (depth < kMaxDepth) unit_0022(c, 167u, depth + 1u); else { c.pc = 0x001A9BD0u; return; } if (c.pc != 0x001FC6A0u) [[unlikely]] return; }
L_001FC6A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 36u)));  goto L_001FC6CC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 88u), 0u);  goto L_001FC6C8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC6C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FC6C4u) [[unlikely]] return; }
L_001FC6C4:
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 1;
L_001FC6C8:
    set32(c.r[6], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 1;
L_001FC6CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_001FC6FC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC6ECu); set32(c.r[5], c.r[5].w[0] + 27197u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001FC6ECu) [[unlikely]] return; }
L_001FC6EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC6F4u); set32(c.r[4], ld32((c.r[29].w[0] + 32u)));  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x001FC6F4u) [[unlikely]] return; }
L_001FC6F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001FC740; } }
L_001FC6FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC704u); set32(c.r[5], ld32((c.r[29].w[0] + 32u)));  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001FC704u) [[unlikely]] return; }
L_001FC704:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC73Cu); set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x001FC73Cu) [[unlikely]] return; }
L_001FC73C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001FC740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_001FC750:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53530000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].d[0] = c.r[2].d[0] | 22085ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 22;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_001FC7B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FC9D8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_001FC7B4:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  if (t) { goto L_001FC7E8; } }
L_001FC7C4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], ld32((c.r[4].w[0] + 68u)));  if (t) { goto L_001FC7E4; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001FC7E8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC7E4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FC7E4u) [[unlikely]] return; }
L_001FC7E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001FC7E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC7C4u | kUnwind; return; } goto L_001FC7C4; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47480000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC804u); c.r[5].d[0] = c.r[2].d[0] | 21324ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x001FC804u) [[unlikely]] return; }
L_001FC804:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 136u);  goto L_001FC81C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FC9D8; } }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 1;
L_001FC81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC824u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x001FC824u) [[unlikely]] return; }
L_001FC824:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC830u); set32(c.r[4], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0022(c, 92u, depth + 1u); else { c.pc = 0x001A8E80u; return; } if (c.pc != 0x001FC830u) [[unlikely]] return; }
L_001FC830:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 136u);
    set32(c.r[6], c.r[6].w[0] + 27219u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC848u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001FC848u) [[unlikely]] return; }
L_001FC848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_001FC8F0; } }
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 1;
L_001FC854:
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC860u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001FC860u) [[unlikely]] return; }
L_001FC860:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC86Cu); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001FC86Cu) [[unlikely]] return; }
L_001FC86C:
    set32(c.r[16], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC87Cu); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001FC87Cu) [[unlikely]] return; }
L_001FC87C:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[5], c.r[29].w[0] + 120u);
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC898u); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001FC898u) [[unlikely]] return; }
L_001FC898:
    set32(c.r[6], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC8A8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 147u, depth + 1u); else { c.pc = 0x001F14C0u; return; } if (c.pc != 0x001FC8A8u) [[unlikely]] return; }
L_001FC8A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FC8C8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC8C0u); set32(c.r[5], c.r[5].w[0] + 27229u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001FC8C0u) [[unlikely]] return; }
L_001FC8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FC9D8; } }
L_001FC8C8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC8DCu); set32(c.r[6], c.r[6].w[0] + 27272u);  if (depth < kMaxDepth) unit_0022(c, 125u, depth + 1u); else { c.pc = 0x001A9410u; return; } if (c.pc != 0x001FC8DCu) [[unlikely]] return; }
L_001FC8DC:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 5;
L_001FC8F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC8F8u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x001FC8F8u) [[unlikely]] return; }
L_001FC8F8:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 120u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC854u | kUnwind; return; } goto L_001FC854; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 136u);
    set32(c.r[6], c.r[6].w[0] + 27272u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC91Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001FC91Cu) [[unlikely]] return; }
L_001FC91C:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (t) { goto L_001FC9C0; } }
L_001FC930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC938u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001FC938u) [[unlikely]] return; }
L_001FC938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FC94C; } }
    c.r[5].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC94Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 277u, depth + 1u); else { c.pc = 0x001FE2F0u; return; } if (c.pc != 0x001FC94Cu) [[unlikely]] return; }
L_001FC94C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  goto L_001FC96C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC960u); set32(c.r[4], c.r[4].w[0] + 27151u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FC960u) [[unlikely]] return; }
L_001FC960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FC99C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_001FC96C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 68u)));  goto L_001FC984; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_001FC99C; } }
L_001FC97C:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 2;
L_001FC984:
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC97Cu | kUnwind; return; } goto L_001FC97C; } }
    st32((c.r[4].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 1;
L_001FC99C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC9B0u); set32(c.r[6], c.r[6].w[0] + 27272u);  if (depth < kMaxDepth) unit_0022(c, 125u, depth + 1u); else { c.pc = 0x001A9410u; return; } if (c.pc != 0x001FC9B0u) [[unlikely]] return; }
L_001FC9B0:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 4;
L_001FC9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC9C8u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x001FC9C8u) [[unlikely]] return; }
L_001FC9C8:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC930u | kUnwind; return; } goto L_001FC930; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001FC9D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001FC9F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 48u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCA1Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001FCA1Cu) [[unlikely]] return; }
L_001FCA1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FCA38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCA2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 263u, depth + 1u); else { c.pc = 0x001AAAC0u; return; } if (c.pc != 0x001FCA2Cu) [[unlikely]] return; }
L_001FCA2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 10296u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001FCA38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 56u)));  if (t) { goto L_001FCA50; } }
L_001FCA40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCA4Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 317u, depth + 1u); else { c.pc = 0x001FE810u; return; } if (c.pc != 0x001FCA4Cu) [[unlikely]] return; }
L_001FCA4C:
    set32(c.r[16], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_001FCA50:
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FCA40u | kUnwind; return; } goto L_001FCA40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCA64u); set32(c.r[4], ld32((c.r[18].w[0] + 72u)));  if (depth < kMaxDepth) unit_0034(c, 142u, depth + 1u); else { c.pc = 0x001F1410u; return; } if (c.pc != 0x001FCA64u) [[unlikely]] return; }
L_001FCA64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FCB90; } }
L_001FCA6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCA74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001FCA74u) [[unlikely]] return; }
L_001FCA74:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FCAA8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FCAA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCAA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FCAA8u) [[unlikely]] return; }
L_001FCAA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 27219u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[21].w[0] + 8u), 0u);  goto L_001FCAF8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCAC4u); set32(c.r[4], c.r[4].w[0] + 27219u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001FCAC4u) [[unlikely]] return; }
L_001FCAC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 27219u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FCAF4; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[21].w[0] + 8u);  goto L_001FCAE8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FCAF4; } }
L_001FCAE8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCAF4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001FCAF4u) [[unlikely]] return; }
L_001FCAF4:
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001FCAF8:
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCB04u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 145u, depth + 1u); else { c.pc = 0x001F1470u; return; } if (c.pc != 0x001FCB04u) [[unlikely]] return; }
L_001FCB04:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCB10u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001FCB10u) [[unlikely]] return; }
L_001FCB10:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FCB40; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FCB40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCB40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FCB40u) [[unlikely]] return; }
L_001FCB40:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCB4Cu); st32((c.r[19].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001FCB4Cu) [[unlikely]] return; }
L_001FCB4C:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FCB7C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FCB7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCB7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FCB7Cu) [[unlikely]] return; }
L_001FCB7C:
    st32((c.r[19].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCB8Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 143u, depth + 1u); else { c.pc = 0x001F1430u; return; } if (c.pc != 0x001FCB8Cu) [[unlikely]] return; }
L_001FCB8C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FCB90:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FCA6Cu | kUnwind; return; } goto L_001FCA6C; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001FCBC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_001FCC08; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001FCC34; } }
L_001FCC08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCC10u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001FCC10u) [[unlikely]] return; }
L_001FCC10:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 9;
L_001FCC34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FCC50:
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53460000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[5].d[0] = c.r[2].d[0] | 19527ull;  [[clang::musttail]] return unit_0038(c, 285u, depth); }
L_001FCC70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[8], c.r[31].w[0] - 8u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].d[0] = c.r[3].d[0] | 16706ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 16240u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[16], c.r[20].w[0] + 32u);
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] - 2048u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 29856u);
    set32(c.r[7], 0u + 20u);
    set32(c.r[8], 0u + 64u);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCCF4u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0008(c, 147u, depth + 1u); else { c.pc = 0x00141CB0u; return; } if (c.pc != 0x001FCCF4u) [[unlikely]] return; }
L_001FCCF4:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], c.r[20].w[0] + 1576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD04u); st32((c.r[20].w[0] + 1316u), 0u);  if (depth < kMaxDepth) unit_0037(c, 411u, depth + 1u); else { c.pc = 0x001FF440u; return; } if (c.pc != 0x001FCD04u) [[unlikely]] return; }
L_001FCD04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD0Cu); set32(c.r[4], c.r[20].w[0] + 1584u);  if (depth < kMaxDepth) unit_0037(c, 416u, depth + 1u); else { c.pc = 0x001FF500u; return; } if (c.pc != 0x001FCD0Cu) [[unlikely]] return; }
L_001FCD0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD14u); set32(c.r[4], c.r[20].w[0] + 1592u);  if (depth < kMaxDepth) unit_0037(c, 420u, depth + 1u); else { c.pc = 0x001FF5A0u; return; } if (c.pc != 0x001FCD14u) [[unlikely]] return; }
L_001FCD14:
    st32((c.r[20].w[0] + 1600u), 0u);
    st32((c.r[20].w[0] + 1596u), 0u);
    st32((c.r[20].w[0] + 1612u), 0u);
    st32((c.r[20].w[0] + 1616u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 20u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 1620u), 0u);
    st32((c.r[20].w[0] + 28u), 0u);
    st32((c.r[20].w[0] + 32u), 0u);
    st32((c.r[20].w[0] + 1316u), 0u);
    st32((c.r[20].w[0] + 1596u), 0u);
    st32((c.r[20].w[0] + 1612u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 1600u)));
    c.budget -= 14;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 1600u), 0u);  goto L_001FCD68; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FCD64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FCD64u) [[unlikely]] return; }
L_001FCD64:
    st32((c.r[20].w[0] + 1600u), 0u);
    c.budget -= 1;
L_001FCD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD70u); st32((c.r[20].w[0] + 1632u), 0u);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x001FCD70u) [[unlikely]] return; }
L_001FCD70:
    set32(c.r[16], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD88u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001FCD88u) [[unlikely]] return; }
L_001FCD88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 2048u);
    set32(c.r[6], c.r[6].w[0] + 29856u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCDA8u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0008(c, 152u, depth + 1u); else { c.pc = 0x00141DA0u; return; } if (c.pc != 0x001FCDA8u) [[unlikely]] return; }
L_001FCDA8:
    st32((c.r[20].w[0] + 1624u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[20].w[0] + 1700u), 0u);  if (t) { goto L_001FCDD8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCDC0u); set32(c.r[4], c.r[4].w[0] + 27283u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FCDC0u) [[unlikely]] return; }
L_001FCDC0:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001FCEC4; } }
L_001FCDD8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001FCE04; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCDECu); set32(c.r[4], c.r[4].w[0] + 27106u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FCDECu) [[unlikely]] return; }
L_001FCDEC:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001FCEC4; } }
L_001FCE04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE0Cu);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001FCE0Cu) [[unlikely]] return; }
L_001FCE0C:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE18u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 131u, depth + 1u); else { c.pc = 0x001F1290u; return; } if (c.pc != 0x001FCE18u) [[unlikely]] return; }
L_001FCE18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FCE5C; } }
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4D530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 17234ull;
    set32(c.r[5], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[4], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 65280ull;
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[7].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001FCE6C; } }
L_001FCE5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE68u); set32(c.r[4], c.r[4].w[0] + 27177u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FCE68u) [[unlikely]] return; }
L_001FCE68:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FCE6C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FCE7C; }
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_001FCE7C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_001FCEA8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE90u); set32(c.r[4], c.r[4].w[0] + 27302u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FCE90u) [[unlikely]] return; }
L_001FCE90:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001FCEC4; } }
L_001FCEA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCEB0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 179u, depth + 1u); else { c.pc = 0x001FD590u; return; } if (c.pc != 0x001FCEB0u) [[unlikely]] return; }
L_001FCEB0:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_001FCEC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001FCEF0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 72u), c.r[5].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[8], c.r[31].w[0] - 8u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].d[0] = c.r[3].d[0] | 16706ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 16240u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[17], c.r[18].w[0] + 32u);
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] - 2048u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 29856u);
    set32(c.r[7], 0u + 20u);
    set32(c.r[8], 0u + 64u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCF68u); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0008(c, 147u, depth + 1u); else { c.pc = 0x00141CB0u; return; } if (c.pc != 0x001FCF68u) [[unlikely]] return; }
L_001FCF68:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[4], c.r[18].w[0] + 1576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCF78u); st32((c.r[18].w[0] + 1316u), 0u);  if (depth < kMaxDepth) unit_0037(c, 411u, depth + 1u); else { c.pc = 0x001FF440u; return; } if (c.pc != 0x001FCF78u) [[unlikely]] return; }
L_001FCF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCF80u); set32(c.r[4], c.r[18].w[0] + 1584u);  if (depth < kMaxDepth) unit_0037(c, 416u, depth + 1u); else { c.pc = 0x001FF500u; return; } if (c.pc != 0x001FCF80u) [[unlikely]] return; }
L_001FCF80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCF88u); set32(c.r[4], c.r[18].w[0] + 1592u);  if (depth < kMaxDepth) unit_0037(c, 420u, depth + 1u); else { c.pc = 0x001FF5A0u; return; } if (c.pc != 0x001FCF88u) [[unlikely]] return; }
L_001FCF88:
    st32((c.r[18].w[0] + 1600u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[18].w[0] + 1596u), 0u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    st32((c.r[18].w[0] + 1612u), 0u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    set32(c.r[6], c.r[6].w[0] + 27326u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCFACu); st32((c.r[18].w[0] + 1616u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001FCFACu) [[unlikely]] return; }
L_001FCFAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 200u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    set32(c.r[6], c.r[6].w[0] + 27335u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCFC8u); st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001FCFC8u) [[unlikely]] return; }
L_001FCFC8:
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    set32(c.r[6], c.r[6].w[0] + 27344u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCFE4u); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001FCFE4u) [[unlikely]] return; }
L_001FCFE4:
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    st32((c.r[18].w[0] + 1632u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCFF8u); set32(c.r[4], c.r[18].w[0] + 1592u);  if (depth < kMaxDepth) unit_0037(c, 421u, depth + 1u); else { c.pc = 0x001FF5B0u; return; } if (c.pc != 0x001FCFF8u) [[unlikely]] return; }
L_001FCFF8:
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[4], c.r[18].w[0] + 1576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD008u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 412u, depth + 1u); else { c.pc = 0x001FF450u; return; } if (c.pc != 0x001FD008u) [[unlikely]] return; }
L_001FD008:
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[4], c.r[18].w[0] + 1584u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD018u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 417u, depth + 1u); else { c.pc = 0x001FF520u; return; } if (c.pc != 0x001FD018u) [[unlikely]] return; }
L_001FD018:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 184u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD02Cu); set32(c.r[6], c.r[6].w[0] + 27351u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001FD02Cu) [[unlikely]] return; }
L_001FD02C:
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 264u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    set32(c.r[6], c.r[6].w[0] + 27358u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 1576u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 1620u), 0u);
    st32((c.r[18].w[0] + 28u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD058u); st32((c.r[18].w[0] + 1700u), 0u);  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001FD058u) [[unlikely]] return; }
L_001FD058:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 264u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD064u); set32(c.r[4], c.r[18].w[0] + 1596u);  if (depth < kMaxDepth) unit_0035(c, 69u, depth + 1u); else { c.pc = 0x001F4A30u; return; } if (c.pc != 0x001FD064u) [[unlikely]] return; }
L_001FD064:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[18].w[0] + 32u), 0u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    set32(c.r[6], c.r[6].w[0] + 27365u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD084u); st32((c.r[18].w[0] + 1316u), 0u);  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001FD084u) [[unlikely]] return; }
L_001FD084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD08Cu); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x001FD08Cu) [[unlikely]] return; }
L_001FD08C:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001FD160; } }
    set32(c.r[4], c.r[29].w[0] + 248u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD0A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001FD0A8u) [[unlikely]] return; }
L_001FD0A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 248u);  if (t) { goto L_001FD14C; } }
L_001FD0B0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD0C4u); st32((c.r[29].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_0035(c, 69u, depth + 1u); else { c.pc = 0x001F4A30u; return; } if (c.pc != 0x001FD0C4u) [[unlikely]] return; }
L_001FD0C4:
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD0ECu); set32(c.r[4], c.r[2].w[0] + 36u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001FD0ECu) [[unlikely]] return; }
L_001FD0EC:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_001FD110; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD108u); set32(c.r[4], c.r[4].w[0] + 27008u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FD108u) [[unlikely]] return; }
L_001FD108:
    st32((c.r[18].w[0] + 32u), 0u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 2;
L_001FD110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD118u); set32(c.r[5], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001FD118u) [[unlikely]] return; }
L_001FD118:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    st32((c.r[29].w[0] + 248u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_001FD148; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FD148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD148u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FD148u) [[unlikely]] return; }
L_001FD148:
    set32(c.r[4], c.r[29].w[0] + 248u);
    c.budget -= 1;
L_001FD14C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD154u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x001FD154u) [[unlikely]] return; }
L_001FD154:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[5].d[0] = ld64((c.r[29].w[0] + 248u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FD0B0u | kUnwind; return; } goto L_001FD0B0; }
L_001FD160:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    set32(c.r[6], c.r[6].w[0] + 27374u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD178u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001FD178u) [[unlikely]] return; }
L_001FD178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD180u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x001FD180u) [[unlikely]] return; }
L_001FD180:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001FD21C; } }
    set32(c.r[4], c.r[29].w[0] + 232u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD19Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001FD19Cu) [[unlikely]] return; }
L_001FD19C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 232u);  if (t) { goto L_001FD208; } }
L_001FD1A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD1ACu); set32(c.r[5], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001FD1ACu) [[unlikely]] return; }
L_001FD1AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 1316u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    st32((c.r[18].w[0] + 1316u), c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 1320u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 1316u)));
    c.r[2].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_001FD1EC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD1E4u); set32(c.r[4], c.r[4].w[0] + 26416u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FD1E4u) [[unlikely]] return; }
L_001FD1E4:
    st32((c.r[18].w[0] + 1316u), 0u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 2;
L_001FD1EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD1F4u); set32(c.r[5], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001FD1F4u) [[unlikely]] return; }
L_001FD1F4:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    st32((c.r[29].w[0] + 232u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.budget -= 5;
L_001FD208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD210u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x001FD210u) [[unlikely]] return; }
L_001FD210:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 168u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FD1A4u | kUnwind; return; } goto L_001FD1A4; }
L_001FD21C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    set32(c.r[6], c.r[6].w[0] + 27384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD234u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001FD234u) [[unlikely]] return; }
L_001FD234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD23Cu); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x001FD23Cu) [[unlikely]] return; }
L_001FD23C:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001FD264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD250u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001FD250u) [[unlikely]] return; }
L_001FD250:
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.r[5].d[0] = ld64((c.r[29].w[0] + 224u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD260u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 276u, depth + 1u); else { c.pc = 0x001F6CF0u; return; } if (c.pc != 0x001FD260u) [[unlikely]] return; }
L_001FD260:
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 1;
L_001FD264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD26Cu);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x001FD26Cu) [[unlikely]] return; }
L_001FD26C:
    set32(c.r[16], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD284u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001FD284u) [[unlikely]] return; }
L_001FD284:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 2048u);
    set32(c.r[6], c.r[6].w[0] + 29856u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD2A4u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0008(c, 152u, depth + 1u); else { c.pc = 0x00141DA0u; return; } if (c.pc != 0x001FD2A4u) [[unlikely]] return; }
L_001FD2A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD2ACu); st32((c.r[18].w[0] + 1624u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x001FD2ACu) [[unlikely]] return; }
L_001FD2AC:
    set32(c.r[16], ld32((c.r[2].w[0] + 96u)));
    c.f[1] = ld32((c.r[28].w[0] - 31808u));
    c.f[0] = ld32((c.r[28].w[0] - 31804u));
    set32(c.r[5], c.r[29].w[0] + 216u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 216u), c.f[1]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 220u), c.f[0]);
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 220u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 116u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD2E8u); st32((c.r[29].w[0] + 124u), 0u);  if (depth < kMaxDepth) unit_0038(c, 331u, depth + 1u); else { c.pc = 0x002034E0u; return; } if (c.pc != 0x001FD2E8u) [[unlikely]] return; }
L_001FD2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD2F0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0035(c, 113u, depth + 1u); else { c.pc = 0x001F5130u; return; } if (c.pc != 0x001FD2F0u) [[unlikely]] return; }
L_001FD2F0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD304u); set32(c.r[6], c.r[6].w[0] + 27392u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001FD304u) [[unlikely]] return; }
L_001FD304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD30Cu); set32(c.r[17], ld32((c.r[29].w[0] + 156u)));  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001FD30Cu) [[unlikely]] return; }
L_001FD30C:
    set32(c.r[4], ld32((c.r[2].w[0] + 76u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53460000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD324u); c.r[5].d[0] = c.r[2].d[0] | 19527ull;  if (depth < kMaxDepth) unit_0038(c, 285u, depth + 1u); else { c.pc = 0x00202DF0u; return; } if (c.pc != 0x001FD324u) [[unlikely]] return; }
L_001FD324:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD330u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0035(c, 138u, depth + 1u); else { c.pc = 0x001F5620u; return; } if (c.pc != 0x001FD330u) [[unlikely]] return; }
L_001FD330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001FD38C; } }
L_001FD338:
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD348u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 82u, depth + 1u); else { c.pc = 0x001F4C50u; return; } if (c.pc != 0x001FD348u) [[unlikely]] return; }
L_001FD348:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 1624u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD364u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001FD364u) [[unlikely]] return; }
L_001FD364:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001FD38C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FD388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD388u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FD388u) [[unlikely]] return; }
L_001FD388:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001FD38C:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FD338u | kUnwind; return; } goto L_001FD338; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD3A0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0038(c, 345u, depth + 1u); else { c.pc = 0x002036C0u; return; } if (c.pc != 0x001FD3A0u) [[unlikely]] return; }
L_001FD3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD3A8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0035(c, 113u, depth + 1u); else { c.pc = 0x001F5130u; return; } if (c.pc != 0x001FD3A8u) [[unlikely]] return; }
L_001FD3A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD3B0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0038(c, 345u, depth + 1u); else { c.pc = 0x002036C0u; return; } if (c.pc != 0x001FD3B0u) [[unlikely]] return; }
L_001FD3B0:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_001FD3E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FD56C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 16240u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 1620u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 28u)));  goto L_001FD43C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 1620u), 0u);  goto L_001FD438; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD434u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FD434u) [[unlikely]] return; }
L_001FD434:
    st32((c.r[18].w[0] + 1620u), 0u);
    c.budget -= 1;
L_001FD438:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_001FD43C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_001FD4A8; }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FD46C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FD46C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD46Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FD46Cu) [[unlikely]] return; }
L_001FD46C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FD4A8; } }
L_001FD478:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1640u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 1640u);  if (t) { goto L_001FD4A4; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_001FD4A4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD4A0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FD4A0u) [[unlikely]] return; }
L_001FD4A0:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_001FD4A4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001FD4A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 1700u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FD478u | kUnwind; return; } goto L_001FD478; }
    set32(c.r[4], ld32((c.r[18].w[0] + 1624u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 1596u);  goto L_001FD4D8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD4D0u); set32(c.r[5], c.r[5].w[0] + 29856u);  if (depth < kMaxDepth) unit_0008(c, 138u, depth + 1u); else { c.pc = 0x00141BA0u; return; } if (c.pc != 0x001FD4D0u) [[unlikely]] return; }
L_001FD4D0:
    st32((c.r[18].w[0] + 1624u), 0u);
    set32(c.r[2], c.r[18].w[0] + 1596u);
    c.budget -= 2;
L_001FD4D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 32u);  goto L_001FD514; }
    set32(c.r[2], c.r[18].w[0] + 1600u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FD510; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 1600u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FD510; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FD510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD510u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FD510u) [[unlikely]] return; }
L_001FD510:
    set32(c.r[2], c.r[18].w[0] + 32u);
    c.budget -= 1;
L_001FD514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FD534; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[18].w[0] + 36u);
    set32(c.r[5], c.r[5].w[0] + 29856u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD534u); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0008(c, 144u, depth + 1u); else { c.pc = 0x00141C40u; return; } if (c.pc != 0x001FD534u) [[unlikely]] return; }
L_001FD534:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_001FD558; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_001FD558:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_001FD570; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD56Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001FD56Cu) [[unlikely]] return; }
L_001FD56C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001FD570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FD590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD5B4u); set32(c.r[4], c.r[17].w[0] + 1592u);  if (depth < kMaxDepth) unit_0037(c, 421u, depth + 1u); else { c.pc = 0x001FF5B0u; return; } if (c.pc != 0x001FD5B4u) [[unlikely]] return; }
L_001FD5B4:
    set32(c.r[4], c.r[17].w[0] + 1592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD5C0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 425u, depth + 1u); else { c.pc = 0x001FF640u; return; } if (c.pc != 0x001FD5C0u) [[unlikely]] return; }
L_001FD5C0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001FD5F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD5D8u); set32(c.r[4], c.r[4].w[0] + 27399u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FD5D8u) [[unlikely]] return; }
L_001FD5D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001FD614; } }
L_001FD5F0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 1576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD600u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 412u, depth + 1u); else { c.pc = 0x001FF450u; return; } if (c.pc != 0x001FD600u) [[unlikely]] return; }
L_001FD600:
    set32(c.r[6], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], c.r[17].w[0] + 1584u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD610u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 417u, depth + 1u); else { c.pc = 0x001FF520u; return; } if (c.pc != 0x001FD610u) [[unlikely]] return; }
L_001FD610:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001FD614:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FD630:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 1620u)));
    c.budget -= 8;
L_001FD650:
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 1620u)));  goto L_001FD7CC; }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 1620u)));  goto L_001FD680; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD67Cu); set32(c.r[5], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0037(c, 185u, depth + 1u); else { c.pc = 0x001FD630u; return; } if (c.pc != 0x001FD67Cu) [[unlikely]] return; }
L_001FD67C:
    set32(c.r[5], ld32((c.r[17].w[0] + 1620u)));
    c.budget -= 1;
L_001FD680:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FD7C8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[5], c.r[5].w[0] + 1596u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD6BCu); set32(c.r[4], c.r[2].w[0] + 36u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001FD6BCu) [[unlikely]] return; }
L_001FD6BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 76u), 0u);  goto L_001FD6E0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD6D8u); set32(c.r[4], c.r[4].w[0] + 27008u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FD6D8u) [[unlikely]] return; }
L_001FD6D8:
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    c.budget -= 2;
L_001FD6E0:
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[2], ld32((c.r[17].w[0] + 1620u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD6F0u); set32(c.r[5], c.r[2].w[0] + 1596u);  if (depth < kMaxDepth) unit_0035(c, 43u, depth + 1u); else { c.pc = 0x001F4560u; return; } if (c.pc != 0x001FD6F0u) [[unlikely]] return; }
L_001FD6F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));  goto L_001FD700; }
    set32(c.r[6], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001FD700:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD710u); set32(c.r[5], c.r[5].w[0] + 27428u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x001FD710u) [[unlikely]] return; }
L_001FD710:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 76u)));  goto L_001FD73C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FD738; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD738u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FD738u) [[unlikely]] return; }
L_001FD738:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_001FD73C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[28].w[0] - 31912u)));  goto L_001FD748; }
    set32(c.r[18], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001FD748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD750u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001FD750u) [[unlikely]] return; }
L_001FD750:
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001FD774; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD76Cu); set32(c.r[4], c.r[4].w[0] + 27174u);  if (depth < kMaxDepth) unit_0001(c, 457u, depth + 1u); else { c.pc = 0x00127C48u; return; } if (c.pc != 0x001FD76Cu) [[unlikely]] return; }
L_001FD76C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 1620u)));  if (t) { goto L_001FD780; } }
L_001FD774:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD77Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FD77Cu) [[unlikely]] return; }
L_001FD77C:
    set32(c.r[4], ld32((c.r[17].w[0] + 1620u)));
    c.budget -= 1;
L_001FD780:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  goto L_001FD7A8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 1620u), 0u);  goto L_001FD7A4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD7A0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FD7A0u) [[unlikely]] return; }
L_001FD7A0:
    st32((c.r[17].w[0] + 1620u), 0u);
    c.budget -= 1;
L_001FD7A4:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_001FD7A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FD7C8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001FD7C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD7C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FD7C8u) [[unlikely]] return; }
L_001FD7C8:
    set32(c.r[3], ld32((c.r[17].w[0] + 1620u)));
    c.budget -= 1;
L_001FD7CC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_001FD7F0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD7E0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 235u, depth + 1u); else { c.pc = 0x001FDC20u; return; } if (c.pc != 0x001FD7E0u) [[unlikely]] return; }
L_001FD7E0:
    set32(c.r[3], ld32((c.r[17].w[0] + 1620u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1620u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FD650u | kUnwind; return; } goto L_001FD650; }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_001FD7F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001FD84C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_001FD824; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD818u); set32(c.r[4], c.r[4].w[0] + 26288u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FD818u) [[unlikely]] return; }
L_001FD818:
    set32(c.r[2], 0u + 63u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_001FD828; } }
L_001FD824:
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 1;
L_001FD828:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], c.r[17].w[0] + 1596u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD848u); set32(c.r[5], c.r[2].w[0] + 36u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001FD848u) [[unlikely]] return; }
L_001FD848:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001FD84C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FD860:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001FD988; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 26928u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001FC000u < 16384u) { entry = entries_0037[(t - 0x001FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001FD8AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD8B4u);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x001FD8B4u) [[unlikely]] return; }
L_001FD8B4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD8C8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 255u, depth + 1u); else { c.pc = 0x001FB4C0u; return; } if (c.pc != 0x001FD8C8u) [[unlikely]] return; }
L_001FD8C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001FD9A4; } }
L_001FD8D0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_001FD8F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD8E0u);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x001FD8E0u) [[unlikely]] return; }
L_001FD8E0:
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 1624u)));  goto L_001FD910; }
L_001FD8F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD900u); set32(c.r[4], c.r[4].w[0] + 27435u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FD900u) [[unlikely]] return; }
L_001FD900:
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0]), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 16u), 0u);  if (t) { goto L_001FD9A0; } }
L_001FD910:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD92Cu); st32((c.r[19].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001FD92Cu) [[unlikely]] return; }
L_001FD92C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FD9A0; } }
L_001FD934:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_001FD954; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD944u);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x001FD944u) [[unlikely]] return; }
L_001FD944:
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 1616u)));  goto L_001FD974; }
L_001FD954:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD964u); set32(c.r[4], c.r[4].w[0] + 27456u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FD964u) [[unlikely]] return; }
L_001FD964:
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0]), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 16u), 0u);  if (t) { goto L_001FD9A0; } }
L_001FD974:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD980u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 214u, depth + 1u); else { c.pc = 0x001FD9C0u; return; } if (c.pc != 0x001FD980u) [[unlikely]] return; }
L_001FD980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FD9A0; } }
L_001FD988:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD994u); set32(c.r[4], c.r[4].w[0] + 27065u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FD994u) [[unlikely]] return; }
L_001FD994:
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0]), 0u);
    st32((c.r[19].w[0] + 16u), 0u);
    c.budget -= 3;
L_001FD9A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001FD9A4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FD9C0:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { st32((c.r[4].w[0] + 4u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F43D0u | kUnwind; return; } [[clang::musttail]] return unit_0035(c, 34u, depth); }
L_001FD9E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001FDBEC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 26960u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001FC000u < 16384u) { entry = entries_0037[(t - 0x001FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001FDA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDA38u);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x001FDA38u) [[unlikely]] return; }
L_001FDA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDA40u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001FDA40u) [[unlikely]] return; }
L_001FDA40:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_001FDAA8; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDA60u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 82u, depth + 1u); else { c.pc = 0x001F4C50u; return; } if (c.pc != 0x001FDA60u) [[unlikely]] return; }
L_001FDA60:
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 100u)));  goto L_001FDA84; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDA80u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDA80u) [[unlikely]] return; }
L_001FDA80:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_001FDA84:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FDAA4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FDAA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDAA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FDAA4u) [[unlikely]] return; }
L_001FDAA4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001FDAA8:
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 76u);  goto L_001FDB00; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 52u);  goto L_001FDAE8; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001FDAE4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001FDAE4; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001FDAE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_001FDB28; } }
L_001FDAE4:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_001FDAE8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDAF8u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 92u, depth + 1u); else { c.pc = 0x001F4E30u; return; } if (c.pc != 0x001FDAF8u) [[unlikely]] return; }
L_001FDAF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001FDBFC; } }
L_001FDB00:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB0Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 57u, depth + 1u); else { c.pc = 0x00200490u; return; } if (c.pc != 0x001FDB0Cu) [[unlikely]] return; }
L_001FDB0C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB20u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 92u, depth + 1u); else { c.pc = 0x001F4E30u; return; } if (c.pc != 0x001FDB20u) [[unlikely]] return; }
L_001FDB20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FDBF8; } }
L_001FDB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB30u); set32(c.r[4], c.r[4].w[0] + 27065u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FDB30u) [[unlikely]] return; }
L_001FDB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FDBF8; } }
L_001FDB38:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_001FDB58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB48u);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x001FDB48u) [[unlikely]] return; }
L_001FDB48:
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  goto L_001FDB70; }
L_001FDB58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB68u); set32(c.r[4], c.r[4].w[0] + 27435u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FDB68u) [[unlikely]] return; }
L_001FDB68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FDBF8; } }
L_001FDB70:
    set32(c.r[2], ld32((c.r[16].w[0] + 1624u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB88u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001FDB88u) [[unlikely]] return; }
L_001FDB88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FDBF8; } }
L_001FDB90:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_001FDBB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDBA0u);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x001FDBA0u) [[unlikely]] return; }
L_001FDBA0:
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  goto L_001FDBC8; }
L_001FDBB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDBC0u); set32(c.r[4], c.r[4].w[0] + 27456u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FDBC0u) [[unlikely]] return; }
L_001FDBC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FDBF8; } }
L_001FDBC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 1616u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDBE4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001FDBE4u) [[unlikely]] return; }
L_001FDBE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FDBF8; } }
L_001FDBEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDBF8u); set32(c.r[4], c.r[4].w[0] + 27065u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FDBF8u) [[unlikely]] return; }
L_001FDBF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001FDBFC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001FDC20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FDE80; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[18].w[0] + 1628u), c.r[17].w[0]);  goto L_001FDC6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001FDE84; } }
    st32((c.r[18].w[0] + 1628u), c.r[17].w[0]);
    c.budget -= 1;
L_001FDC6C:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_001FDC70:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 28u)));  goto L_001FDD10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDC80u); set32(c.r[4], c.r[18].w[0] + 1576u);  if (depth < kMaxDepth) unit_0037(c, 415u, depth + 1u); else { c.pc = 0x001FF4E0u; return; } if (c.pc != 0x001FDC80u) [[unlikely]] return; }
L_001FDC80:
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[19].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001FDC9C; } }
    c.r[16].d[0] = c.r[19].d[0] & 4095ull;
    c.r[2].d[0] = c.r[19].d[0] & 61440ull;
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_001FDC9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDCA4u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001FDCA4u) [[unlikely]] return; }
L_001FDCA4:
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDCB8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0035(c, 267u, depth + 1u); else { c.pc = 0x001F6AF0u; return; } if (c.pc != 0x001FDCB8u) [[unlikely]] return; }
L_001FDCB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_001FDCD8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[19].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDCD0u); set32(c.r[4], c.r[4].w[0] + 27479u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FDCD0u) [[unlikely]] return; }
L_001FDCD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 28u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FDC70u | kUnwind; return; } goto L_001FDC70; } }
L_001FDCD8:
    st32((c.r[2].w[0] + 664u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 1616u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 56u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FDD0C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDD0Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDD0Cu) [[unlikely]] return; }
L_001FDD0C:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_001FDD10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FDE80; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1616u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[25], c.r[4].w[0] + 4u);  goto L_001FDD40; }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 700u));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 28u)));  goto L_001FDD4C; }
    set32(c.r[25], c.r[4].w[0] + 4u);
    c.budget -= 1;
L_001FDD40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDD48u);  if (depth < kMaxDepth) unit_0008(c, 165u, depth + 1u); else { c.pc = 0x00141FC0u; return; } if (c.pc != 0x001FDD48u) [[unlikely]] return; }
L_001FDD48:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_001FDD4C:
    c.r[3].d[0] = ld16((c.r[3].w[0] + 700u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 28u)));  goto L_001FDD70; }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 5;
L_001FDD70:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 700u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FDE80; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1620u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 28u)));  goto L_001FDE14; }
    set32(c.r[2], ld32((c.r[18].w[0] + 1616u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 28u)));  goto L_001FDDB8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDDB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDDB4u) [[unlikely]] return; }
L_001FDDB4:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_001FDDB8:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 700u));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FDE10; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], c.r[3].w[0] + 668u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDDF0u); set32(c.r[4], c.r[2].w[0] + 36u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001FDDF0u) [[unlikely]] return; }
L_001FDDF0:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FDE10; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDE0Cu); set32(c.r[4], c.r[4].w[0] + 27008u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FDE0Cu) [[unlikely]] return; }
L_001FDE0C:
    st32((c.r[18].w[0] + 32u), 0u);
    c.budget -= 1;
L_001FDE10:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_001FDE14:
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 700u));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDE28u); c.r[16].d[0] = c.r[2].d[0] & 32ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDE28u) [[unlikely]] return; }
L_001FDE28:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 700u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { st32((c.r[18].w[0] + 28u), 0u);  goto L_001FDE58; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FDE54; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDE54u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDE54u) [[unlikely]] return; }
L_001FDE54:
    st32((c.r[18].w[0] + 28u), 0u);
    c.budget -= 1;
L_001FDE58:
    set32(c.r[3], ld32((c.r[18].w[0] + 1620u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FDE80; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FDE80; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FDC6Cu | kUnwind; return; } goto L_001FDC6C; } }
L_001FDE80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001FDE84:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FDEA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 1704u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDEC8u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001FDEC8u) [[unlikely]] return; }
L_001FDEC8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001FDEEC; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[19].w[0] + 1616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDEE8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 101u, depth + 1u); else { c.pc = 0x001FCC70u; return; } if (c.pc != 0x001FDEE8u) [[unlikely]] return; }
L_001FDEE8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FDEEC:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_001FDF18; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDF00u); set32(c.r[4], c.r[4].w[0] + 27133u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FDF00u) [[unlikely]] return; }
L_001FDF00:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001FDFC4; } }
L_001FDF18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FDF58; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FDFC4; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001FDF4C; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDF4Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDF4Cu) [[unlikely]] return; }
L_001FDF4C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FDFC4; } }
L_001FDF58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDF60u);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x001FDF60u) [[unlikely]] return; }
L_001FDF60:
    set32(c.r[16], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001FDFB0; } }
L_001FDF6C:
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDF88u); st32((c.r[29].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_0037(c, 215u, depth + 1u); else { c.pc = 0x001FD9E0u; return; } if (c.pc != 0x001FDF88u) [[unlikely]] return; }
L_001FDF88:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001FDFB0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FDFAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDFACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FDFACu) [[unlikely]] return; }
L_001FDFAC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001FDFB0:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FDF6Cu | kUnwind; return; } goto L_001FDF6C; }
    st32((c.r[19].w[0] + 1620u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001FDFC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001FDFE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDFFCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001FDFFCu) [[unlikely]] return; }
L_001FDFFC:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 1;
L_001FE000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE008u); set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0034(c, 131u, depth + 1u); else { c.pc = 0x001F1290u; return; } if (c.pc != 0x001FE008u) [[unlikely]] return; }
L_001FE008:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FE04C; } }
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4D530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 17234ull;
    set32(c.r[5], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[4], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 65280ull;
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[7].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001FE05C; } }
L_001FE04C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE058u); set32(c.r[4], c.r[4].w[0] + 27177u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FE058u) [[unlikely]] return; }
L_001FE058:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FE05C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_001FE06C; }
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_001FE06C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001FE07C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FE0AC; } }
L_001FE07C:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FE0AC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 16u)));  goto L_001FE0A0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FE0AC; } }
L_001FE0A0:
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_001FE0AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FE0C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE0D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001FE0D4u) [[unlikely]] return; }
L_001FE0D4:
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE0E0u); set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0034(c, 131u, depth + 1u); else { c.pc = 0x001F1290u; return; } if (c.pc != 0x001FE0E0u) [[unlikely]] return; }
L_001FE0E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FE124; } }
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4D530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 17234ull;
    set32(c.r[5], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[4], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 65280ull;
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[7].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001FE134; } }
L_001FE124:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE130u); set32(c.r[4], c.r[4].w[0] + 27177u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FE130u) [[unlikely]] return; }
L_001FE130:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FE134:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FE144; }
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_001FE144:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FE160:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], c.r[31].w[0] - 8u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].d[0] = c.r[3].d[0] | 16706ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16224u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE1CCu); st32((c.r[4].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001FE1CCu) [[unlikely]] return; }
L_001FE1CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE1D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 36u, depth + 1u); else { c.pc = 0x001FC480u; return; } if (c.pc != 0x001FE1D4u) [[unlikely]] return; }
L_001FE1D4:
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 24u), 0u);
    st32((c.r[19].w[0] + 68u), 0u);
    st32((c.r[19].w[0] + 28u), 0u);
    st32((c.r[19].w[0] + 52u), 0u);
    st32((c.r[19].w[0] + 56u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE1F4u); st32((c.r[19].w[0] + 64u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x001FE1F4u) [[unlikely]] return; }
L_001FE1F4:
    set32(c.r[16], ld32((c.r[2].w[0] + 100u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE20Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001FE20Cu) [[unlikely]] return; }
L_001FE20C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 2048u);
    set32(c.r[6], c.r[6].w[0] + 29856u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE22Cu); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0008(c, 152u, depth + 1u); else { c.pc = 0x00141DA0u; return; } if (c.pc != 0x001FE22Cu) [[unlikely]] return; }
L_001FE22C:
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE238u); set32(c.r[4], 0u + 1704u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001FE238u) [[unlikely]] return; }
L_001FE238:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  goto L_001FE258; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE254u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 101u, depth + 1u); else { c.pc = 0x001FCC70u; return; } if (c.pc != 0x001FE254u) [[unlikely]] return; }
L_001FE254:
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_001FE258:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  goto L_001FE2B8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE278u); set32(c.r[4], c.r[4].w[0] + 27510u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FE278u) [[unlikely]] return; }
L_001FE278:
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  goto L_001FE2A4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 24u), 0u);  goto L_001FE2A0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE29Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE29Cu) [[unlikely]] return; }
L_001FE29C:
    st32((c.r[19].w[0] + 24u), 0u);
    c.budget -= 1;
L_001FE2A0:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_001FE2A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001FE2C8; } }
L_001FE2B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_001FE2C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FE2F0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 72u), c.r[5].d[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[7], c.r[31].w[0] - 8u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].d[0] = c.r[3].d[0] | 16706ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16224u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[6], c.r[6].w[0] + 27536u);
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE360u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001FE360u) [[unlikely]] return; }
L_001FE360:
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    set32(c.r[6], c.r[6].w[0] + 27546u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE37Cu); st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001FE37Cu) [[unlikely]] return; }
L_001FE37C:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    set32(c.r[6], c.r[6].w[0] + 27557u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE398u); st32((c.r[18].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001FE398u) [[unlikely]] return; }
L_001FE398:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    set32(c.r[6], c.r[6].w[0] + 27564u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE3B4u); st32((c.r[18].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001FE3B4u) [[unlikely]] return; }
L_001FE3B4:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 156u));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE3C8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x001FE3C8u) [[unlikely]] return; }
L_001FE3C8:
    set32(c.r[16], ld32((c.r[2].w[0] + 100u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE3E0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001FE3E0u) [[unlikely]] return; }
L_001FE3E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 2048u);
    set32(c.r[6], c.r[6].w[0] + 29856u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE400u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0008(c, 152u, depth + 1u); else { c.pc = 0x00141DA0u; return; } if (c.pc != 0x001FE400u) [[unlikely]] return; }
L_001FE400:
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[18].w[0] + 24u), 0u);
    set32(c.r[4], c.r[29].w[0] + 200u);
    st32((c.r[18].w[0] + 68u), 0u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    st32((c.r[18].w[0] + 52u), 0u);
    set32(c.r[6], c.r[6].w[0] + 27358u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE42Cu); st32((c.r[18].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001FE42Cu) [[unlikely]] return; }
L_001FE42C:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 200u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE438u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0035(c, 69u, depth + 1u); else { c.pc = 0x001F4A30u; return; } if (c.pc != 0x001FE438u) [[unlikely]] return; }
L_001FE438:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    set32(c.r[6], c.r[6].w[0] + 27571u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE450u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001FE450u) [[unlikely]] return; }
L_001FE450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001FE4AC; } }
L_001FE458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE460u); set32(c.r[4], 0u + 1704u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001FE460u) [[unlikely]] return; }
L_001FE460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FE478; } }
    c.r[5].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE478u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 117u, depth + 1u); else { c.pc = 0x001FCEF0u; return; } if (c.pc != 0x001FE478u) [[unlikely]] return; }
L_001FE478:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { st32((c.r[16].w[0] + 1620u), c.r[2].w[0]);  goto L_001FE484; }
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_001FE484:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE49Cu); set32(c.r[6], c.r[6].w[0] + 27571u);  if (depth < kMaxDepth) unit_0022(c, 125u, depth + 1u); else { c.pc = 0x001A9410u; return; } if (c.pc != 0x001FE49Cu) [[unlikely]] return; }
L_001FE49C:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 4;
L_001FE4AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE4B4u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x001FE4B4u) [[unlikely]] return; }
L_001FE4B4:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FE458u | kUnwind; return; } goto L_001FE458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE4C8u);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x001FE4C8u) [[unlikely]] return; }
L_001FE4C8:
    set32(c.r[16], ld32((c.r[2].w[0] + 100u)));
    c.f[1] = ld32((c.r[28].w[0] - 31800u));
    c.f[0] = ld32((c.r[28].w[0] - 31796u));
    set32(c.r[5], c.r[29].w[0] + 184u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 184u), c.f[1]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 188u), c.f[0]);
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 188u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 116u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE504u); st32((c.r[29].w[0] + 124u), 0u);  if (depth < kMaxDepth) unit_0038(c, 331u, depth + 1u); else { c.pc = 0x002034E0u; return; } if (c.pc != 0x001FE504u) [[unlikely]] return; }
L_001FE504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE50Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0035(c, 113u, depth + 1u); else { c.pc = 0x001F5130u; return; } if (c.pc != 0x001FE50Cu) [[unlikely]] return; }
L_001FE50C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE520u); set32(c.r[6], c.r[6].w[0] + 27392u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x001FE520u) [[unlikely]] return; }
L_001FE520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE528u); set32(c.r[17], ld32((c.r[29].w[0] + 140u)));  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001FE528u) [[unlikely]] return; }
L_001FE528:
    set32(c.r[4], ld32((c.r[2].w[0] + 76u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53460000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE540u); c.r[5].d[0] = c.r[2].d[0] | 19527ull;  if (depth < kMaxDepth) unit_0038(c, 285u, depth + 1u); else { c.pc = 0x00202DF0u; return; } if (c.pc != 0x001FE540u) [[unlikely]] return; }
L_001FE540:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE54Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0035(c, 138u, depth + 1u); else { c.pc = 0x001F5620u; return; } if (c.pc != 0x001FE54Cu) [[unlikely]] return; }
L_001FE54C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001FE5A8; } }
L_001FE554:
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE564u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 82u, depth + 1u); else { c.pc = 0x001F4C50u; return; } if (c.pc != 0x001FE564u) [[unlikely]] return; }
L_001FE564:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE580u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001FE580u) [[unlikely]] return; }
L_001FE580:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001FE5A8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FE5A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE5A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FE5A4u) [[unlikely]] return; }
L_001FE5A4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001FE5A8:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FE554u | kUnwind; return; } goto L_001FE554; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE5BCu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0038(c, 345u, depth + 1u); else { c.pc = 0x002036C0u; return; } if (c.pc != 0x001FE5BCu) [[unlikely]] return; }
L_001FE5BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE5C4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0035(c, 113u, depth + 1u); else { c.pc = 0x001F5130u; return; } if (c.pc != 0x001FE5C4u) [[unlikely]] return; }
L_001FE5C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE5CCu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0038(c, 345u, depth + 1u); else { c.pc = 0x002036C0u; return; } if (c.pc != 0x001FE5CCu) [[unlikely]] return; }
L_001FE5CC:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001FE600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FE6E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 16224u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 60u)));  goto L_001FE654; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 24u), 0u);  goto L_001FE650; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE64Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FE64Cu) [[unlikely]] return; }
L_001FE64C:
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 1;
L_001FE650:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_001FE654:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 32u);  goto L_001FE670; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE668u); set32(c.r[5], c.r[5].w[0] + 29856u);  if (depth < kMaxDepth) unit_0008(c, 138u, depth + 1u); else { c.pc = 0x00141BA0u; return; } if (c.pc != 0x001FE668u) [[unlikely]] return; }
L_001FE668:
    st32((c.r[17].w[0] + 60u), 0u);
    set32(c.r[2], c.r[17].w[0] + 32u);
    c.budget -= 2;
L_001FE670:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FE6A8; } }
    set32(c.r[2], c.r[17].w[0] + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FE6A8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FE6A8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FE6A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE6A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FE6A8u) [[unlikely]] return; }
L_001FE6A8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001FE6CC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 7;
L_001FE6CC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001FE6E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE6E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001FE6E0u) [[unlikely]] return; }
L_001FE6E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FE6E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FE700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001FE7C0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001FE7C4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_001FE758; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FE7C0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_001FE758:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 24u)));  goto L_001FE77C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FE778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE778u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 185u, depth + 1u); else { c.pc = 0x001FD630u; return; } if (c.pc != 0x001FE778u) [[unlikely]] return; }
L_001FE778:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_001FE77C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_001FE79C; }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FE7C0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_001FE79C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FE7C0; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE7C0u); set32(c.r[5], c.r[3].w[0] + 1596u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001FE7C0u) [[unlikely]] return; }
L_001FE7C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001FE7C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FE7D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FE800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 1620u)));  if (t) { goto L_001FE7EC; } }
L_001FE7E4:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 1620u)));
    c.budget -= 2;
L_001FE7EC:
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FE7E4u | kUnwind; return; } goto L_001FE7E4; } }
L_001FE800:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001FE810:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[30], c.r[29].w[0] + 0u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE83Cu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001FE83Cu) [[unlikely]] return; }
L_001FE83C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FE870; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FE870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE870u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FE870u) [[unlikely]] return; }
L_001FE870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 27272u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_001FE8C0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE88Cu); set32(c.r[4], c.r[4].w[0] + 27272u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001FE88Cu) [[unlikely]] return; }
L_001FE88C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 27272u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FE8BC; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[16].w[0] + 8u);  goto L_001FE8B0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FE8BC; } }
L_001FE8B0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE8BCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001FE8BCu) [[unlikely]] return; }
L_001FE8BC:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001FE8C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 27536u);
    set32(c.r[6], c.r[30].w[0] + 184u);
    st32((c.r[30].w[0] + 188u), c.r[2].w[0]);
    st32((c.r[30].w[0] + 184u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE8E4u); st32((c.r[30].w[0] + 192u), 0u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x001FE8E4u) [[unlikely]] return; }
L_001FE8E4:
    set32(c.r[3], ld32((c.r[30].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  goto L_001FE910; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FE90C; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE90Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FE90Cu) [[unlikely]] return; }
L_001FE90C:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_001FE910:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 27546u);
    set32(c.r[6], c.r[30].w[0] + 168u);
    st32((c.r[30].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[30].w[0] + 168u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE930u); st32((c.r[30].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x001FE930u) [[unlikely]] return; }
L_001FE930:
    set32(c.r[3], ld32((c.r[30].w[0] + 168u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 56u)));  goto L_001FE95C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FE958; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 168u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE958u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FE958u) [[unlikely]] return; }
L_001FE958:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_001FE95C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 27557u);
    set32(c.r[6], c.r[30].w[0] + 152u);
    st32((c.r[30].w[0] + 156u), c.r[2].w[0]);
    st32((c.r[30].w[0] + 152u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE97Cu); st32((c.r[30].w[0] + 160u), 0u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x001FE97Cu) [[unlikely]] return; }
L_001FE97C:
    set32(c.r[3], ld32((c.r[30].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 4u));  goto L_001FE9A8; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FE9A4; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 152u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE9A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FE9A4u) [[unlikely]] return; }
L_001FE9A4:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 4u));
    c.budget -= 1;
L_001FE9A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 27564u);
    set32(c.r[6], c.r[30].w[0] + 136u);
    st32((c.r[30].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[30].w[0] + 136u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE9C8u); st32((c.r[30].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x001FE9C8u) [[unlikely]] return; }
L_001FE9C8:
    set32(c.r[3], ld32((c.r[30].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FE9F0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FE9F0; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE9F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FE9F0u) [[unlikely]] return; }
L_001FE9F0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEA04u); set32(c.r[6], c.r[6].w[0] + 27358u);  if (depth < kMaxDepth) unit_0035(c, 52u, depth + 1u); else { c.pc = 0x001F4730u; return; } if (c.pc != 0x001FEA04u) [[unlikely]] return; }
L_001FEA04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_001FEA1C; } }
L_001FEA0C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEA18u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 347u, depth + 1u); else { c.pc = 0x001FEBF0u; return; } if (c.pc != 0x001FEA18u) [[unlikely]] return; }
L_001FEA18:
    set32(c.r[18], ld32((c.r[18].w[0] + 1620u)));
    c.budget -= 1;
L_001FEA1C:
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FEA0Cu | kUnwind; return; } goto L_001FEA0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEA30u);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x001FEA30u) [[unlikely]] return; }
L_001FEA30:
    set32(c.r[18], ld32((c.r[2].w[0] + 100u)));
    c.f[1] = ld32((c.r[28].w[0] - 31792u));
    c.f[0] = ld32((c.r[28].w[0] - 31788u));
    set32(c.r[5], c.r[30].w[0] + 200u);
    set32(c.r[4], c.r[30].w[0] + 96u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[30].w[0] + 200u), c.f[1]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[30].w[0] + 204u), c.f[0]);
    st32((c.r[30].w[0] + 96u), 0u);
    st32((c.r[30].w[0] + 204u), c.r[18].w[0]);
    st32((c.r[30].w[0] + 104u), 0u);
    st32((c.r[30].w[0] + 100u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEA6Cu); st32((c.r[30].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0038(c, 331u, depth + 1u); else { c.pc = 0x002034E0u; return; } if (c.pc != 0x001FEA6Cu) [[unlikely]] return; }
L_001FEA6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEA74u); set32(c.r[4], c.r[30].w[0] + 96u);  if (depth < kMaxDepth) unit_0035(c, 113u, depth + 1u); else { c.pc = 0x001F5130u; return; } if (c.pc != 0x001FEA74u) [[unlikely]] return; }
L_001FEA74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001FEAA0; } }
L_001FEA7C:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[30].w[0] + 96u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], 0u + 6u);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEA9Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 92u, depth + 1u); else { c.pc = 0x001F4E30u; return; } if (c.pc != 0x001FEA9Cu) [[unlikely]] return; }
L_001FEA9C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001FEAA0:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FEA7Cu | kUnwind; return; } goto L_001FEA7C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[30].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] + 26992u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEAC0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0035(c, 125u, depth + 1u); else { c.pc = 0x001F5320u; return; } if (c.pc != 0x001FEAC0u) [[unlikely]] return; }
L_001FEAC0:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 15u);
    set32(c.r[2], 0u - 16u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[4], c.r[30].w[0] + 96u);
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 26992u);
    set32(c.r[19], c.r[29].w[0]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEAF8u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 129u, depth + 1u); else { c.pc = 0x001F53E0u; return; } if (c.pc != 0x001FEAF8u) [[unlikely]] return; }
L_001FEAF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEB00u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001FEB00u) [[unlikely]] return; }
L_001FEB00:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_001FEB38; }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001FEB68; } }
L_001FEB38:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEB44u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001FEB44u) [[unlikely]] return; }
L_001FEB44:
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 9;
L_001FEB68:
    st32((c.r[30].w[0] + 124u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 27392u);
    set32(c.r[6], c.r[30].w[0] + 120u);
    st32((c.r[30].w[0] + 120u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEB88u); st32((c.r[30].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x001FEB88u) [[unlikely]] return; }
L_001FEB88:
    set32(c.r[3], ld32((c.r[30].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[30].w[0] + 96u);  goto L_001FEBB4; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FEBB0; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEBB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FEBB0u) [[unlikely]] return; }
L_001FEBB0:
    set32(c.r[4], c.r[30].w[0] + 96u);
    c.budget -= 1;
L_001FEBB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEBBCu);  if (depth < kMaxDepth) unit_0038(c, 345u, depth + 1u); else { c.pc = 0x002036C0u; return; } if (c.pc != 0x001FEBBCu) [[unlikely]] return; }
L_001FEBBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEBC4u); set32(c.r[4], c.r[30].w[0] + 96u);  if (depth < kMaxDepth) unit_0035(c, 113u, depth + 1u); else { c.pc = 0x001F5130u; return; } if (c.pc != 0x001FEBC4u) [[unlikely]] return; }
L_001FEBC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEBCCu); set32(c.r[4], c.r[30].w[0] + 96u);  if (depth < kMaxDepth) unit_0038(c, 345u, depth + 1u); else { c.pc = 0x002036C0u; return; } if (c.pc != 0x001FEBCCu) [[unlikely]] return; }
L_001FEBCC:
    set32(c.r[29], c.r[30].w[0] + 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001FEBF0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[30], c.r[29].w[0] + 0u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEC20u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001FEC20u) [[unlikely]] return; }
L_001FEC20:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FEC54; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FEC54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEC54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FEC54u) [[unlikely]] return; }
L_001FEC54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 27571u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_001FECA4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEC70u); set32(c.r[4], c.r[4].w[0] + 27571u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001FEC70u) [[unlikely]] return; }
L_001FEC70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 27571u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FECA0; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[16].w[0] + 8u);  goto L_001FEC94; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FECA0; } }
L_001FEC94:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FECA0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001FECA0u) [[unlikely]] return; }
L_001FECA0:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001FECA4:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 27326u);
    set32(c.r[6], c.r[30].w[0] + 200u);
    st32((c.r[30].w[0] + 204u), c.r[2].w[0]);
    st32((c.r[30].w[0] + 200u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FECC8u); st32((c.r[30].w[0] + 208u), 0u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x001FECC8u) [[unlikely]] return; }
L_001FECC8:
    set32(c.r[3], ld32((c.r[30].w[0] + 200u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  goto L_001FECF4; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FECF0; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FECF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FECF0u) [[unlikely]] return; }
L_001FECF0:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_001FECF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 27335u);
    set32(c.r[6], c.r[30].w[0] + 184u);
    st32((c.r[30].w[0] + 188u), c.r[2].w[0]);
    st32((c.r[30].w[0] + 184u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FED14u); st32((c.r[30].w[0] + 192u), 0u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x001FED14u) [[unlikely]] return; }
L_001FED14:
    set32(c.r[3], ld32((c.r[30].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 1632u)));  goto L_001FED40; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FED3C; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FED3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FED3Cu) [[unlikely]] return; }
L_001FED3C:
    set32(c.r[2], ld32((c.r[18].w[0] + 1632u)));
    c.budget -= 1;
L_001FED40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 27344u);
    set32(c.r[6], c.r[30].w[0] + 168u);
    st32((c.r[30].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[30].w[0] + 168u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FED60u); st32((c.r[30].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x001FED60u) [[unlikely]] return; }
L_001FED60:
    set32(c.r[3], ld32((c.r[30].w[0] + 168u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 1576u)));  goto L_001FED8C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FED88; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 168u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FED88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FED88u) [[unlikely]] return; }
L_001FED88:
    set32(c.r[2], ld32((c.r[18].w[0] + 1576u)));
    c.budget -= 1;
L_001FED8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 27351u);
    set32(c.r[6], c.r[30].w[0] + 152u);
    st32((c.r[30].w[0] + 156u), c.r[2].w[0]);
    st32((c.r[30].w[0] + 152u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEDACu); st32((c.r[30].w[0] + 160u), 0u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x001FEDACu) [[unlikely]] return; }
L_001FEDAC:
    set32(c.r[3], ld32((c.r[30].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FEDD4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FEDD4; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 152u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEDD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FEDD4u) [[unlikely]] return; }
L_001FEDD4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[18].w[0] + 1596u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEDE8u); set32(c.r[6], c.r[6].w[0] + 27358u);  if (depth < kMaxDepth) unit_0035(c, 52u, depth + 1u); else { c.pc = 0x001F4730u; return; } if (c.pc != 0x001FEDE8u) [[unlikely]] return; }
L_001FEDE8:
    set32(c.r[2], ld32((c.r[18].w[0] + 1316u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], ld32((c.r[18].w[0] + 32u)));  goto L_001FEEE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEDFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001FEDFCu) [[unlikely]] return; }
L_001FEDFC:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FEE30; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FEE30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEE30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FEE30u) [[unlikely]] return; }
L_001FEE30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 27374u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 8u), 0u);  goto L_001FEE80; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEE4Cu); set32(c.r[4], c.r[4].w[0] + 27374u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001FEE4Cu) [[unlikely]] return; }
L_001FEE4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 27374u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FEE7C; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[19].w[0] + 8u);  goto L_001FEE70; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FEE7C; } }
L_001FEE70:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEE7Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001FEE7Cu) [[unlikely]] return; }
L_001FEE7C:
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001FEE80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001FEED4; } }
L_001FEE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEE90u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001FEE90u) [[unlikely]] return; }
L_001FEE90:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 1320u)));
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FEECC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FEECC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEECCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FEECCu) [[unlikely]] return; }
L_001FEECC:
    st32((c.r[20].w[0] + 8u), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001FEED4:
    set32(c.r[2], ld32((c.r[18].w[0] + 1316u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FEE88u | kUnwind; return; } goto L_001FEE88; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 1;
L_001FEEE8:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[4], ld32((c.r[18].w[0] + 28u)));  goto L_001FEFBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEEF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001FEEF8u) [[unlikely]] return; }
L_001FEEF8:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FEF2C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FEF2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEF2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FEF2Cu) [[unlikely]] return; }
L_001FEF2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 27365u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 8u), 0u);  goto L_001FEF7C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEF48u); set32(c.r[4], c.r[4].w[0] + 27365u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001FEF48u) [[unlikely]] return; }
L_001FEF48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 27365u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FEF78; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[19].w[0] + 8u);  goto L_001FEF6C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FEF78; } }
L_001FEF6C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEF78u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001FEF78u) [[unlikely]] return; }
L_001FEF78:
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001FEF7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001FEFA8; } }
L_001FEF84:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 27581u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEFA4u); set32(c.r[4], c.r[2].w[0] + 36u);  if (depth < kMaxDepth) unit_0035(c, 52u, depth + 1u); else { c.pc = 0x001F4730u; return; } if (c.pc != 0x001FEFA4u) [[unlikely]] return; }
L_001FEFA4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001FEFA8:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FEF84u | kUnwind; return; } goto L_001FEF84; }
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_001FEFBC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FEFCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEFCCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 197u, depth + 1u); else { c.pc = 0x001F6130u; return; } if (c.pc != 0x001FEFCCu) [[unlikely]] return; }
L_001FEFCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEFD4u);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x001FEFD4u) [[unlikely]] return; }
L_001FEFD4:
    set32(c.r[17], ld32((c.r[2].w[0] + 96u)));
    c.f[1] = ld32((c.r[28].w[0] - 31784u));
    c.f[0] = ld32((c.r[28].w[0] - 31780u));
    set32(c.r[5], c.r[30].w[0] + 216u);
    set32(c.r[4], c.r[30].w[0] + 112u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[30].w[0] + 216u), c.f[1]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[30].w[0] + 220u), c.f[0]);
    st32((c.r[30].w[0] + 112u), 0u);
    st32((c.r[30].w[0] + 220u), c.r[17].w[0]);
    st32((c.r[30].w[0] + 120u), 0u);
    st32((c.r[30].w[0] + 116u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF010u); st32((c.r[30].w[0] + 124u), 0u);  if (depth < kMaxDepth) unit_0038(c, 331u, depth + 1u); else { c.pc = 0x002034E0u; return; } if (c.pc != 0x001FF010u) [[unlikely]] return; }
L_001FF010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF018u); set32(c.r[4], c.r[30].w[0] + 112u);  if (depth < kMaxDepth) unit_0035(c, 113u, depth + 1u); else { c.pc = 0x001F5130u; return; } if (c.pc != 0x001FF018u) [[unlikely]] return; }
L_001FF018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001FF044; } }
L_001FF020:
    set32(c.r[2], ld32((c.r[18].w[0] + 1624u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[30].w[0] + 112u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], 0u + 5u);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF040u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 92u, depth + 1u); else { c.pc = 0x001F4E30u; return; } if (c.pc != 0x001FF040u) [[unlikely]] return; }
L_001FF040:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001FF044:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FF020u | kUnwind; return; } goto L_001FF020; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[30].w[0] + 112u);
    set32(c.r[5], c.r[5].w[0] + 27000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF064u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0035(c, 125u, depth + 1u); else { c.pc = 0x001F5320u; return; } if (c.pc != 0x001FF064u) [[unlikely]] return; }
L_001FF064:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 15u);
    set32(c.r[2], 0u - 16u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[4], c.r[30].w[0] + 112u);
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 27000u);
    set32(c.r[19], c.r[29].w[0]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF09Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 129u, depth + 1u); else { c.pc = 0x001F53E0u; return; } if (c.pc != 0x001FF09Cu) [[unlikely]] return; }
L_001FF09C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF0A4u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001FF0A4u) [[unlikely]] return; }
L_001FF0A4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_001FF0DC; }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001FF10C; } }
L_001FF0DC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF0E8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001FF0E8u) [[unlikely]] return; }
L_001FF0E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 9;
L_001FF10C:
    st32((c.r[30].w[0] + 140u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 27392u);
    set32(c.r[6], c.r[30].w[0] + 136u);
    st32((c.r[30].w[0] + 136u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF12Cu); st32((c.r[30].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x001FF12Cu) [[unlikely]] return; }
L_001FF12C:
    set32(c.r[3], ld32((c.r[30].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[30].w[0] + 112u);  goto L_001FF158; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FF154; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF154u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FF154u) [[unlikely]] return; }
L_001FF154:
    set32(c.r[4], c.r[30].w[0] + 112u);
    c.budget -= 1;
L_001FF158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF160u);  if (depth < kMaxDepth) unit_0038(c, 345u, depth + 1u); else { c.pc = 0x002036C0u; return; } if (c.pc != 0x001FF160u) [[unlikely]] return; }
L_001FF160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF168u); set32(c.r[4], c.r[30].w[0] + 112u);  if (depth < kMaxDepth) unit_0035(c, 113u, depth + 1u); else { c.pc = 0x001F5130u; return; } if (c.pc != 0x001FF168u) [[unlikely]] return; }
L_001FF168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF170u); set32(c.r[4], c.r[30].w[0] + 112u);  if (depth < kMaxDepth) unit_0038(c, 345u, depth + 1u); else { c.pc = 0x002036C0u; return; } if (c.pc != 0x001FF170u) [[unlikely]] return; }
L_001FF170:
    set32(c.r[29], c.r[30].w[0] + 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001FF1A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF1BCu); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001FF1BCu) [[unlikely]] return; }
L_001FF1BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FF23C; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF1D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x001FF1D0u) [[unlikely]] return; }
L_001FF1D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[16].w[0] + 68u);
    set32(c.r[2], c.r[2].w[0] + 16320u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF1F4u); st32((c.r[16].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_0037(c, 432u, depth + 1u); else { c.pc = 0x001FF770u; return; } if (c.pc != 0x001FF1F4u) [[unlikely]] return; }
L_001FF1F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF1FCu); set32(c.r[4], c.r[16].w[0] + 76u);  if (depth < kMaxDepth) unit_0038(c, 48u, depth + 1u); else { c.pc = 0x00200370u; return; } if (c.pc != 0x001FF1FCu) [[unlikely]] return; }
L_001FF1FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF204u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0038(c, 345u, depth + 1u); else { c.pc = 0x002036C0u; return; } if (c.pc != 0x001FF204u) [[unlikely]] return; }
L_001FF204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF20Cu); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0035(c, 113u, depth + 1u); else { c.pc = 0x001F5130u; return; } if (c.pc != 0x001FF20Cu) [[unlikely]] return; }
L_001FF20C:
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30496u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_001FF230; }
    st32((c.r[28].w[0] - 30496u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_001FF230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_001FF23C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FF260:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30496u)));  c.pc = t; return; }
L_001FF270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF288u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001FF288u) [[unlikely]] return; }
L_001FF288:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001FF2A0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF29Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 294u, depth + 1u); else { c.pc = 0x001FBA70u; return; } if (c.pc != 0x001FF29Cu) [[unlikely]] return; }
L_001FF29C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001FF2A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FF2B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30500u)));  c.pc = t; return; }
L_001FF2C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[28].w[0] - 30496u)));
    c.budget -= 7;
    if (c.r[5].d[0] == 0ull) { st32((c.r[4].w[0] + 4u), 0u);  goto L_001FF2EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF2E4u);  if (depth < kMaxDepth) unit_0036(c, 255u, depth + 1u); else { c.pc = 0x001FB4C0u; return; } if (c.pc != 0x001FF2E4u) [[unlikely]] return; }
L_001FF2E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001FF2F8; } }
L_001FF2EC:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_001FF2F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001FF300:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 30496u)));
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001FF420; } }
    set32(c.r[20], ld32((c.r[28].w[0] - 30500u)));
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_001FF398; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF350u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 82u, depth + 1u); else { c.pc = 0x001F4C50u; return; } if (c.pc != 0x001FF350u) [[unlikely]] return; }
L_001FF350:
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 100u)));  goto L_001FF374; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF370u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FF370u) [[unlikely]] return; }
L_001FF370:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_001FF374:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FF394; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FF394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF394u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FF394u) [[unlikely]] return; }
L_001FF394:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001FF398:
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 76u);  goto L_001FF3F0; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 52u);  goto L_001FF3D8; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001FF3D4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001FF3D4; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001FF3D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_001FF418; } }
L_001FF3D4:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_001FF3D8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF3E8u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 92u, depth + 1u); else { c.pc = 0x001F4E30u; return; } if (c.pc != 0x001FF3E8u) [[unlikely]] return; }
L_001FF3E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001FF424; } }
L_001FF3F0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF3FCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 57u, depth + 1u); else { c.pc = 0x00200490u; return; } if (c.pc != 0x001FF3FCu) [[unlikely]] return; }
L_001FF3FC:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF410u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 92u, depth + 1u); else { c.pc = 0x001F4E30u; return; } if (c.pc != 0x001FF410u) [[unlikely]] return; }
L_001FF410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FF420; } }
L_001FF418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF420u); set32(c.r[4], c.r[4].w[0] + 27065u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FF420u) [[unlikely]] return; }
L_001FF420:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001FF424:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001FF440:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_001FF450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF470u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 258u, depth + 1u); else { c.pc = 0x001FDFE0u; return; } if (c.pc != 0x001FF470u) [[unlikely]] return; }
L_001FF470:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FF490:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[8], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.r[3].d[0] = ld8((c.r[8].w[0] + 3u));
    c.r[6].d[0] = ld8((c.r[8].w[0] + 2u));
    c.r[5].d[0] = ld8((c.r[8].w[0] + 1u));
    set32(c.r[7], c.r[3].w[0] << 24);
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    set32(c.r[5], c.r[5].w[0] << 8);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];  c.pc = t; return; }
L_001FF4E0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_001FF500:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_001FF520:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[6].w[0]);  c.pc = t; return; }
L_001FF530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF550u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0037(c, 258u, depth + 1u); else { c.pc = 0x001FDFE0u; return; } if (c.pc != 0x001FF550u) [[unlikely]] return; }
L_001FF550:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { set32(c.r[2], 0u - 1u);  goto L_001FF584; }
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  goto L_001FF574; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FF584; } }
L_001FF574:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_001FF584:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FF5A0:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_001FF5B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_001FF5C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF5DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001FF5DCu) [[unlikely]] return; }
L_001FF5DC:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF5E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 39u, depth + 1u); else { c.pc = 0x001FC4E0u; return; } if (c.pc != 0x001FF5E8u) [[unlikely]] return; }
L_001FF5E8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 8u)));  goto L_001FF5FC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 27600u);  if (t) { goto L_001FF628; } }
L_001FF5FC:
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001FF614; } }
    c.r[2].d[0] = c.r[16].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  goto L_001FF61C; }
L_001FF614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FF628; } }
L_001FF61C:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_001FF628:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FF640:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF670u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001FF670u) [[unlikely]] return; }
L_001FF670:
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF67Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 39u, depth + 1u); else { c.pc = 0x001FC4E0u; return; } if (c.pc != 0x001FF67Cu) [[unlikely]] return; }
L_001FF67C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  goto L_001FF68C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FF740; } }
L_001FF68C:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[22], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[3].w[0] - 1u);  if (t) { goto L_001FF730; } }
L_001FF6A0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_001FF6B0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001FF6B0:
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF6C0u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001FF6C0u) [[unlikely]] return; }
L_001FF6C0:
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF6CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 39u, depth + 1u); else { c.pc = 0x001FC4E0u; return; } if (c.pc != 0x001FF6CCu) [[unlikely]] return; }
L_001FF6CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 8u)));  goto L_001FF6E0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 27600u);  if (t) { goto L_001FF70C; } }
L_001FF6E0:
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001FF6F8; } }
    c.r[2].d[0] = c.r[16].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  goto L_001FF700; }
L_001FF6F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001FF70C; } }
L_001FF700:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_001FF70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF714u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001FF714u) [[unlikely]] return; }
L_001FF714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FF724; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001FF740; } }
L_001FF724:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[18], c.r[17].w[0] - 1u);  goto L_001FF730; }
    set32(c.r[19], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001FF730:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + c.r[18].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FF6A0u | kUnwind; return; } goto L_001FF6A0; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001FF740:
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
L_001FF770:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_001FF780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001FF7B4; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001FF7B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF7B0u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001FF7B0u) [[unlikely]] return; }
L_001FF7B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001FF7B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FF7D0:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 4;
    { set32(c.r[5], ld32((c.r[4].w[0])));  [[clang::musttail]] return unit_0038(c, 28u, depth); }
L_001FF7E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF810u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 1u, depth + 1u); else { c.pc = 0x00200000u; return; } if (c.pc != 0x001FF810u) [[unlikely]] return; }
L_001FF810:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF820u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 8u, depth + 1u); else { c.pc = 0x00200050u; return; } if (c.pc != 0x001FF820u) [[unlikely]] return; }
L_001FF820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF828u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 23u, depth + 1u); else { c.pc = 0x00200180u; return; } if (c.pc != 0x001FF828u) [[unlikely]] return; }
L_001FF828:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FF83C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_001FF83C:
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001FF874; }
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FFA60; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FF868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF868u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FF868u) [[unlikely]] return; }
L_001FF868:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FFA60; } }
L_001FF874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF87Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 29u, depth + 1u); else { c.pc = 0x002001C0u; return; } if (c.pc != 0x001FF87Cu) [[unlikely]] return; }
L_001FF87C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FF8B4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FFA60; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FF8A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF8A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FF8A8u) [[unlikely]] return; }
L_001FF8A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FFA60; } }
L_001FF8B4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 24u)));  goto L_001FF8F8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF8C8u); set32(c.r[4], c.r[4].w[0] + 27601u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FF8C8u) [[unlikely]] return; }
L_001FF8C8:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FFA60; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FF8EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF8ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FF8ECu) [[unlikely]] return; }
L_001FF8EC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FFA60; } }
L_001FF8F8:
    set32(c.r[3], c.r[16].w[0] + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_001FF90C; } }
    set32(c.r[2], c.r[3].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_001FF90C:
    set32(c.r[3], c.r[2].w[0] + 36u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], 0u - 4u);
    set32(c.r[3], c.r[3].w[0] + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF924u); c.r[19].d[0] = c.r[3].d[0] & c.r[2].d[0];  if (depth < kMaxDepth) unit_0038(c, 46u, depth + 1u); else { c.pc = 0x00200340u; return; } if (c.pc != 0x001FF924u) [[unlikely]] return; }
L_001FF924:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], 0u - 16u);
    set32(c.r[4], c.r[18].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 36u);
    set32(c.r[4], c.r[4].w[0] + 15u);
    c.r[17].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[1].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001FF9C0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF960u); set32(c.r[4], c.r[4].w[0] + 27616u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FF960u) [[unlikely]] return; }
L_001FF960:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF970u); set32(c.r[4], c.r[4].w[0] + 27636u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FF970u) [[unlikely]] return; }
L_001FF970:
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF980u); set32(c.r[4], c.r[4].w[0] + 27645u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FF980u) [[unlikely]] return; }
L_001FF980:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[19].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF990u); set32(c.r[4], c.r[4].w[0] + 27654u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FF990u) [[unlikely]] return; }
L_001FF990:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FFA60; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FF9B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF9B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FF9B4u) [[unlikely]] return; }
L_001FF9B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FFA60; } }
L_001FF9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF9C8u); set32(c.r[4], c.r[4].w[0] + 27663u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001FF9C8u) [[unlikely]] return; }
L_001FF9C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF9D8u); set32(c.r[4], c.r[4].w[0] + 27636u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001FF9D8u) [[unlikely]] return; }
L_001FF9D8:
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF9E8u); set32(c.r[4], c.r[4].w[0] + 27645u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001FF9E8u) [[unlikely]] return; }
L_001FF9E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF9F8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001FF9F8u) [[unlikely]] return; }
L_001FF9F8:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FFA08; }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_001FFA08:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_001FFA14; }
    set32(c.r[5], c.r[3].w[0] + 12u);
    c.budget -= 1;
L_001FFA14:
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFA20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001FFA20u) [[unlikely]] return; }
L_001FFA20:
    st32((c.r[18].w[0] + 24u), c.r[21].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[18].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[5], c.r[18].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFA38u); st32((c.r[18].w[0] + 32u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0038(c, 28u, depth + 1u); else { c.pc = 0x002001B0u; return; } if (c.pc != 0x001FFA38u) [[unlikely]] return; }
L_001FFA38:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001FFA60; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FFA5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFA5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FFA5Cu) [[unlikely]] return; }
L_001FFA5C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001FFA60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001FFA90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFAC0u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0038(c, 8u, depth + 1u); else { c.pc = 0x00200050u; return; } if (c.pc != 0x001FFAC0u) [[unlikely]] return; }
L_001FFAC0:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001FFAD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_001FFAD8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FFAD8:
    c.budget -= 2;
    if (c.r[3].sd[0] > 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001FFB10; }
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_001FFC68; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001FFC64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFB04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FFB04u) [[unlikely]] return; }
L_001FFB04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FFC64; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001FFB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFB18u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 29u, depth + 1u); else { c.pc = 0x002001C0u; return; } if (c.pc != 0x001FFB18u) [[unlikely]] return; }
L_001FFB18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001FFB5C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFB30u); set32(c.r[4], c.r[4].w[0] + 27681u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FFB30u) [[unlikely]] return; }
L_001FFB30:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FFC64; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001FFC64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFB54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FFB54u) [[unlikely]] return; }
L_001FFB54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FFC64; } }
L_001FFB5C:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_001FFB74; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001FFBB0; }
L_001FFB74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFB80u); set32(c.r[4], c.r[4].w[0] + 27701u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FFB80u) [[unlikely]] return; }
L_001FFB80:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FFC64; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001FFC64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFBA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FFBA4u) [[unlikely]] return; }
L_001FFBA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FFC64; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001FFBB0:
    set32(c.r[5], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFBBCu); set32(c.r[6], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_0037(c, 490u, depth + 1u); else { c.pc = 0x001FFFD0u; return; } if (c.pc != 0x001FFBBCu) [[unlikely]] return; }
L_001FFBBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FFBF0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FFC64; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001FFC64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFBE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FFBE8u) [[unlikely]] return; }
L_001FFBE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FFC64; } }
L_001FFBF0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 88u)));  goto L_001FFC20; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 36u));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FFC40; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_001FFC20:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 36u));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st8((c.r[5].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_001FFC40:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FFC64; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001FFC64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFC64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FFC64u) [[unlikely]] return; }
L_001FFC64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001FFC68:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001FFC80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFCA8u); set32(c.r[4], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0038(c, 8u, depth + 1u); else { c.pc = 0x00200050u; return; } if (c.pc != 0x001FFCA8u) [[unlikely]] return; }
L_001FFCA8:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FFCB8; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_001FFCB8:
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001FFCF0; }
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FFE18; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FFCE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFCE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FFCE4u) [[unlikely]] return; }
L_001FFCE4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FFE18; } }
L_001FFCF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFCF8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 29u, depth + 1u); else { c.pc = 0x002001C0u; return; } if (c.pc != 0x001FFCF8u) [[unlikely]] return; }
L_001FFCF8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001FFD40; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFD10u); set32(c.r[4], c.r[4].w[0] + 27681u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FFD10u) [[unlikely]] return; }
L_001FFD10:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FFE18; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FFD34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFD34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FFD34u) [[unlikely]] return; }
L_001FFD34:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FFE18; } }
L_001FFD40:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_001FFD58; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001FFD94; }
L_001FFD58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFD64u); set32(c.r[4], c.r[4].w[0] + 27701u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FFD64u) [[unlikely]] return; }
L_001FFD64:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FFE18; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FFD88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFD88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FFD88u) [[unlikely]] return; }
L_001FFD88:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FFE18; } }
L_001FFD94:
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFDA0u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_0037(c, 490u, depth + 1u); else { c.pc = 0x001FFFD0u; return; } if (c.pc != 0x001FFDA0u) [[unlikely]] return; }
L_001FFDA0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 72u)));  goto L_001FFDD8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001FFE18; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FFDCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFDCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FFDCCu) [[unlikely]] return; }
L_001FFDCC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FFE18; } }
L_001FFDD8:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 36u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_001FFE14; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001FFE14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001FFE14u) [[unlikely]] return; }
L_001FFE14:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001FFE18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FFE30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 46u, depth + 1u); else { c.pc = 0x00200340u; return; } if (c.pc != 0x001FFE44u) [[unlikely]] return; }
L_001FFE44:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 16u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 52u);
    set32(c.r[2], c.r[2].w[0] + 15u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FFE70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE98u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0038(c, 46u, depth + 1u); else { c.pc = 0x00200340u; return; } if (c.pc != 0x001FFE98u) [[unlikely]] return; }
L_001FFE98:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[3], 0u - 16u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 52u);
    set32(c.r[2], c.r[2].w[0] + 15u);
    c.r[16].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[1].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001FFEC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001FFF08; } }
L_001FFEC4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFED0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001FFED0u) [[unlikely]] return; }
L_001FFED0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4B4D0000u);
    set32(c.r[6], c.r[16].w[0] - 16u);
    c.r[3].d[0] = c.r[2].d[0] | 19795ull;
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[18].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    st16((c.r[18].w[0] + 14u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFF04u); set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001FFF04u) [[unlikely]] return; }
L_001FFF04:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001FFF08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FFF30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001FFF78; } }
    set32(c.r[8], ld32((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 19787ull;
    set32(c.r[6], c.r[8].w[0] << 8);
    set32(c.r[7], c.r[8].w[0] << 24);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[8].w[0] >> 8);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[6].d[0] = c.r[3].d[0] | c.r[6].d[0];
    set32(c.r[3], c.r[8].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 15;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[6], ld32((c.r[5].w[0] + 4u)));  goto L_001FFF8C; }
L_001FFF78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFF84u); set32(c.r[4], c.r[4].w[0] + 27728u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FFF84u) [[unlikely]] return; }
L_001FFF84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FFFC0; } }
L_001FFF8C:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 8u)));  goto L_001FFFB0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFFA8u); set32(c.r[4], c.r[4].w[0] + 27742u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001FFFA8u) [[unlikely]] return; }
L_001FFFA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FFFC0; } }
L_001FFFB0:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFFBCu); set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001FFFBCu) [[unlikely]] return; }
L_001FFFBC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001FFFC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001FFFD0:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));  if (t) { goto L_001FFFE0; } }
    set32(c.r[2], c.r[4].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_001FFFE0:
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[3].w[0]);  c.pc = t; return; }
}

}
