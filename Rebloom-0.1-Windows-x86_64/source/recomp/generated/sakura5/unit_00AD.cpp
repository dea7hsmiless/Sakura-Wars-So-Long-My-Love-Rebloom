#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AD[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0,
    0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77,
    0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 101,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0,
    0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0,
    0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    240, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260,
    0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0,
    0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0,
    281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0,
    0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0,
    0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0,
    369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396,
    0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0,
    0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0,
    0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0,
    417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424,
};

void unit_00AD(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003D4000;
    case 2u: goto L_003D4014;
    case 3u: goto L_003D4040;
    case 4u: goto L_003D4074;
    case 5u: goto L_003D4080;
    case 6u: goto L_003D40C8;
    case 7u: goto L_003D40D0;
    case 8u: goto L_003D40EC;
    case 9u: goto L_003D4108;
    case 10u: goto L_003D4124;
    case 11u: goto L_003D4140;
    case 12u: goto L_003D4170;
    case 13u: goto L_003D41CC;
    case 14u: goto L_003D41EC;
    case 15u: goto L_003D4210;
    case 16u: goto L_003D4224;
    case 17u: goto L_003D4250;
    case 18u: goto L_003D4280;
    case 19u: goto L_003D4298;
    case 20u: goto L_003D42B0;
    case 21u: goto L_003D42D8;
    case 22u: goto L_003D42F4;
    case 23u: goto L_003D4310;
    case 24u: goto L_003D4320;
    case 25u: goto L_003D4340;
    case 26u: goto L_003D4350;
    case 27u: goto L_003D4374;
    case 28u: goto L_003D4394;
    case 29u: goto L_003D43B4;
    case 30u: goto L_003D43F0;
    case 31u: goto L_003D4444;
    case 32u: goto L_003D4464;
    case 33u: goto L_003D448C;
    case 34u: goto L_003D44B4;
    case 35u: goto L_003D44E0;
    case 36u: goto L_003D44F4;
    case 37u: goto L_003D4520;
    case 38u: goto L_003D4554;
    case 39u: goto L_003D4560;
    case 40u: goto L_003D45A8;
    case 41u: goto L_003D45B0;
    case 42u: goto L_003D45CC;
    case 43u: goto L_003D45E8;
    case 44u: goto L_003D4604;
    case 45u: goto L_003D4620;
    case 46u: goto L_003D4650;
    case 47u: goto L_003D46AC;
    case 48u: goto L_003D46CC;
    case 49u: goto L_003D46F0;
    case 50u: goto L_003D4704;
    case 51u: goto L_003D4730;
    case 52u: goto L_003D4760;
    case 53u: goto L_003D4778;
    case 54u: goto L_003D4790;
    case 55u: goto L_003D47B8;
    case 56u: goto L_003D47D4;
    case 57u: goto L_003D47F0;
    case 58u: goto L_003D4800;
    case 59u: goto L_003D4814;
    case 60u: goto L_003D4840;
    case 61u: goto L_003D489C;
    case 62u: goto L_003D48BC;
    case 63u: goto L_003D48DC;
    case 64u: goto L_003D48FC;
    case 65u: goto L_003D4930;
    case 66u: goto L_003D4944;
    case 67u: goto L_003D4970;
    case 68u: goto L_003D49A4;
    case 69u: goto L_003D49B0;
    case 70u: goto L_003D49F8;
    case 71u: goto L_003D4A00;
    case 72u: goto L_003D4A1C;
    case 73u: goto L_003D4A38;
    case 74u: goto L_003D4A54;
    case 75u: goto L_003D4A70;
    case 76u: goto L_003D4AA0;
    case 77u: goto L_003D4AFC;
    case 78u: goto L_003D4B1C;
    case 79u: goto L_003D4B40;
    case 80u: goto L_003D4B54;
    case 81u: goto L_003D4B80;
    case 82u: goto L_003D4BB0;
    case 83u: goto L_003D4BC8;
    case 84u: goto L_003D4BE0;
    case 85u: goto L_003D4C08;
    case 86u: goto L_003D4C24;
    case 87u: goto L_003D4C40;
    case 88u: goto L_003D4C50;
    case 89u: goto L_003D4C64;
    case 90u: goto L_003D4C6C;
    case 91u: goto L_003D4C90;
    case 92u: goto L_003D4CDC;
    case 93u: goto L_003D4CE8;
    case 94u: goto L_003D4D10;
    case 95u: goto L_003D4D24;
    case 96u: goto L_003D4D50;
    case 97u: goto L_003D4D84;
    case 98u: goto L_003D4D90;
    case 99u: goto L_003D4DD8;
    case 100u: goto L_003D4DE0;
    case 101u: goto L_003D4DFC;
    case 102u: goto L_003D4E18;
    case 103u: goto L_003D4E70;
    case 104u: goto L_003D4E8C;
    case 105u: goto L_003D4EA8;
    case 106u: goto L_003D4EF4;
    case 107u: goto L_003D4F10;
    case 108u: goto L_003D4F2C;
    case 109u: goto L_003D4F3C;
    case 110u: goto L_003D4F58;
    case 111u: goto L_003D4F74;
    case 112u: goto L_003D4FA4;
    case 113u: goto L_003D4FD8;
    case 114u: goto L_003D5010;
    case 115u: goto L_003D5030;
    case 116u: goto L_003D508C;
    case 117u: goto L_003D50AC;
    case 118u: goto L_003D50D0;
    case 119u: goto L_003D50F4;
    case 120u: goto L_003D5104;
    case 121u: goto L_003D510C;
    case 122u: goto L_003D511C;
    case 123u: goto L_003D514C;
    case 124u: goto L_003D516C;
    case 125u: goto L_003D5188;
    case 126u: goto L_003D51A4;
    case 127u: goto L_003D51D0;
    case 128u: goto L_003D51E4;
    case 129u: goto L_003D5210;
    case 130u: goto L_003D5240;
    case 131u: goto L_003D5258;
    case 132u: goto L_003D5270;
    case 133u: goto L_003D5298;
    case 134u: goto L_003D52B4;
    case 135u: goto L_003D52D0;
    case 136u: goto L_003D52E0;
    case 137u: goto L_003D5324;
    case 138u: goto L_003D5348;
    case 139u: goto L_003D536C;
    case 140u: goto L_003D5400;
    case 141u: goto L_003D5424;
    case 142u: goto L_003D5450;
    case 143u: goto L_003D5458;
    case 144u: goto L_003D5468;
    case 145u: goto L_003D5498;
    case 146u: goto L_003D54B8;
    case 147u: goto L_003D54D4;
    case 148u: goto L_003D54F0;
    case 149u: goto L_003D5520;
    case 150u: goto L_003D5534;
    case 151u: goto L_003D5560;
    case 152u: goto L_003D5594;
    case 153u: goto L_003D55A0;
    case 154u: goto L_003D55B4;
    case 155u: goto L_003D55F0;
    case 156u: goto L_003D5620;
    case 157u: goto L_003D5638;
    case 158u: goto L_003D5650;
    case 159u: goto L_003D5678;
    case 160u: goto L_003D5694;
    case 161u: goto L_003D56B0;
    case 162u: goto L_003D56C0;
    case 163u: goto L_003D56E0;
    case 164u: goto L_003D56FC;
    case 165u: goto L_003D5770;
    case 166u: goto L_003D5784;
    case 167u: goto L_003D57B0;
    case 168u: goto L_003D57D8;
    case 169u: goto L_003D57F0;
    case 170u: goto L_003D5804;
    case 171u: goto L_003D5840;
    case 172u: goto L_003D5880;
    case 173u: goto L_003D5898;
    case 174u: goto L_003D58B0;
    case 175u: goto L_003D58D8;
    case 176u: goto L_003D58F4;
    case 177u: goto L_003D5910;
    case 178u: goto L_003D5920;
    case 179u: goto L_003D5940;
    case 180u: goto L_003D595C;
    case 181u: goto L_003D59B0;
    case 182u: goto L_003D59C4;
    case 183u: goto L_003D59F0;
    case 184u: goto L_003D5A18;
    case 185u: goto L_003D5A30;
    case 186u: goto L_003D5A44;
    case 187u: goto L_003D5A80;
    case 188u: goto L_003D5AB0;
    case 189u: goto L_003D5AC8;
    case 190u: goto L_003D5AE0;
    case 191u: goto L_003D5B08;
    case 192u: goto L_003D5B24;
    case 193u: goto L_003D5B40;
    case 194u: goto L_003D5B50;
    case 195u: goto L_003D5B70;
    case 196u: goto L_003D5BB0;
    case 197u: goto L_003D5BC4;
    case 198u: goto L_003D5BF0;
    case 199u: goto L_003D5C18;
    case 200u: goto L_003D5C30;
    case 201u: goto L_003D5C44;
    case 202u: goto L_003D5C90;
    case 203u: goto L_003D5CC0;
    case 204u: goto L_003D5CD8;
    case 205u: goto L_003D5CF0;
    case 206u: goto L_003D5D18;
    case 207u: goto L_003D5D34;
    case 208u: goto L_003D5D50;
    case 209u: goto L_003D5D60;
    case 210u: goto L_003D5D74;
    case 211u: goto L_003D5D8C;
    case 212u: goto L_003D5E10;
    case 213u: goto L_003D5E64;
    case 214u: goto L_003D5EA4;
    case 215u: goto L_003D5EC8;
    case 216u: goto L_003D5F10;
    case 217u: goto L_003D5F24;
    case 218u: goto L_003D5F50;
    case 219u: goto L_003D5F78;
    case 220u: goto L_003D5F90;
    case 221u: goto L_003D5FD8;
    case 222u: goto L_003D5FE0;
    case 223u: goto L_003D5FFC;
    case 224u: goto L_003D6024;
    case 225u: goto L_003D604C;
    case 226u: goto L_003D6068;
    case 227u: goto L_003D6084;
    case 228u: goto L_003D60C0;
    case 229u: goto L_003D611C;
    case 230u: goto L_003D613C;
    case 231u: goto L_003D6160;
    case 232u: goto L_003D6174;
    case 233u: goto L_003D61B0;
    case 234u: goto L_003D61E0;
    case 235u: goto L_003D61F8;
    case 236u: goto L_003D6210;
    case 237u: goto L_003D6238;
    case 238u: goto L_003D6254;
    case 239u: goto L_003D6270;
    case 240u: goto L_003D6280;
    case 241u: goto L_003D6294;
    case 242u: goto L_003D62A4;
    case 243u: goto L_003D6310;
    case 244u: goto L_003D6364;
    case 245u: goto L_003D6374;
    case 246u: goto L_003D63D0;
    case 247u: goto L_003D63E4;
    case 248u: goto L_003D6410;
    case 249u: goto L_003D6438;
    case 250u: goto L_003D6450;
    case 251u: goto L_003D6498;
    case 252u: goto L_003D64A0;
    case 253u: goto L_003D64BC;
    case 254u: goto L_003D64E4;
    case 255u: goto L_003D650C;
    case 256u: goto L_003D6528;
    case 257u: goto L_003D6544;
    case 258u: goto L_003D6580;
    case 259u: goto L_003D65DC;
    case 260u: goto L_003D65FC;
    case 261u: goto L_003D6620;
    case 262u: goto L_003D6634;
    case 263u: goto L_003D6670;
    case 264u: goto L_003D66A0;
    case 265u: goto L_003D66B8;
    case 266u: goto L_003D66D0;
    case 267u: goto L_003D66F8;
    case 268u: goto L_003D6714;
    case 269u: goto L_003D6730;
    case 270u: goto L_003D6740;
    case 271u: goto L_003D6754;
    case 272u: goto L_003D6780;
    case 273u: goto L_003D67D4;
    case 274u: goto L_003D67E4;
    case 275u: goto L_003D6830;
    case 276u: goto L_003D6844;
    case 277u: goto L_003D6870;
    case 278u: goto L_003D6898;
    case 279u: goto L_003D68B0;
    case 280u: goto L_003D68F8;
    case 281u: goto L_003D6900;
    case 282u: goto L_003D691C;
    case 283u: goto L_003D6944;
    case 284u: goto L_003D696C;
    case 285u: goto L_003D6988;
    case 286u: goto L_003D69A4;
    case 287u: goto L_003D69E0;
    case 288u: goto L_003D6A3C;
    case 289u: goto L_003D6A5C;
    case 290u: goto L_003D6A80;
    case 291u: goto L_003D6A94;
    case 292u: goto L_003D6AD0;
    case 293u: goto L_003D6B00;
    case 294u: goto L_003D6B18;
    case 295u: goto L_003D6B30;
    case 296u: goto L_003D6B58;
    case 297u: goto L_003D6B74;
    case 298u: goto L_003D6B90;
    case 299u: goto L_003D6BA0;
    case 300u: goto L_003D6BB4;
    case 301u: goto L_003D6BBC;
    case 302u: goto L_003D6BE0;
    case 303u: goto L_003D6C2C;
    case 304u: goto L_003D6C38;
    case 305u: goto L_003D6C60;
    case 306u: goto L_003D6C74;
    case 307u: goto L_003D6CA0;
    case 308u: goto L_003D6CC8;
    case 309u: goto L_003D6CE0;
    case 310u: goto L_003D6D2C;
    case 311u: goto L_003D6D34;
    case 312u: goto L_003D6D50;
    case 313u: goto L_003D6D6C;
    case 314u: goto L_003D6DA4;
    case 315u: goto L_003D6DD4;
    case 316u: goto L_003D6E00;
    case 317u: goto L_003D6E18;
    case 318u: goto L_003D6E34;
    case 319u: goto L_003D6E50;
    case 320u: goto L_003D6E80;
    case 321u: goto L_003D6E9C;
    case 322u: goto L_003D6EB8;
    case 323u: goto L_003D6EE4;
    case 324u: goto L_003D6EF8;
    case 325u: goto L_003D6F14;
    case 326u: goto L_003D6F30;
    case 327u: goto L_003D6F5C;
    case 328u: goto L_003D6F90;
    case 329u: goto L_003D6FD0;
    case 330u: goto L_003D702C;
    case 331u: goto L_003D704C;
    case 332u: goto L_003D7070;
    case 333u: goto L_003D708C;
    case 334u: goto L_003D70BC;
    case 335u: goto L_003D70C4;
    case 336u: goto L_003D70D4;
    case 337u: goto L_003D7104;
    case 338u: goto L_003D7140;
    case 339u: goto L_003D7154;
    case 340u: goto L_003D7190;
    case 341u: goto L_003D71C0;
    case 342u: goto L_003D71D8;
    case 343u: goto L_003D71F0;
    case 344u: goto L_003D7218;
    case 345u: goto L_003D7234;
    case 346u: goto L_003D7250;
    case 347u: goto L_003D7260;
    case 348u: goto L_003D72A4;
    case 349u: goto L_003D72C8;
    case 350u: goto L_003D72EC;
    case 351u: goto L_003D7380;
    case 352u: goto L_003D739C;
    case 353u: goto L_003D73C8;
    case 354u: goto L_003D73D0;
    case 355u: goto L_003D73E0;
    case 356u: goto L_003D7410;
    case 357u: goto L_003D7440;
    case 358u: goto L_003D7454;
    case 359u: goto L_003D7480;
    case 360u: goto L_003D74A8;
    case 361u: goto L_003D74C0;
    case 362u: goto L_003D74D4;
    case 363u: goto L_003D7518;
    case 364u: goto L_003D7530;
    case 365u: goto L_003D7580;
    case 366u: goto L_003D75C0;
    case 367u: goto L_003D75CC;
    case 368u: goto L_003D75E4;
    case 369u: goto L_003D7600;
    case 370u: goto L_003D7628;
    case 371u: goto L_003D7644;
    case 372u: goto L_003D7660;
    case 373u: goto L_003D7670;
    case 374u: goto L_003D76CC;
    case 375u: goto L_003D7700;
    case 376u: goto L_003D778C;
    case 377u: goto L_003D77C0;
    case 378u: goto L_003D785C;
    case 379u: goto L_003D78B0;
    case 380u: goto L_003D78C4;
    case 381u: goto L_003D7908;
    case 382u: goto L_003D7920;
    case 383u: goto L_003D7970;
    case 384u: goto L_003D79B0;
    case 385u: goto L_003D79BC;
    case 386u: goto L_003D79D4;
    case 387u: goto L_003D79F0;
    case 388u: goto L_003D7A18;
    case 389u: goto L_003D7A34;
    case 390u: goto L_003D7A50;
    case 391u: goto L_003D7A60;
    case 392u: goto L_003D7AC8;
    case 393u: goto L_003D7B24;
    case 394u: goto L_003D7B58;
    case 395u: goto L_003D7BC4;
    case 396u: goto L_003D7BFC;
    case 397u: goto L_003D7C20;
    case 398u: goto L_003D7C60;
    case 399u: goto L_003D7C70;
    case 400u: goto L_003D7C88;
    case 401u: goto L_003D7CA4;
    case 402u: goto L_003D7CC0;
    case 403u: goto L_003D7D1C;
    case 404u: goto L_003D7D34;
    case 405u: goto L_003D7D8C;
    case 406u: goto L_003D7DA8;
    case 407u: goto L_003D7DD0;
    case 408u: goto L_003D7DE4;
    case 409u: goto L_003D7E10;
    case 410u: goto L_003D7E54;
    case 411u: goto L_003D7E60;
    case 412u: goto L_003D7E78;
    case 413u: goto L_003D7E90;
    case 414u: goto L_003D7EB8;
    case 415u: goto L_003D7ED4;
    case 416u: goto L_003D7EF0;
    case 417u: goto L_003D7F00;
    case 418u: goto L_003D7F1C;
    case 419u: goto L_003D7F44;
    case 420u: goto L_003D7F5C;
    case 421u: goto L_003D7F78;
    case 422u: goto L_003D7FCC;
    case 423u: goto L_003D7FDC;
    case 424u: goto L_003D7FFC;
    default: bad_entry(c, 0x003D4000u); return;
    }
L_003D4000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4014u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003D4014u) [[unlikely]] return; }
L_003D4014:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003D4034; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003D4034:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D4040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003D4078; }
    set32(c.r[6], ld32((c.r[8].w[0] + 48u)));
    set32(c.r[7], ld32((c.r[8].w[0] + 52u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4074u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x003D4074u) [[unlikely]] return; }
L_003D4074:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D4078:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D4080:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D40D8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003D40C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  if (t) { goto L_003D40F4; } }
L_003D40C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D40C8u); c.r[17].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003D40C8u) [[unlikely]] return; }
L_003D40C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D40D0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003D40D0u) [[unlikely]] return; }
L_003D40D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);  if (t) { goto L_003D40F0; } }
L_003D40D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D40ECu); c.r[17].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003D40ECu) [[unlikely]] return; }
L_003D40EC:
    set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_003D40F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_003D40F4:
    set32(c.r[5], c.r[17].w[0] + 2u);
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.f[13] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4108u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 12u, depth + 1u); else { c.pc = 0x003D4170u; return; } if (c.pc != 0x003D4108u) [[unlikely]] return; }
L_003D4108:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[21] = c.f[0];
    set32(c.r[5], c.r[17].w[0] + 1u);
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.f[13] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4124u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 12u, depth + 1u); else { c.pc = 0x003D4170u; return; } if (c.pc != 0x003D4124u) [[unlikely]] return; }
L_003D4124:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4140u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 12u, depth + 1u); else { c.pc = 0x003D4170u; return; } if (c.pc != 0x003D4140u) [[unlikely]] return; }
L_003D4140:
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 84u), c.f[20]);
    st32((c.r[16].w[0] + 88u), c.f[21]);
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D4170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[21] = c.f[12];
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::sub(c.fcr31, c.f[13], c.f[21]);  if (t) { goto L_003D41E0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003D41E4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003D41C4; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D41C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003D41F4; } }
L_003D41C0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003D41C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D41CCu);  if (depth < kMaxDepth) unit_00A9(c, 273u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003D41CCu) [[unlikely]] return; }
L_003D41CC:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);  if (t) { goto L_003D41F0; } }
L_003D41E0:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003D41E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D41ECu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003D41ECu) [[unlikely]] return; }
L_003D41EC:
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 1;
L_003D41F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003D41F4:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D4210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4224u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D4224u) [[unlikely]] return; }
L_003D4224:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 6880u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D4250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D4298; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6880u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4280u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D4280u) [[unlikely]] return; }
L_003D4280:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D429C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4298u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D4298u) [[unlikely]] return; }
L_003D4298:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D429C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D42B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D42D8u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D42D8u) [[unlikely]] return; }
L_003D42D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D42F8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D42F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 15u, depth + 1u); else { c.pc = 0x003D4210u; return; } if (c.pc != 0x003D42F4u) [[unlikely]] return; }
L_003D42F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D42F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D4310:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 24u);  c.pc = t; return; }
L_003D4320:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4340u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00AD(c, 39u, depth + 1u); else { c.pc = 0x003D4560u; return; } if (c.pc != 0x003D4340u) [[unlikely]] return; }
L_003D4340:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4350u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003D4350u) [[unlikely]] return; }
L_003D4350:
    c.f[1] = ld32((c.r[17].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.f[20] = c.f[0];
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4374u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D4374u) [[unlikely]] return; }
L_003D4374:
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4394u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D4394u) [[unlikely]] return; }
L_003D4394:
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D43B4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D43B4u) [[unlikely]] return; }
L_003D43B4:
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[17].w[0] + 52u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D43F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_003D44C0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[1] = ld32((c.r[16].w[0] + 64u));  goto L_003D4448; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D4444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4444u);  if (depth < kMaxDepth) unit_00AD(c, 39u, depth + 1u); else { c.pc = 0x003D4560u; return; } if (c.pc != 0x003D4444u) [[unlikely]] return; }
L_003D4444:
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.budget -= 1;
L_003D4448:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4464u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D4464u) [[unlikely]] return; }
L_003D4464:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[3].d[0] = c.r[3].d[0] | 2913ull;
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D448Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D448Cu) [[unlikely]] return; }
L_003D448C:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[3].d[0] = c.r[3].d[0] | 2913ull;
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D44B4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D44B4u) [[unlikely]] return; }
L_003D44B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 3;
L_003D44C0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D44E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D44F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003D44F4u) [[unlikely]] return; }
L_003D44F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003D4514; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003D4514:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D4520:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003D4558; }
    set32(c.r[6], ld32((c.r[8].w[0] + 48u)));
    set32(c.r[7], ld32((c.r[8].w[0] + 52u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4554u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x003D4554u) [[unlikely]] return; }
L_003D4554:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D4558:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D4560:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D45B8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003D45A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  if (t) { goto L_003D45D4; } }
L_003D45A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D45A8u); c.r[17].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003D45A8u) [[unlikely]] return; }
L_003D45A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D45B0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003D45B0u) [[unlikely]] return; }
L_003D45B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);  if (t) { goto L_003D45D0; } }
L_003D45B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D45CCu); c.r[17].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003D45CCu) [[unlikely]] return; }
L_003D45CC:
    set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_003D45D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_003D45D4:
    set32(c.r[5], c.r[17].w[0] + 2u);
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.f[13] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D45E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 46u, depth + 1u); else { c.pc = 0x003D4650u; return; } if (c.pc != 0x003D45E8u) [[unlikely]] return; }
L_003D45E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[21] = c.f[0];
    set32(c.r[5], c.r[17].w[0] + 1u);
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.f[13] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4604u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 46u, depth + 1u); else { c.pc = 0x003D4650u; return; } if (c.pc != 0x003D4604u) [[unlikely]] return; }
L_003D4604:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4620u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 46u, depth + 1u); else { c.pc = 0x003D4650u; return; } if (c.pc != 0x003D4620u) [[unlikely]] return; }
L_003D4620:
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 68u), c.f[20]);
    st32((c.r[16].w[0] + 72u), c.f[21]);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D4650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[21] = c.f[12];
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::sub(c.fcr31, c.f[13], c.f[21]);  if (t) { goto L_003D46C0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003D46C4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003D46A4; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D46A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003D46D4; } }
L_003D46A0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003D46A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D46ACu);  if (depth < kMaxDepth) unit_00A9(c, 273u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003D46ACu) [[unlikely]] return; }
L_003D46AC:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);  if (t) { goto L_003D46D0; } }
L_003D46C0:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003D46C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D46CCu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003D46CCu) [[unlikely]] return; }
L_003D46CC:
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 1;
L_003D46D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003D46D4:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D46F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4704u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D4704u) [[unlikely]] return; }
L_003D4704:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 6944u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D4730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D4778; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6944u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4760u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D4760u) [[unlikely]] return; }
L_003D4760:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D477C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4778u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D4778u) [[unlikely]] return; }
L_003D4778:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D477C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D4790:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D47B8u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D47B8u) [[unlikely]] return; }
L_003D47B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D47D8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D47D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 49u, depth + 1u); else { c.pc = 0x003D46F0u; return; } if (c.pc != 0x003D47D4u) [[unlikely]] return; }
L_003D47D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D47D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D47F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 23u);  c.pc = t; return; }
L_003D4800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4814u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 69u, depth + 1u); else { c.pc = 0x003D49B0u; return; } if (c.pc != 0x003D4814u) [[unlikely]] return; }
L_003D4814:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D4840:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[20] = c.f[12];  if (t) { goto L_003D489C; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[16].w[0] + 72u));  goto L_003D48A0; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D489C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D489Cu);  if (depth < kMaxDepth) unit_00AD(c, 69u, depth + 1u); else { c.pc = 0x003D49B0u; return; } if (c.pc != 0x003D489Cu) [[unlikely]] return; }
L_003D489C:
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.budget -= 1;
L_003D48A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D48BCu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D48BCu) [[unlikely]] return; }
L_003D48BC:
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D48DCu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D48DCu) [[unlikely]] return; }
L_003D48DC:
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D48FCu); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D48FCu) [[unlikely]] return; }
L_003D48FC:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D4930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4944u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003D4944u) [[unlikely]] return; }
L_003D4944:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003D4964; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003D4964:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D4970:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003D49A8; }
    set32(c.r[6], ld32((c.r[8].w[0] + 48u)));
    set32(c.r[7], ld32((c.r[8].w[0] + 52u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D49A4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x003D49A4u) [[unlikely]] return; }
L_003D49A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D49A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D49B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D4A08; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_003D49F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  if (t) { goto L_003D4A24; } }
L_003D49F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D49F8u); c.r[17].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003D49F8u) [[unlikely]] return; }
L_003D49F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4A00u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003D4A00u) [[unlikely]] return; }
L_003D4A00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);  if (t) { goto L_003D4A20; } }
L_003D4A08:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4A1Cu); c.r[17].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003D4A1Cu) [[unlikely]] return; }
L_003D4A1C:
    set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_003D4A20:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_003D4A24:
    set32(c.r[5], c.r[17].w[0] + 2u);
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.f[13] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4A38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 76u, depth + 1u); else { c.pc = 0x003D4AA0u; return; } if (c.pc != 0x003D4A38u) [[unlikely]] return; }
L_003D4A38:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[21] = c.f[0];
    set32(c.r[5], c.r[17].w[0] + 1u);
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.f[13] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4A54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 76u, depth + 1u); else { c.pc = 0x003D4AA0u; return; } if (c.pc != 0x003D4A54u) [[unlikely]] return; }
L_003D4A54:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4A70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 76u, depth + 1u); else { c.pc = 0x003D4AA0u; return; } if (c.pc != 0x003D4A70u) [[unlikely]] return; }
L_003D4A70:
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 68u), c.f[20]);
    st32((c.r[16].w[0] + 72u), c.f[21]);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D4AA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[21] = c.f[12];
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::sub(c.fcr31, c.f[13], c.f[21]);  if (t) { goto L_003D4B10; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003D4B14; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003D4AF4; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D4AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003D4B24; } }
L_003D4AF0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003D4AF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4AFCu);  if (depth < kMaxDepth) unit_00A9(c, 273u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003D4AFCu) [[unlikely]] return; }
L_003D4AFC:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);  if (t) { goto L_003D4B20; } }
L_003D4B10:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003D4B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4B1Cu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003D4B1Cu) [[unlikely]] return; }
L_003D4B1C:
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 1;
L_003D4B20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003D4B24:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D4B40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4B54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D4B54u) [[unlikely]] return; }
L_003D4B54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 7008u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D4B80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D4BC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7008u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4BB0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D4BB0u) [[unlikely]] return; }
L_003D4BB0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D4BCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4BC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D4BC8u) [[unlikely]] return; }
L_003D4BC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D4BCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D4BE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4C08u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D4C08u) [[unlikely]] return; }
L_003D4C08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D4C28; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4C24u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 79u, depth + 1u); else { c.pc = 0x003D4B40u; return; } if (c.pc != 0x003D4C24u) [[unlikely]] return; }
L_003D4C24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D4C28:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D4C40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 27u);  c.pc = t; return; }
L_003D4C50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4C64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 98u, depth + 1u); else { c.pc = 0x003D4D90u; return; } if (c.pc != 0x003D4C64u) [[unlikely]] return; }
L_003D4C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4C6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 118u, depth + 1u); else { c.pc = 0x003D50D0u; return; } if (c.pc != 0x003D4C6Cu) [[unlikely]] return; }
L_003D4C6C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D4C90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D4CE8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003D4CE0; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D4CDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4CDCu);  if (depth < kMaxDepth) unit_00AD(c, 98u, depth + 1u); else { c.pc = 0x003D4D90u; return; } if (c.pc != 0x003D4CDCu) [[unlikely]] return; }
L_003D4CDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003D4CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4CE8u);  if (depth < kMaxDepth) unit_00AD(c, 118u, depth + 1u); else { c.pc = 0x003D50D0u; return; } if (c.pc != 0x003D4CE8u) [[unlikely]] return; }
L_003D4CE8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D4D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4D24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003D4D24u) [[unlikely]] return; }
L_003D4D24:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003D4D44; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003D4D44:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D4D50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003D4D88; }
    set32(c.r[6], ld32((c.r[8].w[0] + 48u)));
    set32(c.r[7], ld32((c.r[8].w[0] + 52u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4D84u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x003D4D84u) [[unlikely]] return; }
L_003D4D84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D4D88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D4D90:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003D4DE8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_003D4DD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_003D4E04; } }
L_003D4DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4DD8u); c.r[16].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003D4DD8u) [[unlikely]] return; }
L_003D4DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4DE0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003D4DE0u) [[unlikely]] return; }
L_003D4DE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);  if (t) { goto L_003D4E00; } }
L_003D4DE8:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4DFCu); c.r[16].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003D4DFCu) [[unlikely]] return; }
L_003D4DFC:
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_003D4E00:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003D4E04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4E18u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 115u, depth + 1u); else { c.pc = 0x003D5030u; return; } if (c.pc != 0x003D4E18u) [[unlikely]] return; }
L_003D4E18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], c.r[16].w[0] + 1u);
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 15904u));
    c.f[2] = ld32((c.r[6].w[0] + 15908u));
    c.f[1] = ld32((c.r[3].w[0] + 15912u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 15916u));
    st32((c.r[29].w[0] + 132u), c.f[2]);
    st32((c.r[29].w[0] + 136u), c.f[1]);
    st32((c.r[29].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.f[13] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4E70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 115u, depth + 1u); else { c.pc = 0x003D5030u; return; } if (c.pc != 0x003D4E70u) [[unlikely]] return; }
L_003D4E70:
    st32((c.r[29].w[0] + 128u), c.f[0]);
    set32(c.r[5], c.r[16].w[0] + 2u);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 32u));
    c.f[13] = ld32((c.r[2].w[0] + 36u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4E8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 115u, depth + 1u); else { c.pc = 0x003D5030u; return; } if (c.pc != 0x003D4E8Cu) [[unlikely]] return; }
L_003D4E8C:
    st32((c.r[29].w[0] + 132u), c.f[0]);
    set32(c.r[5], c.r[16].w[0] + 3u);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 48u));
    c.f[13] = ld32((c.r[2].w[0] + 52u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4EA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 115u, depth + 1u); else { c.pc = 0x003D5030u; return; } if (c.pc != 0x003D4EA8u) [[unlikely]] return; }
L_003D4EA8:
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 15920u));
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[2].w[0] + 15924u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[2].w[0] + 15928u));
    st32((c.r[29].w[0] + 116u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 15932u));
    st32((c.r[29].w[0] + 120u), c.f[1]);
    st32((c.r[29].w[0] + 124u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.f[13] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4EF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 115u, depth + 1u); else { c.pc = 0x003D5030u; return; } if (c.pc != 0x003D4EF4u) [[unlikely]] return; }
L_003D4EF4:
    st32((c.r[29].w[0] + 112u), c.f[0]);
    set32(c.r[5], c.r[16].w[0] + 5u);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 24u));
    c.f[13] = ld32((c.r[2].w[0] + 28u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4F10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 115u, depth + 1u); else { c.pc = 0x003D5030u; return; } if (c.pc != 0x003D4F10u) [[unlikely]] return; }
L_003D4F10:
    st32((c.r[29].w[0] + 116u), c.f[0]);
    set32(c.r[5], c.r[16].w[0] + 6u);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 40u));
    c.f[13] = ld32((c.r[2].w[0] + 44u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4F2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 115u, depth + 1u); else { c.pc = 0x003D5030u; return; } if (c.pc != 0x003D4F2Cu) [[unlikely]] return; }
L_003D4F2C:
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4F3Cu); c.f[12] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003D4F3Cu) [[unlikely]] return; }
L_003D4F3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 116u));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[20] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4F58u); c.f[12] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003D4F58u) [[unlikely]] return; }
L_003D4F58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[21] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4F74u); c.f[12] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003D4F74u) [[unlikely]] return; }
L_003D4F74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    st32((c.r[17].w[0] + 96u), c.f[0]);
    st32((c.r[17].w[0] + 100u), c.f[21]);
    st32((c.r[17].w[0] + 104u), c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4FA4u); st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003D4FA4u) [[unlikely]] return; }
L_003D4FA4:
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4FD8u); st32((c.r[29].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003D4FD8u) [[unlikely]] return; }
L_003D4FD8:
    c.f[3] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[5], c.r[16].w[0] + 7u);
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = ld32((c.r[29].w[0] + 92u));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[17].w[0] + 80u), c.f[0]);
    st32((c.r[17].w[0] + 84u), c.f[3]);
    st32((c.r[17].w[0] + 88u), c.f[2]);
    st32((c.r[17].w[0] + 92u), c.f[1]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 56u));
    c.f[13] = ld32((c.r[2].w[0] + 60u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5010u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 115u, depth + 1u); else { c.pc = 0x003D5030u; return; } if (c.pc != 0x003D5010u) [[unlikely]] return; }
L_003D5010:
    st32((c.r[17].w[0] + 112u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003D5030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[21] = c.f[12];
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::sub(c.fcr31, c.f[13], c.f[21]);  if (t) { goto L_003D50A0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003D50A4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003D5084; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D5080; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003D50B4; } }
L_003D5080:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003D5084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D508Cu);  if (depth < kMaxDepth) unit_00A9(c, 273u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003D508Cu) [[unlikely]] return; }
L_003D508C:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);  if (t) { goto L_003D50B0; } }
L_003D50A0:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003D50A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D50ACu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003D50ACu) [[unlikely]] return; }
L_003D50AC:
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 1;
L_003D50B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003D50B4:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D50D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D50F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003D50F4u) [[unlikely]] return; }
L_003D50F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5104u);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D5104u) [[unlikely]] return; }
L_003D5104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D510Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x003D510Cu) [[unlikely]] return; }
L_003D510C:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D511Cu); set32(c.r[5], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003D511Cu) [[unlikely]] return; }
L_003D511C:
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D514Cu); st32((c.r[29].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003D514Cu) [[unlikely]] return; }
L_003D514C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D516Cu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D516Cu) [[unlikely]] return; }
L_003D516C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5188u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D5188u) [[unlikely]] return; }
L_003D5188:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D51A4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D51A4u) [[unlikely]] return; }
L_003D51A4:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[18].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003D51D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D51E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D51E4u) [[unlikely]] return; }
L_003D51E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 7072u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D5210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D5258; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5240u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D5240u) [[unlikely]] return; }
L_003D5240:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D525C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5258u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D5258u) [[unlikely]] return; }
L_003D5258:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D525C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D5270:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5298u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D5298u) [[unlikely]] return; }
L_003D5298:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D52B8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D52B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 127u, depth + 1u); else { c.pc = 0x003D51D0u; return; } if (c.pc != 0x003D52B4u) [[unlikely]] return; }
L_003D52B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D52B8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D52D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 26u);  c.pc = t; return; }
L_003D52E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.f[1] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5324u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003D5324u) [[unlikely]] return; }
L_003D5324:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = c.r[3].w[0];
    c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5348u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003D5348u) [[unlikely]] return; }
L_003D5348:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = c.r[3].w[0];
    c.f[21] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D536Cu); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003D536Cu) [[unlikely]] return; }
L_003D536C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[16].w[0] + 96u), c.f[0]);
    st32((c.r[16].w[0] + 100u), c.f[21]);
    st32((c.r[16].w[0] + 104u), c.f[20]);
    st32((c.r[16].w[0] + 108u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.f[3] = ld32((c.r[4].w[0] + 20u));
    c.f[2] = ld32((c.r[4].w[0] + 24u));
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    st32((c.r[16].w[0] + 84u), c.f[2]);
    st32((c.r[16].w[0] + 88u), c.f[3]);
    st32((c.r[16].w[0] + 92u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 36;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D5400:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5424u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003D5424u) [[unlikely]] return; }
L_003D5424:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[4] = ld32((c.r[16].w[0] + 64u));
    c.f[3] = ld32((c.r[3].w[0] + 28u));
    c.f[2] = 0u;
    c.f[1] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5450u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D5450u) [[unlikely]] return; }
L_003D5450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5458u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x003D5458u) [[unlikely]] return; }
L_003D5458:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5468u); set32(c.r[5], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003D5468u) [[unlikely]] return; }
L_003D5468:
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5498u); st32((c.r[29].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003D5498u) [[unlikely]] return; }
L_003D5498:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D54B8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D54B8u) [[unlikely]] return; }
L_003D54B8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D54D4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D54D4u) [[unlikely]] return; }
L_003D54D4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D54F0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D54F0u) [[unlikely]] return; }
L_003D54F0:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[18].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003D5520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5534u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003D5534u) [[unlikely]] return; }
L_003D5534:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003D5554; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003D5554:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D5560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003D5598; }
    set32(c.r[6], ld32((c.r[8].w[0] + 48u)));
    set32(c.r[7], ld32((c.r[8].w[0] + 52u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5594u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x003D5594u) [[unlikely]] return; }
L_003D5594:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D5598:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D55A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D55B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D55B4u) [[unlikely]] return; }
L_003D55B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + 7136u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D55F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D5638; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5620u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D5620u) [[unlikely]] return; }
L_003D5620:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D563C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5638u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D5638u) [[unlikely]] return; }
L_003D5638:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D563C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D5650:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5678u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D5678u) [[unlikely]] return; }
L_003D5678:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D5698; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5694u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 153u, depth + 1u); else { c.pc = 0x003D55A0u; return; } if (c.pc != 0x003D5694u) [[unlikely]] return; }
L_003D5694:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D5698:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D56B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 42u);  c.pc = t; return; }
L_003D56C0:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003D56E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D56FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003D56FCu) [[unlikely]] return; }
L_003D56FC:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.f[0] = c.r[5].w[0];
    c.f[5] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[4] = c.r[3].w[0];
    c.f[2] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[5]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[5]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[1]);
    st32((c.r[16].w[0] + 56u), c.f[3]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D5770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5784u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003D5784u) [[unlikely]] return; }
L_003D5784:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003D57A4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003D57A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D57B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003D57DC; }
    set32(c.r[6], c.r[4].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D57D8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x003D57D8u) [[unlikely]] return; }
L_003D57D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D57DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D57F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5804u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D5804u) [[unlikely]] return; }
L_003D5804:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + 7200u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D5840:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D5898; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[3], c.r[3].w[0] + 7200u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5880u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D5880u) [[unlikely]] return; }
L_003D5880:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003D589C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5898u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D5898u) [[unlikely]] return; }
L_003D5898:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003D589C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D58B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D58D8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D58D8u) [[unlikely]] return; }
L_003D58D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D58F8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D58F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 169u, depth + 1u); else { c.pc = 0x003D57F0u; return; } if (c.pc != 0x003D58F4u) [[unlikely]] return; }
L_003D58F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D58F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D5910:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 41u);  c.pc = t; return; }
L_003D5920:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003D5940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D595Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003D595Cu) [[unlikely]] return; }
L_003D595C:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[3].w[0];
    c.f[3] = 0u;
    c.f[4] = ld32((c.r[4].w[0] + 8u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[5]);
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[5]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[5]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[4]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D59B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D59C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003D59C4u) [[unlikely]] return; }
L_003D59C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003D59E4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003D59E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D59F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003D5A1C; }
    set32(c.r[6], c.r[4].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5A18u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x003D5A18u) [[unlikely]] return; }
L_003D5A18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D5A1C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D5A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5A44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D5A44u) [[unlikely]] return; }
L_003D5A44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + 7264u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D5A80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D5AC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5AB0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D5AB0u) [[unlikely]] return; }
L_003D5AB0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D5ACC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5AC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D5AC8u) [[unlikely]] return; }
L_003D5AC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D5ACC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D5AE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5B08u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D5B08u) [[unlikely]] return; }
L_003D5B08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D5B28; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5B24u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 185u, depth + 1u); else { c.pc = 0x003D5A30u; return; } if (c.pc != 0x003D5B24u) [[unlikely]] return; }
L_003D5B24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D5B28:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D5B40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 40u);  c.pc = t; return; }
L_003D5B50:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003D5B70:
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[12]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[12]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[12]);
    st32((c.r[4].w[0] + 52u), c.f[1]);
    st32((c.r[4].w[0] + 56u), c.f[2]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.r[3].w[0]);  c.pc = t; return; }
L_003D5BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5BC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003D5BC4u) [[unlikely]] return; }
L_003D5BC4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003D5BE4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003D5BE4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D5BF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003D5C1C; }
    set32(c.r[6], c.r[4].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5C18u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x003D5C18u) [[unlikely]] return; }
L_003D5C18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D5C1C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D5C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5C44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D5C44u) [[unlikely]] return; }
L_003D5C44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + 7328u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D5C90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D5CD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5CC0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D5CC0u) [[unlikely]] return; }
L_003D5CC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D5CDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5CD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D5CD8u) [[unlikely]] return; }
L_003D5CD8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D5CDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D5CF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5D18u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D5D18u) [[unlikely]] return; }
L_003D5D18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D5D38; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5D34u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 200u, depth + 1u); else { c.pc = 0x003D5C30u; return; } if (c.pc != 0x003D5D34u) [[unlikely]] return; }
L_003D5D34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D5D38:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D5D50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 45u);  c.pc = t; return; }
L_003D5D60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5D74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 220u, depth + 1u); else { c.pc = 0x003D5F90u; return; } if (c.pc != 0x003D5D74u) [[unlikely]] return; }
L_003D5D74:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003D5DE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5D8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003D5D8Cu) [[unlikely]] return; }
L_003D5D8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    c.f[4] = c.r[3].w[0];
    c.f[2] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[5]);
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[5]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[1]);
    st32((c.r[16].w[0] + 56u), c.f[3]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 23;
L_003D5DE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D5E10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_003D5E94; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[1] = ld32((c.r[16].w[0] + 64u));  goto L_003D5E68; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D5E64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5E64u);  if (depth < kMaxDepth) unit_00AD(c, 220u, depth + 1u); else { c.pc = 0x003D5F90u; return; } if (c.pc != 0x003D5E64u) [[unlikely]] return; }
L_003D5E64:
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.budget -= 1;
L_003D5E68:
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 11;
L_003D5E94:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5EA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003D5EA4u) [[unlikely]] return; }
L_003D5EA4:
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5EC8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003D5EC8u) [[unlikely]] return; }
L_003D5EC8:
    c.f[3] = ld32((c.r[29].w[0] + 52u));
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    st32((c.r[16].w[0] + 68u), c.f[3]);
    st32((c.r[16].w[0] + 72u), c.f[2]);
    st32((c.r[16].w[0] + 76u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D5F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5F24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003D5F24u) [[unlikely]] return; }
L_003D5F24:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003D5F44; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003D5F44:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D5F50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003D5F7C; }
    set32(c.r[6], c.r[4].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5F78u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x003D5F78u) [[unlikely]] return; }
L_003D5F78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D5F7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D5F90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003D5FE8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_003D5FD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_003D6004; } }
L_003D5FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5FD8u); c.r[16].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003D5FD8u) [[unlikely]] return; }
L_003D5FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5FE0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003D5FE0u) [[unlikely]] return; }
L_003D5FE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);  if (t) { goto L_003D6000; } }
L_003D5FE8:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5FFCu); c.r[16].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003D5FFCu) [[unlikely]] return; }
L_003D5FFC:
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_003D6000:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003D6004:
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[3].w[0] + 8u));  goto L_003D603C; }
    c.f[12] = ld32((c.r[3].w[0]));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[3].w[0] + 12u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6024u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 228u, depth + 1u); else { c.pc = 0x003D60C0u; return; } if (c.pc != 0x003D6024u) [[unlikely]] return; }
L_003D6024:
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 84u), c.f[0]);
    st32((c.r[17].w[0] + 88u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003D6098; } }
L_003D603C:
    set32(c.r[5], c.r[16].w[0] + 2u);
    c.f[13] = ld32((c.r[3].w[0] + 20u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D604Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 228u, depth + 1u); else { c.pc = 0x003D60C0u; return; } if (c.pc != 0x003D604Cu) [[unlikely]] return; }
L_003D604C:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[21] = c.f[0];
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.f[13] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6068u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 228u, depth + 1u); else { c.pc = 0x003D60C0u; return; } if (c.pc != 0x003D6068u) [[unlikely]] return; }
L_003D6068:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6084u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 228u, depth + 1u); else { c.pc = 0x003D60C0u; return; } if (c.pc != 0x003D6084u) [[unlikely]] return; }
L_003D6084:
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 84u), c.f[20]);
    st32((c.r[17].w[0] + 88u), c.f[21]);
    st32((c.r[17].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 5;
L_003D6098:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D60C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[21] = c.f[12];
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::sub(c.fcr31, c.f[13], c.f[21]);  if (t) { goto L_003D6130; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003D6134; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003D6114; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D6110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003D6144; } }
L_003D6110:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003D6114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D611Cu);  if (depth < kMaxDepth) unit_00A9(c, 273u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003D611Cu) [[unlikely]] return; }
L_003D611C:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);  if (t) { goto L_003D6140; } }
L_003D6130:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003D6134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D613Cu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003D613Cu) [[unlikely]] return; }
L_003D613C:
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 1;
L_003D6140:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003D6144:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D6160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6174u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D6174u) [[unlikely]] return; }
L_003D6174:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + 7392u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D61B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D61F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7392u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D61E0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D61E0u) [[unlikely]] return; }
L_003D61E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D61FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D61F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D61F8u) [[unlikely]] return; }
L_003D61F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D61FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D6210:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6238u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D6238u) [[unlikely]] return; }
L_003D6238:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D6258; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6254u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 231u, depth + 1u); else { c.pc = 0x003D6160u; return; } if (c.pc != 0x003D6254u) [[unlikely]] return; }
L_003D6254:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D6258:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D6270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 44u);  c.pc = t; return; }
L_003D6280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6294u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 250u, depth + 1u); else { c.pc = 0x003D6450u; return; } if (c.pc != 0x003D6294u) [[unlikely]] return; }
L_003D6294:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D62A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003D62A4u) [[unlikely]] return; }
L_003D62A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[5] = c.r[4].w[0];
    c.f[3] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[5]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[5]);
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[5]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[4]);
    st32((c.r[16].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D6310:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_003D63A4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003D6368; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D6364; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6364u);  if (depth < kMaxDepth) unit_00AD(c, 250u, depth + 1u); else { c.pc = 0x003D6450u; return; } if (c.pc != 0x003D6364u) [[unlikely]] return; }
L_003D6364:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003D6368:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6374u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003D6374u) [[unlikely]] return; }
L_003D6374:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[3] = ld32((c.r[29].w[0] + 52u));
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 12;
L_003D63A4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D63D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D63E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003D63E4u) [[unlikely]] return; }
L_003D63E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003D6404; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003D6404:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D6410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003D643C; }
    set32(c.r[6], c.r[4].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6438u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x003D6438u) [[unlikely]] return; }
L_003D6438:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D643C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D6450:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003D64A8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_003D6490; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_003D64C4; } }
L_003D6490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6498u); c.r[16].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003D6498u) [[unlikely]] return; }
L_003D6498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D64A0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003D64A0u) [[unlikely]] return; }
L_003D64A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);  if (t) { goto L_003D64C0; } }
L_003D64A8:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D64BCu); c.r[16].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003D64BCu) [[unlikely]] return; }
L_003D64BC:
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_003D64C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003D64C4:
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[3].w[0] + 8u));  goto L_003D64FC; }
    c.f[12] = ld32((c.r[3].w[0]));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[3].w[0] + 12u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D64E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 258u, depth + 1u); else { c.pc = 0x003D6580u; return; } if (c.pc != 0x003D64E4u) [[unlikely]] return; }
L_003D64E4:
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 68u), c.f[0]);
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_003D6558; } }
L_003D64FC:
    set32(c.r[5], c.r[16].w[0] + 2u);
    c.f[13] = ld32((c.r[3].w[0] + 20u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D650Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 258u, depth + 1u); else { c.pc = 0x003D6580u; return; } if (c.pc != 0x003D650Cu) [[unlikely]] return; }
L_003D650C:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[21] = c.f[0];
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.f[13] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6528u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 258u, depth + 1u); else { c.pc = 0x003D6580u; return; } if (c.pc != 0x003D6528u) [[unlikely]] return; }
L_003D6528:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6544u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 258u, depth + 1u); else { c.pc = 0x003D6580u; return; } if (c.pc != 0x003D6544u) [[unlikely]] return; }
L_003D6544:
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 68u), c.f[20]);
    st32((c.r[17].w[0] + 72u), c.f[21]);
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 5;
L_003D6558:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D6580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[21] = c.f[12];
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::sub(c.fcr31, c.f[13], c.f[21]);  if (t) { goto L_003D65F0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003D65F4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003D65D4; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D65D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003D6604; } }
L_003D65D0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003D65D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D65DCu);  if (depth < kMaxDepth) unit_00A9(c, 273u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003D65DCu) [[unlikely]] return; }
L_003D65DC:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);  if (t) { goto L_003D6600; } }
L_003D65F0:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003D65F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D65FCu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003D65FCu) [[unlikely]] return; }
L_003D65FC:
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 1;
L_003D6600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003D6604:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D6620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6634u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D6634u) [[unlikely]] return; }
L_003D6634:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + 7456u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D6670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D66B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7456u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D66A0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D66A0u) [[unlikely]] return; }
L_003D66A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D66BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D66B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D66B8u) [[unlikely]] return; }
L_003D66B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D66BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D66D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D66F8u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D66F8u) [[unlikely]] return; }
L_003D66F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D6718; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6714u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 261u, depth + 1u); else { c.pc = 0x003D6620u; return; } if (c.pc != 0x003D6714u) [[unlikely]] return; }
L_003D6714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D6718:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D6730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 43u);  c.pc = t; return; }
L_003D6740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6754u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 279u, depth + 1u); else { c.pc = 0x003D68B0u; return; } if (c.pc != 0x003D6754u) [[unlikely]] return; }
L_003D6754:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D6780:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[20] = c.f[12];  if (t) { goto L_003D67D4; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[12] = c.f[20];  goto L_003D67D8; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D67D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D67D4u);  if (depth < kMaxDepth) unit_00AD(c, 279u, depth + 1u); else { c.pc = 0x003D68B0u; return; } if (c.pc != 0x003D67D4u) [[unlikely]] return; }
L_003D67D4:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003D67D8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D67E4u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003D67E4u) [[unlikely]] return; }
L_003D67E4:
    c.f[3] = ld32((c.r[29].w[0] + 52u));
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[3]);
    st32((c.r[16].w[0] + 56u), c.f[2]);
    st32((c.r[16].w[0] + 60u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D6830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6844u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003D6844u) [[unlikely]] return; }
L_003D6844:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003D6864; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003D6864:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D6870:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003D689C; }
    set32(c.r[6], c.r[4].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6898u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x003D6898u) [[unlikely]] return; }
L_003D6898:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D689C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D68B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003D6908; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_003D68F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_003D6924; } }
L_003D68F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D68F8u); c.r[16].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003D68F8u) [[unlikely]] return; }
L_003D68F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6900u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003D6900u) [[unlikely]] return; }
L_003D6900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);  if (t) { goto L_003D6920; } }
L_003D6908:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D691Cu); c.r[16].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003D691Cu) [[unlikely]] return; }
L_003D691C:
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_003D6920:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003D6924:
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[3].w[0] + 8u));  goto L_003D695C; }
    c.f[12] = ld32((c.r[3].w[0]));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[3].w[0] + 12u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6944u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 287u, depth + 1u); else { c.pc = 0x003D69E0u; return; } if (c.pc != 0x003D6944u) [[unlikely]] return; }
L_003D6944:
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 68u), c.f[0]);
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_003D69B8; } }
L_003D695C:
    set32(c.r[5], c.r[16].w[0] + 2u);
    c.f[13] = ld32((c.r[3].w[0] + 20u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D696Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 287u, depth + 1u); else { c.pc = 0x003D69E0u; return; } if (c.pc != 0x003D696Cu) [[unlikely]] return; }
L_003D696C:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[21] = c.f[0];
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.f[13] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6988u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 287u, depth + 1u); else { c.pc = 0x003D69E0u; return; } if (c.pc != 0x003D6988u) [[unlikely]] return; }
L_003D6988:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D69A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 287u, depth + 1u); else { c.pc = 0x003D69E0u; return; } if (c.pc != 0x003D69A4u) [[unlikely]] return; }
L_003D69A4:
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 68u), c.f[20]);
    st32((c.r[17].w[0] + 72u), c.f[21]);
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 5;
L_003D69B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D69E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[21] = c.f[12];
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::sub(c.fcr31, c.f[13], c.f[21]);  if (t) { goto L_003D6A50; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003D6A54; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003D6A34; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D6A30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003D6A64; } }
L_003D6A30:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003D6A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6A3Cu);  if (depth < kMaxDepth) unit_00A9(c, 273u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003D6A3Cu) [[unlikely]] return; }
L_003D6A3C:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);  if (t) { goto L_003D6A60; } }
L_003D6A50:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003D6A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6A5Cu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003D6A5Cu) [[unlikely]] return; }
L_003D6A5C:
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 1;
L_003D6A60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003D6A64:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D6A80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6A94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D6A94u) [[unlikely]] return; }
L_003D6A94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + 7520u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D6AD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D6B18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7520u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6B00u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D6B00u) [[unlikely]] return; }
L_003D6B00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D6B1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6B18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D6B18u) [[unlikely]] return; }
L_003D6B18:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D6B1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D6B30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6B58u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D6B58u) [[unlikely]] return; }
L_003D6B58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D6B78; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6B74u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 290u, depth + 1u); else { c.pc = 0x003D6A80u; return; } if (c.pc != 0x003D6B74u) [[unlikely]] return; }
L_003D6B74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D6B78:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D6B90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 47u);  c.pc = t; return; }
L_003D6BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6BB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 309u, depth + 1u); else { c.pc = 0x003D6CE0u; return; } if (c.pc != 0x003D6BB4u) [[unlikely]] return; }
L_003D6BB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6BBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 332u, depth + 1u); else { c.pc = 0x003D7070u; return; } if (c.pc != 0x003D6BBCu) [[unlikely]] return; }
L_003D6BBC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D6BE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D6C38; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003D6C30; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D6C2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6C2Cu);  if (depth < kMaxDepth) unit_00AD(c, 309u, depth + 1u); else { c.pc = 0x003D6CE0u; return; } if (c.pc != 0x003D6C2Cu) [[unlikely]] return; }
L_003D6C2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003D6C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6C38u);  if (depth < kMaxDepth) unit_00AD(c, 332u, depth + 1u); else { c.pc = 0x003D7070u; return; } if (c.pc != 0x003D6C38u) [[unlikely]] return; }
L_003D6C38:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D6C60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6C74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003D6C74u) [[unlikely]] return; }
L_003D6C74:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003D6C94; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003D6C94:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D6CA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003D6CCC; }
    set32(c.r[6], c.r[4].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6CC8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x003D6CC8u) [[unlikely]] return; }
L_003D6CC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D6CCC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D6CE0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003D6D3C; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_003D6D24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_003D6D58; } }
L_003D6D24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6D2Cu); c.r[16].d[0] = ld16((c.r[2].w[0] + 86u));  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003C3B40u; return; } if (c.pc != 0x003D6D2Cu) [[unlikely]] return; }
L_003D6D2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6D34u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003D6D34u) [[unlikely]] return; }
L_003D6D34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);  if (t) { goto L_003D6D54; } }
L_003D6D3C:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.f[12] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6D50u); c.r[16].d[0] = ld16((c.r[3].w[0] + 86u));  if (depth < kMaxDepth) unit_0014(c, 400u, depth + 1u); else { c.pc = 0x00173CE0u; return; } if (c.pc != 0x003D6D50u) [[unlikely]] return; }
L_003D6D50:
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_003D6D54:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003D6D58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6D6Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 329u, depth + 1u); else { c.pc = 0x003D6FD0u; return; } if (c.pc != 0x003D6D6Cu) [[unlikely]] return; }
L_003D6D6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[3].w[0] + 48u));  goto L_003D6E08; }
    c.f[12] = ld32((c.r[3].w[0] + 16u));
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.f[13] = ld32((c.r[3].w[0] + 20u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6DA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 329u, depth + 1u); else { c.pc = 0x003D6FD0u; return; } if (c.pc != 0x003D6DA4u) [[unlikely]] return; }
L_003D6DA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[16].w[0] + 2u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[20] = c.r[2].w[0];
    st32((c.r[29].w[0] + 136u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.f[13] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6DD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 329u, depth + 1u); else { c.pc = 0x003D6FD0u; return; } if (c.pc != 0x003D6DD4u) [[unlikely]] return; }
L_003D6DD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[16].w[0] + 3u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 56u));
    c.f[13] = ld32((c.r[2].w[0] + 60u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6E00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 329u, depth + 1u); else { c.pc = 0x003D6FD0u; return; } if (c.pc != 0x003D6E00u) [[unlikely]] return; }
L_003D6E00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 112u), c.f[0]);  if (t) { goto L_003D6EE8; } }
L_003D6E08:
    set32(c.r[5], c.r[16].w[0] + 3u);
    c.f[13] = ld32((c.r[3].w[0] + 52u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6E18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 329u, depth + 1u); else { c.pc = 0x003D6FD0u; return; } if (c.pc != 0x003D6E18u) [[unlikely]] return; }
L_003D6E18:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[21] = c.f[0];
    set32(c.r[5], c.r[16].w[0] + 2u);
    c.f[12] = ld32((c.r[2].w[0] + 32u));
    c.f[13] = ld32((c.r[2].w[0] + 36u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6E34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 329u, depth + 1u); else { c.pc = 0x003D6FD0u; return; } if (c.pc != 0x003D6E34u) [[unlikely]] return; }
L_003D6E34:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[20] = c.f[0];
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.f[13] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6E50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 329u, depth + 1u); else { c.pc = 0x003D6FD0u; return; } if (c.pc != 0x003D6E50u) [[unlikely]] return; }
L_003D6E50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[16].w[0] + 6u);
    st32((c.r[29].w[0] + 132u), c.f[20]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 136u), c.f[21]);
    c.f[20] = c.r[2].w[0];
    st32((c.r[29].w[0] + 128u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 40u));
    c.f[13] = ld32((c.r[2].w[0] + 44u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6E80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 329u, depth + 1u); else { c.pc = 0x003D6FD0u; return; } if (c.pc != 0x003D6E80u) [[unlikely]] return; }
L_003D6E80:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[22] = c.f[0];
    set32(c.r[5], c.r[16].w[0] + 5u);
    c.f[12] = ld32((c.r[2].w[0] + 24u));
    c.f[13] = ld32((c.r[2].w[0] + 28u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6E9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 329u, depth + 1u); else { c.pc = 0x003D6FD0u; return; } if (c.pc != 0x003D6E9Cu) [[unlikely]] return; }
L_003D6E9C:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[21] = c.f[0];
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.f[13] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6EB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 329u, depth + 1u); else { c.pc = 0x003D6FD0u; return; } if (c.pc != 0x003D6EB8u) [[unlikely]] return; }
L_003D6EB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[16].w[0] + 7u);
    st32((c.r[29].w[0] + 116u), c.f[21]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 120u), c.f[22]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = ld32((c.r[2].w[0] + 56u));
    c.f[13] = ld32((c.r[2].w[0] + 60u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6EE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 329u, depth + 1u); else { c.pc = 0x003D6FD0u; return; } if (c.pc != 0x003D6EE4u) [[unlikely]] return; }
L_003D6EE4:
    st32((c.r[17].w[0] + 112u), c.f[0]);
    c.budget -= 1;
L_003D6EE8:
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6EF8u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003D6EF8u) [[unlikely]] return; }
L_003D6EF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 116u));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[21] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6F14u); c.f[12] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003D6F14u) [[unlikely]] return; }
L_003D6F14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[22] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6F30u); c.f[12] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003D6F30u) [[unlikely]] return; }
L_003D6F30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 128u);
    st32((c.r[17].w[0] + 96u), c.f[0]);
    st32((c.r[17].w[0] + 100u), c.f[22]);
    st32((c.r[17].w[0] + 104u), c.f[21]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6F5Cu); st32((c.r[17].w[0] + 108u), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003D6F5Cu) [[unlikely]] return; }
L_003D6F5C:
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6F90u); st32((c.r[29].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003D6F90u) [[unlikely]] return; }
L_003D6F90:
    c.f[3] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = ld32((c.r[29].w[0] + 92u));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[17].w[0] + 80u), c.f[0]);
    st32((c.r[17].w[0] + 84u), c.f[3]);
    st32((c.r[17].w[0] + 88u), c.f[2]);
    st32((c.r[17].w[0] + 92u), c.f[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003D6FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[21] = c.f[12];
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::sub(c.fcr31, c.f[13], c.f[21]);  if (t) { goto L_003D7040; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = c.f[20];  goto L_003D7044; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003D7024; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D7020; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003D7054; } }
L_003D7020:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003D7024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D702Cu);  if (depth < kMaxDepth) unit_00A9(c, 273u, depth + 1u); else { c.pc = 0x003C6AA0u; return; } if (c.pc != 0x003D702Cu) [[unlikely]] return; }
L_003D702C:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);  if (t) { goto L_003D7050; } }
L_003D7040:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003D7044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D704Cu);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003D704Cu) [[unlikely]] return; }
L_003D704C:
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 1;
L_003D7050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003D7054:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D7070:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D708Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003D708Cu) [[unlikely]] return; }
L_003D708C:
    c.f[3] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.f[4] = ld32((c.r[16].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[2] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D70BCu); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D70BCu) [[unlikely]] return; }
L_003D70BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D70C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x003D70C4u) [[unlikely]] return; }
L_003D70C4:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D70D4u); set32(c.r[5], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003D70D4u) [[unlikely]] return; }
L_003D70D4:
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[2] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7104u); st32((c.r[29].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003D7104u) [[unlikely]] return; }
L_003D7104:
    c.f[3] = ld32((c.r[29].w[0] + 52u));
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[3]);
    st32((c.r[16].w[0] + 56u), c.f[2]);
    st32((c.r[16].w[0] + 60u), c.f[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D7140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7154u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D7154u) [[unlikely]] return; }
L_003D7154:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + 7584u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D7190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D71D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7584u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D71C0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D71C0u) [[unlikely]] return; }
L_003D71C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D71DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D71D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D71D8u) [[unlikely]] return; }
L_003D71D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D71DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D71F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7218u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D7218u) [[unlikely]] return; }
L_003D7218:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D7238; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7234u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 338u, depth + 1u); else { c.pc = 0x003D7140u; return; } if (c.pc != 0x003D7234u) [[unlikely]] return; }
L_003D7234:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D7238:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D7250:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 46u);  c.pc = t; return; }
L_003D7260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.f[1] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D72A4u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003D72A4u) [[unlikely]] return; }
L_003D72A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = c.r[3].w[0];
    c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D72C8u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003D72C8u) [[unlikely]] return; }
L_003D72C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[1] = c.r[3].w[0];
    c.f[21] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D72ECu); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x003D72ECu) [[unlikely]] return; }
L_003D72EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[16].w[0] + 96u), c.f[0]);
    st32((c.r[16].w[0] + 100u), c.f[21]);
    st32((c.r[16].w[0] + 104u), c.f[20]);
    st32((c.r[16].w[0] + 108u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.f[3] = ld32((c.r[4].w[0] + 20u));
    c.f[2] = ld32((c.r[4].w[0] + 24u));
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    st32((c.r[16].w[0] + 84u), c.f[2]);
    st32((c.r[16].w[0] + 88u), c.f[3]);
    st32((c.r[16].w[0] + 92u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 36;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D7380:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D739Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 333u, depth + 1u); else { c.pc = 0x003C3B70u; return; } if (c.pc != 0x003D739Cu) [[unlikely]] return; }
L_003D739C:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[4] = ld32((c.r[16].w[0] + 64u));
    c.f[3] = ld32((c.r[3].w[0] + 28u));
    c.f[2] = 0u;
    c.f[1] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D73C8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D73C8u) [[unlikely]] return; }
L_003D73C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D73D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 7u, depth + 1u); else { c.pc = 0x00184090u; return; } if (c.pc != 0x003D73D0u) [[unlikely]] return; }
L_003D73D0:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D73E0u); set32(c.r[5], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x003D73E0u) [[unlikely]] return; }
L_003D73E0:
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[2] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7410u); st32((c.r[29].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003D7410u) [[unlikely]] return; }
L_003D7410:
    c.f[3] = ld32((c.r[29].w[0] + 52u));
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[3]);
    st32((c.r[16].w[0] + 56u), c.f[2]);
    st32((c.r[16].w[0] + 60u), c.f[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D7440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7454u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 331u, depth + 1u); else { c.pc = 0x003C3B20u; return; } if (c.pc != 0x003D7454u) [[unlikely]] return; }
L_003D7454:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003D7474; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003D7474:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D7480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003D74AC; }
    set32(c.r[6], c.r[4].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D74A8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x003D74A8u) [[unlikely]] return; }
L_003D74A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003D74AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D74C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D74D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D74D4u) [[unlikely]] return; }
L_003D74D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 7648u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 13;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003D755C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[5], c.r[2].w[0] << 2);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7518u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003D7518u) [[unlikely]] return; }
L_003D7518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_003D7558; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003D7550; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D7530:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7530u | kUnwind; return; } goto L_003D7530; } }
L_003D7550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003D756C; } }
L_003D7558:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003D755C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003D756C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D7580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D75E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 7648u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 6;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003D75C4; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D75C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003D75C0u) [[unlikely]] return; }
L_003D75C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D75C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D75CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D75CCu) [[unlikely]] return; }
L_003D75CC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D75E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D75E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D75E4u) [[unlikely]] return; }
L_003D75E4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D75E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D7600:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7628u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D7628u) [[unlikely]] return; }
L_003D7628:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D7648; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7644u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 361u, depth + 1u); else { c.pc = 0x003D74C0u; return; } if (c.pc != 0x003D7644u) [[unlikely]] return; }
L_003D7644:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D7648:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D7660:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 603u);  c.pc = t; return; }
L_003D7670:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003D7894; }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[3].w[0] + 80u));  goto L_003D76BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7890; } }
    c.f[0] = ld32((c.r[3].w[0] + 80u));
    c.budget -= 1;
L_003D76BC:
    st32((c.r[18].w[0] + 56u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D76CCu); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x00158EF0u; return; } if (c.pc != 0x003D76CCu) [[unlikely]] return; }
L_003D76CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D77B0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003D77B0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D7700:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.f[0] = 0u;
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.f[12] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D7748; } }
    c.f[12] = fp::ee::add(c.fcr31, c.f[20], c.f[12]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D7748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_003D7748; } }
    c.budget -= 1;
L_003D7748:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7790; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D7790; } }
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    set32(c.r[6], c.f[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D778Cu); set32(c.r[4], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D778Cu) [[unlikely]] return; }
L_003D778C:
    c.budget -= 1;
L_003D7790:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7700u | kUnwind; return; } goto L_003D7700; } }
L_003D77B0:
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003D7888; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D77C0:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.f[0] = 0u;
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.f[12] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D7808; } }
    c.f[12] = fp::ee::add(c.fcr31, c.f[20], c.f[12]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D7808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_003D7808; } }
    c.budget -= 1;
L_003D7808:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7870; } }
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D7870; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D7860; } }
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    set32(c.r[6], c.f[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D785Cu); set32(c.r[4], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D785Cu) [[unlikely]] return; }
L_003D785C:
    c.budget -= 1;
L_003D7860:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 4;
L_003D7870:
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D77C0u | kUnwind; return; } goto L_003D77C0; } }
    c.budget -= 1;
L_003D7888:
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.budget -= 2;
L_003D7890:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003D7894:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D78B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D78C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D78C4u) [[unlikely]] return; }
L_003D78C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 7712u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 13;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003D794C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    set32(c.r[5], c.r[2].w[0] << 2);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7908u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x003D7908u) [[unlikely]] return; }
L_003D7908:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_003D7948; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003D7940; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D7920:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7920u | kUnwind; return; } goto L_003D7920; } }
L_003D7940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003D795C; } }
L_003D7948:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003D794C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003D795C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D7970:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D79D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 7712u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 6;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003D79B4; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D79B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 246u, depth + 1u); else { c.pc = 0x001720C0u; return; } if (c.pc != 0x003D79B0u) [[unlikely]] return; }
L_003D79B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D79B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D79BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D79BCu) [[unlikely]] return; }
L_003D79BC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D79D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D79D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D79D4u) [[unlikely]] return; }
L_003D79D4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D79D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D79F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7A18u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D7A18u) [[unlikely]] return; }
L_003D7A18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D7A38; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7A34u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 379u, depth + 1u); else { c.pc = 0x003D78B0u; return; } if (c.pc != 0x003D7A34u) [[unlikely]] return; }
L_003D7A34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D7A38:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D7A50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 604u);  c.pc = t; return; }
L_003D7A60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003D7C08; }
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003D7C04; } }
    c.f[1] = ld32((c.r[18].w[0] + 80u));
    st32((c.r[19].w[0] + 52u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D7B48; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003D7B48; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D7AC8:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_003D7B28; } }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D7B28; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7B28; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7B24u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 397u, depth + 1u); else { c.pc = 0x003D7C20u; return; } if (c.pc != 0x003D7B24u) [[unlikely]] return; }
L_003D7B24:
    c.budget -= 1;
L_003D7B28:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7AC8u | kUnwind; return; } goto L_003D7AC8; } }
L_003D7B48:
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003D7BF0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D7B58:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.f[0] = 0u;
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.f[1] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D7BA8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D7BD8; } }
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D7BD8; } }
L_003D7BA8:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7BC8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7BC4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 397u, depth + 1u); else { c.pc = 0x003D7C20u; return; } if (c.pc != 0x003D7BC4u) [[unlikely]] return; }
L_003D7BC4:
    c.budget -= 1;
L_003D7BC8:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003D7BD8:
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D7B58u | kUnwind; return; } goto L_003D7B58; } }
    c.budget -= 1;
L_003D7BF0:
    c.f[12] = ld32((c.r[19].w[0] + 52u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7BFCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x003D7BFCu) [[unlikely]] return; }
L_003D7BFC:
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    st32((c.r[19].w[0] + 56u), c.f[0]);
    c.budget -= 2;
L_003D7C04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003D7C08:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D7C20:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[12] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003D7C60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7C60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x00158EB0u; return; } if (c.pc != 0x003D7C60u) [[unlikely]] return; }
L_003D7C60:
    set32(c.r[6], ld32((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7C70u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x00158FC0u; return; } if (c.pc != 0x003D7C70u) [[unlikely]] return; }
L_003D7C70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7C88u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D7C88u) [[unlikely]] return; }
L_003D7C88:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7CA4u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D7CA4u) [[unlikely]] return; }
L_003D7CA4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7CC0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x003D7CC0u) [[unlikely]] return; }
L_003D7CC0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[3] = ld32((c.r[2].w[0] + 15952u));
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.f[6] = ld32((c.r[19].w[0] + 16u));
    c.f[5] = ld32((c.r[19].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[2].w[0] + 15956u));
    c.f[4] = ld32((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[2].w[0] + 15960u));
    st32((c.r[29].w[0] + 112u), c.f[3]);
    st32((c.r[29].w[0] + 116u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 15964u));
    st32((c.r[29].w[0] + 120u), c.f[1]);
    st32((c.r[29].w[0] + 112u), c.f[4]);
    st32((c.r[29].w[0] + 124u), c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[5]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7D1Cu); st32((c.r[29].w[0] + 120u), c.f[6]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003D7D1Cu) [[unlikely]] return; }
L_003D7D1C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7D34u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x003D7D34u) [[unlikely]] return; }
L_003D7D34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[3] = ld32((c.r[2].w[0] + 15936u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[6] = ld32((c.r[19].w[0] + 40u));
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.f[5] = ld32((c.r[19].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[2].w[0] + 15940u));
    c.f[4] = ld32((c.r[19].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[2].w[0] + 15944u));
    st32((c.r[29].w[0] + 96u), c.f[3]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 15948u));
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 96u), c.f[4]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[5]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7D8Cu); st32((c.r[29].w[0] + 104u), c.f[6]);  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x003D7D8Cu) [[unlikely]] return; }
L_003D7D8C:
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.f[12] = ld32((c.r[19].w[0]));
    set32(c.r[6], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[2], ld32((c.r[2].w[0] + 148u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7DA8u); set32(c.r[4], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D7DA8u) [[unlikely]] return; }
L_003D7DA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003D7DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7DE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 301u, depth + 1u); else { c.pc = 0x003C3650u; return; } if (c.pc != 0x003D7DE4u) [[unlikely]] return; }
L_003D7DE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 7776u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D7E10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D7E78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[3], c.r[3].w[0] + 7776u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003D7E58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7E54u);  if (depth < kMaxDepth) unit_00AE(c, 9u, depth + 1u); else { c.pc = 0x003D8120u; return; } if (c.pc != 0x003D7E54u) [[unlikely]] return; }
L_003D7E54:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003D7E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7E60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 303u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003D7E60u) [[unlikely]] return; }
L_003D7E60:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003D7E7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7E78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 300u, depth + 1u); else { c.pc = 0x003C3640u; return; } if (c.pc != 0x003D7E78u) [[unlikely]] return; }
L_003D7E78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003D7E7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D7E90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7EB8u); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x003D7EB8u) [[unlikely]] return; }
L_003D7EB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D7ED8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7ED4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 407u, depth + 1u); else { c.pc = 0x003D7DD0u; return; } if (c.pc != 0x003D7ED4u) [[unlikely]] return; }
L_003D7ED4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D7ED8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D7EF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 252u);  c.pc = t; return; }
L_003D7F00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7F1Cu); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003D7F1Cu) [[unlikely]] return; }
L_003D7F1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  goto L_003D7F48; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0xF2000000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7F44u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x003D7F44u) [[unlikely]] return; }
L_003D7F44:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_003D7F48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003D7FF4; }
    set32(c.r[4], 0u + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7F5Cu); set32(c.r[17], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x003D7F5Cu) [[unlikely]] return; }
L_003D7F5C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { st32((c.r[16].w[0] + 48u), c.r[6].w[0]);  goto L_003D7F80; }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7F78u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 147u, depth + 1u); else { c.pc = 0x0015D710u; return; } if (c.pc != 0x003D7F78u) [[unlikely]] return; }
L_003D7F78:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), c.r[6].w[0]);
    c.budget -= 2;
L_003D7F80:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D7FF0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[4], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 32u)));  goto L_003D7FAC; }
    st32((c.r[5].w[0] + 52u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 56u), 0u);  if (t) { goto L_003D7FDC; } }
L_003D7FAC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  goto L_003D7FE0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[5].sd[0] < 0) { c.r[5].d[0] = c.r[6].d[0] + 0ull;  goto L_003D7FD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7FCCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 156u, depth + 1u); else { c.pc = 0x00158F70u; return; } if (c.pc != 0x003D7FCCu) [[unlikely]] return; }
L_003D7FCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7FDC; } }
L_003D7FD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7FDCu);  if (depth < kMaxDepth) unit_000E(c, 148u, depth + 1u); else { c.pc = 0x00158E90u; return; } if (c.pc != 0x003D7FDCu) [[unlikely]] return; }
L_003D7FDC:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_003D7FE0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 88u));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_00AE(c, 2u, depth); } }
L_003D7FF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003D7FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7FFCu);  if (depth < kMaxDepth) unit_00AE(c, 9u, depth + 1u); else { c.pc = 0x003D8120u; return; } if (c.pc != 0x003D7FFCu) [[unlikely]] return; }
L_003D7FFC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
    [[clang::musttail]] return unit_00AE(c, 1u, depth);
}

}
