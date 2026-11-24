#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0030[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0,
    0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 37, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71,
    0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0,
    0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0,
    0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0,
    0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 129, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0,
    165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185,
    0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201,
    0, 0, 0, 202, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212,
    0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0,
    0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241,
    0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0,
    0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0,
    0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0,
    0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0,
    0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0,
    0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0,
    0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0,
    347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0,
    0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0,
    0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0,
    373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 378, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0,
    388, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0,
    0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0,
    0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0,
    0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0,
    0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0,
    0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0,
    0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0,
    0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 442, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0,
    0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0,
    451, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0,
    0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0,
    0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0030(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001E0000;
    case 2u: goto L_001E0024;
    case 3u: goto L_001E0034;
    case 4u: goto L_001E0064;
    case 5u: goto L_001E0070;
    case 6u: goto L_001E0078;
    case 7u: goto L_001E00AC;
    case 8u: goto L_001E00C8;
    case 9u: goto L_001E00F8;
    case 10u: goto L_001E0110;
    case 11u: goto L_001E0140;
    case 12u: goto L_001E0150;
    case 13u: goto L_001E0180;
    case 14u: goto L_001E01AC;
    case 15u: goto L_001E01B0;
    case 16u: goto L_001E01F0;
    case 17u: goto L_001E0214;
    case 18u: goto L_001E0248;
    case 19u: goto L_001E0270;
    case 20u: goto L_001E0280;
    case 21u: goto L_001E02A0;
    case 22u: goto L_001E02BC;
    case 23u: goto L_001E02C4;
    case 24u: goto L_001E02E8;
    case 25u: goto L_001E02F4;
    case 26u: goto L_001E0314;
    case 27u: goto L_001E0328;
    case 28u: goto L_001E0330;
    case 29u: goto L_001E0344;
    case 30u: goto L_001E0350;
    case 31u: goto L_001E0364;
    case 32u: goto L_001E0380;
    case 33u: goto L_001E0390;
    case 34u: goto L_001E03A4;
    case 35u: goto L_001E03D0;
    case 36u: goto L_001E03EC;
    case 37u: goto L_001E0404;
    case 38u: goto L_001E0418;
    case 39u: goto L_001E0424;
    case 40u: goto L_001E0430;
    case 41u: goto L_001E0440;
    case 42u: goto L_001E045C;
    case 43u: goto L_001E0470;
    case 44u: goto L_001E0484;
    case 45u: goto L_001E049C;
    case 46u: goto L_001E04BC;
    case 47u: goto L_001E04D4;
    case 48u: goto L_001E04EC;
    case 49u: goto L_001E0510;
    case 50u: goto L_001E052C;
    case 51u: goto L_001E0564;
    case 52u: goto L_001E0570;
    case 53u: goto L_001E05A4;
    case 54u: goto L_001E05B0;
    case 55u: goto L_001E05D0;
    case 56u: goto L_001E05F0;
    case 57u: goto L_001E0608;
    case 58u: goto L_001E0640;
    case 59u: goto L_001E06B8;
    case 60u: goto L_001E06C0;
    case 61u: goto L_001E06F8;
    case 62u: goto L_001E070C;
    case 63u: goto L_001E0714;
    case 64u: goto L_001E0768;
    case 65u: goto L_001E0784;
    case 66u: goto L_001E07B0;
    case 67u: goto L_001E0800;
    case 68u: goto L_001E0820;
    case 69u: goto L_001E084C;
    case 70u: goto L_001E0864;
    case 71u: goto L_001E087C;
    case 72u: goto L_001E088C;
    case 73u: goto L_001E08B0;
    case 74u: goto L_001E08EC;
    case 75u: goto L_001E0900;
    case 76u: goto L_001E0920;
    case 77u: goto L_001E0944;
    case 78u: goto L_001E0980;
    case 79u: goto L_001E0994;
    case 80u: goto L_001E09C0;
    case 81u: goto L_001E09F4;
    case 82u: goto L_001E0A30;
    case 83u: goto L_001E0A44;
    case 84u: goto L_001E0A58;
    case 85u: goto L_001E0A64;
    case 86u: goto L_001E0A80;
    case 87u: goto L_001E0AB4;
    case 88u: goto L_001E0ACC;
    case 89u: goto L_001E0AE0;
    case 90u: goto L_001E0B1C;
    case 91u: goto L_001E0B58;
    case 92u: goto L_001E0B6C;
    case 93u: goto L_001E0B80;
    case 94u: goto L_001E0B94;
    case 95u: goto L_001E0BC0;
    case 96u: goto L_001E0BFC;
    case 97u: goto L_001E0C10;
    case 98u: goto L_001E0C24;
    case 99u: goto L_001E0C40;
    case 100u: goto L_001E0C74;
    case 101u: goto L_001E0C8C;
    case 102u: goto L_001E0CA0;
    case 103u: goto L_001E0CDC;
    case 104u: goto L_001E0D18;
    case 105u: goto L_001E0D2C;
    case 106u: goto L_001E0D40;
    case 107u: goto L_001E0D54;
    case 108u: goto L_001E0D78;
    case 109u: goto L_001E0D84;
    case 110u: goto L_001E0DA8;
    case 111u: goto L_001E0DC0;
    case 112u: goto L_001E0DCC;
    case 113u: goto L_001E0DF0;
    case 114u: goto L_001E0DFC;
    case 115u: goto L_001E0E74;
    case 116u: goto L_001E0E88;
    case 117u: goto L_001E0EDC;
    case 118u: goto L_001E0EE8;
    case 119u: goto L_001E0EF0;
    case 120u: goto L_001E0F1C;
    case 121u: goto L_001E0F40;
    case 122u: goto L_001E0F70;
    case 123u: goto L_001E0FAC;
    case 124u: goto L_001E0FC0;
    case 125u: goto L_001E0FD4;
    case 126u: goto L_001E0FF8;
    case 127u: goto L_001E102C;
    case 128u: goto L_001E103C;
    case 129u: goto L_001E1040;
    case 130u: goto L_001E1044;
    case 131u: goto L_001E1058;
    case 132u: goto L_001E1080;
    case 133u: goto L_001E109C;
    case 134u: goto L_001E10C0;
    case 135u: goto L_001E10E0;
    case 136u: goto L_001E1100;
    case 137u: goto L_001E110C;
    case 138u: goto L_001E1124;
    case 139u: goto L_001E113C;
    case 140u: goto L_001E1140;
    case 141u: goto L_001E114C;
    case 142u: goto L_001E1170;
    case 143u: goto L_001E11AC;
    case 144u: goto L_001E11C0;
    case 145u: goto L_001E11E0;
    case 146u: goto L_001E1204;
    case 147u: goto L_001E1240;
    case 148u: goto L_001E1254;
    case 149u: goto L_001E1280;
    case 150u: goto L_001E1288;
    case 151u: goto L_001E12A4;
    case 152u: goto L_001E12AC;
    case 153u: goto L_001E12D8;
    case 154u: goto L_001E12EC;
    case 155u: goto L_001E1310;
    case 156u: goto L_001E131C;
    case 157u: goto L_001E1340;
    case 158u: goto L_001E1358;
    case 159u: goto L_001E1364;
    case 160u: goto L_001E1388;
    case 161u: goto L_001E1394;
    case 162u: goto L_001E140C;
    case 163u: goto L_001E1420;
    case 164u: goto L_001E1474;
    case 165u: goto L_001E1480;
    case 166u: goto L_001E1488;
    case 167u: goto L_001E14B4;
    case 168u: goto L_001E14D8;
    case 169u: goto L_001E1508;
    case 170u: goto L_001E1544;
    case 171u: goto L_001E1558;
    case 172u: goto L_001E156C;
    case 173u: goto L_001E1590;
    case 174u: goto L_001E15C4;
    case 175u: goto L_001E15DC;
    case 176u: goto L_001E15F0;
    case 177u: goto L_001E1634;
    case 178u: goto L_001E1658;
    case 179u: goto L_001E1680;
    case 180u: goto L_001E1698;
    case 181u: goto L_001E16B0;
    case 182u: goto L_001E16B8;
    case 183u: goto L_001E16D0;
    case 184u: goto L_001E16D8;
    case 185u: goto L_001E16FC;
    case 186u: goto L_001E1704;
    case 187u: goto L_001E170C;
    case 188u: goto L_001E1738;
    case 189u: goto L_001E1760;
    case 190u: goto L_001E1780;
    case 191u: goto L_001E17B4;
    case 192u: goto L_001E17E0;
    case 193u: goto L_001E17F8;
    case 194u: goto L_001E1824;
    case 195u: goto L_001E1840;
    case 196u: goto L_001E1850;
    case 197u: goto L_001E1870;
    case 198u: goto L_001E1890;
    case 199u: goto L_001E18A4;
    case 200u: goto L_001E18D0;
    case 201u: goto L_001E18FC;
    case 202u: goto L_001E190C;
    case 203u: goto L_001E1918;
    case 204u: goto L_001E1920;
    case 205u: goto L_001E1950;
    case 206u: goto L_001E1968;
    case 207u: goto L_001E1980;
    case 208u: goto L_001E1990;
    case 209u: goto L_001E19BC;
    case 210u: goto L_001E19D4;
    case 211u: goto L_001E19EC;
    case 212u: goto L_001E19FC;
    case 213u: goto L_001E1A08;
    case 214u: goto L_001E1A24;
    case 215u: goto L_001E1A48;
    case 216u: goto L_001E1A60;
    case 217u: goto L_001E1A78;
    case 218u: goto L_001E1A90;
    case 219u: goto L_001E1AAC;
    case 220u: goto L_001E1AE4;
    case 221u: goto L_001E1B20;
    case 222u: goto L_001E1B50;
    case 223u: goto L_001E1BFC;
    case 224u: goto L_001E1C14;
    case 225u: goto L_001E1C40;
    case 226u: goto L_001E1C64;
    case 227u: goto L_001E1C98;
    case 228u: goto L_001E1CB4;
    case 229u: goto L_001E1CE4;
    case 230u: goto L_001E1CF4;
    case 231u: goto L_001E1D28;
    case 232u: goto L_001E1D38;
    case 233u: goto L_001E1D6C;
    case 234u: goto L_001E1D7C;
    case 235u: goto L_001E1DB0;
    case 236u: goto L_001E1DC0;
    case 237u: goto L_001E1DF4;
    case 238u: goto L_001E1E04;
    case 239u: goto L_001E1E38;
    case 240u: goto L_001E1E48;
    case 241u: goto L_001E1E7C;
    case 242u: goto L_001E1E8C;
    case 243u: goto L_001E1EC0;
    case 244u: goto L_001E1ED0;
    case 245u: goto L_001E1F00;
    case 246u: goto L_001E1F10;
    case 247u: goto L_001E1F40;
    case 248u: goto L_001E1F50;
    case 249u: goto L_001E1F80;
    case 250u: goto L_001E1F90;
    case 251u: goto L_001E1FC0;
    case 252u: goto L_001E1FD0;
    case 253u: goto L_001E2000;
    case 254u: goto L_001E2010;
    case 255u: goto L_001E2040;
    case 256u: goto L_001E2050;
    case 257u: goto L_001E2080;
    case 258u: goto L_001E2090;
    case 259u: goto L_001E20C0;
    case 260u: goto L_001E20D0;
    case 261u: goto L_001E2100;
    case 262u: goto L_001E2110;
    case 263u: goto L_001E2140;
    case 264u: goto L_001E2170;
    case 265u: goto L_001E2194;
    case 266u: goto L_001E21A0;
    case 267u: goto L_001E21C4;
    case 268u: goto L_001E21E0;
    case 269u: goto L_001E2204;
    case 270u: goto L_001E2220;
    case 271u: goto L_001E2248;
    case 272u: goto L_001E2264;
    case 273u: goto L_001E2288;
    case 274u: goto L_001E22A4;
    case 275u: goto L_001E22C8;
    case 276u: goto L_001E22E4;
    case 277u: goto L_001E2308;
    case 278u: goto L_001E2324;
    case 279u: goto L_001E2348;
    case 280u: goto L_001E2364;
    case 281u: goto L_001E2388;
    case 282u: goto L_001E23A4;
    case 283u: goto L_001E23B8;
    case 284u: goto L_001E23D4;
    case 285u: goto L_001E23E8;
    case 286u: goto L_001E2404;
    case 287u: goto L_001E2418;
    case 288u: goto L_001E2434;
    case 289u: goto L_001E2448;
    case 290u: goto L_001E2464;
    case 291u: goto L_001E2478;
    case 292u: goto L_001E2494;
    case 293u: goto L_001E24A8;
    case 294u: goto L_001E24C4;
    case 295u: goto L_001E24D8;
    case 296u: goto L_001E24F4;
    case 297u: goto L_001E2508;
    case 298u: goto L_001E2524;
    case 299u: goto L_001E2550;
    case 300u: goto L_001E2570;
    case 301u: goto L_001E2580;
    case 302u: goto L_001E2594;
    case 303u: goto L_001E25F0;
    case 304u: goto L_001E2614;
    case 305u: goto L_001E2670;
    case 306u: goto L_001E26D4;
    case 307u: goto L_001E2730;
    case 308u: goto L_001E2784;
    case 309u: goto L_001E27E0;
    case 310u: goto L_001E2810;
    case 311u: goto L_001E2824;
    case 312u: goto L_001E283C;
    case 313u: goto L_001E2888;
    case 314u: goto L_001E28B4;
    case 315u: goto L_001E2904;
    case 316u: goto L_001E291C;
    case 317u: goto L_001E296C;
    case 318u: goto L_001E2990;
    case 319u: goto L_001E29A4;
    case 320u: goto L_001E29BC;
    case 321u: goto L_001E2A08;
    case 322u: goto L_001E2A38;
    case 323u: goto L_001E2A88;
    case 324u: goto L_001E2AA0;
    case 325u: goto L_001E2AF0;
    case 326u: goto L_001E2B20;
    case 327u: goto L_001E2B30;
    case 328u: goto L_001E2B58;
    case 329u: goto L_001E2BA8;
    case 330u: goto L_001E2BBC;
    case 331u: goto L_001E2C0C;
    case 332u: goto L_001E2C20;
    case 333u: goto L_001E2C30;
    case 334u: goto L_001E2C3C;
    case 335u: goto L_001E2C60;
    case 336u: goto L_001E2CB0;
    case 337u: goto L_001E2CC4;
    case 338u: goto L_001E2D14;
    case 339u: goto L_001E2D40;
    case 340u: goto L_001E2D50;
    case 341u: goto L_001E2D80;
    case 342u: goto L_001E2DD0;
    case 343u: goto L_001E2DE4;
    case 344u: goto L_001E2E34;
    case 345u: goto L_001E2E60;
    case 346u: goto L_001E2E70;
    case 347u: goto L_001E2E80;
    case 348u: goto L_001E2E98;
    case 349u: goto L_001E2EB8;
    case 350u: goto L_001E2EC0;
    case 351u: goto L_001E2ECC;
    case 352u: goto L_001E2ED8;
    case 353u: goto L_001E2EE8;
    case 354u: goto L_001E2F10;
    case 355u: goto L_001E2F3C;
    case 356u: goto L_001E2F6C;
    case 357u: goto L_001E2F78;
    case 358u: goto L_001E2F84;
    case 359u: goto L_001E2FB4;
    case 360u: goto L_001E2FC0;
    case 361u: goto L_001E2FD8;
    case 362u: goto L_001E2FF0;
    case 363u: goto L_001E3024;
    case 364u: goto L_001E3040;
    case 365u: goto L_001E3070;
    case 366u: goto L_001E30B0;
    case 367u: goto L_001E30C0;
    case 368u: goto L_001E30D4;
    case 369u: goto L_001E30EC;
    case 370u: goto L_001E3104;
    case 371u: goto L_001E3120;
    case 372u: goto L_001E3168;
    case 373u: goto L_001E3180;
    case 374u: goto L_001E31A0;
    case 375u: goto L_001E31CC;
    case 376u: goto L_001E3200;
    case 377u: goto L_001E3260;
    case 378u: goto L_001E3264;
    case 379u: goto L_001E3290;
    case 380u: goto L_001E32AC;
    case 381u: goto L_001E32C0;
    case 382u: goto L_001E32D8;
    case 383u: goto L_001E32F0;
    case 384u: goto L_001E3310;
    case 385u: goto L_001E3320;
    case 386u: goto L_001E3330;
    case 387u: goto L_001E3378;
    case 388u: goto L_001E3380;
    case 389u: goto L_001E3388;
    case 390u: goto L_001E33AC;
    case 391u: goto L_001E33C8;
    case 392u: goto L_001E33F8;
    case 393u: goto L_001E3414;
    case 394u: goto L_001E342C;
    case 395u: goto L_001E343C;
    case 396u: goto L_001E344C;
    case 397u: goto L_001E345C;
    case 398u: goto L_001E356C;
    case 399u: goto L_001E3584;
    case 400u: goto L_001E35A8;
    case 401u: goto L_001E35C4;
    case 402u: goto L_001E35F8;
    case 403u: goto L_001E3614;
    case 404u: goto L_001E362C;
    case 405u: goto L_001E36A4;
    case 406u: goto L_001E36D8;
    case 407u: goto L_001E36F0;
    case 408u: goto L_001E381C;
    case 409u: goto L_001E382C;
    case 410u: goto L_001E384C;
    case 411u: goto L_001E3864;
    case 412u: goto L_001E3874;
    case 413u: goto L_001E3884;
    case 414u: goto L_001E38A0;
    case 415u: goto L_001E38B8;
    case 416u: goto L_001E38DC;
    case 417u: goto L_001E38F8;
    case 418u: goto L_001E392C;
    case 419u: goto L_001E3954;
    case 420u: goto L_001E3960;
    case 421u: goto L_001E3978;
    case 422u: goto L_001E398C;
    case 423u: goto L_001E39B8;
    case 424u: goto L_001E39D0;
    case 425u: goto L_001E39F4;
    case 426u: goto L_001E3A10;
    case 427u: goto L_001E3A44;
    case 428u: goto L_001E3A6C;
    case 429u: goto L_001E3A78;
    case 430u: goto L_001E3A90;
    case 431u: goto L_001E3AAC;
    case 432u: goto L_001E3ABC;
    case 433u: goto L_001E3AD8;
    case 434u: goto L_001E3AF0;
    case 435u: goto L_001E3B18;
    case 436u: goto L_001E3B3C;
    case 437u: goto L_001E3B58;
    case 438u: goto L_001E3B8C;
    case 439u: goto L_001E3BB4;
    case 440u: goto L_001E3BC0;
    case 441u: goto L_001E3BD8;
    case 442u: goto L_001E3C04;
    case 443u: goto L_001E3C0C;
    case 444u: goto L_001E3C24;
    case 445u: goto L_001E3C30;
    case 446u: goto L_001E3C4C;
    case 447u: goto L_001E3C70;
    case 448u: goto L_001E3C8C;
    case 449u: goto L_001E3CC0;
    case 450u: goto L_001E3CE8;
    case 451u: goto L_001E3D00;
    case 452u: goto L_001E3D24;
    case 453u: goto L_001E3D3C;
    case 454u: goto L_001E3D48;
    case 455u: goto L_001E3D60;
    case 456u: goto L_001E3D74;
    case 457u: goto L_001E3DE8;
    case 458u: goto L_001E3E18;
    case 459u: goto L_001E3E28;
    case 460u: goto L_001E3E34;
    case 461u: goto L_001E3E40;
    case 462u: goto L_001E3E58;
    case 463u: goto L_001E3E78;
    case 464u: goto L_001E3E98;
    case 465u: goto L_001E3EBC;
    case 466u: goto L_001E3ED8;
    case 467u: goto L_001E3F0C;
    case 468u: goto L_001E3F34;
    case 469u: goto L_001E3F4C;
    case 470u: goto L_001E3F70;
    case 471u: goto L_001E3F88;
    case 472u: goto L_001E3F94;
    case 473u: goto L_001E3FAC;
    case 474u: goto L_001E3FC0;
    default: bad_entry(c, 0x001E0000u); return;
    }
L_001E0000:
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E0024; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E0024; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0024u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E0024u) [[unlikely]] return; }
L_001E0024:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[17], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0034u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E0034u) [[unlikely]] return; }
L_001E0034:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E0064; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E0064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0064u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E0064u) [[unlikely]] return; }
L_001E0064:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001E0188; } }
L_001E0070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0078u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E0078u) [[unlikely]] return; }
L_001E0078:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E00AC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E00AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E00ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E00ACu) [[unlikely]] return; }
L_001E00AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21602u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), 0u);  goto L_001E00FC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E00C8u); set32(c.r[4], c.r[4].w[0] + 21602u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E00C8u) [[unlikely]] return; }
L_001E00C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 21602u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E00F8; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[17].w[0] + 8u);  goto L_001E00EC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E00F8; } }
L_001E00EC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E00F8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E00F8u) [[unlikely]] return; }
L_001E00F8:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001E00FC:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[22], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0110u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E0110u) [[unlikely]] return; }
L_001E0110:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[22].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[23].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E0140; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E0140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0140u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E0140u) [[unlikely]] return; }
L_001E0140:
    st32((c.r[23].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0150u); set32(c.r[17], ld32((c.r[16].w[0] + 60u)));  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E0150u) [[unlikely]] return; }
L_001E0150:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E0180; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E0180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0180u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E0180u) [[unlikely]] return; }
L_001E0180:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_001E0188:
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0070u | kUnwind; return; } goto L_001E0070; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E01ACu); set32(c.r[6], c.r[6].w[0] + 21608u);  if (depth < kMaxDepth) unit_003C(c, 262u, depth + 1u); else { c.pc = 0x002133B0u; return; } if (c.pc != 0x001E01ACu) [[unlikely]] return; }
L_001E01AC:
    set32(c.r[20], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 1;
L_001E01B0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DFF5Cu | kUnwind; return; } [[clang::musttail]] return unit_002F(c, 337u, depth); } }
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
L_001E01F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0214u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 318u, depth + 1u); else { c.pc = 0x001DFCF0u; return; } if (c.pc != 0x001E0214u) [[unlikely]] return; }
L_001E0214:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001E0224; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E024C; } }
L_001E0224:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01080000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] | 4096ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0248u); st32((c.r[2].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_002B(c, 403u, depth + 1u); else { c.pc = 0x001CF9B0u; return; } if (c.pc != 0x001E0248u) [[unlikely]] return; }
L_001E0248:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E024C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E0270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0280u);  if (depth < kMaxDepth) unit_002F(c, 318u, depth + 1u); else { c.pc = 0x001DFCF0u; return; } if (c.pc != 0x001E0280u) [[unlikely]] return; }
L_001E0280:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 12u)));  goto L_001E028C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E028C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E02A0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E02BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002F(c, 298u, depth + 1u); else { c.pc = 0x001DFA60u; return; } if (c.pc != 0x001E02BCu) [[unlikely]] return; }
L_001E02BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E02C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 297u, depth + 1u); else { c.pc = 0x001DFA50u; return; } if (c.pc != 0x001E02C4u) [[unlikely]] return; }
L_001E02C4:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[4], c.r[29].w[0] + 184u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E02E8u); st32((c.r[29].w[0] + 196u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001E02E8u) [[unlikely]] return; }
L_001E02E8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E02F4u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E02F4u) [[unlikely]] return; }
L_001E02F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[6].w[0] + 21591u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0314u); st32((c.r[17].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001E0314u) [[unlikely]] return; }
L_001E0314:
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (t) { goto L_001E04CC; } }
L_001E0328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0330u); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001E0330u) [[unlikely]] return; }
L_001E0330:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0344u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001E0344u) [[unlikely]] return; }
L_001E0344:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0350u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E0350u) [[unlikely]] return; }
L_001E0350:
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0364u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E0364u) [[unlikely]] return; }
L_001E0364:
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0380u); st32((c.r[29].w[0] + 180u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E0380u) [[unlikely]] return; }
L_001E0380:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[4], 0u + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0390u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001E0390u) [[unlikely]] return; }
L_001E0390:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  goto L_001E03A8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E03A4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 217u, depth + 1u); else { c.pc = 0x00212A20u; return; } if (c.pc != 0x001E03A4u) [[unlikely]] return; }
L_001E03A4:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001E03A8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[5], c.r[29].w[0] + 184u);
    set32(c.r[6], c.r[6].w[0] + 21608u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E03D0u); st32((c.r[17].w[0] + 148u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001E03D0u) [[unlikely]] return; }
L_001E03D0:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E03ECu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_003C(c, 313u, depth + 1u); else { c.pc = 0x00213AD0u; return; } if (c.pc != 0x001E03ECu) [[unlikely]] return; }
L_001E03EC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 184u);
    set32(c.r[6], c.r[6].w[0] + 21602u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0404u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 117u, depth + 1u); else { c.pc = 0x001A9270u; return; } if (c.pc != 0x001E0404u) [[unlikely]] return; }
L_001E0404:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 180u), c.r[2].w[0]);  if (t) { goto L_001E0494; } }
L_001E0418:
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0424u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001E0424u) [[unlikely]] return; }
L_001E0424:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0430u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E0430u) [[unlikely]] return; }
L_001E0430:
    set32(c.r[18], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0440u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E0440u) [[unlikely]] return; }
L_001E0440:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[5], c.r[29].w[0] + 168u);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E045Cu); st32((c.r[29].w[0] + 172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E045Cu) [[unlikely]] return; }
L_001E045C:
    set32(c.r[6], ld32((c.r[29].w[0] + 92u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0470u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 308u, depth + 1u); else { c.pc = 0x001DFBA0u; return; } if (c.pc != 0x001E0470u) [[unlikely]] return; }
L_001E0470:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0484u); set32(c.r[6], c.r[6].w[0] + 21602u);  if (depth < kMaxDepth) unit_0022(c, 125u, depth + 1u); else { c.pc = 0x001A9410u; return; } if (c.pc != 0x001E0484u) [[unlikely]] return; }
L_001E0484:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 4;
L_001E0494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E049Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x001E049Cu) [[unlikely]] return; }
L_001E049C:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 168u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0418u | kUnwind; return; } goto L_001E0418; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[29].w[0] + 184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E04BCu); set32(c.r[6], c.r[6].w[0] + 21591u);  if (depth < kMaxDepth) unit_0022(c, 125u, depth + 1u); else { c.pc = 0x001A9410u; return; } if (c.pc != 0x001E04BCu) [[unlikely]] return; }
L_001E04BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 4;
L_001E04CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E04D4u); set32(c.r[4], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001A8EF0u; return; } if (c.pc != 0x001E04D4u) [[unlikely]] return; }
L_001E04D4:
    set32(c.r[3], 0u + 192u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0328u | kUnwind; return; } goto L_001E0328; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E04ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E04ECu) [[unlikely]] return; }
L_001E04EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001E0510:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E052Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 318u, depth + 1u); else { c.pc = 0x001DFCF0u; return; } if (c.pc != 0x001E052Cu) [[unlikely]] return; }
L_001E052C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  goto L_001E0550; }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001E05B4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_001E0550:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E0584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0564u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001E0564u) [[unlikely]] return; }
L_001E0564:
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0570u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x001E0570u) [[unlikely]] return; }
L_001E0570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E0584; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 3;
L_001E0584:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001E05A8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 12u), 0u);  goto L_001E05A4; }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E05A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 323u, depth + 1u); else { c.pc = 0x001DFD90u; return; } if (c.pc != 0x001E05A4u) [[unlikely]] return; }
L_001E05A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E05A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E05B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E05B0u) [[unlikely]] return; }
L_001E05B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001E05B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E05D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 12u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 21616u);  if (t) { goto L_001E061C; } }
L_001E05F0:
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001E061C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0608u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E0608u) [[unlikely]] return; }
L_001E0608:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 21620u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_001E062C; } }
L_001E061C:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[6].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E05F0u | kUnwind; return; } goto L_001E05F0; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001E062C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E0640:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E071C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001E06C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E0684; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 60u)));  if (t) { goto L_001E07C4; } }
L_001E0684:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001E0694; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[5].w[0])));  if (t) { goto L_001E06A8; } }
L_001E0694:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001E06A8; }
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001E06A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E06B8u); set32(c.r[5], c.r[5].w[0] + 21680u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x001E06B8u) [[unlikely]] return; }
L_001E06B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E06C0u); set32(c.r[4], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0022(c, 37u, depth + 1u); else { c.pc = 0x001A8550u; return; } if (c.pc != 0x001E06C0u) [[unlikely]] return; }
L_001E06C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E07C0; } }
L_001E06C8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001E06DC; } }
    c.f[0] = ld32((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E06F0; } }
L_001E06DC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001E06EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[5].w[0]));  if (t) { goto L_001E06F0; } }
L_001E06EC:
    c.f[12] = 0u;
    c.budget -= 1;
L_001E06F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E06F8u);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001E06F8u) [[unlikely]] return; }
L_001E06F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E070Cu); set32(c.r[5], c.r[5].w[0] + 21683u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x001E070Cu) [[unlikely]] return; }
L_001E070C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0714u); set32(c.r[4], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0022(c, 37u, depth + 1u); else { c.pc = 0x001A8550u; return; } if (c.pc != 0x001E0714u) [[unlikely]] return; }
L_001E0714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E07C0; } }
L_001E071C:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  goto L_001E0730; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 18344u);  if (t) { goto L_001E0740; } }
L_001E0730:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 31912u)));  goto L_001E0740; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + 12u);  if (t) { goto L_001E0740; } }
L_001E0740:
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E0768; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E0768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0768u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E0768u) [[unlikely]] return; }
L_001E0768:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[29].w[0] + 60u), 0u);  goto L_001E07C0; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E07BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0784u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E0784u) [[unlikely]] return; }
L_001E0784:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E07B0; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001E07A0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E07B0; } }
L_001E07A0:
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E07B0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E07B0u) [[unlikely]] return; }
L_001E07B0:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E07C0; } }
L_001E07BC:
    st32((c.r[29].w[0] + 60u), 0u);
    c.budget -= 1;
L_001E07C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_001E07C4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[3].w[0]);  goto L_001E07DC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_001E07DC:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001E0804; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E0800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0800u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E0800u) [[unlikely]] return; }
L_001E0800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001E0804:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E0820:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E084Cu); st32((c.r[29].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_0022(c, 78u, depth + 1u); else { c.pc = 0x001A8BD0u; return; } if (c.pc != 0x001E084Cu) [[unlikely]] return; }
L_001E084C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10264u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0864u); st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 81u, depth + 1u); else { c.pc = 0x001A8C40u; return; } if (c.pc != 0x001E0864u) [[unlikely]] return; }
L_001E0864:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 188u)));  goto L_001E106C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 176u)));  if (t) { goto L_001E105C; } }
L_001E087C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E088Cu); set32(c.r[5], c.r[5].w[0] + 21686u);  if (depth < kMaxDepth) unit_0030(c, 197u, depth + 1u); else { c.pc = 0x001E1870u; return; } if (c.pc != 0x001E088Cu) [[unlikely]] return; }
L_001E088C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E0910; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21689u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E1058; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E08B0u); set32(c.r[4], c.r[4].w[0] + 21689u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E08B0u) [[unlikely]] return; }
L_001E08B0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] + 21689u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 188u)));  if (t) { goto L_001E0904; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E08D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[5].w[0]);  if (t) { goto L_001E0908; } }
L_001E08D0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 188u);  goto L_001E08F8; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E08ECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E08ECu) [[unlikely]] return; }
L_001E08EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E0904; } }
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 1;
L_001E08F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0900u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E0900u) [[unlikely]] return; }
L_001E0900:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E0904:
    st32((c.r[29].w[0] + 188u), c.r[5].w[0]);
    c.budget -= 1;
L_001E0908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1058; } }
L_001E0910:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0920u); set32(c.r[5], c.r[5].w[0] + 21692u);  if (depth < kMaxDepth) unit_0030(c, 197u, depth + 1u); else { c.pc = 0x001E1870u; return; } if (c.pc != 0x001E0920u) [[unlikely]] return; }
L_001E0920:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 172u)));  goto L_001E09A8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21695u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E1058; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0944u); set32(c.r[4], c.r[4].w[0] + 21695u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E0944u) [[unlikely]] return; }
L_001E0944:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] + 21695u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 188u)));  if (t) { goto L_001E0998; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E0964; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[5].w[0]);  if (t) { goto L_001E099C; } }
L_001E0964:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 188u);  goto L_001E098C; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0980u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E0980u) [[unlikely]] return; }
L_001E0980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E0998; } }
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 1;
L_001E098C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0994u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E0994u) [[unlikely]] return; }
L_001E0994:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E0998:
    st32((c.r[29].w[0] + 188u), c.r[5].w[0]);
    c.budget -= 1;
L_001E099C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1058; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 172u)));
    c.budget -= 1;
L_001E09A8:
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 64u);  goto L_001E0F4C; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E09C0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E09C0u) [[unlikely]] return; }
L_001E09C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 172u)));
    set32(c.r[2], 0u + 99u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E09D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_001E0B8C; } }
L_001E09D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21698u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_001E0A50; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E09F4u); set32(c.r[4], c.r[4].w[0] + 21698u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E09F4u) [[unlikely]] return; }
L_001E09F4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] + 21698u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 188u)));  if (t) { goto L_001E0A48; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E0A14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[5].w[0]);  if (t) { goto L_001E0A4C; } }
L_001E0A14:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 188u);  goto L_001E0A3C; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0A30u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E0A30u) [[unlikely]] return; }
L_001E0A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E0A48; } }
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 1;
L_001E0A3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0A44u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E0A44u) [[unlikely]] return; }
L_001E0A44:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E0A48:
    st32((c.r[29].w[0] + 188u), c.r[5].w[0]);
    c.budget -= 1;
L_001E0A4C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001E0A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0A58u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E0A58u) [[unlikely]] return; }
L_001E0A58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 176u)));  if (t) { goto L_001E0AE4; } }
    set32(c.r[18], c.r[29].w[0] + 172u);
    c.budget -= 1;
L_001E0A64:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_001E0AD8; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E0AD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0A80u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E0A80u) [[unlikely]] return; }
L_001E0A80:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 188u)));  if (t) { goto L_001E0AD0; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E0A98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[5].w[0]);  if (t) { goto L_001E0AD4; } }
L_001E0A98:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[6].d[0] = c.r[18].d[0] + 0ull;  goto L_001E0AC0; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0AB4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E0AB4u) [[unlikely]] return; }
L_001E0AB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E0AD0; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001E0AC0:
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0ACCu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E0ACCu) [[unlikely]] return; }
L_001E0ACC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E0AD0:
    st32((c.r[29].w[0] + 188u), c.r[5].w[0]);
    c.budget -= 1;
L_001E0AD4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001E0AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0AE0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E0AE0u) [[unlikely]] return; }
L_001E0AE0:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_001E0AE4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E0B00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 172u)));
    set32(c.r[2], 0u + 62u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[18], c.r[29].w[0] + 172u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0A64u | kUnwind; return; } goto L_001E0A64; }
L_001E0B00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21704u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_001E0B78; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0B1Cu); set32(c.r[4], c.r[4].w[0] + 21704u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E0B1Cu) [[unlikely]] return; }
L_001E0B1C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] + 21704u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 188u)));  if (t) { goto L_001E0B70; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E0B3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[5].w[0]);  if (t) { goto L_001E0B74; } }
L_001E0B3C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 188u);  goto L_001E0B64; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0B58u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E0B58u) [[unlikely]] return; }
L_001E0B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E0B70; } }
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 1;
L_001E0B64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0B6Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E0B6Cu) [[unlikely]] return; }
L_001E0B6C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E0B70:
    st32((c.r[29].w[0] + 188u), c.r[5].w[0]);
    c.budget -= 1;
L_001E0B74:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001E0B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0B80u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E0B80u) [[unlikely]] return; }
L_001E0B80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1058; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001E0B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0B94u);  if (depth < kMaxDepth) unit_0030(c, 55u, depth + 1u); else { c.pc = 0x001E05D0u; return; } if (c.pc != 0x001E0B94u) [[unlikely]] return; }
L_001E0B94:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_001E0D4C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21706u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 176u)));  goto L_001E0CA4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0BC0u); set32(c.r[4], c.r[4].w[0] + 21706u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E0BC0u) [[unlikely]] return; }
L_001E0BC0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] + 21706u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 188u)));  if (t) { goto L_001E0C14; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E0BE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[5].w[0]);  if (t) { goto L_001E0C18; } }
L_001E0BE0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 188u);  goto L_001E0C08; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0BFCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E0BFCu) [[unlikely]] return; }
L_001E0BFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E0C14; } }
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 1;
L_001E0C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0C10u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E0C10u) [[unlikely]] return; }
L_001E0C10:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E0C14:
    st32((c.r[29].w[0] + 188u), c.r[5].w[0]);
    c.budget -= 1;
L_001E0C18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0CA0; } }
    set32(c.r[18], c.r[29].w[0] + 172u);
    c.budget -= 1;
L_001E0C24:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_001E0C98; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E0C94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0C40u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E0C40u) [[unlikely]] return; }
L_001E0C40:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 188u)));  if (t) { goto L_001E0C90; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E0C58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[5].w[0]);  if (t) { goto L_001E0C94; } }
L_001E0C58:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[6].d[0] = c.r[18].d[0] + 0ull;  goto L_001E0C80; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0C74u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E0C74u) [[unlikely]] return; }
L_001E0C74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E0C90; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001E0C80:
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0C8Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E0C8Cu) [[unlikely]] return; }
L_001E0C8C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E0C90:
    st32((c.r[29].w[0] + 188u), c.r[5].w[0]);
    c.budget -= 1;
L_001E0C94:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001E0C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0CA0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E0CA0u) [[unlikely]] return; }
L_001E0CA0:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_001E0CA4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E0CC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 172u)));
    set32(c.r[2], 0u + 62u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[18], c.r[29].w[0] + 172u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0C24u | kUnwind; return; } goto L_001E0C24; }
L_001E0CC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21708u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_001E0D38; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0CDCu); set32(c.r[4], c.r[4].w[0] + 21708u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E0CDCu) [[unlikely]] return; }
L_001E0CDC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] + 21708u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 188u)));  if (t) { goto L_001E0D30; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E0CFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[5].w[0]);  if (t) { goto L_001E0D34; } }
L_001E0CFC:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 188u);  goto L_001E0D24; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0D18u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E0D18u) [[unlikely]] return; }
L_001E0D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E0D30; } }
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 1;
L_001E0D24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0D2Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E0D2Cu) [[unlikely]] return; }
L_001E0D2C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E0D30:
    st32((c.r[29].w[0] + 188u), c.r[5].w[0]);
    c.budget -= 1;
L_001E0D34:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001E0D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0D40u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E0D40u) [[unlikely]] return; }
L_001E0D40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1058; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001E0D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0D54u);  if (depth < kMaxDepth) unit_0030(c, 218u, depth + 1u); else { c.pc = 0x001E1A90u; return; } if (c.pc != 0x001E0D54u) [[unlikely]] return; }
L_001E0D54:
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 144u), 0u);  if (t) { goto L_001E0DB0; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0D78u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 201u, depth + 1u); else { c.pc = 0x001FD860u; return; } if (c.pc != 0x001E0D78u) [[unlikely]] return; }
L_001E0D78:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0D84u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001E0D84u) [[unlikely]] return; }
L_001E0D84:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 184u);  goto L_001E0DF4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E0DF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0DA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E0DA8u) [[unlikely]] return; }
L_001E0DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0DF0; } }
L_001E0DB0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0DC0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001E0DC0u) [[unlikely]] return; }
L_001E0DC0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0DCCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001E0DCCu) [[unlikely]] return; }
L_001E0DCC:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E0DF0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E0DF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0DF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E0DF0u) [[unlikely]] return; }
L_001E0DF0:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 1;
L_001E0DF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0DFCu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0030(c, 58u, depth + 1u); else { c.pc = 0x001E0640u; return; } if (c.pc != 0x001E0DFCu) [[unlikely]] return; }
L_001E0DFC:
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 184u)));  goto L_001E0E98; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001E0E94; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));  goto L_001E0E2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] + 12u);  if (t) { goto L_001E0E2C; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001E0E2C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_001E0E40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_001E0E40; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E0E40:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  goto L_001E0EB4; }
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] > 0;  if (t) { goto L_001E0E58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0E88; } }
L_001E0E58:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 188u);  goto L_001E0E80; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0E74u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E0E74u) [[unlikely]] return; }
L_001E0E74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0E88; } }
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 1;
L_001E0E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0E88u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E0E88u) [[unlikely]] return; }
L_001E0E88:
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0EB4; } }
L_001E0E94:
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_001E0E98:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 184u)));  goto L_001E0EB0; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 4;
L_001E0EB0:
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 1;
L_001E0EB4:
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 176u)));  goto L_001E0EF4; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E0EF0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0EDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E0EDCu) [[unlikely]] return; }
L_001E0EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0EF0; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001E0EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0EF0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E0EF0u) [[unlikely]] return; }
L_001E0EF0:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_001E0EF4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_001E0F14; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 172u)));
    set32(c.r[2], 0u + 62u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0EE8u | kUnwind; return; } goto L_001E0EE8; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001E0F14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0F1Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E0F1Cu) [[unlikely]] return; }
L_001E0F1C:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E1058; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E1058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0F40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E0F40u) [[unlikely]] return; }
L_001E0F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1058; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 1;
L_001E0F4C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[18], c.r[29].w[0] + 172u);  goto L_001E0FE0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21710u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_001E0FCC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0F70u); set32(c.r[4], c.r[4].w[0] + 21710u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E0F70u) [[unlikely]] return; }
L_001E0F70:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] + 21710u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 188u)));  if (t) { goto L_001E0FC4; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E0F90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[5].w[0]);  if (t) { goto L_001E0FC8; } }
L_001E0F90:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 188u);  goto L_001E0FB8; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0FACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E0FACu) [[unlikely]] return; }
L_001E0FAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E0FC4; } }
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 1;
L_001E0FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0FC0u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E0FC0u) [[unlikely]] return; }
L_001E0FC0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E0FC4:
    st32((c.r[29].w[0] + 188u), c.r[5].w[0]);
    c.budget -= 1;
L_001E0FC8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001E0FCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0FD4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E0FD4u) [[unlikely]] return; }
L_001E0FD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1058; } }
    set32(c.r[18], c.r[29].w[0] + 172u);
    c.budget -= 1;
L_001E0FE0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_001E1050; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E104C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0FF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E0FF8u) [[unlikely]] return; }
L_001E0FF8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 188u)));  if (t) { goto L_001E1048; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E1010; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[5].w[0]);  if (t) { goto L_001E104C; } }
L_001E1010:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[6].d[0] = c.r[18].d[0] + 0ull;  goto L_001E1038; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E102Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E102Cu) [[unlikely]] return; }
L_001E102C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E1048; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001E1038:
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 1;
L_001E103C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1044u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E1044u) [[unlikely]] return; }
    goto L_001E1044;
L_001E1040:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E1044:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E1048:
    st32((c.r[29].w[0] + 188u), c.r[5].w[0]);
    c.budget -= 1;
L_001E104C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001E1050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1058u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E1058u) [[unlikely]] return; }
L_001E1058:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_001E105C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E087Cu | kUnwind; return; } goto L_001E087C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 1;
L_001E106C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E1080; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_001E1080:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E109Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E109Cu) [[unlikely]] return; }
L_001E109C:
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001E10C4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E10C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E10C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E10C0u) [[unlikely]] return; }
L_001E10C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001E10C4:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001E10E0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
L_001E1100:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E110Cu); st32((c.r[29].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_0022(c, 78u, depth + 1u); else { c.pc = 0x001A8BD0u; return; } if (c.pc != 0x001E110Cu) [[unlikely]] return; }
L_001E110C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10264u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1124u); st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 81u, depth + 1u); else { c.pc = 0x001A8C40u; return; } if (c.pc != 0x001E1124u) [[unlikely]] return; }
L_001E1124:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 188u)));  goto L_001E1604; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 176u)));  if (t) { goto L_001E15F4; } }
L_001E113C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 1;
L_001E1140:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E114Cu); set32(c.r[5], c.r[5].w[0] + 21686u);  if (depth < kMaxDepth) unit_0030(c, 197u, depth + 1u); else { c.pc = 0x001E1870u; return; } if (c.pc != 0x001E114Cu) [[unlikely]] return; }
L_001E114C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E11D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21689u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E15F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1170u); set32(c.r[4], c.r[4].w[0] + 21689u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E1170u) [[unlikely]] return; }
L_001E1170:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] + 21689u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 188u)));  if (t) { goto L_001E11C4; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E1190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[5].w[0]);  if (t) { goto L_001E11C8; } }
L_001E1190:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 188u);  goto L_001E11B8; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E11ACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E11ACu) [[unlikely]] return; }
L_001E11AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E11C4; } }
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 1;
L_001E11B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E11C0u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E11C0u) [[unlikely]] return; }
L_001E11C0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E11C4:
    st32((c.r[29].w[0] + 188u), c.r[5].w[0]);
    c.budget -= 1;
L_001E11C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E15F0; } }
L_001E11D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E11E0u); set32(c.r[5], c.r[5].w[0] + 21692u);  if (depth < kMaxDepth) unit_0030(c, 197u, depth + 1u); else { c.pc = 0x001E1870u; return; } if (c.pc != 0x001E11E0u) [[unlikely]] return; }
L_001E11E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 172u)));  goto L_001E1268; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21695u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E15F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1204u); set32(c.r[4], c.r[4].w[0] + 21695u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E1204u) [[unlikely]] return; }
L_001E1204:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] + 21695u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 188u)));  if (t) { goto L_001E1258; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E1224; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[5].w[0]);  if (t) { goto L_001E125C; } }
L_001E1224:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 188u);  goto L_001E124C; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1240u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E1240u) [[unlikely]] return; }
L_001E1240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E1258; } }
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 1;
L_001E124C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1254u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E1254u) [[unlikely]] return; }
L_001E1254:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E1258:
    st32((c.r[29].w[0] + 188u), c.r[5].w[0]);
    c.budget -= 1;
L_001E125C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E15F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 172u)));
    c.budget -= 1;
L_001E1268:
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 64u);  goto L_001E14E4; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1280u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E1280u) [[unlikely]] return; }
L_001E1280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1288u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0030(c, 55u, depth + 1u); else { c.pc = 0x001E05D0u; return; } if (c.pc != 0x001E1288u) [[unlikely]] return; }
L_001E1288:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_001E12E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 176u)));  if (t) { goto L_001E12B0; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001E12A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E12ACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E12ACu) [[unlikely]] return; }
L_001E12AC:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_001E12B0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_001E12D0; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 172u)));
    set32(c.r[2], 0u + 62u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E12A4u | kUnwind; return; } goto L_001E12A4; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001E12D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E12D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E12D8u) [[unlikely]] return; }
L_001E12D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E15F0; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001E12E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E12ECu);  if (depth < kMaxDepth) unit_0030(c, 218u, depth + 1u); else { c.pc = 0x001E1A90u; return; } if (c.pc != 0x001E12ECu) [[unlikely]] return; }
L_001E12EC:
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 144u), 0u);  if (t) { goto L_001E1348; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1310u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 201u, depth + 1u); else { c.pc = 0x001FD860u; return; } if (c.pc != 0x001E1310u) [[unlikely]] return; }
L_001E1310:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E131Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001E131Cu) [[unlikely]] return; }
L_001E131C:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 184u);  goto L_001E138C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E1388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1340u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E1340u) [[unlikely]] return; }
L_001E1340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1388; } }
L_001E1348:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1358u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001E1358u) [[unlikely]] return; }
L_001E1358:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1364u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001E1364u) [[unlikely]] return; }
L_001E1364:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E1388; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E1388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1388u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E1388u) [[unlikely]] return; }
L_001E1388:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 1;
L_001E138C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1394u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0030(c, 58u, depth + 1u); else { c.pc = 0x001E0640u; return; } if (c.pc != 0x001E1394u) [[unlikely]] return; }
L_001E1394:
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 184u)));  goto L_001E1430; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001E142C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));  goto L_001E13C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] + 12u);  if (t) { goto L_001E13C4; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001E13C4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_001E13D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_001E13D8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E13D8:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  goto L_001E144C; }
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] > 0;  if (t) { goto L_001E13F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1420; } }
L_001E13F0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 188u);  goto L_001E1418; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E140Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E140Cu) [[unlikely]] return; }
L_001E140C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1420; } }
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 1;
L_001E1418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1420u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E1420u) [[unlikely]] return; }
L_001E1420:
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E144C; } }
L_001E142C:
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_001E1430:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 184u)));  goto L_001E1448; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 4;
L_001E1448:
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 1;
L_001E144C:
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 176u)));  goto L_001E148C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E1488; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1474u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E1474u) [[unlikely]] return; }
L_001E1474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1488; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001E1480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1488u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E1488u) [[unlikely]] return; }
L_001E1488:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_001E148C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_001E14AC; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 172u)));
    set32(c.r[2], 0u + 62u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1480u | kUnwind; return; } goto L_001E1480; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001E14AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E14B4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E14B4u) [[unlikely]] return; }
L_001E14B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E15F0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E15F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E14D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E14D8u) [[unlikely]] return; }
L_001E14D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E15F0; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 1;
L_001E14E4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[18], c.r[29].w[0] + 172u);  goto L_001E1578; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21710u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_001E1564; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1508u); set32(c.r[4], c.r[4].w[0] + 21710u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E1508u) [[unlikely]] return; }
L_001E1508:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] + 21710u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 188u)));  if (t) { goto L_001E155C; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E1528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[5].w[0]);  if (t) { goto L_001E1560; } }
L_001E1528:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 188u);  goto L_001E1550; }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1544u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E1544u) [[unlikely]] return; }
L_001E1544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E155C; } }
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 1;
L_001E1550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1558u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E1558u) [[unlikely]] return; }
L_001E1558:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E155C:
    st32((c.r[29].w[0] + 188u), c.r[5].w[0]);
    c.budget -= 1;
L_001E1560:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001E1564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E156Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E156Cu) [[unlikely]] return; }
L_001E156C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E15F0; } }
    set32(c.r[18], c.r[29].w[0] + 172u);
    c.budget -= 1;
L_001E1578:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_001E15E8; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E15E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1590u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E1590u) [[unlikely]] return; }
L_001E1590:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 188u)));  if (t) { goto L_001E15E0; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E15A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[5].w[0]);  if (t) { goto L_001E15E4; } }
L_001E15A8:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[6].d[0] = c.r[18].d[0] + 0ull;  goto L_001E15D0; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E15C4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E15C4u) [[unlikely]] return; }
L_001E15C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E15E0; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001E15D0:
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E15DCu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E15DCu) [[unlikely]] return; }
L_001E15DC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E15E0:
    st32((c.r[29].w[0] + 188u), c.r[5].w[0]);
    c.budget -= 1;
L_001E15E4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001E15E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E15F0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E15F0u) [[unlikely]] return; }
L_001E15F0:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_001E15F4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E113Cu | kUnwind; return; } goto L_001E113C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 1;
L_001E1604:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E1618; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_001E1618:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1634u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E1634u) [[unlikely]] return; }
L_001E1634:
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001E165C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E1658; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1658u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E1658u) [[unlikely]] return; }
L_001E1658:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001E165C:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001E1680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1698u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0022(c, 78u, depth + 1u); else { c.pc = 0x001A8BD0u; return; } if (c.pc != 0x001E1698u) [[unlikely]] return; }
L_001E1698:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10264u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E16B0u); st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 81u, depth + 1u); else { c.pc = 0x001A8C40u; return; } if (c.pc != 0x001E16B0u) [[unlikely]] return; }
L_001E16B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_001E173C; } }
L_001E16B8:
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 32u);  goto L_001E1730; }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E16D0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E16D0u) [[unlikely]] return; }
L_001E16D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E16D8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0030(c, 55u, depth + 1u); else { c.pc = 0x001E05D0u; return; } if (c.pc != 0x001E16D8u) [[unlikely]] return; }
L_001E16D8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 48u)));  goto L_001E1710; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E16FCu); st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E16FCu) [[unlikely]] return; }
L_001E16FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E1764; } }
L_001E1704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E170Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E170Cu) [[unlikely]] return; }
L_001E170C:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_001E1710:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E172C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 44u)));
    set32(c.r[2], 0u + 62u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1704u | kUnwind; return; } goto L_001E1704; }
L_001E172C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_001E1730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1738u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E1738u) [[unlikely]] return; }
L_001E1738:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_001E173C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E16B8u | kUnwind; return; } goto L_001E16B8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1760u); st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E1760u) [[unlikely]] return; }
L_001E1760:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E1764:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E1780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E17A4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001E17A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E17E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E17B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E17B4u) [[unlikely]] return; }
L_001E17B4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E17E0; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001E17D0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E17E0; } }
L_001E17D0:
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E17E0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E17E0u) [[unlikely]] return; }
L_001E17E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 44u);
    set32(c.r[5], c.r[5].w[0] + 21713u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E17F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 341u, depth + 1u); else { c.pc = 0x001A7D30u; return; } if (c.pc != 0x001E17F8u) [[unlikely]] return; }
L_001E17F8:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_001E1830; }
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001E1854; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E1824; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1824u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E1824u) [[unlikely]] return; }
L_001E1824:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1854; } }
L_001E1830:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E1854; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 2;
L_001E1840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E1850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1850u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E1850u) [[unlikely]] return; }
L_001E1850:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E1854:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E1870:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1890u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0022(c, 78u, depth + 1u); else { c.pc = 0x001A8BD0u; return; } if (c.pc != 0x001E1890u) [[unlikely]] return; }
L_001E1890:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E18A4u); st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 78u, depth + 1u); else { c.pc = 0x001A8BD0u; return; } if (c.pc != 0x001E18A4u) [[unlikely]] return; }
L_001E18A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_001E18C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001E18C0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E18FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E18D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E18D0u) [[unlikely]] return; }
L_001E18D0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E18FC; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001E18EC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E18FC; } }
L_001E18EC:
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E18FCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E18FCu) [[unlikely]] return; }
L_001E18FC:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E190Cu); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0022(c, 81u, depth + 1u); else { c.pc = 0x001A8C40u; return; } if (c.pc != 0x001E190Cu) [[unlikely]] return; }
L_001E190C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1918u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 82u, depth + 1u); else { c.pc = 0x001A8C50u; return; } if (c.pc != 0x001E1918u) [[unlikely]] return; }
L_001E1918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 64u)));  if (t) { goto L_001E1A0C; } }
L_001E1920:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 92u);  goto L_001E1988; }
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E1950; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E1950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1950u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E1950u) [[unlikely]] return; }
L_001E1950:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1968u); st32((c.r[29].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E1968u) [[unlikely]] return; }
L_001E1968:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1980u); st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E1980u) [[unlikely]] return; }
L_001E1980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E1A7C; } }
L_001E1988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1990u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x001E1990u) [[unlikely]] return; }
L_001E1990:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_001E19F4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E19BC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E19BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E19BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E19BCu) [[unlikely]] return; }
L_001E19BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E19D4u); st32((c.r[29].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E19D4u) [[unlikely]] return; }
L_001E19D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E19ECu); st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E19ECu) [[unlikely]] return; }
L_001E19EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E1A7C; } }
L_001E19F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E19FCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E19FCu) [[unlikely]] return; }
L_001E19FC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1A08u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E1A08u) [[unlikely]] return; }
L_001E1A08:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 1;
L_001E1A0C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1920u | kUnwind; return; } goto L_001E1920; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1A24u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0022(c, 82u, depth + 1u); else { c.pc = 0x001A8C50u; return; } if (c.pc != 0x001E1A24u) [[unlikely]] return; }
L_001E1A24:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E1A48; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E1A48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1A48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E1A48u) [[unlikely]] return; }
L_001E1A48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1A60u); st32((c.r[29].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E1A60u) [[unlikely]] return; }
L_001E1A60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1A78u); st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E1A78u) [[unlikely]] return; }
L_001E1A78:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E1A7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001E1A90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001E1AF8; } }
L_001E1AAC:
    c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001E1B08; }
    c.r[1].d[0] = c.r[3].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E1AEC; } }
    set32(c.r[2], c.r[3].w[0] - 48u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1AE4u); set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E1AE4u) [[unlikely]] return; }
L_001E1AE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  if (t) { goto L_001E1AFC; } }
L_001E1AEC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1B08; } }
L_001E1AF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_001E1AFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0] + 12u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1AACu | kUnwind; return; } goto L_001E1AAC; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E1B08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E1B20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[22] = 0u;
    c.f[21] = c.r[2].w[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[22];  if (t) { goto L_001E1C14; } }
L_001E1B50:
    c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 46u);  goto L_001E1BD4; }
    c.r[1].d[0] = c.r[3].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E1BD0; } }
    set32(c.r[2], c.r[3].w[0] - 48u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);  goto L_001E1BBC; }
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[22] = fp::ee::add(c.fcr31, c.f[22], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::ee::div(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1C08; } }
L_001E1BBC:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[22] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_001E1C08; } }
L_001E1BD0:
    set32(c.r[2], 0u + 46u);
    c.budget -= 1;
L_001E1BD4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[0] = c.f[22];  goto L_001E1C24; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_001E1C04; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1BFCu); set32(c.r[4], c.r[4].w[0] + 21716u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001E1BFCu) [[unlikely]] return; }
L_001E1BFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[22];  if (t) { goto L_001E1C24; } }
L_001E1C04:
    c.f[20] = c.r[2].w[0];
    c.budget -= 1;
L_001E1C08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1C14u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E1C14u) [[unlikely]] return; }
L_001E1C14:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1B50u | kUnwind; return; } goto L_001E1B50; }
    c.f[0] = c.f[22];
    c.budget -= 1;
L_001E1C24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E1C40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1C64u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E1C64u) [[unlikely]] return; }
L_001E1C64:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E1C98; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E1C98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1C98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E1C98u) [[unlikely]] return; }
L_001E1C98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21731u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_001E1CE8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1CB4u); set32(c.r[4], c.r[4].w[0] + 21731u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E1CB4u) [[unlikely]] return; }
L_001E1CB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 21731u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E1CE4; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[16].w[0] + 8u);  goto L_001E1CD8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1CE4; } }
L_001E1CD8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1CE4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E1CE4u) [[unlikely]] return; }
L_001E1CE4:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001E1CE8:
    c.f[20] = ld32((c.r[17].w[0] + 208u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1CF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E1CF4u) [[unlikely]] return; }
L_001E1CF4:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E1D28; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E1D28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1D28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E1D28u) [[unlikely]] return; }
L_001E1D28:
    st32((c.r[18].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[17].w[0] + 212u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1D38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E1D38u) [[unlikely]] return; }
L_001E1D38:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E1D6C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E1D6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1D6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E1D6Cu) [[unlikely]] return; }
L_001E1D6C:
    st32((c.r[18].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[17].w[0] + 216u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1D7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E1D7Cu) [[unlikely]] return; }
L_001E1D7C:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E1DB0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E1DB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1DB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E1DB0u) [[unlikely]] return; }
L_001E1DB0:
    st32((c.r[18].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[17].w[0] + 224u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1DC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E1DC0u) [[unlikely]] return; }
L_001E1DC0:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E1DF4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E1DF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1DF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E1DF4u) [[unlikely]] return; }
L_001E1DF4:
    st32((c.r[18].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[17].w[0] + 228u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1E04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E1E04u) [[unlikely]] return; }
L_001E1E04:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E1E38; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E1E38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1E38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E1E38u) [[unlikely]] return; }
L_001E1E38:
    st32((c.r[18].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[17].w[0] + 240u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1E48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E1E48u) [[unlikely]] return; }
L_001E1E48:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E1E7C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E1E7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1E7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E1E7Cu) [[unlikely]] return; }
L_001E1E7C:
    st32((c.r[18].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[17].w[0] + 244u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1E8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E1E8Cu) [[unlikely]] return; }
L_001E1E8C:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E1EC0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E1EC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1EC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E1EC0u) [[unlikely]] return; }
L_001E1EC0:
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[19], ld32((c.r[17].w[0] + 264u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1ED0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E1ED0u) [[unlikely]] return; }
L_001E1ED0:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E1F00; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E1F00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1F00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E1F00u) [[unlikely]] return; }
L_001E1F00:
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[19], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1F10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E1F10u) [[unlikely]] return; }
L_001E1F10:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E1F40; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E1F40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1F40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E1F40u) [[unlikely]] return; }
L_001E1F40:
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[19], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1F50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E1F50u) [[unlikely]] return; }
L_001E1F50:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E1F80; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E1F80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1F80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E1F80u) [[unlikely]] return; }
L_001E1F80:
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[19], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1F90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E1F90u) [[unlikely]] return; }
L_001E1F90:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E1FC0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E1FC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1FC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E1FC0u) [[unlikely]] return; }
L_001E1FC0:
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[19], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1FD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E1FD0u) [[unlikely]] return; }
L_001E1FD0:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E2000; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E2000; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2000u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E2000u) [[unlikely]] return; }
L_001E2000:
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[19], ld32((c.r[17].w[0] + 272u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2010u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E2010u) [[unlikely]] return; }
L_001E2010:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E2040; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E2040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2040u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E2040u) [[unlikely]] return; }
L_001E2040:
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[19], ld32((c.r[17].w[0] + 280u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2050u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E2050u) [[unlikely]] return; }
L_001E2050:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E2080; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E2080; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2080u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E2080u) [[unlikely]] return; }
L_001E2080:
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[19], ld32((c.r[17].w[0] + 284u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2090u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E2090u) [[unlikely]] return; }
L_001E2090:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E20C0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E20C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E20C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E20C0u) [[unlikely]] return; }
L_001E20C0:
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[19], ld32((c.r[17].w[0] + 192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E20D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E20D0u) [[unlikely]] return; }
L_001E20D0:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E2100; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E2100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2100u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E2100u) [[unlikely]] return; }
L_001E2100:
    st32((c.r[18].w[0] + 8u), 0u);
    c.r[17].d[0] = ld16((c.r[17].w[0] + 292u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2110u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E2110u) [[unlikely]] return; }
L_001E2110:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E2140; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001E2140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2140u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E2140u) [[unlikely]] return; }
L_001E2140:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001E2170:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 40u), c.r[4].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2194u); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001E2194u) [[unlikely]] return; }
L_001E2194:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E21A0u); set32(c.r[5], c.r[29].w[0] + 312u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E21A0u) [[unlikely]] return; }
L_001E21A0:
    c.f[0] = ld32((c.r[29].w[0] + 308u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], c.r[29].w[0] + 296u);
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[16].w[0] + 208u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E21C4u); st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E21C4u) [[unlikely]] return; }
L_001E21C4:
    set32(c.r[3], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E21E0u); st32((c.r[29].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E21E0u) [[unlikely]] return; }
L_001E21E0:
    c.f[0] = ld32((c.r[29].w[0] + 292u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], c.r[29].w[0] + 280u);
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[16].w[0] + 212u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2204u); st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E2204u) [[unlikely]] return; }
L_001E2204:
    set32(c.r[3], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[2], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2220u); st32((c.r[29].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E2220u) [[unlikely]] return; }
L_001E2220:
    c.f[0] = ld32((c.r[29].w[0] + 276u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], c.r[29].w[0] + 264u);
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[16].w[0] + 232u), c.f[0]);
    st32((c.r[16].w[0] + 216u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2248u); st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E2248u) [[unlikely]] return; }
L_001E2248:
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2264u); st32((c.r[29].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E2264u) [[unlikely]] return; }
L_001E2264:
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], c.r[29].w[0] + 248u);
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[16].w[0] + 224u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2288u); st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E2288u) [[unlikely]] return; }
L_001E2288:
    set32(c.r[3], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E22A4u); st32((c.r[29].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E22A4u) [[unlikely]] return; }
L_001E22A4:
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], c.r[29].w[0] + 232u);
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[16].w[0] + 228u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E22C8u); st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E22C8u) [[unlikely]] return; }
L_001E22C8:
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E22E4u); st32((c.r[29].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E22E4u) [[unlikely]] return; }
L_001E22E4:
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], c.r[29].w[0] + 216u);
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[16].w[0] + 240u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2308u); st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E2308u) [[unlikely]] return; }
L_001E2308:
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2324u); st32((c.r[29].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E2324u) [[unlikely]] return; }
L_001E2324:
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], c.r[29].w[0] + 200u);
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[16].w[0] + 244u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2348u); st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E2348u) [[unlikely]] return; }
L_001E2348:
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2364u); st32((c.r[29].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E2364u) [[unlikely]] return; }
L_001E2364:
    set32(c.r[3], ld32((c.r[29].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], c.r[29].w[0] + 184u);
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[16].w[0] + 264u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2388u); st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E2388u) [[unlikely]] return; }
L_001E2388:
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E23A4u); st32((c.r[29].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E23A4u) [[unlikely]] return; }
L_001E23A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[29].w[0] + 312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E23B8u); st32((c.r[16].w[0] + 160u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E23B8u) [[unlikely]] return; }
L_001E23B8:
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E23D4u); st32((c.r[29].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E23D4u) [[unlikely]] return; }
L_001E23D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[29].w[0] + 312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E23E8u); st32((c.r[16].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E23E8u) [[unlikely]] return; }
L_001E23E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2404u); st32((c.r[29].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E2404u) [[unlikely]] return; }
L_001E2404:
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[5], c.r[29].w[0] + 312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2418u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E2418u) [[unlikely]] return; }
L_001E2418:
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2434u); st32((c.r[29].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E2434u) [[unlikely]] return; }
L_001E2434:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[5], c.r[29].w[0] + 312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2448u); st32((c.r[16].w[0] + 172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E2448u) [[unlikely]] return; }
L_001E2448:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2464u); st32((c.r[29].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E2464u) [[unlikely]] return; }
L_001E2464:
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2478u); st32((c.r[16].w[0] + 272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E2478u) [[unlikely]] return; }
L_001E2478:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2494u); st32((c.r[29].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E2494u) [[unlikely]] return; }
L_001E2494:
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], c.r[29].w[0] + 312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E24A8u); st32((c.r[16].w[0] + 280u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E24A8u) [[unlikely]] return; }
L_001E24A8:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E24C4u); st32((c.r[29].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E24C4u) [[unlikely]] return; }
L_001E24C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[29].w[0] + 312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E24D8u); st32((c.r[16].w[0] + 284u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E24D8u) [[unlikely]] return; }
L_001E24D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E24F4u); st32((c.r[29].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E24F4u) [[unlikely]] return; }
L_001E24F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[5], c.r[29].w[0] + 312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2508u); st32((c.r[16].w[0] + 192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E2508u) [[unlikely]] return; }
L_001E2508:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[5], c.r[29].w[0] + 312u);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2524u); st32((c.r[29].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E2524u) [[unlikely]] return; }
L_001E2524:
    set32(c.r[4], ld32((c.r[16].w[0] + 292u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = ld16((c.r[29].w[0] + 52u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[16].w[0] + 292u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_001E2550:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[2], 0u + 512u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2570u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x001E2570u) [[unlikely]] return; }
L_001E2570:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2580u); c.r[4].d[0] = c.r[2].d[0] << 32;  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x001E2580u) [[unlikely]] return; }
L_001E2580:
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2594u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001E2594u) [[unlikely]] return; }
L_001E2594:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001E25AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 160u)));  if (t) { goto L_001E25CC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E25AC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_001E25CC; }
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 164u)));  if (t) { goto L_001E25D0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E25CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 1;
L_001E25D0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30512u)));  goto L_001E25F4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E25F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E25F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E25F0u) [[unlikely]] return; }
L_001E25F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30512u)));
    c.budget -= 1;
L_001E25F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_001E2608; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 5u);  if (t) { goto L_001E267C; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_001E2608:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2614u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001E2614u) [[unlikely]] return; }
L_001E2614:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001E262C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 128u)));  if (t) { goto L_001E264C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E262C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_001E264C; }
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 132u)));  if (t) { goto L_001E2650; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E264C:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 1;
L_001E2650:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E2670; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E2670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2670u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E2670u) [[unlikely]] return; }
L_001E2670:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[5], 0u + 2u);  goto L_001E2680; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E267C:
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_001E2680:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 1u);  goto L_001E27F0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_001E26CC; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E27F0; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_001E26BC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001E26BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2748; } }
L_001E26BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E27F0; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_001E26CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E26D4u); set32(c.r[6], 0u + 18u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001E26D4u) [[unlikely]] return; }
L_001E26D4:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001E26EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 96u)));  if (t) { goto L_001E270C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E26EC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_001E270C; }
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 100u)));  if (t) { goto L_001E2710; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E270C:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_001E2710:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  goto L_001E27F0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E2730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2730u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E2730u) [[unlikely]] return; }
L_001E2730:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E27F0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E27F0; } }
L_001E2748:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], 0u + 5u);  goto L_001E275C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E27F0; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_001E275C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_001E27F0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_001E277C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E27F0; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_001E277C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2784u); set32(c.r[6], 0u + 18u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001E2784u) [[unlikely]] return; }
L_001E2784:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001E279C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 64u)));  if (t) { goto L_001E27BC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E279C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_001E27BC; }
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 68u)));  if (t) { goto L_001E27C0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E27BC:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 1;
L_001E27C0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  goto L_001E27F0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E27E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E27E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E27E0u) [[unlikely]] return; }
L_001E27E0:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E27F0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E27F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001E2810:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2824u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0030(c, 299u, depth + 1u); else { c.pc = 0x001E2550u; return; } if (c.pc != 0x001E2824u) [[unlikely]] return; }
L_001E2824:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_001E2910; }
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E283Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001E283Cu) [[unlikely]] return; }
L_001E283C:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001E2850; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 112u)));  if (t) { goto L_001E2864; } }
L_001E2850:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_001E2864; }
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_001E2864:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E2888; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E2888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2888u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E2888u) [[unlikely]] return; }
L_001E2888:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001E290C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30512u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_001E28A8; }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001E2974; } }
L_001E28A8:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E28B4u); set32(c.r[6], 0u + 13u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001E28B4u) [[unlikely]] return; }
L_001E28B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001E28CC; }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E28E0; } }
L_001E28CC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E28DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[29].w[0] + 80u));  if (t) { goto L_001E28E0; } }
L_001E28DC:
    c.f[20] = 0u;
    c.budget -= 1;
L_001E28E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.f[0] = c.f[20];  goto L_001E2970; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E296C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2904u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E2904u) [[unlikely]] return; }
L_001E2904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E296C; } }
L_001E290C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_001E2910:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E291Cu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001E291Cu) [[unlikely]] return; }
L_001E291C:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001E2934; }
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E2948; } }
L_001E2934:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E2944; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[29].w[0] + 48u));  if (t) { goto L_001E2948; } }
L_001E2944:
    c.f[20] = 0u;
    c.budget -= 1;
L_001E2948:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E296C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E296C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E296Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E296Cu) [[unlikely]] return; }
L_001E296C:
    c.f[0] = c.f[20];
    c.budget -= 1;
L_001E2970:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001E2974:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001E2990:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E29A4u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0030(c, 299u, depth + 1u); else { c.pc = 0x001E2550u; return; } if (c.pc != 0x001E29A4u) [[unlikely]] return; }
L_001E29A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_001E2A94; }
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E29BCu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001E29BCu) [[unlikely]] return; }
L_001E29BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001E29D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 112u)));  if (t) { goto L_001E29E4; } }
L_001E29D0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_001E29E4; }
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_001E29E4:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E2A08; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E2A08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2A08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E2A08u) [[unlikely]] return; }
L_001E2A08:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001E2A90; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30512u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_001E2A2C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001E2B10; } }
L_001E2A2C:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2A38u); set32(c.r[6], 0u + 14u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001E2A38u) [[unlikely]] return; }
L_001E2A38:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001E2A50; }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E2A64; } }
L_001E2A50:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E2A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[29].w[0] + 80u));  if (t) { goto L_001E2A64; } }
L_001E2A60:
    c.f[20] = 0u;
    c.budget -= 1;
L_001E2A64:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 32692u));  goto L_001E2AF4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E2AF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2A88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E2A88u) [[unlikely]] return; }
L_001E2A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2AF0; } }
L_001E2A90:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_001E2A94:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2AA0u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001E2AA0u) [[unlikely]] return; }
L_001E2AA0:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001E2AB8; }
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E2ACC; } }
L_001E2AB8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E2AC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[29].w[0] + 48u));  if (t) { goto L_001E2ACC; } }
L_001E2AC8:
    c.f[20] = 0u;
    c.budget -= 1;
L_001E2ACC:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E2AF0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E2AF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2AF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E2AF0u) [[unlikely]] return; }
L_001E2AF0:
    c.f[0] = ld32((c.r[28].w[0] - 32692u));
    c.budget -= 1;
L_001E2AF4:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = c.f[20];  goto L_001E2B0C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.f[0] = c.f[20];
    c.budget -= 3;
L_001E2B0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001E2B10:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001E2B20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2B30u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0030(c, 299u, depth + 1u); else { c.pc = 0x001E2550u; return; } if (c.pc != 0x001E2B30u) [[unlikely]] return; }
L_001E2B30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 32u);  goto L_001E2BB0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30512u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_001E2B4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E2C10; } }
L_001E2B4C:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2B58u); set32(c.r[6], 0u + 17u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001E2B58u) [[unlikely]] return; }
L_001E2B58:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001E2B6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 64u)));  if (t) { goto L_001E2B80; } }
L_001E2B6C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E2B80; }
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_001E2B80:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_001E2BA8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E2BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2BA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E2BA8u) [[unlikely]] return; }
L_001E2BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E2C10; } }
L_001E2BB0:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2BBCu); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001E2BBCu) [[unlikely]] return; }
L_001E2BBC:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001E2BD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_001E2BE4; } }
L_001E2BD0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E2BE4; }
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_001E2BE4:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_001E2C0C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E2C0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2C0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E2C0Cu) [[unlikely]] return; }
L_001E2C0C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E2C10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001E2C20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2C30u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0030(c, 299u, depth + 1u); else { c.pc = 0x001E2550u; return; } if (c.pc != 0x001E2C30u) [[unlikely]] return; }
L_001E2C30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 32u);  goto L_001E2CB8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30512u)));
    c.budget -= 1;
L_001E2C3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_001E2C54; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001E2D34; } }
L_001E2C54:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2C60u); set32(c.r[6], 0u + 15u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001E2C60u) [[unlikely]] return; }
L_001E2C60:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001E2C78; }
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E2C8C; } }
L_001E2C78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E2C88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[29].w[0] + 64u));  if (t) { goto L_001E2C8C; } }
L_001E2C88:
    c.f[20] = 0u;
    c.budget -= 1;
L_001E2C8C:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 32692u));  goto L_001E2D18; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E2D14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2CB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E2CB0u) [[unlikely]] return; }
L_001E2CB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2D14; } }
L_001E2CB8:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2CC4u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001E2CC4u) [[unlikely]] return; }
L_001E2CC4:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001E2CDC; }
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E2CF0; } }
L_001E2CDC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E2CEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[29].w[0] + 32u));  if (t) { goto L_001E2CF0; } }
L_001E2CEC:
    c.f[20] = 0u;
    c.budget -= 1;
L_001E2CF0:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E2D14; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E2D14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2D14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E2D14u) [[unlikely]] return; }
L_001E2D14:
    c.f[0] = ld32((c.r[28].w[0] - 32692u));
    c.budget -= 1;
L_001E2D18:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = c.f[20];  goto L_001E2D30; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.f[0] = c.f[20];
    c.budget -= 3;
L_001E2D30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001E2D34:
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001E2D40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2D50u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0030(c, 299u, depth + 1u); else { c.pc = 0x001E2550u; return; } if (c.pc != 0x001E2D50u) [[unlikely]] return; }
L_001E2D50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 32u);  goto L_001E2DD8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30512u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_001E2D74; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001E2E54; } }
L_001E2D74:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2D80u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001E2D80u) [[unlikely]] return; }
L_001E2D80:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001E2D98; }
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E2DAC; } }
L_001E2D98:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E2DA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[29].w[0] + 64u));  if (t) { goto L_001E2DAC; } }
L_001E2DA8:
    c.f[20] = 0u;
    c.budget -= 1;
L_001E2DAC:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 32692u));  goto L_001E2E38; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E2E34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2DD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E2DD0u) [[unlikely]] return; }
L_001E2DD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E2E34; } }
L_001E2DD8:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2DE4u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x001E2DE4u) [[unlikely]] return; }
L_001E2DE4:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001E2DFC; }
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E2E10; } }
L_001E2DFC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E2E0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[29].w[0] + 32u));  if (t) { goto L_001E2E10; } }
L_001E2E0C:
    c.f[20] = 0u;
    c.budget -= 1;
L_001E2E10:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E2E34; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E2E34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2E34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E2E34u) [[unlikely]] return; }
L_001E2E34:
    c.f[0] = ld32((c.r[28].w[0] - 32692u));
    c.budget -= 1;
L_001E2E38:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = c.f[20];  goto L_001E2E50; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.f[0] = c.f[20];
    c.budget -= 3;
L_001E2E50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001E2E54:
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001E2E60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30512u), c.r[4].w[0]);  c.pc = t; return; }
L_001E2E70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30512u)));  c.pc = t; return; }
L_001E2E80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 274u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2E98u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001E2E98u) [[unlikely]] return; }
L_001E2E98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 14448u);
    set32(c.r[4], c.r[16].w[0] + 152u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2EB8u); st32((c.r[16].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_003B(c, 216u, depth + 1u); else { c.pc = 0x0020DFF0u; return; } if (c.pc != 0x001E2EB8u) [[unlikely]] return; }
L_001E2EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2EC0u); set32(c.r[4], c.r[16].w[0] + 320u);  if (depth < kMaxDepth) unit_003C(c, 44u, depth + 1u); else { c.pc = 0x00210980u; return; } if (c.pc != 0x001E2EC0u) [[unlikely]] return; }
L_001E2EC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2ECCu); st32((c.r[16].w[0] + 952u), 0u);  if (depth < kMaxDepth) unit_0030(c, 362u, depth + 1u); else { c.pc = 0x001E2FF0u; return; } if (c.pc != 0x001E2ECCu) [[unlikely]] return; }
L_001E2ECC:
    set32(c.r[4], c.r[16].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2ED8u); set32(c.r[5], c.r[16].w[0] + 152u);  if (depth < kMaxDepth) unit_003C(c, 64u, depth + 1u); else { c.pc = 0x00210D10u; return; } if (c.pc != 0x001E2ED8u) [[unlikely]] return; }
L_001E2ED8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2EE8u); set32(c.r[5], c.r[5].w[0] + 21744u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001E2EE8u) [[unlikely]] return; }
L_001E2EE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47530000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 19789ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E2F10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E2FD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 14448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2F3Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0030(c, 367u, depth + 1u); else { c.pc = 0x001E30C0u; return; } if (c.pc != 0x001E2F3Cu) [[unlikely]] return; }
L_001E2F3C:
    set32(c.r[2], c.r[17].w[0] + 952u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 320u);  goto L_001E2F70; }
    set32(c.r[4], ld32((c.r[17].w[0] + 952u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E2F6C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E2F6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2F6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E2F6Cu) [[unlikely]] return; }
L_001E2F6C:
    set32(c.r[4], c.r[17].w[0] + 320u);
    c.budget -= 1;
L_001E2F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2F78u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003C(c, 46u, depth + 1u); else { c.pc = 0x002109D0u; return; } if (c.pc != 0x001E2F78u) [[unlikely]] return; }
L_001E2F78:
    set32(c.r[4], c.r[17].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2F84u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003B(c, 219u, depth + 1u); else { c.pc = 0x0020E110u; return; } if (c.pc != 0x001E2F84u) [[unlikely]] return; }
L_001E2F84:
    set32(c.r[2], c.r[17].w[0] + 148u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001E2FB8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E2FB4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E2FB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2FB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E2FB4u) [[unlikely]] return; }
L_001E2FB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E2FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2FC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001E2FC0u) [[unlikely]] return; }
L_001E2FC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001E2FDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2FD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001E2FD8u) [[unlikely]] return; }
L_001E2FD8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E2FDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E2FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E3024; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E3024; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3024u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E3024u) [[unlikely]] return; }
L_001E3024:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21919u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), 0u);  goto L_001E3074; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3040u); set32(c.r[4], c.r[4].w[0] + 21919u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E3040u) [[unlikely]] return; }
L_001E3040:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 21919u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E3070; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[16].w[0] + 148u);  goto L_001E3064; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3070; } }
L_001E3064:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3070u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E3070u) [[unlikely]] return; }
L_001E3070:
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 1;
L_001E3074:
    st32((c.r[16].w[0] + 672u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 676u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 936u), 0u);
    st32((c.r[16].w[0] + 944u), 0u);
    st32((c.r[16].w[0] + 948u), 0u);
    st32((c.r[16].w[0] + 956u), 0u);
    st32((c.r[16].w[0] + 960u), 0u);
    st32((c.r[16].w[0] + 964u), 0u);
    st32((c.r[16].w[0] + 976u), 0u);
    st32((c.r[16].w[0] + 984u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 992u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E30B0u); st32((c.r[16].w[0] + 988u), 0u);  if (depth < kMaxDepth) unit_0030(c, 377u, depth + 1u); else { c.pc = 0x001E3260u; return; } if (c.pc != 0x001E30B0u) [[unlikely]] return; }
L_001E30B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E30C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E30D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 379u, depth + 1u); else { c.pc = 0x001E3290u; return; } if (c.pc != 0x001E30D4u) [[unlikely]] return; }
L_001E30D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 956u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 976u)));  goto L_001E30F4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E30ECu); set32(c.r[5], c.r[5].w[0] + 12576u);  if (depth < kMaxDepth) unit_0008(c, 138u, depth + 1u); else { c.pc = 0x00141BA0u; return; } if (c.pc != 0x001E30ECu) [[unlikely]] return; }
L_001E30EC:
    st32((c.r[16].w[0] + 956u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 976u)));
    c.budget -= 2;
L_001E30F4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001E310C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3104u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x001E3104u) [[unlikely]] return; }
L_001E3104:
    st32((c.r[16].w[0] + 976u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_001E310C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E3120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E3180; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001E316C; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E3168; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E3168; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3168u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E3168u) [[unlikely]] return; }
L_001E3168:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001E316C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001E3184; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3180u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001E3180u) [[unlikely]] return; }
L_001E3180:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E3184:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E31A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 956u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E323C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001E3220; } }
L_001E31CC:
    set32(c.r[3], ld32((c.r[18].w[0] + 956u)));
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[4].w[0] << 2);
    set32(c.r[19], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_001E3204; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001E3200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3200u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E3200u) [[unlikely]] return; }
L_001E3200:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_001E3204:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 956u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 956u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 7;
L_001E3220:
    set32(c.r[4], ld32((c.r[18].w[0] + 960u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 964u)));
    set32(c.r[4], c.r[4].w[0] + 2u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E31CCu | kUnwind; return; } goto L_001E31CC; }
L_001E323C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E3260:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E3264:
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[5].w[0] + 680u), 0u);
    c.r[3].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    st32((c.r[5].w[0] + 684u), 0u);
    st32((c.r[5].w[0] + 688u), 0u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[5].w[0] + 692u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3264u | kUnwind; return; } goto L_001E3264; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 936u), 0u);  c.pc = t; return; }
L_001E3290:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E32ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001E32ACu) [[unlikely]] return; }
L_001E32AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001E32F4; }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 2;
L_001E32C0:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 680u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001E32DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E32D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 334u, depth + 1u); else { c.pc = 0x001FBEA0u; return; } if (c.pc != 0x001E32D8u) [[unlikely]] return; }
L_001E32D8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001E32DC:
    c.r[2].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E32C0u | kUnwind; return; } goto L_001E32C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E32F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 377u, depth + 1u); else { c.pc = 0x001E3260u; return; } if (c.pc != 0x001E32F0u) [[unlikely]] return; }
L_001E32F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001E32F4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E3310:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E3320:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 320u);  [[clang::musttail]] return unit_003A(c, 414u, depth); }
L_001E3330:
    set32(c.r[29], c.r[29].w[0] - 976u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 204u), c.r[7].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3378u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0030(c, 374u, depth + 1u); else { c.pc = 0x001E31A0u; return; } if (c.pc != 0x001E3378u) [[unlikely]] return; }
L_001E3378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3380u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 379u, depth + 1u); else { c.pc = 0x001E3290u; return; } if (c.pc != 0x001E3380u) [[unlikely]] return; }
L_001E3380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3388u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 377u, depth + 1u); else { c.pc = 0x001E3260u; return; } if (c.pc != 0x001E3388u) [[unlikely]] return; }
L_001E3388:
    set32(c.r[4], ld32((c.r[20].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E33AC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E33AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E33ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E33ACu) [[unlikely]] return; }
L_001E33AC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[20].w[0] + 148u), 0u);  goto L_001E3408; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3404; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E33C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E33C8u) [[unlikely]] return; }
L_001E33C8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E33F8; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001E33E8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E33F8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E33E8:
    set32(c.r[4], c.r[20].w[0] + 148u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E33F8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E33F8u) [[unlikely]] return; }
L_001E33F8:
    st32((c.r[20].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 944u);  if (t) { goto L_001E340C; } }
L_001E3404:
    st32((c.r[20].w[0] + 148u), 0u);
    c.budget -= 1;
L_001E3408:
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 1;
L_001E340C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3414u);  if (depth < kMaxDepth) unit_0022(c, 78u, depth + 1u); else { c.pc = 0x001A8BD0u; return; } if (c.pc != 0x001E3414u) [[unlikely]] return; }
L_001E3414:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 944u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    set32(c.r[5], c.r[20].w[0] + 148u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E342Cu); st32((c.r[29].w[0] + 944u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 81u, depth + 1u); else { c.pc = 0x001A8C40u; return; } if (c.pc != 0x001E342Cu) [[unlikely]] return; }
L_001E342C:
    set32(c.r[3], ld32((c.r[20].w[0] + 960u)));
    set32(c.r[4], c.r[29].w[0] + 912u);
    set32(c.r[2], ld32((c.r[20].w[0] + 964u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_001E343C:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E344Cu); mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]); c.r[5].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_0031(c, 111u, depth + 1u); else { c.pc = 0x001E51E0u; return; } if (c.pc != 0x001E344Cu) [[unlikely]] return; }
L_001E344C:
    set32(c.r[30], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), 0u);  if (t) { [[clang::musttail]] return unit_0031(c, 93u, depth); } }
    set32(c.r[3], ld32((c.r[29].w[0] + 960u)));
    c.budget -= 1;
L_001E345C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 956u)));  goto L_001E3838; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 960u)));  goto L_001E354C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 956u)));  goto L_001E3488; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 176u)));  if (t) { [[clang::musttail]] return unit_0031(c, 94u, depth); } }
    set32(c.r[4], ld32((c.r[20].w[0] + 956u)));
    c.budget -= 1;
L_001E3488:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E34D8; }
    set32(c.r[2], ld32((c.r[20].w[0] + 960u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E34B4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 964u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_001E34C4; }
L_001E34B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E34D8; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001E34C4:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001E34D8:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 956u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_001E3530; }
    set32(c.r[2], ld32((c.r[20].w[0] + 960u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E350C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 964u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_001E351C; }
L_001E350C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3530; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001E351C:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001E3530:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] | 16384ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_0031(c, 93u, depth); } }
    set32(c.r[2], ld32((c.r[20].w[0] + 960u)));
    c.budget -= 1;
L_001E354C:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E3574; } }
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 956u)));  goto L_001E3638; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E356Cu); set32(c.r[5], c.r[29].w[0] + 956u);  if (depth < kMaxDepth) unit_0031(c, 99u, depth + 1u); else { c.pc = 0x001E5070u; return; } if (c.pc != 0x001E356Cu) [[unlikely]] return; }
L_001E356C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E3634; } }
L_001E3574:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3584u); set32(c.r[5], c.r[5].w[0] + 22306u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001E3584u) [[unlikely]] return; }
L_001E3584:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E35A8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E35A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E35A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E35A8u) [[unlikely]] return; }
L_001E35A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22323u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_001E3608; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E35C4u); set32(c.r[4], c.r[4].w[0] + 22323u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E35C4u) [[unlikely]] return; }
L_001E35C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 22323u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E35F8; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001E35EC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E35F8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E35EC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E35F8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E35F8u) [[unlikely]] return; }
L_001E35F8:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 912u);  if (t) { goto L_001E360C; } }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_001E3608:
    set32(c.r[4], c.r[29].w[0] + 912u);
    c.budget -= 1;
L_001E360C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3614u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 113u, depth + 1u); else { c.pc = 0x001E5220u; return; } if (c.pc != 0x001E3614u) [[unlikely]] return; }
L_001E3614:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 944u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E362Cu); st32((c.r[29].w[0] + 944u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E362Cu) [[unlikely]] return; }
L_001E362C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0031(c, 98u, depth); } }
L_001E3634:
    set32(c.r[4], ld32((c.r[20].w[0] + 956u)));
    c.budget -= 1;
L_001E3638:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[21], c.r[29].w[0] + 956u);  if (t) { goto L_001E3664; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 960u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_001E3688; }
    set32(c.r[2], ld32((c.r[20].w[0] + 964u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_001E3674; }
L_001E3664:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3688; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001E3674:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001E3688:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_001E36F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E36F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E36A4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E36A4u) [[unlikely]] return; }
L_001E36A4:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[5], ld32((c.r[16].w[0])));  if (t) { goto L_001E36F4; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001E36BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[5].w[0]);  if (t) { goto L_001E36F8; } }
L_001E36BC:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[6].d[0] = c.r[21].d[0] + 0ull;  goto L_001E36E4; }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E36D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E36D8u) [[unlikely]] return; }
L_001E36D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E36F4; } }
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_001E36E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E36F0u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 65u, depth + 1u); else { c.pc = 0x001A8960u; return; } if (c.pc != 0x001E36F0u) [[unlikely]] return; }
L_001E36F0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E36F4:
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_001E36F8:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 956u)));  goto L_001E37C0; }
    set32(c.r[4], ld32((c.r[20].w[0] + 956u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E3754; }
    set32(c.r[2], ld32((c.r[20].w[0] + 960u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E3730; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 964u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_001E3740; }
L_001E3730:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3754; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001E3740:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001E3754:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 956u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001E37AC; }
    set32(c.r[2], ld32((c.r[20].w[0] + 960u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E3788; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 964u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_001E3798; }
L_001E3788:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E37AC; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001E3798:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001E37AC:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E381C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 956u)));
    c.budget -= 1;
L_001E37C0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_001E3810; }
    set32(c.r[2], ld32((c.r[20].w[0] + 960u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E37EC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 964u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_001E37FC; }
L_001E37EC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3810; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001E37FC:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001E3810:
    set32(c.r[4], c.r[29].w[0] + 912u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E381Cu);  if (depth < kMaxDepth) unit_0031(c, 117u, depth + 1u); else { c.pc = 0x001E52A0u; return; } if (c.pc != 0x001E381Cu) [[unlikely]] return; }
L_001E381C:
    set32(c.r[4], c.r[29].w[0] + 944u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E382Cu); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E382Cu) [[unlikely]] return; }
L_001E382C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0031(c, 93u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 956u)));
    c.budget -= 1;
L_001E3838:
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 956u)));  [[clang::musttail]] return unit_0031(c, 50u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E384Cu); set32(c.r[4], c.r[29].w[0] + 880u);  if (depth < kMaxDepth) unit_0022(c, 78u, depth + 1u); else { c.pc = 0x001A8BD0u; return; } if (c.pc != 0x001E384Cu) [[unlikely]] return; }
L_001E384C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 880u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    set32(c.r[5], c.r[29].w[0] + 944u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3864u); st32((c.r[29].w[0] + 880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 82u, depth + 1u); else { c.pc = 0x001A8C50u; return; } if (c.pc != 0x001E3864u) [[unlikely]] return; }
L_001E3864:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3874u); set32(c.r[5], c.r[5].w[0] + 22340u);  if (depth < kMaxDepth) unit_0030(c, 197u, depth + 1u); else { c.pc = 0x001E1870u; return; } if (c.pc != 0x001E3874u) [[unlikely]] return; }
L_001E3874:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3AE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3884u); set32(c.r[4], c.r[29].w[0] + 944u);  if (depth < kMaxDepth) unit_0030(c, 221u, depth + 1u); else { c.pc = 0x001E1B20u; return; } if (c.pc != 0x001E3884u) [[unlikely]] return; }
L_001E3884:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.f[21] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E38A0u); set32(c.r[5], c.r[5].w[0] + 22346u);  if (depth < kMaxDepth) unit_0030(c, 197u, depth + 1u); else { c.pc = 0x001E1870u; return; } if (c.pc != 0x001E38A0u) [[unlikely]] return; }
L_001E38A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 944u);  goto L_001E3984; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E38B8u); set32(c.r[5], c.r[5].w[0] + 22348u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001E38B8u) [[unlikely]] return; }
L_001E38B8:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E38DC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E38DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E38DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E38DCu) [[unlikely]] return; }
L_001E38DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22363u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_001E393C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E38F8u); set32(c.r[4], c.r[4].w[0] + 22363u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E38F8u) [[unlikely]] return; }
L_001E38F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 22363u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E392C; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001E3920; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E392C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E3920:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E392Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E392Cu) [[unlikely]] return; }
L_001E392C:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E393C; } }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_001E393C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 880u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3954u); st32((c.r[29].w[0] + 880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E3954u) [[unlikely]] return; }
L_001E3954:
    set32(c.r[4], c.r[29].w[0] + 912u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3960u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 113u, depth + 1u); else { c.pc = 0x001E5220u; return; } if (c.pc != 0x001E3960u) [[unlikely]] return; }
L_001E3960:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 944u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3978u); st32((c.r[29].w[0] + 944u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E3978u) [[unlikely]] return; }
L_001E3978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0031(c, 98u, depth); } }
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 1;
L_001E3984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E398Cu);  if (depth < kMaxDepth) unit_0030(c, 221u, depth + 1u); else { c.pc = 0x001E1B20u; return; } if (c.pc != 0x001E398Cu) [[unlikely]] return; }
L_001E398C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = 0u;
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.f[3] = c.r[3].w[0];
    set32(c.r[5], c.r[5].w[0] + 22383u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E39B8u); c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 197u, depth + 1u); else { c.pc = 0x001E1870u; return; } if (c.pc != 0x001E39B8u) [[unlikely]] return; }
L_001E39B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 204u)));  goto L_001E3A9C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E39D0u); set32(c.r[5], c.r[5].w[0] + 22348u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001E39D0u) [[unlikely]] return; }
L_001E39D0:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E39F4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E39F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E39F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E39F4u) [[unlikely]] return; }
L_001E39F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22363u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_001E3A54; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3A10u); set32(c.r[4], c.r[4].w[0] + 22363u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E3A10u) [[unlikely]] return; }
L_001E3A10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 22363u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E3A44; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001E3A38; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3A44; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E3A38:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3A44u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E3A44u) [[unlikely]] return; }
L_001E3A44:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3A54; } }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_001E3A54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 880u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3A6Cu); st32((c.r[29].w[0] + 880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E3A6Cu) [[unlikely]] return; }
L_001E3A6C:
    set32(c.r[4], c.r[29].w[0] + 912u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3A78u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 113u, depth + 1u); else { c.pc = 0x001E5220u; return; } if (c.pc != 0x001E3A78u) [[unlikely]] return; }
L_001E3A78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 944u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3A90u); st32((c.r[29].w[0] + 944u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E3A90u) [[unlikely]] return; }
L_001E3A90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0031(c, 98u, depth); } }
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 1;
L_001E3A9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3AC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3AACu); set32(c.r[4], c.r[29].w[0] + 912u);  if (depth < kMaxDepth) unit_0031(c, 119u, depth + 1u); else { c.pc = 0x001E5300u; return; } if (c.pc != 0x001E3AACu) [[unlikely]] return; }
L_001E3AAC:
    c.f[12] = c.f[21];
    set32(c.r[4], c.r[29].w[0] + 912u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3ABCu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0031(c, 116u, depth + 1u); else { c.pc = 0x001E5290u; return; } if (c.pc != 0x001E3ABCu) [[unlikely]] return; }
L_001E3ABC:
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E3AC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 880u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3AD8u); st32((c.r[29].w[0] + 880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E3AD8u) [[unlikely]] return; }
L_001E3AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0031(c, 93u, depth); } }
L_001E3AE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3AF0u); set32(c.r[5], c.r[5].w[0] + 22385u);  if (depth < kMaxDepth) unit_0030(c, 197u, depth + 1u); else { c.pc = 0x001E1870u; return; } if (c.pc != 0x001E3AF0u) [[unlikely]] return; }
L_001E3AF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0031(c, 37u, depth); } }
    set32(c.r[2], ld32((c.r[20].w[0] + 936u)));
    c.r[2].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E3BE0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3B18u); set32(c.r[5], c.r[5].w[0] + 22388u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001E3B18u) [[unlikely]] return; }
L_001E3B18:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E3B3C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E3B3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3B3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E3B3Cu) [[unlikely]] return; }
L_001E3B3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22407u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_001E3B9C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3B58u); set32(c.r[4], c.r[4].w[0] + 22407u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E3B58u) [[unlikely]] return; }
L_001E3B58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 22407u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E3B8C; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001E3B80; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3B8C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E3B80:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3B8Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E3B8Cu) [[unlikely]] return; }
L_001E3B8C:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3B9C; } }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_001E3B9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 880u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3BB4u); st32((c.r[29].w[0] + 880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E3BB4u) [[unlikely]] return; }
L_001E3BB4:
    set32(c.r[4], c.r[29].w[0] + 912u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3BC0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 113u, depth + 1u); else { c.pc = 0x001E5220u; return; } if (c.pc != 0x001E3BC0u) [[unlikely]] return; }
L_001E3BC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 944u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3BD8u); st32((c.r[29].w[0] + 944u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E3BD8u) [[unlikely]] return; }
L_001E3BD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0031(c, 98u, depth); } }
L_001E3BE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[5].w[0] - 2048u);
    set32(c.r[6], c.r[6].w[0] + 29856u);
    set32(c.r[7], 0u + 20u);
    set32(c.r[8], 0u + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3C04u); st32((c.r[29].w[0] + 972u), 0u);  if (depth < kMaxDepth) unit_0008(c, 147u, depth + 1u); else { c.pc = 0x00141CB0u; return; } if (c.pc != 0x001E3C04u) [[unlikely]] return; }
L_001E3C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3C0Cu); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0022(c, 78u, depth + 1u); else { c.pc = 0x001A8BD0u; return; } if (c.pc != 0x001E3C0Cu) [[unlikely]] return; }
L_001E3C0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    set32(c.r[5], c.r[29].w[0] + 944u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3C24u); st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 82u, depth + 1u); else { c.pc = 0x001A8C50u; return; } if (c.pc != 0x001E3C24u) [[unlikely]] return; }
L_001E3C24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 220u)));  if (t) { goto L_001E3D78; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 1;
L_001E3C30:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 208u);  goto L_001E3D6C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3C4Cu); set32(c.r[5], c.r[5].w[0] + 22348u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001E3C4Cu) [[unlikely]] return; }
L_001E3C4C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E3C70; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E3C70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3C70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E3C70u) [[unlikely]] return; }
L_001E3C70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22363u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_001E3CD0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3C8Cu); set32(c.r[4], c.r[4].w[0] + 22363u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E3C8Cu) [[unlikely]] return; }
L_001E3C8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 22363u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E3CC0; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001E3CB4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3CC0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E3CB4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3CC0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E3CC0u) [[unlikely]] return; }
L_001E3CC0:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3CD0; } }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_001E3CD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3CE8u); st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E3CE8u) [[unlikely]] return; }
L_001E3CE8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[5].w[0] + 29856u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3D00u); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0008(c, 144u, depth + 1u); else { c.pc = 0x00141C40u; return; } if (c.pc != 0x001E3D00u) [[unlikely]] return; }
L_001E3D00:
    set32(c.r[4], ld32((c.r[29].w[0] + 972u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E3D24; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E3D24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3D24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E3D24u) [[unlikely]] return; }
L_001E3D24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 880u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3D3Cu); st32((c.r[29].w[0] + 880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E3D3Cu) [[unlikely]] return; }
L_001E3D3C:
    set32(c.r[4], c.r[29].w[0] + 912u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3D48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 113u, depth + 1u); else { c.pc = 0x001E5220u; return; } if (c.pc != 0x001E3D48u) [[unlikely]] return; }
L_001E3D48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 944u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3D60u); st32((c.r[29].w[0] + 944u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E3D60u) [[unlikely]] return; }
L_001E3D60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0031(c, 98u, depth); } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 1;
L_001E3D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3D74u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E3D74u) [[unlikely]] return; }
L_001E3D74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 220u)));
    c.budget -= 1;
L_001E3D78:
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 224u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3C30u | kUnwind; return; } goto L_001E3C30; }
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_001E3DA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 12u);  if (t) { goto L_001E3DA0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001E3DA0:
    set32(c.r[2], ld32((c.r[29].w[0] + 948u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_001E3DBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + 12u);  if (t) { goto L_001E3DC0; } }
L_001E3DBC:
    set32(c.r[3], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001E3DC0:
    set32(c.r[2], ld32((c.r[29].w[0] + 952u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 972u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_001E3DE8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E3DE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3DE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E3DE8u) [[unlikely]] return; }
L_001E3DE8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E3E18; }
    set32(c.r[6], c.r[21].w[0] - c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[6].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001E3E0C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3E18; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E3E0C:
    set32(c.r[4], c.r[29].w[0] + 972u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3E18u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E3E18u) [[unlikely]] return; }
L_001E3E18:
    st32((c.r[29].w[0] + 972u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3E28u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E3E28u) [[unlikely]] return; }
L_001E3E28:
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3E34u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0022(c, 82u, depth + 1u); else { c.pc = 0x001A8C50u; return; } if (c.pc != 0x001E3E34u) [[unlikely]] return; }
L_001E3E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0031(c, 2u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 956u)));
    c.budget -= 1;
L_001E3E40:
    set32(c.r[2], 0u + 41u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 44u);  goto L_001E3E64; }
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3E58u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E3E58u) [[unlikely]] return; }
L_001E3E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 956u)));  if (t) { [[clang::musttail]] return unit_0031(c, 3u, depth); } }
    set32(c.r[2], 0u + 44u);
    c.budget -= 1;
L_001E3E64:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E3E80; } }
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3E78u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x001A8D00u; return; } if (c.pc != 0x001E3E78u) [[unlikely]] return; }
L_001E3E78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 944u);  if (t) { goto L_001E3FB8; } }
L_001E3E80:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_001E3FB4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3E98u); set32(c.r[5], c.r[5].w[0] + 22348u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001E3E98u) [[unlikely]] return; }
L_001E3E98:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E3EBC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E3EBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3EBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E3EBCu) [[unlikely]] return; }
L_001E3EBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22363u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_001E3F1C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3ED8u); set32(c.r[4], c.r[4].w[0] + 22363u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E3ED8u) [[unlikely]] return; }
L_001E3ED8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 22363u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E3F0C; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001E3F00; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3F0C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E3F00:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3F0Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E3F0Cu) [[unlikely]] return; }
L_001E3F0C:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3F1C; } }
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_001E3F1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3F34u); st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E3F34u) [[unlikely]] return; }
L_001E3F34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[5].w[0] + 29856u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3F4Cu); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0008(c, 144u, depth + 1u); else { c.pc = 0x00141C40u; return; } if (c.pc != 0x001E3F4Cu) [[unlikely]] return; }
L_001E3F4C:
    set32(c.r[4], ld32((c.r[29].w[0] + 972u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E3F70; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E3F70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3F70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E3F70u) [[unlikely]] return; }
L_001E3F70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 880u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3F88u); st32((c.r[29].w[0] + 880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E3F88u) [[unlikely]] return; }
L_001E3F88:
    set32(c.r[4], c.r[29].w[0] + 912u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3F94u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0031(c, 113u, depth + 1u); else { c.pc = 0x001E5220u; return; } if (c.pc != 0x001E3F94u) [[unlikely]] return; }
L_001E3F94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 944u);
    set32(c.r[2], c.r[2].w[0] + 10264u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3FACu); st32((c.r[29].w[0] + 944u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 79u, depth + 1u); else { c.pc = 0x001A8BF0u; return; } if (c.pc != 0x001E3FACu) [[unlikely]] return; }
L_001E3FAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0031(c, 98u, depth); } }
L_001E3FB4:
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 1;
L_001E3FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3FC0u);  if (depth < kMaxDepth) unit_0030(c, 218u, depth + 1u); else { c.pc = 0x001E1A90u; return; } if (c.pc != 0x001E3FC0u) [[unlikely]] return; }
L_001E3FC0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + 240u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[21], c.r[3].w[0] + 4u);  if (t) { [[clang::musttail]] return unit_0031(c, 1u, depth); } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_0031(c, 1u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4000u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E4000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0031(c, 1u, depth);
}

}
