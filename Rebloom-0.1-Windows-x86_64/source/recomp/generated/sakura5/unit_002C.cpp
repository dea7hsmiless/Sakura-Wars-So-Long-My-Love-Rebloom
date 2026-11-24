#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002C[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0,
    0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0,
    97, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105,
    0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0,
    0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0,
    121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0,
    0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 174,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 202, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0,
    210, 0, 211, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225,
    0, 226, 0, 227, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 235, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0,
    258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0,
    0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0,
    0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0,
    0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0,
    0, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 328, 0, 329, 0, 0,
    0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0,
    0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355,
    0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0,
    360, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 368,
    0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0,
    0, 0, 373, 0, 374, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0,
    379, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0,
    0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0, 390, 0, 391, 0, 392, 0, 0, 0, 0, 393, 0,
    394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0,
    0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    417, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 421, 0, 422, 0, 0, 423, 0, 0, 0, 0, 424, 0, 425, 0, 426, 0, 0, 427,
    0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0,
    0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0,
    0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0,
    439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0,
    0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0,
    448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0,
    452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457,
    0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0,
    0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0,
};

void unit_002C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001D0000;
    case 2u: goto L_001D0018;
    case 3u: goto L_001D0030;
    case 4u: goto L_001D0040;
    case 5u: goto L_001D0060;
    case 6u: goto L_001D0090;
    case 7u: goto L_001D00B8;
    case 8u: goto L_001D00C8;
    case 9u: goto L_001D00F0;
    case 10u: goto L_001D0128;
    case 11u: goto L_001D015C;
    case 12u: goto L_001D016C;
    case 13u: goto L_001D0190;
    case 14u: goto L_001D01D0;
    case 15u: goto L_001D0210;
    case 16u: goto L_001D0220;
    case 17u: goto L_001D0250;
    case 18u: goto L_001D0298;
    case 19u: goto L_001D02E4;
    case 20u: goto L_001D02F4;
    case 21u: goto L_001D0320;
    case 22u: goto L_001D0370;
    case 23u: goto L_001D03C8;
    case 24u: goto L_001D03D8;
    case 25u: goto L_001D0410;
    case 26u: goto L_001D0460;
    case 27u: goto L_001D04D0;
    case 28u: goto L_001D04E0;
    case 29u: goto L_001D0510;
    case 30u: goto L_001D0518;
    case 31u: goto L_001D0550;
    case 32u: goto L_001D0570;
    case 33u: goto L_001D0584;
    case 34u: goto L_001D05BC;
    case 35u: goto L_001D0600;
    case 36u: goto L_001D0620;
    case 37u: goto L_001D0634;
    case 38u: goto L_001D0644;
    case 39u: goto L_001D0660;
    case 40u: goto L_001D0688;
    case 41u: goto L_001D06AC;
    case 42u: goto L_001D06BC;
    case 43u: goto L_001D06E0;
    case 44u: goto L_001D0710;
    case 45u: goto L_001D0740;
    case 46u: goto L_001D0750;
    case 47u: goto L_001D0770;
    case 48u: goto L_001D07A8;
    case 49u: goto L_001D07E4;
    case 50u: goto L_001D07F4;
    case 51u: goto L_001D0820;
    case 52u: goto L_001D0860;
    case 53u: goto L_001D08A8;
    case 54u: goto L_001D08B8;
    case 55u: goto L_001D08E0;
    case 56u: goto L_001D0928;
    case 57u: goto L_001D097C;
    case 58u: goto L_001D098C;
    case 59u: goto L_001D09C0;
    case 60u: goto L_001D09D0;
    case 61u: goto L_001D09E0;
    case 62u: goto L_001D09F4;
    case 63u: goto L_001D0A40;
    case 64u: goto L_001D0A60;
    case 65u: goto L_001D0A90;
    case 66u: goto L_001D0AE0;
    case 67u: goto L_001D0B08;
    case 68u: goto L_001D0B48;
    case 69u: goto L_001D0B60;
    case 70u: goto L_001D0B78;
    case 71u: goto L_001D0B88;
    case 72u: goto L_001D0BB0;
    case 73u: goto L_001D0BB8;
    case 74u: goto L_001D0BE0;
    case 75u: goto L_001D0C30;
    case 76u: goto L_001D0C44;
    case 77u: goto L_001D0C8C;
    case 78u: goto L_001D0CA0;
    case 79u: goto L_001D0CB0;
    case 80u: goto L_001D0CE0;
    case 81u: goto L_001D0CEC;
    case 82u: goto L_001D0D40;
    case 83u: goto L_001D0D4C;
    case 84u: goto L_001D0DA0;
    case 85u: goto L_001D0DB0;
    case 86u: goto L_001D0DC0;
    case 87u: goto L_001D0DD0;
    case 88u: goto L_001D0DE0;
    case 89u: goto L_001D0DF8;
    case 90u: goto L_001D0E0C;
    case 91u: goto L_001D0E40;
    case 92u: goto L_001D0E60;
    case 93u: goto L_001D0EA4;
    case 94u: goto L_001D0EB0;
    case 95u: goto L_001D0EC8;
    case 96u: goto L_001D0EE0;
    case 97u: goto L_001D0F00;
    case 98u: goto L_001D0F08;
    case 99u: goto L_001D0F10;
    case 100u: goto L_001D0F48;
    case 101u: goto L_001D0F80;
    case 102u: goto L_001D0FC0;
    case 103u: goto L_001D0FD4;
    case 104u: goto L_001D0FE8;
    case 105u: goto L_001D0FFC;
    case 106u: goto L_001D1014;
    case 107u: goto L_001D1048;
    case 108u: goto L_001D10A0;
    case 109u: goto L_001D10C4;
    case 110u: goto L_001D10CC;
    case 111u: goto L_001D10E8;
    case 112u: goto L_001D1104;
    case 113u: goto L_001D110C;
    case 114u: goto L_001D1140;
    case 115u: goto L_001D1154;
    case 116u: goto L_001D115C;
    case 117u: goto L_001D11B0;
    case 118u: goto L_001D11C0;
    case 119u: goto L_001D11E8;
    case 120u: goto L_001D11F8;
    case 121u: goto L_001D1200;
    case 122u: goto L_001D121C;
    case 123u: goto L_001D1260;
    case 124u: goto L_001D1280;
    case 125u: goto L_001D12A4;
    case 126u: goto L_001D12D8;
    case 127u: goto L_001D12F4;
    case 128u: goto L_001D1318;
    case 129u: goto L_001D1330;
    case 130u: goto L_001D1338;
    case 131u: goto L_001D136C;
    case 132u: goto L_001D13B0;
    case 133u: goto L_001D140C;
    case 134u: goto L_001D1434;
    case 135u: goto L_001D1448;
    case 136u: goto L_001D1454;
    case 137u: goto L_001D1490;
    case 138u: goto L_001D149C;
    case 139u: goto L_001D14C4;
    case 140u: goto L_001D14E0;
    case 141u: goto L_001D150C;
    case 142u: goto L_001D151C;
    case 143u: goto L_001D1570;
    case 144u: goto L_001D159C;
    case 145u: goto L_001D15AC;
    case 146u: goto L_001D1600;
    case 147u: goto L_001D1618;
    case 148u: goto L_001D162C;
    case 149u: goto L_001D1640;
    case 150u: goto L_001D1660;
    case 151u: goto L_001D1680;
    case 152u: goto L_001D1690;
    case 153u: goto L_001D16AC;
    case 154u: goto L_001D16E0;
    case 155u: goto L_001D16FC;
    case 156u: goto L_001D1710;
    case 157u: goto L_001D1728;
    case 158u: goto L_001D1730;
    case 159u: goto L_001D1760;
    case 160u: goto L_001D1780;
    case 161u: goto L_001D17B4;
    case 162u: goto L_001D17D0;
    case 163u: goto L_001D17F0;
    case 164u: goto L_001D1848;
    case 165u: goto L_001D1890;
    case 166u: goto L_001D18B8;
    case 167u: goto L_001D18D0;
    case 168u: goto L_001D18D8;
    case 169u: goto L_001D18E0;
    case 170u: goto L_001D1930;
    case 171u: goto L_001D194C;
    case 172u: goto L_001D1960;
    case 173u: goto L_001D1970;
    case 174u: goto L_001D197C;
    case 175u: goto L_001D19AC;
    case 176u: goto L_001D19C4;
    case 177u: goto L_001D19D8;
    case 178u: goto L_001D1A00;
    case 179u: goto L_001D1A24;
    case 180u: goto L_001D1A70;
    case 181u: goto L_001D1A90;
    case 182u: goto L_001D1AB4;
    case 183u: goto L_001D1ACC;
    case 184u: goto L_001D1AD4;
    case 185u: goto L_001D1B2C;
    case 186u: goto L_001D1B50;
    case 187u: goto L_001D1B6C;
    case 188u: goto L_001D1B74;
    case 189u: goto L_001D1B9C;
    case 190u: goto L_001D1BAC;
    case 191u: goto L_001D1BBC;
    case 192u: goto L_001D1BC4;
    case 193u: goto L_001D1C2C;
    case 194u: goto L_001D1C50;
    case 195u: goto L_001D1CA8;
    case 196u: goto L_001D1CF0;
    case 197u: goto L_001D1D18;
    case 198u: goto L_001D1D30;
    case 199u: goto L_001D1D48;
    case 200u: goto L_001D1D58;
    case 201u: goto L_001D1D6C;
    case 202u: goto L_001D1D78;
    case 203u: goto L_001D1DB0;
    case 204u: goto L_001D1DC4;
    case 205u: goto L_001D1DDC;
    case 206u: goto L_001D1DF0;
    case 207u: goto L_001D1E20;
    case 208u: goto L_001D1E5C;
    case 209u: goto L_001D1E74;
    case 210u: goto L_001D1E80;
    case 211u: goto L_001D1E88;
    case 212u: goto L_001D1E90;
    case 213u: goto L_001D1EA4;
    case 214u: goto L_001D1ED4;
    case 215u: goto L_001D1F2C;
    case 216u: goto L_001D1F50;
    case 217u: goto L_001D1F70;
    case 218u: goto L_001D1F90;
    case 219u: goto L_001D1FB0;
    case 220u: goto L_001D1FD0;
    case 221u: goto L_001D1FF0;
    case 222u: goto L_001D2020;
    case 223u: goto L_001D204C;
    case 224u: goto L_001D205C;
    case 225u: goto L_001D207C;
    case 226u: goto L_001D2084;
    case 227u: goto L_001D208C;
    case 228u: goto L_001D2094;
    case 229u: goto L_001D20A8;
    case 230u: goto L_001D20C4;
    case 231u: goto L_001D20FC;
    case 232u: goto L_001D2118;
    case 233u: goto L_001D2144;
    case 234u: goto L_001D2170;
    case 235u: goto L_001D2198;
    case 236u: goto L_001D219C;
    case 237u: goto L_001D21A4;
    case 238u: goto L_001D21DC;
    case 239u: goto L_001D2210;
    case 240u: goto L_001D2224;
    case 241u: goto L_001D2248;
    case 242u: goto L_001D2278;
    case 243u: goto L_001D22A8;
    case 244u: goto L_001D22D4;
    case 245u: goto L_001D22E0;
    case 246u: goto L_001D2300;
    case 247u: goto L_001D230C;
    case 248u: goto L_001D2348;
    case 249u: goto L_001D2354;
    case 250u: goto L_001D2390;
    case 251u: goto L_001D239C;
    case 252u: goto L_001D23BC;
    case 253u: goto L_001D23C8;
    case 254u: goto L_001D2408;
    case 255u: goto L_001D2414;
    case 256u: goto L_001D2454;
    case 257u: goto L_001D2460;
    case 258u: goto L_001D2480;
    case 259u: goto L_001D248C;
    case 260u: goto L_001D24AC;
    case 261u: goto L_001D24B8;
    case 262u: goto L_001D24DC;
    case 263u: goto L_001D24E8;
    case 264u: goto L_001D2510;
    case 265u: goto L_001D2534;
    case 266u: goto L_001D253C;
    case 267u: goto L_001D255C;
    case 268u: goto L_001D2568;
    case 269u: goto L_001D2588;
    case 270u: goto L_001D2594;
    case 271u: goto L_001D25D4;
    case 272u: goto L_001D25E0;
    case 273u: goto L_001D261C;
    case 274u: goto L_001D2628;
    case 275u: goto L_001D2668;
    case 276u: goto L_001D2674;
    case 277u: goto L_001D26B4;
    case 278u: goto L_001D26C0;
    case 279u: goto L_001D26E0;
    case 280u: goto L_001D26EC;
    case 281u: goto L_001D271C;
    case 282u: goto L_001D2728;
    case 283u: goto L_001D2768;
    case 284u: goto L_001D2774;
    case 285u: goto L_001D27B4;
    case 286u: goto L_001D27C0;
    case 287u: goto L_001D2800;
    case 288u: goto L_001D280C;
    case 289u: goto L_001D284C;
    case 290u: goto L_001D2858;
    case 291u: goto L_001D2888;
    case 292u: goto L_001D2894;
    case 293u: goto L_001D28C4;
    case 294u: goto L_001D28D0;
    case 295u: goto L_001D2910;
    case 296u: goto L_001D291C;
    case 297u: goto L_001D295C;
    case 298u: goto L_001D2968;
    case 299u: goto L_001D29A8;
    case 300u: goto L_001D29B4;
    case 301u: goto L_001D29F4;
    case 302u: goto L_001D2A00;
    case 303u: goto L_001D2A40;
    case 304u: goto L_001D2A4C;
    case 305u: goto L_001D2A8C;
    case 306u: goto L_001D2A98;
    case 307u: goto L_001D2AD8;
    case 308u: goto L_001D2AE4;
    case 309u: goto L_001D2B04;
    case 310u: goto L_001D2B20;
    case 311u: goto L_001D2B4C;
    case 312u: goto L_001D2B60;
    case 313u: goto L_001D2B74;
    case 314u: goto L_001D2B8C;
    case 315u: goto L_001D2C00;
    case 316u: goto L_001D2C20;
    case 317u: goto L_001D2C28;
    case 318u: goto L_001D2C40;
    case 319u: goto L_001D2C48;
    case 320u: goto L_001D2C60;
    case 321u: goto L_001D2C68;
    case 322u: goto L_001D2C8C;
    case 323u: goto L_001D2C94;
    case 324u: goto L_001D2CB4;
    case 325u: goto L_001D2CBC;
    case 326u: goto L_001D2CD4;
    case 327u: goto L_001D2CDC;
    case 328u: goto L_001D2CEC;
    case 329u: goto L_001D2CF4;
    case 330u: goto L_001D2D14;
    case 331u: goto L_001D2D1C;
    case 332u: goto L_001D2D34;
    case 333u: goto L_001D2D3C;
    case 334u: goto L_001D2D4C;
    case 335u: goto L_001D2D54;
    case 336u: goto L_001D2DF8;
    case 337u: goto L_001D2E1C;
    case 338u: goto L_001D2E40;
    case 339u: goto L_001D2E64;
    case 340u: goto L_001D2F90;
    case 341u: goto L_001D2FAC;
    case 342u: goto L_001D2FB4;
    case 343u: goto L_001D2FD4;
    case 344u: goto L_001D2FDC;
    case 345u: goto L_001D3048;
    case 346u: goto L_001D3050;
    case 347u: goto L_001D30AC;
    case 348u: goto L_001D30B4;
    case 349u: goto L_001D3118;
    case 350u: goto L_001D3120;
    case 351u: goto L_001D3184;
    case 352u: goto L_001D318C;
    case 353u: goto L_001D31C8;
    case 354u: goto L_001D31D0;
    case 355u: goto L_001D31FC;
    case 356u: goto L_001D3204;
    case 357u: goto L_001D3238;
    case 358u: goto L_001D3240;
    case 359u: goto L_001D3264;
    case 360u: goto L_001D3280;
    case 361u: goto L_001D3288;
    case 362u: goto L_001D329C;
    case 363u: goto L_001D32B8;
    case 364u: goto L_001D32C0;
    case 365u: goto L_001D32D0;
    case 366u: goto L_001D32E8;
    case 367u: goto L_001D32F0;
    case 368u: goto L_001D32FC;
    case 369u: goto L_001D3314;
    case 370u: goto L_001D331C;
    case 371u: goto L_001D3360;
    case 372u: goto L_001D3368;
    case 373u: goto L_001D3388;
    case 374u: goto L_001D3390;
    case 375u: goto L_001D33A8;
    case 376u: goto L_001D33B0;
    case 377u: goto L_001D33D4;
    case 378u: goto L_001D33F0;
    case 379u: goto L_001D3400;
    case 380u: goto L_001D3408;
    case 381u: goto L_001D3428;
    case 382u: goto L_001D3430;
    case 383u: goto L_001D3448;
    case 384u: goto L_001D3450;
    case 385u: goto L_001D3470;
    case 386u: goto L_001D348C;
    case 387u: goto L_001D34A8;
    case 388u: goto L_001D34B8;
    case 389u: goto L_001D34C0;
    case 390u: goto L_001D34D4;
    case 391u: goto L_001D34DC;
    case 392u: goto L_001D34E4;
    case 393u: goto L_001D34F8;
    case 394u: goto L_001D3500;
    case 395u: goto L_001D3528;
    case 396u: goto L_001D3544;
    case 397u: goto L_001D354C;
    case 398u: goto L_001D3590;
    case 399u: goto L_001D35B4;
    case 400u: goto L_001D35E0;
    case 401u: goto L_001D360C;
    case 402u: goto L_001D361C;
    case 403u: goto L_001D38B0;
    case 404u: goto L_001D38CC;
    case 405u: goto L_001D38D4;
    case 406u: goto L_001D38F0;
    case 407u: goto L_001D3950;
    case 408u: goto L_001D395C;
    case 409u: goto L_001D3978;
    case 410u: goto L_001D3994;
    case 411u: goto L_001D39A0;
    case 412u: goto L_001D39BC;
    case 413u: goto L_001D39D8;
    case 414u: goto L_001D39E4;
    case 415u: goto L_001D3A00;
    case 416u: goto L_001D3A28;
    case 417u: goto L_001D3A80;
    case 418u: goto L_001D3A88;
    case 419u: goto L_001D3A9C;
    case 420u: goto L_001D3AAC;
    case 421u: goto L_001D3AB8;
    case 422u: goto L_001D3AC0;
    case 423u: goto L_001D3ACC;
    case 424u: goto L_001D3AE0;
    case 425u: goto L_001D3AE8;
    case 426u: goto L_001D3AF0;
    case 427u: goto L_001D3AFC;
    case 428u: goto L_001D3B10;
    case 429u: goto L_001D3B28;
    case 430u: goto L_001D3B4C;
    case 431u: goto L_001D3B70;
    case 432u: goto L_001D3B94;
    case 433u: goto L_001D3BB0;
    case 434u: goto L_001D3BF0;
    case 435u: goto L_001D3C08;
    case 436u: goto L_001D3C20;
    case 437u: goto L_001D3C50;
    case 438u: goto L_001D3C68;
    case 439u: goto L_001D3C80;
    case 440u: goto L_001D3CB0;
    case 441u: goto L_001D3CC8;
    case 442u: goto L_001D3CE0;
    case 443u: goto L_001D3CF8;
    case 444u: goto L_001D3D0C;
    case 445u: goto L_001D3D30;
    case 446u: goto L_001D3D5C;
    case 447u: goto L_001D3D68;
    case 448u: goto L_001D3D80;
    case 449u: goto L_001D3DA0;
    case 450u: goto L_001D3DC0;
    case 451u: goto L_001D3DE8;
    case 452u: goto L_001D3E00;
    case 453u: goto L_001D3E34;
    case 454u: goto L_001D3E3C;
    case 455u: goto L_001D3E4C;
    case 456u: goto L_001D3E68;
    case 457u: goto L_001D3E7C;
    case 458u: goto L_001D3E90;
    case 459u: goto L_001D3EBC;
    case 460u: goto L_001D3F10;
    case 461u: goto L_001D3F58;
    case 462u: goto L_001D3F78;
    case 463u: goto L_001D3F84;
    case 464u: goto L_001D3FB0;
    case 465u: goto L_001D3FF8;
    default: bad_entry(c, 0x001D0000u); return;
    }
L_001D0000:
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0018u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001D0018u) [[unlikely]] return; }
L_001D0018:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0030u); st32((c.r[29].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_002B(c, 431u, depth + 1u); else { c.pc = 0x001CFF80u; return; } if (c.pc != 0x001D0030u) [[unlikely]] return; }
L_001D0030:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0040u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001D0040u) [[unlikely]] return; }
L_001D0040:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001D0060:
    set32(c.r[29], c.r[29].w[0] - 176u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0090u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001D0090u) [[unlikely]] return; }
L_001D0090:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 96u), c.r[17].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D00B8u); st32((c.r[29].w[0] + 100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 431u, depth + 1u); else { c.pc = 0x001CFF80u; return; } if (c.pc != 0x001D00B8u) [[unlikely]] return; }
L_001D00B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D00C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001D00C8u) [[unlikely]] return; }
L_001D00C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001D00F0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0128u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001D0128u) [[unlikely]] return; }
L_001D0128:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.r[2].d[0] = c.r[19].d[0] << 32;
    st32((c.r[29].w[0] + 112u), c.r[20].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D015Cu); st32((c.r[29].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 431u, depth + 1u); else { c.pc = 0x001CFF80u; return; } if (c.pc != 0x001D015Cu) [[unlikely]] return; }
L_001D015C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D016Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001D016Cu) [[unlikely]] return; }
L_001D016C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001D0190:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D01D0u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001D01D0u) [[unlikely]] return; }
L_001D01D0:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.r[2].d[0] = c.r[19].d[0] << 32;
    st32((c.r[29].w[0] + 128u), c.r[21].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0210u); st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 431u, depth + 1u); else { c.pc = 0x001CFF80u; return; } if (c.pc != 0x001D0210u) [[unlikely]] return; }
L_001D0210:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0220u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001D0220u) [[unlikely]] return; }
L_001D0220:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001D0250:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0298u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001D0298u) [[unlikely]] return; }
L_001D0298:
    c.r[2].d[0] = c.r[22].d[0] << 32;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.r[2].d[0] = c.r[16].d[0] << 32;
    st32((c.r[29].w[0] + 144u), c.r[19].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D02E4u); st32((c.r[29].w[0] + 148u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 431u, depth + 1u); else { c.pc = 0x001CFF80u; return; } if (c.pc != 0x001D02E4u) [[unlikely]] return; }
L_001D02E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D02F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001D02F4u) [[unlikely]] return; }
L_001D02F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001D0320:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[10].d[0] + 0ull;
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0370u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001D0370u) [[unlikely]] return; }
L_001D0370:
    c.r[2].d[0] = c.r[23].d[0] << 32;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.r[2].d[0] = c.r[22].d[0] << 32;
    st32((c.r[29].w[0] + 176u), c.r[19].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[2], 0u + 5u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D03C8u); st32((c.r[29].w[0] + 180u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 431u, depth + 1u); else { c.pc = 0x001CFF80u; return; } if (c.pc != 0x001D03C8u) [[unlikely]] return; }
L_001D03C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D03D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001D03D8u) [[unlikely]] return; }
L_001D03D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_001D0410:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[10].d[0] + 0ull;
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0460u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001D0460u) [[unlikely]] return; }
L_001D0460:
    c.r[2].d[0] = c.r[23].d[0] << 32;
    set32(c.r[7], ld32((c.r[29].w[0] + 256u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[22].d[0] << 32;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[6], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 32;
    st32((c.r[29].w[0] + 204u), c.r[7].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 32;
    st32((c.r[29].w[0] + 176u), c.r[19].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D04D0u); st32((c.r[29].w[0] + 212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 431u, depth + 1u); else { c.pc = 0x001CFF80u; return; } if (c.pc != 0x001D04D0u) [[unlikely]] return; }
L_001D04D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D04E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001D04E0u) [[unlikely]] return; }
L_001D04E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_001D0510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 104u)));  if (t) { goto L_001D053C; } }
L_001D0518:
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 56u)));  goto L_001D053C; }
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D0538; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001D0548; } }
L_001D0538:
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 1;
L_001D053C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[4].w[0] + 64u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D0518u | kUnwind; return; } goto L_001D0518; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D0548:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0570u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001D0570u) [[unlikely]] return; }
L_001D0570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D0584; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0584u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 343u, depth + 1u); else { c.pc = 0x001CF070u; return; } if (c.pc != 0x001D0584u) [[unlikely]] return; }
L_001D0584:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 144u));  goto L_001D0598; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D05E4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 144u));
    c.budget -= 1;
L_001D0598:
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st8((c.r[16].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 6;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 60u)));  goto L_001D05C4; }
    st32((c.r[2].w[0] + 60u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_001D05E4; } }
L_001D05BC:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 2;
L_001D05C4:
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D05BCu | kUnwind; return; } goto L_001D05BC; } }
    st32((c.r[5].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 3;
L_001D05E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D0600:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0620u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001D0620u) [[unlikely]] return; }
L_001D0620:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0634u); st32((c.r[29].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_002C(c, 31u, depth + 1u); else { c.pc = 0x001D0550u; return; } if (c.pc != 0x001D0634u) [[unlikely]] return; }
L_001D0634:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0644u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001D0644u) [[unlikely]] return; }
L_001D0644:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001D0660:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0688u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001D0688u) [[unlikely]] return; }
L_001D0688:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 80u), c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D06ACu); st32((c.r[29].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 31u, depth + 1u); else { c.pc = 0x001D0550u; return; } if (c.pc != 0x001D06ACu) [[unlikely]] return; }
L_001D06AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D06BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001D06BCu) [[unlikely]] return; }
L_001D06BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001D06E0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0710u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001D0710u) [[unlikely]] return; }
L_001D0710:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 32;
    st32((c.r[29].w[0] + 96u), c.r[18].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0740u); st32((c.r[29].w[0] + 100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 31u, depth + 1u); else { c.pc = 0x001D0550u; return; } if (c.pc != 0x001D0740u) [[unlikely]] return; }
L_001D0740:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0750u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001D0750u) [[unlikely]] return; }
L_001D0750:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001D0770:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D07A8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001D07A8u) [[unlikely]] return; }
L_001D07A8:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 32;
    st32((c.r[29].w[0] + 112u), c.r[20].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D07E4u); st32((c.r[29].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 31u, depth + 1u); else { c.pc = 0x001D0550u; return; } if (c.pc != 0x001D07E4u) [[unlikely]] return; }
L_001D07E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D07F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001D07F4u) [[unlikely]] return; }
L_001D07F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001D0820:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0860u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001D0860u) [[unlikely]] return; }
L_001D0860:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 32;
    st32((c.r[29].w[0] + 128u), c.r[21].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D08A8u); st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 31u, depth + 1u); else { c.pc = 0x001D0550u; return; } if (c.pc != 0x001D08A8u) [[unlikely]] return; }
L_001D08A8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D08B8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001D08B8u) [[unlikely]] return; }
L_001D08B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001D08E0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0928u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001D0928u) [[unlikely]] return; }
L_001D0928:
    c.r[2].d[0] = c.r[22].d[0] << 32;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 32;
    st32((c.r[29].w[0] + 160u), c.r[20].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], 0u + 5u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D097Cu); st32((c.r[29].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 31u, depth + 1u); else { c.pc = 0x001D0550u; return; } if (c.pc != 0x001D097Cu) [[unlikely]] return; }
L_001D097C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D098Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001D098Cu) [[unlikely]] return; }
L_001D098C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_001D09C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D09D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D09D0u) [[unlikely]] return; }
L_001D09D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D09E0:
    set32(c.r[7], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { set32(c.r[3], ld32((c.r[7].w[0] + 56u)));  goto L_001D09FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[5].w[0]);  if (t) { goto L_001D0A14; } }
L_001D09F4:
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 56u)));
    c.budget -= 2;
L_001D09FC:
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D09F4u | kUnwind; return; } goto L_001D09F4; } }
    st32((c.r[7].w[0] + 56u), c.r[5].w[0]);
    c.budget -= 1;
L_001D0A14:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { st32((c.r[5].w[0] + 48u), c.r[4].w[0]);  goto L_001D0A2C; }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 64u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st8((c.r[5].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[5].w[0] + 48u), c.r[4].w[0]);
    c.budget -= 4;
L_001D0A2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0A40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0A60u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001D0A60u) [[unlikely]] return; }
L_001D0A60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001D0A7C; }
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
L_001D0A7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D0A90:
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D0AAC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001D0AAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0AD4; } }
L_001D0AAC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0] + 64u));  goto L_001D0AC8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    st32((c.r[5].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 104u), c.r[5].w[0]);
    st32((c.r[5].w[0] + 48u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 64u));
    c.budget -= 5;
L_001D0AC8:
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st8((c.r[5].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001D0AD4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0AE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D0B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0B4C; } }
L_001D0B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0B08u);  if (depth < kMaxDepth) unit_002C(c, 80u, depth + 1u); else { c.pc = 0x001D0CE0u; return; } if (c.pc != 0x001D0B08u) [[unlikely]] return; }
L_001D0B08:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D0B4C; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 64u));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D0B48; } }
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001D0B48; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0B48u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001D0B48u) [[unlikely]] return; }
L_001D0B48:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001D0B4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D0B60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0B78u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001D0B78u) [[unlikely]] return; }
L_001D0B78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D0B88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0B88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 340u, depth + 1u); else { c.pc = 0x001CEFF0u; return; } if (c.pc != 0x001D0B88u) [[unlikely]] return; }
L_001D0B88:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001D0B98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D0BA0; } }
L_001D0B98:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 52u), c.r[16].w[0]);
    c.budget -= 2;
L_001D0BA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D0BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[5].w[0])));  if (t) { goto L_001D0BCC; } }
L_001D0BB8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[5], c.r[5].w[0] + 20u);  goto L_001D0BC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D0BD8; } }
L_001D0BC8:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_001D0BCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D0BB8u | kUnwind; return; } goto L_001D0BB8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D0BD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0BE0:
    st16((c.r[4].w[0] + 132u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[4].w[0] + 92u), 0u);
    set32(c.r[5], c.r[5].w[0] + 1056u);
    st32((c.r[4].w[0] + 96u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 112u), c.f[2]);
    st32((c.r[4].w[0] + 116u), c.f[1]);
    st32((c.r[4].w[0] + 120u), c.f[0]);
    st8((c.r[4].w[0] + 144u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 128u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 88u), 0u);  c.pc = t; return; }
L_001D0C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D0C8C; } }
L_001D0C44:
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 64u));
    c.r[3].d[0] = c.r[3].d[0] & 239ull;
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  goto L_001D0C90; }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 64u));
    c.r[3].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D0C8C; } }
    c.r[3].d[0] = c.r[5].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D0C8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0C8Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 348u, depth + 1u); else { c.pc = 0x001CF140u; return; } if (c.pc != 0x001D0C8Cu) [[unlikely]] return; }
L_001D0C8C:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_001D0C90:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D0C44u | kUnwind; return; } goto L_001D0C44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 104u)));  if (t) { goto L_001D0CBC; } }
L_001D0CA0:
    st32((c.r[16].w[0] + 104u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 48u), 0u);
    st32((c.r[3].w[0] + 56u), 0u);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 64u));
    c.budget -= 4;
L_001D0CB0:
    c.r[4].d[0] = c.r[4].d[0] & 63ull;
    st8((c.r[3].w[0] + 64u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
L_001D0CBC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D0CA0u | kUnwind; return; } goto L_001D0CA0; }
    st32((c.r[16].w[0] + 100u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D0CE0:
    set32(c.r[7], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001D0D14; } }
L_001D0CEC:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[5].d[0]) { c.r[6].d[0] = c.r[7].d[0] + 0ull;  goto L_001D0D10; }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], ld32((c.r[7].w[0] + 56u)));  goto L_001D0D08; }
    set32(c.r[3], ld32((c.r[7].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_001D0D1C; } }
L_001D0D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_001D0D1C; } }
L_001D0D10:
    set32(c.r[7], ld32((c.r[7].w[0] + 56u)));
    c.budget -= 1;
L_001D0D14:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D0CECu | kUnwind; return; } goto L_001D0CEC; } }
L_001D0D1C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001D0D2C; } }
    st32((c.r[5].w[0] + 48u), 0u);
    st32((c.r[5].w[0] + 56u), 0u);
    c.budget -= 2;
L_001D0D2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0D40:
    set32(c.r[7], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001D0D74; } }
L_001D0D4C:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[5].d[0]) { c.r[6].d[0] = c.r[7].d[0] + 0ull;  goto L_001D0D70; }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], ld32((c.r[7].w[0] + 60u)));  goto L_001D0D68; }
    set32(c.r[3], ld32((c.r[7].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_001D0D7C; } }
L_001D0D68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_001D0D7C; } }
L_001D0D70:
    set32(c.r[7], ld32((c.r[7].w[0] + 60u)));
    c.budget -= 1;
L_001D0D74:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D0D4Cu | kUnwind; return; } goto L_001D0D4C; } }
L_001D0D7C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001D0D8C; } }
    st32((c.r[5].w[0] + 52u), 0u);
    st32((c.r[5].w[0] + 60u), 0u);
    c.budget -= 2;
L_001D0D8C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D0DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0DB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D0DB0u) [[unlikely]] return; }
L_001D0DB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D0DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0DD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D0DD0u) [[unlikely]] return; }
L_001D0DD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D0DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 258u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0DF8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001D0DF8u) [[unlikely]] return; }
L_001D0DF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[16].w[0] + 156u);
    set32(c.r[2], c.r[2].w[0] + 13504u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0E0Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x001D0E0Cu) [[unlikely]] return; }
L_001D0E0C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30520u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 148u), 0u);  goto L_001D0E20; }
    st32((c.r[28].w[0] - 30520u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 148u), 0u);
    c.budget -= 2;
L_001D0E20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52470000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].d[0] = c.r[2].d[0] | 19789ull;
    st32((c.r[16].w[0] + 152u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0E40u); set32(c.r[5], c.r[5].w[0] + 16336u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001D0E40u) [[unlikely]] return; }
L_001D0E40:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D0E60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D0EC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 13504u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30520u)));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001D0E9C; }
    st32((c.r[28].w[0] - 30520u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001D0E9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0EA4u);  if (depth < kMaxDepth) unit_002C(c, 108u, depth + 1u); else { c.pc = 0x001D10A0u; return; } if (c.pc != 0x001D0EA4u) [[unlikely]] return; }
L_001D0EA4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0EB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001D0EB0u) [[unlikely]] return; }
L_001D0EB0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001D0ECC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0EC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001D0EC8u) [[unlikely]] return; }
L_001D0EC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D0ECC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D0EE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 148u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0F00u); set32(c.r[4], c.r[4].w[0] + 16433u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x001D0F00u) [[unlikely]] return; }
L_001D0F00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D0F60; } }
L_001D0F08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001D0F4C; } }
L_001D0F10:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001D0F4C; }
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0F48u); set32(c.r[5], ld32((c.r[2].w[0] + 8u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D0F48u) [[unlikely]] return; }
L_001D0F48:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001D0F4C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D0F10u | kUnwind; return; } goto L_001D0F10; }
    set32(c.r[17], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_001D0F60:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D0F08u | kUnwind; return; } goto L_001D0F08; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D0F80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001D0FB4; } }
    c.budget -= 2;
    if (c.r[18].sd[0] >= 0) { set32(c.r[4], 0u + 16u);  goto L_001D0FCC; }
L_001D0FB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0FC0u); set32(c.r[4], c.r[4].w[0] + 16451u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001D0FC0u) [[unlikely]] return; }
L_001D0FC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D1078; } }
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_001D0FCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0FD4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001D0FD4u) [[unlikely]] return; }
L_001D0FD4:
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D0FE8u); set32(c.r[4], c.r[18].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001D0FE8u) [[unlikely]] return; }
L_001D0FE8:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_001D1028; } }
    set32(c.r[2], c.r[17].w[0] << 1);
    c.budget -= 1;
L_001D0FFC:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1014u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D1014u) [[unlikely]] return; }
L_001D1014:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_001D1028:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D0FFCu | kUnwind; return; } goto L_001D0FFC; }
    set32(c.r[3], ld32((c.r[20].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 12u)));  goto L_001D1050; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 148u), c.r[16].w[0]);  if (t) { goto L_001D1068; } }
L_001D1048:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 2;
L_001D1050:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D1048u | kUnwind; return; } goto L_001D1048; } }
    st32((c.r[3].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 1;
L_001D1068:
    set32(c.r[3], ld32((c.r[20].w[0] + 152u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[20].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 4;
L_001D1078:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001D10A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D1110; } }
L_001D10C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001D10EC; } }
L_001D10CC:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D10E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D10E8u) [[unlikely]] return; }
L_001D10E8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001D10EC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D10CCu | kUnwind; return; } goto L_001D10CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1104u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x001D1104u) [[unlikely]] return; }
L_001D1104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D110Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001D110Cu) [[unlikely]] return; }
L_001D110C:
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D1110:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D10C4u | kUnwind; return; } goto L_001D10C4; }
    st32((c.r[19].w[0] + 148u), 0u);
    st32((c.r[19].w[0] + 152u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D1140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_001D119C; } }
L_001D1154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001D118C; } }
L_001D115C:
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 7;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001D118C; }
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_001D11B4; } }
L_001D118C:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D115Cu | kUnwind; return; } goto L_001D115C; }
    set32(c.r[7], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 1;
L_001D119C:
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[4], ld32((c.r[7].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D1154u | kUnwind; return; } goto L_001D1154; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D11B0u); set32(c.r[4], c.r[4].w[0] + 16476u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001D11B0u) [[unlikely]] return; }
L_001D11B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D11B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001D11C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001D11F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D11E8u); set32(c.r[4], c.r[4].w[0] + 16519u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001D11E8u) [[unlikely]] return; }
L_001D11E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D1264; } }
L_001D11F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[4].w[0] + 148u)));  if (t) { goto L_001D124C; } }
L_001D11F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001D1238; } }
L_001D1200:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D121Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001D121Cu) [[unlikely]] return; }
L_001D121C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001D1238; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_001D1264; } }
L_001D1238:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D1200u | kUnwind; return; } goto L_001D1200; }
    set32(c.r[17], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_001D124C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D11F8u | kUnwind; return; } goto L_001D11F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1260u); set32(c.r[4], c.r[4].w[0] + 16532u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001D1260u) [[unlikely]] return; }
L_001D1260:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D1264:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D1280:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D12A4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001D12A4u) [[unlikely]] return; }
L_001D12A4:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D12D8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D12D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D12D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D12D8u) [[unlikely]] return; }
L_001D12D8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 8u), 0u);  goto L_001D1328; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D1324; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D12F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001D12F4u) [[unlikely]] return; }
L_001D12F4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D1304; } }
    c.budget -= 2;
    if (c.r[6].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001D130C; }
L_001D1304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001D131C; } }
L_001D130C:
    set32(c.r[4], c.r[18].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1318u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001D1318u) [[unlikely]] return; }
L_001D1318:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D131C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001D1328; } }
L_001D1324:
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 1;
L_001D1328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[17].w[0] + 148u)));  if (t) { goto L_001D1384; } }
L_001D1330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001D1370; } }
L_001D1338:
    set32(c.r[6], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D136Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D136Cu) [[unlikely]] return; }
L_001D136C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001D1370:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D1338u | kUnwind; return; } goto L_001D1338; }
    set32(c.r[17], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_001D1384:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D1330u | kUnwind; return; } goto L_001D1330; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D13B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001D14BC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[16].w[0] + 156u);  goto L_001D142C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  goto L_001D13EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001D14C8; } }
L_001D13EC:
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D140Cu); st32((c.r[29].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001D140Cu) [[unlikely]] return; }
L_001D140C:
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 156u);
    c.budget -= 8;
L_001D142C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1434u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x001D1434u) [[unlikely]] return; }
L_001D1434:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_001D14B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1448u); set32(c.r[4], c.r[16].w[0] + 156u);  if (depth < kMaxDepth) unit_0022(c, 100u, depth + 1u); else { c.pc = 0x001A8FF0u; return; } if (c.pc != 0x001D1448u) [[unlikely]] return; }
L_001D1448:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1454u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 118u, depth + 1u); else { c.pc = 0x001D11C0u; return; } if (c.pc != 0x001D1454u) [[unlikely]] return; }
L_001D1454:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_001D1494; }
    c.f[1] = ld32((c.r[16].w[0] + 156u));
    set32(c.r[7], c.r[2].w[0] + 136u);
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    st32((c.r[29].w[0] + 40u), c.f[1]);
    st32((c.r[29].w[0] + 44u), c.f[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    st32((c.r[2].w[0] + 136u), c.r[8].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1490u); st32((c.r[2].w[0] + 140u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_002C(c, 5u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x001D1490u) [[unlikely]] return; }
L_001D1490:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_001D1494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D149Cu); set32(c.r[5], c.r[16].w[0] + 156u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001D149Cu) [[unlikely]] return; }
L_001D149C:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    st32((c.r[16].w[0] + 156u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_001D14C4; } }
L_001D14B0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_001D14BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D14C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001D14C4u) [[unlikely]] return; }
L_001D14C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001D14C8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D14E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001D153C; } }
L_001D150C:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D151Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 114u, depth + 1u); else { c.pc = 0x001D1140u; return; } if (c.pc != 0x001D151Cu) [[unlikely]] return; }
L_001D151C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001D153C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
L_001D153C:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D150Cu | kUnwind; return; } goto L_001D150C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D1570:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001D15CC; } }
L_001D159C:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D15ACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 114u, depth + 1u); else { c.pc = 0x001D1140u; return; } if (c.pc != 0x001D15ACu) [[unlikely]] return; }
L_001D15AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001D15CC; }
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
L_001D15CC:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D159Cu | kUnwind; return; } goto L_001D159C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D1600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1618u); set32(c.r[4], 0u + 164u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D1618u) [[unlikely]] return; }
L_001D1618:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001D1630; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D162Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001D0DE0u; return; } if (c.pc != 0x001D162Cu) [[unlikely]] return; }
L_001D162C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001D1630:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D1640:
    set32(c.r[2], ld32((c.r[28].w[0] - 30520u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D164C; }
L_001D164C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001D1660:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30520u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D1680; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1680u);  if (depth < kMaxDepth) unit_002C(c, 114u, depth + 1u); else { c.pc = 0x001D1140u; return; } if (c.pc != 0x001D1680u) [[unlikely]] return; }
L_001D1680:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001D1690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], c.r[8].w[0] + 16933u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D16ACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 262u, depth + 1u); else { c.pc = 0x001BE990u; return; } if (c.pc != 0x001D16ACu) [[unlikely]] return; }
L_001D16AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C500000u);
    set32(c.r[3], c.r[3].w[0] + 13728u);
    c.r[2].d[0] = c.r[2].d[0] | 17485ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 240u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 244u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D16E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D16FCu); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001D16FCu) [[unlikely]] return; }
L_001D16FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { st32((c.r[17].w[0] + 248u), 0u);  goto L_001D1718; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1710u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x001D1710u) [[unlikely]] return; }
L_001D1710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001D17B8; } }
L_001D1718:
    set32(c.r[5], 0u - 1u);
    st32((c.r[17].w[0] + 240u), c.r[5].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1728u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001D1728u) [[unlikely]] return; }
L_001D1728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D1760; } }
L_001D1730:
    set32(c.r[3], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 248u)));  goto L_001D1748; }
    set32(c.r[3], ld32((c.r[17].w[0] + 248u)));
    st32((c.r[17].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 248u)));
    c.budget -= 3;
L_001D1748:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1760u); st32((c.r[17].w[0] + 248u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001D1760u) [[unlikely]] return; }
L_001D1760:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 244u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D1730u | kUnwind; return; } goto L_001D1730; }
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 240u)));  goto L_001D1798; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1780u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001D1780u) [[unlikely]] return; }
L_001D1780:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D1794; } }
    st32((c.r[17].w[0] + 240u), 0u);
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    st32((c.r[17].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 3;
L_001D1794:
    set32(c.r[3], ld32((c.r[17].w[0] + 240u)));
    c.budget -= 1;
L_001D1798:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001D17AC; }
    st32((c.r[17].w[0] + 244u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001D17AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D17B4u);  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x001D17B4u) [[unlikely]] return; }
L_001D17B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001D17B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D17D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 261u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D17F0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001D17F0u) [[unlikely]] return; }
L_001D17F0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001D1914; }
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 96u));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001D1848; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 248u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001D183C; }
    st32((c.r[18].w[0] + 240u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001D183C:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1848u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_0027(c, 298u, depth + 1u); else { c.pc = 0x001BF0E0u; return; } if (c.pc != 0x001D1848u) [[unlikely]] return; }
L_001D1848:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 96u));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 56u)));  goto L_001D1894; }
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[18].w[0] + 240u), c.r[2].w[0]);  if (t) { goto L_001D1880; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 248u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 3;
L_001D1880:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1890u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_0027(c, 298u, depth + 1u); else { c.pc = 0x001BF0E0u; return; } if (c.pc != 0x001D1890u) [[unlikely]] return; }
L_001D1890:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 1;
L_001D1894:
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D18B8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D18B8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0027(c, 298u, depth + 1u); else { c.pc = 0x001BF0E0u; return; } if (c.pc != 0x001D18B8u) [[unlikely]] return; }
L_001D18B8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001D1910; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D18D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001D18D0u) [[unlikely]] return; }
L_001D18D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D18E8; } }
L_001D18D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D18E0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001D18E0u) [[unlikely]] return; }
L_001D18E0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 2;
L_001D18E8:
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001D1900; } }
    c.budget -= 2;
    if (c.r[16].sd[0] > 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D18D8u | kUnwind; return; } goto L_001D18D8; }
L_001D1900:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[18].w[0] + 244u), 0u);  goto L_001D1910; }
    set32(c.r[3], ld32((c.r[5].w[0] + 160u)));
    st32((c.r[18].w[0] + 244u), c.r[3].w[0]);
    c.budget -= 2;
L_001D1910:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001D1914:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D1930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D194Cu); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001D194Cu) [[unlikely]] return; }
L_001D194C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001D19F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1960u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 296u, depth + 1u); else { c.pc = 0x001BF050u; return; } if (c.pc != 0x001D1960u) [[unlikely]] return; }
L_001D1960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D19EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1970u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 274u, depth + 1u); else { c.pc = 0x001BEC30u; return; } if (c.pc != 0x001D1970u) [[unlikely]] return; }
L_001D1970:
    set32(c.r[5], ld32((c.r[17].w[0] + 244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D197Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x001D197Cu) [[unlikely]] return; }
L_001D197C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001D19CC; }
    set32(c.r[4], ld32((c.r[2].w[0] + 156u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[2].w[0] + 148u)));  goto L_001D19B4; }
    set32(c.r[6], ld32((c.r[2].w[0] + 148u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 152u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D19ACu); set32(c.r[5], c.r[5].w[0] + 16934u);  if (depth < kMaxDepth) unit_0027(c, 275u, depth + 1u); else { c.pc = 0x001BEC50u; return; } if (c.pc != 0x001D19ACu) [[unlikely]] return; }
L_001D19AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 56u)));  if (t) { goto L_001D19DC; } }
L_001D19B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D19C4u); set32(c.r[5], c.r[5].w[0] + 16943u);  if (depth < kMaxDepth) unit_0027(c, 275u, depth + 1u); else { c.pc = 0x001BEC50u; return; } if (c.pc != 0x001D19C4u) [[unlikely]] return; }
L_001D19C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D19D8; } }
L_001D19CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D19D8u); set32(c.r[5], c.r[5].w[0] + 16949u);  if (depth < kMaxDepth) unit_0027(c, 275u, depth + 1u); else { c.pc = 0x001BEC50u; return; } if (c.pc != 0x001D19D8u) [[unlikely]] return; }
L_001D19D8:
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_001D19DC:
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 4;
L_001D19EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001D19F0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D1A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1A24u); set32(c.r[8], c.r[8].w[0] + 16933u);  if (depth < kMaxDepth) unit_0027(c, 262u, depth + 1u); else { c.pc = 0x001BE990u; return; } if (c.pc != 0x001D1A24u) [[unlikely]] return; }
L_001D1A24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C500000u);
    set32(c.r[3], c.r[3].w[0] + 13648u);
    c.r[2].d[0] = c.r[2].d[0] | 17485ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u - 2u);
    st32((c.r[17].w[0] + 240u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 244u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 248u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 252u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D1A70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 261u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1A90u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001D1A90u) [[unlikely]] return; }
L_001D1A90:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001D1C3C; }
    set32(c.r[5], ld32((c.r[18].w[0] + 248u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 244u)));
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[18].w[0] + 244u)));  goto L_001D1B48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1AB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x001D1AB4u) [[unlikely]] return; }
L_001D1AB4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u - 2u);  goto L_001D1B38; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1ACCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x001C8450u; return; } if (c.pc != 0x001D1ACCu) [[unlikely]] return; }
L_001D1ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D1B2C; } }
L_001D1AD4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 168u)));
    set32(c.r[3], 0u - 256u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], ld32((c.r[7].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 255ull;
    st32((c.r[7].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 255ull;
    st32((c.r[7].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 255ull;
    st32((c.r[7].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 255ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1B2Cu); st32((c.r[7].w[0] + 172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 34u, depth + 1u); else { c.pc = 0x001C8490u; return; } if (c.pc != 0x001D1B2Cu) [[unlikely]] return; }
L_001D1B2C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0] + 172u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D1AD4u | kUnwind; return; } goto L_001D1AD4; }
    set32(c.r[2], 0u - 2u);
    c.budget -= 1;
L_001D1B38:
    st32((c.r[18].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 244u)));
    st32((c.r[18].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 244u)));
    c.budget -= 4;
L_001D1B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1B50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x001D1B50u) [[unlikely]] return; }
L_001D1B50:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001D1C38; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1B6Cu); st32((c.r[18].w[0] + 256u), 0u);  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x001C8450u; return; } if (c.pc != 0x001D1B6Cu) [[unlikely]] return; }
L_001D1B6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D1B9C; } }
L_001D1B74:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001D1B90; }
    set32(c.r[3], ld32((c.r[18].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 256u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_001D1B90:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1B9Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 34u, depth + 1u); else { c.pc = 0x001C8490u; return; } if (c.pc != 0x001D1B9Cu) [[unlikely]] return; }
L_001D1B9C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 160u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D1B74u | kUnwind; return; } goto L_001D1B74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1BACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x001D1BACu) [[unlikely]] return; }
L_001D1BAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1BBCu); st32((c.r[18].w[0] + 256u), 0u);  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x001C8450u; return; } if (c.pc != 0x001D1BBCu) [[unlikely]] return; }
L_001D1BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D1C30; } }
L_001D1BC4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 160u)));  goto L_001D1C00; }
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[5].w[0] + 172u), 0u);  goto L_001D1BF0; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[5].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 180u)));
    st32((c.r[18].w[0] + 252u), c.r[2].w[0]);
    c.budget -= 4;
L_001D1BF0:
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 160u)));
    c.budget -= 4;
L_001D1C00:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[4].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001D1C24; }
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[5].w[0] + 172u), 0u);  goto L_001D1C20; }
    st32((c.r[5].w[0] + 172u), c.r[4].w[0]);
    c.budget -= 1;
L_001D1C20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D1C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1C2Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 34u, depth + 1u); else { c.pc = 0x001C8490u; return; } if (c.pc != 0x001D1C2Cu) [[unlikely]] return; }
L_001D1C2C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D1C30:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 160u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D1BC4u | kUnwind; return; } goto L_001D1BC4; }
L_001D1C38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001D1C3C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001D1C50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 96u));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D1CA8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 256u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001D1CA0; }
    set32(c.r[2], 0u - 2u);
    st32((c.r[16].w[0] + 240u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_001D1CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1CA8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0027(c, 298u, depth + 1u); else { c.pc = 0x001BF0E0u; return; } if (c.pc != 0x001D1CA8u) [[unlikely]] return; }
L_001D1CA8:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 96u));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  goto L_001D1CF4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].sd[0] < -2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[16].w[0] + 240u), c.r[2].w[0]);  if (t) { goto L_001D1CE4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 256u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 3;
L_001D1CE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1CF0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0027(c, 298u, depth + 1u); else { c.pc = 0x001BF0E0u; return; } if (c.pc != 0x001D1CF0u) [[unlikely]] return; }
L_001D1CF0:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_001D1CF4:
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001D1D1C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1D18u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0027(c, 298u, depth + 1u); else { c.pc = 0x001BF0E0u; return; } if (c.pc != 0x001D1D18u) [[unlikely]] return; }
L_001D1D18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001D1D1C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D1D30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1D48u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0027(c, 296u, depth + 1u); else { c.pc = 0x001BF050u; return; } if (c.pc != 0x001D1D48u) [[unlikely]] return; }
L_001D1D48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001D1E08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1D58u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001D1D58u) [[unlikely]] return; }
L_001D1D58:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001D1E04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1D6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 274u, depth + 1u); else { c.pc = 0x001BEC30u; return; } if (c.pc != 0x001D1D6Cu) [[unlikely]] return; }
L_001D1D6C:
    set32(c.r[5], ld32((c.r[17].w[0] + 244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1D78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x001D1D78u) [[unlikely]] return; }
L_001D1D78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001D1DE4; }
    set32(c.r[3], ld32((c.r[17].w[0] + 240u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001D1DB8; }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001D1DA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 252u)));  if (t) { goto L_001D1DCC; } }
L_001D1DA4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1DB0u); set32(c.r[5], c.r[5].w[0] + 16953u);  if (depth < kMaxDepth) unit_0027(c, 275u, depth + 1u); else { c.pc = 0x001BEC50u; return; } if (c.pc != 0x001D1DB0u) [[unlikely]] return; }
L_001D1DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 56u)));  if (t) { goto L_001D1DF4; } }
L_001D1DB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1DC4u); set32(c.r[5], c.r[5].w[0] + 16960u);  if (depth < kMaxDepth) unit_0027(c, 275u, depth + 1u); else { c.pc = 0x001BEC50u; return; } if (c.pc != 0x001D1DC4u) [[unlikely]] return; }
L_001D1DC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D1DF0; } }
L_001D1DCC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1DDCu); set32(c.r[5], c.r[5].w[0] + 16965u);  if (depth < kMaxDepth) unit_0027(c, 275u, depth + 1u); else { c.pc = 0x001BEC50u; return; } if (c.pc != 0x001D1DDCu) [[unlikely]] return; }
L_001D1DDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D1DF0; } }
L_001D1DE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1DF0u); set32(c.r[5], c.r[5].w[0] + 16949u);  if (depth < kMaxDepth) unit_0027(c, 275u, depth + 1u); else { c.pc = 0x001BEC50u; return; } if (c.pc != 0x001D1DF0u) [[unlikely]] return; }
L_001D1DF0:
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_001D1DF4:
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 4;
L_001D1E04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001D1E08:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D1E20:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    set32(c.r[4], 0u + 261u);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1E5Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001D1E5Cu) [[unlikely]] return; }
L_001D1E5C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_001D1FF4; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1E74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 222u, depth + 1u); else { c.pc = 0x001D2020u; return; } if (c.pc != 0x001D1E74u) [[unlikely]] return; }
L_001D1E74:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1E80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 284u, depth + 1u); else { c.pc = 0x001AAEB0u; return; } if (c.pc != 0x001D1E80u) [[unlikely]] return; }
L_001D1E80:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001D1E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1E90u); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0022(c, 251u, depth + 1u); else { c.pc = 0x001AA920u; return; } if (c.pc != 0x001D1E90u) [[unlikely]] return; }
L_001D1E90:
    set32(c.r[2], c.r[18].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1EA4u); st32((c.r[2].w[0] + 144u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 292u, depth + 1u); else { c.pc = 0x001AAFD0u; return; } if (c.pc != 0x001D1EA4u) [[unlikely]] return; }
L_001D1EA4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D1E88u | kUnwind; return; } goto L_001D1E88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 48u)));
    set32(c.r[5], c.r[5].w[0] - 44u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[3], 0u + 7u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 7;
L_001D1ED4:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D1ED4u | kUnwind; return; } goto L_001D1ED4; } }
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[24] = ld32((c.r[29].w[0] + 148u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[23] = ld32((c.r[29].w[0] + 152u));
    c.f[22] = ld32((c.r[29].w[0] + 156u));
    c.f[21] = ld32((c.r[29].w[0] + 160u));
    c.f[20] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[24]);
    st32((c.r[29].w[0] + 124u), c.f[23]);
    st32((c.r[29].w[0] + 128u), c.f[22]);
    st32((c.r[29].w[0] + 132u), c.f[21]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1F2Cu); st32((c.r[29].w[0] + 136u), c.f[20]);  if (depth < kMaxDepth) unit_002A(c, 358u, depth + 1u); else { c.pc = 0x001CAF70u; return; } if (c.pc != 0x001D1F2Cu) [[unlikely]] return; }
L_001D1F2C:
    set32(c.r[4], ld32((c.r[17].w[0] + 252u)));
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1F50u); c.r[5].d[0] = ld64((c.r[29].w[0] + 216u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D1F50u) [[unlikely]] return; }
L_001D1F50:
    set32(c.r[4], ld32((c.r[17].w[0] + 260u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 208u), c.f[24]);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1F70u); c.r[5].d[0] = ld64((c.r[29].w[0] + 208u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D1F70u) [[unlikely]] return; }
L_001D1F70:
    set32(c.r[4], ld32((c.r[17].w[0] + 268u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 200u), c.f[23]);
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1F90u); c.r[5].d[0] = ld64((c.r[29].w[0] + 200u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D1F90u) [[unlikely]] return; }
L_001D1F90:
    set32(c.r[4], ld32((c.r[17].w[0] + 256u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 192u), c.f[22]);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1FB0u); c.r[5].d[0] = ld64((c.r[29].w[0] + 192u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D1FB0u) [[unlikely]] return; }
L_001D1FB0:
    set32(c.r[4], ld32((c.r[17].w[0] + 264u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 184u), c.f[21]);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1FD0u); c.r[5].d[0] = ld64((c.r[29].w[0] + 184u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D1FD0u) [[unlikely]] return; }
L_001D1FD0:
    set32(c.r[4], ld32((c.r[17].w[0] + 272u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D1FF0u); c.r[5].d[0] = ld64((c.r[29].w[0] + 176u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D1FF0u) [[unlikely]] return; }
L_001D1FF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001D1FF4:
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001D2020:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 284u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D206C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D204Cu); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001D204Cu) [[unlikely]] return; }
L_001D204C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D2068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D205Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 263u, depth + 1u); else { c.pc = 0x001AAAC0u; return; } if (c.pc != 0x001D205Cu) [[unlikely]] return; }
L_001D205C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 10296u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001D2068:
    st32((c.r[16].w[0] + 284u), c.r[18].w[0]);
    c.budget -= 1;
L_001D206C:
    set32(c.r[4], ld32((c.r[16].w[0] + 284u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 31848u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D207Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 286u, depth + 1u); else { c.pc = 0x001AAEF0u; return; } if (c.pc != 0x001D207Cu) [[unlikely]] return; }
L_001D207C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D20AC; } }
L_001D2084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D208Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 301u, depth + 1u); else { c.pc = 0x001AB140u; return; } if (c.pc != 0x001D208Cu) [[unlikely]] return; }
L_001D208C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2094u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 248u, depth + 1u); else { c.pc = 0x001AA890u; return; } if (c.pc != 0x001D2094u) [[unlikely]] return; }
L_001D2094:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001D20B4; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 31848u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D20A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 293u, depth + 1u); else { c.pc = 0x001AAFE0u; return; } if (c.pc != 0x001D20A8u) [[unlikely]] return; }
L_001D20A8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D20AC:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31844u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D2084u | kUnwind; return; } goto L_001D2084; }
L_001D20B4:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_001D21F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D20C4u); set32(c.r[4], ld32((c.r[16].w[0] + 284u)));  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001D20C4u) [[unlikely]] return; }
L_001D20C4:
    set32(c.r[16], ld32((c.r[28].w[0] - 31848u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D20FC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D20FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D20FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D20FCu) [[unlikely]] return; }
L_001D20FC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 8u), 0u);  goto L_001D2154; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D2150; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2118u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001D2118u) [[unlikely]] return; }
L_001D2118:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001D2144; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001D2134; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D2144; } }
L_001D2134:
    set32(c.r[4], c.r[18].w[0] + 8u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2144u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001D2144u) [[unlikely]] return; }
L_001D2144:
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 31844u)));  if (t) { goto L_001D2158; } }
L_001D2150:
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 1;
L_001D2154:
    set32(c.r[5], ld32((c.r[28].w[0] - 31844u)));
    c.budget -= 1;
L_001D2158:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 68u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2170u); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0022(c, 304u, depth + 1u); else { c.pc = 0x001AB1B0u; return; } if (c.pc != 0x001D2170u) [[unlikely]] return; }
L_001D2170:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_001D219C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D2198; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2198u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D2198u) [[unlikely]] return; }
L_001D2198:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D219C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D21A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001D21A4u) [[unlikely]] return; }
L_001D21A4:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001D21DC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D21DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D21DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D21DCu) [[unlikely]] return; }
L_001D21DC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D219Cu | kUnwind; return; } goto L_001D219C; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001D21F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D2210:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2224u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 225u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x001D2224u) [[unlikely]] return; }
L_001D2224:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43530000u);
    set32(c.r[3], c.r[3].w[0] + 13568u);
    c.r[2].d[0] = c.r[2].d[0] | 17485ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], 0u + 320u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2248u); st32((c.r[16].w[0] + 352u), 0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D2248u) [[unlikely]] return; }
L_001D2248:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 348u), c.r[2].w[0]);  goto L_001D227C; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 20074u);
    set32(c.r[7], c.r[7].w[0] + 17161u);
    set32(c.r[8], c.r[8].w[0] + 16544u);
    set32(c.r[9], 0u + 2u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2278u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 26u, depth + 1u); else { c.pc = 0x001C02B0u; return; } if (c.pc != 0x001D2278u) [[unlikely]] return; }
L_001D2278:
    st32((c.r[16].w[0] + 348u), c.r[2].w[0]);
    c.budget -= 1;
L_001D227C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30544u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001D22B0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 348u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D22A8u); c.r[5].d[0] = ld64((c.r[29].w[0] + 64u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D22A8u) [[unlikely]] return; }
L_001D22A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 240u);  if (t) { goto L_001D22D8; } }
L_001D22B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001D22D4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 348u)));
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D22D4u); c.r[5].d[0] = ld64((c.r[29].w[0] + 56u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D22D4u) [[unlikely]] return; }
L_001D22D4:
    set32(c.r[4], 0u + 240u);
    c.budget -= 1;
L_001D22D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D22E0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D22E0u) [[unlikely]] return; }
L_001D22E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 240u);  goto L_001D2304; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2300u); set32(c.r[7], c.r[7].w[0] + 17166u);  if (depth < kMaxDepth) unit_0027(c, 371u, depth + 1u); else { c.pc = 0x001BFB20u; return; } if (c.pc != 0x001D2300u) [[unlikely]] return; }
L_001D2300:
    set32(c.r[4], 0u + 240u);
    c.budget -= 1;
L_001D2304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D230Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D230Cu) [[unlikely]] return; }
L_001D230C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 332u), c.r[2].w[0]);  goto L_001D234C; }
    set32(c.r[9], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0]), c.r[9].d[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[9].d[0]);
    set32(c.r[6], 0u - 20078u);
    set32(c.r[7], c.r[7].w[0] + 17174u);
    set32(c.r[8], c.r[8].w[0] + 17179u);
    set32(c.r[10], 0u + 99u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2348u); c.r[11].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 378u, depth + 1u); else { c.pc = 0x001BFC10u; return; } if (c.pc != 0x001D2348u) [[unlikely]] return; }
L_001D2348:
    st32((c.r[16].w[0] + 332u), c.r[2].w[0]);
    c.budget -= 1;
L_001D234C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2354u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D2354u) [[unlikely]] return; }
L_001D2354:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 336u), c.r[2].w[0]);  goto L_001D2394; }
    set32(c.r[9], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0]), c.r[9].d[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[9].d[0]);
    set32(c.r[6], 0u - 20077u);
    set32(c.r[7], c.r[7].w[0] + 17183u);
    set32(c.r[8], c.r[8].w[0] + 17179u);
    set32(c.r[10], 0u + 99u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2390u); c.r[11].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 378u, depth + 1u); else { c.pc = 0x001BFC10u; return; } if (c.pc != 0x001D2390u) [[unlikely]] return; }
L_001D2390:
    st32((c.r[16].w[0] + 336u), c.r[2].w[0]);
    c.budget -= 1;
L_001D2394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D239Cu); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D239Cu) [[unlikely]] return; }
L_001D239C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 240u);  goto L_001D23C0; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D23BCu); set32(c.r[7], c.r[7].w[0] + 17188u);  if (depth < kMaxDepth) unit_0027(c, 371u, depth + 1u); else { c.pc = 0x001BFB20u; return; } if (c.pc != 0x001D23BCu) [[unlikely]] return; }
L_001D23BC:
    set32(c.r[4], 0u + 240u);
    c.budget -= 1;
L_001D23C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D23C8u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D23C8u) [[unlikely]] return; }
L_001D23C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 340u), c.r[2].w[0]);  goto L_001D240C; }
    set32(c.r[9], 0u + 1000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[9].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 20076u);
    set32(c.r[7], c.r[7].w[0] + 17196u);
    set32(c.r[8], c.r[8].w[0] + 17179u);
    set32(c.r[10], 0u + 9000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2408u); c.r[11].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 378u, depth + 1u); else { c.pc = 0x001BFC10u; return; } if (c.pc != 0x001D2408u) [[unlikely]] return; }
L_001D2408:
    st32((c.r[16].w[0] + 340u), c.r[2].w[0]);
    c.budget -= 1;
L_001D240C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2414u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D2414u) [[unlikely]] return; }
L_001D2414:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 344u), c.r[2].w[0]);  goto L_001D2458; }
    set32(c.r[3], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[6], 0u - 20075u);
    set32(c.r[7], c.r[7].w[0] + 17200u);
    set32(c.r[8], c.r[8].w[0] + 17179u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 999u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2454u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 378u, depth + 1u); else { c.pc = 0x001BFC10u; return; } if (c.pc != 0x001D2454u) [[unlikely]] return; }
L_001D2454:
    st32((c.r[16].w[0] + 344u), c.r[2].w[0]);
    c.budget -= 1;
L_001D2458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2460u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D2460u) [[unlikely]] return; }
L_001D2460:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 252u);  goto L_001D2484; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2480u); set32(c.r[7], c.r[7].w[0] + 17067u);  if (depth < kMaxDepth) unit_0027(c, 371u, depth + 1u); else { c.pc = 0x001BFB20u; return; } if (c.pc != 0x001D2480u) [[unlikely]] return; }
L_001D2480:
    set32(c.r[4], 0u + 252u);
    c.budget -= 1;
L_001D2484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D248Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D248Cu) [[unlikely]] return; }
L_001D248C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 264u), c.r[2].w[0]);  goto L_001D24B0; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 20095u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D24ACu); set32(c.r[7], c.r[7].w[0] + 17208u);  if (depth < kMaxDepth) unit_002C(c, 152u, depth + 1u); else { c.pc = 0x001D1690u; return; } if (c.pc != 0x001D24ACu) [[unlikely]] return; }
L_001D24AC:
    st32((c.r[16].w[0] + 264u), c.r[2].w[0]);
    c.budget -= 1;
L_001D24B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D24B8u); set32(c.r[4], 0u + 260u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D24B8u) [[unlikely]] return; }
L_001D24B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 324u), c.r[2].w[0]);  goto L_001D24E0; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 20080u);
    set32(c.r[7], c.r[7].w[0] + 17214u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D24DCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 178u, depth + 1u); else { c.pc = 0x001D1A00u; return; } if (c.pc != 0x001D24DCu) [[unlikely]] return; }
L_001D24DC:
    st32((c.r[16].w[0] + 324u), c.r[2].w[0]);
    c.budget -= 1;
L_001D24E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D24E8u); set32(c.r[4], 0u + 320u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D24E8u) [[unlikely]] return; }
L_001D24E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 328u), c.r[2].w[0]);  goto L_001D2514; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 20079u);
    set32(c.r[7], c.r[7].w[0] + 17220u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2510u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 75u, depth + 1u); else { c.pc = 0x001C0950u; return; } if (c.pc != 0x001D2510u) [[unlikely]] return; }
L_001D2510:
    st32((c.r[16].w[0] + 328u), c.r[2].w[0]);
    c.budget -= 1;
L_001D2514:
    set32(c.r[3], 0u + 1u);
    set32(c.r[25], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 72u), 0u);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 72u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2534u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D2534u) [[unlikely]] return; }
L_001D2534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D253Cu); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D253Cu) [[unlikely]] return; }
L_001D253C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 240u);  goto L_001D2560; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D255Cu); set32(c.r[7], c.r[7].w[0] + 17067u);  if (depth < kMaxDepth) unit_0027(c, 371u, depth + 1u); else { c.pc = 0x001BFB20u; return; } if (c.pc != 0x001D255Cu) [[unlikely]] return; }
L_001D255C:
    set32(c.r[4], 0u + 240u);
    c.budget -= 1;
L_001D2560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2568u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D2568u) [[unlikely]] return; }
L_001D2568:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 240u);  goto L_001D258C; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2588u); set32(c.r[7], c.r[7].w[0] + 17227u);  if (depth < kMaxDepth) unit_0027(c, 371u, depth + 1u); else { c.pc = 0x001BFB20u; return; } if (c.pc != 0x001D2588u) [[unlikely]] return; }
L_001D2588:
    set32(c.r[4], 0u + 240u);
    c.budget -= 1;
L_001D258C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2594u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D2594u) [[unlikely]] return; }
L_001D2594:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 244u), c.r[2].w[0]);  goto L_001D25D8; }
    set32(c.r[3], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[9], 0u - 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[6], 0u - 20100u);
    set32(c.r[7], c.r[7].w[0] + 17232u);
    set32(c.r[8], c.r[8].w[0] + 17179u);
    set32(c.r[10], 0u + 99u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D25D4u); c.r[11].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 378u, depth + 1u); else { c.pc = 0x001BFC10u; return; } if (c.pc != 0x001D25D4u) [[unlikely]] return; }
L_001D25D4:
    st32((c.r[16].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 1;
L_001D25D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D25E0u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D25E0u) [[unlikely]] return; }
L_001D25E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 248u), c.r[2].w[0]);  goto L_001D2620; }
    set32(c.r[9], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0]), c.r[9].d[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[9].d[0]);
    set32(c.r[6], 0u - 20099u);
    set32(c.r[7], c.r[7].w[0] + 17237u);
    set32(c.r[8], c.r[8].w[0] + 17179u);
    set32(c.r[10], 0u + 99u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D261Cu); c.r[11].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 378u, depth + 1u); else { c.pc = 0x001BFC10u; return; } if (c.pc != 0x001D261Cu) [[unlikely]] return; }
L_001D261C:
    st32((c.r[16].w[0] + 248u), c.r[2].w[0]);
    c.budget -= 1;
L_001D2620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2628u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D2628u) [[unlikely]] return; }
L_001D2628:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 252u), c.r[2].w[0]);  goto L_001D266C; }
    set32(c.r[3], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[6], 0u - 20098u);
    set32(c.r[7], c.r[7].w[0] + 17243u);
    set32(c.r[8], c.r[8].w[0] + 17179u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 10u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2668u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 378u, depth + 1u); else { c.pc = 0x001BFC10u; return; } if (c.pc != 0x001D2668u) [[unlikely]] return; }
L_001D2668:
    st32((c.r[16].w[0] + 252u), c.r[2].w[0]);
    c.budget -= 1;
L_001D266C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2674u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D2674u) [[unlikely]] return; }
L_001D2674:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 256u), c.r[2].w[0]);  goto L_001D26B8; }
    set32(c.r[3], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[6], 0u - 20097u);
    set32(c.r[7], c.r[7].w[0] + 17248u);
    set32(c.r[8], c.r[8].w[0] + 17179u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 6u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D26B4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 378u, depth + 1u); else { c.pc = 0x001BFC10u; return; } if (c.pc != 0x001D26B4u) [[unlikely]] return; }
L_001D26B4:
    st32((c.r[16].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 1;
L_001D26B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D26C0u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D26C0u) [[unlikely]] return; }
L_001D26C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 320u);  goto L_001D26E4; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D26E0u); set32(c.r[7], c.r[7].w[0] + 17067u);  if (depth < kMaxDepth) unit_0027(c, 371u, depth + 1u); else { c.pc = 0x001BFB20u; return; } if (c.pc != 0x001D26E0u) [[unlikely]] return; }
L_001D26E0:
    set32(c.r[4], 0u + 320u);
    c.budget -= 1;
L_001D26E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D26ECu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D26ECu) [[unlikely]] return; }
L_001D26EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 268u), c.r[2].w[0]);  goto L_001D2720; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 20094u);
    set32(c.r[7], c.r[7].w[0] + 17255u);
    set32(c.r[8], c.r[8].w[0] + 16576u);
    set32(c.r[9], 0u + 5u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D271Cu); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 26u, depth + 1u); else { c.pc = 0x001C02B0u; return; } if (c.pc != 0x001D271Cu) [[unlikely]] return; }
L_001D271C:
    st32((c.r[16].w[0] + 268u), c.r[2].w[0]);
    c.budget -= 1;
L_001D2720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2728u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D2728u) [[unlikely]] return; }
L_001D2728:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 272u), c.r[2].w[0]);  goto L_001D276C; }
    set32(c.r[3], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[10], 0u + 255u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 20093u);
    set32(c.r[7], c.r[7].w[0] + 17261u);
    set32(c.r[8], c.r[8].w[0] + 17179u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2768u); st64((c.r[29].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_0027(c, 378u, depth + 1u); else { c.pc = 0x001BFC10u; return; } if (c.pc != 0x001D2768u) [[unlikely]] return; }
L_001D2768:
    st32((c.r[16].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 1;
L_001D276C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2774u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D2774u) [[unlikely]] return; }
L_001D2774:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 276u), c.r[2].w[0]);  goto L_001D27B8; }
    set32(c.r[3], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[10], 0u + 255u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 20092u);
    set32(c.r[7], c.r[7].w[0] + 17268u);
    set32(c.r[8], c.r[8].w[0] + 17179u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D27B4u); st64((c.r[29].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_0027(c, 378u, depth + 1u); else { c.pc = 0x001BFC10u; return; } if (c.pc != 0x001D27B4u) [[unlikely]] return; }
L_001D27B4:
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    c.budget -= 1;
L_001D27B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D27C0u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D27C0u) [[unlikely]] return; }
L_001D27C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 280u), c.r[2].w[0]);  goto L_001D2804; }
    set32(c.r[3], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[10], 0u + 255u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 20091u);
    set32(c.r[7], c.r[7].w[0] + 17273u);
    set32(c.r[8], c.r[8].w[0] + 17179u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2800u); st64((c.r[29].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_0027(c, 378u, depth + 1u); else { c.pc = 0x001BFC10u; return; } if (c.pc != 0x001D2800u) [[unlikely]] return; }
L_001D2800:
    st32((c.r[16].w[0] + 280u), c.r[2].w[0]);
    c.budget -= 1;
L_001D2804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D280Cu); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D280Cu) [[unlikely]] return; }
L_001D280C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 284u), c.r[2].w[0]);  goto L_001D2850; }
    set32(c.r[3], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[10], 0u + 255u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 20090u);
    set32(c.r[7], c.r[7].w[0] + 17280u);
    set32(c.r[8], c.r[8].w[0] + 17179u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D284Cu); st64((c.r[29].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_0027(c, 378u, depth + 1u); else { c.pc = 0x001BFC10u; return; } if (c.pc != 0x001D284Cu) [[unlikely]] return; }
L_001D284C:
    st32((c.r[16].w[0] + 284u), c.r[2].w[0]);
    c.budget -= 1;
L_001D2850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2858u); set32(c.r[4], 0u + 320u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D2858u) [[unlikely]] return; }
L_001D2858:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 288u), c.r[2].w[0]);  goto L_001D288C; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 20089u);
    set32(c.r[7], c.r[7].w[0] + 17286u);
    set32(c.r[8], c.r[8].w[0] + 16640u);
    set32(c.r[9], 0u + 2u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2888u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 26u, depth + 1u); else { c.pc = 0x001C02B0u; return; } if (c.pc != 0x001D2888u) [[unlikely]] return; }
L_001D2888:
    st32((c.r[16].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 1;
L_001D288C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2894u); set32(c.r[4], 0u + 320u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D2894u) [[unlikely]] return; }
L_001D2894:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  goto L_001D28C8; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 20088u);
    set32(c.r[7], c.r[7].w[0] + 17292u);
    set32(c.r[8], c.r[8].w[0] + 16672u);
    set32(c.r[9], 0u + 8u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D28C4u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 26u, depth + 1u); else { c.pc = 0x001C02B0u; return; } if (c.pc != 0x001D28C4u) [[unlikely]] return; }
L_001D28C4:
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 1;
L_001D28C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D28D0u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D28D0u) [[unlikely]] return; }
L_001D28D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 296u), c.r[2].w[0]);  goto L_001D2914; }
    set32(c.r[3], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[10], 0u + 255u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 20087u);
    set32(c.r[7], c.r[7].w[0] + 17301u);
    set32(c.r[8], c.r[8].w[0] + 17179u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2910u); st64((c.r[29].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_0027(c, 378u, depth + 1u); else { c.pc = 0x001BFC10u; return; } if (c.pc != 0x001D2910u) [[unlikely]] return; }
L_001D2910:
    st32((c.r[16].w[0] + 296u), c.r[2].w[0]);
    c.budget -= 1;
L_001D2914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D291Cu); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D291Cu) [[unlikely]] return; }
L_001D291C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 300u), c.r[2].w[0]);  goto L_001D2960; }
    set32(c.r[3], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[10], 0u + 255u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 20086u);
    set32(c.r[7], c.r[7].w[0] + 17309u);
    set32(c.r[8], c.r[8].w[0] + 17179u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D295Cu); st64((c.r[29].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_0027(c, 378u, depth + 1u); else { c.pc = 0x001BFC10u; return; } if (c.pc != 0x001D295Cu) [[unlikely]] return; }
L_001D295C:
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 1;
L_001D2960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2968u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D2968u) [[unlikely]] return; }
L_001D2968:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 304u), c.r[2].w[0]);  goto L_001D29AC; }
    set32(c.r[3], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[10], 0u + 255u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 20085u);
    set32(c.r[7], c.r[7].w[0] + 17317u);
    set32(c.r[8], c.r[8].w[0] + 17179u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D29A8u); st64((c.r[29].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_0027(c, 378u, depth + 1u); else { c.pc = 0x001BFC10u; return; } if (c.pc != 0x001D29A8u) [[unlikely]] return; }
L_001D29A8:
    st32((c.r[16].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 1;
L_001D29AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D29B4u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D29B4u) [[unlikely]] return; }
L_001D29B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 308u), c.r[2].w[0]);  goto L_001D29F8; }
    set32(c.r[3], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[10], 0u + 255u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 20084u);
    set32(c.r[7], c.r[7].w[0] + 17325u);
    set32(c.r[8], c.r[8].w[0] + 17179u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D29F4u); st64((c.r[29].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_0027(c, 378u, depth + 1u); else { c.pc = 0x001BFC10u; return; } if (c.pc != 0x001D29F4u) [[unlikely]] return; }
L_001D29F4:
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 1;
L_001D29F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2A00u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D2A00u) [[unlikely]] return; }
L_001D2A00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 312u), c.r[2].w[0]);  goto L_001D2A44; }
    set32(c.r[3], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[10], 0u + 255u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 20083u);
    set32(c.r[7], c.r[7].w[0] + 17333u);
    set32(c.r[8], c.r[8].w[0] + 17179u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2A40u); st64((c.r[29].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_0027(c, 378u, depth + 1u); else { c.pc = 0x001BFC10u; return; } if (c.pc != 0x001D2A40u) [[unlikely]] return; }
L_001D2A40:
    st32((c.r[16].w[0] + 312u), c.r[2].w[0]);
    c.budget -= 1;
L_001D2A44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2A4Cu); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D2A4Cu) [[unlikely]] return; }
L_001D2A4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 316u), c.r[2].w[0]);  goto L_001D2A90; }
    set32(c.r[3], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[10], 0u + 255u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 20082u);
    set32(c.r[7], c.r[7].w[0] + 17341u);
    set32(c.r[8], c.r[8].w[0] + 17179u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2A8Cu); st64((c.r[29].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_0027(c, 378u, depth + 1u); else { c.pc = 0x001BFC10u; return; } if (c.pc != 0x001D2A8Cu) [[unlikely]] return; }
L_001D2A8C:
    st32((c.r[16].w[0] + 316u), c.r[2].w[0]);
    c.budget -= 1;
L_001D2A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2A98u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D2A98u) [[unlikely]] return; }
L_001D2A98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 320u), c.r[2].w[0]);  goto L_001D2ADC; }
    set32(c.r[3], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[10], 0u + 255u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 20081u);
    set32(c.r[7], c.r[7].w[0] + 17349u);
    set32(c.r[8], c.r[8].w[0] + 17179u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2AD8u); st64((c.r[29].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_0027(c, 378u, depth + 1u); else { c.pc = 0x001BFC10u; return; } if (c.pc != 0x001D2AD8u) [[unlikely]] return; }
L_001D2AD8:
    st32((c.r[16].w[0] + 320u), c.r[2].w[0]);
    c.budget -= 1;
L_001D2ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2AE4u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001D2AE4u) [[unlikely]] return; }
L_001D2AE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 260u), c.r[2].w[0]);  goto L_001D2B08; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u - 20096u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2B04u); set32(c.r[7], c.r[7].w[0] + 17357u);  if (depth < kMaxDepth) unit_0027(c, 371u, depth + 1u); else { c.pc = 0x001BFB20u; return; } if (c.pc != 0x001D2B04u) [[unlikely]] return; }
L_001D2B04:
    st32((c.r[16].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 1;
L_001D2B08:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001D2B20:
    set32(c.r[29], c.r[29].w[0] - 496u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 261u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2B4Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001D2B4Cu) [[unlikely]] return; }
L_001D2B4C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 264u)));  goto L_001D2B68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2B60u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 228u, depth + 1u); else { c.pc = 0x001BE460u; return; } if (c.pc != 0x001D2B60u) [[unlikely]] return; }
L_001D2B60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_001D388C; } }
L_001D2B68:
    set32(c.r[5], ld32((c.r[2].w[0] + 244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2B74u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x001D2B74u) [[unlikely]] return; }
L_001D2B74:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001D2B84; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 184u)));
    c.budget -= 1;
L_001D2B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2B8Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 228u, depth + 1u); else { c.pc = 0x001BE460u; return; } if (c.pc != 0x001D2B8Cu) [[unlikely]] return; }
L_001D2B8C:
    set32(c.r[5], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[20].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D3888; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 56u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 56u);  if (t) { goto L_001D2BC8; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_001D2BC8; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001D2BC8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001D3528; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 20100u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(27ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_001D3528; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 16768u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001D0000u < 16384u) { entry = entries_002C[(t - 0x001D0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001D2C00:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001D3528; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 252u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2C20u); set32(c.r[4], c.r[29].w[0] + 360u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D2C20u) [[unlikely]] return; }
L_001D2C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2C28u); set32(c.r[4], c.r[29].w[0] + 360u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D2C28u) [[unlikely]] return; }
L_001D2C28:
    set32(c.r[5], ld32((c.r[20].w[0] + 248u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2C40u); set32(c.r[4], c.r[29].w[0] + 368u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D2C40u) [[unlikely]] return; }
L_001D2C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2C48u); set32(c.r[4], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D2C48u) [[unlikely]] return; }
L_001D2C48:
    set32(c.r[5], ld32((c.r[20].w[0] + 244u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2C60u); set32(c.r[4], c.r[29].w[0] + 376u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D2C60u) [[unlikely]] return; }
L_001D2C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2C68u); set32(c.r[4], c.r[29].w[0] + 376u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D2C68u) [[unlikely]] return; }
L_001D2C68:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] << 32;
    c.r[8].d[0] = c.r[16].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2C8Cu); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 407u, depth + 1u); else { c.pc = 0x001CFA40u; return; } if (c.pc != 0x001D2C8Cu) [[unlikely]] return; }
L_001D2C8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3528; } }
L_001D2C94:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001D3528; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 252u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2CB4u); set32(c.r[4], c.r[29].w[0] + 344u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D2CB4u) [[unlikely]] return; }
L_001D2CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2CBCu); set32(c.r[4], c.r[29].w[0] + 344u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D2CBCu) [[unlikely]] return; }
L_001D2CBC:
    set32(c.r[5], ld32((c.r[20].w[0] + 244u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2CD4u); set32(c.r[4], c.r[29].w[0] + 352u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D2CD4u) [[unlikely]] return; }
L_001D2CD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2CDCu); set32(c.r[4], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D2CDCu) [[unlikely]] return; }
L_001D2CDC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2CECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 387u, depth + 1u); else { c.pc = 0x001CB2C0u; return; } if (c.pc != 0x001D2CECu) [[unlikely]] return; }
L_001D2CEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3528; } }
L_001D2CF4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001D3528; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 256u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2D14u); set32(c.r[4], c.r[29].w[0] + 328u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D2D14u) [[unlikely]] return; }
L_001D2D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2D1Cu); set32(c.r[4], c.r[29].w[0] + 328u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D2D1Cu) [[unlikely]] return; }
L_001D2D1C:
    set32(c.r[5], ld32((c.r[20].w[0] + 244u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2D34u); set32(c.r[4], c.r[29].w[0] + 336u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D2D34u) [[unlikely]] return; }
L_001D2D34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2D3Cu); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D2D3Cu) [[unlikely]] return; }
L_001D2D3C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2D4Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 382u, depth + 1u); else { c.pc = 0x001CB240u; return; } if (c.pc != 0x001D2D4Cu) [[unlikely]] return; }
L_001D2D4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3528; } }
L_001D2D54:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001D3528; } }
    st32((c.r[17].w[0] + 208u), 0u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 292u)));
    set32(c.r[3], 0u + 255u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 320u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st32((c.r[17].w[0] + 292u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 212u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[17].w[0] + 292u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 240u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[17].w[0] + 292u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 244u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[17].w[0] + 292u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 224u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[17].w[0] + 292u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 228u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[17].w[0] + 292u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 264u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[17].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 272u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 39;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2DF8u); c.r[5].d[0] = ld64((c.r[29].w[0] + 320u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D2DF8u) [[unlikely]] return; }
L_001D2DF8:
    set32(c.r[4], ld32((c.r[20].w[0] + 276u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2E1Cu); c.r[5].d[0] = ld64((c.r[29].w[0] + 312u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D2E1Cu) [[unlikely]] return; }
L_001D2E1C:
    set32(c.r[4], ld32((c.r[20].w[0] + 280u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2E40u); c.r[5].d[0] = ld64((c.r[29].w[0] + 304u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D2E40u) [[unlikely]] return; }
L_001D2E40:
    set32(c.r[4], ld32((c.r[20].w[0] + 284u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 296u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2E64u); c.r[5].d[0] = ld64((c.r[29].w[0] + 296u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D2E64u) [[unlikely]] return; }
L_001D2E64:
    set32(c.r[3], ld32((c.r[17].w[0] + 160u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = c.r[2].d[0] | 255ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[6], 0u - 256u);
    c.r[4].d[0] = c.r[7].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st32((c.r[17].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 255ull;
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 255ull;
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 255ull;
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 255ull;
    st32((c.r[17].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65280ull;
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65280ull;
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65280ull;
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65280ull;
    st32((c.r[17].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 75;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 172u), c.r[2].w[0]);  if (t) { goto L_001D3528; } }
L_001D2F90:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001D3528; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 268u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2FACu); set32(c.r[4], c.r[29].w[0] + 424u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D2FACu) [[unlikely]] return; }
L_001D2FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2FB4u); set32(c.r[4], c.r[29].w[0] + 424u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D2FB4u) [[unlikely]] return; }
L_001D2FB4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { set32(c.r[5], ld32((c.r[20].w[0] + 272u)));  goto L_001D3174; }
    set32(c.r[5], ld32((c.r[20].w[0] + 272u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2FD4u); set32(c.r[4], c.r[29].w[0] + 224u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D2FD4u) [[unlikely]] return; }
L_001D2FD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D2FDCu); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D2FDCu) [[unlikely]] return; }
L_001D2FDC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 276u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3048u); set32(c.r[4], c.r[29].w[0] + 216u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D3048u) [[unlikely]] return; }
L_001D3048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3050u); set32(c.r[4], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D3050u) [[unlikely]] return; }
L_001D3050:
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u - 256u);
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 280u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D30ACu); set32(c.r[4], c.r[29].w[0] + 208u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D30ACu) [[unlikely]] return; }
L_001D30AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D30B4u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D30B4u) [[unlikely]] return; }
L_001D30B4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[6], c.r[2].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 255ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[6].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[6].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[6].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[6].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 284u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3118u); set32(c.r[4], c.r[29].w[0] + 200u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D3118u) [[unlikely]] return; }
L_001D3118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3120u); set32(c.r[4], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D3120u) [[unlikely]] return; }
L_001D3120:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[5], c.r[2].w[0] << 16);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 172u), c.r[2].w[0]);  if (t) { goto L_001D3528; } }
L_001D3174:
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3184u); set32(c.r[4], c.r[29].w[0] + 192u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D3184u) [[unlikely]] return; }
L_001D3184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D318Cu); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D318Cu) [[unlikely]] return; }
L_001D318C:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] << 24);
    set32(c.r[16], c.r[5].w[0] + 160u);
    set32(c.r[2], ld32((c.r[5].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 276u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D31C8u); set32(c.r[4], c.r[29].w[0] + 184u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D31C8u) [[unlikely]] return; }
L_001D31C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D31D0u); set32(c.r[4], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D31D0u) [[unlikely]] return; }
L_001D31D0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u - 256u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 280u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D31FCu); set32(c.r[4], c.r[29].w[0] + 176u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D31FCu) [[unlikely]] return; }
L_001D31FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3204u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D3204u) [[unlikely]] return; }
L_001D3204:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[2].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 255ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 284u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3238u); set32(c.r[4], c.r[29].w[0] + 168u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D3238u) [[unlikely]] return; }
L_001D3238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3240u); set32(c.r[4], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D3240u) [[unlikely]] return; }
L_001D3240:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[2].w[0] << 16);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_001D3528; } }
L_001D3264:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001D3528; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 288u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3280u); set32(c.r[4], c.r[29].w[0] + 416u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D3280u) [[unlikely]] return; }
L_001D3280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3288u); set32(c.r[4], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D3288u) [[unlikely]] return; }
L_001D3288:
    st32((c.r[17].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 292u), c.r[2].w[0]);  if (t) { goto L_001D3528; } }
L_001D329C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001D3528; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 292u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D32B8u); set32(c.r[4], c.r[29].w[0] + 408u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D32B8u) [[unlikely]] return; }
L_001D32B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D32C0u); set32(c.r[4], c.r[29].w[0] + 408u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D32C0u) [[unlikely]] return; }
L_001D32C0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[5], ld32((c.r[20].w[0] + 292u)));  goto L_001D32D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D32D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 41u, depth + 1u); else { c.pc = 0x001C8540u; return; } if (c.pc != 0x001D32D0u) [[unlikely]] return; }
L_001D32D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3528; } }
L_001D32D8:
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D32E8u); set32(c.r[4], c.r[29].w[0] + 400u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D32E8u) [[unlikely]] return; }
L_001D32E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D32F0u); set32(c.r[4], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D32F0u) [[unlikely]] return; }
L_001D32F0:
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[21], c.r[16].w[0] << 2);
    c.budget -= 3;
L_001D32FC:
    set32(c.r[2], c.r[20].w[0] + c.r[21].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 296u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3314u); set32(c.r[4], c.r[29].w[0] + 392u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D3314u) [[unlikely]] return; }
L_001D3314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D331Cu); set32(c.r[4], c.r[29].w[0] + 392u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001D331Cu) [[unlikely]] return; }
L_001D331C:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[21].w[0] + c.r[29].w[0]);  goto L_001D3340; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], c.r[21].w[0] + c.r[29].w[0]);
    c.budget -= 5;
L_001D3340:
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[2].w[0] + 116u), c.f[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[21], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D32FCu | kUnwind; return; } goto L_001D32FC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3360u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_002A(c, 36u, depth + 1u); else { c.pc = 0x001C84D0u; return; } if (c.pc != 0x001D3360u) [[unlikely]] return; }
L_001D3360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3528; } }
L_001D3368:
    set32(c.r[18], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[18].d[0];  if (t) { goto L_001D3528; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 336u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3388u); set32(c.r[4], c.r[29].w[0] + 280u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D3388u) [[unlikely]] return; }
L_001D3388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3390u); set32(c.r[4], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D3390u) [[unlikely]] return; }
L_001D3390:
    set32(c.r[5], ld32((c.r[20].w[0] + 332u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D33A8u); set32(c.r[4], c.r[29].w[0] + 288u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D33A8u) [[unlikely]] return; }
L_001D33A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D33B0u); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D33B0u) [[unlikely]] return; }
L_001D33B0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] << 32;
    c.r[8].d[0] = c.r[18].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D33D4u); c.r[5].d[0] = c.r[2].d[0] | 4099ull;  if (depth < kMaxDepth) unit_002B(c, 407u, depth + 1u); else { c.pc = 0x001CFA40u; return; } if (c.pc != 0x001D33D4u) [[unlikely]] return; }
L_001D33D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 4098ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D33F0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 407u, depth + 1u); else { c.pc = 0x001CFA40u; return; } if (c.pc != 0x001D33F0u) [[unlikely]] return; }
L_001D33F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3400u); c.r[5].d[0] = c.r[2].d[0] | 4101ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x001D3400u) [[unlikely]] return; }
L_001D3400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3528; } }
L_001D3408:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001D3528; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 344u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3428u); set32(c.r[4], c.r[29].w[0] + 264u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D3428u) [[unlikely]] return; }
L_001D3428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3430u); set32(c.r[4], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D3430u) [[unlikely]] return; }
L_001D3430:
    set32(c.r[5], ld32((c.r[20].w[0] + 340u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3448u); set32(c.r[4], c.r[29].w[0] + 272u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D3448u) [[unlikely]] return; }
L_001D3448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3450u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D3450u) [[unlikely]] return; }
L_001D3450:
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);  goto L_001D3474; }
    st32((c.r[2].w[0] + 292u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 352u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3470u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 207u, depth + 1u); else { c.pc = 0x001D1E20u; return; } if (c.pc != 0x001D3470u) [[unlikely]] return; }
L_001D3470:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.budget -= 1;
L_001D3474:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 4099ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D348Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 407u, depth + 1u); else { c.pc = 0x001CFA40u; return; } if (c.pc != 0x001D348Cu) [[unlikely]] return; }
L_001D348C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    set32(c.r[7], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 4098ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D34A8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 407u, depth + 1u); else { c.pc = 0x001CFA40u; return; } if (c.pc != 0x001D34A8u) [[unlikely]] return; }
L_001D34A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01050000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D34B8u); c.r[5].d[0] = c.r[2].d[0] | 4101ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x001D34B8u) [[unlikely]] return; }
L_001D34B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3528; } }
L_001D34C0:
    set32(c.r[5], ld32((c.r[20].w[0] + 348u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D34D4u); set32(c.r[4], c.r[29].w[0] + 160u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D34D4u) [[unlikely]] return; }
L_001D34D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D34DCu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D34DCu) [[unlikely]] return; }
L_001D34DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30544u), c.r[2].w[0]);  if (t) { goto L_001D3528; } }
L_001D34E4:
    set32(c.r[5], ld32((c.r[20].w[0] + 328u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D34F8u); set32(c.r[4], c.r[29].w[0] + 152u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D34F8u) [[unlikely]] return; }
L_001D34F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3500u); set32(c.r[4], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D3500u) [[unlikely]] return; }
L_001D3500:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_001D351C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001D3528; } }
L_001D351C:
    set32(c.r[2], 0u - 129u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_001D3528:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 264u)));  goto L_001D3610; }
    set32(c.r[5], ld32((c.r[20].w[0] + 268u)));
    set32(c.r[25], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3544u); set32(c.r[4], c.r[29].w[0] + 384u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D3544u) [[unlikely]] return; }
L_001D3544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D354Cu); set32(c.r[4], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001D354Cu) [[unlikely]] return; }
L_001D354C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], c.r[2].w[0] << 2);  goto L_001D355C; }
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.budget -= 2;
L_001D355C:
    set32(c.r[4], ld32((c.r[20].w[0] + 272u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 160u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 256u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3590u); set32(c.r[16], c.r[3].w[0] + 160u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D3590u) [[unlikely]] return; }
L_001D3590:
    set32(c.r[4], ld32((c.r[20].w[0] + 276u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 248u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D35B4u); c.r[5].d[0] = ld64((c.r[29].w[0] + 248u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D35B4u) [[unlikely]] return; }
L_001D35B4:
    set32(c.r[4], ld32((c.r[20].w[0] + 280u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D35E0u); c.r[5].d[0] = ld64((c.r[29].w[0] + 240u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D35E0u) [[unlikely]] return; }
L_001D35E0:
    set32(c.r[4], ld32((c.r[20].w[0] + 284u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001D360Cu); c.r[5].d[0] = ld64((c.r[29].w[0] + 232u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001D360Cu) [[unlikely]] return; }
L_001D360C:
    set32(c.r[2], ld32((c.r[20].w[0] + 264u)));
    c.budget -= 1;
L_001D3610:
    set32(c.r[5], ld32((c.r[2].w[0] + 244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D361Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x001D361Cu) [[unlikely]] return; }
L_001D361C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 324u)));  if (t) { goto L_001D362C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 160u)));  if (t) { goto L_001D3630; } }
L_001D362C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D3630:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[4].w[0] + 244u), c.r[3].w[0]);  if (t) { goto L_001D3888; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 184u)));  if (t) { goto L_001D3888; } }
    c.r[5].d[0] = ld64((c.r[3].w[0] + 72u));
    c.r[5].d[0] = c.r[5].d[0] & 256ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[5].d[0] == 0ull) { c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 178u)));  goto L_001D36D4; }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 178u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[2] = c.r[5].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 224u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 224u), c.f[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 292u)));
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 292u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 138u)));
    c.f[0] = ld32((c.r[4].w[0] + 228u));
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 228u), c.f[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 292u)));
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 292u), c.r[6].w[0]);  if (t) { goto L_001D373C; } }
L_001D36D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[2] = c.r[5].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 208u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 208u), c.f[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 292u)));
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 292u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 138u)));
    c.f[0] = ld32((c.r[4].w[0] + 212u));
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 212u), c.f[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 292u)));
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 292u), c.r[6].w[0]);
    c.budget -= 26;
L_001D373C:
    c.r[6].d[0] = ld64((c.r[3].w[0] + 72u));
    c.r[6].d[0] = c.r[6].d[0] & 256ull;
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[6].d[0] == 0ull) { c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 218u)));  goto L_001D37C4; }
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 258u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[3] = ld32((c.r[28].w[0] - 32236u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[2] = c.r[6].w[0];
    c.f[0] = c.r[8].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = ld32((c.r[4].w[0] + 240u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 240u), c.f[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 292u)));
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[4].w[0] + 292u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 218u)));
    c.f[0] = ld32((c.r[4].w[0] + 244u));
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 244u), c.f[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 292u)));
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.budget -= 29;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 292u), c.r[6].w[0]);  if (t) { goto L_001D3830; } }
L_001D37C4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[3] = ld32((c.r[28].w[0] - 32236u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[2] = c.r[6].w[0];
    c.f[0] = c.r[8].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = ld32((c.r[4].w[0] + 240u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 240u), c.f[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 292u)));
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[4].w[0] + 292u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 218u)));
    c.f[0] = ld32((c.r[4].w[0] + 244u));
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 244u), c.f[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 292u)));
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[4].w[0] + 292u), c.r[6].w[0]);
    c.budget -= 27;
L_001D3830:
    c.r[6].d[0] = ld64((c.r[3].w[0] + 72u));
    c.r[6].d[0] = c.r[6].d[0] & 2048ull;
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[6].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[3].w[0] + 72u));  goto L_001D3860; }
    set32(c.r[6], ld32((c.r[4].w[0] + 264u)));
    set32(c.r[6], c.r[6].w[0] + 128u);
    st32((c.r[4].w[0] + 264u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 292u)));
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 292u), c.r[6].w[0]);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 72u));
    c.budget -= 7;
L_001D3860:
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D3888; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 264u)));
    set32(c.r[3], c.r[3].w[0] - 128u);
    st32((c.r[4].w[0] + 264u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    c.budget -= 6;
L_001D3888:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001D388C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 496u);  c.pc = t; return; }
L_001D38B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D38CCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0027(c, 233u, depth + 1u); else { c.pc = 0x001BE580u; return; } if (c.pc != 0x001D38CCu) [[unlikely]] return; }
L_001D38CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D38D4u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001D38D4u) [[unlikely]] return; }
L_001D38D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001D3B98; }
    set32(c.r[2], ld32((c.r[17].w[0] + 264u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D38F0u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x001D38F0u) [[unlikely]] return; }
L_001D38F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 56u)));  goto L_001D3900; }
    set32(c.r[16], ld32((c.r[2].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 2;
L_001D3900:
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[17].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001D3B94; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.f[1] = ld32((c.r[2].w[0] + 24u));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[29].w[0] + 136u), c.f[1]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 140u), c.f[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 136u), c.r[4].w[0]);  if (t) { goto L_001D3B18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3950u); c.f[12] = ld32((c.r[16].w[0] + 208u));  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001D3950u) [[unlikely]] return; }
L_001D3950:
    c.f[12] = ld32((c.r[16].w[0] + 212u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D395Cu); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001D395Cu) [[unlikely]] return; }
L_001D395C:
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 140u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3978u); set32(c.r[6], c.r[6].w[0] + 17363u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001D3978u) [[unlikely]] return; }
L_001D3978:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.f[12] = ld32((c.r[16].w[0] + 240u));
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3994u); st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001D3994u) [[unlikely]] return; }
L_001D3994:
    c.f[12] = ld32((c.r[16].w[0] + 244u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D39A0u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001D39A0u) [[unlikely]] return; }
L_001D39A0:
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 140u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D39BCu); set32(c.r[6], c.r[6].w[0] + 17382u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001D39BCu) [[unlikely]] return; }
L_001D39BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.f[12] = ld32((c.r[16].w[0] + 224u));
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D39D8u); st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001D39D8u) [[unlikely]] return; }
L_001D39D8:
    c.f[12] = ld32((c.r[16].w[0] + 228u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D39E4u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001D39E4u) [[unlikely]] return; }
L_001D39E4:
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 140u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3A00u); set32(c.r[6], c.r[6].w[0] + 17401u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001D3A00u) [[unlikely]] return; }
L_001D3A00:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[6], c.r[6].w[0] + 17420u);
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3A28u); st32((c.r[29].w[0] + 140u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001D3A28u) [[unlikely]] return; }
L_001D3A28:
    c.f[4] = ld32((c.r[16].w[0] + 224u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[3] = ld32((c.r[16].w[0] + 228u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[2]);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 120u), 0u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 68u), c.f[3]);
    st32((c.r[29].w[0] + 84u), c.f[3]);
    st32((c.r[29].w[0] + 96u), c.f[4]);
    st32((c.r[29].w[0] + 112u), c.f[4]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3A80u); st32((c.r[29].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x001D3A80u) [[unlikely]] return; }
L_001D3A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3A88u);  if (depth < kMaxDepth) unit_0024(c, 202u, depth + 1u); else { c.pc = 0x001B16D0u; return; } if (c.pc != 0x001D3A88u) [[unlikely]] return; }
L_001D3A88:
    set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[17].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3A9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001D3A9Cu) [[unlikely]] return; }
L_001D3A9C:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3AACu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x001D3AACu) [[unlikely]] return; }
L_001D3AAC:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3AB8u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 150u, depth + 1u); else { c.pc = 0x001615B0u; return; } if (c.pc != 0x001D3AB8u) [[unlikely]] return; }
L_001D3AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3AC0u);  if (depth < kMaxDepth) unit_0013(c, 107u, depth + 1u); else { c.pc = 0x0016D590u; return; } if (c.pc != 0x001D3AC0u) [[unlikely]] return; }
L_001D3AC0:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3ACCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x001D3ACCu) [[unlikely]] return; }
L_001D3ACC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3AE0u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0013(c, 138u, depth + 1u); else { c.pc = 0x0016DA10u; return; } if (c.pc != 0x001D3AE0u) [[unlikely]] return; }
L_001D3AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3AE8u);  if (depth < kMaxDepth) unit_0013(c, 111u, depth + 1u); else { c.pc = 0x0016D670u; return; } if (c.pc != 0x001D3AE8u) [[unlikely]] return; }
L_001D3AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3AF0u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x001D3AF0u) [[unlikely]] return; }
L_001D3AF0:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3AFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001D3AFCu) [[unlikely]] return; }
L_001D3AFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3B10u); st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x001D3B10u) [[unlikely]] return; }
L_001D3B10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D3B94; } }
L_001D3B18:
    set32(c.r[5], ld32((c.r[29].w[0] + 140u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3B28u); set32(c.r[6], c.r[6].w[0] + 17431u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001D3B28u) [[unlikely]] return; }
L_001D3B28:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[6], c.r[6].w[0] + 17448u);
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3B4Cu); st32((c.r[29].w[0] + 140u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001D3B4Cu) [[unlikely]] return; }
L_001D3B4C:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[6], c.r[6].w[0] + 17465u);
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3B70u); st32((c.r[29].w[0] + 140u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001D3B70u) [[unlikely]] return; }
L_001D3B70:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[6], c.r[6].w[0] + 17482u);
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3B94u); st32((c.r[29].w[0] + 140u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001D3B94u) [[unlikely]] return; }
L_001D3B94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001D3B98:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001D3BB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D3C08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 13568u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001D3BF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3BF0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0027(c, 270u, depth + 1u); else { c.pc = 0x001BEBA0u; return; } if (c.pc != 0x001D3BF0u) [[unlikely]] return; }
L_001D3BF0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001D3C0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3C08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001D3C08u) [[unlikely]] return; }
L_001D3C08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D3C0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D3C20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D3C68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3C50u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0027(c, 270u, depth + 1u); else { c.pc = 0x001BEBA0u; return; } if (c.pc != 0x001D3C50u) [[unlikely]] return; }
L_001D3C50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001D3C6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3C68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001D3C68u) [[unlikely]] return; }
L_001D3C68:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D3C6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D3C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D3CC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3CB0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0027(c, 270u, depth + 1u); else { c.pc = 0x001BEBA0u; return; } if (c.pc != 0x001D3CB0u) [[unlikely]] return; }
L_001D3CB0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001D3CCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3CC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001D3CC8u) [[unlikely]] return; }
L_001D3CC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D3CCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D3CE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 276u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3CF8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001D3CF8u) [[unlikely]] return; }
L_001D3CF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13808u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3D0Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 449u, depth + 1u); else { c.pc = 0x001D3DA0u; return; } if (c.pc != 0x001D3D0Cu) [[unlikely]] return; }
L_001D3D0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 19533ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D3D30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D3D80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 13808u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3D5Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 450u, depth + 1u); else { c.pc = 0x001D3DC0u; return; } if (c.pc != 0x001D3D5Cu) [[unlikely]] return; }
L_001D3D5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3D68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001D3D68u) [[unlikely]] return; }
L_001D3D68:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001D3D84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3D80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001D3D80u) [[unlikely]] return; }
L_001D3D80:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D3D84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001D3DA0:
    st32((c.r[4].w[0] + 148u), 0u);
    st32((c.r[4].w[0] + 152u), 0u);
    st32((c.r[4].w[0] + 156u), 0u);
    st32((c.r[4].w[0] + 160u), 0u);
    st32((c.r[4].w[0] + 164u), 0u);
    st32((c.r[4].w[0] + 168u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 172u), 0u);  c.pc = t; return; }
L_001D3DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001D3DF0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3DE8u); set32(c.r[5], c.r[5].w[0] + 32672u);  if (depth < kMaxDepth) unit_0008(c, 138u, depth + 1u); else { c.pc = 0x00141BA0u; return; } if (c.pc != 0x001D3DE8u) [[unlikely]] return; }
L_001D3DE8:
    st32((c.r[16].w[0] + 164u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_001D3DF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D3E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[6].w[0] >> 4);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D3E2C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), c.r[5].w[0]);  goto L_001D3E54; }
L_001D3E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3E34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 450u, depth + 1u); else { c.pc = 0x001D3DC0u; return; } if (c.pc != 0x001D3E34u) [[unlikely]] return; }
L_001D3E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3E3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 449u, depth + 1u); else { c.pc = 0x001D3DA0u; return; } if (c.pc != 0x001D3E3Cu) [[unlikely]] return; }
L_001D3E3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3E4Cu); set32(c.r[5], c.r[5].w[0] + 17648u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001D3E4Cu) [[unlikely]] return; }
L_001D3E4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001D3E80; } }
L_001D3E54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 156u), 0u);
    set32(c.r[5], c.r[5].w[0] + 17671u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3E68u); st32((c.r[16].w[0] + 160u), 0u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x001D3E68u) [[unlikely]] return; }
L_001D3E68:
    set32(c.r[6], ld32((c.r[16].w[0] + 152u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3E7Cu); set32(c.r[5], c.r[5].w[0] + 17695u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x001B5DD0u; return; } if (c.pc != 0x001D3E7Cu) [[unlikely]] return; }
L_001D3E7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001D3E80:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D3E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D3F00; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[6], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3EBCu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001D3EBCu) [[unlikely]] return; }
L_001D3EBC:
    set32(c.r[3], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 160u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 6;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 160u)));  goto L_001D3EDC; }
    st32((c.r[16].w[0] + 160u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 2;
L_001D3EDC:
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001D3F04; }
    set32(c.r[4], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 156u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001D3F00; } }
    st32((c.r[16].w[0] + 156u), 0u);
    c.budget -= 1;
L_001D3F00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001D3F04:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001D3F10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 14;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 2u, depth); } }
    set32(c.r[16], c.r[2].w[0] + 10u);
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3F58u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001D3F58u) [[unlikely]] return; }
L_001D3F58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16592u);
    set32(c.r[6], c.r[6].w[0] + 32672u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3F78u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_0008(c, 152u, depth + 1u); else { c.pc = 0x00141DA0u; return; } if (c.pc != 0x001D3F78u) [[unlikely]] return; }
L_001D3F78:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001D3FD0; } }
L_001D3F84:
    set32(c.r[2], ld32((c.r[21].w[0] + 164u)));
    set32(c.r[16], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001D3FB0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001D3FB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3FB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001D3FB0u) [[unlikely]] return; }
L_001D3FB0:
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[3].w[0]);  goto L_001D3FCC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_001D3FCC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001D3FD0:
    set32(c.r[2], ld32((c.r[21].w[0] + 168u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D3F84u | kUnwind; return; } goto L_001D3F84; }
    set32(c.r[4], ld32((c.r[21].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[21].w[0] + 164u), c.r[18].w[0]);  [[clang::musttail]] return unit_002D(c, 1u, depth); }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D3FF8u); set32(c.r[5], c.r[5].w[0] + 32672u);  if (depth < kMaxDepth) unit_0008(c, 138u, depth + 1u); else { c.pc = 0x00141BA0u; return; } if (c.pc != 0x001D3FF8u) [[unlikely]] return; }
L_001D3FF8:
    st32((c.r[21].w[0] + 164u), 0u);
    st32((c.r[21].w[0] + 164u), c.r[18].w[0]);
    c.budget -= 2;
    [[clang::musttail]] return unit_002D(c, 1u, depth);
}

}
