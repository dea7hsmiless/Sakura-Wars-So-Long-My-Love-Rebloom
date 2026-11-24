#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0026[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0,
    9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0,
    28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40,
    0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0,
    0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 84, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0,
    0, 0, 0, 0, 90, 0, 91, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0,
    95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 103, 0, 104, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 110,
    0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0,
    0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0,
    0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0,
    0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 0,
    0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0,
    0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 161,
    0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 168, 0, 0, 0, 0, 169,
    0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206,
    0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214,
    0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0,
    0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252,
    0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 262,
    0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0,
    271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299,
    0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0,
    0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0,
    0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0,
    0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 350, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 364,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0,
    0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0,
    0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0,
    0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0,
    0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    403, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0,
    0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0,
    0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418,
    0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 423, 0, 0, 0, 424,
    0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0,
    0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 431,
    0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 435, 0,
    436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0,
    0, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0,
    455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0,
};

void unit_0026(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001B8000;
    case 2u: goto L_001B8010;
    case 3u: goto L_001B8020;
    case 4u: goto L_001B8030;
    case 5u: goto L_001B8040;
    case 6u: goto L_001B8050;
    case 7u: goto L_001B8060;
    case 8u: goto L_001B8070;
    case 9u: goto L_001B8080;
    case 10u: goto L_001B8090;
    case 11u: goto L_001B80A0;
    case 12u: goto L_001B80B0;
    case 13u: goto L_001B80E0;
    case 14u: goto L_001B8100;
    case 15u: goto L_001B8110;
    case 16u: goto L_001B8120;
    case 17u: goto L_001B8130;
    case 18u: goto L_001B8140;
    case 19u: goto L_001B8150;
    case 20u: goto L_001B8160;
    case 21u: goto L_001B8170;
    case 22u: goto L_001B8190;
    case 23u: goto L_001B81A0;
    case 24u: goto L_001B81B0;
    case 25u: goto L_001B81D0;
    case 26u: goto L_001B81E0;
    case 27u: goto L_001B81F0;
    case 28u: goto L_001B8200;
    case 29u: goto L_001B8210;
    case 30u: goto L_001B8220;
    case 31u: goto L_001B8234;
    case 32u: goto L_001B82C8;
    case 33u: goto L_001B82D8;
    case 34u: goto L_001B8310;
    case 35u: goto L_001B8340;
    case 36u: goto L_001B8358;
    case 37u: goto L_001B8370;
    case 38u: goto L_001B83B4;
    case 39u: goto L_001B83BC;
    case 40u: goto L_001B83FC;
    case 41u: goto L_001B840C;
    case 42u: goto L_001B841C;
    case 43u: goto L_001B842C;
    case 44u: goto L_001B8440;
    case 45u: goto L_001B8460;
    case 46u: goto L_001B8470;
    case 47u: goto L_001B8484;
    case 48u: goto L_001B8494;
    case 49u: goto L_001B84A0;
    case 50u: goto L_001B84D4;
    case 51u: goto L_001B8510;
    case 52u: goto L_001B8538;
    case 53u: goto L_001B85A4;
    case 54u: goto L_001B85B4;
    case 55u: goto L_001B85D0;
    case 56u: goto L_001B85DC;
    case 57u: goto L_001B8618;
    case 58u: goto L_001B8670;
    case 59u: goto L_001B86B8;
    case 60u: goto L_001B86C8;
    case 61u: goto L_001B86E8;
    case 62u: goto L_001B86F0;
    case 63u: goto L_001B8700;
    case 64u: goto L_001B87A4;
    case 65u: goto L_001B87AC;
    case 66u: goto L_001B87BC;
    case 67u: goto L_001B8860;
    case 68u: goto L_001B8868;
    case 69u: goto L_001B8878;
    case 70u: goto L_001B8898;
    case 71u: goto L_001B88A0;
    case 72u: goto L_001B88B4;
    case 73u: goto L_001B88CC;
    case 74u: goto L_001B88D4;
    case 75u: goto L_001B8918;
    case 76u: goto L_001B8934;
    case 77u: goto L_001B8950;
    case 78u: goto L_001B89A8;
    case 79u: goto L_001B89B8;
    case 80u: goto L_001B89F8;
    case 81u: goto L_001B8A20;
    case 82u: goto L_001B8A58;
    case 83u: goto L_001B8A60;
    case 84u: goto L_001B8A74;
    case 85u: goto L_001B8AB0;
    case 86u: goto L_001B8AC0;
    case 87u: goto L_001B8AD4;
    case 88u: goto L_001B8AE8;
    case 89u: goto L_001B8AF4;
    case 90u: goto L_001B8B10;
    case 91u: goto L_001B8B18;
    case 92u: goto L_001B8B20;
    case 93u: goto L_001B8B34;
    case 94u: goto L_001B8B74;
    case 95u: goto L_001B8B80;
    case 96u: goto L_001B8B94;
    case 97u: goto L_001B8BAC;
    case 98u: goto L_001B8BB4;
    case 99u: goto L_001B8BBC;
    case 100u: goto L_001B8BD4;
    case 101u: goto L_001B8BE4;
    case 102u: goto L_001B8C00;
    case 103u: goto L_001B8C0C;
    case 104u: goto L_001B8C14;
    case 105u: goto L_001B8C1C;
    case 106u: goto L_001B8C34;
    case 107u: goto L_001B8C44;
    case 108u: goto L_001B8C5C;
    case 109u: goto L_001B8C74;
    case 110u: goto L_001B8C7C;
    case 111u: goto L_001B8C84;
    case 112u: goto L_001B8C90;
    case 113u: goto L_001B8CAC;
    case 114u: goto L_001B8CC0;
    case 115u: goto L_001B8CDC;
    case 116u: goto L_001B8CF4;
    case 117u: goto L_001B8D14;
    case 118u: goto L_001B8D1C;
    case 119u: goto L_001B8D54;
    case 120u: goto L_001B8DC0;
    case 121u: goto L_001B8DC8;
    case 122u: goto L_001B8DDC;
    case 123u: goto L_001B8DE4;
    case 124u: goto L_001B8E04;
    case 125u: goto L_001B8E10;
    case 126u: goto L_001B8E40;
    case 127u: goto L_001B8E78;
    case 128u: goto L_001B8E84;
    case 129u: goto L_001B8E98;
    case 130u: goto L_001B8EAC;
    case 131u: goto L_001B8EC4;
    case 132u: goto L_001B8EE4;
    case 133u: goto L_001B8EEC;
    case 134u: goto L_001B8EF4;
    case 135u: goto L_001B8F18;
    case 136u: goto L_001B8F30;
    case 137u: goto L_001B8F38;
    case 138u: goto L_001B8F40;
    case 139u: goto L_001B8F64;
    case 140u: goto L_001B8F78;
    case 141u: goto L_001B8F88;
    case 142u: goto L_001B8FA4;
    case 143u: goto L_001B8FB8;
    case 144u: goto L_001B8FE0;
    case 145u: goto L_001B8FF8;
    case 146u: goto L_001B9000;
    case 147u: goto L_001B9024;
    case 148u: goto L_001B9038;
    case 149u: goto L_001B9048;
    case 150u: goto L_001B9060;
    case 151u: goto L_001B9074;
    case 152u: goto L_001B9080;
    case 153u: goto L_001B90A4;
    case 154u: goto L_001B90F4;
    case 155u: goto L_001B9110;
    case 156u: goto L_001B9124;
    case 157u: goto L_001B9134;
    case 158u: goto L_001B9144;
    case 159u: goto L_001B9158;
    case 160u: goto L_001B9164;
    case 161u: goto L_001B917C;
    case 162u: goto L_001B9190;
    case 163u: goto L_001B91A0;
    case 164u: goto L_001B91B8;
    case 165u: goto L_001B91F0;
    case 166u: goto L_001B9254;
    case 167u: goto L_001B9260;
    case 168u: goto L_001B9268;
    case 169u: goto L_001B927C;
    case 170u: goto L_001B928C;
    case 171u: goto L_001B92D0;
    case 172u: goto L_001B933C;
    case 173u: goto L_001B9350;
    case 174u: goto L_001B9358;
    case 175u: goto L_001B9380;
    case 176u: goto L_001B93C4;
    case 177u: goto L_001B9414;
    case 178u: goto L_001B94B8;
    case 179u: goto L_001B9540;
    case 180u: goto L_001B9554;
    case 181u: goto L_001B9580;
    case 182u: goto L_001B95A0;
    case 183u: goto L_001B95B8;
    case 184u: goto L_001B95D0;
    case 185u: goto L_001B9600;
    case 186u: goto L_001B9630;
    case 187u: goto L_001B9660;
    case 188u: goto L_001B9678;
    case 189u: goto L_001B9688;
    case 190u: goto L_001B96B0;
    case 191u: goto L_001B9730;
    case 192u: goto L_001B9738;
    case 193u: goto L_001B9748;
    case 194u: goto L_001B9758;
    case 195u: goto L_001B9768;
    case 196u: goto L_001B97D4;
    case 197u: goto L_001B9820;
    case 198u: goto L_001B9850;
    case 199u: goto L_001B9860;
    case 200u: goto L_001B98A8;
    case 201u: goto L_001B98C8;
    case 202u: goto L_001B98E0;
    case 203u: goto L_001B98EC;
    case 204u: goto L_001B9920;
    case 205u: goto L_001B9950;
    case 206u: goto L_001B997C;
    case 207u: goto L_001B99A0;
    case 208u: goto L_001B9A20;
    case 209u: goto L_001B9A3C;
    case 210u: goto L_001B9A60;
    case 211u: goto L_001B9AA0;
    case 212u: goto L_001B9AB4;
    case 213u: goto L_001B9AD8;
    case 214u: goto L_001B9AFC;
    case 215u: goto L_001B9B14;
    case 216u: goto L_001B9B20;
    case 217u: goto L_001B9B50;
    case 218u: goto L_001B9B60;
    case 219u: goto L_001B9B80;
    case 220u: goto L_001B9B90;
    case 221u: goto L_001B9BA4;
    case 222u: goto L_001B9BCC;
    case 223u: goto L_001B9BDC;
    case 224u: goto L_001B9BF0;
    case 225u: goto L_001B9C00;
    case 226u: goto L_001B9C20;
    case 227u: goto L_001B9C50;
    case 228u: goto L_001B9C60;
    case 229u: goto L_001B9C80;
    case 230u: goto L_001B9CB0;
    case 231u: goto L_001B9CC4;
    case 232u: goto L_001B9D1C;
    case 233u: goto L_001B9D30;
    case 234u: goto L_001B9D6C;
    case 235u: goto L_001B9D74;
    case 236u: goto L_001B9D90;
    case 237u: goto L_001B9DAC;
    case 238u: goto L_001B9DC4;
    case 239u: goto L_001B9DD4;
    case 240u: goto L_001B9DE8;
    case 241u: goto L_001B9DF4;
    case 242u: goto L_001B9E10;
    case 243u: goto L_001B9E1C;
    case 244u: goto L_001B9E50;
    case 245u: goto L_001B9E80;
    case 246u: goto L_001B9E98;
    case 247u: goto L_001B9EC0;
    case 248u: goto L_001B9EEC;
    case 249u: goto L_001B9F04;
    case 250u: goto L_001B9F18;
    case 251u: goto L_001B9F50;
    case 252u: goto L_001B9F7C;
    case 253u: goto L_001B9F9C;
    case 254u: goto L_001B9FC0;
    case 255u: goto L_001B9FE0;
    case 256u: goto L_001BA070;
    case 257u: goto L_001BA0A0;
    case 258u: goto L_001BA0B4;
    case 259u: goto L_001BA0BC;
    case 260u: goto L_001BA0D8;
    case 261u: goto L_001BA0E0;
    case 262u: goto L_001BA0FC;
    case 263u: goto L_001BA120;
    case 264u: goto L_001BA15C;
    case 265u: goto L_001BA16C;
    case 266u: goto L_001BA1D0;
    case 267u: goto L_001BA1DC;
    case 268u: goto L_001BA200;
    case 269u: goto L_001BA24C;
    case 270u: goto L_001BA278;
    case 271u: goto L_001BA280;
    case 272u: goto L_001BA29C;
    case 273u: goto L_001BA2A8;
    case 274u: goto L_001BA2CC;
    case 275u: goto L_001BA2E0;
    case 276u: goto L_001BA31C;
    case 277u: goto L_001BA350;
    case 278u: goto L_001BA380;
    case 279u: goto L_001BA398;
    case 280u: goto L_001BA3D0;
    case 281u: goto L_001BA400;
    case 282u: goto L_001BA424;
    case 283u: goto L_001BA43C;
    case 284u: goto L_001BA458;
    case 285u: goto L_001BA46C;
    case 286u: goto L_001BA480;
    case 287u: goto L_001BA49C;
    case 288u: goto L_001BA4C4;
    case 289u: goto L_001BA4E0;
    case 290u: goto L_001BA4F0;
    case 291u: goto L_001BA540;
    case 292u: goto L_001BA554;
    case 293u: goto L_001BA580;
    case 294u: goto L_001BA5B0;
    case 295u: goto L_001BA5DC;
    case 296u: goto L_001BA640;
    case 297u: goto L_001BA6B4;
    case 298u: goto L_001BA6E0;
    case 299u: goto L_001BA6FC;
    case 300u: goto L_001BA710;
    case 301u: goto L_001BA740;
    case 302u: goto L_001BA75C;
    case 303u: goto L_001BA788;
    case 304u: goto L_001BA7C0;
    case 305u: goto L_001BA7CC;
    case 306u: goto L_001BA800;
    case 307u: goto L_001BA810;
    case 308u: goto L_001BA838;
    case 309u: goto L_001BA850;
    case 310u: goto L_001BA860;
    case 311u: goto L_001BA8A0;
    case 312u: goto L_001BA8D0;
    case 313u: goto L_001BA8F0;
    case 314u: goto L_001BA908;
    case 315u: goto L_001BA91C;
    case 316u: goto L_001BA954;
    case 317u: goto L_001BA980;
    case 318u: goto L_001BA990;
    case 319u: goto L_001BA9A8;
    case 320u: goto L_001BA9C0;
    case 321u: goto L_001BA9D0;
    case 322u: goto L_001BAA00;
    case 323u: goto L_001BAA14;
    case 324u: goto L_001BAA30;
    case 325u: goto L_001BAA44;
    case 326u: goto L_001BAA70;
    case 327u: goto L_001BAAA0;
    case 328u: goto L_001BAACC;
    case 329u: goto L_001BAB30;
    case 330u: goto L_001BAB60;
    case 331u: goto L_001BAB78;
    case 332u: goto L_001BAB8C;
    case 333u: goto L_001BABA0;
    case 334u: goto L_001BABB4;
    case 335u: goto L_001BAC10;
    case 336u: goto L_001BAC40;
    case 337u: goto L_001BAC58;
    case 338u: goto L_001BAC70;
    case 339u: goto L_001BAC94;
    case 340u: goto L_001BACE4;
    case 341u: goto L_001BACF8;
    case 342u: goto L_001BAD48;
    case 343u: goto L_001BAD50;
    case 344u: goto L_001BAD64;
    case 345u: goto L_001BAD6C;
    case 346u: goto L_001BAD90;
    case 347u: goto L_001BADA0;
    case 348u: goto L_001BADDC;
    case 349u: goto L_001BADE8;
    case 350u: goto L_001BADF0;
    case 351u: goto L_001BAE20;
    case 352u: goto L_001BAE30;
    case 353u: goto L_001BAE90;
    case 354u: goto L_001BAF30;
    case 355u: goto L_001BAF48;
    case 356u: goto L_001BAF5C;
    case 357u: goto L_001BAF70;
    case 358u: goto L_001BAF80;
    case 359u: goto L_001BAF9C;
    case 360u: goto L_001BAFB0;
    case 361u: goto L_001BAFC4;
    case 362u: goto L_001BAFE8;
    case 363u: goto L_001BAFF0;
    case 364u: goto L_001BAFFC;
    case 365u: goto L_001BB040;
    case 366u: goto L_001BB084;
    case 367u: goto L_001BB0A4;
    case 368u: goto L_001BB0BC;
    case 369u: goto L_001BB0E0;
    case 370u: goto L_001BB14C;
    case 371u: goto L_001BB2A0;
    case 372u: goto L_001BB2B8;
    case 373u: goto L_001BB2C0;
    case 374u: goto L_001BB2F0;
    case 375u: goto L_001BB314;
    case 376u: goto L_001BB34C;
    case 377u: goto L_001BB370;
    case 378u: goto L_001BB378;
    case 379u: goto L_001BB390;
    case 380u: goto L_001BB3A0;
    case 381u: goto L_001BB3C0;
    case 382u: goto L_001BB420;
    case 383u: goto L_001BB444;
    case 384u: goto L_001BB478;
    case 385u: goto L_001BB48C;
    case 386u: goto L_001BB4F0;
    case 387u: goto L_001BB514;
    case 388u: goto L_001BB51C;
    case 389u: goto L_001BB590;
    case 390u: goto L_001BB5B8;
    case 391u: goto L_001BB5E8;
    case 392u: goto L_001BB61C;
    case 393u: goto L_001BB634;
    case 394u: goto L_001BB644;
    case 395u: goto L_001BB6A0;
    case 396u: goto L_001BB7A0;
    case 397u: goto L_001BB7B0;
    case 398u: goto L_001BB7D8;
    case 399u: goto L_001BB80C;
    case 400u: goto L_001BB83C;
    case 401u: goto L_001BB8B0;
    case 402u: goto L_001BB8D4;
    case 403u: goto L_001BB900;
    case 404u: goto L_001BB924;
    case 405u: goto L_001BB93C;
    case 406u: goto L_001BB960;
    case 407u: goto L_001BB98C;
    case 408u: goto L_001BB9A0;
    case 409u: goto L_001BB9B8;
    case 410u: goto L_001BB9D0;
    case 411u: goto L_001BB9F0;
    case 412u: goto L_001BBA04;
    case 413u: goto L_001BBA0C;
    case 414u: goto L_001BBA40;
    case 415u: goto L_001BBA74;
    case 416u: goto L_001BBA84;
    case 417u: goto L_001BBAD0;
    case 418u: goto L_001BBAFC;
    case 419u: goto L_001BBB04;
    case 420u: goto L_001BBB20;
    case 421u: goto L_001BBB54;
    case 422u: goto L_001BBB64;
    case 423u: goto L_001BBB6C;
    case 424u: goto L_001BBB7C;
    case 425u: goto L_001BBB88;
    case 426u: goto L_001BBB9C;
    case 427u: goto L_001BBBE8;
    case 428u: goto L_001BBC04;
    case 429u: goto L_001BBC2C;
    case 430u: goto L_001BBC58;
    case 431u: goto L_001BBC7C;
    case 432u: goto L_001BBC84;
    case 433u: goto L_001BBCE0;
    case 434u: goto L_001BBCE8;
    case 435u: goto L_001BBCF8;
    case 436u: goto L_001BBD00;
    case 437u: goto L_001BBD40;
    case 438u: goto L_001BBD50;
    case 439u: goto L_001BBD70;
    case 440u: goto L_001BBDA4;
    case 441u: goto L_001BBDB4;
    case 442u: goto L_001BBDBC;
    case 443u: goto L_001BBDCC;
    case 444u: goto L_001BBDDC;
    case 445u: goto L_001BBE28;
    case 446u: goto L_001BBE6C;
    case 447u: goto L_001BBE88;
    case 448u: goto L_001BBE90;
    case 449u: goto L_001BBEC8;
    case 450u: goto L_001BBED0;
    case 451u: goto L_001BBF00;
    case 452u: goto L_001BBF10;
    case 453u: goto L_001BBF3C;
    case 454u: goto L_001BBF64;
    case 455u: goto L_001BBF80;
    case 456u: goto L_001BBFAC;
    case 457u: goto L_001BBFD4;
    case 458u: goto L_001BBFF0;
    default: bad_entry(c, 0x001B8000u); return;
    }
L_001B8000:
    c.budget -= 2;
    { c.r[6].d[0] = c.r[2].d[0] + 0ull;  goto L_001B9E50; }
L_001B8010:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001B9EC0; }
L_001B8020:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001BA000; }
L_001B8030:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001B9F50; }
L_001B8040:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001B9FC0; }
L_001B8050:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001B9FF0; }
L_001B8060:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001BA010; }
L_001B8070:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001BA060; }
L_001B8080:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001BA070; }
L_001B8090:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001BA110; }
L_001B80A0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001BA120; }
L_001B80B0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B80D4; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001B80D0; } }
    st32((c.r[28].w[0] - 30604u), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30600u), c.r[5].w[0]);  if (t) { goto L_001B80D4; } }
L_001B80D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B80D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B80E0:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 8;
    { c.r[7].d[0] = c.r[2].d[0] + 0ull;  goto L_001BA350; }
L_001B8100:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001BA400; }
L_001B8110:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001BA480; }
L_001B8120:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001BA4E0; }
L_001B8130:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001BA540; }
L_001B8140:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001BA580; }
L_001B8150:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001BA670; }
L_001B8160:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001BA6E0; }
L_001B8170:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));
    c.budget -= 5;
    { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_001BA710; }
L_001B8190:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001BA800; }
L_001B81A0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001BA850; }
L_001B81B0:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 8;
    { c.r[7].d[0] = c.r[2].d[0] + 0ull;  goto L_001BA8A0; }
L_001B81D0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001BA980; }
L_001B81E0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001BA9C0; }
L_001B81F0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001BAA00; }
L_001B8200:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001BAA30; }
L_001B8210:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 30616u)));  goto L_001BAA70; }
L_001B8220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8234u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x001B8234u) [[unlikely]] return; }
L_001B8234:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 11072u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], 0u - 20u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[16].w[0] + 56u), 0u);
    c.r[6].d[0] = c.r[2].d[0] | 36224ull;
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D530000u);
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 19783ull;
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[5], 0u - 480u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 180u), 0u);
    st32((c.r[16].w[0] + 184u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 188u), 0u);
    st32((c.r[16].w[0] + 192u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 196u), 0u);
    st32((c.r[16].w[0] + 200u), 0u);
    st32((c.r[16].w[0] + 204u), 0u);
    st32((c.r[16].w[0] + 208u), 0u);
    st32((c.r[16].w[0] + 212u), 0u);
    st32((c.r[16].w[0] + 216u), 0u);
    st32((c.r[16].w[0] + 220u), c.r[3].w[0]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B82C8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 41u, depth + 1u); else { c.pc = 0x001545B0u; return; } if (c.pc != 0x001B82C8u) [[unlikely]] return; }
L_001B82C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B82D8u);  if (depth < kMaxDepth) unit_000D(c, 38u, depth + 1u); else { c.pc = 0x00154510u; return; } if (c.pc != 0x001B82D8u) [[unlikely]] return; }
L_001B82D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B8310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B8358; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8340u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x001B8340u) [[unlikely]] return; }
L_001B8340:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001B835C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8358u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001B8358u) [[unlikely]] return; }
L_001B8358:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B835C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B8370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B84E4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[4].w[0] + 16u)));  goto L_001B8454; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 80u)));  goto L_001B83AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B84F0; } }
L_001B83AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B83B4u);  if (depth < kMaxDepth) unit_0026(c, 251u, depth + 1u); else { c.pc = 0x001B9F50u; return; } if (c.pc != 0x001B83B4u) [[unlikely]] return; }
L_001B83B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8430; } }
L_001B83BC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[16].w[0])));  goto L_001B8424; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[16].w[0])));  goto L_001B8414; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[16].w[0])));  goto L_001B8404; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[16].w[0])));  goto L_001B83F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 76u)));  if (t) { goto L_001B8430; } }
L_001B83F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B83FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 217u, depth + 1u); else { c.pc = 0x001B9B50u; return; } if (c.pc != 0x001B83FCu) [[unlikely]] return; }
L_001B83FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B842C; } }
L_001B8404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B840Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 281u, depth + 1u); else { c.pc = 0x001BA400u; return; } if (c.pc != 0x001B840Cu) [[unlikely]] return; }
L_001B840C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B842C; } }
L_001B8414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B841Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 317u, depth + 1u); else { c.pc = 0x001BA980u; return; } if (c.pc != 0x001B841Cu) [[unlikely]] return; }
L_001B841C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B842C; } }
L_001B8424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B842Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 317u, depth + 1u); else { c.pc = 0x001BA980u; return; } if (c.pc != 0x001B842Cu) [[unlikely]] return; }
L_001B842C:
    set32(c.r[16], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_001B8430:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B83BCu | kUnwind; return; } goto L_001B83BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8440u);  if (depth < kMaxDepth) unit_000C(c, 135u, depth + 1u); else { c.pc = 0x00151BF0u; return; } if (c.pc != 0x001B8440u) [[unlikely]] return; }
L_001B8440:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), 0u);  if (t) { goto L_001B84EC; } }
L_001B8454:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8460u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B8460u) [[unlikely]] return; }
L_001B8460:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8470u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B8470u) [[unlikely]] return; }
L_001B8470:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B84EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8484u);  if (depth < kMaxDepth) unit_0021(c, 297u, depth + 1u); else { c.pc = 0x001A75D0u; return; } if (c.pc != 0x001B8484u) [[unlikely]] return; }
L_001B8484:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B84EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_001B84A4; } }
L_001B8494:
    set32(c.r[16], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B84A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x001B84A0u) [[unlikely]] return; }
L_001B84A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B84A4:
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B8494u | kUnwind; return; } goto L_001B8494; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 56u)));  goto L_001B84DC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 68u), 0u);  goto L_001B84D8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B84D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B84D4u) [[unlikely]] return; }
L_001B84D4:
    st32((c.r[17].w[0] + 68u), 0u);
    c.budget -= 1;
L_001B84D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_001B84DC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 2;
L_001B84E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B84F0; } }
L_001B84EC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B84F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B8510:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8538u); st32((c.r[4].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 23u, depth + 1u); else { c.pc = 0x001542A0u; return; } if (c.pc != 0x001B8538u) [[unlikely]] return; }
L_001B8538:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_001B92B4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 188u)));  goto L_001B8648; }
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B8644; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[6].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 108u)));  goto L_001B862C; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  goto L_001B85EC; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  goto L_001B8584; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8644; } }
L_001B8584:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 56u);  goto L_001B85AC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 68u), 0u);  goto L_001B85A8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B85A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B85A4u) [[unlikely]] return; }
L_001B85A4:
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 1;
L_001B85A8:
    set32(c.r[4], 0u + 56u);
    c.budget -= 1;
L_001B85AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B85B4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001B85B4u) [[unlikely]] return; }
L_001B85B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  goto L_001B85D4; }
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B85D0u); set32(c.r[7], c.r[16].w[0] + 92u);  if (depth < kMaxDepth) unit_0018(c, 61u, depth + 1u); else { c.pc = 0x001805E0u; return; } if (c.pc != 0x001B85D0u) [[unlikely]] return; }
L_001B85D0:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 1;
L_001B85D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B85DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 80u, depth + 1u); else { c.pc = 0x00180880u; return; } if (c.pc != 0x001B85DCu) [[unlikely]] return; }
L_001B85DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_001B8644; } }
L_001B85EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B8610; } }
    st32((c.r[16].w[0] + 104u), c.r[6].w[0]);
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_001B8644; } }
L_001B8610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8618u);  if (depth < kMaxDepth) unit_0018(c, 82u, depth + 1u); else { c.pc = 0x001808E0u; return; } if (c.pc != 0x001B8618u) [[unlikely]] return; }
L_001B8618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B8644; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_001B8644; } }
L_001B862C:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { st32((c.r[16].w[0] + 104u), 0u);  goto L_001B8640; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_001B8644; } }
L_001B8640:
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 1;
L_001B8644:
    set32(c.r[3], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 1;
L_001B8648:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  goto L_001B89FC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 9840u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001B8000u < 16384u) { entry = entries_0026[(t - 0x001B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001B8670:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B89F8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 17u);
    st32((c.r[16].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 120u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 124u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 132u), c.r[4].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B86B8u); st32((c.r[16].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x001B86B8u) [[unlikely]] return; }
L_001B86B8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B86C8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 182u, depth + 1u); else { c.pc = 0x001B95A0u; return; } if (c.pc != 0x001B86C8u) [[unlikely]] return; }
L_001B86C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 127u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B86E8u); set32(c.r[4], c.r[3].w[0] + 88u);  if (depth < kMaxDepth) unit_0023(c, 218u, depth + 1u); else { c.pc = 0x001AECF0u; return; } if (c.pc != 0x001B86E8u) [[unlikely]] return; }
L_001B86E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B86F0u);  if (depth < kMaxDepth) unit_0010(c, 62u, depth + 1u); else { c.pc = 0x00160A40u; return; } if (c.pc != 0x001B86F0u) [[unlikely]] return; }
L_001B86F0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8700u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 182u, depth + 1u); else { c.pc = 0x001B95A0u; return; } if (c.pc != 0x001B8700u) [[unlikely]] return; }
L_001B8700:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001B8714; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B872C; } }
L_001B8714:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 6;
L_001B872C:
    c.f[1] = ld32((c.r[28].w[0] - 32664u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001B875C; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x001E0000u);  if (t) { goto L_001B8774; } }
L_001B875C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.budget -= 6;
L_001B8774:
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[6].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 112u)));  if (t) { goto L_001B878C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x001E0000u);  if (t) { goto L_001B8790; } }
L_001B878C:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_001B8790:
    set32(c.r[4], c.r[2].w[0] + 88u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B87A4u); set32(c.r[9], 0u + 126u);  if (depth < kMaxDepth) unit_0023(c, 218u, depth + 1u); else { c.pc = 0x001AECF0u; return; } if (c.pc != 0x001B87A4u) [[unlikely]] return; }
L_001B87A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B87ACu);  if (depth < kMaxDepth) unit_0013(c, 316u, depth + 1u); else { c.pc = 0x0016F550u; return; } if (c.pc != 0x001B87ACu) [[unlikely]] return; }
L_001B87AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B87BCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 182u, depth + 1u); else { c.pc = 0x001B95A0u; return; } if (c.pc != 0x001B87BCu) [[unlikely]] return; }
L_001B87BC:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001B87D0; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B87E8; } }
L_001B87D0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 6;
L_001B87E8:
    c.f[1] = ld32((c.r[28].w[0] - 32664u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001B8818; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x001E0000u);  if (t) { goto L_001B8830; } }
L_001B8818:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.budget -= 6;
L_001B8830:
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[6].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 112u)));  if (t) { goto L_001B8848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x001E0000u);  if (t) { goto L_001B884C; } }
L_001B8848:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_001B884C:
    set32(c.r[4], c.r[2].w[0] + 88u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8860u); set32(c.r[9], 0u + 124u);  if (depth < kMaxDepth) unit_0023(c, 218u, depth + 1u); else { c.pc = 0x001AECF0u; return; } if (c.pc != 0x001B8860u) [[unlikely]] return; }
L_001B8860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8868u);  if (depth < kMaxDepth) unit_0024(c, 344u, depth + 1u); else { c.pc = 0x001B2780u; return; } if (c.pc != 0x001B8868u) [[unlikely]] return; }
L_001B8868:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8878u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 182u, depth + 1u); else { c.pc = 0x001B95A0u; return; } if (c.pc != 0x001B8878u) [[unlikely]] return; }
L_001B8878:
    set32(c.r[6], c.r[2].w[0] >> 1);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 123u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8898u); set32(c.r[4], c.r[2].w[0] + 88u);  if (depth < kMaxDepth) unit_0023(c, 218u, depth + 1u); else { c.pc = 0x001AECF0u; return; } if (c.pc != 0x001B8898u) [[unlikely]] return; }
L_001B8898:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 2;
L_001B88A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B88B4u); set32(c.r[5], c.r[16].w[0] + 116u);  if (depth < kMaxDepth) unit_0022(c, 375u, depth + 1u); else { c.pc = 0x001ABAF0u; return; } if (c.pc != 0x001B88B4u) [[unlikely]] return; }
L_001B88B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B89F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B88CCu); set32(c.r[5], ld32((c.r[16].w[0] + 196u)));  if (depth < kMaxDepth) unit_0022(c, 401u, depth + 1u); else { c.pc = 0x001ABEB0u; return; } if (c.pc != 0x001B88CCu) [[unlikely]] return; }
L_001B88CC:
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 188u), c.r[3].w[0]);
    c.budget -= 2;
L_001B88D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B89F8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B89F8; } }
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 208u), 0u);  goto L_001B891C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8918u);  if (depth < kMaxDepth) unit_003E(c, 134u, depth + 1u); else { c.pc = 0x00219300u; return; } if (c.pc != 0x001B8918u) [[unlikely]] return; }
L_001B8918:
    st32((c.r[16].w[0] + 208u), 0u);
    c.budget -= 1;
L_001B891C:
    st32((c.r[16].w[0] + 212u), 0u);
    st32((c.r[16].w[0] + 216u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8934u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 403u, depth + 1u); else { c.pc = 0x001ABEE0u; return; } if (c.pc != 0x001B8934u) [[unlikely]] return; }
L_001B8934:
    set32(c.r[4], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_001B89C8; }
    c.f[1] = ld32((c.r[16].w[0] + 208u));
    c.f[0] = ld32((c.r[16].w[0] + 216u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8950u); c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x001B8950u) [[unlikely]] return; }
L_001B8950:
    c.f[2] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 208u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 208u), c.f[1]);  if (t) { goto L_001B897C; } }
    st32((c.r[16].w[0] + 208u), c.f[0]);
    c.budget -= 1;
L_001B897C:
    c.f[1] = ld32((c.r[16].w[0] + 208u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC4700000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = ld32((c.r[16].w[0] + 208u));  goto L_001B89A0; }
    st32((c.r[16].w[0] + 208u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 208u));
    c.budget -= 2;
L_001B89A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B89A8u);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x001B89A8u) [[unlikely]] return; }
L_001B89A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B89B8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 403u, depth + 1u); else { c.pc = 0x001ABEE0u; return; } if (c.pc != 0x001B89B8u) [[unlikely]] return; }
L_001B89B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 4;
L_001B89C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 5u);  goto L_001B89F4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B89F8; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_001B89F4:
    st32((c.r[16].w[0] + 188u), c.r[3].w[0]);
    c.budget -= 1;
L_001B89F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 1;
L_001B89FC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 80u)));  goto L_001B8E30; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B8A14; } }
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 1;
L_001B8A14:
    set32(c.r[18], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8E30; } }
L_001B8A20:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[18], ld32((c.r[18].w[0] + 76u)));  goto L_001B8E30; }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 28u)));  goto L_001B8E14; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 9792u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001B8000u < 16384u) { entry = entries_0026[(t - 0x001B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001B8A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8A60u); set32(c.r[4], ld32((c.r[18].w[0] + 16u)));  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x001B8A60u) [[unlikely]] return; }
L_001B8A60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 16u)));  goto L_001B8A7C; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8A74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 281u, depth + 1u); else { c.pc = 0x001BA400u; return; } if (c.pc != 0x001B8A74u) [[unlikely]] return; }
L_001B8A74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8E10; } }
L_001B8A7C:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001B8A94; }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_001B8A94:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B8E10; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 16u)));  goto L_001B8AB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8AB0u);  if (depth < kMaxDepth) unit_000C(c, 133u, depth + 1u); else { c.pc = 0x00151BB0u; return; } if (c.pc != 0x001B8AB0u) [[unlikely]] return; }
L_001B8AB0:
    st32((c.r[18].w[0] + 68u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 2;
L_001B8AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8AC0u);  if (depth < kMaxDepth) unit_0018(c, 116u, depth + 1u); else { c.pc = 0x00180DD0u; return; } if (c.pc != 0x001B8AC0u) [[unlikely]] return; }
L_001B8AC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001B8ADC; } }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8AD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 281u, depth + 1u); else { c.pc = 0x001BA400u; return; } if (c.pc != 0x001B8AD4u) [[unlikely]] return; }
L_001B8AD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8E10; } }
L_001B8ADC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_001B8E10; } }
L_001B8AE8:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8AF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 408u, depth + 1u); else { c.pc = 0x001B2F10u; return; } if (c.pc != 0x001B8AF4u) [[unlikely]] return; }
L_001B8AF4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001B8E10; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8B10u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x00180D40u; return; } if (c.pc != 0x001B8B10u) [[unlikely]] return; }
L_001B8B10:
    set32(c.r[2], 0u + 3u);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_001B8B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8B20u); set32(c.r[4], ld32((c.r[18].w[0] + 16u)));  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x001B8B20u) [[unlikely]] return; }
L_001B8B20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 16u)));  goto L_001B8B3C; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8B34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 281u, depth + 1u); else { c.pc = 0x001BA400u; return; } if (c.pc != 0x001B8B34u) [[unlikely]] return; }
L_001B8B34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8E10; } }
L_001B8B3C:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001B8B54; }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_001B8B54:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B8E10; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 16u), 0u);  goto L_001B8B78; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8B74u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B8B74u) [[unlikely]] return; }
L_001B8B74:
    st32((c.r[18].w[0] + 16u), 0u);
    c.budget -= 1;
L_001B8B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8B80u); set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  if (depth < kMaxDepth) unit_000C(c, 123u, depth + 1u); else { c.pc = 0x001519E0u; return; } if (c.pc != 0x001B8B80u) [[unlikely]] return; }
L_001B8B80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_001B8B9C; } }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8B94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 281u, depth + 1u); else { c.pc = 0x001BA400u; return; } if (c.pc != 0x001B8B94u) [[unlikely]] return; }
L_001B8B94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8E10; } }
L_001B8B9C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8BACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 137u, depth + 1u); else { c.pc = 0x00151C30u; return; } if (c.pc != 0x001B8BACu) [[unlikely]] return; }
L_001B8BAC:
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_001B8BB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8BBCu); set32(c.r[4], ld32((c.r[18].w[0] + 68u)));  if (depth < kMaxDepth) unit_000C(c, 140u, depth + 1u); else { c.pc = 0x00151CC0u; return; } if (c.pc != 0x001B8BBCu) [[unlikely]] return; }
L_001B8BBC:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 68u)));  goto L_001B8BDC; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8BD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 281u, depth + 1u); else { c.pc = 0x001BA400u; return; } if (c.pc != 0x001B8BD4u) [[unlikely]] return; }
L_001B8BD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8E10; } }
L_001B8BDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8BE4u);  if (depth < kMaxDepth) unit_000C(c, 140u, depth + 1u); else { c.pc = 0x00151CC0u; return; } if (c.pc != 0x001B8BE4u) [[unlikely]] return; }
L_001B8BE4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B8E10; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8C00u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_000B(c, 305u, depth + 1u); else { c.pc = 0x0014FFD0u; return; } if (c.pc != 0x001B8C00u) [[unlikely]] return; }
L_001B8C00:
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8C0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 142u, depth + 1u); else { c.pc = 0x00151CF0u; return; } if (c.pc != 0x001B8C0Cu) [[unlikely]] return; }
L_001B8C0C:
    set32(c.r[2], 0u + 5u);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_001B8C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8C1Cu); set32(c.r[4], ld32((c.r[18].w[0] + 68u)));  if (depth < kMaxDepth) unit_000C(c, 144u, depth + 1u); else { c.pc = 0x00151D50u; return; } if (c.pc != 0x001B8C1Cu) [[unlikely]] return; }
L_001B8C1C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 68u)));  goto L_001B8C3C; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8C34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 281u, depth + 1u); else { c.pc = 0x001BA400u; return; } if (c.pc != 0x001B8C34u) [[unlikely]] return; }
L_001B8C34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8E10; } }
L_001B8C3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8C44u);  if (depth < kMaxDepth) unit_000C(c, 144u, depth + 1u); else { c.pc = 0x00151D50u; return; } if (c.pc != 0x001B8C44u) [[unlikely]] return; }
L_001B8C44:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B8E10; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8C5Cu); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_000C(c, 5u, depth + 1u); else { c.pc = 0x00150090u; return; } if (c.pc != 0x001B8C5Cu) [[unlikely]] return; }
L_001B8C5C:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8C74u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 9u, depth + 1u); else { c.pc = 0x00150150u; return; } if (c.pc != 0x001B8C74u) [[unlikely]] return; }
L_001B8C74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8C7Cu); set32(c.r[4], ld32((c.r[18].w[0] + 68u)));  if (depth < kMaxDepth) unit_000C(c, 131u, depth + 1u); else { c.pc = 0x00151B70u; return; } if (c.pc != 0x001B8C7Cu) [[unlikely]] return; }
L_001B8C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8C84u); set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x001B8C84u) [[unlikely]] return; }
L_001B8C84:
    st32((c.r[18].w[0] + 20u), 0u);
    set32(c.r[3], 0u + 6u);
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 3;
L_001B8C90:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B8E10; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8CACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 11u, depth + 1u); else { c.pc = 0x001501C0u; return; } if (c.pc != 0x001B8CACu) [[unlikely]] return; }
L_001B8CAC:
    set32(c.r[17], ld32((c.r[28].w[0] - 30604u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], 0u + 7u);  goto L_001B8D0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001B8CFC; } }
L_001B8CC0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[17], c.r[17].w[0] + 20u);  goto L_001B8CFC; }
    c.f[1] = ld32((c.r[16].w[0] + 220u));
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8CDCu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 23u, depth + 1u); else { c.pc = 0x001504B0u; return; } if (c.pc != 0x001B8CDCu) [[unlikely]] return; }
L_001B8CDC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 16u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 17u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8CF4u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_000D(c, 47u, depth + 1u); else { c.pc = 0x00154670u; return; } if (c.pc != 0x001B8CF4u) [[unlikely]] return; }
L_001B8CF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8D08; } }
L_001B8CFC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B8CC0u | kUnwind; return; } goto L_001B8CC0; }
L_001B8D08:
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_001B8D0C:
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 32u), 0u);
    c.budget -= 2;
L_001B8D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8D1Cu); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_000C(c, 19u, depth + 1u); else { c.pc = 0x001503B0u; return; } if (c.pc != 0x001B8D1Cu) [[unlikely]] return; }
L_001B8D1C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001B8E10; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B8E10; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 220u));  goto L_001B8DB0; }
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8D54u); c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x001B8D54u) [[unlikely]] return; }
L_001B8D54:
    c.f[2] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[18].w[0] + 48u), c.f[1]);  if (t) { goto L_001B8D84; } }
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.budget -= 1;
L_001B8D84:
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[18].w[0] + 52u)));  goto L_001B8DA4; }
    st32((c.r[18].w[0] + 48u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 2;
L_001B8DA4:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 220u));
    c.budget -= 3;
L_001B8DB0:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8DC0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 23u, depth + 1u); else { c.pc = 0x001504B0u; return; } if (c.pc != 0x001B8DC0u) [[unlikely]] return; }
L_001B8DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8DC8u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00150290u; return; } if (c.pc != 0x001B8DC8u) [[unlikely]] return; }
L_001B8DC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B8E10; } }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8DDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 281u, depth + 1u); else { c.pc = 0x001BA400u; return; } if (c.pc != 0x001B8DDCu) [[unlikely]] return; }
L_001B8DDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8E10; } }
L_001B8DE4:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B8E10; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 9u);  goto L_001B8E0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8E04u);  if (depth < kMaxDepth) unit_000C(c, 133u, depth + 1u); else { c.pc = 0x00151BB0u; return; } if (c.pc != 0x001B8E04u) [[unlikely]] return; }
L_001B8E04:
    st32((c.r[18].w[0] + 68u), 0u);
    set32(c.r[3], 0u + 9u);
    c.budget -= 2;
L_001B8E0C:
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 1;
L_001B8E10:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_001B8E14:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B8E2C; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B8E2C; } }
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 1;
L_001B8E2C:
    set32(c.r[18], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_001B8E30:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B8A20u | kUnwind; return; } goto L_001B8A20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 80u)));  if (t) { goto L_001B9094; } }
L_001B8E40:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[17], ld32((c.r[17].w[0] + 76u)));  goto L_001B9094; }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 28u)));  goto L_001B9084; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 9744u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001B8000u < 16384u) { entry = entries_0026[(t - 0x001B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001B8E78:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_001B9080; } }
L_001B8E84:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 3u);  goto L_001B8EA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8E98u);  if (depth < kMaxDepth) unit_000C(c, 133u, depth + 1u); else { c.pc = 0x00151BB0u; return; } if (c.pc != 0x001B8E98u) [[unlikely]] return; }
L_001B8E98:
    st32((c.r[17].w[0] + 68u), 0u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 2;
L_001B8EA0:
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_001B9080; } }
L_001B8EAC:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B9080; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8EC4u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_000C(c, 123u, depth + 1u); else { c.pc = 0x001519E0u; return; } if (c.pc != 0x001B8EC4u) [[unlikely]] return; }
L_001B8EC4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_001B8ED8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 28u), 0u);  if (t) { goto L_001B9080; } }
L_001B8ED8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8EE4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 137u, depth + 1u); else { c.pc = 0x00151C30u; return; } if (c.pc != 0x001B8EE4u) [[unlikely]] return; }
L_001B8EE4:
    set32(c.r[2], 0u + 4u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_001B8EEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8EF4u); set32(c.r[4], ld32((c.r[17].w[0] + 68u)));  if (depth < kMaxDepth) unit_000C(c, 140u, depth + 1u); else { c.pc = 0x00151CC0u; return; } if (c.pc != 0x001B8EF4u) [[unlikely]] return; }
L_001B8EF4:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 68u)));  goto L_001B8F10; }
    set32(c.r[3], 0u + 7u);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_001B9080; } }
L_001B8F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8F18u);  if (depth < kMaxDepth) unit_000C(c, 140u, depth + 1u); else { c.pc = 0x00151CC0u; return; } if (c.pc != 0x001B8F18u) [[unlikely]] return; }
L_001B8F18:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B9080; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8F30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 142u, depth + 1u); else { c.pc = 0x00151CF0u; return; } if (c.pc != 0x001B8F30u) [[unlikely]] return; }
L_001B8F30:
    set32(c.r[2], 0u + 5u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_001B8F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8F40u); set32(c.r[4], ld32((c.r[17].w[0] + 68u)));  if (depth < kMaxDepth) unit_000C(c, 144u, depth + 1u); else { c.pc = 0x00151D50u; return; } if (c.pc != 0x001B8F40u) [[unlikely]] return; }
L_001B8F40:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 68u)));  goto L_001B8F5C; }
    set32(c.r[3], 0u + 7u);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_001B9080; } }
L_001B8F5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8F64u);  if (depth < kMaxDepth) unit_000C(c, 144u, depth + 1u); else { c.pc = 0x00151D50u; return; } if (c.pc != 0x001B8F64u) [[unlikely]] return; }
L_001B8F64:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B9080; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8F78u); set32(c.r[4], ld32((c.r[17].w[0] + 68u)));  if (depth < kMaxDepth) unit_000C(c, 131u, depth + 1u); else { c.pc = 0x00151B70u; return; } if (c.pc != 0x001B8F78u) [[unlikely]] return; }
L_001B8F78:
    set32(c.r[3], 0u + 6u);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_001B9080; } }
L_001B8F88:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B9080; } }
    set32(c.r[3], 0u + 7u);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_001B9080; } }
L_001B8FA4:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B9080; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[16].w[0] + 80u)));  if (t) { goto L_001B8FE4; } }
L_001B8FB8:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[18], ld32((c.r[18].w[0] + 76u)));  goto L_001B8FE4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B8FE0; } }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8FE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 317u, depth + 1u); else { c.pc = 0x001BA980u; return; } if (c.pc != 0x001B8FE0u) [[unlikely]] return; }
L_001B8FE0:
    set32(c.r[18], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_001B8FE4:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B8FB8u | kUnwind; return; } goto L_001B8FB8; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_001B9080; } }
L_001B8FF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[16].w[0] + 80u)));  if (t) { goto L_001B9050; } }
L_001B9000:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[18], ld32((c.r[18].w[0] + 76u)));  goto L_001B9050; }
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B904C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9024u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_000C(c, 19u, depth + 1u); else { c.pc = 0x001503B0u; return; } if (c.pc != 0x001B9024u) [[unlikely]] return; }
L_001B9024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B9090; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9038u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_000C(c, 7u, depth + 1u); else { c.pc = 0x001500F0u; return; } if (c.pc != 0x001B9038u) [[unlikely]] return; }
L_001B9038:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9048u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 3u, depth + 1u); else { c.pc = 0x00150030u; return; } if (c.pc != 0x001B9048u) [[unlikely]] return; }
L_001B9048:
    st32((c.r[18].w[0] + 68u), 0u);
    c.budget -= 1;
L_001B904C:
    set32(c.r[18], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_001B9050:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B9000u | kUnwind; return; } goto L_001B9000; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9060u); set32(c.r[4], ld32((c.r[17].w[0] + 68u)));  if (depth < kMaxDepth) unit_000C(c, 131u, depth + 1u); else { c.pc = 0x00151B70u; return; } if (c.pc != 0x001B9060u) [[unlikely]] return; }
L_001B9060:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 40u), 0u);  goto L_001B907C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9074u);  if (depth < kMaxDepth) unit_000C(c, 133u, depth + 1u); else { c.pc = 0x00151BB0u; return; } if (c.pc != 0x001B9074u) [[unlikely]] return; }
L_001B9074:
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 40u), 0u);
    c.budget -= 2;
L_001B907C:
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 1;
L_001B9080:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_001B9084:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B9090; } }
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 1;
L_001B9090:
    set32(c.r[17], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_001B9094:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B8E40u | kUnwind; return; } goto L_001B8E40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 80u)));  if (t) { goto L_001B92A8; } }
L_001B90A4:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[17], ld32((c.r[17].w[0] + 76u)));  goto L_001B92A8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_001B91B0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 32u)));  goto L_001B90DC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 28u)));  goto L_001B9298; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B9294; } }
L_001B90DC:
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B9294; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B90F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 309u, depth + 1u); else { c.pc = 0x001BA850u; return; } if (c.pc != 0x001B90F4u) [[unlikely]] return; }
L_001B90F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B92A4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  goto L_001B913C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9110u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_000C(c, 19u, depth + 1u); else { c.pc = 0x001503B0u; return; } if (c.pc != 0x001B9110u) [[unlikely]] return; }
L_001B9110:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B9294; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9124u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_000C(c, 7u, depth + 1u); else { c.pc = 0x001500F0u; return; } if (c.pc != 0x001B9124u) [[unlikely]] return; }
L_001B9124:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9134u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 3u, depth + 1u); else { c.pc = 0x00150030u; return; } if (c.pc != 0x001B9134u) [[unlikely]] return; }
L_001B9134:
    st32((c.r[17].w[0] + 68u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 2;
L_001B913C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9144u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x001B9540u; return; } if (c.pc != 0x001B9144u) [[unlikely]] return; }
L_001B9144:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9158u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 305u, depth + 1u); else { c.pc = 0x0014FFD0u; return; } if (c.pc != 0x001B9158u) [[unlikely]] return; }
L_001B9158:
    set32(c.r[5], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9164u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_000C(c, 5u, depth + 1u); else { c.pc = 0x00150090u; return; } if (c.pc != 0x001B9164u) [[unlikely]] return; }
L_001B9164:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = ld8((c.r[17].w[0] + 44u));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B917Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 9u, depth + 1u); else { c.pc = 0x00150150u; return; } if (c.pc != 0x001B917Cu) [[unlikely]] return; }
L_001B917C:
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[17].w[0] + 48u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9190u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_000C(c, 23u, depth + 1u); else { c.pc = 0x001504B0u; return; } if (c.pc != 0x001B9190u) [[unlikely]] return; }
L_001B9190:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B91A0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 11u, depth + 1u); else { c.pc = 0x001501C0u; return; } if (c.pc != 0x001B91A0u) [[unlikely]] return; }
L_001B91A0:
    set32(c.r[3], 0u + 2u);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_001B9294; } }
L_001B91B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B91B8u);  if (depth < kMaxDepth) unit_000C(c, 19u, depth + 1u); else { c.pc = 0x001503B0u; return; } if (c.pc != 0x001B91B8u) [[unlikely]] return; }
L_001B91B8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001B9294; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B9294; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_001B924C; }
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B91F0u); c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x001B91F0u) [[unlikely]] return; }
L_001B91F0:
    c.f[2] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 48u), c.f[1]);  if (t) { goto L_001B9220; } }
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.budget -= 1;
L_001B9220:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  goto L_001B9240; }
    st32((c.r[17].w[0] + 48u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 2;
L_001B9240:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
L_001B924C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9254u); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000C(c, 23u, depth + 1u); else { c.pc = 0x001504B0u; return; } if (c.pc != 0x001B9254u) [[unlikely]] return; }
L_001B9254:
    c.f[12] = ld32((c.r[17].w[0] + 60u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9260u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00150510u; return; } if (c.pc != 0x001B9260u) [[unlikely]] return; }
L_001B9260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9268u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_000C(c, 19u, depth + 1u); else { c.pc = 0x001503B0u; return; } if (c.pc != 0x001B9268u) [[unlikely]] return; }
L_001B9268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B9294; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B927Cu); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_000C(c, 7u, depth + 1u); else { c.pc = 0x001500F0u; return; } if (c.pc != 0x001B927Cu) [[unlikely]] return; }
L_001B927C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B928Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 3u, depth + 1u); else { c.pc = 0x00150030u; return; } if (c.pc != 0x001B928Cu) [[unlikely]] return; }
L_001B928C:
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 2;
L_001B9294:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_001B9298:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B92A4; } }
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 1;
L_001B92A4:
    set32(c.r[17], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_001B92A8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B90A4u | kUnwind; return; } goto L_001B90A4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001B92B4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B92D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 5u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 112u)));  goto L_001B9300; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001B92FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001B9340; } }
L_001B92FC:
    set32(c.r[5], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 1;
L_001B9300:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001B933C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B933C; } }
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B933C; } }
    set32(c.r[25], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B933Cu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B933Cu) [[unlikely]] return; }
L_001B933C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B9340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B9350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 80u)));  if (t) { goto L_001B9368; } }
L_001B9358:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 4;
L_001B9368:
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B9358u | kUnwind; return; } goto L_001B9358; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B9380:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001B9498; } }
L_001B93C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_001B948C; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001B948C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[20].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  goto L_001B9464; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[20].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 68u)));  goto L_001B9454; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[20].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 28u)));  goto L_001B9434; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[20].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_001B940C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B948C; } }
L_001B940C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9414u);  if (depth < kMaxDepth) unit_000D(c, 133u, depth + 1u); else { c.pc = 0x001556B0u; return; } if (c.pc != 0x001B9414u) [[unlikely]] return; }
L_001B9414:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[16].d[0] = c.r[17].d[0] + 0ull;  goto L_001B948C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B948C; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B948C; } }
L_001B9434:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = c.r[17].d[0] + 0ull;  goto L_001B948C; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B948C; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B948C; } }
L_001B9454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B948C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B948C; } }
L_001B9464:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  goto L_001B9474; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B948C; } }
L_001B9474:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_001B948C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_001B948C; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B948C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001B9518; }
    set32(c.r[17], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_001B9498:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B93C4u | kUnwind; return; } goto L_001B93C4; }
    set32(c.r[7], ld32((c.r[21].w[0] + 80u)));
    set32(c.r[6], 0u + 4u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_001B950C; } }
L_001B94B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_001B9500; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001B9500; } }
    c.budget -= 2;
    if (c.r[20].d[0] == c.r[6].d[0]) { set32(c.r[2], ld32((c.r[7].w[0] + 64u)));  goto L_001B94F0; }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[5].d[0];  if (t) { goto L_001B9500; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[4].d[0];  if (t) { goto L_001B9500; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_001B9500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B9500; } }
L_001B94F0:
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001B9500; } }
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_001B9500:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001B9514; } }
    set32(c.r[7], ld32((c.r[7].w[0] + 76u)));
    c.budget -= 1;
L_001B950C:
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[2], ld32((c.r[7].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B94B8u | kUnwind; return; } goto L_001B94B8; }
L_001B9514:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B9518:
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
L_001B9540:
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B956C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B9564; } }
L_001B9554:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  goto L_001B9564; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B956C; } }
L_001B9564:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B9554u | kUnwind; return; } goto L_001B9554; }
L_001B956C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B9580:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_001B95A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B95B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 252u, depth + 1u); else { c.pc = 0x001721D0u; return; } if (c.pc != 0x001B95B8u) [[unlikely]] return; }
L_001B95B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B95D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001B95F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B9610; } }
L_001B95F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53440000u);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9600u); c.r[4].d[0] = c.r[2].d[0] | 16968ull;  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x001B9600u) [[unlikely]] return; }
L_001B9600:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  goto L_001B9610; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B9610; } }
L_001B9610:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B9630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B9664; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 16u), 0u);  goto L_001B9664; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9660u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B9660u) [[unlikely]] return; }
L_001B9660:
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 1;
L_001B9664:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_001B9680; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9678u);  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x001B9678u) [[unlikely]] return; }
L_001B9678:
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 2;
L_001B9680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9688u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 13u, depth + 1u); else { c.pc = 0x00150230u; return; } if (c.pc != 0x001B9688u) [[unlikely]] return; }
L_001B9688:
    set32(c.r[3], 0u + 8u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B96B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001B97FC; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001B9750; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[16], ld32((c.r[19].w[0] + 80u)));  goto L_001B975C; }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[5].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001B9740; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { c.r[1].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;  goto L_001B9714; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B9800; } }
L_001B9714:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B97FC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull | 48000ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9730u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 124u, depth + 1u); else { c.pc = 0x00155460u; return; } if (c.pc != 0x001B9730u) [[unlikely]] return; }
L_001B9730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9738u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 141u, depth + 1u); else { c.pc = 0x00155810u; return; } if (c.pc != 0x001B9738u) [[unlikely]] return; }
L_001B9738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B9758; } }
L_001B9740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9748u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 302u, depth + 1u); else { c.pc = 0x0014FF00u; return; } if (c.pc != 0x001B9748u) [[unlikely]] return; }
L_001B9748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B9758; } }
L_001B9750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9758u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 302u, depth + 1u); else { c.pc = 0x0014FF00u; return; } if (c.pc != 0x001B9758u) [[unlikely]] return; }
L_001B9758:
    set32(c.r[16], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 1;
L_001B975C:
    set32(c.r[4], 0u + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9768u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x001B9768u) [[unlikely]] return; }
L_001B9768:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], 0u - 1u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 76u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 44u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 68u), 0u);
    st32((c.r[2].w[0] + 72u), 0u);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 52u), 0u);
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 64u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 25;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_001B97DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_001B97F4; } }
L_001B97D4:
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_001B97DC:
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B97D4u | kUnwind; return; } goto L_001B97D4; } }
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 1;
L_001B97F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B9800; } }
L_001B97FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B9800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B9820:
    st32((c.r[4].w[0] + 84u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    st32((c.r[4].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 104u), 0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 72u), 0u);  c.pc = t; return; }
L_001B9850:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 76u), c.r[5].w[0]);  c.pc = t; return; }
L_001B9860:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B98A8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0026(c, 175u, depth + 1u); else { c.pc = 0x001B9380u; return; } if (c.pc != 0x001B98A8u) [[unlikely]] return; }
L_001B98A8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B98F8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B98C8u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 127u, depth + 1u); else { c.pc = 0x00155540u; return; } if (c.pc != 0x001B98C8u) [[unlikely]] return; }
L_001B98C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B98F4; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001B98E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B98E0u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_000D(c, 137u, depth + 1u); else { c.pc = 0x00155770u; return; } if (c.pc != 0x001B98E0u) [[unlikely]] return; }
L_001B98E0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_001B98E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B98ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x001B9580u; return; } if (c.pc != 0x001B98ECu) [[unlikely]] return; }
L_001B98EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_001B98FC; } }
L_001B98F4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B98F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001B98FC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001B9920:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x414C0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9950u); c.r[4].d[0] = c.r[2].d[0] | 21332ull;  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00182360u; return; } if (c.pc != 0x001B9950u) [[unlikely]] return; }
L_001B9950:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_001B997C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B997Cu); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0026(c, 207u, depth + 1u); else { c.pc = 0x001B99A0u; return; } if (c.pc != 0x001B997Cu) [[unlikely]] return; }
L_001B997C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B99A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001B9A44; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[7].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[6].w[0] << 2);  goto L_001B99D4; }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[8].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_001B9A48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001B9A48; } }
L_001B99D4:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[8].d[0] != c.r[2].d[0]) { set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));  goto L_001B99EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001B9A48; } }
L_001B99EC:
    c.budget -= 2;
    if (c.r[7].sd[0] >= 0) { set32(c.r[2], c.r[6].w[0] + c.r[9].w[0]);  goto L_001B9A00; }
    set32(c.r[2], c.r[7].w[0] + 1u);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[6].w[0] + c.r[9].w[0]);
    c.budget -= 3;
L_001B9A00:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[3].d[0] < c.r[8].d[0] ? 1ull : 0ull;  goto L_001B9A28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9A20u); c.r[7].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 207u, depth + 1u); else { c.pc = 0x001B99A0u; return; } if (c.pc != 0x001B9A20u) [[unlikely]] return; }
L_001B9A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001B9A4C; } }
L_001B9A28:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B9A3C; } }
    set32(c.r[7], c.r[7].w[0] - c.r[9].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9A3Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 207u, depth + 1u); else { c.pc = 0x001B99A0u; return; } if (c.pc != 0x001B9A3Cu) [[unlikely]] return; }
L_001B9A3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B9A48; } }
L_001B9A44:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001B9A48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B9A4C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B9A60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B9B28; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B9B2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9AA0u);  if (depth < kMaxDepth) unit_0018(c, 82u, depth + 1u); else { c.pc = 0x001808E0u; return; } if (c.pc != 0x001B9AA0u) [[unlikely]] return; }
L_001B9AA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B9B28; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9AB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 204u, depth + 1u); else { c.pc = 0x001B9920u; return; } if (c.pc != 0x001B9AB4u) [[unlikely]] return; }
L_001B9AB4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_001B9B28; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9AD8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 175u, depth + 1u); else { c.pc = 0x001B9380u; return; } if (c.pc != 0x001B9AD8u) [[unlikely]] return; }
L_001B9AD8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001B9B28; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9AFCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 129u, depth + 1u); else { c.pc = 0x001555D0u; return; } if (c.pc != 0x001B9AFCu) [[unlikely]] return; }
L_001B9AFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B9B28; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001B9B18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9B14u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_000D(c, 137u, depth + 1u); else { c.pc = 0x00155770u; return; } if (c.pc != 0x001B9B14u) [[unlikely]] return; }
L_001B9B14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B9B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9B20u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x001B9580u; return; } if (c.pc != 0x001B9B20u) [[unlikely]] return; }
L_001B9B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001B9B30; } }
L_001B9B28:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B9B2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001B9B30:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B9B50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9B60u);  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x001B9540u; return; } if (c.pc != 0x001B9B60u) [[unlikely]] return; }
L_001B9B60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001B9B84; }
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B9B80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9B80u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_000D(c, 131u, depth + 1u); else { c.pc = 0x00155660u; return; } if (c.pc != 0x001B9B80u) [[unlikely]] return; }
L_001B9B80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B9B84:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B9B90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9BA4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x001B9540u; return; } if (c.pc != 0x001B9BA4u) [[unlikely]] return; }
L_001B9BA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001B9BE0; }
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B9BDC; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  goto L_001B9BD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9BCCu); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_000D(c, 137u, depth + 1u); else { c.pc = 0x00155770u; return; } if (c.pc != 0x001B9BCCu) [[unlikely]] return; }
L_001B9BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B9BDC; } }
L_001B9BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9BDCu);  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001557C0u; return; } if (c.pc != 0x001B9BDCu) [[unlikely]] return; }
L_001B9BDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001B9BE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B9BF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9C00u);  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x001B9540u; return; } if (c.pc != 0x001B9C00u) [[unlikely]] return; }
L_001B9C00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B9C38; }
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B9C34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9C20u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_000D(c, 133u, depth + 1u); else { c.pc = 0x001556B0u; return; } if (c.pc != 0x001B9C20u) [[unlikely]] return; }
L_001B9C20:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B9C34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B9C38; } }
L_001B9C34:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B9C38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B9C50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9C60u);  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x001B9540u; return; } if (c.pc != 0x001B9C60u) [[unlikely]] return; }
L_001B9C60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001B9CA4; }
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B9CA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9C80u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_000D(c, 133u, depth + 1u); else { c.pc = 0x001556B0u; return; } if (c.pc != 0x001B9C80u) [[unlikely]] return; }
L_001B9C80:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1u);  goto L_001B9CA4; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B9CA4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B9CA4; } }
L_001B9CA0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B9CA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B9CB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9CC4u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x001B9540u; return; } if (c.pc != 0x001B9CC4u) [[unlikely]] return; }
L_001B9CC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001B9D20; }
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B9D1C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B9CF8; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_001B9CF8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  goto L_001B9D14; }
    c.f[20] = c.f[0];
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 2;
L_001B9D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9D1Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000D(c, 135u, depth + 1u); else { c.pc = 0x00155710u; return; } if (c.pc != 0x001B9D1Cu) [[unlikely]] return; }
L_001B9D1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001B9D20:
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B9D30:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9D6Cu); c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 251u, depth + 1u); else { c.pc = 0x001B9F50u; return; } if (c.pc != 0x001B9D6Cu) [[unlikely]] return; }
L_001B9D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9D74u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001B9D74u) [[unlikely]] return; }
L_001B9D74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 112u), c.r[2].w[0]);  goto L_001B9D94; }
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9D90u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0021(c, 263u, depth + 1u); else { c.pc = 0x001A71B0u; return; } if (c.pc != 0x001B9D90u) [[unlikely]] return; }
L_001B9D90:
    st32((c.r[19].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 1;
L_001B9D94:
    set32(c.r[3], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 112u)));  goto L_001B9DD8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9DACu); set32(c.r[4], 0u + 268u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001B9DACu) [[unlikely]] return; }
L_001B9DAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 180u), c.r[2].w[0]);  goto L_001B9DC8; }
    set32(c.r[6], ld32((c.r[19].w[0] + 112u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9DC4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 110u, depth + 1u); else { c.pc = 0x00219020u; return; } if (c.pc != 0x001B9DC4u) [[unlikely]] return; }
L_001B9DC4:
    st32((c.r[19].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 1;
L_001B9DC8:
    set32(c.r[5], ld32((c.r[19].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9DD4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 124u, depth + 1u); else { c.pc = 0x002191A0u; return; } if (c.pc != 0x001B9DD4u) [[unlikely]] return; }
L_001B9DD4:
    set32(c.r[2], ld32((c.r[19].w[0] + 112u)));
    c.budget -= 1;
L_001B9DD8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9DE8u); set32(c.r[5], c.r[5].w[0] + 9864u);  if (depth < kMaxDepth) unit_0023(c, 124u, depth + 1u); else { c.pc = 0x001ACD80u; return; } if (c.pc != 0x001B9DE8u) [[unlikely]] return; }
L_001B9DE8:
    set32(c.r[2], ld32((c.r[19].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9DF4u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0022(c, 370u, depth + 1u); else { c.pc = 0x001ABA40u; return; } if (c.pc != 0x001B9DF4u) [[unlikely]] return; }
L_001B9DF4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 188u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 192u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 196u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 200u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9E10u); st32((c.r[19].w[0] + 204u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0024(c, 183u, depth + 1u); else { c.pc = 0x001B1510u; return; } if (c.pc != 0x001B9E10u) [[unlikely]] return; }
L_001B9E10:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9E1Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 256u, depth + 1u); else { c.pc = 0x001BA070u; return; } if (c.pc != 0x001B9E1Cu) [[unlikely]] return; }
L_001B9E1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001B9E50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 30612u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == 0ull; c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001B9EAC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30608u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001B9EB0; }
    st32((c.r[4].w[0] + 184u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001B9EA0; } }
L_001B9E80:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[7], c.r[7].w[0] + 12u);  goto L_001B9EA0; }
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9E98u); set32(c.r[5], ld32((c.r[28].w[0] - 30608u)));  if (depth < kMaxDepth) unit_0026(c, 233u, depth + 1u); else { c.pc = 0x001B9D30u; return; } if (c.pc != 0x001B9E98u) [[unlikely]] return; }
L_001B9E98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001B9EB4; } }
L_001B9EA0:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B9E80u | kUnwind; return; } goto L_001B9E80; } }
L_001B9EAC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B9EB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B9EB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B9EC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B9F30; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30612u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001B9F24; } }
L_001B9EEC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[16].d[0]) { set32(c.r[5], c.r[5].w[0] + 12u);  goto L_001B9F24; }
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 30608u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9F04u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0022(c, 354u, depth + 1u); else { c.pc = 0x001AB840u; return; } if (c.pc != 0x001B9F04u) [[unlikely]] return; }
L_001B9F04:
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001B9F34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9F18u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 124u, depth + 1u); else { c.pc = 0x002191A0u; return; } if (c.pc != 0x001B9F18u) [[unlikely]] return; }
L_001B9F18:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B9F34; } }
L_001B9F24:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B9EECu | kUnwind; return; } goto L_001B9EEC; } }
L_001B9F30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B9F34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B9F50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B9F80; } }
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9F7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B9F7Cu) [[unlikely]] return; }
L_001B9F7C:
    st32((c.r[16].w[0] + 112u), 0u);
    c.budget -= 1;
L_001B9F80:
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 188u), 0u);  goto L_001B9FA4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9F9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B9F9Cu) [[unlikely]] return; }
L_001B9F9C:
    st32((c.r[16].w[0] + 180u), 0u);
    st32((c.r[16].w[0] + 188u), 0u);
    c.budget -= 2;
L_001B9FA4:
    st32((c.r[16].w[0] + 196u), 0u);
    st32((c.r[16].w[0] + 200u), 0u);
    st32((c.r[16].w[0] + 204u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B9FC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 196u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001B9FE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9FE0u); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0022(c, 401u, depth + 1u); else { c.pc = 0x001ABEB0u; return; } if (c.pc != 0x001B9FE0u) [[unlikely]] return; }
L_001B9FE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B9FE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B9FF0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 200u), c.r[3].w[0]);  c.pc = t; return; }
L_001BA000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 200u), 0u);  c.pc = t; return; }
L_001BA010:
    set32(c.r[3], ld32((c.r[4].w[0] + 188u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_001BA028; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BA058; } }
L_001BA028:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001BA058; }
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BA054; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BA058; } }
L_001BA054:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BA058:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BA060:
    set32(c.r[2], ld32((c.r[4].w[0] + 188u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 5ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_001BA070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 10;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001BA100; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA0A0u);  if (depth < kMaxDepth) unit_0023(c, 138u, depth + 1u); else { c.pc = 0x001ACFB0u; return; } if (c.pc != 0x001BA0A0u) [[unlikely]] return; }
L_001BA0A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[5], c.r[29].w[0] + 44u);
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA0B4u); set32(c.r[6], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0015C5C0u; return; } if (c.pc != 0x001BA0B4u) [[unlikely]] return; }
L_001BA0B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA0BCu);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x001BA0BCu) [[unlikely]] return; }
L_001BA0BC:
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.f[12] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA0D8u);  if (depth < kMaxDepth) unit_0023(c, 135u, depth + 1u); else { c.pc = 0x001ACF70u; return; } if (c.pc != 0x001BA0D8u) [[unlikely]] return; }
L_001BA0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA0E0u);  if (depth < kMaxDepth) unit_0011(c, 73u, depth + 1u); else { c.pc = 0x001647C0u; return; } if (c.pc != 0x001BA0E0u) [[unlikely]] return; }
L_001BA0E0:
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.f[12] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA0FCu);  if (depth < kMaxDepth) unit_0023(c, 136u, depth + 1u); else { c.pc = 0x001ACF80u; return; } if (c.pc != 0x001BA0FCu) [[unlikely]] return; }
L_001BA0FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001BA100:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BA110:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 112u)));  c.pc = t; return; }
L_001BA120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BA1E0; } }
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);  goto L_001BA174; }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA15Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x001BA15Cu) [[unlikely]] return; }
L_001BA15C:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA16Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 403u, depth + 1u); else { c.pc = 0x001ABEE0u; return; } if (c.pc != 0x001BA16Cu) [[unlikely]] return; }
L_001BA16C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001BA1E4; } }
L_001BA174:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[12]);  if (t) { goto L_001BA194; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001BA1B0; } }
L_001BA194:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_001BA1B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[12] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA1D0u);  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x001BA1D0u) [[unlikely]] return; }
L_001BA1D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA1DCu); st32((c.r[17].w[0] + 212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x001BA1DCu) [[unlikely]] return; }
L_001BA1DC:
    st32((c.r[17].w[0] + 216u), c.f[0]);
    c.budget -= 1;
L_001BA1E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001BA1E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BA200:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001BA25C; } }
L_001BA24C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 76u)));  goto L_001BA25C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001BA264; } }
L_001BA25C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BA24Cu | kUnwind; return; } goto L_001BA24C; }
L_001BA264:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001BA328; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA278u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 186u, depth + 1u); else { c.pc = 0x001B9630u; return; } if (c.pc != 0x001BA278u) [[unlikely]] return; }
L_001BA278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA280u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001BA280u) [[unlikely]] return; }
L_001BA280:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  goto L_001BA2A0; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA29Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 87u, depth + 1u); else { c.pc = 0x001809E0u; return; } if (c.pc != 0x001BA29Cu) [[unlikely]] return; }
L_001BA29C:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 1;
L_001BA2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA2A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x001BA2A8u) [[unlikely]] return; }
L_001BA2A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  goto L_001BA2D8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 16u), 0u);  goto L_001BA324; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA2CCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BA2CCu) [[unlikely]] return; }
L_001BA2CC:
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BA324; } }
L_001BA2D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA2E0u);  if (depth < kMaxDepth) unit_0018(c, 108u, depth + 1u); else { c.pc = 0x00180D10u; return; } if (c.pc != 0x001BA2E0u) [[unlikely]] return; }
L_001BA2E0:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 36u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[22].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA31Cu); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x001B9580u; return; } if (c.pc != 0x001BA31Cu) [[unlikely]] return; }
L_001BA31C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_001BA32C; } }
L_001BA324:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BA328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_001BA32C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001BA350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[28].w[0] - 30604u)));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] == 0ull; c.r[10].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001BA3E4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30600u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001BA3E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001BA3D8; } }
L_001BA380:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[8], c.r[8].w[0] + 20u);  goto L_001BA3D8; }
    set32(c.r[7], ld32((c.r[4].w[0] + 80u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001BA3A8; } }
L_001BA398:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[7], ld32((c.r[7].w[0] + 76u)));  goto L_001BA3A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001BA3B0; } }
L_001BA3A8:
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[3], ld32((c.r[7].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BA398u | kUnwind; return; } goto L_001BA398; }
L_001BA3B0:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[6], ld32((c.r[8].w[0] + 4u)));  goto L_001BA3C0; }
    st32((c.r[6].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 4u)));
    c.budget -= 2;
L_001BA3C0:
    c.r[7].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[28].w[0] - 30600u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA3D0u); c.r[8].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 268u, depth + 1u); else { c.pc = 0x001BA200u; return; } if (c.pc != 0x001BA3D0u) [[unlikely]] return; }
L_001BA3D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001BA3EC; } }
L_001BA3D8:
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BA380u | kUnwind; return; } goto L_001BA380; } }
L_001BA3E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BA3E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001BA3EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BA400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001BA450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_001BA440; } }
L_001BA424:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[16], ld32((c.r[16].w[0] + 76u)));  goto L_001BA440; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA43Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 186u, depth + 1u); else { c.pc = 0x001B9630u; return; } if (c.pc != 0x001BA43Cu) [[unlikely]] return; }
L_001BA43C:
    set32(c.r[16], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_001BA440:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BA424u | kUnwind; return; } goto L_001BA424; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001BA470; } }
L_001BA450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA458u);  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x001B9540u; return; } if (c.pc != 0x001BA458u) [[unlikely]] return; }
L_001BA458:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001BA46C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA46Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 186u, depth + 1u); else { c.pc = 0x001B9630u; return; } if (c.pc != 0x001BA46Cu) [[unlikely]] return; }
L_001BA46C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001BA470:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BA480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001BA4BC; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001BA4AC; } }
L_001BA49C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[5].w[0] + 76u)));  goto L_001BA4AC; }
    st32((c.r[5].w[0] + 36u), 0u);
    set32(c.r[5], ld32((c.r[5].w[0] + 76u)));
    c.budget -= 2;
L_001BA4AC:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BA49Cu | kUnwind; return; } goto L_001BA49C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001BA4D4; } }
L_001BA4BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA4C4u);  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x001B9540u; return; } if (c.pc != 0x001BA4C4u) [[unlikely]] return; }
L_001BA4C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BA4D0; } }
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 1;
L_001BA4D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001BA4D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BA4E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA4F0u);  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x001B9540u; return; } if (c.pc != 0x001BA4F0u) [[unlikely]] return; }
L_001BA4F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001BA52C; }
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_001BA52C; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BA51C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BA528; } }
L_001BA51C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BA52C; } }
L_001BA528:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BA52C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BA540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA554u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x001B9540u; return; } if (c.pc != 0x001BA554u) [[unlikely]] return; }
L_001BA554:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001BA568; }
    st32((c.r[2].w[0] + 48u), c.f[20]);
    st32((c.r[2].w[0] + 56u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
L_001BA568:
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BA580:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA5B0u); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x001B9540u; return; } if (c.pc != 0x001BA5B0u) [[unlikely]] return; }
L_001BA5B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_001BA64C; }
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);  goto L_001BA5E4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA5DCu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0026(c, 291u, depth + 1u); else { c.pc = 0x001BA540u; return; } if (c.pc != 0x001BA5DCu) [[unlikely]] return; }
L_001BA5DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BA648; } }
L_001BA5E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);  if (t) { goto L_001BA604; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001BA620; } }
L_001BA604:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_001BA620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[12] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA640u);  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x001BA640u) [[unlikely]] return; }
L_001BA640:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), c.f[21]);
    c.budget -= 2;
L_001BA648:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001BA64C:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BA670:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 220u), c.f[12]);  if (t) { goto L_001BA68C; } }
    st32((c.r[4].w[0] + 220u), c.f[0]);
    c.budget -= 1;
L_001BA68C:
    c.f[1] = ld32((c.r[4].w[0] + 220u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[4].w[0] + 80u)));  goto L_001BA6B8; }
    st32((c.r[4].w[0] + 220u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BA6B8; } }
L_001BA6B4:
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 1;
L_001BA6B8:
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BA6B4u | kUnwind; return; } goto L_001BA6B4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BA6E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u - 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA6FCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 175u, depth + 1u); else { c.pc = 0x001B9380u; return; } if (c.pc != 0x001BA6FCu) [[unlikely]] return; }
L_001BA6FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BA710:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001BA768; } }
L_001BA740:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[16].w[0] + 76u)));  goto L_001BA768; }
    set32(c.r[20], ld32((c.r[16].w[0] + 68u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA75Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 184u, depth + 1u); else { c.pc = 0x001B95D0u; return; } if (c.pc != 0x001BA75Cu) [[unlikely]] return; }
L_001BA75C:
    c.budget -= 2;
    if (c.r[20].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001BA7D8; }
    set32(c.r[16], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_001BA768:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BA740u | kUnwind; return; } goto L_001BA740; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u - 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA788u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 175u, depth + 1u); else { c.pc = 0x001B9380u; return; } if (c.pc != 0x001BA788u) [[unlikely]] return; }
L_001BA788:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001BA7D4; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 9888u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 20u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA7C0u); st32((c.r[16].w[0] + 72u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001BA7C0u) [[unlikely]] return; }
L_001BA7C0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA7CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x001B9580u; return; } if (c.pc != 0x001BA7CCu) [[unlikely]] return; }
L_001BA7CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001BA7DC; } }
L_001BA7D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BA7D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001BA7DC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001BA800:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA810u);  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x001B9540u; return; } if (c.pc != 0x001BA810u) [[unlikely]] return; }
L_001BA810:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001BA83C; }
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BA838; } }
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 9920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA838u); st32((c.r[2].w[0] + 40u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001BA838u) [[unlikely]] return; }
L_001BA838:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001BA83C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BA850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA860u);  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x001B9540u; return; } if (c.pc != 0x001BA860u) [[unlikely]] return; }
L_001BA860:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001BA890; }
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001BA88C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BA88C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BA890; } }
L_001BA88C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BA890:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BA8A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA8D0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x001B9540u; return; } if (c.pc != 0x001BA8D0u) [[unlikely]] return; }
L_001BA8D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001BA960; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA8F0u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 175u, depth + 1u); else { c.pc = 0x001B9380u; return; } if (c.pc != 0x001BA8F0u) [[unlikely]] return; }
L_001BA8F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001BA95C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA908u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 309u, depth + 1u); else { c.pc = 0x001BA850u; return; } if (c.pc != 0x001BA908u) [[unlikely]] return; }
L_001BA908:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BA95C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA91Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 13u, depth + 1u); else { c.pc = 0x00150230u; return; } if (c.pc != 0x001BA91Cu) [[unlikely]] return; }
L_001BA91C:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 44u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA954u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x001B9580u; return; } if (c.pc != 0x001BA954u) [[unlikely]] return; }
L_001BA954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001BA964; } }
L_001BA95C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BA960:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001BA964:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001BA980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA990u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x001B9540u; return; } if (c.pc != 0x001BA990u) [[unlikely]] return; }
L_001BA990:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001BA9B0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA9A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 13u, depth + 1u); else { c.pc = 0x00150230u; return; } if (c.pc != 0x001BA9A8u) [[unlikely]] return; }
L_001BA9A8:
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_001BA9B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BA9C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA9D0u);  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x001B9540u; return; } if (c.pc != 0x001BA9D0u) [[unlikely]] return; }
L_001BA9D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001BA9F0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BA9EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BA9F0; } }
L_001BA9EC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BA9F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BAA00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAA14u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x001B9540u; return; } if (c.pc != 0x001BAA14u) [[unlikely]] return; }
L_001BAA14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001BAA24; }
    st32((c.r[2].w[0] + 60u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_001BAA24:
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BAA30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAA44u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x001B9540u; return; } if (c.pc != 0x001BAA44u) [[unlikely]] return; }
L_001BAA44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001BAA58; }
    st32((c.r[2].w[0] + 48u), c.f[20]);
    st32((c.r[2].w[0] + 56u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
L_001BAA58:
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BAA70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAAA0u); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x001B9540u; return; } if (c.pc != 0x001BAAA0u) [[unlikely]] return; }
L_001BAAA0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_001BAB3C; }
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);  goto L_001BAAD4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAACCu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0026(c, 324u, depth + 1u); else { c.pc = 0x001BAA30u; return; } if (c.pc != 0x001BAACCu) [[unlikely]] return; }
L_001BAACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BAB38; } }
L_001BAAD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);  if (t) { goto L_001BAAF4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001BAB10; } }
L_001BAAF4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_001BAB10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[12] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAB30u);  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x001BAB30u) [[unlikely]] return; }
L_001BAB30:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), c.f[21]);
    c.budget -= 2;
L_001BAB38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001BAB3C:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BAB60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAB78u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001BAB78u) [[unlikely]] return; }
L_001BAB78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 30596u), c.r[2].w[0]);  goto L_001BAB90; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAB8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 333u, depth + 1u); else { c.pc = 0x001BABA0u; return; } if (c.pc != 0x001BAB8Cu) [[unlikely]] return; }
L_001BAB8C:
    st32((c.r[28].w[0] - 30596u), c.r[2].w[0]);
    c.budget -= 1;
L_001BAB90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BABA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BABB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x001BABB4u) [[unlikely]] return; }
L_001BABB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x54530000u);
    set32(c.r[3], c.r[3].w[0] + 11136u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 12615ull;
    st32((c.r[16].w[0] + 56u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BAC10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BAC58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC40u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x001BAC40u) [[unlikely]] return; }
L_001BAC40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001BAC5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001BAC58u) [[unlikely]] return; }
L_001BAC58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001BAC5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BAC70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC94u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0025(c, 329u, depth + 1u); else { c.pc = 0x001B60E0u; return; } if (c.pc != 0x001BAC94u) [[unlikely]] return; }
L_001BAC94:
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001BAF04; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 56u)));  goto L_001BAEF4; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 2u);  goto L_001BAE64; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_001BADB0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30592u)));  goto L_001BAD18; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u - 1u);  goto L_001BACE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001BAF08; } }
L_001BACE4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001BACE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 9952u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BACF8u); st32((c.r[20].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001BACF8u) [[unlikely]] return; }
L_001BACF8:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001BAF04; } }
L_001BAD18:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BAE60; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BACE4u | kUnwind; return; } goto L_001BACE4; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001BADAC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] + 9992u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAD48u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 87u, depth + 1u); else { c.pc = 0x001809E0u; return; } if (c.pc != 0x001BAD48u) [[unlikely]] return; }
L_001BAD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAD50u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x001BAD50u) [[unlikely]] return; }
L_001BAD50:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAD64u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 114u, depth + 1u); else { c.pc = 0x00180DA0u; return; } if (c.pc != 0x001BAD64u) [[unlikely]] return; }
L_001BAD64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAD6Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x001BAD6Cu) [[unlikely]] return; }
L_001BAD6C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_001BAD98; }
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], 0u + 60u);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAD90u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0018(c, 103u, depth + 1u); else { c.pc = 0x00180C00u; return; } if (c.pc != 0x001BAD90u) [[unlikely]] return; }
L_001BAD90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BAF04; } }
L_001BAD98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BADA0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0018(c, 103u, depth + 1u); else { c.pc = 0x00180C00u; return; } if (c.pc != 0x001BADA0u) [[unlikely]] return; }
L_001BADA0:
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 3;
L_001BADAC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001BADB0:
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[19].d[0] != 0ull) { set32(c.r[4], 0u + 4u);  goto L_001BADD4; }
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001BAE60; } }
L_001BADD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BADDCu);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x001BADDCu) [[unlikely]] return; }
L_001BADDC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001BAE48; } }
L_001BADE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BADF0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x001BADF0u) [[unlikely]] return; }
L_001BADF0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0])));  goto L_001BAE3C; }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001BAE28; }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAE20u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001BAE20u) [[unlikely]] return; }
L_001BAE20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { goto L_001BAE44; } }
L_001BAE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAE30u); set32(c.r[4], c.r[4].w[0] + 10000u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001BAE30u) [[unlikely]] return; }
L_001BAE30:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), 0u);  if (t) { goto L_001BAE40; } }
L_001BAE3C:
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_001BAE40:
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 1;
L_001BAE44:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001BAE48:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BADE8u | kUnwind; return; } goto L_001BADE8; }
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 3;
L_001BAE60:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_001BAE64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[20].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_001BAEB0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BAEAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0])));  if (t) { goto L_001BAE9C; } }
L_001BAE90:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
L_001BAE9C:
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BAE90u | kUnwind; return; } goto L_001BAE90; } }
L_001BAEAC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001BAEB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st32((c.r[28].w[0] - 30592u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[20].w[0] + 4u), c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    st32((c.r[20].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_001BAF04; } }
L_001BAEF4:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { st32((c.r[20].w[0] + 52u), 0u);  goto L_001BAF04; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[20].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 2;
L_001BAF04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001BAF08:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001BAF30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF48u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001BAF48u) [[unlikely]] return; }
L_001BAF48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001BAF60; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF5Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 360u, depth + 1u); else { c.pc = 0x001BAFB0u; return; } if (c.pc != 0x001BAF5Cu) [[unlikely]] return; }
L_001BAF5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001BAF60:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BAF70:
    st32((c.r[28].w[0] - 30588u), c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30584u), c.r[5].w[0]);  c.pc = t; return; }
L_001BAF80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30580u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001BAF9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF9Cu);  if (depth < kMaxDepth) unit_0026(c, 379u, depth + 1u); else { c.pc = 0x001BB390u; return; } if (c.pc != 0x001BAF9Cu) [[unlikely]] return; }
L_001BAF9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BAFB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAFC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x001BAFC4u) [[unlikely]] return; }
L_001BAFC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], 0u + 60u);
    set32(c.r[3], c.r[3].w[0] + 11200u);
    set32(c.r[4], 0u + 872u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAFE8u); st32((c.r[16].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001BAFE8u) [[unlikely]] return; }
L_001BAFE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  goto L_001BB000; }
L_001BAFF0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAFFCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 421u, depth + 1u); else { c.pc = 0x001B6BB0u; return; } if (c.pc != 0x001BAFFCu) [[unlikely]] return; }
L_001BAFFC:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_001BB000:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44500000u);
    c.r[2].d[0] = c.r[2].d[0] | 17491ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 30580u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BB040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BB0BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 11200u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), 0u);  goto L_001BB088; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB084u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BB084u) [[unlikely]] return; }
L_001BB084:
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 1;
L_001BB088:
    set32(c.r[2], ld32((c.r[28].w[0] - 30580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001BB09C; }
    st32((c.r[28].w[0] - 30580u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001BB09C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB0A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x001BB0A4u) [[unlikely]] return; }
L_001BB0A4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001BB0C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB0BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001BB0BCu) [[unlikely]] return; }
L_001BB0BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001BB0C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BB0E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001BB250; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 64u)));  goto L_001BB19C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 64u)));  goto L_001BB160; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001BB144; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  goto L_001BB130; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001BB28C; } }
L_001BB130:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_001BB288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[4].w[0]);  if (t) { goto L_001BB288; } }
L_001BB144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB14Cu);  if (depth < kMaxDepth) unit_000B(c, 107u, depth + 1u); else { c.pc = 0x0014ECA0u; return; } if (c.pc != 0x001BB14Cu) [[unlikely]] return; }
L_001BB14C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BB288; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_001BB288; } }
L_001BB160:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BB288; } }
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001BB288; } }
L_001BB19C:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 96u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 64u)));  goto L_001BB1D4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30584u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BB1D0; } }
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 1;
L_001BB1D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 1;
L_001BB1D4:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 96u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  goto L_001BB208; }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[16].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_001BB204; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30584u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 3;
L_001BB204:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 1;
L_001BB208:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[4].d[0] = ld64((c.r[4].w[0] + 80u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BB288; } }
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], 0u + 60u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001BB288; } }
L_001BB250:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  goto L_001BB274; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_001BB288; } }
L_001BB274:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_001BB288; } }
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 2;
L_001BB288:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001BB28C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BB2A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB2B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0011(c, 107u, depth + 1u); else { c.pc = 0x00164CA0u; return; } if (c.pc != 0x001BB2B8u) [[unlikely]] return; }
L_001BB2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB2C0u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0011(c, 104u, depth + 1u); else { c.pc = 0x00164C60u; return; } if (c.pc != 0x001BB2C0u) [[unlikely]] return; }
L_001BB2C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 60u)));  goto L_001BB354; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_001BB318; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BB370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BB370; } }
L_001BB2F0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + 3u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[4], 0u + 36u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB314u); set32(c.r[5], c.r[5].w[0] << 2);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001BB314u) [[unlikely]] return; }
L_001BB314:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001BB318:
    set32(c.r[2], ld32((c.r[28].w[0] - 30584u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30588u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BB2F0u | kUnwind; return; } goto L_001BB2F0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[6], c.r[6].w[0] + 10032u);
    set32(c.r[3], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB34Cu); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001BB34Cu) [[unlikely]] return; }
L_001BB34C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BB370; } }
L_001BB354:
    set32(c.r[4], 0u + 36u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30588u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB370u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001BB370u) [[unlikely]] return; }
L_001BB370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB378u);  if (depth < kMaxDepth) unit_0011(c, 113u, depth + 1u); else { c.pc = 0x00164D10u; return; } if (c.pc != 0x001BB378u) [[unlikely]] return; }
L_001BB378:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BB390:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 60u)));  c.pc = t; return; }
L_001BB3A0:
    set32(c.r[6], ld32((c.r[5].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 10048u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { set32(c.r[25], c.r[2].w[0] + c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00141FC0u | kUnwind; return; } [[clang::musttail]] return unit_0008(c, 165u, depth); }
L_001BB3C0:
    c.f[3] = ld32((c.r[5].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[2]);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[4].w[0] + 20u), c.f[1]);
    st32((c.r[4].w[0] + 24u), c.f[2]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[3].w[0]);  c.pc = t; return; }
L_001BB420:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB444u); set32(c.r[6], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x001BB444u) [[unlikely]] return; }
L_001BB444:
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB478u); st32((c.r[29].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x001BB478u) [[unlikely]] return; }
L_001BB478:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB48Cu); st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x001BB48Cu) [[unlikely]] return; }
L_001BB48C:
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[17].w[0] + 8u), c.f[3]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[17].w[0] + 16u), c.f[2]);
    st32((c.r[17].w[0] + 20u), c.f[1]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001BB4F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001BB570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB514u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x001BB514u) [[unlikely]] return; }
L_001BB514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB51Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 275u, depth + 1u); else { c.pc = 0x001665B0u; return; } if (c.pc != 0x001BB51Cu) [[unlikely]] return; }
L_001BB51C:
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    c.f[3] = ld32((c.r[29].w[0] + 56u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[17].w[0]), c.f[1]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[3]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[29].w[0] + 56u));
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[2]);
    st32((c.r[17].w[0] + 24u), c.f[3]);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 21;
L_001BB570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BB590:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB5B8u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x001BB5B8u) [[unlikely]] return; }
L_001BB5B8:
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[6], c.r[16].w[0] + 48u);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB5E8u); st32((c.r[29].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x001BB5E8u) [[unlikely]] return; }
L_001BB5E8:
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[5], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 144u), c.f[2]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB61Cu); st32((c.r[29].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x001BB61Cu) [[unlikely]] return; }
L_001BB61C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 192u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB634u); st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x001BB634u) [[unlikely]] return; }
L_001BB634:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB644u); st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x001BB644u) [[unlikely]] return; }
L_001BB644:
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[29].w[0] + 180u));
    c.f[4] = ld32((c.r[29].w[0] + 184u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[17].w[0]), c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 8u), c.f[3]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    st32((c.r[17].w[0] + 16u), c.f[2]);
    st32((c.r[17].w[0] + 20u), c.f[1]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001BB6A0:
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[5].w[0] + 8u));  goto L_001BB6C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = ld32((c.r[5].w[0] + 8u));  if (t) { goto L_001BB6C4; } }
L_001BB6C0:
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 1;
L_001BB6C4:
    c.f[1] = ld32((c.r[5].w[0] + 20u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[5].w[0] + 4u));  goto L_001BB6E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[5].w[0] + 4u));  if (t) { goto L_001BB6E8; } }
L_001BB6E4:
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 1;
L_001BB6E8:
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[5].w[0]));  goto L_001BB708; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[5].w[0]));  if (t) { goto L_001BB70C; } }
L_001BB708:
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 1;
L_001BB70C:
    st32((c.r[4].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[3]);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[3] = ld32((c.r[5].w[0] + 8u));  goto L_001BB73C; }
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 2;
L_001BB73C:
    c.f[1] = ld32((c.r[5].w[0] + 20u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[5].w[0] + 4u));  goto L_001BB75C; }
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 2;
L_001BB75C:
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[5].w[0]));  goto L_001BB77C; }
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 2;
L_001BB77C:
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 20u), c.f[2]);
    st32((c.r[4].w[0] + 24u), c.f[3]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[3].w[0]);  c.pc = t; return; }
L_001BB7A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_001BB7B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB7D8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x001BB7D8u) [[unlikely]] return; }
L_001BB7D8:
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB80Cu); st32((c.r[29].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x001BB80Cu) [[unlikely]] return; }
L_001BB80C:
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[6], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[29].w[0] + 144u), c.f[2]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB83Cu); st32((c.r[29].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x001BB83Cu) [[unlikely]] return; }
L_001BB83C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[17].w[0]));
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[3]);
    c.f[3] = ld32((c.r[29].w[0] + 128u));
    c.f[2] = ld32((c.r[29].w[0] + 132u));
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001BB8B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 11256u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB8D4u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0027(c, 50u, depth + 1u); else { c.pc = 0x001BC6D0u; return; } if (c.pc != 0x001BB8D4u) [[unlikely]] return; }
L_001BB8D4:
    st32((c.r[16].w[0] + 180u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 192u), 0u);
    st32((c.r[16].w[0] + 196u), 0u);
    st32((c.r[16].w[0] + 200u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BB900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BB93C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB924u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 53u, depth + 1u); else { c.pc = 0x001BC770u; return; } if (c.pc != 0x001BB924u) [[unlikely]] return; }
L_001BB924:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001BB940; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB93Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001BB93Cu) [[unlikely]] return; }
L_001BB93C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001BB940:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BB960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BB9B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 11256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB98Cu); st32((c.r[17].w[0] + 212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 410u, depth + 1u); else { c.pc = 0x001BB9D0u; return; } if (c.pc != 0x001BB98Cu) [[unlikely]] return; }
L_001BB98C:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001BB9A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB9A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 53u, depth + 1u); else { c.pc = 0x001BC770u; return; } if (c.pc != 0x001BB9A0u) [[unlikely]] return; }
L_001BB9A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001BB9A4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001BB9BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB9B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001BB9B8u) [[unlikely]] return; }
L_001BB9B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001BB9BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BB9D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001BBA10; } }
L_001BB9F0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 148u)));  if (t) { goto L_001BBA0C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 53u, depth + 1u); else { c.pc = 0x001BC770u; return; } if (c.pc != 0x001BBA04u) [[unlikely]] return; }
L_001BBA04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001BBA0Cu) [[unlikely]] return; }
L_001BBA0C:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001BBA10:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BB9F0u | kUnwind; return; } goto L_001BB9F0; } }
    st32((c.r[18].w[0] + 180u), 0u);
    st32((c.r[18].w[0] + 192u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BBA40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 200u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001BBAA8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[16].w[0] + 32u);  goto L_001BBAAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA74u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001BBA74u) [[unlikely]] return; }
L_001BBA74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001BBA84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBA84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 50u, depth + 1u); else { c.pc = 0x001BC6D0u; return; } if (c.pc != 0x001BBA84u) [[unlikely]] return; }
L_001BBA84:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 192u)));  goto L_001BBA94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BBABC; } }
L_001BBA94:
    st32((c.r[2].w[0] + 148u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 192u), c.r[2].w[0]);  if (t) { goto L_001BBAB0; } }
L_001BBAA8:
    set32(c.r[17], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_001BBAAC:
    st32((c.r[16].w[0] + 192u), c.r[17].w[0]);
    c.budget -= 1;
L_001BBAB0:
    st32((c.r[17].w[0] + 144u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 148u), 0u);
    c.budget -= 3;
L_001BBABC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BBAD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBAFCu); st32((c.r[4].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_0026(c, 410u, depth + 1u); else { c.pc = 0x001BB9D0u; return; } if (c.pc != 0x001BBAFCu) [[unlikely]] return; }
L_001BBAFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBB04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 420u, depth + 1u); else { c.pc = 0x001BBB20u; return; } if (c.pc != 0x001BBB04u) [[unlikely]] return; }
L_001BBB04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BBB20:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBB54u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0013(c, 259u, depth + 1u); else { c.pc = 0x0016EEB0u; return; } if (c.pc != 0x001BBB54u) [[unlikely]] return; }
L_001BBB54:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 200u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBB64u); c.r[4].d[0] = c.r[2].d[0] & 8ull;  if (depth < kMaxDepth) unit_0013(c, 258u, depth + 1u); else { c.pc = 0x0016EEA0u; return; } if (c.pc != 0x001BBB64u) [[unlikely]] return; }
L_001BBB64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBB6Cu);  if (depth < kMaxDepth) unit_0013(c, 257u, depth + 1u); else { c.pc = 0x0016EE90u; return; } if (c.pc != 0x001BBB6Cu) [[unlikely]] return; }
L_001BBB6C:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 200u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBB7Cu); c.r[4].d[0] = c.r[2].d[0] & 16ull;  if (depth < kMaxDepth) unit_0013(c, 256u, depth + 1u); else { c.pc = 0x0016EE80u; return; } if (c.pc != 0x001BBB7Cu) [[unlikely]] return; }
L_001BBB7C:
    set32(c.r[16], ld32((c.r[21].w[0] + 192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBB88u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 414u, depth + 1u); else { c.pc = 0x001BBA40u; return; } if (c.pc != 0x001BBB88u) [[unlikely]] return; }
L_001BBB88:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[30], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[21].w[0] + 16u)));  if (t) { goto L_001BBCA8; } }
L_001BBB9C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], ld32((c.r[21].w[0] + 8u)));  goto L_001BBBB0; }
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001BBCA8; }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_001BBBB0:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[23], ld32((c.r[3].w[0])));  if (t) { goto L_001BBBDC; } }
    set32(c.r[17], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[23].w[0] + 100u)));  goto L_001BBC90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BBC90; } }
L_001BBBDC:
    set32(c.r[17], ld32((c.r[23].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BBC90; } }
L_001BBBE8:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[4].d[0]) { set32(c.r[17], ld32((c.r[17].w[0] + 100u)));  goto L_001BBC90; }
    set32(c.r[25], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[6], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC04u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BBC04u) [[unlikely]] return; }
L_001BBC04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BBC8C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 200u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 200u)));  goto L_001BBC38; }
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], c.r[17].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC2Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0026(c, 396u, depth + 1u); else { c.pc = 0x001BB7A0u; return; } if (c.pc != 0x001BBC2Cu) [[unlikely]] return; }
L_001BBC2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BBC8C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 200u)));
    c.budget -= 1;
L_001BBC38:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[21].w[0] + 16u), c.r[18].w[0]);  goto L_001BBC6C; }
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC58u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 95u, depth + 1u); else { c.pc = 0x001BCCE0u; return; } if (c.pc != 0x001BBC58u) [[unlikely]] return; }
L_001BBC58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BBC8C; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 144u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 16u), c.r[18].w[0]);
    c.budget -= 3;
L_001BBC6C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC7Cu); st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0013(c, 258u, depth + 1u); else { c.pc = 0x0016EEA0u; return; } if (c.pc != 0x001BBC7Cu) [[unlikely]] return; }
L_001BBC7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBC84u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 256u, depth + 1u); else { c.pc = 0x0016EE80u; return; } if (c.pc != 0x001BBC84u) [[unlikely]] return; }
L_001BBC84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001BBD04; } }
L_001BBC8C:
    set32(c.r[17], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 1;
L_001BBC90:
    set32(c.r[2], c.r[23].w[0] + 160u);
    c.r[2].d[0] = c.r[17].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BBBE8u | kUnwind; return; } goto L_001BBBE8; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001BBCA8:
    c.r[2].d[0] = c.r[18].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BBB9Cu | kUnwind; return; } goto L_001BBB9C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001BBCF0; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[19].d[0];  if (t) { goto L_001BBCEC; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), 0u);  goto L_001BBCEC; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001BBCE8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBCE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 53u, depth + 1u); else { c.pc = 0x001BC770u; return; } if (c.pc != 0x001BBCE0u) [[unlikely]] return; }
L_001BBCE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBCE8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001BBCE8u) [[unlikely]] return; }
L_001BBCE8:
    st32((c.r[16].w[0] + 148u), 0u);
    c.budget -= 1;
L_001BBCEC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001BBCF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBCF8u);  if (depth < kMaxDepth) unit_0013(c, 258u, depth + 1u); else { c.pc = 0x0016EEA0u; return; } if (c.pc != 0x001BBCF8u) [[unlikely]] return; }
L_001BBCF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBD00u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 256u, depth + 1u); else { c.pc = 0x0016EE80u; return; } if (c.pc != 0x001BBD00u) [[unlikely]] return; }
L_001BBD00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BBD04:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001BBD40:
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[5].d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_001BBD50:
    st32((c.r[4].w[0]), c.r[10].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 204u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 208u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 8;
    { st32((c.r[4].w[0] + 20u), 0u);  goto L_001BBD70; }
L_001BBD70:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBDA4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0013(c, 259u, depth + 1u); else { c.pc = 0x0016EEB0u; return; } if (c.pc != 0x001BBDA4u) [[unlikely]] return; }
L_001BBDA4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 200u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBDB4u); c.r[4].d[0] = c.r[2].d[0] & 8ull;  if (depth < kMaxDepth) unit_0013(c, 258u, depth + 1u); else { c.pc = 0x0016EEA0u; return; } if (c.pc != 0x001BBDB4u) [[unlikely]] return; }
L_001BBDB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBDBCu);  if (depth < kMaxDepth) unit_0013(c, 257u, depth + 1u); else { c.pc = 0x0016EE90u; return; } if (c.pc != 0x001BBDBCu) [[unlikely]] return; }
L_001BBDBC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 200u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBDCCu); c.r[4].d[0] = c.r[2].d[0] & 16ull;  if (depth < kMaxDepth) unit_0013(c, 256u, depth + 1u); else { c.pc = 0x0016EE80u; return; } if (c.pc != 0x001BBDCCu) [[unlikely]] return; }
L_001BBDCC:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[23], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[21].w[0] + 16u)));  if (t) { goto L_001BBEB4; } }
L_001BBDDC:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], ld32((c.r[21].w[0] + 8u)));  goto L_001BBDF0; }
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001BBEB4; }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_001BBDF0:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[16], ld32((c.r[3].w[0])));  if (t) { goto L_001BBE1C; } }
    set32(c.r[17], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 100u)));  goto L_001BBE9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BBE9C; } }
L_001BBE1C:
    set32(c.r[17], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BBE9C; } }
L_001BBE28:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[17], ld32((c.r[17].w[0] + 100u)));  goto L_001BBE9C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BBE98; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 200u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[21].w[0] + 16u), c.r[18].w[0]);  goto L_001BBE78; }
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[21].w[0] + 204u)));
    set32(c.r[8], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[9], ld32((c.r[21].w[0] + 208u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBE6Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 64u, depth + 1u); else { c.pc = 0x00170830u; return; } if (c.pc != 0x001BBE6Cu) [[unlikely]] return; }
L_001BBE6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BBE98; } }
    st32((c.r[21].w[0] + 16u), c.r[18].w[0]);
    c.budget -= 1;
L_001BBE78:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBE88u); st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0013(c, 258u, depth + 1u); else { c.pc = 0x0016EEA0u; return; } if (c.pc != 0x001BBE88u) [[unlikely]] return; }
L_001BBE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBE90u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 256u, depth + 1u); else { c.pc = 0x0016EE80u; return; } if (c.pc != 0x001BBE90u) [[unlikely]] return; }
L_001BBE90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BBED4; } }
L_001BBE98:
    set32(c.r[17], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 1;
L_001BBE9C:
    set32(c.r[2], c.r[16].w[0] + 160u);
    c.r[2].d[0] = c.r[17].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BBE28u | kUnwind; return; } goto L_001BBE28; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001BBEB4:
    c.r[2].d[0] = c.r[18].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BBDDCu | kUnwind; return; } goto L_001BBDDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBEC8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 258u, depth + 1u); else { c.pc = 0x0016EEA0u; return; } if (c.pc != 0x001BBEC8u) [[unlikely]] return; }
L_001BBEC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBED0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 256u, depth + 1u); else { c.pc = 0x0016EE80u; return; } if (c.pc != 0x001BBED0u) [[unlikely]] return; }
L_001BBED0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BBED4:
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
L_001BBF00:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0027(c, 181u, depth); }
L_001BBF10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBF3Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 174u, depth + 1u); else { c.pc = 0x001BDA80u; return; } if (c.pc != 0x001BBF3Cu) [[unlikely]] return; }
L_001BBF3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BBF4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BBF68; } }
L_001BBF4C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001BBF68; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBF64u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 94u, depth + 1u); else { c.pc = 0x001BCCA0u; return; } if (c.pc != 0x001BBF64u) [[unlikely]] return; }
L_001BBF64:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BBF68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BBF80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBFACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 164u, depth + 1u); else { c.pc = 0x001BD900u; return; } if (c.pc != 0x001BBFACu) [[unlikely]] return; }
L_001BBFAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BBFBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BBFD8; } }
L_001BBFBC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001BBFD8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBFD4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 94u, depth + 1u); else { c.pc = 0x001BCCA0u; return; } if (c.pc != 0x001BBFD4u) [[unlikely]] return; }
L_001BBFD4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BBFD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BBFF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 4;
    [[clang::musttail]] return unit_0027(c, 1u, depth);
}

}
