#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BE[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 5, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0,
    20, 0, 21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0,
    0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0,
    0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 85,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109,
    0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 116, 0, 117, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120,
    0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0,
    0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0,
    0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0,
    0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0,
    187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 195, 0,
    196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0,
    0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0,
    207, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214,
    0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 224, 0, 225,
    0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 234, 0, 235, 0, 0, 0, 236, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0,
    0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0,
    0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0,
    0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0,
    0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0,
    323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0,
    0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0,
    0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0,
    0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0,
    364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0,
    0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0,
    0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0,
    383, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 394, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0,
    0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0,
    0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0,
    0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0,
    0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0,
    0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 426, 0, 427, 0, 0, 0, 0,
    0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0,
    0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 444, 0, 445, 0, 0, 0, 0,
    0, 0, 446, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451,
    0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 0,
    0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0,
    0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0,
    0, 476, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 482, 0, 483, 0, 0, 0, 0, 0,
    484, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 489, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    497, 0, 498, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00BE(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00418000;
    case 2u: goto L_0041800C;
    case 3u: goto L_00418068;
    case 4u: goto L_0041806C;
    case 5u: goto L_00418070;
    case 6u: goto L_00418080;
    case 7u: goto L_004181A0;
    case 8u: goto L_004181D8;
    case 9u: goto L_004181EC;
    case 10u: goto L_00418218;
    case 11u: goto L_00418230;
    case 12u: goto L_00418254;
    case 13u: goto L_00418274;
    case 14u: goto L_00418288;
    case 15u: goto L_00418290;
    case 16u: goto L_004182A8;
    case 17u: goto L_004182B4;
    case 18u: goto L_004182D4;
    case 19u: goto L_004182E8;
    case 20u: goto L_00418300;
    case 21u: goto L_00418308;
    case 22u: goto L_00418320;
    case 23u: goto L_00418328;
    case 24u: goto L_00418344;
    case 25u: goto L_0041834C;
    case 26u: goto L_00418374;
    case 27u: goto L_0041837C;
    case 28u: goto L_004183E0;
    case 29u: goto L_004183F4;
    case 30u: goto L_00418408;
    case 31u: goto L_0041841C;
    case 32u: goto L_0041847C;
    case 33u: goto L_00418490;
    case 34u: goto L_004184A4;
    case 35u: goto L_004184C4;
    case 36u: goto L_004184E0;
    case 37u: goto L_00418500;
    case 38u: goto L_00418510;
    case 39u: goto L_00418550;
    case 40u: goto L_00418588;
    case 41u: goto L_00418590;
    case 42u: goto L_004185A4;
    case 43u: goto L_004185B8;
    case 44u: goto L_004185CC;
    case 45u: goto L_004185E4;
    case 46u: goto L_00418608;
    case 47u: goto L_00418634;
    case 48u: goto L_00418650;
    case 49u: goto L_00418664;
    case 50u: goto L_00418684;
    case 51u: goto L_004186D0;
    case 52u: goto L_004186E4;
    case 53u: goto L_00418700;
    case 54u: goto L_00418714;
    case 55u: goto L_00418790;
    case 56u: goto L_004187D4;
    case 57u: goto L_004187E0;
    case 58u: goto L_004187F8;
    case 59u: goto L_00418810;
    case 60u: goto L_00418874;
    case 61u: goto L_0041887C;
    case 62u: goto L_004188A8;
    case 63u: goto L_004188B8;
    case 64u: goto L_004188E4;
    case 65u: goto L_00418904;
    case 66u: goto L_00418928;
    case 67u: goto L_00418950;
    case 68u: goto L_00418958;
    case 69u: goto L_00418960;
    case 70u: goto L_00418988;
    case 71u: goto L_00418990;
    case 72u: goto L_004189A8;
    case 73u: goto L_004189B8;
    case 74u: goto L_004189E8;
    case 75u: goto L_004189FC;
    case 76u: goto L_00418A1C;
    case 77u: goto L_00418A2C;
    case 78u: goto L_00418A5C;
    case 79u: goto L_00418A70;
    case 80u: goto L_00418A90;
    case 81u: goto L_00418AA0;
    case 82u: goto L_00418AD0;
    case 83u: goto L_00418AE4;
    case 84u: goto L_00418AF4;
    case 85u: goto L_00418AFC;
    case 86u: goto L_00418B4C;
    case 87u: goto L_00418B58;
    case 88u: goto L_00418B70;
    case 89u: goto L_00418B84;
    case 90u: goto L_00418BC8;
    case 91u: goto L_00418BD0;
    case 92u: goto L_00418BE4;
    case 93u: goto L_00418BFC;
    case 94u: goto L_00418C80;
    case 95u: goto L_00418CCC;
    case 96u: goto L_00418CF4;
    case 97u: goto L_00418D18;
    case 98u: goto L_00418D30;
    case 99u: goto L_00418D50;
    case 100u: goto L_00418D84;
    case 101u: goto L_00418DB0;
    case 102u: goto L_00418E30;
    case 103u: goto L_00418EA0;
    case 104u: goto L_00418EDC;
    case 105u: goto L_00418F2C;
    case 106u: goto L_00418F48;
    case 107u: goto L_00418F64;
    case 108u: goto L_00418F70;
    case 109u: goto L_00418F7C;
    case 110u: goto L_00418F90;
    case 111u: goto L_00418FB4;
    case 112u: goto L_00418FD4;
    case 113u: goto L_00418FEC;
    case 114u: goto L_00419040;
    case 115u: goto L_0041905C;
    case 116u: goto L_00419060;
    case 117u: goto L_00419068;
    case 118u: goto L_00419088;
    case 119u: goto L_004190B0;
    case 120u: goto L_004190FC;
    case 121u: goto L_00419114;
    case 122u: goto L_0041912C;
    case 123u: goto L_00419164;
    case 124u: goto L_00419184;
    case 125u: goto L_0041919C;
    case 126u: goto L_004191B4;
    case 127u: goto L_004191C4;
    case 128u: goto L_00419200;
    case 129u: goto L_00419250;
    case 130u: goto L_00419260;
    case 131u: goto L_00419278;
    case 132u: goto L_00419298;
    case 133u: goto L_004192A8;
    case 134u: goto L_004192E4;
    case 135u: goto L_00419390;
    case 136u: goto L_004193A4;
    case 137u: goto L_004193CC;
    case 138u: goto L_00419414;
    case 139u: goto L_0041942C;
    case 140u: goto L_00419454;
    case 141u: goto L_0041949C;
    case 142u: goto L_004194B4;
    case 143u: goto L_004194C0;
    case 144u: goto L_004194F8;
    case 145u: goto L_00419514;
    case 146u: goto L_0041953C;
    case 147u: goto L_00419584;
    case 148u: goto L_0041959C;
    case 149u: goto L_004195C4;
    case 150u: goto L_0041960C;
    case 151u: goto L_00419624;
    case 152u: goto L_0041965C;
    case 153u: goto L_00419674;
    case 154u: goto L_00419680;
    case 155u: goto L_004196C0;
    case 156u: goto L_004196E8;
    case 157u: goto L_0041973C;
    case 158u: goto L_00419784;
    case 159u: goto L_004197D4;
    case 160u: goto L_00419808;
    case 161u: goto L_00419840;
    case 162u: goto L_00419878;
    case 163u: goto L_004198B0;
    case 164u: goto L_004198E8;
    case 165u: goto L_00419910;
    case 166u: goto L_004199BC;
    case 167u: goto L_004199C4;
    case 168u: goto L_004199CC;
    case 169u: goto L_004199D4;
    case 170u: goto L_004199DC;
    case 171u: goto L_00419A00;
    case 172u: goto L_00419A18;
    case 173u: goto L_00419A28;
    case 174u: goto L_00419A64;
    case 175u: goto L_00419A74;
    case 176u: goto L_00419A8C;
    case 177u: goto L_00419A9C;
    case 178u: goto L_00419AD4;
    case 179u: goto L_00419AEC;
    case 180u: goto L_00419AFC;
    case 181u: goto L_00419B3C;
    case 182u: goto L_00419B54;
    case 183u: goto L_00419B64;
    case 184u: goto L_00419B7C;
    case 185u: goto L_00419BC0;
    case 186u: goto L_00419BF8;
    case 187u: goto L_00419C00;
    case 188u: goto L_00419C14;
    case 189u: goto L_00419C5C;
    case 190u: goto L_00419C64;
    case 191u: goto L_00419C74;
    case 192u: goto L_00419CB4;
    case 193u: goto L_00419CE8;
    case 194u: goto L_00419CF0;
    case 195u: goto L_00419CF8;
    case 196u: goto L_00419D00;
    case 197u: goto L_00419D18;
    case 198u: goto L_00419D50;
    case 199u: goto L_00419D88;
    case 200u: goto L_00419D90;
    case 201u: goto L_00419DA4;
    case 202u: goto L_00419DEC;
    case 203u: goto L_00419DF4;
    case 204u: goto L_00419E04;
    case 205u: goto L_00419E70;
    case 206u: goto L_00419E78;
    case 207u: goto L_00419E80;
    case 208u: goto L_00419E88;
    case 209u: goto L_00419EA0;
    case 210u: goto L_00419EE0;
    case 211u: goto L_00419F18;
    case 212u: goto L_00419F20;
    case 213u: goto L_00419F34;
    case 214u: goto L_00419F7C;
    case 215u: goto L_00419F84;
    case 216u: goto L_00419F94;
    case 217u: goto L_00419FC8;
    case 218u: goto L_00419FD0;
    case 219u: goto L_00419FD8;
    case 220u: goto L_00419FF0;
    case 221u: goto L_0041A030;
    case 222u: goto L_0041A064;
    case 223u: goto L_0041A06C;
    case 224u: goto L_0041A074;
    case 225u: goto L_0041A07C;
    case 226u: goto L_0041A094;
    case 227u: goto L_0041A0D0;
    case 228u: goto L_0041A11C;
    case 229u: goto L_0041A134;
    case 230u: goto L_0041A154;
    case 231u: goto L_0041A190;
    case 232u: goto L_0041A1CC;
    case 233u: goto L_0041A1D4;
    case 234u: goto L_0041A1DC;
    case 235u: goto L_0041A1E4;
    case 236u: goto L_0041A1F4;
    case 237u: goto L_0041A220;
    case 238u: goto L_0041A230;
    case 239u: goto L_0041A280;
    case 240u: goto L_0041A2BC;
    case 241u: goto L_0041A2D8;
    case 242u: goto L_0041A2E8;
    case 243u: goto L_0041A308;
    case 244u: goto L_0041A320;
    case 245u: goto L_0041A344;
    case 246u: goto L_0041A34C;
    case 247u: goto L_0041A35C;
    case 248u: goto L_0041A380;
    case 249u: goto L_0041A388;
    case 250u: goto L_0041A394;
    case 251u: goto L_0041A39C;
    case 252u: goto L_0041A3BC;
    case 253u: goto L_0041A3DC;
    case 254u: goto L_0041A420;
    case 255u: goto L_0041A45C;
    case 256u: goto L_0041A464;
    case 257u: goto L_0041A494;
    case 258u: goto L_0041A49C;
    case 259u: goto L_0041A4B0;
    case 260u: goto L_0041A4C0;
    case 261u: goto L_0041A4D0;
    case 262u: goto L_0041A500;
    case 263u: goto L_0041A508;
    case 264u: goto L_0041A51C;
    case 265u: goto L_0041A530;
    case 266u: goto L_0041A540;
    case 267u: goto L_0041A570;
    case 268u: goto L_0041A578;
    case 269u: goto L_0041A58C;
    case 270u: goto L_0041A59C;
    case 271u: goto L_0041A5AC;
    case 272u: goto L_0041A5DC;
    case 273u: goto L_0041A5F0;
    case 274u: goto L_0041A60C;
    case 275u: goto L_0041A640;
    case 276u: goto L_0041A660;
    case 277u: goto L_0041A678;
    case 278u: goto L_0041A690;
    case 279u: goto L_0041A6B4;
    case 280u: goto L_0041A6F8;
    case 281u: goto L_0041A718;
    case 282u: goto L_0041A730;
    case 283u: goto L_0041A748;
    case 284u: goto L_0041A76C;
    case 285u: goto L_0041A780;
    case 286u: goto L_0041A794;
    case 287u: goto L_0041A7A8;
    case 288u: goto L_0041A7BC;
    case 289u: goto L_0041A7D0;
    case 290u: goto L_0041A7E4;
    case 291u: goto L_0041A7F8;
    case 292u: goto L_0041A80C;
    case 293u: goto L_0041A820;
    case 294u: goto L_0041A834;
    case 295u: goto L_0041A850;
    case 296u: goto L_0041A89C;
    case 297u: goto L_0041A8B4;
    case 298u: goto L_0041A8C8;
    case 299u: goto L_0041A8DC;
    case 300u: goto L_0041A8F0;
    case 301u: goto L_0041A904;
    case 302u: goto L_0041A918;
    case 303u: goto L_0041A92C;
    case 304u: goto L_0041A934;
    case 305u: goto L_0041A958;
    case 306u: goto L_0041A99C;
    case 307u: goto L_0041A9BC;
    case 308u: goto L_0041A9D4;
    case 309u: goto L_0041A9EC;
    case 310u: goto L_0041AA34;
    case 311u: goto L_0041AA4C;
    case 312u: goto L_0041AA60;
    case 313u: goto L_0041AA74;
    case 314u: goto L_0041AA88;
    case 315u: goto L_0041AA9C;
    case 316u: goto L_0041AAB0;
    case 317u: goto L_0041AACC;
    case 318u: goto L_0041AB00;
    case 319u: goto L_0041AB20;
    case 320u: goto L_0041AB38;
    case 321u: goto L_0041AB48;
    case 322u: goto L_0041AB6C;
    case 323u: goto L_0041AB80;
    case 324u: goto L_0041ABA0;
    case 325u: goto L_0041ABBC;
    case 326u: goto L_0041ABF0;
    case 327u: goto L_0041AC10;
    case 328u: goto L_0041AC28;
    case 329u: goto L_0041AC38;
    case 330u: goto L_0041AC5C;
    case 331u: goto L_0041AC70;
    case 332u: goto L_0041AC90;
    case 333u: goto L_0041ACD8;
    case 334u: goto L_0041AD04;
    case 335u: goto L_0041AD18;
    case 336u: goto L_0041AD64;
    case 337u: goto L_0041AD88;
    case 338u: goto L_0041ADC0;
    case 339u: goto L_0041ADE4;
    case 340u: goto L_0041ADFC;
    case 341u: goto L_0041AE48;
    case 342u: goto L_0041AE6C;
    case 343u: goto L_0041AEA4;
    case 344u: goto L_0041AEC8;
    case 345u: goto L_0041AEE0;
    case 346u: goto L_0041AF2C;
    case 347u: goto L_0041AF50;
    case 348u: goto L_0041AF88;
    case 349u: goto L_0041AFAC;
    case 350u: goto L_0041AFC4;
    case 351u: goto L_0041B010;
    case 352u: goto L_0041B034;
    case 353u: goto L_0041B06C;
    case 354u: goto L_0041B090;
    case 355u: goto L_0041B0A8;
    case 356u: goto L_0041B0D0;
    case 357u: goto L_0041B0F4;
    case 358u: goto L_0041B108;
    case 359u: goto L_0041B11C;
    case 360u: goto L_0041B130;
    case 361u: goto L_0041B144;
    case 362u: goto L_0041B158;
    case 363u: goto L_0041B16C;
    case 364u: goto L_0041B180;
    case 365u: goto L_0041B194;
    case 366u: goto L_0041B1A8;
    case 367u: goto L_0041B1BC;
    case 368u: goto L_0041B1D0;
    case 369u: goto L_0041B1E4;
    case 370u: goto L_0041B1F8;
    case 371u: goto L_0041B210;
    case 372u: goto L_0041B248;
    case 373u: goto L_0041B258;
    case 374u: goto L_0041B26C;
    case 375u: goto L_0041B288;
    case 376u: goto L_0041B29C;
    case 377u: goto L_0041B2A8;
    case 378u: goto L_0041B2B4;
    case 379u: goto L_0041B2C8;
    case 380u: goto L_0041B2D4;
    case 381u: goto L_0041B2E0;
    case 382u: goto L_0041B2F4;
    case 383u: goto L_0041B300;
    case 384u: goto L_0041B30C;
    case 385u: goto L_0041B320;
    case 386u: goto L_0041B32C;
    case 387u: goto L_0041B338;
    case 388u: goto L_0041B34C;
    case 389u: goto L_0041B358;
    case 390u: goto L_0041B370;
    case 391u: goto L_0041B3B0;
    case 392u: goto L_0041B3DC;
    case 393u: goto L_0041B3EC;
    case 394u: goto L_0041B3F4;
    case 395u: goto L_0041B420;
    case 396u: goto L_0041B450;
    case 397u: goto L_0041B4A8;
    case 398u: goto L_0041B4B0;
    case 399u: goto L_0041B4B8;
    case 400u: goto L_0041B4D0;
    case 401u: goto L_0041B4F4;
    case 402u: goto L_0041B510;
    case 403u: goto L_0041B524;
    case 404u: goto L_0041B5A0;
    case 405u: goto L_0041B5E4;
    case 406u: goto L_0041B5F0;
    case 407u: goto L_0041B608;
    case 408u: goto L_0041B620;
    case 409u: goto L_0041B658;
    case 410u: goto L_0041B6A8;
    case 411u: goto L_0041B6DC;
    case 412u: goto L_0041B6F0;
    case 413u: goto L_0041B704;
    case 414u: goto L_0041B730;
    case 415u: goto L_0041B744;
    case 416u: goto L_0041B764;
    case 417u: goto L_0041B784;
    case 418u: goto L_0041B7A0;
    case 419u: goto L_0041B7C0;
    case 420u: goto L_0041B7F8;
    case 421u: goto L_0041B808;
    case 422u: goto L_0041B824;
    case 423u: goto L_0041B838;
    case 424u: goto L_0041B854;
    case 425u: goto L_0041B85C;
    case 426u: goto L_0041B864;
    case 427u: goto L_0041B86C;
    case 428u: goto L_0041B890;
    case 429u: goto L_0041B8A0;
    case 430u: goto L_0041B8B0;
    case 431u: goto L_0041B8D0;
    case 432u: goto L_0041B900;
    case 433u: goto L_0041B920;
    case 434u: goto L_0041B940;
    case 435u: goto L_0041B970;
    case 436u: goto L_0041B990;
    case 437u: goto L_0041B9BC;
    case 438u: goto L_0041B9D0;
    case 439u: goto L_0041B9F0;
    case 440u: goto L_0041BA28;
    case 441u: goto L_0041BA30;
    case 442u: goto L_0041BA44;
    case 443u: goto L_0041BA58;
    case 444u: goto L_0041BA64;
    case 445u: goto L_0041BA6C;
    case 446u: goto L_0041BA88;
    case 447u: goto L_0041BA90;
    case 448u: goto L_0041BA98;
    case 449u: goto L_0041BAB4;
    case 450u: goto L_0041BAD0;
    case 451u: goto L_0041BAFC;
    case 452u: goto L_0041BB08;
    case 453u: goto L_0041BB14;
    case 454u: goto L_0041BB20;
    case 455u: goto L_0041BB34;
    case 456u: goto L_0041BB5C;
    case 457u: goto L_0041BB64;
    case 458u: goto L_0041BB84;
    case 459u: goto L_0041BB98;
    case 460u: goto L_0041BBB0;
    case 461u: goto L_0041BBC4;
    case 462u: goto L_0041BBD8;
    case 463u: goto L_0041BBEC;
    case 464u: goto L_0041BC50;
    case 465u: goto L_0041BC9C;
    case 466u: goto L_0041BCC4;
    case 467u: goto L_0041BCDC;
    case 468u: goto L_0041BCF8;
    case 469u: goto L_0041BD04;
    case 470u: goto L_0041BD10;
    case 471u: goto L_0041BD28;
    case 472u: goto L_0041BD40;
    case 473u: goto L_0041BD54;
    case 474u: goto L_0041BD60;
    case 475u: goto L_0041BD70;
    case 476u: goto L_0041BD84;
    case 477u: goto L_0041BD90;
    case 478u: goto L_0041BDA0;
    case 479u: goto L_0041BDB4;
    case 480u: goto L_0041BDC0;
    case 481u: goto L_0041BDD0;
    case 482u: goto L_0041BDE0;
    case 483u: goto L_0041BDE8;
    case 484u: goto L_0041BE00;
    case 485u: goto L_0041BE10;
    case 486u: goto L_0041BE20;
    case 487u: goto L_0041BE30;
    case 488u: goto L_0041BE40;
    case 489u: goto L_0041BE8C;
    case 490u: goto L_0041BE94;
    case 491u: goto L_0041BEC0;
    case 492u: goto L_0041BED0;
    case 493u: goto L_0041BF14;
    case 494u: goto L_0041BF24;
    case 495u: goto L_0041BF48;
    case 496u: goto L_0041BF54;
    case 497u: goto L_0041BF80;
    case 498u: goto L_0041BF88;
    case 499u: goto L_0041BF90;
    case 500u: goto L_0041BFDC;
    default: bad_entry(c, 0x00418000u); return;
    }
L_00418000:
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0041804C; } }
L_0041800C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041806C; } }
    st32((c.r[16].w[0] + 120u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17488u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[3].w[0] + 17492u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17496u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 11;
L_0041804C:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041806C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00418068u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00418068u) [[unlikely]] return; }
L_00418068:
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 1;
L_0041806C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00418070:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00418080:
    set32(c.r[6], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 84u)));  goto L_00418154; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[6], ld32((c.r[4].w[0] + 84u)));  goto L_00418134; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 84u)));  goto L_00418114; }
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[7].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 120u)));  goto L_004180E4; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 120u)));  goto L_004180C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00418194; } }
L_004180C4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 76u)));  goto L_004180D8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[4].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
L_004180D8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00418194; } }
L_004180E4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 76u)));  goto L_00418108; }
    set32(c.r[6], ld32((c.r[4].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 120u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
L_00418108:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00418194; } }
L_00418114:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00418194; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00418194; } }
L_00418134:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00418194; } }
L_00418154:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00418194; } }
    st32((c.r[4].w[0] + 120u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17504u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[3].w[0] + 17508u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17512u));
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    st32((c.r[4].w[0] + 76u), 0u);
    c.budget -= 11;
L_00418194:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004181A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041853C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 31232u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00418000u < 16384u) { entry = entries_00BE[(t - 0x00418000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004181D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_00418224; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004181ECu); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x004181ECu) [[unlikely]] return; }
L_004181EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 112u), c.r[4].w[0]);  goto L_00418220; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 31264u);
    set32(c.r[8], c.r[8].w[0] - 31248u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418218u); set32(c.r[9], 0u + 2u);  if (depth < kMaxDepth) unit_008B(c, 355u, depth + 1u); else { c.pc = 0x0034F160u; return; } if (c.pc != 0x00418218u) [[unlikely]] return; }
L_00418218:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 112u), c.r[4].w[0]);
    c.budget -= 2;
L_00418220:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00418224:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041853C; } }
L_00418230:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00418540; }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041853C; } }
L_00418254:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_0041827C; }
    set32(c.r[4], 0u + 28u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418274u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 13u, depth + 1u); else { c.pc = 0x001B80E0u; return; } if (c.pc != 0x00418274u) [[unlikely]] return; }
L_00418274:
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_0041827C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041853C; } }
L_00418288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418290u); set32(c.r[4], ld32((c.r[16].w[0] + 108u)));  if (depth < kMaxDepth) unit_0026(c, 16u, depth + 1u); else { c.pc = 0x001B8120u; return; } if (c.pc != 0x00418290u) [[unlikely]] return; }
L_00418290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041853C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041853C; } }
L_004182A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004182B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 480u, depth + 1u); else { c.pc = 0x0034FBF0u; return; } if (c.pc != 0x004182B4u) [[unlikely]] return; }
L_004182B4:
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43020000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_004182F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004182D4u); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x004182D4u) [[unlikely]] return; }
L_004182D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 88u), c.r[4].w[0]);  goto L_004182F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004182E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 88u, depth + 1u); else { c.pc = 0x00418B70u; return; } if (c.pc != 0x004182E8u) [[unlikely]] return; }
L_004182E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 88u), c.r[4].w[0]);
    c.budget -= 2;
L_004182F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_004182F4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041853C; } }
L_00418300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418308u); set32(c.r[4], ld32((c.r[16].w[0] + 108u)));  if (depth < kMaxDepth) unit_0026(c, 15u, depth + 1u); else { c.pc = 0x001B8110u; return; } if (c.pc != 0x00418308u) [[unlikely]] return; }
L_00418308:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42DC0000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041853C; } }
L_00418320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418328u);  if (depth < kMaxDepth) unit_00BD(c, 401u, depth + 1u); else { c.pc = 0x004176F0u; return; } if (c.pc != 0x00418328u) [[unlikely]] return; }
L_00418328:
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44E10000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041853C; } }
L_00418344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041834Cu);  if (depth < kMaxDepth) unit_0024(c, 129u, depth + 1u); else { c.pc = 0x001B0C00u; return; } if (c.pc != 0x0041834Cu) [[unlikely]] return; }
L_0041834C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 104u)));  goto L_004183AC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004183A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418374u); set32(c.r[4], 0u + 1010u);  if (depth < kMaxDepth) unit_0024(c, 608u, depth + 1u); else { c.pc = 0x001B3F60u; return; } if (c.pc != 0x00418374u) [[unlikely]] return; }
L_00418374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041837Cu);  if (depth < kMaxDepth) unit_0024(c, 504u, depth + 1u); else { c.pc = 0x001B3720u; return; } if (c.pc != 0x0041837Cu) [[unlikely]] return; }
L_0041837C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 1056u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0041853C; } }
L_004183A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 1;
L_004183AC:
    c.r[4].d[0] = ld64((c.r[3].w[0] + 80u));
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = 0ull | 40001ull;  goto L_004183D4; }
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 68u));  goto L_00418458; }
    c.r[4].d[0] = 0ull | 40001ull;
    c.budget -= 1;
L_004183D4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004183E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 494u, depth + 1u); else { c.pc = 0x00423B70u; return; } if (c.pc != 0x004183E0u) [[unlikely]] return; }
L_004183E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004183F4u); set32(c.r[4], ld32((c.r[16].w[0] + 108u)));  if (depth < kMaxDepth) unit_0026(c, 18u, depth + 1u); else { c.pc = 0x001B8140u; return; } if (c.pc != 0x004183F4u) [[unlikely]] return; }
L_004183F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418408u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00418408u) [[unlikely]] return; }
L_00418408:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041841Cu); set32(c.r[5], 0u + 10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041841Cu) [[unlikely]] return; }
L_0041841C:
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17520u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[4].w[0] + 17524u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17528u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0041853C; } }
L_00418458:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0041853C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041853C; } }
L_0041847C:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418490u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00418490u) [[unlikely]] return; }
L_00418490:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004184A4u); set32(c.r[4], ld32((c.r[16].w[0] + 108u)));  if (depth < kMaxDepth) unit_0026(c, 18u, depth + 1u); else { c.pc = 0x001B8140u; return; } if (c.pc != 0x004184A4u) [[unlikely]] return; }
L_004184A4:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041853C; } }
L_004184C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  goto L_004184E8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004184E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004184E0u) [[unlikely]] return; }
L_004184E0:
    st32((c.r[16].w[0] + 112u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 2;
L_004184E8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 108u)));  goto L_00418508; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00418500u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00418500u) [[unlikely]] return; }
L_00418500:
    st32((c.r[16].w[0] + 88u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 2;
L_00418508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418510u);  if (depth < kMaxDepth) unit_0026(c, 14u, depth + 1u); else { c.pc = 0x001B8100u; return; } if (c.pc != 0x00418510u) [[unlikely]] return; }
L_00418510:
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17536u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[3].w[0] + 17540u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17544u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 11;
L_0041853C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00418540:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00418550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004186B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 31184u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00418000u < 16384u) { entry = entries_00BE[(t - 0x00418000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00418588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418590u); set32(c.r[4], ld32((c.r[16].w[0] + 108u)));  if (depth < kMaxDepth) unit_0026(c, 14u, depth + 1u); else { c.pc = 0x001B8100u; return; } if (c.pc != 0x00418590u) [[unlikely]] return; }
L_00418590:
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004186B4; } }
L_004185A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_004185D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004185B8u); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x004185B8u) [[unlikely]] return; }
L_004185B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 88u), c.r[4].w[0]);  goto L_004185D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004185CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 88u, depth + 1u); else { c.pc = 0x00418B70u; return; } if (c.pc != 0x004185CCu) [[unlikely]] return; }
L_004185CC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 88u), c.r[4].w[0]);
    c.budget -= 2;
L_004185D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_004185D8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004186B4; } }
L_004185E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004186B8; }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004186B4; } }
L_00418608:
    set32(c.r[6], ld32((c.r[16].w[0] + 88u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004186B4; } }
L_00418634:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_00418658; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00418650u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00418650u) [[unlikely]] return; }
L_00418650:
    st32((c.r[16].w[0] + 112u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_00418658:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004186B4; } }
L_00418664:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004186B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418684u);  if (depth < kMaxDepth) unit_0024(c, 504u, depth + 1u); else { c.pc = 0x001B3720u; return; } if (c.pc != 0x00418684u) [[unlikely]] return; }
L_00418684:
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1056u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[2] = ld32((c.r[3].w[0] + 1056u));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 12;
L_004186B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004186B8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004186D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004186E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x004186E4u) [[unlikely]] return; }
L_004186E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], 0u + 872u);
    set32(c.r[2], c.r[2].w[0] + 15136u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418700u); st32((c.r[16].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00418700u) [[unlikely]] return; }
L_00418700:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  goto L_00418718; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418714u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 421u, depth + 1u); else { c.pc = 0x001B6BB0u; return; } if (c.pc != 0x00418714u) [[unlikely]] return; }
L_00418714:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_00418718:
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 68u), 0u);
    c.r[5].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 60u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[7].w[0] + 48u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[7].w[0] + 52u), c.r[4].w[0]);
    c.r[4].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFBFF0000u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00418790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004187F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15136u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004187D8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004187D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004187D4u) [[unlikely]] return; }
L_004187D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004187D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004187E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x004187E0u) [[unlikely]] return; }
L_004187E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004187FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004187F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x004187F8u) [[unlikely]] return; }
L_004187F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004187FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00418810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30136u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00418848; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 52u)));  goto L_0041884C; }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 2;
L_00418848:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_0041884C:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00418B5C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 31120u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00418000u < 16384u) { entry = entries_00BE[(t - 0x00418000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00418874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041887Cu); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0041887Cu) [[unlikely]] return; }
L_0041887C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 64u), c.r[4].w[0]);  goto L_004188B0; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 31160u);
    set32(c.r[8], c.r[8].w[0] - 31144u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004188A8u); set32(c.r[9], 0u + 2u);  if (depth < kMaxDepth) unit_008B(c, 355u, depth + 1u); else { c.pc = 0x0034F160u; return; } if (c.pc != 0x004188A8u) [[unlikely]] return; }
L_004188A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    c.budget -= 2;
L_004188B0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 2;
L_004188B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00418B58; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 5;
L_004188E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00418B58; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418904u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 480u, depth + 1u); else { c.pc = 0x0034FBF0u; return; } if (c.pc != 0x00418904u) [[unlikely]] return; }
L_00418904:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30136u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 4u);  goto L_00418920; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00418B58; } }
L_00418920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00418B58; } }
L_00418928:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  goto L_00418940; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_00418B58; } }
L_00418940:
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00418950u); set32(c.r[5], 0u + 7u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00418950u) [[unlikely]] return; }
L_00418950:
    set32(c.r[3], 0u + 4u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 2;
L_00418958:
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 2;
L_00418960:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  goto L_00418978; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_00418B58; } }
L_00418978:
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00418988u); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00418988u) [[unlikely]] return; }
L_00418988:
    set32(c.r[2], 0u + 6u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_00418990:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004189A8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004189A8u) [[unlikely]] return; }
L_004189A8:
    set32(c.r[4], 0u + 7u);
    set32(c.r[3], 0u + 30u);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_004189B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_00418B58; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  goto L_004189F4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004189E8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004189E8u) [[unlikely]] return; }
L_004189E8:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00418B58; } }
L_004189F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004189FCu);  if (depth < kMaxDepth) unit_00A8(c, 232u, depth + 1u); else { c.pc = 0x003C2BB0u; return; } if (c.pc != 0x004189FCu) [[unlikely]] return; }
L_004189FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00418B58; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00418A1Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00418A1Cu) [[unlikely]] return; }
L_00418A1C:
    set32(c.r[4], 0u + 8u);
    set32(c.r[3], 0u + 30u);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_00418A2C:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_00418B58; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  goto L_00418A68; }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00418A5Cu); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00418A5Cu) [[unlikely]] return; }
L_00418A5C:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00418B58; } }
L_00418A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418A70u);  if (depth < kMaxDepth) unit_00A8(c, 232u, depth + 1u); else { c.pc = 0x003C2BB0u; return; } if (c.pc != 0x00418A70u) [[unlikely]] return; }
L_00418A70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00418B58; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 8u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00418A90u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00418A90u) [[unlikely]] return; }
L_00418A90:
    set32(c.r[4], 0u + 9u);
    set32(c.r[3], 0u + 30u);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_00418AA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_00418B58; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  goto L_00418ADC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00418AD0u); set32(c.r[5], 0u + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00418AD0u) [[unlikely]] return; }
L_00418AD0:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00418B58; } }
L_00418ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418AE4u);  if (depth < kMaxDepth) unit_00A8(c, 232u, depth + 1u); else { c.pc = 0x003C2BB0u; return; } if (c.pc != 0x00418AE4u) [[unlikely]] return; }
L_00418AE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00418B58; } }
    set32(c.r[2], 0u + 10u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_00418AF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418AFCu); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_00A8(c, 232u, depth + 1u); else { c.pc = 0x003C2BB0u; return; } if (c.pc != 0x00418AFCu) [[unlikely]] return; }
L_00418AFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00418B58; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] << 33;
    c.r[2].d[0] = c.r[2].d[0] >> 33;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00418B34; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
L_00418B34:
    st32((c.r[28].w[0] - 30136u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00418B4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00418B4Cu) [[unlikely]] return; }
L_00418B4C:
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[3], 0u + 11u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 3;
L_00418B58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00418B5C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00418B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418B84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 433u, depth + 1u); else { c.pc = 0x00423030u; return; } if (c.pc != 0x00418B84u) [[unlikely]] return; }
L_00418B84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15200u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418BC8u); st32((c.r[16].w[0] + 120u), 0u);  if (depth < kMaxDepth) unit_00BE(c, 371u, depth + 1u); else { c.pc = 0x0041B210u; return; } if (c.pc != 0x00418BC8u) [[unlikely]] return; }
L_00418BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418BD0u); set32(c.r[4], 0u + 872u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00418BD0u) [[unlikely]] return; }
L_00418BD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 92u), c.r[2].w[0]);  goto L_00418BE8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418BE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 421u, depth + 1u); else { c.pc = 0x001B6BB0u; return; } if (c.pc != 0x00418BE4u) [[unlikely]] return; }
L_00418BE4:
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 1;
L_00418BE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418BFCu); st32((c.r[2].w[0] + 52u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 358u, depth + 1u); else { c.pc = 0x004225F0u; return; } if (c.pc != 0x00418BFCu) [[unlikely]] return; }
L_00418BFC:
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[2].w[0] + 17552u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[2].w[0] + 17556u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 17560u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00418C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00418D30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15200u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  goto L_00418CD4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 92u), 0u);  goto L_00418CD0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00418CCCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00418CCCu) [[unlikely]] return; }
L_00418CCC:
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 1;
L_00418CD0:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_00418CD4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00418CF8; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 96u), 0u);  goto L_00418CF8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00418CF4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00418CF4u) [[unlikely]] return; }
L_00418CF4:
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 1;
L_00418CF8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00418D1C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14624u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418D18u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00418D18u) [[unlikely]] return; }
L_00418D18:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00418D1C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00418D34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418D30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00418D30u) [[unlikely]] return; }
L_00418D30:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00418D34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00418D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[8].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00418DC8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], 0u + 124u);  goto L_00418D7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00418E1C; } }
L_00418D7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418D84u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00418D84u) [[unlikely]] return; }
L_00418D84:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 84u), c.r[4].w[0]);  goto L_00418DB8; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 31064u);
    set32(c.r[8], c.r[8].w[0] - 31048u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418DB0u); set32(c.r[9], 0u + 2u);  if (depth < kMaxDepth) unit_008B(c, 355u, depth + 1u); else { c.pc = 0x0034F160u; return; } if (c.pc != 0x00418DB0u) [[unlikely]] return; }
L_00418DB0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 84u), c.r[4].w[0]);
    c.budget -= 2;
L_00418DB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00418E18; } }
L_00418DC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00418E18; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[8].w[0]);
    c.f[2] = ld32((c.r[5].w[0] + 17568u));
    c.f[1] = ld32((c.r[4].w[0] + 17572u));
    c.f[0] = ld32((c.r[3].w[0] + 17576u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 14;
L_00418E18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00418E1C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00418E30:
    set32(c.r[6], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_00418E6C; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_00418E50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00418E90; } }
L_00418E50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00418E90; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00418E90; } }
L_00418E6C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17584u));
    c.f[1] = ld32((c.r[5].w[0] + 17588u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17592u));
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    st32((c.r[4].w[0] + 76u), 0u);
    c.budget -= 9;
L_00418E90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00418EA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_00418ED4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00418EE0; } }
L_00418ED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418EDCu);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00418EDCu) [[unlikely]] return; }
L_00418EDC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00418EE0:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  goto L_004191AC; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  goto L_004190C8; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  goto L_0041900C; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[6].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00418F40; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00418F24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004191F0; } }
L_00418F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418F2Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 13u, depth + 1u); else { c.pc = 0x001B80E0u; return; } if (c.pc != 0x00418F2Cu) [[unlikely]] return; }
L_00418F2C:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004191EC; } }
L_00418F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418F48u);  if (depth < kMaxDepth) unit_00BE(c, 390u, depth + 1u); else { c.pc = 0x0041B370u; return; } if (c.pc != 0x00418F48u) [[unlikely]] return; }
L_00418F48:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  goto L_00418F74; }
    set32(c.r[17], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418F64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 467u, depth + 1u); else { c.pc = 0x00423820u; return; } if (c.pc != 0x00418F64u) [[unlikely]] return; }
L_00418F64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418F70u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 458u, depth + 1u); else { c.pc = 0x004234F0u; return; } if (c.pc != 0x00418F70u) [[unlikely]] return; }
L_00418F70:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_00418F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418F7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 480u, depth + 1u); else { c.pc = 0x0034FBF0u; return; } if (c.pc != 0x00418F7Cu) [[unlikely]] return; }
L_00418F7C:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 5;
L_00418F90:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00418FAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00418FB4; } }
L_00418FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418FB4u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x00418FB4u) [[unlikely]] return; }
L_00418FB4:
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  goto L_00418FDC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[5], c.r[17].w[0] + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418FD4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00418FD4u) [[unlikely]] return; }
L_00418FD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00418FF0; } }
L_00418FDC:
    set32(c.r[5], c.r[17].w[0] + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00418FECu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00418FECu) [[unlikely]] return; }
L_00418FEC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00418FF0:
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00418F90u | kUnwind; return; } goto L_00418F90; }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004191EC; } }
L_0041900C:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00419028; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00419044; } }
L_00419028:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_00419038; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00419040; } }
L_00419038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419040u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00419040u) [[unlikely]] return; }
L_00419040:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_00419044:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041905Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041905Cu) [[unlikely]] return; }
L_0041905C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00419060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419068u); set32(c.r[4], c.r[17].w[0] + 2u);  if (depth < kMaxDepth) unit_00C1(c, 61u, depth + 1u); else { c.pc = 0x00424830u; return; } if (c.pc != 0x00419068u) [[unlikely]] return; }
L_00419068:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0041908C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[5], c.r[17].w[0] + 31u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00419088u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00419088u) [[unlikely]] return; }
L_00419088:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0041908C:
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00419060u | kUnwind; return; } goto L_00419060; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[5], 0u + 40u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004190B0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004190B0u) [[unlikely]] return; }
L_004190B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004191EC; } }
L_004190C8:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004190E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00419100; } }
L_004190E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_004190F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004190FC; } }
L_004190F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004190FCu);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x004190FCu) [[unlikely]] return; }
L_004190FC:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_00419100:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[5], c.r[2].w[0] + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419114u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00419114u) [[unlikely]] return; }
L_00419114:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[5], 0u + 21u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041912Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041912Cu) [[unlikely]] return; }
L_0041912C:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041914C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00419168; } }
L_0041914C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041915C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00419164; } }
L_0041915C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419164u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00419164u) [[unlikely]] return; }
L_00419164:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_00419168:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  goto L_0041918C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[5], 0u + 21u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419184u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00419184u) [[unlikely]] return; }
L_00419184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  if (t) { goto L_004191A0; } }
L_0041918C:
    set32(c.r[5], 0u + 21u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041919Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041919Cu) [[unlikely]] return; }
L_0041919C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_004191A0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004191EC; } }
L_004191AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004191B4u);  if (depth < kMaxDepth) unit_0026(c, 16u, depth + 1u); else { c.pc = 0x001B8120u; return; } if (c.pc != 0x004191B4u) [[unlikely]] return; }
L_004191B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004191EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004191C4u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0026(c, 15u, depth + 1u); else { c.pc = 0x001B8110u; return; } if (c.pc != 0x004191C4u) [[unlikely]] return; }
L_004191C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17600u));
    c.f[1] = ld32((c.r[4].w[0] + 17604u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17608u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_004191EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004191F0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00419200:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00419290; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00419270; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00419248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004198F4; } }
L_00419248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419250u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00419250u) [[unlikely]] return; }
L_00419250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004198F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419260u);  if (depth < kMaxDepth) unit_00C1(c, 535u, depth + 1u); else { c.pc = 0x00426E00u; return; } if (c.pc != 0x00419260u) [[unlikely]] return; }
L_00419260:
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004198F0; } }
L_00419270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419278u);  if (depth < kMaxDepth) unit_00C1(c, 543u, depth + 1u); else { c.pc = 0x00426EE0u; return; } if (c.pc != 0x00419278u) [[unlikely]] return; }
L_00419278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004198F0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004198F0; } }
L_00419290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419298u);  if (depth < kMaxDepth) unit_00C0(c, 325u, depth + 1u); else { c.pc = 0x004223B0u; return; } if (c.pc != 0x00419298u) [[unlikely]] return; }
L_00419298:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004192DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004192A8u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x004192A8u) [[unlikely]] return; }
L_004192A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 92u)));  goto L_0041931C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17616u));
    c.f[1] = ld32((c.r[4].w[0] + 17620u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17624u));
    st32((c.r[19].w[0] + 52u), c.f[2]);
    st32((c.r[19].w[0] + 56u), c.f[1]);
    st32((c.r[19].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 76u), 0u);  if (t) { goto L_004198F0; } }
L_004192DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004192E4u);  if (depth < kMaxDepth) unit_00C1(c, 578u, depth + 1u); else { c.pc = 0x00427270u; return; } if (c.pc != 0x004192E4u) [[unlikely]] return; }
L_004192E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00419318; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17632u));
    c.f[1] = ld32((c.r[4].w[0] + 17636u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17640u));
    st32((c.r[19].w[0] + 52u), c.f[2]);
    st32((c.r[19].w[0] + 56u), c.f[1]);
    st32((c.r[19].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 76u), 0u);  if (t) { goto L_004198F0; } }
L_00419318:
    set32(c.r[5], ld32((c.r[19].w[0] + 92u)));
    c.budget -= 1;
L_0041931C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = ld64((c.r[5].w[0] + 96u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00419338; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00419338:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00419350; } }
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_00419350:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[5].w[0] + 80u));  goto L_00419700; }
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00419378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 1u);  if (t) { goto L_00419394; } }
L_00419378:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_00419388; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00419390; } }
L_00419388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419390u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00419390u) [[unlikely]] return; }
L_00419390:
    set32(c.r[17], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_00419394:
    c.r[4].d[0] = 0ull | 40002ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004193A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 494u, depth + 1u); else { c.pc = 0x00423B70u; return; } if (c.pc != 0x004193A4u) [[unlikely]] return; }
L_004193A4:
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_004193C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004193CC; } }
L_004193C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004193CCu);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x004193CCu) [[unlikely]] return; }
L_004193CC:
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], 0u + 5u);  goto L_004193DC; }
    set32(c.r[16], 0u + 3u);
    c.budget -= 1;
L_004193DC:
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004193FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00419418; } }
L_004193FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041940C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00419414; } }
L_0041940C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419414u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00419414u) [[unlikely]] return; }
L_00419414:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_00419418:
    set32(c.r[4], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041942Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041942Cu) [[unlikely]] return; }
L_0041942C:
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041944C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00419454; } }
L_0041944C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419454u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00419454u) [[unlikely]] return; }
L_00419454:
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], 0u + 5u);  goto L_00419464; }
    set32(c.r[16], 0u + 3u);
    c.budget -= 1;
L_00419464:
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00419484; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004194A0; } }
L_00419484:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_00419494; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041949C; } }
L_00419494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041949Cu);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041949Cu) [[unlikely]] return; }
L_0041949C:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_004194A0:
    set32(c.r[4], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[5], c.r[2].w[0] + 11u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004194B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004194B4u) [[unlikely]] return; }
L_004194B4:
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004194C0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 460u, depth + 1u); else { c.pc = 0x00423620u; return; } if (c.pc != 0x004194C0u) [[unlikely]] return; }
L_004194C0:
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004194E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004194FC; } }
L_004194E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_004194F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004194F8; } }
L_004194F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004194F8u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x004194F8u) [[unlikely]] return; }
L_004194F8:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_004194FC:
    set32(c.r[4], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00419514u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00419514u) [[unlikely]] return; }
L_00419514:
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_00419534; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041953C; } }
L_00419534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041953Cu);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041953Cu) [[unlikely]] return; }
L_0041953C:
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], 0u + 4u);  goto L_0041954C; }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_0041954C:
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041956C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00419588; } }
L_0041956C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041957C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00419584; } }
L_0041957C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419584u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00419584u) [[unlikely]] return; }
L_00419584:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_00419588:
    set32(c.r[4], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041959Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041959Cu) [[unlikely]] return; }
L_0041959C:
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_004195BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004195C4; } }
L_004195BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004195C4u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x004195C4u) [[unlikely]] return; }
L_004195C4:
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], 0u + 4u);  goto L_004195D4; }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_004195D4:
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004195F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00419610; } }
L_004195F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_00419604; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041960C; } }
L_00419604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041960Cu);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041960Cu) [[unlikely]] return; }
L_0041960C:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_00419610:
    set32(c.r[4], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[5], c.r[2].w[0] + 11u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419624u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00419624u) [[unlikely]] return; }
L_00419624:
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00419644; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00419660; } }
L_00419644:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_00419654; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041965C; } }
L_00419654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041965Cu);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041965Cu) [[unlikely]] return; }
L_0041965C:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_00419660:
    set32(c.r[4], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[7], c.r[2].w[0] + 11u);
    set32(c.r[5], 0u + 21u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419674u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00419674u) [[unlikely]] return; }
L_00419674:
    set32(c.r[3], ld32((c.r[19].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 48u)));  if (t) { goto L_004196EC; } }
L_00419680:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[16], ld32((c.r[16].w[0] + 60u)));  goto L_004196EC; }
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004196A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_004196C8; } }
L_004196A8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_004196B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004196C4; } }
L_004196B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004196C0u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x004196C0u) [[unlikely]] return; }
L_004196C0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004196C4:
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 1;
L_004196C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004196E8; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004196E8u); set32(c.r[5], c.r[3].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004196E8u) [[unlikely]] return; }
L_004196E8:
    set32(c.r[16], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_004196EC:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00419680u | kUnwind; return; } goto L_00419680; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_004198F0; } }
L_00419700:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004198F0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_00419734; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00419740; } }
L_00419734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041973Cu);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041973Cu) [[unlikely]] return; }
L_0041973C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00419740:
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_004198DC; }
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041976C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u - 1u);  if (t) { goto L_0041978C; } }
L_0041976C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041977C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00419788; } }
L_0041977C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419784u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x00419784u) [[unlikely]] return; }
L_00419784:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00419788:
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 1;
L_0041978C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 1u);  goto L_004198A4; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 1u);  goto L_0041986C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 1u);  goto L_00419834; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[4].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00419800; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_004197CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004198F0; } }
L_004197CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004197D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x004197D4u) [[unlikely]] return; }
L_004197D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17648u));
    c.f[1] = ld32((c.r[4].w[0] + 17652u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17656u));
    st32((c.r[19].w[0] + 52u), c.f[2]);
    st32((c.r[19].w[0] + 56u), c.f[1]);
    st32((c.r[19].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 76u), 0u);  if (t) { goto L_004198F0; } }
L_00419800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419808u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00419808u) [[unlikely]] return; }
L_00419808:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17664u));
    c.f[1] = ld32((c.r[4].w[0] + 17668u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17672u));
    st32((c.r[19].w[0] + 52u), c.f[2]);
    st32((c.r[19].w[0] + 56u), c.f[1]);
    st32((c.r[19].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 76u), 0u);  if (t) { goto L_004198F0; } }
L_00419834:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419840u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00419840u) [[unlikely]] return; }
L_00419840:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17680u));
    c.f[1] = ld32((c.r[4].w[0] + 17684u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17688u));
    st32((c.r[19].w[0] + 52u), c.f[2]);
    st32((c.r[19].w[0] + 56u), c.f[1]);
    st32((c.r[19].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 76u), 0u);  if (t) { goto L_004198F0; } }
L_0041986C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419878u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00419878u) [[unlikely]] return; }
L_00419878:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17696u));
    c.f[1] = ld32((c.r[4].w[0] + 17700u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17704u));
    st32((c.r[19].w[0] + 52u), c.f[2]);
    st32((c.r[19].w[0] + 56u), c.f[1]);
    st32((c.r[19].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 76u), 0u);  if (t) { goto L_004198F0; } }
L_004198A4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004198B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x004198B0u) [[unlikely]] return; }
L_004198B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17712u));
    c.f[1] = ld32((c.r[4].w[0] + 17716u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17720u));
    st32((c.r[19].w[0] + 52u), c.f[2]);
    st32((c.r[19].w[0] + 56u), c.f[1]);
    st32((c.r[19].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 76u), 0u);  if (t) { goto L_004198F0; } }
L_004198DC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004198E8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x004198E8u) [[unlikely]] return; }
L_004198E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    st32((c.r[19].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 2;
L_004198F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004198F4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00419910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 42u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00419B94; } }
    set32(c.r[3], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00419B74; } }
    set32(c.r[5], 0u + 40u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  goto L_00419B28; }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_00419B0C; }
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_00419AE4; }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_00419AC8; }
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_00419AAC; }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_00419A84; }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00419A5C; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_00419A10; }
    set32(c.r[6], 0u + 10u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[6].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_004199F8; }
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[4], 0u + 1u);  goto L_004199B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00419BA8; } }
L_004199B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004199BCu);  if (depth < kMaxDepth) unit_00C0(c, 483u, depth + 1u); else { c.pc = 0x00423A30u; return; } if (c.pc != 0x004199BCu) [[unlikely]] return; }
L_004199BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004199C4u);  if (depth < kMaxDepth) unit_00C1(c, 173u, depth + 1u); else { c.pc = 0x004252D0u; return; } if (c.pc != 0x004199C4u) [[unlikely]] return; }
L_004199C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004199CCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 413u, depth + 1u); else { c.pc = 0x00422C80u; return; } if (c.pc != 0x004199CCu) [[unlikely]] return; }
L_004199CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004199D4u); set32(c.r[4], 0u + 1010u);  if (depth < kMaxDepth) unit_0024(c, 608u, depth + 1u); else { c.pc = 0x001B3F60u; return; } if (c.pc != 0x004199D4u) [[unlikely]] return; }
L_004199D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004199DCu);  if (depth < kMaxDepth) unit_00C1(c, 219u, depth + 1u); else { c.pc = 0x00425580u; return; } if (c.pc != 0x004199DCu) [[unlikely]] return; }
L_004199DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 40u);  goto L_004199F0; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00419BA4; } }
L_004199F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00419BA4; } }
L_004199F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419A00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00419A00u) [[unlikely]] return; }
L_00419A00:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00419BA4; } }
L_00419A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419A18u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00419A18u) [[unlikely]] return; }
L_00419A18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00419BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419A28u); set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00419A28u) [[unlikely]] return; }
L_00419A28:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 30u);  goto L_00419A54; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 20u);  goto L_00419A48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00419A50; } }
L_00419A48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00419BA4; } }
L_00419A50:
    set32(c.r[3], 0u + 30u);
    c.budget -= 1;
L_00419A54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00419BA4; } }
L_00419A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419A64u);  if (depth < kMaxDepth) unit_00C1(c, 223u, depth + 1u); else { c.pc = 0x004255D0u; return; } if (c.pc != 0x00419A64u) [[unlikely]] return; }
L_00419A64:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419A74u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00419A74u) [[unlikely]] return; }
L_00419A74:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00419BA4; } }
L_00419A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419A8Cu);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00419A8Cu) [[unlikely]] return; }
L_00419A8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00419BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419A9Cu); set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x00419A9Cu) [[unlikely]] return; }
L_00419A9C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00419BA4; } }
L_00419AAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00419BA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[5].w[0]);  if (t) { goto L_00419BA4; } }
L_00419AC8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419AD4u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00419AD4u) [[unlikely]] return; }
L_00419AD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00419BA4; } }
L_00419AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419AECu);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00419AECu) [[unlikely]] return; }
L_00419AEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00419BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419AFCu); set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x00419AFCu) [[unlikely]] return; }
L_00419AFC:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00419BA4; } }
L_00419B0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00419BA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[5].w[0]);  if (t) { goto L_00419BA4; } }
L_00419B28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419B3Cu);  if (depth < kMaxDepth) unit_0026(c, 18u, depth + 1u); else { c.pc = 0x001B8140u; return; } if (c.pc != 0x00419B3Cu) [[unlikely]] return; }
L_00419B3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[5], 0u + 50u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00419B54u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00419B54u) [[unlikely]] return; }
L_00419B54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419B64u); st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BE(c, 273u, depth + 1u); else { c.pc = 0x0041A5F0u; return; } if (c.pc != 0x00419B64u) [[unlikely]] return; }
L_00419B64:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00419BA4; } }
L_00419B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419B7Cu);  if (depth < kMaxDepth) unit_00BE(c, 356u, depth + 1u); else { c.pc = 0x0041B0D0u; return; } if (c.pc != 0x00419B7Cu) [[unlikely]] return; }
L_00419B7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00419BA4; } }
L_00419B94:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_00419BA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00419BA8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00419BC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 76u)));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00419D40; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 31024u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00418000u < 16384u) { entry = entries_00BE[(t - 0x00418000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00419BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419C00u);  if (depth < kMaxDepth) unit_00BE(c, 273u, depth + 1u); else { c.pc = 0x0041A5F0u; return; } if (c.pc != 0x00419C00u) [[unlikely]] return; }
L_00419C00:
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00419D40; } }
L_00419C14:
    set32(c.r[6], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00419D44; }
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00419D40; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00419D40; } }
L_00419C5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419C64u);  if (depth < kMaxDepth) unit_00BE(c, 316u, depth + 1u); else { c.pc = 0x0041AAB0u; return; } if (c.pc != 0x00419C64u) [[unlikely]] return; }
L_00419C64:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00419D40; } }
L_00419C74:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00419D40; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00419D40; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[6].w[0] + 1u);  goto L_00419CE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419CB4u); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_0024(c, 608u, depth + 1u); else { c.pc = 0x001B3F60u; return; } if (c.pc != 0x00419CB4u) [[unlikely]] return; }
L_00419CB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17728u));
    c.f[1] = ld32((c.r[4].w[0] + 17732u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17736u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_00419D40; } }
L_00419CE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00419D40; } }
L_00419CE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419CF0u);  if (depth < kMaxDepth) unit_00BE(c, 390u, depth + 1u); else { c.pc = 0x0041B370u; return; } if (c.pc != 0x00419CF0u) [[unlikely]] return; }
L_00419CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419CF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 324u, depth + 1u); else { c.pc = 0x0041ABA0u; return; } if (c.pc != 0x00419CF8u) [[unlikely]] return; }
L_00419CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419D00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 295u, depth + 1u); else { c.pc = 0x0041A850u; return; } if (c.pc != 0x00419D00u) [[unlikely]] return; }
L_00419D00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00419D40; } }
L_00419D18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17744u));
    c.f[1] = ld32((c.r[4].w[0] + 17748u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17752u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_00419D40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00419D44:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00419D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 76u)));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00419EC8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 30992u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00418000u < 16384u) { entry = entries_00BE[(t - 0x00418000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00419D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419D90u);  if (depth < kMaxDepth) unit_00BE(c, 273u, depth + 1u); else { c.pc = 0x0041A5F0u; return; } if (c.pc != 0x00419D90u) [[unlikely]] return; }
L_00419D90:
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00419EC8; } }
L_00419DA4:
    set32(c.r[6], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00419ECC; }
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00419EC8; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00419EC8; } }
L_00419DEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419DF4u);  if (depth < kMaxDepth) unit_00BE(c, 316u, depth + 1u); else { c.pc = 0x0041AAB0u; return; } if (c.pc != 0x00419DF4u) [[unlikely]] return; }
L_00419DF4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00419EC8; } }
L_00419E04:
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00419EC8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00419EC8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[6].w[0] + 1u);  goto L_00419E68; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17760u));
    c.f[1] = ld32((c.r[4].w[0] + 17764u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17768u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_00419EC8; } }
L_00419E68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00419EC8; } }
L_00419E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419E78u);  if (depth < kMaxDepth) unit_00BE(c, 390u, depth + 1u); else { c.pc = 0x0041B370u; return; } if (c.pc != 0x00419E78u) [[unlikely]] return; }
L_00419E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419E80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 324u, depth + 1u); else { c.pc = 0x0041ABA0u; return; } if (c.pc != 0x00419E80u) [[unlikely]] return; }
L_00419E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419E88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 295u, depth + 1u); else { c.pc = 0x0041A850u; return; } if (c.pc != 0x00419E88u) [[unlikely]] return; }
L_00419E88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00419EC8; } }
L_00419EA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17776u));
    c.f[1] = ld32((c.r[4].w[0] + 17780u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17784u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_00419EC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00419ECC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00419EE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 76u)));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041A018; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 30960u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00418000u < 16384u) { entry = entries_00BE[(t - 0x00418000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00419F18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419F20u);  if (depth < kMaxDepth) unit_00BE(c, 273u, depth + 1u); else { c.pc = 0x0041A5F0u; return; } if (c.pc != 0x00419F20u) [[unlikely]] return; }
L_00419F20:
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041A018; } }
L_00419F34:
    set32(c.r[6], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0041A01C; }
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041A018; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041A018; } }
L_00419F7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419F84u);  if (depth < kMaxDepth) unit_00BE(c, 316u, depth + 1u); else { c.pc = 0x0041AAB0u; return; } if (c.pc != 0x00419F84u) [[unlikely]] return; }
L_00419F84:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041A018; } }
L_00419F94:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041A018; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041A018; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041A018; } }
L_00419FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419FD0u);  if (depth < kMaxDepth) unit_00BE(c, 324u, depth + 1u); else { c.pc = 0x0041ABA0u; return; } if (c.pc != 0x00419FD0u) [[unlikely]] return; }
L_00419FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00419FD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 295u, depth + 1u); else { c.pc = 0x0041A850u; return; } if (c.pc != 0x00419FD8u) [[unlikely]] return; }
L_00419FD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041A018; } }
L_00419FF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17792u));
    c.f[1] = ld32((c.r[4].w[0] + 17796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17800u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_0041A018:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0041A01C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041A030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041A08C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[3].d[0] + 0ull;  goto L_0041A05C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0041A0C0; } }
L_0041A05C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A064u);  if (depth < kMaxDepth) unit_00C0(c, 483u, depth + 1u); else { c.pc = 0x00423A30u; return; } if (c.pc != 0x0041A064u) [[unlikely]] return; }
L_0041A064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A06Cu);  if (depth < kMaxDepth) unit_00C1(c, 173u, depth + 1u); else { c.pc = 0x004252D0u; return; } if (c.pc != 0x0041A06Cu) [[unlikely]] return; }
L_0041A06C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A074u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 413u, depth + 1u); else { c.pc = 0x00422C80u; return; } if (c.pc != 0x0041A074u) [[unlikely]] return; }
L_0041A074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A07Cu); set32(c.r[4], 0u + 1100u);  if (depth < kMaxDepth) unit_0024(c, 608u, depth + 1u); else { c.pc = 0x001B3F60u; return; } if (c.pc != 0x0041A07Cu) [[unlikely]] return; }
L_0041A07C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041A0BC; } }
L_0041A08C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A094u);  if (depth < kMaxDepth) unit_00BE(c, 273u, depth + 1u); else { c.pc = 0x0041A5F0u; return; } if (c.pc != 0x0041A094u) [[unlikely]] return; }
L_0041A094:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17808u));
    c.f[1] = ld32((c.r[4].w[0] + 17812u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17816u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_0041A0BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0041A0C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041A0D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041A16C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0041A14C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  goto L_0041A108; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0041A180; } }
L_0041A108:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A11Cu);  if (depth < kMaxDepth) unit_0026(c, 18u, depth + 1u); else { c.pc = 0x001B8140u; return; } if (c.pc != 0x0041A11Cu) [[unlikely]] return; }
L_0041A11C:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[5], 0u + 50u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A134u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041A134u) [[unlikely]] return; }
L_0041A134:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041A17C; } }
L_0041A14C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A154u);  if (depth < kMaxDepth) unit_00BE(c, 356u, depth + 1u); else { c.pc = 0x0041B0D0u; return; } if (c.pc != 0x0041A154u) [[unlikely]] return; }
L_0041A154:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041A17C; } }
L_0041A16C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0041A17C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0041A180:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041A190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 9;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_0041A21C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041A1C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0041A26C; } }
L_0041A1C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A1CCu);  if (depth < kMaxDepth) unit_00C0(c, 318u, depth + 1u); else { c.pc = 0x00422320u; return; } if (c.pc != 0x0041A1CCu) [[unlikely]] return; }
L_0041A1CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A1D4u);  if (depth < kMaxDepth) unit_00C0(c, 328u, depth + 1u); else { c.pc = 0x00422410u; return; } if (c.pc != 0x0041A1D4u) [[unlikely]] return; }
L_0041A1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A1DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 332u, depth + 1u); else { c.pc = 0x0041AC90u; return; } if (c.pc != 0x0041A1DCu) [[unlikely]] return; }
L_0041A1DC:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 2;
L_0041A1E4:
    set32(c.r[5], c.r[17].w[0] + 31u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A1F4u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A1F4u) [[unlikely]] return; }
L_0041A1F4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041A1E4u | kUnwind; return; } goto L_0041A1E4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041A268; } }
L_0041A21C:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_0041A220:
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A230u); set32(c.r[5], c.r[17].w[0] + 31u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041A230u) [[unlikely]] return; }
L_0041A230:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041A220u | kUnwind; return; } goto L_0041A220; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17824u));
    c.f[1] = ld32((c.r[4].w[0] + 17828u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17832u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_0041A268:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0041A26C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041A280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 76u)));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041A404; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 30928u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00418000u < 16384u) { entry = entries_00BE[(t - 0x00418000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0041A2BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 132u);  goto L_0041A2E0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A2D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041A2D8u) [[unlikely]] return; }
L_0041A2D8:
    st32((c.r[16].w[0] + 120u), 0u);
    set32(c.r[4], 0u + 132u);
    c.budget -= 2;
L_0041A2E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A2E8u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0041A2E8u) [[unlikely]] return; }
L_0041A2E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 120u), c.r[4].w[0]);  goto L_0041A310; }
    set32(c.r[6], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[7], 0u + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A308u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 297u, depth + 1u); else { c.pc = 0x0041ED30u; return; } if (c.pc != 0x0041A308u) [[unlikely]] return; }
L_0041A308:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 120u), c.r[4].w[0]);
    c.budget -= 2;
L_0041A310:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041A404; } }
L_0041A320:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0041A408; }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041A404; } }
L_0041A344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A34Cu); set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x0041A34Cu) [[unlikely]] return; }
L_0041A34C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041A404; } }
L_0041A35C:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041A404; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041A404; } }
L_0041A380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A388u);  if (depth < kMaxDepth) unit_00BE(c, 332u, depth + 1u); else { c.pc = 0x0041AC90u; return; } if (c.pc != 0x0041A388u) [[unlikely]] return; }
L_0041A388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
L_0041A394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A39Cu); set32(c.r[4], c.r[17].w[0] + 2u);  if (depth < kMaxDepth) unit_00C1(c, 61u, depth + 1u); else { c.pc = 0x00424830u; return; } if (c.pc != 0x0041A39Cu) [[unlikely]] return; }
L_0041A39C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0041A3C0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[5], c.r[17].w[0] + 31u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A3BCu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041A3BCu) [[unlikely]] return; }
L_0041A3BC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0041A3C0:
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041A394u | kUnwind; return; } goto L_0041A394; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041A404; } }
L_0041A3DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17840u));
    c.f[1] = ld32((c.r[4].w[0] + 17844u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17848u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_0041A404:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0041A408:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041A420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041A5DC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 30896u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00418000u < 16384u) { entry = entries_00BE[(t - 0x00418000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0041A45C:
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_0041A464:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  goto L_0041A47C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_0041A5DC; } }
L_0041A47C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0041A5E0; }
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 2;
L_0041A494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A49Cu); set32(c.r[4], 0u + 1132u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0041A49Cu) [[unlikely]] return; }
L_0041A49C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 104u), c.r[17].w[0]);  goto L_0041A4C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A4B0u);  if (depth < kMaxDepth) unit_0024(c, 344u, depth + 1u); else { c.pc = 0x001B2780u; return; } if (c.pc != 0x0041A4B0u) [[unlikely]] return; }
L_0041A4B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A4C0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 469u, depth + 1u); else { c.pc = 0x004133E0u; return; } if (c.pc != 0x0041A4C0u) [[unlikely]] return; }
L_0041A4C0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 104u), c.r[17].w[0]);
    c.budget -= 2;
L_0041A4C8:
    set32(c.r[3], 0u + 4u);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_0041A4D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  goto L_0041A4E8; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_0041A5DC; } }
L_0041A4E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041A5DC; } }
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 2;
L_0041A500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A508u); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0041A508u) [[unlikely]] return; }
L_0041A508:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 108u), c.r[17].w[0]);  goto L_0041A538; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A51Cu);  if (depth < kMaxDepth) unit_0024(c, 344u, depth + 1u); else { c.pc = 0x001B2780u; return; } if (c.pc != 0x0041A51Cu) [[unlikely]] return; }
L_0041A51C:
    set32(c.r[7], ld32((c.r[16].w[0] + 116u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A530u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 34u, depth + 1u); else { c.pc = 0x0040C410u; return; } if (c.pc != 0x0041A530u) [[unlikely]] return; }
L_0041A530:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 108u), c.r[17].w[0]);
    c.budget -= 2;
L_0041A538:
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_0041A540:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  goto L_0041A558; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_0041A5DC; } }
L_0041A558:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041A5DC; } }
    set32(c.r[2], 0u + 7u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 2;
L_0041A570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A578u); set32(c.r[4], 0u + 116u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0041A578u) [[unlikely]] return; }
L_0041A578:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 112u), c.r[17].w[0]);  goto L_0041A5A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A58Cu);  if (depth < kMaxDepth) unit_0024(c, 344u, depth + 1u); else { c.pc = 0x001B2780u; return; } if (c.pc != 0x0041A58Cu) [[unlikely]] return; }
L_0041A58C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A59Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 121u, depth + 1u); else { c.pc = 0x00410CD0u; return; } if (c.pc != 0x0041A59Cu) [[unlikely]] return; }
L_0041A59C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 112u), c.r[17].w[0]);
    c.budget -= 2;
L_0041A5A4:
    set32(c.r[3], 0u + 8u);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_0041A5AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  goto L_0041A5C4; }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_0041A5DC; } }
L_0041A5C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041A5DC; } }
    set32(c.r[3], 0u + 9u);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_0041A5DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0041A5E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041A5F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 7;
L_0041A60C:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041A628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0041A644; } }
L_0041A628:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041A638; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041A640; } }
L_0041A638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A640u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041A640u) [[unlikely]] return; }
L_0041A640:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_0041A644:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  goto L_0041A668; }
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A660u); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A660u) [[unlikely]] return; }
L_0041A660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0041A67C; } }
L_0041A668:
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A678u); set32(c.r[5], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041A678u) [[unlikely]] return; }
L_0041A678:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0041A67C:
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041A60Cu | kUnwind; return; } goto L_0041A60C; }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 2;
L_0041A690:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_0041A6AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041A6B4; } }
L_0041A6AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A6B4u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x0041A6B4u) [[unlikely]] return; }
L_0041A6B4:
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  goto L_0041A738; }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041A6E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0041A6FC; } }
L_0041A6E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041A6F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041A6F8; } }
L_0041A6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A6F8u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041A6F8u) [[unlikely]] return; }
L_0041A6F8:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_0041A6FC:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  goto L_0041A720; }
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], c.r[16].w[0] + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A718u); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A718u) [[unlikely]] return; }
L_0041A718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0041A74C; } }
L_0041A720:
    set32(c.r[5], c.r[16].w[0] + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A730u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A730u) [[unlikely]] return; }
L_0041A730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041A748; } }
L_0041A738:
    set32(c.r[5], c.r[16].w[0] + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A748u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A748u) [[unlikely]] return; }
L_0041A748:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0041A74C:
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041A690u | kUnwind; return; } goto L_0041A690; }
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], 0u + 31u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A76Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A76Cu) [[unlikely]] return; }
L_0041A76C:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], 0u + 32u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A780u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A780u) [[unlikely]] return; }
L_0041A780:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], 0u + 33u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A794u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A794u) [[unlikely]] return; }
L_0041A794:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], 0u + 34u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A7A8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A7A8u) [[unlikely]] return; }
L_0041A7A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], 0u + 35u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A7BCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A7BCu) [[unlikely]] return; }
L_0041A7BC:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], 0u + 36u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A7D0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A7D0u) [[unlikely]] return; }
L_0041A7D0:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], 0u + 21u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A7E4u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A7E4u) [[unlikely]] return; }
L_0041A7E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A7F8u); set32(c.r[5], 0u + 21u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041A7F8u) [[unlikely]] return; }
L_0041A7F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], 0u + 40u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A80Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A80Cu) [[unlikely]] return; }
L_0041A80C:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], 0u + 41u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A820u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A820u) [[unlikely]] return; }
L_0041A820:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A834u); set32(c.r[5], 0u + 41u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041A834u) [[unlikely]] return; }
L_0041A834:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041A850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041A884; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0041A8A0; } }
L_0041A884:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041A894; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041A89C; } }
L_0041A894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A89Cu);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041A89Cu) [[unlikely]] return; }
L_0041A89C:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_0041A8A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A8B4u); set32(c.r[7], 0u + 7u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A8B4u) [[unlikely]] return; }
L_0041A8B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], 0u + 31u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A8C8u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A8C8u) [[unlikely]] return; }
L_0041A8C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], 0u + 32u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A8DCu); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A8DCu) [[unlikely]] return; }
L_0041A8DC:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], 0u + 33u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A8F0u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A8F0u) [[unlikely]] return; }
L_0041A8F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], 0u + 34u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A904u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A904u) [[unlikely]] return; }
L_0041A904:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], 0u + 35u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A918u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A918u) [[unlikely]] return; }
L_0041A918:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], 0u + 36u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A92Cu); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A92Cu) [[unlikely]] return; }
L_0041A92C:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 2;
L_0041A934:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_0041A950; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041A958; } }
L_0041A950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A958u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x0041A958u) [[unlikely]] return; }
L_0041A958:
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  goto L_0041A9DC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041A984; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0041A9A0; } }
L_0041A984:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041A994; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041A99C; } }
L_0041A994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A99Cu);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041A99Cu) [[unlikely]] return; }
L_0041A99C:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_0041A9A0:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  goto L_0041A9C4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], c.r[16].w[0] + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A9BCu); set32(c.r[7], 0u + 7u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A9BCu) [[unlikely]] return; }
L_0041A9BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0041A9F0; } }
L_0041A9C4:
    set32(c.r[5], c.r[16].w[0] + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A9D4u); set32(c.r[7], 0u + 9u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A9D4u) [[unlikely]] return; }
L_0041A9D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041A9EC; } }
L_0041A9DC:
    set32(c.r[5], c.r[16].w[0] + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041A9ECu); set32(c.r[7], 0u + 11u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041A9ECu) [[unlikely]] return; }
L_0041A9EC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0041A9F0:
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041A934u | kUnwind; return; } goto L_0041A934; }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041AA1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0041AA38; } }
L_0041AA1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041AA2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041AA34; } }
L_0041AA2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AA34u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041AA34u) [[unlikely]] return; }
L_0041AA34:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_0041AA38:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[7], c.r[2].w[0] + 21u);
    set32(c.r[5], 0u + 21u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AA4Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041AA4Cu) [[unlikely]] return; }
L_0041AA4C:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AA60u); set32(c.r[5], 0u + 21u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041AA60u) [[unlikely]] return; }
L_0041AA60:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], 0u + 40u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AA74u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041AA74u) [[unlikely]] return; }
L_0041AA74:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], 0u + 41u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AA88u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041AA88u) [[unlikely]] return; }
L_0041AA88:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AA9Cu); set32(c.r[5], 0u + 41u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041AA9Cu) [[unlikely]] return; }
L_0041AA9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041AAB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 7;
L_0041AACC:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041AAE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0041AB04; } }
L_0041AAE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041AAF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041AB00; } }
L_0041AAF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AB00u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041AB00u) [[unlikely]] return; }
L_0041AB00:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_0041AB04:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0041AB24; }
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AB20u); set32(c.r[5], c.r[17].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041AB20u) [[unlikely]] return; }
L_0041AB20:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0041AB24:
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041AACCu | kUnwind; return; } goto L_0041AACC; }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 2;
L_0041AB38:
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AB48u); set32(c.r[5], c.r[17].w[0] + 11u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041AB48u) [[unlikely]] return; }
L_0041AB48:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041AB38u | kUnwind; return; } goto L_0041AB38; }
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AB6Cu); set32(c.r[5], 0u + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041AB6Cu) [[unlikely]] return; }
L_0041AB6C:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AB80u); set32(c.r[5], 0u + 41u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041AB80u) [[unlikely]] return; }
L_0041AB80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041ABA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 7;
L_0041ABBC:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041ABD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0041ABF4; } }
L_0041ABD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041ABE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041ABF0; } }
L_0041ABE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ABF0u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041ABF0u) [[unlikely]] return; }
L_0041ABF0:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_0041ABF4:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0041AC14; }
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AC10u); set32(c.r[5], c.r[17].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041AC10u) [[unlikely]] return; }
L_0041AC10:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0041AC14:
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041ABBCu | kUnwind; return; } goto L_0041ABBC; }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 2;
L_0041AC28:
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AC38u); set32(c.r[5], c.r[17].w[0] + 11u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041AC38u) [[unlikely]] return; }
L_0041AC38:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041AC28u | kUnwind; return; } goto L_0041AC28; }
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AC5Cu); set32(c.r[5], 0u + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041AC5Cu) [[unlikely]] return; }
L_0041AC5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AC70u); set32(c.r[5], 0u + 41u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041AC70u) [[unlikely]] return; }
L_0041AC70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041AC90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 14;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_0041ACD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0041ACDC; } }
L_0041ACD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ACD8u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x0041ACD8u) [[unlikely]] return; }
L_0041ACD8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0041ACDC:
    set32(c.r[4], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 2u);  goto L_0041ACFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0041AD08; } }
L_0041ACFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AD04u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x0041AD04u) [[unlikely]] return; }
L_0041AD04:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0041AD08:
    set32(c.r[17], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AD18u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 390u, depth + 1u); else { c.pc = 0x0041B370u; return; } if (c.pc != 0x0041AD18u) [[unlikely]] return; }
L_0041AD18:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0041ADFC; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041ADFC; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041AD4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0041AD68; } }
L_0041AD4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041AD5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041AD64; } }
L_0041AD5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AD64u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041AD64u) [[unlikely]] return; }
L_0041AD64:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_0041AD68:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 96u)));  goto L_0041AD8C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AD88u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041AD88u) [[unlikely]] return; }
L_0041AD88:
    set32(c.r[4], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 1;
L_0041AD8C:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041ADA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0041ADC4; } }
L_0041ADA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041ADB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041ADC0; } }
L_0041ADB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ADC0u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041ADC0u) [[unlikely]] return; }
L_0041ADC0:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_0041ADC4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 88u)));  goto L_0041ADEC; }
    set32(c.r[4], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ADE4u); set32(c.r[7], 0u + 15u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041ADE4u) [[unlikely]] return; }
L_0041ADE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041ADFC; } }
L_0041ADEC:
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041ADFCu); set32(c.r[7], 0u + 14u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041ADFCu) [[unlikely]] return; }
L_0041ADFC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0041AEE0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041AEE0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041AE30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0041AE4C; } }
L_0041AE30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041AE40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041AE48; } }
L_0041AE40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AE48u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041AE48u) [[unlikely]] return; }
L_0041AE48:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_0041AE4C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 96u)));  goto L_0041AE70; }
    set32(c.r[4], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AE6Cu); set32(c.r[7], 0u + 11u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041AE6Cu) [[unlikely]] return; }
L_0041AE6C:
    set32(c.r[4], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 1;
L_0041AE70:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041AE8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0041AEA8; } }
L_0041AE8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041AE9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041AEA4; } }
L_0041AE9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AEA4u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041AEA4u) [[unlikely]] return; }
L_0041AEA4:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_0041AEA8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 88u)));  goto L_0041AED0; }
    set32(c.r[4], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AEC8u); set32(c.r[7], 0u + 13u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041AEC8u) [[unlikely]] return; }
L_0041AEC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041AEE0; } }
L_0041AED0:
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AEE0u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041AEE0u) [[unlikely]] return; }
L_0041AEE0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0041AFC4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041AFC4; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041AF14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0041AF30; } }
L_0041AF14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041AF24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041AF2C; } }
L_0041AF24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AF2Cu);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041AF2Cu) [[unlikely]] return; }
L_0041AF2C:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_0041AF30:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 96u)));  goto L_0041AF54; }
    set32(c.r[4], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AF50u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041AF50u) [[unlikely]] return; }
L_0041AF50:
    set32(c.r[4], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 1;
L_0041AF54:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041AF70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0041AF8C; } }
L_0041AF70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041AF80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041AF88; } }
L_0041AF80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AF88u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041AF88u) [[unlikely]] return; }
L_0041AF88:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_0041AF8C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 88u)));  goto L_0041AFB4; }
    set32(c.r[4], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[5], 0u + 13u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AFACu); set32(c.r[7], 0u + 15u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041AFACu) [[unlikely]] return; }
L_0041AFAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041AFC4; } }
L_0041AFB4:
    set32(c.r[5], 0u + 13u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041AFC4u); set32(c.r[7], 0u + 14u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041AFC4u) [[unlikely]] return; }
L_0041AFC4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0041B0AC; }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041B0A8; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041AFF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0041B014; } }
L_0041AFF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041B008; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041B010; } }
L_0041B008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B010u);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041B010u) [[unlikely]] return; }
L_0041B010:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_0041B014:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 96u)));  goto L_0041B038; }
    set32(c.r[4], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B034u); set32(c.r[7], 0u + 11u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041B034u) [[unlikely]] return; }
L_0041B034:
    set32(c.r[4], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 1;
L_0041B038:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041B054; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0041B070; } }
L_0041B054:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 28u)));  goto L_0041B064; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041B06C; } }
L_0041B064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B06Cu);  if (depth < kMaxDepth) unit_00C0(c, 463u, depth + 1u); else { c.pc = 0x004237C0u; return; } if (c.pc != 0x0041B06Cu) [[unlikely]] return; }
L_0041B06C:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_0041B070:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 88u)));  goto L_0041B098; }
    set32(c.r[4], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[5], 0u + 13u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B090u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041B090u) [[unlikely]] return; }
L_0041B090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041B0A8; } }
L_0041B098:
    set32(c.r[5], 0u + 13u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B0A8u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041B0A8u) [[unlikely]] return; }
L_0041B0A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0041B0AC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0041B0D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B0F4u); set32(c.r[5], 0u + 11u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B0F4u) [[unlikely]] return; }
L_0041B0F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B108u); set32(c.r[5], 0u + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B108u) [[unlikely]] return; }
L_0041B108:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B11Cu); set32(c.r[5], 0u + 13u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B11Cu) [[unlikely]] return; }
L_0041B11C:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B130u); set32(c.r[5], 0u + 14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B130u) [[unlikely]] return; }
L_0041B130:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B144u); set32(c.r[5], 0u + 15u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B144u) [[unlikely]] return; }
L_0041B144:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B158u); set32(c.r[5], 0u + 21u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B158u) [[unlikely]] return; }
L_0041B158:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B16Cu); set32(c.r[5], 0u + 31u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B16Cu) [[unlikely]] return; }
L_0041B16C:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B180u); set32(c.r[5], 0u + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B180u) [[unlikely]] return; }
L_0041B180:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B194u); set32(c.r[5], 0u + 33u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B194u) [[unlikely]] return; }
L_0041B194:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B1A8u); set32(c.r[5], 0u + 34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B1A8u) [[unlikely]] return; }
L_0041B1A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B1BCu); set32(c.r[5], 0u + 35u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B1BCu) [[unlikely]] return; }
L_0041B1BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B1D0u); set32(c.r[5], 0u + 36u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B1D0u) [[unlikely]] return; }
L_0041B1D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B1E4u); set32(c.r[5], 0u + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B1E4u) [[unlikely]] return; }
L_0041B1E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B1F8u); set32(c.r[5], 0u + 41u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B1F8u) [[unlikely]] return; }
L_0041B1F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041B210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 64u);  goto L_0041B250; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 96u), 0u);  goto L_0041B24C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B248u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B248u) [[unlikely]] return; }
L_0041B248:
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 1;
L_0041B24C:
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_0041B250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B258u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0041B258u) [[unlikely]] return; }
L_0041B258:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  goto L_0041B270; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B26Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x0041B26Cu) [[unlikely]] return; }
L_0041B26C:
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 1;
L_0041B270:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 40u), 0u);
    set32(c.r[16], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B288u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0041B288u) [[unlikely]] return; }
L_0041B288:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0041B2A0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B29Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x0041B29Cu) [[unlikely]] return; }
L_0041B29C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0041B2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B2A8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x0041B2A8u) [[unlikely]] return; }
L_0041B2A8:
    set32(c.r[16], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B2B4u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0041B2B4u) [[unlikely]] return; }
L_0041B2B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0041B2CC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B2C8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x0041B2C8u) [[unlikely]] return; }
L_0041B2C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0041B2CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B2D4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x0041B2D4u) [[unlikely]] return; }
L_0041B2D4:
    set32(c.r[16], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B2E0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0041B2E0u) [[unlikely]] return; }
L_0041B2E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0041B2F8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B2F4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x0041B2F4u) [[unlikely]] return; }
L_0041B2F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0041B2F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B300u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x0041B300u) [[unlikely]] return; }
L_0041B300:
    set32(c.r[16], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B30Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0041B30Cu) [[unlikely]] return; }
L_0041B30C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0041B324; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B320u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x0041B320u) [[unlikely]] return; }
L_0041B320:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0041B324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B32Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x0041B32Cu) [[unlikely]] return; }
L_0041B32C:
    set32(c.r[16], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B338u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0041B338u) [[unlikely]] return; }
L_0041B338:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0041B350; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B34Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00C0(c, 453u, depth + 1u); else { c.pc = 0x004233D0u; return; } if (c.pc != 0x0041B34Cu) [[unlikely]] return; }
L_0041B34C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0041B350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B358u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 469u, depth + 1u); else { c.pc = 0x00423860u; return; } if (c.pc != 0x0041B358u) [[unlikely]] return; }
L_0041B358:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041B370:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_0041B3A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0041B3B4; } }
L_0041B3A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B3B0u);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x0041B3B0u) [[unlikely]] return; }
L_0041B3B0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0041B3B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 2u);  goto L_0041B3D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0041B3E0; } }
L_0041B3D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B3DCu);  if (depth < kMaxDepth) unit_00C0(c, 465u, depth + 1u); else { c.pc = 0x004237F0u; return; } if (c.pc != 0x0041B3DCu) [[unlikely]] return; }
L_0041B3DC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0041B3E0:
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0041B40C; } }
L_0041B3EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B3F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 314u, depth + 1u); else { c.pc = 0x004222B0u; return; } if (c.pc != 0x0041B3F4u) [[unlikely]] return; }
L_0041B3F4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0041B40C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0041B418; } }
L_0041B40C:
    c.r[2].d[0] = c.r[18].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041B3ECu | kUnwind; return; } goto L_0041B3EC; } }
L_0041B418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B420u); st32((c.r[16].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00C0(c, 316u, depth + 1u); else { c.pc = 0x004222F0u; return; } if (c.pc != 0x0041B420u) [[unlikely]] return; }
L_0041B420:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0041B438; }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_0041B438:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041B450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041B478; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0041B494; } }
L_0041B478:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0041B494:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B4A8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00C0(c, 435u, depth + 1u); else { c.pc = 0x004230B0u; return; } if (c.pc != 0x0041B4A8u) [[unlikely]] return; }
L_0041B4A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B4B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 436u, depth + 1u); else { c.pc = 0x004230E0u; return; } if (c.pc != 0x0041B4B0u) [[unlikely]] return; }
L_0041B4B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B4B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 254u, depth + 1u); else { c.pc = 0x0041A420u; return; } if (c.pc != 0x0041B4B8u) [[unlikely]] return; }
L_0041B4B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041B4D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B4F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0041B4F4u) [[unlikely]] return; }
L_0041B4F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], 0u + 872u);
    set32(c.r[2], c.r[2].w[0] + 15264u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B510u); st32((c.r[16].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0041B510u) [[unlikely]] return; }
L_0041B510:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  goto L_0041B528; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B524u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 421u, depth + 1u); else { c.pc = 0x001B6BB0u; return; } if (c.pc != 0x0041B524u) [[unlikely]] return; }
L_0041B524:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_0041B528:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[16].w[0] + 68u), c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 72u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 76u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[7].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[7].w[0] + 52u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0041B5A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0041B608; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15264u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0041B5E8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B5E4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041B5E4u) [[unlikely]] return; }
L_0041B5E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041B5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B5F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0041B5F0u) [[unlikely]] return; }
L_0041B5F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0041B60C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B608u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0041B608u) [[unlikely]] return; }
L_0041B608:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041B60C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041B620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0041B890; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 30816u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00418000u < 16384u) { entry = entries_00BE[(t - 0x00418000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0041B658:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0041B894; }
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[5].d[0] = c.r[4].d[0] | 65535ull;
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 15;
L_0041B6A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041B890; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  goto L_0041B6E4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B6DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 536u, depth + 1u); else { c.pc = 0x001B7FF0u; return; } if (c.pc != 0x0041B6DCu) [[unlikely]] return; }
L_0041B6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  if (t) { goto L_0041B6F4; } }
L_0041B6E4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B6F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 536u, depth + 1u); else { c.pc = 0x001B7FF0u; return; } if (c.pc != 0x0041B6F0u) [[unlikely]] return; }
L_0041B6F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0041B6F4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 2u);  goto L_0041B73C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B704u); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0041B704u) [[unlikely]] return; }
L_0041B704:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 76u), c.r[4].w[0]);  goto L_0041B738; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 30856u);
    set32(c.r[8], c.r[8].w[0] - 30840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B730u); set32(c.r[9], 0u + 3u);  if (depth < kMaxDepth) unit_008B(c, 355u, depth + 1u); else { c.pc = 0x0034F160u; return; } if (c.pc != 0x0041B730u) [[unlikely]] return; }
L_0041B730:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 76u), c.r[4].w[0]);
    c.budget -= 2;
L_0041B738:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0041B73C:
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 2;
L_0041B744:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041B890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B764u);  if (depth < kMaxDepth) unit_0026(c, 7u, depth + 1u); else { c.pc = 0x001B8060u; return; } if (c.pc != 0x0041B764u) [[unlikely]] return; }
L_0041B764:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041B890; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 6;
L_0041B784:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041B890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B7A0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 5u, depth + 1u); else { c.pc = 0x001B8040u; return; } if (c.pc != 0x0041B7A0u) [[unlikely]] return; }
L_0041B7A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0041B7B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), 0u);  if (t) { goto L_0041B7B8; } }
L_0041B7B4:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_0041B7B8:
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_0041B7C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 80u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_0041B7F0; }
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041B81C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0041B7F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B7F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 480u, depth + 1u); else { c.pc = 0x0034FBF0u; return; } if (c.pc != 0x0041B7F8u) [[unlikely]] return; }
L_0041B7F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B808u); set32(c.r[4], 0u - 960u);  if (depth < kMaxDepth) unit_0026(c, 11u, depth + 1u); else { c.pc = 0x001B80A0u; return; } if (c.pc != 0x0041B808u) [[unlikely]] return; }
L_0041B808:
    set32(c.r[4], 0u + 12u);
    set32(c.r[3], 0u + 5u);
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0041B890; } }
L_0041B81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B824u);  if (depth < kMaxDepth) unit_0026(c, 8u, depth + 1u); else { c.pc = 0x001B8070u; return; } if (c.pc != 0x0041B824u) [[unlikely]] return; }
L_0041B824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041B890; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0041B890; } }
L_0041B838:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0041B890; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B854u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 486u, depth + 1u); else { c.pc = 0x0034FCB0u; return; } if (c.pc != 0x0041B854u) [[unlikely]] return; }
L_0041B854:
    set32(c.r[2], 0u + 6u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_0041B85C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B864u);  if (depth < kMaxDepth) unit_0026(c, 4u, depth + 1u); else { c.pc = 0x001B8030u; return; } if (c.pc != 0x0041B864u) [[unlikely]] return; }
L_0041B864:
    set32(c.r[3], 0u + 7u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 2;
L_0041B86C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 9;
L_0041B890:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0041B894:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041B8A0:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 52u), c.r[3].w[0]);  c.pc = t; return; }
L_0041B8B0:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), 0u);  c.pc = t; return; }
L_0041B8D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0041B904; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0041B900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B900u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0041B900u) [[unlikely]] return; }
L_0041B900:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0041B904:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041B920:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), 0u);  c.pc = t; return; }
L_0041B940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0041B974; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0041B970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B970u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0041B970u) [[unlikely]] return; }
L_0041B970:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0041B974:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041B990:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B9BCu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0041B9BCu) [[unlikely]] return; }
L_0041B9BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[20].w[0] + 108u);
    set32(c.r[2], c.r[2].w[0] + 15328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B9D0u); st32((c.r[20].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BE(c, 433u, depth + 1u); else { c.pc = 0x0041B920u; return; } if (c.pc != 0x0041B9D0u) [[unlikely]] return; }
L_0041B9D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[20].w[0] + 132u);
    set32(c.r[5], c.r[5].w[0] - 18256u);
    set32(c.r[6], c.r[6].w[0] - 18224u);
    set32(c.r[7], 0u + 24u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041B9F0u); set32(c.r[8], 0u + 5u);  if (depth < kMaxDepth) unit_0008(c, 147u, depth + 1u); else { c.pc = 0x00141CB0u; return; } if (c.pc != 0x0041B9F0u) [[unlikely]] return; }
L_0041B9F0:
    st32((c.r[20].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 52u), 0u);
    st32((c.r[20].w[0] + 56u), 0u);
    st32((c.r[20].w[0] + 60u), 0u);
    st32((c.r[20].w[0] + 64u), 0u);
    st32((c.r[20].w[0] + 68u), 0u);
    st32((c.r[20].w[0] + 72u), 0u);
    st32((c.r[20].w[0] + 76u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 80u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 84u), 0u);
    st32((c.r[20].w[0] + 88u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA28u); st32((c.r[20].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_00BE(c, 487u, depth + 1u); else { c.pc = 0x0041BE30u; return; } if (c.pc != 0x0041BA28u) [[unlikely]] return; }
L_0041BA28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA30u); set32(c.r[4], 0u + 872u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0041BA30u) [[unlikely]] return; }
L_0041BA30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 60u), c.r[2].w[0]);  goto L_0041BA48; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 421u, depth + 1u); else { c.pc = 0x001B6BB0u; return; } if (c.pc != 0x0041BA44u) [[unlikely]] return; }
L_0041BA44:
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_0041BA48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA58u); st32((c.r[2].w[0] + 52u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 489u, depth + 1u); else { c.pc = 0x00423AD0u; return; } if (c.pc != 0x0041BA58u) [[unlikely]] return; }
L_0041BA58:
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA64u); st32((c.r[3].w[0] + 752u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C1(c, 135u, depth + 1u); else { c.pc = 0x00424F80u; return; } if (c.pc != 0x0041BA64u) [[unlikely]] return; }
L_0041BA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA6Cu); st32((c.r[20].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C1(c, 124u, depth + 1u); else { c.pc = 0x00424E20u; return; } if (c.pc != 0x0041BA6Cu) [[unlikely]] return; }
L_0041BA6C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0041BA80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041BA88; } }
L_0041BA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA88u);  if (depth < kMaxDepth) unit_00C1(c, 135u, depth + 1u); else { c.pc = 0x00424F80u; return; } if (c.pc != 0x0041BA88u) [[unlikely]] return; }
L_0041BA88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA90u); st32((c.r[20].w[0] + 100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C1(c, 176u, depth + 1u); else { c.pc = 0x00425310u; return; } if (c.pc != 0x0041BA90u) [[unlikely]] return; }
L_0041BA90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BA98u);  if (depth < kMaxDepth) unit_00C1(c, 103u, depth + 1u); else { c.pc = 0x00424CA0u; return; } if (c.pc != 0x0041BA98u) [[unlikely]] return; }
L_0041BA98:
    st32((c.r[20].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[20].w[0] + 108u)));  goto L_0041BAD4; }
    set32(c.r[16], ld32((c.r[20].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BAB4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 481u, depth + 1u); else { c.pc = 0x0041BDD0u; return; } if (c.pc != 0x0041BAB4u) [[unlikely]] return; }
L_0041BAB4:
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0041BAC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041BAD4; } }
L_0041BAC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BAD0u);  if (depth < kMaxDepth) unit_00BE(c, 481u, depth + 1u); else { c.pc = 0x0041BDD0u; return; } if (c.pc != 0x0041BAD0u) [[unlikely]] return; }
L_0041BAD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0041BAD4:
    st32((c.r[20].w[0] + 116u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 108u)));
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[20].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0041BB00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BAFCu); set32(c.r[4], ld32((c.r[20].w[0] + 116u)));  if (depth < kMaxDepth) unit_00C1(c, 107u, depth + 1u); else { c.pc = 0x00424CF0u; return; } if (c.pc != 0x0041BAFCu) [[unlikely]] return; }
L_0041BAFC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0041BB00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BB08u);  if (depth < kMaxDepth) unit_00BE(c, 484u, depth + 1u); else { c.pc = 0x0041BE00u; return; } if (c.pc != 0x0041BB08u) [[unlikely]] return; }
L_0041BB08:
    st32((c.r[20].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BB14u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 485u, depth + 1u); else { c.pc = 0x0041BE10u; return; } if (c.pc != 0x0041BB14u) [[unlikely]] return; }
L_0041BB14:
    st32((c.r[20].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BB20u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 486u, depth + 1u); else { c.pc = 0x0041BE20u; return; } if (c.pc != 0x0041BB20u) [[unlikely]] return; }
L_0041BB20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[20].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 17856u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[3], 0u + 5u);
    c.budget -= 5;
L_0041BB34:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041BB34u | kUnwind; return; } goto L_0041BB34; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BB5Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00C1(c, 93u, depth + 1u); else { c.pc = 0x00424B20u; return; } if (c.pc != 0x0041BB5Cu) [[unlikely]] return; }
L_0041BB5C:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[19].w[0] << 2);
    c.budget -= 2;
L_0041BB64:
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[18], c.r[3].w[0] + 96u);
    set32(c.r[17], c.r[2].w[0] << 3);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BB84u); set32(c.r[16], c.r[20].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_00C1(c, 69u, depth + 1u); else { c.pc = 0x004248F0u; return; } if (c.pc != 0x0041BB84u) [[unlikely]] return; }
L_0041BB84:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BB98u); st32((c.r[16].w[0] + 136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C1(c, 126u, depth + 1u); else { c.pc = 0x00424E50u; return; } if (c.pc != 0x0041BB98u) [[unlikely]] return; }
L_0041BB98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_0041BBA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0041BBB0; } }
L_0041BBA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BBB0u);  if (depth < kMaxDepth) unit_00C1(c, 91u, depth + 1u); else { c.pc = 0x00424AE0u; return; } if (c.pc != 0x0041BBB0u) [[unlikely]] return; }
L_0041BBB0:
    set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BBC4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 472u, depth + 1u); else { c.pc = 0x0041BD40u; return; } if (c.pc != 0x0041BBC4u) [[unlikely]] return; }
L_0041BBC4:
    set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BBD8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 475u, depth + 1u); else { c.pc = 0x0041BD70u; return; } if (c.pc != 0x0041BBD8u) [[unlikely]] return; }
L_0041BBD8:
    set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BBECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 478u, depth + 1u); else { c.pc = 0x0041BDA0u; return; } if (c.pc != 0x0041BBECu) [[unlikely]] return; }
L_0041BBEC:
    set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[3].w[0] + 152u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041BB64u | kUnwind; return; } goto L_0041BB64; }
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[20].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0041BC50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0041BD28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15328u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  goto L_0041BCA4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 60u), 0u);  goto L_0041BCA0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BC9Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041BC9Cu) [[unlikely]] return; }
L_0041BC9C:
    st32((c.r[17].w[0] + 60u), 0u);
    c.budget -= 1;
L_0041BCA0:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 1;
L_0041BCA4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  goto L_0041BCCC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), 0u);  goto L_0041BCC8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BCC4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041BCC4u) [[unlikely]] return; }
L_0041BCC4:
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 1;
L_0041BCC8:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_0041BCCC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041BCE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BCDCu);  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x0041BCDCu) [[unlikely]] return; }
L_0041BCDC:
    st32((c.r[17].w[0] + 72u), 0u);
    c.budget -= 1;
L_0041BCE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[17].w[0] + 132u);
    set32(c.r[5], c.r[5].w[0] - 18224u);
    set32(c.r[6], 0u + 24u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BCF8u); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_0008(c, 144u, depth + 1u); else { c.pc = 0x00141C40u; return; } if (c.pc != 0x0041BCF8u) [[unlikely]] return; }
L_0041BCF8:
    set32(c.r[4], c.r[17].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BD04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BE(c, 434u, depth + 1u); else { c.pc = 0x0041B940u; return; } if (c.pc != 0x0041BD04u) [[unlikely]] return; }
L_0041BD04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BD10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0041BD10u) [[unlikely]] return; }
L_0041BD10:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0041BD2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BD28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0041BD28u) [[unlikely]] return; }
L_0041BD28:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0041BD2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0041BD40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BD54u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 45u, depth + 1u); else { c.pc = 0x00424670u; return; } if (c.pc != 0x0041BD54u) [[unlikely]] return; }
L_0041BD54:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BD60u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 207u, depth + 1u); else { c.pc = 0x00291CA0u; return; } if (c.pc != 0x0041BD60u) [[unlikely]] return; }
L_0041BD60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041BD70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BD84u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 45u, depth + 1u); else { c.pc = 0x00424670u; return; } if (c.pc != 0x0041BD84u) [[unlikely]] return; }
L_0041BD84:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BD90u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 213u, depth + 1u); else { c.pc = 0x00291D80u; return; } if (c.pc != 0x0041BD90u) [[unlikely]] return; }
L_0041BD90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041BDA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BDB4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 45u, depth + 1u); else { c.pc = 0x00424670u; return; } if (c.pc != 0x0041BDB4u) [[unlikely]] return; }
L_0041BDB4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BDC0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 219u, depth + 1u); else { c.pc = 0x00291E60u; return; } if (c.pc != 0x0041BDC0u) [[unlikely]] return; }
L_0041BDC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0041BDD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BDE0u);  if (depth < kMaxDepth) unit_00C1(c, 45u, depth + 1u); else { c.pc = 0x00424670u; return; } if (c.pc != 0x0041BDE0u) [[unlikely]] return; }
L_0041BDE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BDE8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 280u, depth + 1u); else { c.pc = 0x00292670u; return; } if (c.pc != 0x0041BDE8u) [[unlikely]] return; }
L_0041BDE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0041BE00:
    c.budget -= 2;
    { set32(c.r[5], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041BD40u | kUnwind; return; } goto L_0041BD40; }
L_0041BE10:
    c.budget -= 2;
    { set32(c.r[5], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041BD70u | kUnwind; return; } goto L_0041BD70; }
L_0041BE20:
    c.budget -= 2;
    { set32(c.r[5], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041BDA0u | kUnwind; return; } goto L_0041BDA0; }
L_0041BE30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 104u), 0u);  c.pc = t; return; }
L_0041BE40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00BF(c, 87u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 30720u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00418000u < 16384u) { entry = entries_00BE[(t - 0x00418000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0041BE8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BE94u); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0041BE94u) [[unlikely]] return; }
L_0041BE94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 84u), c.r[4].w[0]);  goto L_0041BEC8; }
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 30776u);
    set32(c.r[8], c.r[8].w[0] - 30760u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BEC0u); set32(c.r[9], 0u + 2u);  if (depth < kMaxDepth) unit_008B(c, 355u, depth + 1u); else { c.pc = 0x0034F160u; return; } if (c.pc != 0x0041BEC0u) [[unlikely]] return; }
L_0041BEC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 84u), c.r[4].w[0]);
    c.budget -= 2;
L_0041BEC8:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 2;
L_0041BED0:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  [[clang::musttail]] return unit_00BF(c, 88u, depth); }
    set32(c.r[2], ld32((c.r[5].w[0] + 100u)));
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 16u);  goto L_0041BF1C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 64u), 0u);  goto L_0041BF18; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BF14u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041BF14u) [[unlikely]] return; }
L_0041BF14:
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 1;
L_0041BF18:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_0041BF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BF24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0041BF24u) [[unlikely]] return; }
L_0041BF24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  goto L_0041BF4C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 30776u);
    set32(c.r[6], c.r[6].w[0] - 30744u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BF48u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 87u, depth + 1u); else { c.pc = 0x001809E0u; return; } if (c.pc != 0x0041BF48u) [[unlikely]] return; }
L_0041BF48:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_0041BF4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BF54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x0041BF54u) [[unlikely]] return; }
L_0041BF54:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  goto L_0041BF78; }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u + 11u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BF(c, 87u, depth); } }
L_0041BF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BF80u);  if (depth < kMaxDepth) unit_0018(c, 108u, depth + 1u); else { c.pc = 0x00180D10u; return; } if (c.pc != 0x0041BF80u) [[unlikely]] return; }
L_0041BF80:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_0041BF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BF90u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x0041BF90u) [[unlikely]] return; }
L_0041BF90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  goto L_0041BFB4; }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u + 11u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BF(c, 87u, depth); } }
L_0041BFB4:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0041BFCC; }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_0041BFCC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00BF(c, 87u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041BFDCu);  if (depth < kMaxDepth) unit_0018(c, 116u, depth + 1u); else { c.pc = 0x00180DD0u; return; } if (c.pc != 0x0041BFDCu) [[unlikely]] return; }
L_0041BFDC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_00BF(c, 2u, depth); } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u + 11u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BF(c, 87u, depth); } }
    [[clang::musttail]] return unit_00BF(c, 2u, depth);
}

}
