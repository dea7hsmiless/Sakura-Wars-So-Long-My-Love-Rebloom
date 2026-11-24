#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0011[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0,
    11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 26,
    0, 27, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 36, 0, 37, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45,
    0, 46, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0,
    69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 84, 0, 85, 0,
    0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0,
    0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 124,
    0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0,
    0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 148, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0,
    0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202,
    0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285,
    0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0,
    0, 302, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0,
    0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0,
    0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0,
    0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0,
    0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0,
    336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0,
    353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359,
    0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0,
    0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0,
    0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0,
    387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0,
    396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0,
    0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404,
    0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0,
    407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0,
    0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0,
    440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0,
    0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0011(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00164000;
    case 2u: goto L_00164044;
    case 3u: goto L_00164070;
    case 4u: goto L_00164080;
    case 5u: goto L_001640BC;
    case 6u: goto L_001640C4;
    case 7u: goto L_001640CC;
    case 8u: goto L_001640D8;
    case 9u: goto L_001640E8;
    case 10u: goto L_001640F8;
    case 11u: goto L_00164100;
    case 12u: goto L_00164108;
    case 13u: goto L_00164160;
    case 14u: goto L_00164170;
    case 15u: goto L_0016418C;
    case 16u: goto L_0016419C;
    case 17u: goto L_001641B8;
    case 18u: goto L_001641C8;
    case 19u: goto L_001641E4;
    case 20u: goto L_001641F4;
    case 21u: goto L_00164210;
    case 22u: goto L_00164248;
    case 23u: goto L_00164258;
    case 24u: goto L_00164264;
    case 25u: goto L_00164270;
    case 26u: goto L_0016427C;
    case 27u: goto L_00164284;
    case 28u: goto L_0016428C;
    case 29u: goto L_00164294;
    case 30u: goto L_001642A4;
    case 31u: goto L_001642B4;
    case 32u: goto L_001642CC;
    case 33u: goto L_001642F0;
    case 34u: goto L_00164314;
    case 35u: goto L_0016431C;
    case 36u: goto L_00164328;
    case 37u: goto L_00164330;
    case 38u: goto L_00164338;
    case 39u: goto L_00164340;
    case 40u: goto L_00164368;
    case 41u: goto L_00164378;
    case 42u: goto L_001643A4;
    case 43u: goto L_001643CC;
    case 44u: goto L_001643E8;
    case 45u: goto L_001643FC;
    case 46u: goto L_00164404;
    case 47u: goto L_0016440C;
    case 48u: goto L_00164420;
    case 49u: goto L_00164430;
    case 50u: goto L_00164438;
    case 51u: goto L_00164440;
    case 52u: goto L_00164460;
    case 53u: goto L_001644A0;
    case 54u: goto L_001644B8;
    case 55u: goto L_001644D0;
    case 56u: goto L_001644E4;
    case 57u: goto L_00164500;
    case 58u: goto L_00164660;
    case 59u: goto L_00164670;
    case 60u: goto L_0016469C;
    case 61u: goto L_001646AC;
    case 62u: goto L_001646C0;
    case 63u: goto L_001646D0;
    case 64u: goto L_00164714;
    case 65u: goto L_00164740;
    case 66u: goto L_00164750;
    case 67u: goto L_00164760;
    case 68u: goto L_00164770;
    case 69u: goto L_00164780;
    case 70u: goto L_00164790;
    case 71u: goto L_001647A0;
    case 72u: goto L_001647B0;
    case 73u: goto L_001647C0;
    case 74u: goto L_001647D0;
    case 75u: goto L_001647E0;
    case 76u: goto L_00164800;
    case 77u: goto L_00164810;
    case 78u: goto L_001648CC;
    case 79u: goto L_00164934;
    case 80u: goto L_00164A50;
    case 81u: goto L_00164A84;
    case 82u: goto L_00164AD0;
    case 83u: goto L_00164AE8;
    case 84u: goto L_00164AF0;
    case 85u: goto L_00164AF8;
    case 86u: goto L_00164B10;
    case 87u: goto L_00164B18;
    case 88u: goto L_00164B38;
    case 89u: goto L_00164B40;
    case 90u: goto L_00164B60;
    case 91u: goto L_00164B98;
    case 92u: goto L_00164BA0;
    case 93u: goto L_00164BB8;
    case 94u: goto L_00164BC0;
    case 95u: goto L_00164BD8;
    case 96u: goto L_00164BE0;
    case 97u: goto L_00164BE8;
    case 98u: goto L_00164C00;
    case 99u: goto L_00164C10;
    case 100u: goto L_00164C20;
    case 101u: goto L_00164C30;
    case 102u: goto L_00164C40;
    case 103u: goto L_00164C50;
    case 104u: goto L_00164C60;
    case 105u: goto L_00164C70;
    case 106u: goto L_00164C80;
    case 107u: goto L_00164CA0;
    case 108u: goto L_00164CB4;
    case 109u: goto L_00164CCC;
    case 110u: goto L_00164CDC;
    case 111u: goto L_00164CE4;
    case 112u: goto L_00164CEC;
    case 113u: goto L_00164D10;
    case 114u: goto L_00164D34;
    case 115u: goto L_00164D48;
    case 116u: goto L_00164D50;
    case 117u: goto L_00164D58;
    case 118u: goto L_00164D70;
    case 119u: goto L_00164D98;
    case 120u: goto L_00164DB0;
    case 121u: goto L_00164DD4;
    case 122u: goto L_00164DE4;
    case 123u: goto L_00164DF4;
    case 124u: goto L_00164DFC;
    case 125u: goto L_00164E0C;
    case 126u: goto L_00164E2C;
    case 127u: goto L_00164E40;
    case 128u: goto L_00164E48;
    case 129u: goto L_00164E50;
    case 130u: goto L_00164E60;
    case 131u: goto L_00164E78;
    case 132u: goto L_00164E90;
    case 133u: goto L_00164E9C;
    case 134u: goto L_00164EE0;
    case 135u: goto L_00164EF0;
    case 136u: goto L_00164F10;
    case 137u: goto L_00164F30;
    case 138u: goto L_00164F40;
    case 139u: goto L_00164F50;
    case 140u: goto L_00164F60;
    case 141u: goto L_00164F8C;
    case 142u: goto L_00164F9C;
    case 143u: goto L_00164FB4;
    case 144u: goto L_00164FD0;
    case 145u: goto L_00164FF0;
    case 146u: goto L_0016501C;
    case 147u: goto L_00165030;
    case 148u: goto L_0016503C;
    case 149u: goto L_00165040;
    case 150u: goto L_00165064;
    case 151u: goto L_00165090;
    case 152u: goto L_001650F0;
    case 153u: goto L_00165130;
    case 154u: goto L_00165168;
    case 155u: goto L_00165180;
    case 156u: goto L_0016519C;
    case 157u: goto L_001651AC;
    case 158u: goto L_001651C0;
    case 159u: goto L_001651D0;
    case 160u: goto L_001651FC;
    case 161u: goto L_00165224;
    case 162u: goto L_00165260;
    case 163u: goto L_00165280;
    case 164u: goto L_001652CC;
    case 165u: goto L_001652D8;
    case 166u: goto L_00165390;
    case 167u: goto L_001653C4;
    case 168u: goto L_00165404;
    case 169u: goto L_0016541C;
    case 170u: goto L_0016543C;
    case 171u: goto L_0016545C;
    case 172u: goto L_00165474;
    case 173u: goto L_001654A8;
    case 174u: goto L_001654C4;
    case 175u: goto L_00165530;
    case 176u: goto L_00165550;
    case 177u: goto L_0016559C;
    case 178u: goto L_001655F0;
    case 179u: goto L_00165650;
    case 180u: goto L_00165660;
    case 181u: goto L_00165678;
    case 182u: goto L_00165690;
    case 183u: goto L_001656A0;
    case 184u: goto L_001656B0;
    case 185u: goto L_00165764;
    case 186u: goto L_00165788;
    case 187u: goto L_001657F4;
    case 188u: goto L_0016581C;
    case 189u: goto L_00165830;
    case 190u: goto L_00165860;
    case 191u: goto L_0016586C;
    case 192u: goto L_00165894;
    case 193u: goto L_001658D0;
    case 194u: goto L_00165914;
    case 195u: goto L_00165928;
    case 196u: goto L_00165994;
    case 197u: goto L_001659B0;
    case 198u: goto L_001659F4;
    case 199u: goto L_00165A10;
    case 200u: goto L_00165A2C;
    case 201u: goto L_00165A40;
    case 202u: goto L_00165A7C;
    case 203u: goto L_00165A8C;
    case 204u: goto L_00165AA0;
    case 205u: goto L_00165ACC;
    case 206u: goto L_00165ADC;
    case 207u: goto L_00165AE8;
    case 208u: goto L_00165B24;
    case 209u: goto L_00165B6C;
    case 210u: goto L_00165B9C;
    case 211u: goto L_00165BC8;
    case 212u: goto L_00165C00;
    case 213u: goto L_00165C18;
    case 214u: goto L_00165C38;
    case 215u: goto L_00165C54;
    case 216u: goto L_00165C70;
    case 217u: goto L_00165C90;
    case 218u: goto L_00165CA0;
    case 219u: goto L_00165CC8;
    case 220u: goto L_00165D08;
    case 221u: goto L_00165D34;
    case 222u: goto L_00165D5C;
    case 223u: goto L_00165D70;
    case 224u: goto L_00165D88;
    case 225u: goto L_00165DA8;
    case 226u: goto L_00165DC4;
    case 227u: goto L_00165DE0;
    case 228u: goto L_00165DFC;
    case 229u: goto L_00165E24;
    case 230u: goto L_00165E34;
    case 231u: goto L_00165E5C;
    case 232u: goto L_00165E9C;
    case 233u: goto L_00165EC8;
    case 234u: goto L_00165EF0;
    case 235u: goto L_00165F0C;
    case 236u: goto L_00165F20;
    case 237u: goto L_00165FA4;
    case 238u: goto L_00165FC8;
    case 239u: goto L_00165FDC;
    case 240u: goto L_00166010;
    case 241u: goto L_00166050;
    case 242u: goto L_00166074;
    case 243u: goto L_001660AC;
    case 244u: goto L_001660D0;
    case 245u: goto L_001660F0;
    case 246u: goto L_00166100;
    case 247u: goto L_00166128;
    case 248u: goto L_00166140;
    case 249u: goto L_0016615C;
    case 250u: goto L_00166198;
    case 251u: goto L_001661A8;
    case 252u: goto L_00166224;
    case 253u: goto L_0016623C;
    case 254u: goto L_001662B8;
    case 255u: goto L_001662D8;
    case 256u: goto L_00166308;
    case 257u: goto L_00166328;
    case 258u: goto L_00166358;
    case 259u: goto L_001663A0;
    case 260u: goto L_001663DC;
    case 261u: goto L_001663F4;
    case 262u: goto L_00166434;
    case 263u: goto L_00166458;
    case 264u: goto L_00166490;
    case 265u: goto L_001664B0;
    case 266u: goto L_001664C0;
    case 267u: goto L_001664E8;
    case 268u: goto L_00166500;
    case 269u: goto L_00166510;
    case 270u: goto L_00166540;
    case 271u: goto L_00166550;
    case 272u: goto L_00166560;
    case 273u: goto L_00166590;
    case 274u: goto L_001665A0;
    case 275u: goto L_001665B0;
    case 276u: goto L_001665D4;
    case 277u: goto L_00166610;
    case 278u: goto L_00166630;
    case 279u: goto L_00166644;
    case 280u: goto L_00166684;
    case 281u: goto L_001666A0;
    case 282u: goto L_001666CC;
    case 283u: goto L_00166710;
    case 284u: goto L_0016674C;
    case 285u: goto L_0016677C;
    case 286u: goto L_001667A0;
    case 287u: goto L_001667D8;
    case 288u: goto L_001667F0;
    case 289u: goto L_00166800;
    case 290u: goto L_0016681C;
    case 291u: goto L_00166830;
    case 292u: goto L_00166850;
    case 293u: goto L_00166890;
    case 294u: goto L_001668B8;
    case 295u: goto L_001668C8;
    case 296u: goto L_001668F0;
    case 297u: goto L_00166910;
    case 298u: goto L_0016692C;
    case 299u: goto L_0016693C;
    case 300u: goto L_00166950;
    case 301u: goto L_00166978;
    case 302u: goto L_00166984;
    case 303u: goto L_00166994;
    case 304u: goto L_001669A0;
    case 305u: goto L_001669C0;
    case 306u: goto L_001669F0;
    case 307u: goto L_00166A04;
    case 308u: goto L_00166A20;
    case 309u: goto L_00166A68;
    case 310u: goto L_00166A88;
    case 311u: goto L_00166AB0;
    case 312u: goto L_00166AC0;
    case 313u: goto L_00166AD0;
    case 314u: goto L_00166B00;
    case 315u: goto L_00166B14;
    case 316u: goto L_00166B30;
    case 317u: goto L_00166B78;
    case 318u: goto L_00166B98;
    case 319u: goto L_00166BC0;
    case 320u: goto L_00166BE8;
    case 321u: goto L_00166BF8;
    case 322u: goto L_00166C10;
    case 323u: goto L_00166C20;
    case 324u: goto L_00166C30;
    case 325u: goto L_00166C40;
    case 326u: goto L_00166C50;
    case 327u: goto L_00166C64;
    case 328u: goto L_00166C78;
    case 329u: goto L_00166C9C;
    case 330u: goto L_00166CC0;
    case 331u: goto L_00166CF0;
    case 332u: goto L_00166D34;
    case 333u: goto L_00166D40;
    case 334u: goto L_00166D58;
    case 335u: goto L_00166D70;
    case 336u: goto L_00166D80;
    case 337u: goto L_00166D9C;
    case 338u: goto L_00166DB0;
    case 339u: goto L_00166DC0;
    case 340u: goto L_00166DD0;
    case 341u: goto L_00166E00;
    case 342u: goto L_00166E24;
    case 343u: goto L_00166E50;
    case 344u: goto L_00166E68;
    case 345u: goto L_00166EB0;
    case 346u: goto L_00166EC8;
    case 347u: goto L_00166F80;
    case 348u: goto L_00167000;
    case 349u: goto L_001670A0;
    case 350u: goto L_001670BC;
    case 351u: goto L_001670C8;
    case 352u: goto L_001670E8;
    case 353u: goto L_00167100;
    case 354u: goto L_00167114;
    case 355u: goto L_0016712C;
    case 356u: goto L_0016713C;
    case 357u: goto L_00167150;
    case 358u: goto L_0016716C;
    case 359u: goto L_0016717C;
    case 360u: goto L_001671A0;
    case 361u: goto L_001671BC;
    case 362u: goto L_001671CC;
    case 363u: goto L_001671F0;
    case 364u: goto L_00167204;
    case 365u: goto L_00167218;
    case 366u: goto L_0016723C;
    case 367u: goto L_00167260;
    case 368u: goto L_00167290;
    case 369u: goto L_001672D4;
    case 370u: goto L_001672E0;
    case 371u: goto L_001672F8;
    case 372u: goto L_00167310;
    case 373u: goto L_00167320;
    case 374u: goto L_0016733C;
    case 375u: goto L_00167350;
    case 376u: goto L_00167374;
    case 377u: goto L_001673A0;
    case 378u: goto L_001673B0;
    case 379u: goto L_001673C0;
    case 380u: goto L_00167400;
    case 381u: goto L_00167424;
    case 382u: goto L_00167470;
    case 383u: goto L_0016749C;
    case 384u: goto L_001674B0;
    case 385u: goto L_001674C0;
    case 386u: goto L_001674E4;
    case 387u: goto L_00167500;
    case 388u: goto L_00167524;
    case 389u: goto L_00167540;
    case 390u: goto L_0016757C;
    case 391u: goto L_0016763C;
    case 392u: goto L_0016764C;
    case 393u: goto L_00167658;
    case 394u: goto L_00167690;
    case 395u: goto L_001676E8;
    case 396u: goto L_00167700;
    case 397u: goto L_00167744;
    case 398u: goto L_00167764;
    case 399u: goto L_00167784;
    case 400u: goto L_0016779C;
    case 401u: goto L_001677B4;
    case 402u: goto L_001677CC;
    case 403u: goto L_001677E4;
    case 404u: goto L_001677FC;
    case 405u: goto L_00167814;
    case 406u: goto L_00167860;
    case 407u: goto L_00167880;
    case 408u: goto L_001678BC;
    case 409u: goto L_001678C8;
    case 410u: goto L_001678D4;
    case 411u: goto L_001678E4;
    case 412u: goto L_001678F4;
    case 413u: goto L_00167918;
    case 414u: goto L_00167940;
    case 415u: goto L_0016799C;
    case 416u: goto L_001679BC;
    case 417u: goto L_001679FC;
    case 418u: goto L_00167A94;
    case 419u: goto L_00167B04;
    case 420u: goto L_00167B3C;
    case 421u: goto L_00167B4C;
    case 422u: goto L_00167B60;
    case 423u: goto L_00167BAC;
    case 424u: goto L_00167BC4;
    case 425u: goto L_00167BF0;
    case 426u: goto L_00167CC0;
    case 427u: goto L_00167CD8;
    case 428u: goto L_00167CF8;
    case 429u: goto L_00167D20;
    case 430u: goto L_00167D38;
    case 431u: goto L_00167D48;
    case 432u: goto L_00167D58;
    case 433u: goto L_00167D64;
    case 434u: goto L_00167DA0;
    case 435u: goto L_00167DE0;
    case 436u: goto L_00167E14;
    case 437u: goto L_00167E30;
    case 438u: goto L_00167E3C;
    case 439u: goto L_00167E64;
    case 440u: goto L_00167E80;
    case 441u: goto L_00167E90;
    case 442u: goto L_00167EB0;
    case 443u: goto L_00167ED0;
    case 444u: goto L_00167EF0;
    case 445u: goto L_00167F10;
    case 446u: goto L_00167F3C;
    case 447u: goto L_00167F50;
    case 448u: goto L_00167FA8;
    case 449u: goto L_00167FB8;
    case 450u: goto L_00167FDC;
    default: bad_entry(c, 0x00164000u); return;
    }
L_00164000:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] < 0; st32((c.r[2].w[0] + 14748u), c.f[0]);  if (t) { goto L_00164014; } }
    c.f[0] = c.r[19].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00164030; } }
L_00164014:
    set32(c.r[3], c.r[19].w[0] >> 1);
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_00164030:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] + 14764u), c.r[23].w[0]);
    st32((c.r[3].w[0] + 14752u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
L_00164044:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00164070:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 14520u), c.r[4].w[0]);  c.pc = t; return; }
L_00164080:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[18], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[20], c.r[20].w[0] + 13856u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001640BCu); set32(c.r[19], c.r[19].w[0] + 14688u);  if (depth < kMaxDepth) unit_0000(c, 378u, depth + 1u); else { c.pc = 0x00123888u; return; } if (c.pc != 0x001640BCu) [[unlikely]] return; }
L_001640BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001640E0; } }
L_001640C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001640CCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 342u, depth + 1u); else { c.pc = 0x001B61E0u; return; } if (c.pc != 0x001640CCu) [[unlikely]] return; }
L_001640CC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001640D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 378u, depth + 1u); else { c.pc = 0x00123888u; return; } if (c.pc != 0x001640D8u) [[unlikely]] return; }
L_001640D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001640C4u | kUnwind; return; } goto L_001640C4; } }
L_001640E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001640E8u);  if (depth < kMaxDepth) unit_0015(c, 202u, depth + 1u); else { c.pc = 0x00175D20u; return; } if (c.pc != 0x001640E8u) [[unlikely]] return; }
L_001640E8:
    set32(c.r[5], ld32((c.r[20].w[0] + 656u)));
    set32(c.r[4], c.r[20].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001640F8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 295u, depth + 1u); else { c.pc = 0x00162CE0u; return; } if (c.pc != 0x001640F8u) [[unlikely]] return; }
L_001640F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164100u); set32(c.r[5], ld32((c.r[20].w[0] + 656u)));  if (depth < kMaxDepth) unit_0025(c, 338u, depth + 1u); else { c.pc = 0x001B6190u; return; } if (c.pc != 0x00164100u) [[unlikely]] return; }
L_00164100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164108u);  if (depth < kMaxDepth) unit_0019(c, 243u, depth + 1u); else { c.pc = 0x00187340u; return; } if (c.pc != 0x00164108u) [[unlikely]] return; }
L_00164108:
    set32(c.r[2], ld32((c.r[20].w[0] + 656u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[20].w[0] + 432u);  goto L_0016411C; }
    set32(c.r[16], c.r[20].w[0] + 192u);
    c.budget -= 1;
L_0016411C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xA0000000u);
    c.r[3].d[0] = 0ull | 32769ull;
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 238u);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[6], 0u + 1u);
    mmi::pcpyld(c.r[2], c.r[0], c.r[4]);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[2].d[0] = 0ull | 61166ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 61166ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164160u); st64((c.r[29].w[0] + 104u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x00164160u) [[unlikely]] return; }
L_00164160:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164170u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x00164170u) [[unlikely]] return; }
L_00164170:
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016418Cu); st32((c.r[29].w[0] + 136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0016418Cu) [[unlikely]] return; }
L_0016418C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016419Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0016419Cu) [[unlikely]] return; }
L_0016419C:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001641B8u); st32((c.r[29].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x001641B8u) [[unlikely]] return; }
L_001641B8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001641C8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x001641C8u) [[unlikely]] return; }
L_001641C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001641E4u); st32((c.r[29].w[0] + 200u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x001641E4u) [[unlikely]] return; }
L_001641E4:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001641F4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x001641F4u) [[unlikely]] return; }
L_001641F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[5], c.r[16].w[0] + 96u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164210u); st32((c.r[29].w[0] + 232u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x00164210u) [[unlikely]] return; }
L_00164210:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x60710000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x71600000u);
    c.r[4].d[0] = c.r[3].d[0] | 9269ull;
    c.r[3].d[0] = c.r[2].d[0] | 13604ull;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[2], 0u + 68u);
    st64((c.r[29].w[0] + 264u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 256u), c.r[3].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[20].w[0] + 732u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164248u); st32((c.r[2].w[0] + 14720u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001C(c, 78u, depth + 1u); else { c.pc = 0x00191340u; return; } if (c.pc != 0x00164248u) [[unlikely]] return; }
L_00164248:
    c.r[3].d[0] = ld64((c.r[19].w[0] + 24u));
    c.r[2].d[0] = ld64((c.r[19].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164258u); c.r[4].d[0] = c.r[3].d[0] - c.r[2].d[0];  if (depth < kMaxDepth) unit_0015(c, 203u, depth + 1u); else { c.pc = 0x00175D50u; return; } if (c.pc != 0x00164258u) [[unlikely]] return; }
L_00164258:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164264u); st64((c.r[3].w[0] + 13192u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0015(c, 202u, depth + 1u); else { c.pc = 0x00175D20u; return; } if (c.pc != 0x00164264u) [[unlikely]] return; }
L_00164264:
    set32(c.r[4], ld32((c.r[20].w[0] + 732u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164270u); st64((c.r[19].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_001C(c, 83u, depth + 1u); else { c.pc = 0x00191440u; return; } if (c.pc != 0x00164270u) [[unlikely]] return; }
L_00164270:
    set32(c.r[4], ld32((c.r[20].w[0] + 732u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016427Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001C(c, 59u, depth + 1u); else { c.pc = 0x00191040u; return; } if (c.pc != 0x0016427Cu) [[unlikely]] return; }
L_0016427C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164284u);  if (depth < kMaxDepth) unit_0013(c, 309u, depth + 1u); else { c.pc = 0x0016F4A0u; return; } if (c.pc != 0x00164284u) [[unlikely]] return; }
L_00164284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016428Cu);  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x001607B0u; return; } if (c.pc != 0x0016428Cu) [[unlikely]] return; }
L_0016428C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164294u); c.r[16].d[0] = c.r[18].d[0] & c.r[2].d[0];  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00164D70u; return; } if (c.pc != 0x00164294u) [[unlikely]] return; }
L_00164294:
    c.r[3].d[0] = ld64((c.r[19].w[0] + 8u));
    c.r[2].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001642A4u); c.r[4].d[0] = c.r[3].d[0] - c.r[2].d[0];  if (depth < kMaxDepth) unit_0015(c, 203u, depth + 1u); else { c.pc = 0x00175D50u; return; } if (c.pc != 0x001642A4u) [[unlikely]] return; }
L_001642A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[19].w[0]), c.r[17].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001642B4u); st64((c.r[3].w[0] + 13168u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0010(c, 292u, depth + 1u); else { c.pc = 0x00162C00u; return; } if (c.pc != 0x001642B4u) [[unlikely]] return; }
L_001642B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 12992u);
    set32(c.r[5], c.r[5].w[0] + 13168u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001642CCu); set32(c.r[6], 0u + 176u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001642CCu) [[unlikely]] return; }
L_001642CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_001642F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[17], c.r[17].w[0] + 13856u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164314u); set32(c.r[16], c.r[16].w[0] + 14688u);  if (depth < kMaxDepth) unit_0011(c, 120u, depth + 1u); else { c.pc = 0x00164DB0u; return; } if (c.pc != 0x00164314u) [[unlikely]] return; }
L_00164314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016431Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_001B(c, 142u, depth + 1u); else { c.pc = 0x0018E5C0u; return; } if (c.pc != 0x0016431Cu) [[unlikely]] return; }
L_0016431C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164328u); set32(c.r[4], ld32((c.r[2].w[0] + 14588u)));  if (depth < kMaxDepth) unit_001C(c, 75u, depth + 1u); else { c.pc = 0x00191300u; return; } if (c.pc != 0x00164328u) [[unlikely]] return; }
L_00164328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164330u);  if (depth < kMaxDepth) unit_0019(c, 246u, depth + 1u); else { c.pc = 0x00187390u; return; } if (c.pc != 0x00164330u) [[unlikely]] return; }
L_00164330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164338u);  if (depth < kMaxDepth) unit_0014(c, 73u, depth + 1u); else { c.pc = 0x001709E0u; return; } if (c.pc != 0x00164338u) [[unlikely]] return; }
L_00164338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164340u);  if (depth < kMaxDepth) unit_0010(c, 291u, depth + 1u); else { c.pc = 0x00162B00u; return; } if (c.pc != 0x00164340u) [[unlikely]] return; }
L_00164340:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14672u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 14668u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00164370; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164368u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00164368u) [[unlikely]] return; }
L_00164368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00164384; } }
L_00164370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164378u); set32(c.r[4], ld32((c.r[4].w[0] + 732u)));  if (depth < kMaxDepth) unit_001C(c, 90u, depth + 1u); else { c.pc = 0x001915C0u; return; } if (c.pc != 0x00164378u) [[unlikely]] return; }
L_00164378:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00164384; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00164384:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001643FC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41470000u);
    set32(c.r[5], c.r[5].w[0] + 13856u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] | 22856ull;
    c.budget -= 6;
L_001643A4:
    set32(c.r[4], ld32((c.r[6].w[0] + 696u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001643C0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_001643D4; }
L_001643C0:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001643CCu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x001643CCu) [[unlikely]] return; }
L_001643CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001643F4; } }
L_001643D4:
    c.r[2].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001643A4u | kUnwind; return; } goto L_001643A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001643E8u); set32(c.r[4], ld32((c.r[5].w[0] + 732u)));  if (depth < kMaxDepth) unit_001C(c, 96u, depth + 1u); else { c.pc = 0x001916B0u; return; } if (c.pc != 0x001643E8u) [[unlikely]] return; }
L_001643E8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001643F4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001643F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00164428; } }
L_001643FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164404u);  if (depth < kMaxDepth) unit_0014(c, 148u, depth + 1u); else { c.pc = 0x00171360u; return; } if (c.pc != 0x00164404u) [[unlikely]] return; }
L_00164404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016440Cu); set32(c.r[16], c.r[2].w[0] - 8u);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00171390u; return; } if (c.pc != 0x0016440Cu) [[unlikely]] return; }
L_0016440C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00164420; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00164420u); c.r[4].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00164420u) [[unlikely]] return; }
L_00164420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001643FCu | kUnwind; return; } goto L_001643FC; } }
L_00164428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164430u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00161090u; return; } if (c.pc != 0x00164430u) [[unlikely]] return; }
L_00164430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164438u);  if (depth < kMaxDepth) unit_0011(c, 65u, depth + 1u); else { c.pc = 0x00164740u; return; } if (c.pc != 0x00164438u) [[unlikely]] return; }
L_00164438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164440u);  if (depth < kMaxDepth) unit_0015(c, 202u, depth + 1u); else { c.pc = 0x00175D20u; return; } if (c.pc != 0x00164440u) [[unlikely]] return; }
L_00164440:
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 656u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[17].w[0] + 432u);  goto L_00164458; }
    set32(c.r[16], c.r[17].w[0] + 192u);
    c.budget -= 1;
L_00164458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164460u);  if (depth < kMaxDepth) unit_0011(c, 74u, depth + 1u); else { c.pc = 0x001647D0u; return; } if (c.pc != 0x00164460u) [[unlikely]] return; }
L_00164460:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);  goto L_00164474; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00164488; } }
L_00164474:
    c.r[2].d[0] = ld64((c.r[2].w[0] + 4096u));
    c.r[2].d[0] = c.r[2].d[0] >> 13;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
L_00164488:
    c.r[7].d[0] = c.r[2].d[0] << 48;
    set32(c.r[5], 0u + 2048u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001644A0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 30u, depth + 1u); else { c.pc = 0x00124450u; return; } if (c.pc != 0x001644A0u) [[unlikely]] return; }
L_001644A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 656u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 14740u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001644B8u); st32((c.r[17].w[0] + 656u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 342u, depth + 1u); else { c.pc = 0x001B61E0u; return; } if (c.pc != 0x001644B8u) [[unlikely]] return; }
L_001644B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001644D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001644E4u); set32(c.r[4], ld32((c.r[2].w[0] + 14588u)));  if (depth < kMaxDepth) unit_001C(c, 70u, depth + 1u); else { c.pc = 0x001911A0u; return; } if (c.pc != 0x001644E4u) [[unlikely]] return; }
L_001644E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00164500:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_00164538; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[4].w[0] + 4u));  if (t) { goto L_00164550; } }
L_00164538:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 6;
L_00164550:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[6].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_00164584; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[4].w[0] + 8u));  if (t) { goto L_0016459C; } }
L_00164584:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.budget -= 6;
L_0016459C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[4].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001645D4; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] << 32;  if (t) { goto L_001645EC; } }
L_001645D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[9], c.f[0]);
    c.r[9].d[0] = c.r[9].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.budget -= 6;
L_001645EC:
    c.r[7].d[0] = c.r[5].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[7].d[0] = c.r[7].d[0] >> 32;
    c.r[6].d[0] = c.r[4].d[0] << 8;
    c.r[4].d[0] = c.r[9].d[0] << 32;
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[8].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[4].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[7].w[0] + 14448u), c.r[8].d[0]);
    st32((c.r[4].w[0] + 14528u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[6].w[0] + 14208u), c.r[8].d[0]);
    st32((c.r[4].w[0] + 14532u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 14536u), c.r[9].w[0]);  c.pc = t; return; }
L_00164660:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 14640u)));  c.pc = t; return; }
L_00164670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 14640u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 13856u);  if (t) { goto L_001646A4; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016469Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x0016469Cu) [[unlikely]] return; }
L_0016469C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001646B0; } }
L_001646A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001646ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x001646ACu) [[unlikely]] return; }
L_001646AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001646B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001646C0:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0014(c, 222u, depth); }
L_001646D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[4].w[0] + 63u);
    set32(c.r[2], 0u - 64u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14672u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 14668u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 13856u);  if (t) { goto L_0016471C; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164714u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00164714u) [[unlikely]] return; }
L_00164714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00164730; } }
L_0016471C:
    set32(c.r[2], ld32((c.r[5].w[0] + 808u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 816u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 816u), c.r[3].w[0]);
    c.budget -= 5;
L_00164730:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00164740:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 14672u), 0u);  c.pc = t; return; }
L_00164750:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 12992u);  c.pc = t; return; }
L_00164760:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 14736u);  c.pc = t; return; }
L_00164770:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 13168u);  c.pc = t; return; }
L_00164780:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0] + 14736u));  c.pc = t; return; }
L_00164790:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 14740u)));  c.pc = t; return; }
L_001647A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 13860u)));  c.pc = t; return; }
L_001647B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0] + 14748u));  c.pc = t; return; }
L_001647C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0] + 14752u));  c.pc = t; return; }
L_001647D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 14764u)));  c.pc = t; return; }
L_001647E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[6], ld32((c.r[3].w[0] + 14540u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 14544u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00164800:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 14740u), c.r[4].w[0]);  c.pc = t; return; }
L_00164810:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[3].w[0] + 14540u), c.r[4].w[0]);
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[3].w[0] + 14544u), c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 14524u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[17], c.r[17].w[0] + 13856u);  if (t) { goto L_001648A8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 668u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[6], ld32((c.r[17].w[0] + 668u)));  goto L_001648AC; }
    c.budget -= 2;
    if (c.r[18].sd[0] < 0) { set32(c.r[5], 0u - c.r[18].w[0]);  goto L_0016488C; }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[3].d[0] = c.r[18].d[0] & 1ull;  if (t) { goto L_00164880; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] - c.r[3].w[0]);  goto L_001648A8; }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_00164880:
    set32(c.r[18], c.r[18].w[0] - c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001648A8; } }
L_0016488C:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; c.r[3].d[0] = c.r[5].d[0] & 1ull;  if (t) { goto L_001648A0; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);  goto L_001648A4; }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_001648A0:
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_001648A4:
    set32(c.r[18], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_001648A8:
    set32(c.r[6], ld32((c.r[17].w[0] + 668u)));
    c.budget -= 1;
L_001648AC:
    set32(c.r[3], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[5].d[0] = ld32((c.r[17].w[0] + 8u));  if (t) { goto L_00164918; } }
    c.r[16].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(2559ll);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001648CCu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);  if (depth < kMaxDepth) unit_000B(c, 8u, depth + 1u); else { c.pc = 0x0014C1D0u; return; } if (c.pc != 0x001648CCu) [[unlikely]] return; }
L_001648CC:
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[8].d[0] = c.r[16].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    mmi::multu(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    mmi::mult(c, 1, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[3], c.r[18].w[0] + 50u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[6].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[6], c.r[6], c.r[7]);
    c.r[4].d[0] = c.r[5].d[0] + c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] + c.r[6].d[0];
    c.budget -= 19;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] + static_cast<std::uint64_t>(636ll);  if (t) { goto L_00164994; } }
L_00164918:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[4].w[0] + 232u);  goto L_00164980; }
    c.r[16].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(2559ll);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164934u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);  if (depth < kMaxDepth) unit_000B(c, 8u, depth + 1u); else { c.pc = 0x0014C1D0u; return; } if (c.pc != 0x00164934u) [[unlikely]] return; }
L_00164934:
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[8].d[0] = c.r[16].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    mmi::multu(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    mmi::mult(c, 1, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[3], c.r[18].w[0] + 72u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[6].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[6], c.r[6], c.r[7]);
    c.r[4].d[0] = c.r[5].d[0] + c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] + c.r[6].d[0];
    c.budget -= 19;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] + static_cast<std::uint64_t>(692ll);  if (t) { goto L_00164994; } }
L_00164980:
    set32(c.r[3], c.r[18].w[0] + 35u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
L_00164994:
    c.r[1].d[0] = c.r[4].sd[0] < 536ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;  goto L_001649A8; }
    set32(c.r[4], 0u + 536u);
    c.r[1].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 2;
L_001649A8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001649B4; } }
    set32(c.r[4], 0u + 4095u);
    c.budget -= 1;
L_001649B4:
    c.budget -= 2;
    if (c.r[3].sd[0] >= 0) { c.r[1].d[0] = c.r[3].sd[0] < 4096ll ? 1ull : 0ull;  goto L_001649C4; }
    c.r[3].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[3].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 2;
L_001649C4:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] << 32;  goto L_001649D4; }
    set32(c.r[3], 0u + 4095u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 2;
L_001649D4:
    c.r[9].d[0] = c.r[4].d[0] & 4095ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[5].d[0] = ld16((c.r[17].w[0] + 120u));
    c.r[3].d[0] = c.r[3].d[0] & 2047ull;
    set32(c.r[8], 0u - 4096u);
    set32(c.r[6], c.r[3].w[0] << 12);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF800000u);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 160u));
    c.r[7].d[0] = c.r[5].d[0] & c.r[8].d[0];
    c.r[5].d[0] = c.r[4].d[0] | 4095ull;
    c.r[4].d[0] = c.r[7].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    st16((c.r[17].w[0] + 120u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 120u)));
    st16((c.r[17].w[0] + 160u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 160u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st32((c.r[17].w[0] + 120u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[17].w[0] + 160u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00164A50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 14588u)));
    set32(c.r[5], c.r[6].w[0] + 128u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164A84u); set32(c.r[6], c.r[3].w[0] + 128u);  if (depth < kMaxDepth) unit_001C(c, 31u, depth + 1u); else { c.pc = 0x00190810u; return; } if (c.pc != 0x00164A84u) [[unlikely]] return; }
L_00164A84:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_00164A94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00164B44; } }
L_00164A94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[1] = ld32((c.r[2].w[0] + 14748u));
    c.f[0] = ld32((c.r[3].w[0] + 14752u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 14764u)));
    st32((c.r[28].w[0] - 31424u), c.f[1]);
    st32((c.r[28].w[0] - 31420u), c.f[0]);
    st32((c.r[28].w[0] - 31416u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.r[17].d[0] = ld16((c.r[2].w[0] + 134u));
    c.budget -= 12;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = ld16((c.r[2].w[0] + 132u));  if (t) { goto L_00164AC8; } }
    set32(c.r[17], c.r[17].w[0] << 1);
    c.budget -= 1;
L_00164AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164AD0u);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x00164AD0u) [[unlikely]] return; }
L_00164AD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] + 14748u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[2].w[0] + 14752u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164AE8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 65u, depth + 1u); else { c.pc = 0x00184EF0u; return; } if (c.pc != 0x00164AE8u) [[unlikely]] return; }
L_00164AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164AF0u);  if (depth < kMaxDepth) unit_0019(c, 40u, depth + 1u); else { c.pc = 0x00184830u; return; } if (c.pc != 0x00164AF0u) [[unlikely]] return; }
L_00164AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164AF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x00164AF8u) [[unlikely]] return; }
L_00164AF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[2].w[0] + 14748u));
    st32((c.r[3].w[0] + 14752u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164B10u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 65u, depth + 1u); else { c.pc = 0x00184EF0u; return; } if (c.pc != 0x00164B10u) [[unlikely]] return; }
L_00164B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164B18u);  if (depth < kMaxDepth) unit_0019(c, 40u, depth + 1u); else { c.pc = 0x00184830u; return; } if (c.pc != 0x00164B18u) [[unlikely]] return; }
L_00164B18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[2].w[0] + 14764u), c.r[16].w[0]);  if (t) { goto L_00164B2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00164B30; } }
L_00164B2C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00164B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164B38u);  if (depth < kMaxDepth) unit_0019(c, 64u, depth + 1u); else { c.pc = 0x00184EE0u; return; } if (c.pc != 0x00164B38u) [[unlikely]] return; }
L_00164B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164B40u);  if (depth < kMaxDepth) unit_0019(c, 40u, depth + 1u); else { c.pc = 0x00184830u; return; } if (c.pc != 0x00164B40u) [[unlikely]] return; }
L_00164B40:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00164B44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00164B60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 31416u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[16].w[0] + 13856u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 14764u), c.r[3].w[0]);  if (t) { goto L_00164B8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00164B90; } }
L_00164B8C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00164B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164B98u);  if (depth < kMaxDepth) unit_0019(c, 64u, depth + 1u); else { c.pc = 0x00184EE0u; return; } if (c.pc != 0x00164B98u) [[unlikely]] return; }
L_00164B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164BA0u);  if (depth < kMaxDepth) unit_0019(c, 40u, depth + 1u); else { c.pc = 0x00184830u; return; } if (c.pc != 0x00164BA0u) [[unlikely]] return; }
L_00164BA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[28].w[0] - 31424u));
    c.f[13] = ld32((c.r[2].w[0] + 14752u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164BB8u); st32((c.r[3].w[0] + 14748u), c.f[12]);  if (depth < kMaxDepth) unit_0019(c, 65u, depth + 1u); else { c.pc = 0x00184EF0u; return; } if (c.pc != 0x00164BB8u) [[unlikely]] return; }
L_00164BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164BC0u);  if (depth < kMaxDepth) unit_0019(c, 40u, depth + 1u); else { c.pc = 0x00184830u; return; } if (c.pc != 0x00164BC0u) [[unlikely]] return; }
L_00164BC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[28].w[0] - 31420u));
    c.f[12] = ld32((c.r[2].w[0] + 14748u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164BD8u); st32((c.r[3].w[0] + 14752u), c.f[13]);  if (depth < kMaxDepth) unit_0019(c, 65u, depth + 1u); else { c.pc = 0x00184EF0u; return; } if (c.pc != 0x00164BD8u) [[unlikely]] return; }
L_00164BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164BE0u);  if (depth < kMaxDepth) unit_0019(c, 40u, depth + 1u); else { c.pc = 0x00184830u; return; } if (c.pc != 0x00164BE0u) [[unlikely]] return; }
L_00164BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164BE8u); set32(c.r[4], ld32((c.r[16].w[0] + 732u)));  if (depth < kMaxDepth) unit_001C(c, 37u, depth + 1u); else { c.pc = 0x00190B30u; return; } if (c.pc != 0x00164BE8u) [[unlikely]] return; }
L_00164BE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00164C00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[2].w[0] + 14588u)));  [[clang::musttail]] return unit_001D(c, 310u, depth); }
L_00164C10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { set32(c.r[5], ld32((c.r[2].w[0] + 14588u)));  [[clang::musttail]] return unit_001D(c, 300u, depth); }
L_00164C20:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_001B(c, 184u, depth); }
L_00164C30:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_001B(c, 185u, depth); }
L_00164C40:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_001B(c, 186u, depth); }
L_00164C50:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_001B(c, 187u, depth); }
L_00164C60:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_001B(c, 189u, depth); }
L_00164C70:
    st32((c.r[28].w[0] - 31392u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 31388u), c.f[13]);  c.pc = t; return; }
L_00164C80:
    c.f[0] = ld32((c.r[28].w[0] - 31392u));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31388u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_00164CA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 16u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164CB4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x001646D0u; return; } if (c.pc != 0x00164CB4u) [[unlikely]] return; }
L_00164CB4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 31412u)));  goto L_00164CD4; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164CCCu); set32(c.r[5], 0u + 84u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00164CCCu) [[unlikely]] return; }
L_00164CCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00164CF8; } }
L_00164CD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164CDCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 188u, depth + 1u); else { c.pc = 0x0018EF10u; return; } if (c.pc != 0x00164CDCu) [[unlikely]] return; }
L_00164CDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164CE4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 192u, depth + 1u); else { c.pc = 0x0018EF60u; return; } if (c.pc != 0x00164CE4u) [[unlikely]] return; }
L_00164CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164CECu); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 193u, depth + 1u); else { c.pc = 0x0018EF70u; return; } if (c.pc != 0x00164CECu) [[unlikely]] return; }
L_00164CEC:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 31412u), c.r[16].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_00164CF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00164D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 31412u)));
    c.budget -= 6;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_00164D3C; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164D34u); set32(c.r[5], 0u + 85u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00164D34u) [[unlikely]] return; }
L_00164D34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00164D5C; } }
L_00164D3C:
    st32((c.r[28].w[0] - 31412u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164D48u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_001B(c, 187u, depth + 1u); else { c.pc = 0x0018EF00u; return; } if (c.pc != 0x00164D48u) [[unlikely]] return; }
L_00164D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164D50u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_001B(c, 190u, depth + 1u); else { c.pc = 0x0018EF40u; return; } if (c.pc != 0x00164D50u) [[unlikely]] return; }
L_00164D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164D58u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_001B(c, 191u, depth + 1u); else { c.pc = 0x0018EF50u; return; } if (c.pc != 0x00164D58u) [[unlikely]] return; }
L_00164D58:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00164D5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00164D70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 31404u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { st32((c.r[28].w[0] - 31412u), 0u);  goto L_00164DA4; }
    set32(c.r[4], ld32((c.r[28].w[0] - 31408u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00164DA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164D98u);  if (depth < kMaxDepth) unit_001B(c, 168u, depth + 1u); else { c.pc = 0x0018ED00u; return; } if (c.pc != 0x00164D98u) [[unlikely]] return; }
L_00164D98:
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 31404u), c.r[3].w[0]);
    c.budget -= 2;
L_00164DA0:
    st32((c.r[28].w[0] - 31412u), 0u);
    c.budget -= 1;
L_00164DA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00164DB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31412u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_00164DD8; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164DD4u); set32(c.r[5], 0u + 86u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00164DD4u) [[unlikely]] return; }
L_00164DD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_00164DD8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164DE4u);  if (depth < kMaxDepth) unit_0019(c, 68u, depth + 1u); else { c.pc = 0x00184F60u; return; } if (c.pc != 0x00164DE4u) [[unlikely]] return; }
L_00164DE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC7800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164DF4u);  if (depth < kMaxDepth) unit_0019(c, 69u, depth + 1u); else { c.pc = 0x00184F70u; return; } if (c.pc != 0x00164DF4u) [[unlikely]] return; }
L_00164DF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164DFCu);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x00164DFCu) [[unlikely]] return; }
L_00164DFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164E0Cu); c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0011(c, 73u, depth + 1u); else { c.pc = 0x001647C0u; return; } if (c.pc != 0x00164E0Cu) [[unlikely]] return; }
L_00164E0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[15] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[12] = 0u;
    c.f[14] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164E2Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0019(c, 67u, depth + 1u); else { c.pc = 0x00184F30u; return; } if (c.pc != 0x00164E2Cu) [[unlikely]] return; }
L_00164E2C:
    c.f[13] = ld32((c.r[28].w[0] - 31396u));
    c.f[14] = ld32((c.r[28].w[0] - 31392u));
    c.f[15] = ld32((c.r[28].w[0] - 31388u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164E40u); c.f[12] = ld32((c.r[28].w[0] - 31400u));  if (depth < kMaxDepth) unit_0019(c, 72u, depth + 1u); else { c.pc = 0x00184FC0u; return; } if (c.pc != 0x00164E40u) [[unlikely]] return; }
L_00164E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164E48u);  if (depth < kMaxDepth) unit_0019(c, 40u, depth + 1u); else { c.pc = 0x00184830u; return; } if (c.pc != 0x00164E48u) [[unlikely]] return; }
L_00164E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164E50u);  if (depth < kMaxDepth) unit_001B(c, 175u, depth + 1u); else { c.pc = 0x0018EE20u; return; } if (c.pc != 0x00164E50u) [[unlikely]] return; }
L_00164E50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00164E60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164E78u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 158u, depth + 1u); else { c.pc = 0x0018EB90u; return; } if (c.pc != 0x00164E78u) [[unlikely]] return; }
L_00164E78:
    set32(c.r[16], ld32((c.r[28].w[0] - 31440u)));
    st32((c.r[28].w[0] - 31408u), 0u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 31404u), 0u);  if (t) { goto L_00164EAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164E90u);  if (depth < kMaxDepth) unit_001B(c, 165u, depth + 1u); else { c.pc = 0x0018ECC0u; return; } if (c.pc != 0x00164E90u) [[unlikely]] return; }
L_00164E90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164E9Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 89u, depth + 1u); else { c.pc = 0x00160E20u; return; } if (c.pc != 0x00164E9Cu) [[unlikely]] return; }
L_00164E9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 31408u), c.r[2].w[0]);  if (t) { goto L_00164EB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00164EB0; } }
L_00164EAC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00164EB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[28].w[0] - 31400u), 0u);
    st32((c.r[28].w[0] - 31396u), 0u);
    st32((c.r[28].w[0] - 31392u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 31388u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00164EE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164EF0u);  if (depth < kMaxDepth) unit_001B(c, 162u, depth + 1u); else { c.pc = 0x0018EC50u; return; } if (c.pc != 0x00164EF0u) [[unlikely]] return; }
L_00164EF0:
    set32(c.r[4], ld32((c.r[28].w[0] - 31440u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00164F18; }
    set32(c.r[5], ld32((c.r[28].w[0] - 31408u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00164F14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164F10u);  if (depth < kMaxDepth) unit_0010(c, 90u, depth + 1u); else { c.pc = 0x00160E30u; return; } if (c.pc != 0x00164F10u) [[unlikely]] return; }
L_00164F10:
    st32((c.r[28].w[0] - 31408u), 0u);
    c.budget -= 1;
L_00164F14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00164F18:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00164F30:
    st32((c.r[28].w[0] - 31384u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00164F40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00164F50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 31384u)));  c.pc = t; return; }
L_00164F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 31384u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00164F94; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164F8Cu); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00164F8Cu) [[unlikely]] return; }
L_00164F8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00164FD4; } }
L_00164F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164F9Cu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00164F9Cu) [[unlikely]] return; }
L_00164F9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 31384u), c.r[2].w[0]);  goto L_00164FB8; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164FB4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 151u, depth + 1u); else { c.pc = 0x00165090u; return; } if (c.pc != 0x00164FB4u) [[unlikely]] return; }
L_00164FB4:
    st32((c.r[28].w[0] - 31384u), c.r[2].w[0]);
    c.budget -= 1;
L_00164FB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 4u);  goto L_00164FC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00164FD4; } }
L_00164FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00164FD0u); set32(c.r[5], 0u + 53u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00164FD0u) [[unlikely]] return; }
L_00164FD0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00164FD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00164FF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 31384u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_00165028; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 31384u), 0u);  goto L_00165020; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016501Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016501Cu) [[unlikely]] return; }
L_0016501C:
    st32((c.r[28].w[0] - 31384u), 0u);
    c.budget -= 1;
L_00165020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00165034; } }
L_00165028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165030u); set32(c.r[5], 0u + 54u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00165030u) [[unlikely]] return; }
L_00165030:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00165034:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016503C:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 1;
L_00165040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 31384u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00165074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165064u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 159u, depth + 1u); else { c.pc = 0x001651D0u; return; } if (c.pc != 0x00165064u) [[unlikely]] return; }
L_00165064:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 9u);  goto L_00165078; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_00165078; } }
L_00165074:
    set32(c.r[2], 0u + 9u);
    c.budget -= 1;
L_00165078:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00165090:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[8], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[7], c.r[7].w[0] + 8824u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 20552ull;
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[6].w[0]);  c.pc = t; return; }
L_001650F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00165168; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8824u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00165130; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165130u); set32(c.r[5], 0u + 55u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00165130u) [[unlikely]] return; }
L_00165130:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00165154; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 7;
L_00165154:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0016516C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165168u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00165168u) [[unlikely]] return; }
L_00165168:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0016516C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00165180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_001651A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016519Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x0016519Cu) [[unlikely]] return; }
L_0016519C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001651B0; } }
L_001651A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001651ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x001651ACu) [[unlikely]] return; }
L_001651AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001651B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001651C0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[5].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0014(c, 222u, depth); }
L_001651D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00165240; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_001651FC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[18].d[0];  if (t) { goto L_00165230; } }
    st32((c.r[16].w[0] + 44u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00165228; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165224u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0018(c, 263u, depth + 1u); else { c.pc = 0x001839B0u; return; } if (c.pc != 0x00165224u) [[unlikely]] return; }
L_00165224:
    c.budget -= 1;
L_00165228:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00165230:
    set32(c.r[16], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001651FCu | kUnwind; return; } goto L_001651FC; }
    c.budget -= 1;
L_00165240:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00165260:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_00165280:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[2].w[0] + 16480u)));
    set32(c.r[19], ld32((c.r[28].w[0] - 31168u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[17], ld32((c.r[2].w[0] + 16484u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 16488u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001652CCu); set32(c.r[4], c.r[20].w[0] + 64u);  if (depth < kMaxDepth) unit_0018(c, 232u, depth + 1u); else { c.pc = 0x00182DA0u; return; } if (c.pc != 0x001652CCu) [[unlikely]] return; }
L_001652CC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001652D8u); set32(c.r[5], c.r[20].w[0] + 64u);  if (depth < kMaxDepth) unit_0018(c, 234u, depth + 1u); else { c.pc = 0x00182E40u; return; } if (c.pc != 0x001652D8u) [[unlikely]] return; }
L_001652D8:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[4].d[0] | 65520ull;
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.r[5].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    st64((c.r[4].w[0] + 8u), 0ull);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[4].w[0] + 16u);
    st32((c.r[18].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    st32((c.r[4].w[0]), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    st64((c.r[4].w[0] + 8u), 0ull);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[4].w[0] + 16u);
    st32((c.r[17].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    st32((c.r[4].w[0]), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    st64((c.r[4].w[0] + 8u), 0ull);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] + 16u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 44;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00165390:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001653C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x001653C4u) [[unlikely]] return; }
L_001653C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C410000u);
    set32(c.r[3], c.r[3].w[0] + 8848u);
    c.r[2].d[0] = c.r[2].d[0] | 20552ull;
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001653FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00165504; } }
L_001653FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165404u);  if (depth < kMaxDepth) unit_0011(c, 139u, depth + 1u); else { c.pc = 0x00164F50u; return; } if (c.pc != 0x00165404u) [[unlikely]] return; }
L_00165404:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] != 0ull) { set32(c.r[4], 0u + 80u);  goto L_00165434; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016541Cu); set32(c.r[5], 0u + 54u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0016541Cu) [[unlikely]] return; }
L_0016541C:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00165504; } }
L_00165434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016543Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0016543Cu) [[unlikely]] return; }
L_0016543C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 64u), c.r[2].w[0]);  goto L_00165460; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016545Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 184u, depth + 1u); else { c.pc = 0x001656B0u; return; } if (c.pc != 0x0016545Cu) [[unlikely]] return; }
L_0016545C:
    st32((c.r[19].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_00165460:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  goto L_0016548C; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165474u); set32(c.r[5], 0u + 57u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00165474u) [[unlikely]] return; }
L_00165474:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00165504; } }
L_0016548C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[2].w[0] + 32u)));  goto L_001654E0; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001654A8u); set32(c.r[5], 0u + 57u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x001654A8u) [[unlikely]] return; }
L_001654A8:
    set32(c.r[4], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 64u), 0u);  goto L_001654C8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001654C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001654C4u) [[unlikely]] return; }
L_001654C4:
    st32((c.r[19].w[0] + 64u), 0u);
    c.budget -= 1;
L_001654C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00165504; } }
L_001654E0:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 28u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 9;
L_00165504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00165530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165550u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x00165550u) [[unlikely]] return; }
L_00165550:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C410000u);
    set32(c.r[3], c.r[3].w[0] + 8848u);
    c.r[2].d[0] = c.r[2].d[0] | 20552ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 64u)));  goto L_00165588; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001655DC; } }
L_00165588:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { st32((c.r[17].w[0] + 64u), c.r[6].w[0]);  goto L_001655B4; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016559Cu); set32(c.r[5], 0u + 61u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0016559Cu) [[unlikely]] return; }
L_0016559C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001655DC; } }
L_001655B4:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], ld32((c.r[6].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[6].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 10;
L_001655DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001655F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00165678; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8848u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00165658; }
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0; st32((c.r[3].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_00165650; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 64u), 0u);  goto L_00165654; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00165650u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00165650u) [[unlikely]] return; }
L_00165650:
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 1;
L_00165654:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00165658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165660u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 240u, depth + 1u); else { c.pc = 0x00166010u; return; } if (c.pc != 0x00165660u) [[unlikely]] return; }
L_00165660:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0016567C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165678u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00165678u) [[unlikely]] return; }
L_00165678:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0016567C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00165690:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001656A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001656B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[7], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[3], c.r[3].w[0] + 8880u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x554C0000u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 20552ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 34;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0016573C; } }
    st32((c.r[2].w[0] + 20u), c.r[20].w[0]);
    c.budget -= 1;
L_0016573C:
    st32((c.r[20].w[0] + 20u), 0u);
    set32(c.r[4], c.r[20].w[0] + 64u);
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    st32((c.r[2].w[0] + 24u), c.r[20].w[0]);
    st32((c.r[20].w[0] + 36u), 0u);
    st32((c.r[20].w[0] + 40u), 0u);
    st32((c.r[20].w[0] + 44u), 0u);
    st32((c.r[20].w[0] + 48u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165764u); st32((c.r[20].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0018(c, 216u, depth + 1u); else { c.pc = 0x00182BC0u; return; } if (c.pc != 0x00165764u) [[unlikely]] return; }
L_00165764:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 1u);  goto L_001657A4; }
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001657A0; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165788u); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00165788u) [[unlikely]] return; }
L_00165788:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001658A8; } }
L_001657A0:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001657A4:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[16].d[0]) { set32(c.r[2], 0u + 2u);  goto L_001657C8; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001657C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0016580C; } }
L_001657C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0016580C; } }
L_001657C8:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[4], 0u + 3u);  goto L_001657EC; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_001657E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]); c.r[21].d[0] = c.lo.d[0];  if (t) { goto L_00165810; } }
L_001657E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_0016580C; } }
L_001657EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001657F4u); set32(c.r[5], 0u + 59u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x001657F4u) [[unlikely]] return; }
L_001657F4:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001658A8; } }
L_0016580C:
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00165810:
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016581Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 155u, depth + 1u); else { c.pc = 0x00165180u; return; } if (c.pc != 0x0016581Cu) [[unlikely]] return; }
L_0016581C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_00165848; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165830u); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00165830u) [[unlikely]] return; }
L_00165830:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001658A8; } }
L_00165848:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[20].w[0] + 64u);  goto L_00165864; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165860u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00165860u) [[unlikely]] return; }
L_00165860:
    set32(c.r[4], c.r[20].w[0] + 64u);
    c.budget -= 1;
L_00165864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016586Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 259u, depth + 1u); else { c.pc = 0x001838C0u; return; } if (c.pc != 0x0016586Cu) [[unlikely]] return; }
L_0016586C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 44u)));  goto L_0016588C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001658A8; } }
L_0016588C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165894u); set32(c.r[4], c.r[20].w[0] + 64u);  if (depth < kMaxDepth) unit_0018(c, 260u, depth + 1u); else { c.pc = 0x00183950u; return; } if (c.pc != 0x00165894u) [[unlikely]] return; }
L_00165894:
    st32((c.r[20].w[0] + 36u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 40u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 48u), c.r[21].w[0]);
    st32((c.r[20].w[0] + 52u), c.r[16].w[0]);
    c.budget -= 5;
L_001658A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001658D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00165994; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], c.r[3].w[0] + 8880u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 44u)));  goto L_00165918; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165914u);  if (depth < kMaxDepth) unit_0011(c, 162u, depth + 1u); else { c.pc = 0x00165260u; return; } if (c.pc != 0x00165914u) [[unlikely]] return; }
L_00165914:
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_00165918:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_0016592C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165928u); set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  if (depth < kMaxDepth) unit_0011(c, 158u, depth + 1u); else { c.pc = 0x001651C0u; return; } if (c.pc != 0x00165928u) [[unlikely]] return; }
L_00165928:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_0016592C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 24u)));  goto L_00165940; }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00165948; } }
L_00165940:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 2;
L_00165948:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016595C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0016595C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00165980; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 7;
L_00165980:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00165998; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165994u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00165994u) [[unlikely]] return; }
L_00165994:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00165998:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001659B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001659D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00165A30; } }
L_001659D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001659FC; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001659F4u); set32(c.r[5], 0u + 58u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x001659F4u) [[unlikely]] return; }
L_001659F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00165A30; } }
L_001659FC:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_00165A14; }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165A10u); set32(c.r[6], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00165A10u) [[unlikely]] return; }
L_00165A10:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00165A14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00165A30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165A2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 162u, depth + 1u); else { c.pc = 0x00165260u; return; } if (c.pc != 0x00165A2Cu) [[unlikely]] return; }
L_00165A2C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00165A30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00165A40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);  goto L_00165A64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00165A8C; } }
L_00165A64:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00165A84; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165A7Cu); set32(c.r[5], 0u + 58u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00165A7Cu) [[unlikely]] return; }
L_00165A7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00165A8C; } }
L_00165A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165A8Cu);  if (depth < kMaxDepth) unit_0011(c, 163u, depth + 1u); else { c.pc = 0x00165280u; return; } if (c.pc != 0x00165A8Cu) [[unlikely]] return; }
L_00165A8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00165AA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165ACCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 175u, depth + 1u); else { c.pc = 0x0015DCC0u; return; } if (c.pc != 0x00165ACCu) [[unlikely]] return; }
L_00165ACC:
    set32(c.r[4], c.r[29].w[0] + 108u);
    set32(c.r[5], c.r[29].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165ADCu); set32(c.r[6], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_0019(c, 223u, depth + 1u); else { c.pc = 0x00186FD0u; return; } if (c.pc != 0x00165ADCu) [[unlikely]] return; }
L_00165ADC:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[19].w[0] + 14u);
    c.budget -= 3;
L_00165AE8:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00165BD8; } }
    st32((c.r[19].w[0]), c.r[3].w[0]);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00165B28; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    c.r[6].d[0] = c.r[3].d[0] << 48;
    set32(c.r[7], ld32((c.r[29].w[0] + 108u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165B24u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 193u, depth + 1u); else { c.pc = 0x0015E060u; return; } if (c.pc != 0x00165B24u) [[unlikely]] return; }
L_00165B24:
    c.budget -= 1;
L_00165B28:
    set32(c.r[7], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00165B78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 30u);
    set32(c.r[5], ld32((c.r[3].w[0] + 18904u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00165B60; } }
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00165B78; } }
    c.budget -= 1;
L_00165B60:
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165B6Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 196u, depth + 1u); else { c.pc = 0x0015E180u; return; } if (c.pc != 0x00165B6Cu) [[unlikely]] return; }
L_00165B6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00165BA0; } }
    c.budget -= 1;
L_00165B78:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 26u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00165BA0; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 36u)));
    c.r[6].d[0] = c.r[3].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[7], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165B9Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 193u, depth + 1u); else { c.pc = 0x0015E060u; return; } if (c.pc != 0x00165B9Cu) [[unlikely]] return; }
L_00165B9C:
    c.budget -= 1;
L_00165BA0:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00165BC8; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.r[6].d[0] = c.r[3].d[0] << 48;
    set32(c.r[7], ld32((c.r[29].w[0] + 100u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165BC8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 193u, depth + 1u); else { c.pc = 0x0015E060u; return; } if (c.pc != 0x00165BC8u) [[unlikely]] return; }
L_00165BC8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00165AE8u | kUnwind; return; } goto L_00165AE8; } }
L_00165BD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00165C00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165C18u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x00165C18u) [[unlikely]] return; }
L_00165C18:
    set32(c.r[4], ld32((c.r[28].w[0] - 31380u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00165C58; }
    set32(c.r[2], ld32((c.r[28].w[0] - 31376u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], c.r[2].w[0] << 2);  goto L_00165C40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165C38u); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0011(c, 204u, depth + 1u); else { c.pc = 0x00165AA0u; return; } if (c.pc != 0x00165C38u) [[unlikely]] return; }
L_00165C38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00165C54; } }
L_00165C40:
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165C54u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 300u, depth + 1u); else { c.pc = 0x0015FA40u; return; } if (c.pc != 0x00165C54u) [[unlikely]] return; }
L_00165C54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00165C58:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00165C70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165C90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 175u, depth + 1u); else { c.pc = 0x0015DCC0u; return; } if (c.pc != 0x00165C90u) [[unlikely]] return; }
L_00165C90:
    set32(c.r[4], c.r[29].w[0] + 60u);
    set32(c.r[5], c.r[29].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165CA0u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_0019(c, 223u, depth + 1u); else { c.pc = 0x00186FD0u; return; } if (c.pc != 0x00165CA0u) [[unlikely]] return; }
L_00165CA0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    c.budget -= 4;
    if (c.r[3].sd[0] <= 0) { set32(c.r[7], ld32((c.r[16].w[0])));  goto L_00165CCC; }
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    c.r[6].d[0] = c.r[3].d[0] << 48;
    set32(c.r[7], ld32((c.r[29].w[0] + 60u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165CC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 193u, depth + 1u); else { c.pc = 0x0015E060u; return; } if (c.pc != 0x00165CC8u) [[unlikely]] return; }
L_00165CC8:
    set32(c.r[7], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00165CCC:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 26u)));  goto L_00165D14; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 30u);
    set32(c.r[5], ld32((c.r[3].w[0] + 18904u)));
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[5], ld32((c.r[29].w[0] + 56u)));  goto L_00165D00; }
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00165D10; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_00165D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165D08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 196u, depth + 1u); else { c.pc = 0x0015E180u; return; } if (c.pc != 0x00165D08u) [[unlikely]] return; }
L_00165D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0])));  if (t) { goto L_00165D38; } }
L_00165D10:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 26u)));
    c.budget -= 1;
L_00165D14:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00165D34; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 36u)));
    c.r[6].d[0] = c.r[3].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[7], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165D34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 193u, depth + 1u); else { c.pc = 0x0015E060u; return; } if (c.pc != 0x00165D34u) [[unlikely]] return; }
L_00165D34:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00165D38:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00165D60; }
    set32(c.r[5], ld32((c.r[5].w[0] + 40u)));
    c.r[6].d[0] = c.r[3].d[0] << 48;
    set32(c.r[7], ld32((c.r[29].w[0] + 52u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165D5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 193u, depth + 1u); else { c.pc = 0x0015E060u; return; } if (c.pc != 0x00165D5Cu) [[unlikely]] return; }
L_00165D5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00165D60:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00165D70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165D88u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x00165D88u) [[unlikely]] return; }
L_00165D88:
    set32(c.r[4], ld32((c.r[28].w[0] - 31380u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00165DC8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 31376u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], c.r[2].w[0] << 2);  goto L_00165DB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165DA8u); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0011(c, 216u, depth + 1u); else { c.pc = 0x00165C70u; return; } if (c.pc != 0x00165DA8u) [[unlikely]] return; }
L_00165DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00165DC4; } }
L_00165DB0:
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165DC4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 300u, depth + 1u); else { c.pc = 0x0015FA40u; return; } if (c.pc != 0x00165DC4u) [[unlikely]] return; }
L_00165DC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00165DC8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00165DE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165DFCu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 9u, depth + 1u); else { c.pc = 0x001883A0u; return; } if (c.pc != 0x00165DFCu) [[unlikely]] return; }
L_00165DFC:
    set32(c.r[17], ld32((c.r[28].w[0] - 31380u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00165F10; }
    set32(c.r[2], ld32((c.r[28].w[0] - 31376u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], c.r[2].w[0] << 2);  goto L_00165EF8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165E24u); set32(c.r[16], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 175u, depth + 1u); else { c.pc = 0x0015DCC0u; return; } if (c.pc != 0x00165E24u) [[unlikely]] return; }
L_00165E24:
    set32(c.r[4], c.r[29].w[0] + 60u);
    set32(c.r[5], c.r[29].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165E34u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_0019(c, 223u, depth + 1u); else { c.pc = 0x00186FD0u; return; } if (c.pc != 0x00165E34u) [[unlikely]] return; }
L_00165E34:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    c.budget -= 4;
    if (c.r[3].sd[0] <= 0) { set32(c.r[7], ld32((c.r[16].w[0])));  goto L_00165E60; }
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    c.r[6].d[0] = c.r[3].d[0] << 48;
    set32(c.r[7], ld32((c.r[29].w[0] + 60u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165E5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 193u, depth + 1u); else { c.pc = 0x0015E060u; return; } if (c.pc != 0x00165E5Cu) [[unlikely]] return; }
L_00165E5C:
    set32(c.r[7], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00165E60:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 26u)));  goto L_00165EA8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 30u);
    set32(c.r[5], ld32((c.r[3].w[0] + 18904u)));
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[5], ld32((c.r[29].w[0] + 56u)));  goto L_00165E94; }
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00165EA4; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_00165E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165E9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 196u, depth + 1u); else { c.pc = 0x0015E180u; return; } if (c.pc != 0x00165E9Cu) [[unlikely]] return; }
L_00165E9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0])));  if (t) { goto L_00165ECC; } }
L_00165EA4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 26u)));
    c.budget -= 1;
L_00165EA8:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00165EC8; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 36u)));
    c.r[6].d[0] = c.r[3].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[7], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165EC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 193u, depth + 1u); else { c.pc = 0x0015E060u; return; } if (c.pc != 0x00165EC8u) [[unlikely]] return; }
L_00165EC8:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00165ECC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00165F0C; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 40u)));
    c.r[6].d[0] = c.r[3].d[0] << 48;
    set32(c.r[7], ld32((c.r[29].w[0] + 52u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165EF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 193u, depth + 1u); else { c.pc = 0x0015E060u; return; } if (c.pc != 0x00165EF0u) [[unlikely]] return; }
L_00165EF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00165F0C; } }
L_00165EF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165F0Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 300u, depth + 1u); else { c.pc = 0x0015FA40u; return; } if (c.pc != 0x00165F0Cu) [[unlikely]] return; }
L_00165F0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00165F10:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00165F20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], c.r[31].w[0] - 8u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[3].d[0] = c.r[3].d[0] | 16706ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8960u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    st64((c.r[4].w[0] + 48u), 0ull);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    set32(c.r[18], ld32((c.r[28].w[0] - 31296u)));
    c.budget -= 30;
    if (c.r[18].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00165FBC; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165FA4u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00165FA4u) [[unlikely]] return; }
L_00165FA4:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00165FF8; } }
L_00165FBC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165FC8u); st32((c.r[17].w[0] + 36u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0013(c, 334u, depth + 1u); else { c.pc = 0x0016F830u; return; } if (c.pc != 0x00165FC8u) [[unlikely]] return; }
L_00165FC8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00165FF8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00165FDCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 336u, depth + 1u); else { c.pc = 0x0016F8E0u; return; } if (c.pc != 0x00165FDCu) [[unlikely]] return; }
L_00165FDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_00165FF4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_00165FF4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00165FF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00166010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001660AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8960u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 31296u)));
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 32u)));  goto L_00166064; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166050u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00166050u) [[unlikely]] return; }
L_00166050:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00166074; } }
L_00166064:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00166074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166074u);  if (depth < kMaxDepth) unit_0013(c, 346u, depth + 1u); else { c.pc = 0x0016FA10u; return; } if (c.pc != 0x00166074u) [[unlikely]] return; }
L_00166074:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00166098; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 7;
L_00166098:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001660B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001660ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001660ACu) [[unlikely]] return; }
L_001660AC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001660B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001660D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 31296u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001660F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001660F0u);  if (depth < kMaxDepth) unit_0013(c, 335u, depth + 1u); else { c.pc = 0x0016F870u; return; } if (c.pc != 0x001660F0u) [[unlikely]] return; }
L_001660F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001660F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00166100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00166120; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00166130; } }
L_00166120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166128u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0016F980u; return; } if (c.pc != 0x00166128u) [[unlikely]] return; }
L_00166128:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00166130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00166140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016615Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x0016615Cu) [[unlikely]] return; }
L_0016615C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C440000u);
    set32(c.r[3], c.r[3].w[0] + 8928u);
    c.r[2].d[0] = c.r[2].d[0] | 19784ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 80u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 140u), 0u);
    set32(c.r[6], 0u + 48u);
    st32((c.r[17].w[0] + 152u), 0u);
    st32((c.r[17].w[0] + 144u), 0u);
    st32((c.r[17].w[0] + 156u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166198u); st32((c.r[17].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00166198u) [[unlikely]] return; }
L_00166198:
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001661A8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001661A8u) [[unlikely]] return; }
L_001661A8:
    st32((c.r[17].w[0] + 128u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[17].w[0] + 132u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[16].w[0])));  goto L_001661CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00166388; } }
L_001661CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 21328ull;
    set32(c.r[4], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] >> 8);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 32u)));  goto L_001662D0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x484D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 17484ull;
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 32u)));  goto L_0016621C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_00166320; } }
L_0016621C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166224u); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_001A(c, 249u, depth + 1u); else { c.pc = 0x0018AD10u; return; } if (c.pc != 0x00166224u) [[unlikely]] return; }
L_00166224:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_001662B0; }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016623Cu); st32((c.r[17].w[0] + 128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001A(c, 266u, depth + 1u); else { c.pc = 0x0018B050u; return; } if (c.pc != 0x0016623Cu) [[unlikely]] return; }
L_0016623C:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[3], 0u + 1u);  goto L_00166294; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00166288; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0016627C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[17].w[0] + 56u), c.r[3].w[0]);  goto L_00166274; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_001662A4; } }
L_00166274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 136u), c.r[3].w[0]);  if (t) { goto L_001662A0; } }
L_0016627C:
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 136u), c.r[3].w[0]);  if (t) { goto L_001662A0; } }
L_00166288:
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 136u), c.r[4].w[0]);  if (t) { goto L_001662A0; } }
L_00166294:
    set32(c.r[2], 0u + 4u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 3;
L_001662A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 1;
L_001662A4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 140u), c.r[2].w[0]);  if (t) { goto L_00166340; } }
L_001662B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001662B8u); set32(c.r[5], 0u + 62u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x001662B8u) [[unlikely]] return; }
L_001662B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00166388; } }
L_001662D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001662D8u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_001E(c, 163u, depth + 1u); else { c.pc = 0x0019A230u; return; } if (c.pc != 0x001662D8u) [[unlikely]] return; }
L_001662D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_00166300; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 140u), c.r[2].w[0]);  if (t) { goto L_00166340; } }
L_00166300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166308u); set32(c.r[5], 0u + 109u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00166308u) [[unlikely]] return; }
L_00166308:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00166388; } }
L_00166320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166328u); set32(c.r[5], 0u + 62u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00166328u) [[unlikely]] return; }
L_00166328:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00166388; } }
L_00166340:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00166370; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166358u); set32(c.r[5], 0u + 63u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00166358u) [[unlikely]] return; }
L_00166358:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00166388; } }
L_00166370:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
L_00166388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001663A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00166490; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8928u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 132u)));  goto L_001663E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001663DCu); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_001A(c, 259u, depth + 1u); else { c.pc = 0x0018AEF0u; return; } if (c.pc != 0x001663DCu) [[unlikely]] return; }
L_001663DC:
    st32((c.r[17].w[0] + 128u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 2;
L_001663E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 140u), 0u);  goto L_001663FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001663F4u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_001E(c, 168u, depth + 1u); else { c.pc = 0x0019A2E0u; return; } if (c.pc != 0x001663F4u) [[unlikely]] return; }
L_001663F4:
    st32((c.r[17].w[0] + 132u), 0u);
    st32((c.r[17].w[0] + 140u), 0u);
    c.budget -= 2;
L_001663FC:
    st32((c.r[17].w[0] + 152u), 0u);
    st32((c.r[17].w[0] + 144u), 0u);
    st32((c.r[17].w[0] + 156u), 0u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 148u), 0u);  if (t) { goto L_00166478; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8960u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 31296u)));
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 32u)));  goto L_00166448; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166434u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00166434u) [[unlikely]] return; }
L_00166434:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00166458; } }
L_00166448:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00166458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166458u);  if (depth < kMaxDepth) unit_0013(c, 346u, depth + 1u); else { c.pc = 0x0016FA10u; return; } if (c.pc != 0x00166458u) [[unlikely]] return; }
L_00166458:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0016647C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_00166478:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0016647C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00166494; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166490u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00166490u) [[unlikely]] return; }
L_00166490:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00166494:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001664B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001664C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00166500; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00166504; }
    set32(c.r[3], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 132u)));  goto L_001664F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001664E8u); set32(c.r[4], c.r[4].w[0] + 80u);  if (depth < kMaxDepth) unit_001A(c, 260u, depth + 1u); else { c.pc = 0x0018AF20u; return; } if (c.pc != 0x001664E8u) [[unlikely]] return; }
L_001664E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00166500; } }
L_001664F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00166500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166500u); set32(c.r[4], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_001E(c, 169u, depth + 1u); else { c.pc = 0x0019A2F0u; return; } if (c.pc != 0x00166500u) [[unlikely]] return; }
L_00166500:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00166504:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00166510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00166550; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[4].w[0] + 80u);  goto L_00166548; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166540u); set32(c.r[5], 0u + 63u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00166540u) [[unlikely]] return; }
L_00166540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00166550; } }
L_00166548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166550u);  if (depth < kMaxDepth) unit_001B(c, 101u, depth + 1u); else { c.pc = 0x0018DE10u; return; } if (c.pc != 0x00166550u) [[unlikely]] return; }
L_00166550:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00166560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001665A0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[4].w[0] + 80u);  goto L_00166598; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166590u); set32(c.r[5], 0u + 63u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00166590u) [[unlikely]] return; }
L_00166590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001665A0; } }
L_00166598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001665A0u);  if (depth < kMaxDepth) unit_001B(c, 102u, depth + 1u); else { c.pc = 0x0018DE50u; return; } if (c.pc != 0x001665A0u) [[unlikely]] return; }
L_001665A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001665B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 132u)));  goto L_001665E0; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001665D4u); set32(c.r[5], 0u + 63u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x001665D4u) [[unlikely]] return; }
L_001665D4:
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001665FC; } }
L_001665E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 80u)));  goto L_001665F4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 60u));  if (t) { goto L_001665F8; } }
L_001665F4:
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    c.budget -= 1;
L_001665F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001665FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00166610:
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00166628; }
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 3;
L_00166628:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00166630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166644u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x00166644u) [[unlikely]] return; }
L_00166644:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x544F0000u);
    set32(c.r[3], c.r[3].w[0] + 8896u);
    c.r[2].d[0] = c.r[2].d[0] | 19784ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 32u)));  goto L_0016667C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001666FC; } }
L_0016667C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166684u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 25u, depth + 1u); else { c.pc = 0x00188560u; return; } if (c.pc != 0x00166684u) [[unlikely]] return; }
L_00166684:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_00166698; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_001666B8; } }
L_00166698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001666A0u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x001666A0u) [[unlikely]] return; }
L_001666A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001666FC; } }
L_001666B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_001666E4; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001666CCu); set32(c.r[5], 0u + 65u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x001666CCu) [[unlikely]] return; }
L_001666CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001666FC; } }
L_001666E4:
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
L_001666FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00166710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001667D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8896u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00166750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016674Cu); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 30u, depth + 1u); else { c.pc = 0x00188620u; return; } if (c.pc != 0x0016674Cu) [[unlikely]] return; }
L_0016674C:
    st32((c.r[17].w[0] + 72u), 0u);
    c.budget -= 1;
L_00166750:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001667C4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8960u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 31296u)));
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 32u)));  goto L_00166790; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016677Cu); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x0016677Cu) [[unlikely]] return; }
L_0016677C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001667A0; } }
L_00166790:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001667A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001667A0u);  if (depth < kMaxDepth) unit_0013(c, 346u, depth + 1u); else { c.pc = 0x0016FA10u; return; } if (c.pc != 0x001667A0u) [[unlikely]] return; }
L_001667A0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001667C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_001667C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001667C4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001667DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001667D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001667D8u) [[unlikely]] return; }
L_001667D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001667DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001667F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00166800:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0016681C; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00166820; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016681Cu); set32(c.r[4], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 31u, depth + 1u); else { c.pc = 0x00188630u; return; } if (c.pc != 0x0016681Cu) [[unlikely]] return; }
L_0016681C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00166820:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00166830:
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.f[0] = 0u;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00166848; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 2;
L_00166848:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00166850:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001668C8; } }
    set32(c.r[5], c.r[6].w[0] + 80u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166890u); set32(c.r[6], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_001A(c, 40u, depth + 1u); else { c.pc = 0x001887E0u; return; } if (c.pc != 0x00166890u) [[unlikely]] return; }
L_00166890:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_001668C0; }
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[3], c.r[17].w[0] << 1);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001668B8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001A(c, 80u, depth + 1u); else { c.pc = 0x00189190u; return; } if (c.pc != 0x001668B8u) [[unlikely]] return; }
L_001668B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001668C8; } }
L_001668C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001668C8u); set32(c.r[5], 0u + 74u);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x001668C8u) [[unlikely]] return; }
L_001668C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001668F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00166908; }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 3;
L_00166908:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00166910:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 80u);  goto L_00166934; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016692Cu); set32(c.r[4], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 32u, depth + 1u); else { c.pc = 0x0018CF20u; return; } if (c.pc != 0x0016692Cu) [[unlikely]] return; }
L_0016692C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00166940; } }
L_00166934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016693Cu);  if (depth < kMaxDepth) unit_001B(c, 32u, depth + 1u); else { c.pc = 0x0018CF20u; return; } if (c.pc != 0x0016693Cu) [[unlikely]] return; }
L_0016693C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00166940:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00166950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 132u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016698C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166978u); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 33u, depth + 1u); else { c.pc = 0x0018CF50u; return; } if (c.pc != 0x00166978u) [[unlikely]] return; }
L_00166978:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166984u); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 34u, depth + 1u); else { c.pc = 0x0018CF80u; return; } if (c.pc != 0x00166984u) [[unlikely]] return; }
L_00166984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001669A4; } }
L_0016698C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166994u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 33u, depth + 1u); else { c.pc = 0x0018CF50u; return; } if (c.pc != 0x00166994u) [[unlikely]] return; }
L_00166994:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001669A0u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 34u, depth + 1u); else { c.pc = 0x0018CF80u; return; } if (c.pc != 0x001669A0u) [[unlikely]] return; }
L_001669A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001669A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001669C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001669F0u); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 33u, depth + 1u); else { c.pc = 0x0018CF50u; return; } if (c.pc != 0x001669F0u) [[unlikely]] return; }
L_001669F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 80u);
    set32(c.r[6], c.r[16].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166A04u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001B(c, 37u, depth + 1u); else { c.pc = 0x0018CFF0u; return; } if (c.pc != 0x00166A04u) [[unlikely]] return; }
L_00166A04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00166A20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[5], c.r[18].w[0] + 80u);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[22] = c.f[12];
    c.f[21] = c.f[13];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166A68u); c.f[20] = c.f[14];  if (depth < kMaxDepth) unit_001B(c, 33u, depth + 1u); else { c.pc = 0x0018CF50u; return; } if (c.pc != 0x00166A68u) [[unlikely]] return; }
L_00166A68:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 80u);
    set32(c.r[6], c.r[17].w[0] + 64u);
    set32(c.r[7], c.r[16].w[0] + 64u);
    c.f[12] = c.f[22];
    c.f[13] = c.f[21];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166A88u); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_001B(c, 42u, depth + 1u); else { c.pc = 0x0018D110u; return; } if (c.pc != 0x00166A88u) [[unlikely]] return; }
L_00166A88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00166AB0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_001B(c, 76u, depth); }
L_00166AC0:
    c.budget -= 2;
    { set32(c.r[5], c.r[5].w[0] + 80u);  [[clang::musttail]] return unit_001B(c, 88u, depth); }
L_00166AD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166B00u); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 54u, depth + 1u); else { c.pc = 0x0018D320u; return; } if (c.pc != 0x00166B00u) [[unlikely]] return; }
L_00166B00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 80u);
    set32(c.r[6], c.r[16].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166B14u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001B(c, 55u, depth + 1u); else { c.pc = 0x0018D360u; return; } if (c.pc != 0x00166B14u) [[unlikely]] return; }
L_00166B14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00166B30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[5], c.r[18].w[0] + 80u);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[22] = c.f[12];
    c.f[21] = c.f[13];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166B78u); c.f[20] = c.f[14];  if (depth < kMaxDepth) unit_001B(c, 54u, depth + 1u); else { c.pc = 0x0018D320u; return; } if (c.pc != 0x00166B78u) [[unlikely]] return; }
L_00166B78:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 80u);
    set32(c.r[6], c.r[17].w[0] + 64u);
    set32(c.r[7], c.r[16].w[0] + 64u);
    c.f[12] = c.f[22];
    c.f[13] = c.f[21];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166B98u); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_001B(c, 59u, depth + 1u); else { c.pc = 0x0018D420u; return; } if (c.pc != 0x00166B98u) [[unlikely]] return; }
L_00166B98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00166BC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166BE8u); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 33u, depth + 1u); else { c.pc = 0x0018CF50u; return; } if (c.pc != 0x00166BE8u) [[unlikely]] return; }
L_00166BE8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166BF8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 68u, depth + 1u); else { c.pc = 0x0018D600u; return; } if (c.pc != 0x00166BF8u) [[unlikely]] return; }
L_00166BF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00166C10:
    set32(c.r[5], c.r[5].w[0] + 80u);
    c.budget -= 3;
    { set32(c.r[7], c.r[7].w[0] + 64u);  [[clang::musttail]] return unit_001B(c, 71u, depth); }
L_00166C20:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[6].w[0] + 64u);
    c.budget -= 4;
    { c.r[6].d[0] = c.r[2].d[0] + 0ull;  [[clang::musttail]] return unit_001B(c, 92u, depth); }
L_00166C30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166C40u);  if (depth < kMaxDepth) unit_001B(c, 100u, depth + 1u); else { c.pc = 0x0018DE00u; return; } if (c.pc != 0x00166C40u) [[unlikely]] return; }
L_00166C40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00166C50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166C64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x00166C64u) [[unlikely]] return; }
L_00166C64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8992u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166C78u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 341u, depth + 1u); else { c.pc = 0x00166E00u; return; } if (c.pc != 0x00166C78u) [[unlikely]] return; }
L_00166C78:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 32u)));  goto L_00166C94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00166CDC; } }
L_00166C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166C9Cu); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001C(c, 133u, depth + 1u); else { c.pc = 0x00191CC0u; return; } if (c.pc != 0x00166C9Cu) [[unlikely]] return; }
L_00166C9C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 28u), 0u);  goto L_00166CC8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 76u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166CC0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00166CC0u) [[unlikely]] return; }
L_00166CC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00166CDC; } }
L_00166CC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_00166CDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00166CF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00166D58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], c.r[3].w[0] + 8992u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00166D38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166D34u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001C(c, 138u, depth + 1u); else { c.pc = 0x00191D80u; return; } if (c.pc != 0x00166D34u) [[unlikely]] return; }
L_00166D34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00166D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166D40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 240u, depth + 1u); else { c.pc = 0x00166010u; return; } if (c.pc != 0x00166D40u) [[unlikely]] return; }
L_00166D40:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00166D5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166D58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00166D58u) [[unlikely]] return; }
L_00166D58:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00166D5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00166D70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00166D80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00166D9C; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00166DA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166D9Cu); set32(c.r[4], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_001C(c, 139u, depth + 1u); else { c.pc = 0x00191D90u; return; } if (c.pc != 0x00166D9Cu) [[unlikely]] return; }
L_00166D9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00166DA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00166DB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 72u), c.f[12]);  c.pc = t; return; }
L_00166DC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 72u));  c.pc = t; return; }
L_00166DD0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.f[0] = 0u;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00166DF0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 2;
L_00166DF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00166E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x544D0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 17224ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00166E24u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001C(c, 132u, depth + 1u); else { c.pc = 0x00191CB0u; return; } if (c.pc != 0x00166E24u) [[unlikely]] return; }
L_00166E24:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00166E50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[28].w[0] - 31368u), 0u);
    st32((c.r[28].w[0] - 31364u), 0u);
    c.r[3].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 14784u);
    c.budget -= 6;
L_00166E68:
    set32(c.r[4], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st32((c.r[5].w[0] + 4u), 0u);
    st32((c.r[5].w[0] + 8u), 0u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[5].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00166E90; } }
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 1;
L_00166E90:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[28].w[0] - 31372u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00166E68u | kUnwind; return; } goto L_00166E68; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00166EB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[28].w[0] - 31368u), 0u);
    st32((c.r[28].w[0] - 31364u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 31372u), 0u);
    set32(c.r[4], c.r[4].w[0] + 14784u);
    c.budget -= 6;
L_00166EC8:
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 8u);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 18u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st16((c.r[4].w[0] + 32u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 34u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st16((c.r[4].w[0] + 64u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 66u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st16((c.r[4].w[0] + 80u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 82u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st16((c.r[4].w[0] + 96u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 98u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st16((c.r[4].w[0] + 112u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 114u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 124u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    c.budget -= 44;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00166EC8u | kUnwind; return; } goto L_00166EC8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00166F80:
    set32(c.r[6], ld32((c.r[28].w[0] - 31372u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00166FF0; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[28].w[0] - 31372u), c.r[5].w[0]);  if (t) { goto L_00166FC4; } }
    st32((c.r[6].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 31368u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[6].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00166FB4; } }
    st32((c.r[3].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 1;
L_00166FB4:
    st32((c.r[28].w[0] - 31368u), c.r[6].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00166FF0; } }
L_00166FC4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00166FF0; } }
    st32((c.r[6].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 31364u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[6].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00166FE4; } }
    st32((c.r[3].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 1;
L_00166FE4:
    st32((c.r[28].w[0] - 31364u), c.r[6].w[0]);
    set32(c.r[3], 0u + 2u);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00166FF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00167000:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_00167044; }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 12u)));  goto L_00167028; }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0016702C; } }
L_00167028:
    st32((c.r[28].w[0] - 31368u), c.r[3].w[0]);
    c.budget -= 1;
L_0016702C:
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { st32((c.r[4].w[0] + 8u), 0u);  goto L_00167080; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0016707C; } }
L_00167044:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0016707C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 12u)));  goto L_00167064; }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00167068; } }
L_00167064:
    st32((c.r[28].w[0] - 31364u), c.r[3].w[0]);
    c.budget -= 1;
L_00167068:
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0016707C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 2;
L_0016707C:
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 1;
L_00167080:
    set32(c.r[3], ld32((c.r[28].w[0] - 31372u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00167090; } }
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 1;
L_00167090:
    st32((c.r[28].w[0] - 31372u), c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_001670A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001670BCu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x001670BCu) [[unlikely]] return; }
L_001670BC:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001670C8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0011(c, 347u, depth + 1u); else { c.pc = 0x00166F80u; return; } if (c.pc != 0x001670C8u) [[unlikely]] return; }
L_001670C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001670D8; } }
    c.r[16].d[0] = ld16((c.r[2].w[0]));
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 2;
L_001670D8:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001670EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001670E8u);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x001670E8u) [[unlikely]] return; }
L_001670E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001670EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00167100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167114u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x00167114u) [[unlikely]] return; }
L_00167114:
    set32(c.r[4], c.r[16].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 14784u);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016712Cu); set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0011(c, 348u, depth + 1u); else { c.pc = 0x00167000u; return; } if (c.pc != 0x0016712Cu) [[unlikely]] return; }
L_0016712C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00167140; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016713Cu);  if (depth < kMaxDepth) unit_0003(c, 292u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x0016713Cu) [[unlikely]] return; }
L_0016713C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00167140:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00167150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 31364u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00167190; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0016716C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00167180; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016717Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016717Cu) [[unlikely]] return; }
L_0016717C:
    c.budget -= 1;
L_00167180:
    set32(c.r[16], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016716Cu | kUnwind; return; } goto L_0016716C; }
    c.budget -= 1;
L_00167190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001671A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 31368u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001671E0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_001671BC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001671D0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001671CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001671CCu) [[unlikely]] return; }
L_001671CC:
    c.budget -= 1;
L_001671D0:
    set32(c.r[16], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001671BCu | kUnwind; return; } goto L_001671BC; }
    c.budget -= 1;
L_001671E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001671F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167204u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00165F20u; return; } if (c.pc != 0x00167204u) [[unlikely]] return; }
L_00167204:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 9024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167218u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 375u, depth + 1u); else { c.pc = 0x00167350u; return; } if (c.pc != 0x00167218u) [[unlikely]] return; }
L_00167218:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 32u)));  goto L_00167234; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0016727C; } }
L_00167234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016723Cu); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001C(c, 143u, depth + 1u); else { c.pc = 0x00191E20u; return; } if (c.pc != 0x0016723Cu) [[unlikely]] return; }
L_0016723C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 28u), 0u);  goto L_00167268; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 78u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167260u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 217u, depth + 1u); else { c.pc = 0x00156450u; return; } if (c.pc != 0x00167260u) [[unlikely]] return; }
L_00167260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0016727C; } }
L_00167268:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_0016727C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00167290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001672F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], c.r[3].w[0] + 9024u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001672D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001672D4u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001C(c, 148u, depth + 1u); else { c.pc = 0x00191EE0u; return; } if (c.pc != 0x001672D4u) [[unlikely]] return; }
L_001672D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001672D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001672E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 240u, depth + 1u); else { c.pc = 0x00166010u; return; } if (c.pc != 0x001672E0u) [[unlikely]] return; }
L_001672E0:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001672FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001672F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001672F8u) [[unlikely]] return; }
L_001672F8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001672FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00167310:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00167320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0016733C; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00167340; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016733Cu); set32(c.r[4], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_001C(c, 149u, depth + 1u); else { c.pc = 0x00191EF0u; return; } if (c.pc != 0x0016733Cu) [[unlikely]] return; }
L_0016733C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00167340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00167350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x544D0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 19528ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167374u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001C(c, 142u, depth + 1u); else { c.pc = 0x00191E10u; return; } if (c.pc != 0x00167374u) [[unlikely]] return; }
L_00167374:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001673A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 72u), c.f[12]);  c.pc = t; return; }
L_001673B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 72u));  c.pc = t; return; }
L_001673C0:
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
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 31360u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00167440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167400u); set32(c.r[4], 0u + 3632u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00167400u) [[unlikely]] return; }
L_00167400:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 31360u), c.r[2].w[0]);  goto L_00167428; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167424u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 389u, depth + 1u); else { c.pc = 0x00167540u; return; } if (c.pc != 0x00167424u) [[unlikely]] return; }
L_00167424:
    st32((c.r[28].w[0] - 31360u), c.r[2].w[0]);
    c.budget -= 1;
L_00167428:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00167444; }
    st32((c.r[28].w[0] - 31356u), c.r[2].w[0]);
    c.budget -= 1;
L_00167440:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00167444:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31360u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00167470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 31360u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001674A8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 31360u), 0u);  goto L_001674A0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016749Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016749Cu) [[unlikely]] return; }
L_0016749C:
    st32((c.r[28].w[0] - 31360u), 0u);
    c.budget -= 1;
L_001674A0:
    st32((c.r[28].w[0] - 31356u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_001674A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001674B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 31356u)));  c.pc = t; return; }
L_001674C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 31356u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001674DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001674E8; } }
L_001674DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001674E4u);  if (depth < kMaxDepth) unit_0012(c, 10u, depth + 1u); else { c.pc = 0x00168360u; return; } if (c.pc != 0x001674E4u) [[unlikely]] return; }
L_001674E4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001674E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00167500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 31356u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0016751C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00167528; } }
L_0016751C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167524u);  if (depth < kMaxDepth) unit_0012(c, 66u, depth + 1u); else { c.pc = 0x001695F0u; return; } if (c.pc != 0x00167524u) [[unlikely]] return; }
L_00167524:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00167528:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00167540:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016757Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 61u, depth + 1u); else { c.pc = 0x00169310u; return; } if (c.pc != 0x0016757Cu) [[unlikely]] return; }
L_0016757C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 9056u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[16].w[0] + 3480u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 3508u), 0u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0] + 3524u), 0u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 3520u), 0u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 3528u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 3540u), 0u);
    st32((c.r[16].w[0] + 3544u), 0u);
    st16((c.r[16].w[0] + 3550u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 3548u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 3554u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 3552u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 3556u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 3558u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 3560u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 3584u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 3588u), 0u);
    st32((c.r[16].w[0] + 3508u), 0u);
    st32((c.r[16].w[0] + 3484u), 0u);
    st32((c.r[16].w[0] + 3488u), 0u);
    st32((c.r[16].w[0] + 3492u), 0u);
    st32((c.r[16].w[0] + 3496u), 0u);
    st32((c.r[16].w[0] + 3592u), 0u);
    st32((c.r[16].w[0] + 3596u), 0u);
    st32((c.r[16].w[0] + 3604u), 0u);
    st32((c.r[16].w[0] + 3608u), 0u);
    st32((c.r[16].w[0] + 3600u), 0u);
    st32((c.r[16].w[0] + 3532u), 0u);
    st32((c.r[16].w[0] + 3536u), 0u);
    st32((c.r[16].w[0] + 3500u), 0u);
    st32((c.r[16].w[0] + 3504u), 0u);
    st32((c.r[16].w[0] + 3512u), 0u);
    st32((c.r[16].w[0] + 3516u), 0u);
    st16((c.r[16].w[0] + 3614u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 3612u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 3616u), c.r[2].w[0]);
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016763Cu); st32((c.r[16].w[0] + 3620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 407u, depth + 1u); else { c.pc = 0x00167880u; return; } if (c.pc != 0x0016763Cu) [[unlikely]] return; }
L_0016763C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0016766C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016764Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 442u, depth + 1u); else { c.pc = 0x00167EB0u; return; } if (c.pc != 0x0016764Cu) [[unlikely]] return; }
L_0016764C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167658u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 445u, depth + 1u); else { c.pc = 0x00167F10u; return; } if (c.pc != 0x00167658u) [[unlikely]] return; }
L_00167658:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_0016766C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00167690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001676EC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 9072u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001676D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_001676D0:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001676E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001676E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001676E8u) [[unlikely]] return; }
L_001676E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001676EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00167700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00167860; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 9056u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 3592u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 3596u)));  goto L_0016774C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00167744u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00167744u) [[unlikely]] return; }
L_00167744:
    st32((c.r[17].w[0] + 3592u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 3596u)));
    c.budget -= 2;
L_0016774C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 3600u)));  goto L_0016776C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00167764u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00167764u) [[unlikely]] return; }
L_00167764:
    st32((c.r[17].w[0] + 3596u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 3600u)));
    c.budget -= 2;
L_0016776C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 3588u)));  goto L_0016778C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00167784u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00167784u) [[unlikely]] return; }
L_00167784:
    st32((c.r[17].w[0] + 3600u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 3588u)));
    c.budget -= 2;
L_0016778C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 3508u)));  goto L_001677A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016779Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0016779Cu) [[unlikely]] return; }
L_0016779C:
    st32((c.r[17].w[0] + 3588u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 3508u)));
    c.budget -= 2;
L_001677A4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 3512u)));  goto L_001677BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001677B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001677B4u) [[unlikely]] return; }
L_001677B4:
    st32((c.r[17].w[0] + 3508u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 3512u)));
    c.budget -= 2;
L_001677BC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 3516u)));  goto L_001677D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001677CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001677CCu) [[unlikely]] return; }
L_001677CC:
    st32((c.r[17].w[0] + 3512u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 3516u)));
    c.budget -= 2;
L_001677D4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 3604u)));  goto L_001677EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001677E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001677E4u) [[unlikely]] return; }
L_001677E4:
    st32((c.r[17].w[0] + 3516u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 3604u)));
    c.budget -= 2;
L_001677EC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 3608u)));  goto L_00167804; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001677FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001677FCu) [[unlikely]] return; }
L_001677FC:
    st32((c.r[17].w[0] + 3604u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 3608u)));
    c.budget -= 2;
L_00167804:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00167818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167814u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00167814u) [[unlikely]] return; }
L_00167814:
    st32((c.r[17].w[0] + 3608u), 0u);
    c.budget -= 1;
L_00167818:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0016784C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 9072u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00167848; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_00167848:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0016784C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00167864; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167860u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00167860u) [[unlikely]] return; }
L_00167860:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00167864:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00167880:
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
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001678BCu); c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 14u, depth + 1u); else { c.pc = 0x00168580u; return; } if (c.pc != 0x001678BCu) [[unlikely]] return; }
L_001678BC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001678C8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 34u, depth + 1u); else { c.pc = 0x001688C0u; return; } if (c.pc != 0x001678C8u) [[unlikely]] return; }
L_001678C8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001678D4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 21u, depth + 1u); else { c.pc = 0x001686C0u; return; } if (c.pc != 0x001678D4u) [[unlikely]] return; }
L_001678D4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001678E4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 28u, depth + 1u); else { c.pc = 0x001687C0u; return; } if (c.pc != 0x001678E4u) [[unlikely]] return; }
L_001678E4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001678F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001678F4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 414u, depth + 1u); else { c.pc = 0x00167940u; return; } if (c.pc != 0x001678F4u) [[unlikely]] return; }
L_001678F4:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_00167910; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_0016791C; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00167918; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_00167910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167918u);  if (depth < kMaxDepth) unit_0011(c, 434u, depth + 1u); else { c.pc = 0x00167DA0u; return; } if (c.pc != 0x00167918u) [[unlikely]] return; }
L_00167918:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0016791C:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00167940:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 3484u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00167980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00167D6C; } }
L_00167980:
    set32(c.r[2], ld32((c.r[21].w[0] + 3592u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00167994; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00167D6C; } }
L_00167994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016799Cu);  if (depth < kMaxDepth) unit_0012(c, 54u, depth + 1u); else { c.pc = 0x00168F60u; return; } if (c.pc != 0x0016799Cu) [[unlikely]] return; }
L_0016799C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], 0u + 6u);  goto L_001679B0; }
    set32(c.r[16], 0u + 13u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 224u);  if (t) { goto L_001679B4; } }
L_001679B0:
    set32(c.r[20], 0u + 96u);
    c.budget -= 1;
L_001679B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001679BCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 48u, depth + 1u); else { c.pc = 0x00168AD0u; return; } if (c.pc != 0x001679BCu) [[unlikely]] return; }
L_001679BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[21].w[0] + 3550u));  goto L_001679E0; }
    c.r[3].d[0] = ld16((c.r[21].w[0] + 3550u));
    set32(c.r[2], 0u - 128u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 127u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 3612u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00167A40; } }
L_001679E0:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[20].sd[0] <= 0; set32(c.r[5], c.r[2].w[0] + 1u);  if (t) { goto L_00167A38; } }
    set32(c.r[6], ld32((c.r[21].w[0] + 3604u)));
    c.r[4].d[0] = ld16((c.r[21].w[0] + 3556u));
    c.budget -= 2;
L_001679FC:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[9].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00167A20; } }
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + c.r[5].w[0]);
    c.budget -= 3;
L_00167A20:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    set32(c.r[9], c.r[9].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001679FCu | kUnwind; return; } goto L_001679FC; } }
    c.budget -= 1;
L_00167A38:
    set32(c.r[2], c.r[8].w[0] + c.r[5].w[0]);
    st16((c.r[21].w[0] + 3612u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00167A40:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 3556u));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00167A58; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00167A70; } }
L_00167A58:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_00167A70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[21].w[0] + 3616u), c.f[0]);
    c.r[5].d[0] = ld16((c.r[21].w[0] + 3612u));
    c.budget -= 9;
    { const bool t = c.r[5].sd[0] <= 0; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00167AB0; } }
L_00167A94:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00167A94u | kUnwind; return; } goto L_00167A94; } }
L_00167AB0:
    set32(c.r[2], c.r[4].w[0] - 1u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 5;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[5], c.r[3].w[0] << (c.r[4].w[0] & 31u));  goto L_00167AC4; }
L_00167AC4:
    c.f[0] = c.r[5].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[21].w[0] + 3620u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[21].w[0] + 3556u));
    c.r[2].d[0] = ld16((c.r[21].w[0] + 3612u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00167AFC; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00167AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167B04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x00167B04u) [[unlikely]] return; }
L_00167B04:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[22].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[21].w[0] + 3556u));  goto L_00167B18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00167D6C; } }
L_00167B18:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 3612u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00167B30; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00167B30:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167B3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00167B3Cu) [[unlikely]] return; }
L_00167B3C:
    set32(c.r[2], ld32((c.r[21].w[0] + 3484u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167B4Cu); set32(c.r[19], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0012(c, 48u, depth + 1u); else { c.pc = 0x00168AD0u; return; } if (c.pc != 0x00167B4Cu) [[unlikely]] return; }
L_00167B4C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_00167BE0; }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00167CF0; } }
    c.r[8].d[0] = ld16((c.r[21].w[0] + 3550u));
    c.budget -= 1;
L_00167B60:
    c.r[2].d[0] = c.r[16].d[0] & 15ull;
    c.r[7].d[0] = ld16((c.r[21].w[0] + 3548u));
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] >= 0; st64((c.r[29].w[0]), 0ull);  if (t) { goto L_00167B7C; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]); c.r[10].d[0] = c.lo.d[0];  goto L_00167B80; }
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.budget -= 1;
L_00167B7C:
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00167B80:
    c.r[3].d[0] = c.r[8].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 4));  if (t) { goto L_00167B94; } }
    set32(c.r[2], c.r[16].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_00167B94:
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[6], ld32((c.r[21].w[0] + 3540u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167BACu); c.r[9].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 49u, depth + 1u); else { c.pc = 0x00168AE0u; return; } if (c.pc != 0x00167BACu) [[unlikely]] return; }
L_00167BAC:
    c.r[7].d[0] = ld16((c.r[21].w[0] + 3548u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = ld16((c.r[21].w[0] + 3550u));
    set32(c.r[6], ld32((c.r[21].w[0] + 3540u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167BC4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 53u, depth + 1u); else { c.pc = 0x00168F40u; return; } if (c.pc != 0x00167BC4u) [[unlikely]] return; }
L_00167BC4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[8].d[0] = ld16((c.r[21].w[0] + 3550u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00167B60u | kUnwind; return; } goto L_00167B60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00167CF0; } }
L_00167BE0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00167CF0; } }
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00167BF0:
    set32(c.r[3], ld32((c.r[21].w[0] + 3604u)));
    c.r[5].d[0] = ld16((c.r[21].w[0] + 3550u));
    set32(c.r[2], ld32((c.r[21].w[0] + 3608u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = ld16((c.r[21].w[0] + 3556u));
    c.r[7].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[6], c.r[5].w[0] + 1u);
    set32(c.r[30], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[18].w[0] + c.r[30].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);  if (t) { goto L_00167C28; } }
    set32(c.r[17], c.r[17].w[0] + c.r[6].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00167C28:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[0] = c.r[18].w[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.r[9].d[0] = c.r[22].d[0] + 0ull;
    c.r[10].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = c.r[17].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[2] = ld32((c.r[21].w[0] + 3616u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 3620u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.r[6].d[0] = ld8((c.r[3].w[0]));
    c.f[0] = ld32((c.r[21].w[0] + 3616u));
    set32(c.r[6], c.r[18].w[0] + c.r[6].w[0]);
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.r[6].d[0] = ld16((c.r[21].w[0] + 3550u));
    c.f[0] = ld32((c.r[21].w[0] + 3620u));
    set32(c.r[6], c.r[17].w[0] + c.r[6].w[0]);
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[7].d[0] = ld16((c.r[21].w[0] + 3548u));
    c.r[8].d[0] = ld16((c.r[21].w[0] + 3550u));
    set32(c.r[6], ld32((c.r[21].w[0] + 3540u)));
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167CC0u); c.r[11].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 49u, depth + 1u); else { c.pc = 0x00168AE0u; return; } if (c.pc != 0x00167CC0u) [[unlikely]] return; }
L_00167CC0:
    c.r[7].d[0] = ld16((c.r[21].w[0] + 3548u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = ld16((c.r[21].w[0] + 3550u));
    set32(c.r[6], ld32((c.r[21].w[0] + 3540u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167CD8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 53u, depth + 1u); else { c.pc = 0x00168F40u; return; } if (c.pc != 0x00167CD8u) [[unlikely]] return; }
L_00167CD8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + c.r[30].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00167BF0u | kUnwind; return; } goto L_00167BF0; } }
L_00167CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167CF8u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00167CF8u) [[unlikely]] return; }
L_00167CF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[21].w[0] + 3592u), c.r[2].w[0]);  goto L_00167D24; }
    c.r[5].d[0] = ld16((c.r[21].w[0] + 3556u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[21].w[0] + 3612u));
    set32(c.r[7], 0u + 10240u);
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167D20u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x00167D20u) [[unlikely]] return; }
L_00167D20:
    st32((c.r[21].w[0] + 3592u), c.r[2].w[0]);
    c.budget -= 1;
L_00167D24:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_00167D40; }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167D38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00167D38u) [[unlikely]] return; }
L_00167D38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00167D6C; } }
L_00167D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167D48u);  if (depth < kMaxDepth) unit_0011(c, 442u, depth + 1u); else { c.pc = 0x00167EB0u; return; } if (c.pc != 0x00167D48u) [[unlikely]] return; }
L_00167D48:
    set32(c.r[2], ld32((c.r[21].w[0] + 3592u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167D58u); set32(c.r[5], ld32((c.r[21].w[0] + 3600u)));  if (depth < kMaxDepth) unit_0010(c, 17u, depth + 1u); else { c.pc = 0x00160370u; return; } if (c.pc != 0x00167D58u) [[unlikely]] return; }
L_00167D58:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167D64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00167D64u) [[unlikely]] return; }
L_00167D64:
    set32(c.r[2], 0u + 1u);
    st32((c.r[21].w[0] + 3480u), c.r[2].w[0]);
    c.budget -= 2;
L_00167D6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00167DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 3588u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00167DC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00167E98; } }
L_00167DC0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 3558u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00167DD8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00167DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167DE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x00167DE0u) [[unlikely]] return; }
L_00167DE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 3588u), c.r[2].w[0]);  if (t) { goto L_00167DF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00167E98; } }
L_00167DF0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 3558u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00167E08; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_00167E08:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167E14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00167E14u) [[unlikely]] return; }
L_00167E14:
    set32(c.r[4], ld32((c.r[16].w[0] + 3596u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 72u);  goto L_00167E34; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00167E30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00167E30u) [[unlikely]] return; }
L_00167E30:
    set32(c.r[4], 0u + 72u);
    c.budget -= 1;
L_00167E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167E3Cu); st32((c.r[16].w[0] + 3596u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00167E3Cu) [[unlikely]] return; }
L_00167E3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 3596u), c.r[2].w[0]);  goto L_00167E68; }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 3558u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 3588u)));
    set32(c.r[7], 0u + 10240u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167E64u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x00167E64u) [[unlikely]] return; }
L_00167E64:
    st32((c.r[16].w[0] + 3596u), c.r[2].w[0]);
    c.budget -= 1;
L_00167E68:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00167E78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00167E98; } }
L_00167E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167E80u);  if (depth < kMaxDepth) unit_0011(c, 442u, depth + 1u); else { c.pc = 0x00167EB0u; return; } if (c.pc != 0x00167E80u) [[unlikely]] return; }
L_00167E80:
    set32(c.r[2], ld32((c.r[16].w[0] + 3596u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167E90u); set32(c.r[5], ld32((c.r[16].w[0] + 3600u)));  if (depth < kMaxDepth) unit_0010(c, 17u, depth + 1u); else { c.pc = 0x00160370u; return; } if (c.pc != 0x00167E90u) [[unlikely]] return; }
L_00167E90:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 3480u), c.r[2].w[0]);
    c.budget -= 2;
L_00167E98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00167EB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 3600u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00167EF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167ED0u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00167ED0u) [[unlikely]] return; }
L_00167ED0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 3600u), c.r[4].w[0]);  goto L_00167EF8; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167EF0u); set32(c.r[7], c.r[7].w[0] - 6160u);  if (depth < kMaxDepth) unit_0011(c, 166u, depth + 1u); else { c.pc = 0x00165390u; return; } if (c.pc != 0x00167EF0u) [[unlikely]] return; }
L_00167EF0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 3600u), c.r[4].w[0]);
    c.budget -= 2;
L_00167EF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00167F10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 3600u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00167F40; }
    set32(c.r[4], ld32((c.r[3].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] - 6160u);
    set32(c.r[3], c.r[5].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167F3Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0011(c, 197u, depth + 1u); else { c.pc = 0x001659B0u; return; } if (c.pc != 0x00167F3Cu) [[unlikely]] return; }
L_00167F3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00167F40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00167F50:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 3588u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00167F90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0012(c, 7u, depth); } }
L_00167F90:
    c.r[3].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00167FB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167FA8u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 43u, depth + 1u); else { c.pc = 0x001689C0u; return; } if (c.pc != 0x00167FA8u) [[unlikely]] return; }
L_00167FA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00167FB8; } }
L_00167FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00167FB8u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 12u, depth + 1u); else { c.pc = 0x001683A0u; return; } if (c.pc != 0x00167FB8u) [[unlikely]] return; }
L_00167FB8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_00167FC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0012(c, 7u, depth); } }
L_00167FC8:
    c.r[12].d[0] = 0ull + 0ull;
    c.r[13].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 5;
L_00167FDC:
    c.r[3].d[0] = c.r[19].d[0] & c.r[3].d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00167FF0; } }
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[12], c.r[12].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00167FF0:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[19].d[0] & c.r[3].d[0];
    c.budget -= 4;
    [[clang::musttail]] return unit_0012(c, 1u, depth);
}

}
