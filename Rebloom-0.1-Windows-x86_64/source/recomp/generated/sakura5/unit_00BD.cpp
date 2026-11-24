#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BD[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 10,
    0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 18,
    0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33,
    0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 37, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0,
    0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68,
    0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79,
    0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83,
    0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0,
    0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0,
    0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0,
    0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0,
    0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 233, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0,
    0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 285, 0, 286, 0, 287, 0, 288, 0, 0, 0, 289, 0, 0, 0,
    0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 295, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0,
    301, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305,
    0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 315, 0, 316, 0,
    317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 320, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 324, 0,
    325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0,
    336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341,
    0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347,
    0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0,
    353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0,
    0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0,
    0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0,
    0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0,
    0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 382, 0, 383, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0,
    389, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0,
    396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0,
    402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 406, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 0, 412, 0, 0,
    0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0,
    0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426,
    0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00BD(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00414000;
    case 2u: goto L_00414010;
    case 3u: goto L_004140B4;
    case 4u: goto L_004140C8;
    case 5u: goto L_004140E0;
    case 6u: goto L_00414118;
    case 7u: goto L_0041413C;
    case 8u: goto L_00414160;
    case 9u: goto L_00414174;
    case 10u: goto L_0041417C;
    case 11u: goto L_00414194;
    case 12u: goto L_004141A8;
    case 13u: goto L_004141B0;
    case 14u: goto L_004141B8;
    case 15u: goto L_004141D0;
    case 16u: goto L_004141E0;
    case 17u: goto L_004141E8;
    case 18u: goto L_004141FC;
    case 19u: goto L_0041420C;
    case 20u: goto L_0041421C;
    case 21u: goto L_00414228;
    case 22u: goto L_00414234;
    case 23u: goto L_00414274;
    case 24u: goto L_00414288;
    case 25u: goto L_004142A8;
    case 26u: goto L_004142BC;
    case 27u: goto L_004142D4;
    case 28u: goto L_004142F8;
    case 29u: goto L_004143A0;
    case 30u: goto L_004143EC;
    case 31u: goto L_00414404;
    case 32u: goto L_00414470;
    case 33u: goto L_004144FC;
    case 34u: goto L_00414514;
    case 35u: goto L_0041454C;
    case 36u: goto L_00414570;
    case 37u: goto L_0041458C;
    case 38u: goto L_00414594;
    case 39u: goto L_0041459C;
    case 40u: goto L_004145AC;
    case 41u: goto L_004145C4;
    case 42u: goto L_004145D4;
    case 43u: goto L_004145E4;
    case 44u: goto L_004145F4;
    case 45u: goto L_00414604;
    case 46u: goto L_00414610;
    case 47u: goto L_0041461C;
    case 48u: goto L_00414644;
    case 49u: goto L_00414658;
    case 50u: goto L_00414670;
    case 51u: goto L_00414694;
    case 52u: goto L_00414730;
    case 53u: goto L_00414784;
    case 54u: goto L_00414790;
    case 55u: goto L_004147A8;
    case 56u: goto L_004147C8;
    case 57u: goto L_00414810;
    case 58u: goto L_00414844;
    case 59u: goto L_00414850;
    case 60u: goto L_0041486C;
    case 61u: goto L_00414888;
    case 62u: goto L_00414894;
    case 63u: goto L_004148BC;
    case 64u: goto L_004148E8;
    case 65u: goto L_00414910;
    case 66u: goto L_00414950;
    case 67u: goto L_00414974;
    case 68u: goto L_0041497C;
    case 69u: goto L_00414988;
    case 70u: goto L_00414990;
    case 71u: goto L_00414A20;
    case 72u: goto L_00414A90;
    case 73u: goto L_00414AB4;
    case 74u: goto L_00414AF4;
    case 75u: goto L_00414B08;
    case 76u: goto L_00414B28;
    case 77u: goto L_00414B3C;
    case 78u: goto L_00414B5C;
    case 79u: goto L_00414B7C;
    case 80u: goto L_00414B88;
    case 81u: goto L_00414BB4;
    case 82u: goto L_00414BD8;
    case 83u: goto L_00414BFC;
    case 84u: goto L_00414C20;
    case 85u: goto L_00414C38;
    case 86u: goto L_00414C4C;
    case 87u: goto L_00414C60;
    case 88u: goto L_00414C74;
    case 89u: goto L_00414CA0;
    case 90u: goto L_00414D08;
    case 91u: goto L_00414D2C;
    case 92u: goto L_00414D68;
    case 93u: goto L_00414D8C;
    case 94u: goto L_00414DA4;
    case 95u: goto L_00414DC0;
    case 96u: goto L_00414DE0;
    case 97u: goto L_00414DF4;
    case 98u: goto L_00414E00;
    case 99u: goto L_00414E2C;
    case 100u: goto L_00414E50;
    case 101u: goto L_00414E74;
    case 102u: goto L_00414E98;
    case 103u: goto L_00414EB0;
    case 104u: goto L_00414EC4;
    case 105u: goto L_00414ED8;
    case 106u: goto L_00414EEC;
    case 107u: goto L_00414F00;
    case 108u: goto L_00414F14;
    case 109u: goto L_00414F28;
    case 110u: goto L_00414F3C;
    case 111u: goto L_00414F50;
    case 112u: goto L_00414F80;
    case 113u: goto L_00414F9C;
    case 114u: goto L_00414FC0;
    case 115u: goto L_00414FD4;
    case 116u: goto L_00414FE8;
    case 117u: goto L_00415000;
    case 118u: goto L_0041502C;
    case 119u: goto L_0041503C;
    case 120u: goto L_0041504C;
    case 121u: goto L_00415060;
    case 122u: goto L_00415070;
    case 123u: goto L_00415090;
    case 124u: goto L_004150D0;
    case 125u: goto L_004150F4;
    case 126u: goto L_00415104;
    case 127u: goto L_0041512C;
    case 128u: goto L_00415144;
    case 129u: goto L_00415190;
    case 130u: goto L_004151C0;
    case 131u: goto L_004151C8;
    case 132u: goto L_004151DC;
    case 133u: goto L_004151F4;
    case 134u: goto L_00415204;
    case 135u: goto L_00415224;
    case 136u: goto L_00415264;
    case 137u: goto L_00415298;
    case 138u: goto L_004152B8;
    case 139u: goto L_004152D0;
    case 140u: goto L_004152E4;
    case 141u: goto L_00415310;
    case 142u: goto L_0041532C;
    case 143u: goto L_00415344;
    case 144u: goto L_00415350;
    case 145u: goto L_00415368;
    case 146u: goto L_0041538C;
    case 147u: goto L_004153A0;
    case 148u: goto L_004153B0;
    case 149u: goto L_004153E0;
    case 150u: goto L_00415414;
    case 151u: goto L_00415438;
    case 152u: goto L_00415458;
    case 153u: goto L_00415470;
    case 154u: goto L_00415494;
    case 155u: goto L_004154B4;
    case 156u: goto L_004154C8;
    case 157u: goto L_004154E0;
    case 158u: goto L_00415514;
    case 159u: goto L_0041551C;
    case 160u: goto L_00415570;
    case 161u: goto L_004155B4;
    case 162u: goto L_004155D4;
    case 163u: goto L_004155FC;
    case 164u: goto L_00415640;
    case 165u: goto L_00415690;
    case 166u: goto L_004156A0;
    case 167u: goto L_004156E4;
    case 168u: goto L_00415720;
    case 169u: goto L_00415740;
    case 170u: goto L_0041577C;
    case 171u: goto L_00415790;
    case 172u: goto L_004157C4;
    case 173u: goto L_004157E0;
    case 174u: goto L_00415810;
    case 175u: goto L_00415830;
    case 176u: goto L_0041584C;
    case 177u: goto L_00415854;
    case 178u: goto L_00415860;
    case 179u: goto L_0041589C;
    case 180u: goto L_004158A8;
    case 181u: goto L_004158C0;
    case 182u: goto L_004158F0;
    case 183u: goto L_00415920;
    case 184u: goto L_00415960;
    case 185u: goto L_00415984;
    case 186u: goto L_00415990;
    case 187u: goto L_004159AC;
    case 188u: goto L_004159D0;
    case 189u: goto L_004159E4;
    case 190u: goto L_00415A0C;
    case 191u: goto L_00415A20;
    case 192u: goto L_00415A34;
    case 193u: goto L_00415A54;
    case 194u: goto L_00415A70;
    case 195u: goto L_00415A88;
    case 196u: goto L_00415AB0;
    case 197u: goto L_00415AC0;
    case 198u: goto L_00415AD8;
    case 199u: goto L_00415AFC;
    case 200u: goto L_00415B10;
    case 201u: goto L_00415B3C;
    case 202u: goto L_00415B44;
    case 203u: goto L_00415B7C;
    case 204u: goto L_00415BB0;
    case 205u: goto L_00415BC8;
    case 206u: goto L_00415BEC;
    case 207u: goto L_00415C0C;
    case 208u: goto L_00415C30;
    case 209u: goto L_00415C44;
    case 210u: goto L_00415C68;
    case 211u: goto L_00415C7C;
    case 212u: goto L_00415C90;
    case 213u: goto L_00415CB8;
    case 214u: goto L_00415CF8;
    case 215u: goto L_00415D10;
    case 216u: goto L_00415D68;
    case 217u: goto L_00415D70;
    case 218u: goto L_00415DB8;
    case 219u: goto L_00415DD0;
    case 220u: goto L_00415DE0;
    case 221u: goto L_00415E0C;
    case 222u: goto L_00415E3C;
    case 223u: goto L_00415E8C;
    case 224u: goto L_00415E9C;
    case 225u: goto L_00415EB0;
    case 226u: goto L_00415EC8;
    case 227u: goto L_00415F50;
    case 228u: goto L_00415FA4;
    case 229u: goto L_00415FB0;
    case 230u: goto L_00415FBC;
    case 231u: goto L_00415FD8;
    case 232u: goto L_00415FE8;
    case 233u: goto L_00415FF4;
    case 234u: goto L_0041601C;
    case 235u: goto L_00416060;
    case 236u: goto L_00416078;
    case 237u: goto L_004160A0;
    case 238u: goto L_004160E4;
    case 239u: goto L_00416110;
    case 240u: goto L_00416120;
    case 241u: goto L_0041614C;
    case 242u: goto L_00416168;
    case 243u: goto L_004161A0;
    case 244u: goto L_004161D0;
    case 245u: goto L_004161F0;
    case 246u: goto L_00416250;
    case 247u: goto L_00416290;
    case 248u: goto L_004162BC;
    case 249u: goto L_004162D8;
    case 250u: goto L_00416348;
    case 251u: goto L_00416390;
    case 252u: goto L_00416404;
    case 253u: goto L_00416414;
    case 254u: goto L_00416424;
    case 255u: goto L_00416464;
    case 256u: goto L_004164CC;
    case 257u: goto L_004164E8;
    case 258u: goto L_004165E0;
    case 259u: goto L_00416648;
    case 260u: goto L_004166A4;
    case 261u: goto L_00416700;
    case 262u: goto L_00416788;
    case 263u: goto L_004167A8;
    case 264u: goto L_004167BC;
    case 265u: goto L_00416818;
    case 266u: goto L_00416834;
    case 267u: goto L_004168CC;
    case 268u: goto L_004168DC;
    case 269u: goto L_004168EC;
    case 270u: goto L_0041691C;
    case 271u: goto L_00416924;
    case 272u: goto L_0041693C;
    case 273u: goto L_00416990;
    case 274u: goto L_004169D0;
    case 275u: goto L_004169D8;
    case 276u: goto L_004169F4;
    case 277u: goto L_00416A04;
    case 278u: goto L_00416A20;
    case 279u: goto L_00416A28;
    case 280u: goto L_00416A50;
    case 281u: goto L_00416A5C;
    case 282u: goto L_00416A74;
    case 283u: goto L_00416AB4;
    case 284u: goto L_00416AC0;
    case 285u: goto L_00416AC8;
    case 286u: goto L_00416AD0;
    case 287u: goto L_00416AD8;
    case 288u: goto L_00416AE0;
    case 289u: goto L_00416AF0;
    case 290u: goto L_00416B08;
    case 291u: goto L_00416B34;
    case 292u: goto L_00416B48;
    case 293u: goto L_00416B5C;
    case 294u: goto L_00416B70;
    case 295u: goto L_00416B78;
    case 296u: goto L_00416B90;
    case 297u: goto L_00416BB8;
    case 298u: goto L_00416BCC;
    case 299u: goto L_00416BE0;
    case 300u: goto L_00416BE8;
    case 301u: goto L_00416C00;
    case 302u: goto L_00416C08;
    case 303u: goto L_00416C30;
    case 304u: goto L_00416C6C;
    case 305u: goto L_00416C7C;
    case 306u: goto L_00416C90;
    case 307u: goto L_00416CD0;
    case 308u: goto L_00416D10;
    case 309u: goto L_00416D80;
    case 310u: goto L_00416DD0;
    case 311u: goto L_00416DE8;
    case 312u: goto L_00416E40;
    case 313u: goto L_00416E5C;
    case 314u: goto L_00416E64;
    case 315u: goto L_00416E70;
    case 316u: goto L_00416E78;
    case 317u: goto L_00416E80;
    case 318u: goto L_00416E9C;
    case 319u: goto L_00416EB0;
    case 320u: goto L_00416EB8;
    case 321u: goto L_00416EC0;
    case 322u: goto L_00416ED8;
    case 323u: goto L_00416EF0;
    case 324u: goto L_00416EF8;
    case 325u: goto L_00416F00;
    case 326u: goto L_00416F20;
    case 327u: goto L_00416F44;
    case 328u: goto L_00416F58;
    case 329u: goto L_00416F70;
    case 330u: goto L_00416FA0;
    case 331u: goto L_00416FD8;
    case 332u: goto L_00416FF0;
    case 333u: goto L_00417000;
    case 334u: goto L_00417030;
    case 335u: goto L_00417068;
    case 336u: goto L_00417080;
    case 337u: goto L_00417090;
    case 338u: goto L_004170C0;
    case 339u: goto L_004170D4;
    case 340u: goto L_004170E8;
    case 341u: goto L_004170FC;
    case 342u: goto L_00417110;
    case 343u: goto L_00417124;
    case 344u: goto L_00417138;
    case 345u: goto L_00417154;
    case 346u: goto L_00417168;
    case 347u: goto L_0041717C;
    case 348u: goto L_00417190;
    case 349u: goto L_004171A4;
    case 350u: goto L_004171B8;
    case 351u: goto L_004171CC;
    case 352u: goto L_004171EC;
    case 353u: goto L_00417200;
    case 354u: goto L_00417224;
    case 355u: goto L_0041723C;
    case 356u: goto L_00417250;
    case 357u: goto L_00417264;
    case 358u: goto L_00417278;
    case 359u: goto L_0041728C;
    case 360u: goto L_004172A0;
    case 361u: goto L_004172C0;
    case 362u: goto L_004172D0;
    case 363u: goto L_004172F0;
    case 364u: goto L_0041730C;
    case 365u: goto L_00417320;
    case 366u: goto L_00417358;
    case 367u: goto L_00417370;
    case 368u: goto L_004173A4;
    case 369u: goto L_004173B0;
    case 370u: goto L_004173E0;
    case 371u: goto L_00417404;
    case 372u: goto L_00417464;
    case 373u: goto L_00417474;
    case 374u: goto L_004174C0;
    case 375u: goto L_004174D4;
    case 376u: goto L_004174E0;
    case 377u: goto L_004174F0;
    case 378u: goto L_00417508;
    case 379u: goto L_00417520;
    case 380u: goto L_00417534;
    case 381u: goto L_00417540;
    case 382u: goto L_00417588;
    case 383u: goto L_00417590;
    case 384u: goto L_00417598;
    case 385u: goto L_004175B0;
    case 386u: goto L_004175C8;
    case 387u: goto L_004175E0;
    case 388u: goto L_004175F4;
    case 389u: goto L_00417600;
    case 390u: goto L_00417608;
    case 391u: goto L_00417620;
    case 392u: goto L_00417638;
    case 393u: goto L_00417650;
    case 394u: goto L_00417664;
    case 395u: goto L_00417670;
    case 396u: goto L_00417680;
    case 397u: goto L_00417698;
    case 398u: goto L_004176B0;
    case 399u: goto L_004176C8;
    case 400u: goto L_004176DC;
    case 401u: goto L_004176F0;
    case 402u: goto L_00417700;
    case 403u: goto L_00417710;
    case 404u: goto L_00417720;
    case 405u: goto L_0041773C;
    case 406u: goto L_00417784;
    case 407u: goto L_00417790;
    case 408u: goto L_004177B4;
    case 409u: goto L_004177C4;
    case 410u: goto L_004177D8;
    case 411u: goto L_004177E0;
    case 412u: goto L_004177F4;
    case 413u: goto L_00417814;
    case 414u: goto L_00417824;
    case 415u: goto L_0041782C;
    case 416u: goto L_00417840;
    case 417u: goto L_0041785C;
    case 418u: goto L_00417878;
    case 419u: goto L_004178D0;
    case 420u: goto L_00417900;
    case 421u: goto L_00417928;
    case 422u: goto L_00417950;
    case 423u: goto L_00417974;
    case 424u: goto L_0041798C;
    case 425u: goto L_004179B0;
    case 426u: goto L_004179FC;
    case 427u: goto L_00417A0C;
    case 428u: goto L_00417A28;
    case 429u: goto L_00417A40;
    case 430u: goto L_00417AD0;
    case 431u: goto L_00417B2C;
    case 432u: goto L_00417B54;
    case 433u: goto L_00417B6C;
    case 434u: goto L_00417B7C;
    case 435u: goto L_00417BE0;
    case 436u: goto L_00417C40;
    case 437u: goto L_00417C50;
    case 438u: goto L_00417C70;
    case 439u: goto L_00417CB4;
    case 440u: goto L_00417CD0;
    case 441u: goto L_00417CFC;
    case 442u: goto L_00417D70;
    case 443u: goto L_00417E14;
    case 444u: goto L_00417E24;
    case 445u: goto L_00417E38;
    case 446u: goto L_00417E8C;
    case 447u: goto L_00417EB8;
    case 448u: goto L_00417F0C;
    case 449u: goto L_00417F28;
    case 450u: goto L_00417FB8;
    default: bad_entry(c, 0x00414000u); return;
    }
L_00414000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00414010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 202u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00414328; } }
    set32(c.r[3], 0u + 201u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));  goto L_00414308; }
    set32(c.r[3], 0u + 200u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));  goto L_004142F0; }
    set32(c.r[3], 0u + 104u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));  goto L_004142CC; }
    set32(c.r[3], 0u + 103u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 1120u)));  goto L_00414250; }
    set32(c.r[3], 0u + 102u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004141C8; } }
    set32(c.r[3], 0u + 101u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0041418C; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00414134; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));  goto L_004140D8; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 1116u)));  goto L_0041409C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00414388; } }
L_0041409C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));  goto L_004140BC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004140B4u); set32(c.r[6], 0u + 67u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x004140B4u) [[unlikely]] return; }
L_004140B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  if (t) { goto L_004140CC; } }
L_004140BC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004140C8u); set32(c.r[6], 0u + 71u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x004140C8u) [[unlikely]] return; }
L_004140C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_004140CC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414384; } }
L_004140D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004140E0u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x004140E0u) [[unlikely]] return; }
L_004140E0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 200u);  goto L_00414108; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 100u);  goto L_00414100; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414110; } }
L_00414100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414384; } }
L_00414108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414384; } }
L_00414110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414118u);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x00414118u) [[unlikely]] return; }
L_00414118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00414384; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 200u);
    st32((c.r[16].w[0] + 1120u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414384; } }
L_00414134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041413Cu);  if (depth < kMaxDepth) unit_00C0(c, 303u, depth + 1u); else { c.pc = 0x00422190u; return; } if (c.pc != 0x0041413Cu) [[unlikely]] return; }
L_0041413C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00414384; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1116u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));  goto L_00414168; }
    set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414160u); set32(c.r[6], 0u + 68u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00414160u) [[unlikely]] return; }
L_00414160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414174; } }
L_00414168:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414174u); set32(c.r[6], 0u + 72u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00414174u) [[unlikely]] return; }
L_00414174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041417Cu);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x001B5C70u; return; } if (c.pc != 0x0041417Cu) [[unlikely]] return; }
L_0041417C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414384; } }
L_0041418C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414194u);  if (depth < kMaxDepth) unit_00C0(c, 331u, depth + 1u); else { c.pc = 0x00422440u; return; } if (c.pc != 0x00414194u) [[unlikely]] return; }
L_00414194:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004141A8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 338u, depth + 1u); else { c.pc = 0x004224A0u; return; } if (c.pc != 0x004141A8u) [[unlikely]] return; }
L_004141A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004141B0u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x004141B0u) [[unlikely]] return; }
L_004141B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004141B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 311u, depth + 1u); else { c.pc = 0x00422280u; return; } if (c.pc != 0x004141B8u) [[unlikely]] return; }
L_004141B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414384; } }
L_004141C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004141D0u);  if (depth < kMaxDepth) unit_00C0(c, 303u, depth + 1u); else { c.pc = 0x00422190u; return; } if (c.pc != 0x004141D0u) [[unlikely]] return; }
L_004141D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00414384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004141E0u);  if (depth < kMaxDepth) unit_00C0(c, 304u, depth + 1u); else { c.pc = 0x004221A0u; return; } if (c.pc != 0x004141E0u) [[unlikely]] return; }
L_004141E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004141E8u); st32((c.r[16].w[0] + 1120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 301u, depth + 1u); else { c.pc = 0x001B5C00u; return; } if (c.pc != 0x004141E8u) [[unlikely]] return; }
L_004141E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 1120u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_00414244; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004141FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 66u, depth + 1u); else { c.pc = 0x00414950u; return; } if (c.pc != 0x004141FCu) [[unlikely]] return; }
L_004141FC:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041420Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BD(c, 181u, depth + 1u); else { c.pc = 0x004158C0u; return; } if (c.pc != 0x0041420Cu) [[unlikely]] return; }
L_0041420C:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041421Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BD(c, 164u, depth + 1u); else { c.pc = 0x00415640u; return; } if (c.pc != 0x0041421Cu) [[unlikely]] return; }
L_0041421C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414228u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BD(c, 182u, depth + 1u); else { c.pc = 0x004158F0u; return; } if (c.pc != 0x00414228u) [[unlikely]] return; }
L_00414228:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414234u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BD(c, 169u, depth + 1u); else { c.pc = 0x00415740u; return; } if (c.pc != 0x00414234u) [[unlikely]] return; }
L_00414234:
    set32(c.r[3], ld32((c.r[16].w[0] + 1124u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 1124u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 4;
L_00414244:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414384; } }
L_00414250:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 1116u)));  goto L_00414290; }
    set32(c.r[2], ld32((c.r[16].w[0] + 1116u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));  goto L_0041427C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414274u); set32(c.r[6], 0u + 69u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00414274u) [[unlikely]] return; }
L_00414274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  if (t) { goto L_004142C0; } }
L_0041427C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414288u); set32(c.r[6], 0u + 73u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00414288u) [[unlikely]] return; }
L_00414288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004142BC; } }
L_00414290:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));  goto L_004142B0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004142A8u); set32(c.r[6], 0u + 70u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x004142A8u) [[unlikely]] return; }
L_004142A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004142BC; } }
L_004142B0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004142BCu); set32(c.r[6], 0u + 74u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x004142BCu) [[unlikely]] return; }
L_004142BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_004142C0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414384; } }
L_004142CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004142D4u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x004142D4u) [[unlikely]] return; }
L_004142D4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 200u);  goto L_004142E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414384; } }
L_004142E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414384; } }
L_004142F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004142F8u);  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x004142F8u) [[unlikely]] return; }
L_004142F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414384; } }
L_00414308:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00414384; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414384; } }
L_00414328:
    set32(c.r[3], ld32((c.r[16].w[0] + 1120u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_00414360; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17056u));
    c.f[1] = ld32((c.r[4].w[0] + 17060u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17064u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_00414384; } }
L_00414360:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17072u));
    c.f[1] = ld32((c.r[4].w[0] + 17076u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17080u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 9;
L_00414384:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00414388:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004143A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));  goto L_00414414; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));  goto L_004143FC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 88u)));  goto L_004143DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00414464; } }
L_004143DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004143ECu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 341u, depth + 1u); else { c.pc = 0x004224D0u; return; } if (c.pc != 0x004143ECu) [[unlikely]] return; }
L_004143EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414460; } }
L_004143FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414404u);  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x00414404u) [[unlikely]] return; }
L_00414404:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414460; } }
L_00414414:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00414460; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    c.f[2] = ld32((c.r[5].w[0] + 17088u));
    c.f[1] = ld32((c.r[4].w[0] + 17092u));
    c.f[0] = ld32((c.r[3].w[0] + 17096u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 14;
L_00414460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00414464:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00414470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 202u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004146C4; } }
    set32(c.r[3], 0u + 201u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));  goto L_004146A4; }
    set32(c.r[3], 0u + 200u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));  goto L_0041468C; }
    set32(c.r[3], 0u + 103u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));  goto L_00414668; }
    set32(c.r[3], 0u + 102u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 1120u)));  goto L_0041462C; }
    set32(c.r[3], 0u + 101u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004145BC; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00414568; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));  goto L_0041450C; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));  goto L_004144F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00414724; } }
L_004144F0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004144FCu); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x004144FCu) [[unlikely]] return; }
L_004144FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414720; } }
L_0041450C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414514u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00414514u) [[unlikely]] return; }
L_00414514:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 200u);  goto L_0041453C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 100u);  goto L_00414534; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414544; } }
L_00414534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414720; } }
L_0041453C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414720; } }
L_00414544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041454Cu);  if (depth < kMaxDepth) unit_00C1(c, 568u, depth + 1u); else { c.pc = 0x004271B0u; return; } if (c.pc != 0x0041454Cu) [[unlikely]] return; }
L_0041454C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00414720; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 200u);
    st32((c.r[16].w[0] + 1120u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414720; } }
L_00414568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414570u);  if (depth < kMaxDepth) unit_00C0(c, 303u, depth + 1u); else { c.pc = 0x00422190u; return; } if (c.pc != 0x00414570u) [[unlikely]] return; }
L_00414570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00414720; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041458Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 344u, depth + 1u); else { c.pc = 0x00422500u; return; } if (c.pc != 0x0041458Cu) [[unlikely]] return; }
L_0041458C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414594u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x00414594u) [[unlikely]] return; }
L_00414594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041459Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 311u, depth + 1u); else { c.pc = 0x00422280u; return; } if (c.pc != 0x0041459Cu) [[unlikely]] return; }
L_0041459C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004145ACu); set32(c.r[6], 0u + 25u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x004145ACu) [[unlikely]] return; }
L_004145AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414720; } }
L_004145BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004145C4u);  if (depth < kMaxDepth) unit_00C0(c, 303u, depth + 1u); else { c.pc = 0x00422190u; return; } if (c.pc != 0x004145C4u) [[unlikely]] return; }
L_004145C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00414720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004145D4u);  if (depth < kMaxDepth) unit_00C0(c, 304u, depth + 1u); else { c.pc = 0x004221A0u; return; } if (c.pc != 0x004145D4u) [[unlikely]] return; }
L_004145D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 1120u), c.r[2].w[0]);  if (t) { goto L_0041461C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004145E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 66u, depth + 1u); else { c.pc = 0x00414950u; return; } if (c.pc != 0x004145E4u) [[unlikely]] return; }
L_004145E4:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004145F4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BD(c, 181u, depth + 1u); else { c.pc = 0x004158C0u; return; } if (c.pc != 0x004145F4u) [[unlikely]] return; }
L_004145F4:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414604u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BD(c, 164u, depth + 1u); else { c.pc = 0x00415640u; return; } if (c.pc != 0x00414604u) [[unlikely]] return; }
L_00414604:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414610u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BD(c, 182u, depth + 1u); else { c.pc = 0x004158F0u; return; } if (c.pc != 0x00414610u) [[unlikely]] return; }
L_00414610:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041461Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BD(c, 169u, depth + 1u); else { c.pc = 0x00415740u; return; } if (c.pc != 0x0041461Cu) [[unlikely]] return; }
L_0041461C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414720; } }
L_0041462C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));  goto L_0041464C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 1128u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414644u); set32(c.r[6], 0u + 26u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00414644u) [[unlikely]] return; }
L_00414644:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  if (t) { goto L_0041465C; } }
L_0041464C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414658u); set32(c.r[6], 0u + 27u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00414658u) [[unlikely]] return; }
L_00414658:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_0041465C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414720; } }
L_00414668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414670u);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00414670u) [[unlikely]] return; }
L_00414670:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 200u);  goto L_00414684; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414720; } }
L_00414684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414720; } }
L_0041468C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414694u);  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x00414694u) [[unlikely]] return; }
L_00414694:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414720; } }
L_004146A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00414720; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00414720; } }
L_004146C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 1120u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_004146FC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17104u));
    c.f[1] = ld32((c.r[4].w[0] + 17108u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17112u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_00414720; } }
L_004146FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17120u));
    c.f[1] = ld32((c.r[4].w[0] + 17124u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17128u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 9;
L_00414720:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00414724:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00414730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 9;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  goto L_004147C0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_00414764; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004147F4; } }
L_00414764:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
L_00414784:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414790u); set32(c.r[5], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_008B(c, 486u, depth + 1u); else { c.pc = 0x0034FCB0u; return; } if (c.pc != 0x00414790u) [[unlikely]] return; }
L_00414790:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00414784u | kUnwind; return; } goto L_00414784; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004147A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 57u, depth + 1u); else { c.pc = 0x00414810u; return; } if (c.pc != 0x004147A8u) [[unlikely]] return; }
L_004147A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004147F0; } }
L_004147C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004147C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 486u, depth + 1u); else { c.pc = 0x0034FCB0u; return; } if (c.pc != 0x004147C8u) [[unlikely]] return; }
L_004147C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17136u));
    c.f[1] = ld32((c.r[4].w[0] + 17140u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17144u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_004147F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004147F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00414810:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 13;
L_00414844:
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 112u);  if (t) { goto L_00414870; } }
    goto L_00414854;
L_00414850:
    set32(c.r[16], c.r[3].w[0] + 112u);
    c.budget -= 1;
L_00414854:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_00414870; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041486Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041486Cu) [[unlikely]] return; }
L_0041486C:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00414870:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00414844u | kUnwind; return; } goto L_00414844; }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] << 5);
    c.budget -= 2;
L_00414888:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 3;
L_00414894:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[20], c.r[3].w[0] + 144u);  if (t) { goto L_004148C0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0]), 0u);  goto L_004148C0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004148BCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004148BCu) [[unlikely]] return; }
L_004148BC:
    st32((c.r[20].w[0]), 0u);
    c.budget -= 1;
L_004148C0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00414894u | kUnwind; return; } goto L_00414894; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 5);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00414888u | kUnwind; return; } goto L_00414888; }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 2;
L_004148E8:
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 1104u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 1104u);  if (t) { goto L_00414914; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_00414914; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00414910u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00414910u) [[unlikely]] return; }
L_00414910:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00414914:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004148E8u | kUnwind; return; } goto L_004148E8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00414950:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414974u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00C0(c, 313u, depth + 1u); else { c.pc = 0x004222A0u; return; } if (c.pc != 0x00414974u) [[unlikely]] return; }
L_00414974:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] << 7);
    c.budget -= 2;
L_0041497C:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[19].w[0] << 3);
    set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_00414988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414990u); set32(c.r[4], c.r[18].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 314u, depth + 1u); else { c.pc = 0x004222B0u; return; } if (c.pc != 0x00414990u) [[unlikely]] return; }
L_00414990:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] << 4);  goto L_004149C8; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5u)));
    set32(c.r[4], c.r[18].w[0] << 4);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 336u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 340u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 6u));
    st32((c.r[4].w[0] + 344u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 7u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 348u), c.r[3].w[0]);  if (t) { goto L_004149DC; } }
L_004149C8:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 336u), 0u);
    st32((c.r[3].w[0] + 340u), 0u);
    st32((c.r[3].w[0] + 344u), 0u);
    st32((c.r[3].w[0] + 348u), 0u);
    c.budget -= 5;
L_004149DC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00414988u | kUnwind; return; } goto L_00414988; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 7);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041497Cu | kUnwind; return; } goto L_0041497C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00414A20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[21].w[0] << 3);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[5], 0u + 1u);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] + 144u);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[2], 0u + 10u);
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    mmi::divu(c, 0, c.r[17].w[0], c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[6], 0u + 100u);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414A90u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414A90u) [[unlikely]] return; }
L_00414A90:
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], ld32((c.r[20].w[0])));
    mmi::divu(c, 0, c.r[17].w[0], c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 101u);
    c.r[2].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414AB4u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414AB4u) [[unlikely]] return; }
L_00414AB4:
    set32(c.r[19], c.r[18].w[0] << 4);
    set32(c.r[7], 0u + 8u);
    set32(c.r[18], c.r[21].w[0] << 7);
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[2].w[0] + 336u);
    set32(c.r[2], ld32((c.r[2].w[0] + 336u)));
    c.budget -= 9;
    if (c.r[2].d[0] == c.r[7].d[0]) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00414B10; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0])));  goto L_00414AE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_00414B44; } }
L_00414AE8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414AF4u); set32(c.r[6], 0u + 102u);  if (depth < kMaxDepth) unit_00A8(c, 249u, depth + 1u); else { c.pc = 0x003C2ED0u; return; } if (c.pc != 0x00414AF4u) [[unlikely]] return; }
L_00414AF4:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 102u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414B08u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414B08u) [[unlikely]] return; }
L_00414B08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0])));  if (t) { goto L_00414B60; } }
L_00414B10:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[7].d[0] = c.r[2].d[0] << 56;
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414B28u); set32(c.r[6], 0u + 102u);  if (depth < kMaxDepth) unit_00A8(c, 249u, depth + 1u); else { c.pc = 0x003C2ED0u; return; } if (c.pc != 0x00414B28u) [[unlikely]] return; }
L_00414B28:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 102u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414B3Cu); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414B3Cu) [[unlikely]] return; }
L_00414B3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414B5C; } }
L_00414B44:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[7].d[0] = c.r[2].d[0] << 56;
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414B5Cu); set32(c.r[6], 0u + 102u);  if (depth < kMaxDepth) unit_00A8(c, 249u, depth + 1u); else { c.pc = 0x003C2ED0u; return; } if (c.pc != 0x00414B5Cu) [[unlikely]] return; }
L_00414B5C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00414B60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0])));  goto L_00414C28; }
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 340u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414B7Cu); set32(c.r[16], c.r[2].w[0] + 340u);  if (depth < kMaxDepth) unit_00C0(c, 415u, depth + 1u); else { c.pc = 0x00422CB0u; return; } if (c.pc != 0x00414B7Cu) [[unlikely]] return; }
L_00414B7C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414B88u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 416u, depth + 1u); else { c.pc = 0x00422CE0u; return; } if (c.pc != 0x00414B88u) [[unlikely]] return; }
L_00414B88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 10u);
    set32(c.r[5], 0u + 1u);
    mmi::divu(c, 0, c.r[17].w[0], c.r[2].w[0]);
    set32(c.r[6], 0u + 103u);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414BB4u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414BB4u) [[unlikely]] return; }
L_00414BB4:
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], ld32((c.r[20].w[0])));
    mmi::divu(c, 0, c.r[17].w[0], c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 104u);
    c.r[2].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414BD8u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414BD8u) [[unlikely]] return; }
L_00414BD8:
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], ld32((c.r[20].w[0])));
    mmi::divu(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 106u);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414BFCu); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414BFCu) [[unlikely]] return; }
L_00414BFC:
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], ld32((c.r[20].w[0])));
    mmi::divu(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 107u);
    c.r[2].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414C20u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414C20u) [[unlikely]] return; }
L_00414C20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00414C78; } }
L_00414C28:
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 103u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414C38u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414C38u) [[unlikely]] return; }
L_00414C38:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414C4Cu); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414C4Cu) [[unlikely]] return; }
L_00414C4C:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 106u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414C60u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414C60u) [[unlikely]] return; }
L_00414C60:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 107u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414C74u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414C74u) [[unlikely]] return; }
L_00414C74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00414C78:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00414CA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[21].w[0] << 3);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[6], 0u + 200u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1104u)));
    set32(c.r[20], c.r[2].w[0] + 1104u);
    set32(c.r[2], 0u + 10u);
    mmi::divu(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414D08u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414D08u) [[unlikely]] return; }
L_00414D08:
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], ld32((c.r[20].w[0])));
    mmi::divu(c, 0, c.r[17].w[0], c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 201u);
    c.r[2].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414D2Cu); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414D2Cu) [[unlikely]] return; }
L_00414D2C:
    set32(c.r[19], c.r[18].w[0] << 4);
    set32(c.r[18], c.r[21].w[0] << 7);
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 336u);
    set32(c.r[17], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0])));  goto L_00414EA0; }
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[7].d[0] = c.r[2].d[0] << 56;
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414D68u); set32(c.r[6], 0u + 202u);  if (depth < kMaxDepth) unit_00A8(c, 249u, depth + 1u); else { c.pc = 0x003C2ED0u; return; } if (c.pc != 0x00414D68u) [[unlikely]] return; }
L_00414D68:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0])));  goto L_00414D94; }
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 202u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414D8Cu); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414D8Cu) [[unlikely]] return; }
L_00414D8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);  if (t) { goto L_00414DA8; } }
L_00414D94:
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 202u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414DA4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414DA4u) [[unlikely]] return; }
L_00414DA4:
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_00414DA8:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 344u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414DC0u); set32(c.r[6], 0u + 208u);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414DC0u) [[unlikely]] return; }
L_00414DC0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[6], 0u + 209u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414DE0u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A8(c, 249u, depth + 1u); else { c.pc = 0x003C2ED0u; return; } if (c.pc != 0x00414DE0u) [[unlikely]] return; }
L_00414DE0:
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 340u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414DF4u); set32(c.r[16], c.r[2].w[0] + 340u);  if (depth < kMaxDepth) unit_00C0(c, 415u, depth + 1u); else { c.pc = 0x00422CB0u; return; } if (c.pc != 0x00414DF4u) [[unlikely]] return; }
L_00414DF4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414E00u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 416u, depth + 1u); else { c.pc = 0x00422CE0u; return; } if (c.pc != 0x00414E00u) [[unlikely]] return; }
L_00414E00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 10u);
    set32(c.r[5], 0u + 1u);
    mmi::divu(c, 0, c.r[17].w[0], c.r[2].w[0]);
    set32(c.r[6], 0u + 203u);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414E2Cu); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414E2Cu) [[unlikely]] return; }
L_00414E2C:
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], ld32((c.r[20].w[0])));
    mmi::divu(c, 0, c.r[17].w[0], c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 204u);
    c.r[2].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414E50u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414E50u) [[unlikely]] return; }
L_00414E50:
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], ld32((c.r[20].w[0])));
    mmi::divu(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 206u);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414E74u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414E74u) [[unlikely]] return; }
L_00414E74:
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], ld32((c.r[20].w[0])));
    mmi::divu(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 207u);
    c.r[2].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414E98u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414E98u) [[unlikely]] return; }
L_00414E98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00414F54; } }
L_00414EA0:
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 202u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414EB0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 249u, depth + 1u); else { c.pc = 0x003C2ED0u; return; } if (c.pc != 0x00414EB0u) [[unlikely]] return; }
L_00414EB0:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 202u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414EC4u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414EC4u) [[unlikely]] return; }
L_00414EC4:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414ED8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414ED8u) [[unlikely]] return; }
L_00414ED8:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 209u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414EECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 249u, depth + 1u); else { c.pc = 0x003C2ED0u; return; } if (c.pc != 0x00414EECu) [[unlikely]] return; }
L_00414EEC:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 209u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414F00u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414F00u) [[unlikely]] return; }
L_00414F00:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 203u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414F14u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414F14u) [[unlikely]] return; }
L_00414F14:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 204u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414F28u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414F28u) [[unlikely]] return; }
L_00414F28:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 206u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414F3Cu); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414F3Cu) [[unlikely]] return; }
L_00414F3C:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 207u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414F50u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414F50u) [[unlikely]] return; }
L_00414F50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00414F54:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00414F80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414F9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 480u, depth + 1u); else { c.pc = 0x0034FBF0u; return; } if (c.pc != 0x00414F9Cu) [[unlikely]] return; }
L_00414F9C:
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[5], 0u + 19u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414FC0u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414FC0u) [[unlikely]] return; }
L_00414FC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414FD4u); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00414FD4u) [[unlikely]] return; }
L_00414FD4:
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00414FE8u); set32(c.r[5], 0u + 14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00414FE8u) [[unlikely]] return; }
L_00414FE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00415000:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 11;
L_0041502C:
    c.f[21] = 0u;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041503Cu); c.f[20] = c.f[21];  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0041503Cu) [[unlikely]] return; }
L_0041503C:
    set32(c.r[2], c.r[19].w[0] << 5);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 4;
L_0041504C:
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415060u); set32(c.r[16], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_008B(c, 492u, depth + 1u); else { c.pc = 0x0034FD90u; return; } if (c.pc != 0x00415060u) [[unlikely]] return; }
L_00415060:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415070u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00415070u) [[unlikely]] return; }
L_00415070:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[21] = fp::ee::sub(c.fcr31, c.f[21], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415090u); c.f[20] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00415090u) [[unlikely]] return; }
L_00415090:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[2] = ld32((c.r[2].w[0] + 17152u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 120u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[2].w[0] + 17156u));
    st32((c.r[29].w[0] + 112u), c.f[2]);
    st32((c.r[29].w[0] + 112u), c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 17164u));
    st32((c.r[29].w[0] + 116u), c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[20]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004150D0u); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x004150D0u) [[unlikely]] return; }
L_004150D0:
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_00415134; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u - 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004150F4u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004150F4u) [[unlikely]] return; }
L_004150F4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415104u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 71u, depth + 1u); else { c.pc = 0x00414A20u; return; } if (c.pc != 0x00415104u) [[unlikely]] return; }
L_00415104:
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00415148; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[5].w[0] - 31696u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041512Cu); set32(c.r[8], 0u + 6u);  if (depth < kMaxDepth) unit_00C0(c, 521u, depth + 1u); else { c.pc = 0x00423E80u; return; } if (c.pc != 0x0041512Cu) [[unlikely]] return; }
L_0041512C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00415144; } }
L_00415134:
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00415144u); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00415144u) [[unlikely]] return; }
L_00415144:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00415148:
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041504Cu | kUnwind; return; } goto L_0041504C; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041502Cu | kUnwind; return; } goto L_0041502C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00415190:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004151C0u); c.f[20] = c.f[21];  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x004151C0u) [[unlikely]] return; }
L_004151C0:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_004151C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004151DCu); set32(c.r[18], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_008B(c, 492u, depth + 1u); else { c.pc = 0x0034FD90u; return; } if (c.pc != 0x004151DCu) [[unlikely]] return; }
L_004151DC:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004151F4u); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004151F4u) [[unlikely]] return; }
L_004151F4:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415204u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00415204u) [[unlikely]] return; }
L_00415204:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[21] = fp::ee::sub(c.fcr31, c.f[21], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415224u); c.f[20] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00415224u) [[unlikely]] return; }
L_00415224:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[2].w[0] + 17152u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 88u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[2].w[0] + 17156u));
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 80u), c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 17164u));
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[20]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415264u); st32((c.r[29].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00415264u) [[unlikely]] return; }
L_00415264:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004151C8u | kUnwind; return; } goto L_004151C8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], 0u + 13u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00415298u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00415298u) [[unlikely]] return; }
L_00415298:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004152B8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004152B8u) [[unlikely]] return; }
L_004152B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[5], 0u + 14u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004152D0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004152D0u) [[unlikely]] return; }
L_004152D0:
    set32(c.r[7], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], 0u + 14u);
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004152E4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004152E4u) [[unlikely]] return; }
L_004152E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00415310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041532Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008B(c, 492u, depth + 1u); else { c.pc = 0x0034FD90u; return; } if (c.pc != 0x0041532Cu) [[unlikely]] return; }
L_0041532C:
    st32((c.r[16].w[0] + 1104u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00415344u); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00415344u) [[unlikely]] return; }
L_00415344:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415350u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008B(c, 492u, depth + 1u); else { c.pc = 0x0034FD90u; return; } if (c.pc != 0x00415350u) [[unlikely]] return; }
L_00415350:
    st32((c.r[16].w[0] + 1108u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00415368u); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00415368u) [[unlikely]] return; }
L_00415368:
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1104u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041538Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041538Cu) [[unlikely]] return; }
L_0041538C:
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004153A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 89u, depth + 1u); else { c.pc = 0x00414CA0u; return; } if (c.pc != 0x004153A0u) [[unlikely]] return; }
L_004153A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004153B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 12u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004153E0u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004153E0u) [[unlikely]] return; }
L_004153E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], c.r[5].w[0] - 31696u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415414u); set32(c.r[8], 0u + 12u);  if (depth < kMaxDepth) unit_00C0(c, 521u, depth + 1u); else { c.pc = 0x00423E80u; return; } if (c.pc != 0x00415414u) [[unlikely]] return; }
L_00415414:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], 0u + 13u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00415438u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00415438u) [[unlikely]] return; }
L_00415438:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415458u); set32(c.r[7], 0u + 21u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00415458u) [[unlikely]] return; }
L_00415458:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], 0u + 14u);
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415470u); set32(c.r[7], c.r[2].w[0] + 23u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00415470u) [[unlikely]] return; }
L_00415470:
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1104u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00415494u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00415494u) [[unlikely]] return; }
L_00415494:
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1104u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004154B4u); set32(c.r[7], 0u + 7u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004154B4u) [[unlikely]] return; }
L_004154B4:
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004154C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 89u, depth + 1u); else { c.pc = 0x00414CA0u; return; } if (c.pc != 0x004154C8u) [[unlikely]] return; }
L_004154C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004154E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 13u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415514u); set32(c.r[7], 0u + 22u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00415514u) [[unlikely]] return; }
L_00415514:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 2;
L_0041551C:
    set32(c.r[4], c.r[3].w[0] - 1u);
    c.budget -= 3;
    if (c.r[4].sd[0] >= 0) { c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;  goto L_00415530; }
    set32(c.r[4], 0u + 7u);
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 2;
L_00415530:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_0041553C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0041553C:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[4].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00415574; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00415570; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00415570; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00415570u); set32(c.r[5], 0u + 13u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00415570u) [[unlikely]] return; }
L_00415570:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00415574:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0041551Cu | kUnwind; return; } goto L_0041551C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], c.r[5].w[0] - 31696u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004155B4u); set32(c.r[8], 0u + 20u);  if (depth < kMaxDepth) unit_00C0(c, 521u, depth + 1u); else { c.pc = 0x00423E80u; return; } if (c.pc != 0x004155B4u) [[unlikely]] return; }
L_004155B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004155D4u); set32(c.r[7], 0u + 7u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004155D4u) [[unlikely]] return; }
L_004155D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[5].w[0] - 31648u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1104u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004155FCu); set32(c.r[8], 0u + 8u);  if (depth < kMaxDepth) unit_00C0(c, 521u, depth + 1u); else { c.pc = 0x00423E80u; return; } if (c.pc != 0x004155FCu) [[unlikely]] return; }
L_004155FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 92u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_0041561C; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  goto L_00415620; }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_0041561C:
    st32((c.r[17].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 1;
L_00415620:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00415640:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00415690u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00415690u) [[unlikely]] return; }
L_00415690:
    set32(c.r[5], ld32((c.r[19].w[0] + 88u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004156A0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 71u, depth + 1u); else { c.pc = 0x00414A20u; return; } if (c.pc != 0x004156A0u) [[unlikely]] return; }
L_004156A0:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 88u)));  goto L_004156EC; }
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_004156C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_004156CC; } }
L_004156C8:
    set32(c.r[8], 0u + 2u);
    c.budget -= 1;
L_004156CC:
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[5].w[0] - 31696u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004156E4u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C0(c, 521u, depth + 1u); else { c.pc = 0x00423E80u; return; } if (c.pc != 0x004156E4u) [[unlikely]] return; }
L_004156E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00415724; } }
L_004156EC:
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_00415704; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 7u);  if (t) { goto L_00415708; } }
L_00415704:
    set32(c.r[8], 0u + 8u);
    c.budget -= 1;
L_00415708:
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[5].w[0] - 31696u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415720u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C0(c, 521u, depth + 1u); else { c.pc = 0x00423E80u; return; } if (c.pc != 0x00415720u) [[unlikely]] return; }
L_00415720:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00415724:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00415740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1104u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041577Cu); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041577Cu) [[unlikely]] return; }
L_0041577C:
    set32(c.r[5], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415790u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 89u, depth + 1u); else { c.pc = 0x00414CA0u; return; } if (c.pc != 0x00415790u) [[unlikely]] return; }
L_00415790:
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);  if (t) { goto L_004157A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_004157AC; } }
L_004157A8:
    set32(c.r[8], 0u + 2u);
    c.budget -= 1;
L_004157AC:
    set32(c.r[4], ld32((c.r[2].w[0] + 1104u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[5].w[0] - 31648u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004157C4u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00C0(c, 521u, depth + 1u); else { c.pc = 0x00423E80u; return; } if (c.pc != 0x004157C4u) [[unlikely]] return; }
L_004157C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004157E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[7], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 108u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415810u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00415810u) [[unlikely]] return; }
L_00415810:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415830u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A8(c, 255u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x00415830u) [[unlikely]] return; }
L_00415830:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[7], 0u + 19u);  goto L_0041583C; }
    set32(c.r[7], 0u + 18u);
    c.budget -= 1;
L_0041583C:
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041584Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041584Cu) [[unlikely]] return; }
L_0041584C:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00415854:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415860u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 164u, depth + 1u); else { c.pc = 0x00415640u; return; } if (c.pc != 0x00415860u) [[unlikely]] return; }
L_00415860:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00415854u | kUnwind; return; } goto L_00415854; }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);  if (t) { goto L_00415888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_0041588C; } }
L_00415888:
    set32(c.r[7], 0u + 2u);
    c.budget -= 1;
L_0041588C:
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041589Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041589Cu) [[unlikely]] return; }
L_0041589C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004158A8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 169u, depth + 1u); else { c.pc = 0x00415740u; return; } if (c.pc != 0x004158A8u) [[unlikely]] return; }
L_004158A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004158C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00414000u < 16384u) { entry = entries_00BD[(t - 0x00414000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004158F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1104u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00415920u); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00415920u) [[unlikely]] return; }
L_00415920:
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 92u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_00415940; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 92u), c.r[3].w[0]);  goto L_00415944; }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_00415940:
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 1;
L_00415944:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00415960:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 9;
L_00415984:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415990u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 181u, depth + 1u); else { c.pc = 0x004158C0u; return; } if (c.pc != 0x00415990u) [[unlikely]] return; }
L_00415990:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00415984u | kUnwind; return; } goto L_00415984; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004159ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 182u, depth + 1u); else { c.pc = 0x004158F0u; return; } if (c.pc != 0x004159ACu) [[unlikely]] return; }
L_004159AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004159D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004159E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 157u, depth + 1u); else { c.pc = 0x004154E0u; return; } if (c.pc != 0x004159E4u) [[unlikely]] return; }
L_004159E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00415A04; }
    st32((c.r[16].w[0] + 84u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00415A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415A0Cu);  if (depth < kMaxDepth) unit_00BD(c, 148u, depth + 1u); else { c.pc = 0x004153B0u; return; } if (c.pc != 0x00415A0Cu) [[unlikely]] return; }
L_00415A0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00415A20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415A34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 157u, depth + 1u); else { c.pc = 0x004154E0u; return; } if (c.pc != 0x00415A34u) [[unlikely]] return; }
L_00415A34:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_00415A4C; } }
    set32(c.r[2], 0u + 7u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 2;
L_00415A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415A54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 148u, depth + 1u); else { c.pc = 0x004153B0u; return; } if (c.pc != 0x00415A54u) [[unlikely]] return; }
L_00415A54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00415A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415A88u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 184u, depth + 1u); else { c.pc = 0x00415960u; return; } if (c.pc != 0x00415A88u) [[unlikely]] return; }
L_00415A88:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00415AA8; }
    st32((c.r[16].w[0] + 88u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00415AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415AB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BD(c, 173u, depth + 1u); else { c.pc = 0x004157E0u; return; } if (c.pc != 0x00415AB0u) [[unlikely]] return; }
L_00415AB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00415AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415AD8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 184u, depth + 1u); else { c.pc = 0x00415960u; return; } if (c.pc != 0x00415AD8u) [[unlikely]] return; }
L_00415AD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_00415AF0; } }
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_00415AF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415AFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 173u, depth + 1u); else { c.pc = 0x004157E0u; return; } if (c.pc != 0x00415AFCu) [[unlikely]] return; }
L_00415AFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00415B10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 10u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415B3Cu); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00415B3Cu) [[unlikely]] return; }
L_00415B3C:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 2;
L_00415B44:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 88u)));  goto L_00415B84; }
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 31696u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415B7Cu); set32(c.r[8], 0u + 5u);  if (depth < kMaxDepth) unit_00C0(c, 521u, depth + 1u); else { c.pc = 0x00423E80u; return; } if (c.pc != 0x00415B7Cu) [[unlikely]] return; }
L_00415B7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_00415BB4; } }
L_00415B84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 31696u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415BB0u); set32(c.r[8], 0u + 11u);  if (depth < kMaxDepth) unit_00C0(c, 521u, depth + 1u); else { c.pc = 0x00423E80u; return; } if (c.pc != 0x00415BB0u) [[unlikely]] return; }
L_00415BB0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00415BB4:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00415B44u | kUnwind; return; } goto L_00415B44; }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 2;
L_00415BC8:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] << 2);  goto L_00415C14; }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415BECu); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00415BECu) [[unlikely]] return; }
L_00415BEC:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415C0Cu); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00415C0Cu) [[unlikely]] return; }
L_00415C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_00415C48; } }
L_00415C14:
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[18], c.r[2].w[0] + 112u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415C30u); set32(c.r[7], 0u + 11u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00415C30u) [[unlikely]] return; }
L_00415C30:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415C44u); set32(c.r[7], 0u + 11u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00415C44u) [[unlikely]] return; }
L_00415C44:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00415C48:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00415BC8u | kUnwind; return; } goto L_00415BC8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415C68u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00415C68u) [[unlikely]] return; }
L_00415C68:
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415C7Cu); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00415C7Cu) [[unlikely]] return; }
L_00415C7C:
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[5], 0u + 19u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415C90u); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00415C90u) [[unlikely]] return; }
L_00415C90:
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[5].w[0] - 31648u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1104u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415CB8u); set32(c.r[8], 0u + 5u);  if (depth < kMaxDepth) unit_00C0(c, 521u, depth + 1u); else { c.pc = 0x00423E80u; return; } if (c.pc != 0x00415CB8u) [[unlikely]] return; }
L_00415CB8:
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_00415CD8; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 92u), c.r[2].w[0]);  goto L_00415CDC; }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_00415CD8:
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 1;
L_00415CDC:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1104u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00415CF8u); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00415CF8u) [[unlikely]] return; }
L_00415CF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00415D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00415D38; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00415D54; } }
L_00415D38:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00415D54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415D68u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00C0(c, 435u, depth + 1u); else { c.pc = 0x004230B0u; return; } if (c.pc != 0x00415D68u) [[unlikely]] return; }
L_00415D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415D70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 436u, depth + 1u); else { c.pc = 0x004230E0u; return; } if (c.pc != 0x00415D70u) [[unlikely]] return; }
L_00415D70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00415D8C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00415DA4; } }
L_00415D8C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_00415DA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415DB8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00BC(c, 490u, depth + 1u); else { c.pc = 0x004136B0u; return; } if (c.pc != 0x00415DB8u) [[unlikely]] return; }
L_00415DB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00415DD0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004137A0u | kUnwind; return; } [[clang::musttail]] return unit_00BC(c, 498u, depth); }
L_00415DE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415E0Cu); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 433u, depth + 1u); else { c.pc = 0x00423030u; return; } if (c.pc != 0x00415E0Cu) [[unlikely]] return; }
L_00415E0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15008u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0] + 80u), 0u);
    st32((c.r[19].w[0] + 84u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 88u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 92u), 0u);
    st32((c.r[19].w[0] + 96u), 0u);
    st32((c.r[19].w[0] + 100u), 0u);
    st32((c.r[19].w[0] + 104u), 0u);
    c.budget -= 12;
L_00415E3C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 112u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00415E3Cu | kUnwind; return; } goto L_00415E3C; } }
    st32((c.r[19].w[0] + 160u), 0u);
    st32((c.r[19].w[0] + 164u), 0u);
    st32((c.r[19].w[0] + 168u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 196u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 872u);  goto L_00415E94; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 80u), 0u);  goto L_00415E90; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00415E8Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00415E8Cu) [[unlikely]] return; }
L_00415E8C:
    st32((c.r[19].w[0] + 80u), 0u);
    c.budget -= 1;
L_00415E90:
    set32(c.r[4], 0u + 872u);
    c.budget -= 1;
L_00415E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415E9Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00415E9Cu) [[unlikely]] return; }
L_00415E9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 80u), c.r[2].w[0]);  goto L_00415EB4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415EB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 421u, depth + 1u); else { c.pc = 0x001B6BB0u; return; } if (c.pc != 0x00415EB0u) [[unlikely]] return; }
L_00415EB0:
    st32((c.r[19].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_00415EB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415EC8u); st32((c.r[2].w[0] + 52u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 489u, depth + 1u); else { c.pc = 0x00423AD0u; return; } if (c.pc != 0x00415EC8u) [[unlikely]] return; }
L_00415EC8:
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[8].d[0] = c.r[3].d[0] | 65535ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[6], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[4].w[0] + 752u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[9], ld32((c.r[19].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[9].d[0] & c.r[8].d[0];
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    st32((c.r[19].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[28].w[0] - 30148u), c.r[19].w[0]);
    st32((c.r[19].w[0] + 64u), c.r[6].w[0]);
    c.f[2] = ld32((c.r[5].w[0] + 17168u));
    c.f[1] = ld32((c.r[4].w[0] + 17172u));
    c.f[0] = ld32((c.r[3].w[0] + 17176u));
    st32((c.r[19].w[0] + 52u), c.f[2]);
    st32((c.r[19].w[0] + 56u), c.f[1]);
    st32((c.r[19].w[0] + 60u), c.f[0]);
    st32((c.r[19].w[0] + 76u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00415F50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00416078; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15008u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00415FA8; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 80u), 0u);  goto L_00415FA8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00415FA4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00415FA4u) [[unlikely]] return; }
L_00415FA4:
    st32((c.r[18].w[0] + 80u), 0u);
    c.budget -= 1;
L_00415FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415FB0u);  if (depth < kMaxDepth) unit_00A8(c, 288u, depth + 1u); else { c.pc = 0x003C3510u; return; } if (c.pc != 0x00415FB0u) [[unlikely]] return; }
L_00415FB0:
    st32((c.r[18].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415FBCu); set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (depth < kMaxDepth) unit_00A8(c, 289u, depth + 1u); else { c.pc = 0x003C3520u; return; } if (c.pc != 0x00415FBCu) [[unlikely]] return; }
L_00415FBC:
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 196u)));  goto L_00415FE0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00415FD8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00415FD8u) [[unlikely]] return; }
L_00415FD8:
    st32((c.r[18].w[0] + 92u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.budget -= 2;
L_00415FE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415FE8u);  if (depth < kMaxDepth) unit_00A8(c, 289u, depth + 1u); else { c.pc = 0x003C3520u; return; } if (c.pc != 0x00415FE8u) [[unlikely]] return; }
L_00415FE8:
    st32((c.r[18].w[0] + 196u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 3;
L_00415FF4:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 112u);  if (t) { goto L_00416020; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_00416020; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041601Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041601Cu) [[unlikely]] return; }
L_0041601C:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_00416020:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00415FF4u | kUnwind; return; } goto L_00415FF4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30148u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_00416040; } }
    st32((c.r[28].w[0] - 30148u), 0u);
    c.budget -= 1;
L_00416040:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_00416064; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14624u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416060u); st32((c.r[18].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00416060u) [[unlikely]] return; }
L_00416060:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_00416064:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0041607C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416078u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00416078u) [[unlikely]] return; }
L_00416078:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0041607C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004160A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_00416200; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_00416130; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 124u);  goto L_004160DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00416240; } }
L_004160DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004160E4u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x004160E4u) [[unlikely]] return; }
L_004160E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 92u), c.r[2].w[0]);  goto L_00416114; }
    set32(c.r[6], ld32((c.r[16].w[0] + 88u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 31568u);
    set32(c.r[8], c.r[8].w[0] - 31552u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416110u); set32(c.r[9], 0u + 3u);  if (depth < kMaxDepth) unit_008B(c, 355u, depth + 1u); else { c.pc = 0x0034F160u; return; } if (c.pc != 0x00416110u) [[unlikely]] return; }
L_00416110:
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 1;
L_00416114:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416120u); set32(c.r[5], 0u + 1000u);  if (depth < kMaxDepth) unit_008B(c, 497u, depth + 1u); else { c.pc = 0x0034FE20u; return; } if (c.pc != 0x00416120u) [[unlikely]] return; }
L_00416120:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041623C; } }
L_00416130:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041623C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041614Cu);  if (depth < kMaxDepth) unit_00C1(c, 133u, depth + 1u); else { c.pc = 0x00424F50u; return; } if (c.pc != 0x0041614Cu) [[unlikely]] return; }
L_0041614C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00416160; } }
    st32((c.r[28].w[0] - 31576u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0041616C; } }
L_00416160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416168u);  if (depth < kMaxDepth) unit_00C1(c, 124u, depth + 1u); else { c.pc = 0x00424E20u; return; } if (c.pc != 0x00416168u) [[unlikely]] return; }
L_00416168:
    st32((c.r[28].w[0] - 31576u), c.r[2].w[0]);
    c.budget -= 1;
L_0041616C:
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_00416188; } }
    c.r[1].d[0] = c.r[7].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[8].d[0] = c.r[2].d[0] << 32;  goto L_004161AC; }
L_00416188:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 31536u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004161A0u); set32(c.r[6], c.r[6].w[0] - 31512u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x004161A0u) [[unlikely]] return; }
L_004161A0:
    st32((c.r[28].w[0] - 31576u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
L_004161AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] - 12336u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], c.r[6].w[0] - 31504u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004161D0u); set32(c.r[7], c.r[7].w[0] - 31512u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x004161D0u) [[unlikely]] return; }
L_004161D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 31568u);
    set32(c.r[6], c.r[6].w[0] - 12336u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004161F0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 477u, depth + 1u); else { c.pc = 0x0034FBA0u; return; } if (c.pc != 0x004161F0u) [[unlikely]] return; }
L_004161F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041623C; } }
L_00416200:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0041623C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17184u));
    c.f[1] = ld32((c.r[4].w[0] + 17188u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17192u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_0041623C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00416240:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00416250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00416340; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  goto L_00416310; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_00416288; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0041637C; } }
L_00416288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416290u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 480u, depth + 1u); else { c.pc = 0x0034FBF0u; return; } if (c.pc != 0x00416290u) [[unlikely]] return; }
L_00416290:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  goto L_004162C8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004162BCu); set32(c.r[5], 0u + 11u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004162BCu) [[unlikely]] return; }
L_004162BC:
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_004162E0; } }
L_004162C8:
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004162D8u); set32(c.r[5], 0u + 14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004162D8u) [[unlikely]] return; }
L_004162D8:
    set32(c.r[3], 0u + 11u);
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 2;
L_004162E0:
    set32(c.r[4], 0u + 12u);
    set32(c.r[3], 0u + 13u);
    st32((c.r[16].w[0] + 180u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[16].w[0] + 160u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00416378; } }
L_00416310:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00416378; } }
L_00416340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416348u);  if (depth < kMaxDepth) unit_00BD(c, 326u, depth + 1u); else { c.pc = 0x00416F20u; return; } if (c.pc != 0x00416348u) [[unlikely]] return; }
L_00416348:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 17200u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[4].w[0] + 17204u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17208u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 12;
L_00416378:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0041637C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00416390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004163B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004165C4; } }
L_004163B4:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = ld64((c.r[5].w[0] + 96u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004163D4; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004163D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004163EC; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_004163EC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[5].w[0] + 80u));  goto L_00416430; }
    set32(c.r[4], 0u + 7u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416404u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00416404u) [[unlikely]] return; }
L_00416404:
    c.budget -= 2;
    if (c.r[16].sd[0] <= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0041641C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416414u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 333u, depth + 1u); else { c.pc = 0x00417000u; return; } if (c.pc != 0x00416414u) [[unlikely]] return; }
L_00416414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);  if (t) { goto L_00416428; } }
L_0041641C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416424u);  if (depth < kMaxDepth) unit_00BD(c, 329u, depth + 1u); else { c.pc = 0x00416F70u; return; } if (c.pc != 0x00416424u) [[unlikely]] return; }
L_00416424:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.budget -= 1;
L_00416428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_004165C0; } }
L_00416430:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], 0u + 2u);  goto L_00416458; }
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);  goto L_00416490; }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_00416458:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416464u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00416464u) [[unlikely]] return; }
L_00416464:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17216u));
    c.f[1] = ld32((c.r[4].w[0] + 17220u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17224u));
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), 0u);  if (t) { goto L_004165C0; } }
L_00416490:
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004165C0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], 0u + 1u);  goto L_004164DC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004164D8; } }
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004164CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x004164CCu) [[unlikely]] return; }
L_004164CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_004165C0; } }
L_004164D8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_004164DC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004164E8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x004164E8u) [[unlikely]] return; }
L_004164E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00416598; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_00416570; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_00416548; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_00416520; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00416598; } }
L_00416520:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17232u));
    c.f[1] = ld32((c.r[4].w[0] + 17236u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17240u));
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), 0u);  if (t) { goto L_004165C0; } }
L_00416548:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17248u));
    c.f[1] = ld32((c.r[4].w[0] + 17252u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17256u));
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), 0u);  if (t) { goto L_004165C0; } }
L_00416570:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17264u));
    c.f[1] = ld32((c.r[4].w[0] + 17268u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17272u));
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), 0u);  if (t) { goto L_004165C0; } }
L_00416598:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17280u));
    c.f[1] = ld32((c.r[4].w[0] + 17284u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17288u));
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 10;
L_004165C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004165C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004165E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004166BC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0041669C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 164u)));  goto L_0041666C; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 164u)));  goto L_00416624; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004166E8; } }
L_00416624:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004166E4; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004166E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416648u);  if (depth < kMaxDepth) unit_00BD(c, 337u, depth + 1u); else { c.pc = 0x00417090u; return; } if (c.pc != 0x00416648u) [[unlikely]] return; }
L_00416648:
    set32(c.r[5], ld32((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004166E4; } }
L_0041666C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004166E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004166E4; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004166E4; } }
L_0041669C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004166A4u);  if (depth < kMaxDepth) unit_00BD(c, 353u, depth + 1u); else { c.pc = 0x00417200u; return; } if (c.pc != 0x004166A4u) [[unlikely]] return; }
L_004166A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004166E4; } }
L_004166BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17296u));
    c.f[1] = ld32((c.r[4].w[0] + 17300u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17304u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_004166E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004166E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00416700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 21u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00416954; } }
    set32(c.r[6], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_00416934; } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00416980; }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_00416914; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_00416850; }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  goto L_00416820; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30144u)));  goto L_004167D4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 124u);  goto L_004167A0; }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00416780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041697C; } }
L_00416780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416788u);  if (depth < kMaxDepth) unit_00BD(c, 337u, depth + 1u); else { c.pc = 0x00417090u; return; } if (c.pc != 0x00416788u) [[unlikely]] return; }
L_00416788:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041697C; } }
L_004167A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004167A8u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x004167A8u) [[unlikely]] return; }
L_004167A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_004167C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004167BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 158u, depth + 1u); else { c.pc = 0x00420D50u; return; } if (c.pc != 0x004167BCu) [[unlikely]] return; }
L_004167BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_004167C4:
    st32((c.r[28].w[0] - 30144u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041697C; } }
L_004167D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041697C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 76u), c.r[6].w[0]);  goto L_004167FC; }
    st32((c.r[16].w[0] + 76u), c.r[5].w[0]);
    c.budget -= 1;
L_004167FC:
    set32(c.r[4], ld32((c.r[28].w[0] - 30144u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0041697C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416818u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416818u) [[unlikely]] return; }
L_00416818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30144u), 0u);  if (t) { goto L_0041697C; } }
L_00416820:
    set32(c.r[5], 0u + 51u);
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416834u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416834u) [[unlikely]] return; }
L_00416834:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    st32((c.r[16].w[0] + 188u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 192u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041697C; } }
L_00416850:
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00416868; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00416880; } }
L_00416868:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_00416880:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[16].w[0] + 192u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[2].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[16].w[0] + 192u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 188u));
    c.f[0] = ld32((c.r[16].w[0] + 192u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 12;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], 0u - 1u);  goto L_004168D4; }
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004168CCu); c.f[12] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0026(c, 19u, depth + 1u); else { c.pc = 0x001B8150u; return; } if (c.pc != 0x004168CCu) [[unlikely]] return; }
L_004168CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0041697C; } }
L_004168D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004168DCu);  if (depth < kMaxDepth) unit_0026(c, 14u, depth + 1u); else { c.pc = 0x001B8100u; return; } if (c.pc != 0x004168DCu) [[unlikely]] return; }
L_004168DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004168ECu);  if (depth < kMaxDepth) unit_0026(c, 19u, depth + 1u); else { c.pc = 0x001B8150u; return; } if (c.pc != 0x004168ECu) [[unlikely]] return; }
L_004168EC:
    c.f[1] = ld32((c.r[16].w[0] + 188u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041697C; } }
L_00416914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041691Cu);  if (depth < kMaxDepth) unit_0024(c, 608u, depth + 1u); else { c.pc = 0x001B3F60u; return; } if (c.pc != 0x0041691Cu) [[unlikely]] return; }
L_0041691C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416924u);  if (depth < kMaxDepth) unit_0024(c, 504u, depth + 1u); else { c.pc = 0x001B3720u; return; } if (c.pc != 0x00416924u) [[unlikely]] return; }
L_00416924:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041697C; } }
L_00416934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041693Cu);  if (depth < kMaxDepth) unit_00BD(c, 353u, depth + 1u); else { c.pc = 0x00417200u; return; } if (c.pc != 0x0041693Cu) [[unlikely]] return; }
L_0041693C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0041697C; } }
L_00416954:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17312u));
    c.f[1] = ld32((c.r[4].w[0] + 17316u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17320u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_0041697C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00416980:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00416990:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00416CB8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 31456u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00414000u < 16384u) { entry = entries_00BD[(t - 0x00414000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004169D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004169D8u);  if (depth < kMaxDepth) unit_00BD(c, 337u, depth + 1u); else { c.pc = 0x00417090u; return; } if (c.pc != 0x004169D8u) [[unlikely]] return; }
L_004169D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 92u)));  goto L_004169FC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004169F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 480u, depth + 1u); else { c.pc = 0x0034FBF0u; return; } if (c.pc != 0x004169F4u) [[unlikely]] return; }
L_004169F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_00416A08; } }
L_004169FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416A04u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008B(c, 480u, depth + 1u); else { c.pc = 0x0034FBF0u; return; } if (c.pc != 0x00416A04u) [[unlikely]] return; }
L_00416A04:
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 1;
L_00416A08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00416CB8; } }
L_00416A20:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_00416A28:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 112u);  if (t) { goto L_00416A54; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0]), 0u);  goto L_00416A54; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416A50u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416A50u) [[unlikely]] return; }
L_00416A50:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 1;
L_00416A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416A5Cu); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00416A5Cu) [[unlikely]] return; }
L_00416A5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0]), c.r[2].w[0]);  goto L_00416A78; }
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416A74u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 216u, depth + 1u); else { c.pc = 0x0020DFF0u; return; } if (c.pc != 0x00416A74u) [[unlikely]] return; }
L_00416A74:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00416A78:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00416A28u | kUnwind; return; } goto L_00416A28; }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_00416AE4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00414000u < 16384u) { entry = entries_00BD[(t - 0x00414000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00416AB4:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00416AE4; } }
L_00416AC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_00416AE4; } }
L_00416AC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_00416AE4; } }
L_00416AD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_00416AE4; } }
L_00416AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 5u);  if (t) { goto L_00416AE4; } }
L_00416AE0:
    set32(c.r[6], 0u + 6u);
    c.budget -= 1;
L_00416AE4:
    set32(c.r[4], c.r[17].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416AF0u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_00BD(c, 365u, depth + 1u); else { c.pc = 0x00417320u; return; } if (c.pc != 0x00416AF0u) [[unlikely]] return; }
L_00416AF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00416CB8; } }
L_00416B08:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[4].d[0] = ld64((c.r[4].w[0] + 96u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00416CBC; }
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416B34u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00416B34u) [[unlikely]] return; }
L_00416B34:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416B48u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00416B48u) [[unlikely]] return; }
L_00416B48:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416B5Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00416B5Cu) [[unlikely]] return; }
L_00416B5C:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416B70u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00416B70u) [[unlikely]] return; }
L_00416B70:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 2;
L_00416B78:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 112u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00416B94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416B90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003B(c, 318u, depth + 1u); else { c.pc = 0x0020FCD0u; return; } if (c.pc != 0x00416B90u) [[unlikely]] return; }
L_00416B90:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00416B94:
    c.r[3].d[0] = c.r[16].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00416B78u | kUnwind; return; } goto L_00416B78; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00416CB8; } }
L_00416BB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416BCCu); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416BCCu) [[unlikely]] return; }
L_00416BCC:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416BE0u); set32(c.r[5], 0u + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416BE0u) [[unlikely]] return; }
L_00416BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416BE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 353u, depth + 1u); else { c.pc = 0x00417200u; return; } if (c.pc != 0x00416BE8u) [[unlikely]] return; }
L_00416BE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00416CB8; } }
L_00416C00:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 2;
L_00416C08:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 112u);  if (t) { goto L_00416C34; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_00416C34; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416C30u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416C30u) [[unlikely]] return; }
L_00416C30:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00416C34:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00416C08u | kUnwind; return; } goto L_00416C08; }
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 76u)));  goto L_00416C84; }
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 92u)));  goto L_00416C74; }
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416C6Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 486u, depth + 1u); else { c.pc = 0x0034FCB0u; return; } if (c.pc != 0x00416C6Cu) [[unlikely]] return; }
L_00416C6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_00416C80; } }
L_00416C74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416C7Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008B(c, 486u, depth + 1u); else { c.pc = 0x0034FCB0u; return; } if (c.pc != 0x00416C7Cu) [[unlikely]] return; }
L_00416C7C:
    st32((c.r[17].w[0] + 100u), 0u);
    c.budget -= 1;
L_00416C80:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_00416C84:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00416CB8; } }
L_00416C90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17328u));
    c.f[1] = ld32((c.r[4].w[0] + 17332u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17336u));
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 10;
L_00416CB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00416CBC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00416CD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00416D5C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 4u)));  goto L_00416D28; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_00416D08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00416D70; } }
L_00416D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416D10u); st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 337u, depth + 1u); else { c.pc = 0x00417090u; return; } if (c.pc != 0x00416D10u) [[unlikely]] return; }
L_00416D10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00416D6C; } }
L_00416D28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00416D6C; } }
L_00416D5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_00416D6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00416D70:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00416D80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00416E2C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 164u)));  goto L_00416DFC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 116u);  goto L_00416DC8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00416E28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00416E28; } }
L_00416DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416DD0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00416DD0u) [[unlikely]] return; }
L_00416DD0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 164u), c.r[4].w[0]);  goto L_00416DF0; }
    set32(c.r[6], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416DE8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 121u, depth + 1u); else { c.pc = 0x00410CD0u; return; } if (c.pc != 0x00416DE8u) [[unlikely]] return; }
L_00416DE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 164u), c.r[4].w[0]);
    c.budget -= 2;
L_00416DF0:
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 3;
L_00416DFC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  goto L_00416E10; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_00416E28; } }
L_00416E10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00416E28; } }
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 2;
L_00416E28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00416E2C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00416E40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416E5Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x00416E5Cu) [[unlikely]] return; }
L_00416E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416E64u);  if (depth < kMaxDepth) unit_0024(c, 202u, depth + 1u); else { c.pc = 0x001B16D0u; return; } if (c.pc != 0x00416E64u) [[unlikely]] return; }
L_00416E64:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416E70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x00416E70u) [[unlikely]] return; }
L_00416E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416E78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x00416E78u) [[unlikely]] return; }
L_00416E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416E80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00416E80u) [[unlikely]] return; }
L_00416E80:
    set32(c.r[5], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[2], 0u - 65u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416E9Cu); st32((c.r[5].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x00416E9Cu) [[unlikely]] return; }
L_00416E9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416EB0u); st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x00416EB0u) [[unlikely]] return; }
L_00416EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416EB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00416EB8u) [[unlikely]] return; }
L_00416EB8:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 2;
L_00416EC0:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00416EDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416ED8u);  if (depth < kMaxDepth) unit_003B(c, 248u, depth + 1u); else { c.pc = 0x0020E740u; return; } if (c.pc != 0x00416ED8u) [[unlikely]] return; }
L_00416ED8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00416EDC:
    c.r[2].d[0] = c.r[18].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00416EC0u | kUnwind; return; } goto L_00416EC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416EF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x00416EF0u) [[unlikely]] return; }
L_00416EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416EF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x00416EF8u) [[unlikely]] return; }
L_00416EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416F00u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x00416F00u) [[unlikely]] return; }
L_00416F00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00416F20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416F44u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00416F44u) [[unlikely]] return; }
L_00416F44:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416F58u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00416F58u) [[unlikely]] return; }
L_00416F58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00416F70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 172u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416FA0u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00416FA0u) [[unlikely]] return; }
L_00416FA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_00416FB8; } }
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 2;
L_00416FB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 172u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416FD8u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00416FD8u) [[unlikely]] return; }
L_00416FD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416FF0u); set32(c.r[7], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00416FF0u) [[unlikely]] return; }
L_00416FF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00417000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 172u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417030u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00417030u) [[unlikely]] return; }
L_00417030:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_00417048; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_00417048:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 172u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417068u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00417068u) [[unlikely]] return; }
L_00417068:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417080u); set32(c.r[7], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00417080u) [[unlikely]] return; }
L_00417080:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00417090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00417140; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004170C0u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004170C0u) [[unlikely]] return; }
L_004170C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004170D4u); set32(c.r[7], 0u + 9u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004170D4u) [[unlikely]] return; }
L_004170D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004170E8u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004170E8u) [[unlikely]] return; }
L_004170E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004170FCu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004170FCu) [[unlikely]] return; }
L_004170FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417110u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00417110u) [[unlikely]] return; }
L_00417110:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417124u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00417124u) [[unlikely]] return; }
L_00417124:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 14u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417138u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00417138u) [[unlikely]] return; }
L_00417138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004171F0; } }
L_00417140:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417154u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00417154u) [[unlikely]] return; }
L_00417154:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417168u); set32(c.r[7], 0u + 9u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00417168u) [[unlikely]] return; }
L_00417168:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041717Cu); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041717Cu) [[unlikely]] return; }
L_0041717C:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417190u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00417190u) [[unlikely]] return; }
L_00417190:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004171A4u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004171A4u) [[unlikely]] return; }
L_004171A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004171B8u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004171B8u) [[unlikely]] return; }
L_004171B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004171CCu); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004171CCu) [[unlikely]] return; }
L_004171CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 172u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004171ECu); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004171ECu) [[unlikely]] return; }
L_004171EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004171F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00417200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417224u); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00417224u) [[unlikely]] return; }
L_00417224:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041723Cu); set32(c.r[7], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041723Cu) [[unlikely]] return; }
L_0041723C:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417250u); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00417250u) [[unlikely]] return; }
L_00417250:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417264u); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00417264u) [[unlikely]] return; }
L_00417264:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417278u); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00417278u) [[unlikely]] return; }
L_00417278:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041728Cu); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0041728Cu) [[unlikely]] return; }
L_0041728C:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004172A0u); set32(c.r[7], 0u + 6u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004172A0u) [[unlikely]] return; }
L_004172A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 172u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004172C0u); set32(c.r[7], 0u + 7u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004172C0u) [[unlikely]] return; }
L_004172C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004172D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_004172F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30148u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0041730C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041730Cu);  if (depth < kMaxDepth) unit_00BD(c, 362u, depth + 1u); else { c.pc = 0x004172D0u; return; } if (c.pc != 0x0041730Cu) [[unlikely]] return; }
L_0041730C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00417320:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[4], 0u + 10u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417358u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x00417358u) [[unlikely]] return; }
L_00417358:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 31328u);  if (t) { goto L_00417388; } }
L_00417370:
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_00417388; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00417394; } }
L_00417388:
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00417370u | kUnwind; return; } goto L_00417370; }
L_00417394:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_0041749C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00417478; } }
L_004173A4:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004173B0u); c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00C1(c, 57u, depth + 1u); else { c.pc = 0x004247E0u; return; } if (c.pc != 0x004173B0u) [[unlikely]] return; }
L_004173B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004173D8; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 52u);  goto L_004173CC; }
    set32(c.r[17], 0u + 66u);
    set32(c.r[2], 0u + 52u);
    c.budget -= 2;
L_004173CC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_004173D8; } }
    set32(c.r[17], 0u + 68u);
    c.budget -= 1;
L_004173D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004173E0u);  if (depth < kMaxDepth) unit_00C1(c, 124u, depth + 1u); else { c.pc = 0x00424E20u; return; } if (c.pc != 0x004173E0u) [[unlikely]] return; }
L_004173E0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_004173FC; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_004173FC; } }
    set32(c.r[17], 0u + 84u);
    c.budget -= 1;
L_004173FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417404u);  if (depth < kMaxDepth) unit_00C1(c, 133u, depth + 1u); else { c.pc = 0x00424F50u; return; } if (c.pc != 0x00417404u) [[unlikely]] return; }
L_00417404:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  goto L_00417450; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 6u);  goto L_00417420; }
    set32(c.r[17], 0u + 86u);
    set32(c.r[2], 0u + 6u);
    c.budget -= 2;
L_00417420:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 16u);  goto L_00417430; }
    set32(c.r[17], 0u + 87u);
    set32(c.r[2], 0u + 16u);
    c.budget -= 2;
L_00417430:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 17u);  goto L_00417440; }
    set32(c.r[17], 0u + 85u);
    set32(c.r[2], 0u + 17u);
    c.budget -= 2;
L_00417440:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0041744C; } }
    set32(c.r[17], 0u + 88u);
    c.budget -= 1;
L_0041744C:
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 1;
L_00417450:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417464u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x00417464u) [[unlikely]] return; }
L_00417464:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417474u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 100u, depth + 1u); else { c.pc = 0x00211210u; return; } if (c.pc != 0x00417474u) [[unlikely]] return; }
L_00417474:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00417478:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041748C; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0041748C:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004173A4u | kUnwind; return; } goto L_004173A4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0041749C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004174C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004174D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 288u, depth + 1u); else { c.pc = 0x003C3510u; return; } if (c.pc != 0x004174D4u) [[unlikely]] return; }
L_004174D4:
    st32((c.r[16].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004174E0u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_00A8(c, 289u, depth + 1u); else { c.pc = 0x003C3520u; return; } if (c.pc != 0x004174E0u) [[unlikely]] return; }
L_004174E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004174F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417508u); set32(c.r[4], ld32((c.r[4].w[0] + 196u)));  if (depth < kMaxDepth) unit_00A8(c, 289u, depth + 1u); else { c.pc = 0x003C3520u; return; } if (c.pc != 0x00417508u) [[unlikely]] return; }
L_00417508:
    st32((c.r[16].w[0] + 196u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00417520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417534u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 288u, depth + 1u); else { c.pc = 0x003C3510u; return; } if (c.pc != 0x00417534u) [[unlikely]] return; }
L_00417534:
    st32((c.r[16].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417540u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_00A8(c, 289u, depth + 1u); else { c.pc = 0x003C3520u; return; } if (c.pc != 0x00417540u) [[unlikely]] return; }
L_00417540:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0041755C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00417574; } }
L_0041755C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_00417574:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 27140u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417588u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00C0(c, 435u, depth + 1u); else { c.pc = 0x004230B0u; return; } if (c.pc != 0x00417588u) [[unlikely]] return; }
L_00417588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417590u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 436u, depth + 1u); else { c.pc = 0x004230E0u; return; } if (c.pc != 0x00417590u) [[unlikely]] return; }
L_00417590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417598u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 309u, depth + 1u); else { c.pc = 0x00416D80u; return; } if (c.pc != 0x00417598u) [[unlikely]] return; }
L_00417598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004175B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004175C8u); set32(c.r[4], ld32((c.r[4].w[0] + 196u)));  if (depth < kMaxDepth) unit_00A8(c, 289u, depth + 1u); else { c.pc = 0x003C3520u; return; } if (c.pc != 0x004175C8u) [[unlikely]] return; }
L_004175C8:
    st32((c.r[16].w[0] + 196u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004175E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004175F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 288u, depth + 1u); else { c.pc = 0x003C3510u; return; } if (c.pc != 0x004175F4u) [[unlikely]] return; }
L_004175F4:
    st32((c.r[16].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417600u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_00A8(c, 289u, depth + 1u); else { c.pc = 0x003C3520u; return; } if (c.pc != 0x00417600u) [[unlikely]] return; }
L_00417600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417608u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 312u, depth + 1u); else { c.pc = 0x00416E40u; return; } if (c.pc != 0x00417608u) [[unlikely]] return; }
L_00417608:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00417620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417638u); set32(c.r[4], ld32((c.r[4].w[0] + 196u)));  if (depth < kMaxDepth) unit_00A8(c, 289u, depth + 1u); else { c.pc = 0x003C3520u; return; } if (c.pc != 0x00417638u) [[unlikely]] return; }
L_00417638:
    st32((c.r[16].w[0] + 196u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00417650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417664u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 288u, depth + 1u); else { c.pc = 0x003C3510u; return; } if (c.pc != 0x00417664u) [[unlikely]] return; }
L_00417664:
    st32((c.r[16].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417670u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_00A8(c, 289u, depth + 1u); else { c.pc = 0x003C3520u; return; } if (c.pc != 0x00417670u) [[unlikely]] return; }
L_00417670:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00417680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417698u); set32(c.r[4], ld32((c.r[4].w[0] + 196u)));  if (depth < kMaxDepth) unit_00A8(c, 289u, depth + 1u); else { c.pc = 0x003C3520u; return; } if (c.pc != 0x00417698u) [[unlikely]] return; }
L_00417698:
    st32((c.r[16].w[0] + 196u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004176B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004176C8u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x004176C8u) [[unlikely]] return; }
L_004176C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004176E0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004176DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 404u, depth + 1u); else { c.pc = 0x00417720u; return; } if (c.pc != 0x004176DCu) [[unlikely]] return; }
L_004176DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004176E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004176F0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30140u), c.r[3].w[0]);  c.pc = t; return; }
L_00417700:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30140u), 0u);  c.pc = t; return; }
L_00417710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30140u)));  c.pc = t; return; }
L_00417720:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041773Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 433u, depth + 1u); else { c.pc = 0x00423030u; return; } if (c.pc != 0x0041773Cu) [[unlikely]] return; }
L_0041773C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15072u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417784u); st32((c.r[16].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_0024(c, 192u, depth + 1u); else { c.pc = 0x001B15E0u; return; } if (c.pc != 0x00417784u) [[unlikely]] return; }
L_00417784:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417790u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 192u, depth + 1u); else { c.pc = 0x001B15E0u; return; } if (c.pc != 0x00417790u) [[unlikely]] return; }
L_00417790:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 36u);  goto L_004177BC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 100u), 0u);  goto L_004177B8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004177B4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004177B4u) [[unlikely]] return; }
L_004177B4:
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 1;
L_004177B8:
    set32(c.r[4], 0u + 36u);
    c.budget -= 1;
L_004177BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004177C4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x004177C4u) [[unlikely]] return; }
L_004177C4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[6], 0u + 128u);  goto L_004177FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004177D8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0024(c, 152u, depth + 1u); else { c.pc = 0x001B1090u; return; } if (c.pc != 0x004177D8u) [[unlikely]] return; }
L_004177D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004177E0u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 147u, depth + 1u); else { c.pc = 0x001B0F70u; return; } if (c.pc != 0x004177E0u) [[unlikely]] return; }
L_004177E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004177F4u); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0014(c, 233u, depth + 1u); else { c.pc = 0x00171E30u; return; } if (c.pc != 0x004177F4u) [[unlikely]] return; }
L_004177F4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 128u);
    c.budget -= 2;
L_004177FC:
    st32((c.r[16].w[0] + 100u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417814u); st32((c.r[18].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00C0(c, 517u, depth + 1u); else { c.pc = 0x00423DE0u; return; } if (c.pc != 0x00417814u) [[unlikely]] return; }
L_00417814:
    set32(c.r[5], ld32((c.r[16].w[0] + 100u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417824u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 305u, depth + 1u); else { c.pc = 0x004221B0u; return; } if (c.pc != 0x00417824u) [[unlikely]] return; }
L_00417824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041782Cu); set32(c.r[4], 0u + 872u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0041782Cu) [[unlikely]] return; }
L_0041782C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  goto L_00417844; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417840u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 421u, depth + 1u); else { c.pc = 0x001B6BB0u; return; } if (c.pc != 0x00417840u) [[unlikely]] return; }
L_00417840:
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_00417844:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[4], 0u + 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041785Cu); st32((c.r[2].w[0] + 52u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0041785Cu) [[unlikely]] return; }
L_0041785C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  goto L_0041787C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417878u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00BE(c, 400u, depth + 1u); else { c.pc = 0x0041B4D0u; return; } if (c.pc != 0x00417878u) [[unlikely]] return; }
L_00417878:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 1;
L_0041787C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[2].w[0] + 17376u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[2].w[0] + 17380u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[2].w[0] + 17384u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004178D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0041798C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 15072u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417900u); set32(c.r[4], ld32((c.r[17].w[0] + 108u)));  if (depth < kMaxDepth) unit_0026(c, 14u, depth + 1u); else { c.pc = 0x001B8100u; return; } if (c.pc != 0x00417900u) [[unlikely]] return; }
L_00417900:
    st32((c.r[17].w[0] + 108u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 100u)));  goto L_00417930; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 104u), 0u);  goto L_0041792C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00417928u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00417928u) [[unlikely]] return; }
L_00417928:
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_0041792C:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 1;
L_00417930:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00417954; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 100u), 0u);  goto L_00417954; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00417950u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00417950u) [[unlikely]] return; }
L_00417950:
    st32((c.r[17].w[0] + 100u), 0u);
    c.budget -= 1;
L_00417954:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00417978; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14624u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417974u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00417974u) [[unlikely]] return; }
L_00417974:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00417978:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00417990; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041798Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0041798Cu) [[unlikely]] return; }
L_0041798C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00417990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004179B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00417A58; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00417A38; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00417A20; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004179F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00417AB8; } }
L_004179F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004179FCu);  if (depth < kMaxDepth) unit_00C0(c, 303u, depth + 1u); else { c.pc = 0x00422190u; return; } if (c.pc != 0x004179FCu) [[unlikely]] return; }
L_004179FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00417AB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417A0Cu);  if (depth < kMaxDepth) unit_00C0(c, 358u, depth + 1u); else { c.pc = 0x004225F0u; return; } if (c.pc != 0x00417A0Cu) [[unlikely]] return; }
L_00417A0C:
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00417AB4; } }
L_00417A20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417A28u);  if (depth < kMaxDepth) unit_00C0(c, 490u, depth + 1u); else { c.pc = 0x00423AE0u; return; } if (c.pc != 0x00417A28u) [[unlikely]] return; }
L_00417A28:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00417AB4; } }
L_00417A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417A40u);  if (depth < kMaxDepth) unit_00C0(c, 493u, depth + 1u); else { c.pc = 0x00423B50u; return; } if (c.pc != 0x00417A40u) [[unlikely]] return; }
L_00417A40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00417AB4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00417AB4; } }
L_00417A58:
    set32(c.r[3], ld32((c.r[28].w[0] - 31572u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_00417A90; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17392u));
    c.f[1] = ld32((c.r[4].w[0] + 17396u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17400u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_00417AB4; } }
L_00417A90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17408u));
    c.f[1] = ld32((c.r[4].w[0] + 17412u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17416u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 9;
L_00417AB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00417AB8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00417AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 20u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[5].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_00417BA8; }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_00417B8C; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_00417B64; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_00417B48; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  goto L_00417B24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00417BD4; } }
L_00417B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417B2Cu);  if (depth < kMaxDepth) unit_0016(c, 248u, depth + 1u); else { c.pc = 0x0017B620u; return; } if (c.pc != 0x00417B2Cu) [[unlikely]] return; }
L_00417B2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 10u);  goto L_00417B40; }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00417BD0; } }
L_00417B40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00417BD0; } }
L_00417B48:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417B54u); set32(c.r[6], 0u + 19u);  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00417B54u) [[unlikely]] return; }
L_00417B54:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00417BD0; } }
L_00417B64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417B6Cu);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00417B6Cu) [[unlikely]] return; }
L_00417B6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00417BD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417B7Cu); set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x00417B7Cu) [[unlikely]] return; }
L_00417B7C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00417BD0; } }
L_00417B8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00417BD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[5].w[0]);  if (t) { goto L_00417BD0; } }
L_00417BA8:
    st32((c.r[28].w[0] - 31572u), 0u);
    c.f[2] = ld32((c.r[3].w[0] + 17424u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[1] = ld32((c.r[3].w[0] + 17428u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17432u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 10;
L_00417BD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00417BD4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00417BE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_00417CE0; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_00417CC8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  goto L_00417C88; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  goto L_00417C28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00417D58; } }
L_00417C28:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 132u);  goto L_00417C48; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00417C40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00417C40u) [[unlikely]] return; }
L_00417C40:
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[4], 0u + 132u);
    c.budget -= 2;
L_00417C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417C50u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00417C50u) [[unlikely]] return; }
L_00417C50:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 96u), c.r[4].w[0]);  goto L_00417C78; }
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[7], 0u + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417C70u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 297u, depth + 1u); else { c.pc = 0x0041ED30u; return; } if (c.pc != 0x00417C70u) [[unlikely]] return; }
L_00417C70:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 96u), c.r[4].w[0]);
    c.budget -= 2;
L_00417C78:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00417D54; } }
L_00417C88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00417D54; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_00417CBC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00417CB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00417CB4u) [[unlikely]] return; }
L_00417CB4:
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_00417CBC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00417D54; } }
L_00417CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417CD0u);  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x00417CD0u) [[unlikely]] return; }
L_00417CD0:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_00417D54; } }
L_00417CE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00417D54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417CFCu);  if (depth < kMaxDepth) unit_00BD(c, 403u, depth + 1u); else { c.pc = 0x00417710u; return; } if (c.pc != 0x00417CFCu) [[unlikely]] return; }
L_00417CFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_00417D30; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17440u));
    c.f[1] = ld32((c.r[4].w[0] + 17444u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17448u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_00417D54; } }
L_00417D30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17456u));
    c.f[1] = ld32((c.r[4].w[0] + 17460u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17464u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 9;
L_00417D54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00417D58:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00417D70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 31u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00417FC8; } }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  goto L_00417F8C; }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 120u)));  goto L_00417F5C; }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 120u)));  goto L_00417F3C; }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 108u)));  goto L_00417F20; }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 108u)));  goto L_00417EF0; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 112u)));  goto L_00417ED0; }
    set32(c.r[6], 0u + 10u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[6].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 112u)));  goto L_00417E7C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 80u)));  goto L_00417E50; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  goto L_00417DFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { [[clang::musttail]] return unit_00BE(c, 5u, depth); } }
L_00417DFC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 76u);  goto L_00417E1C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00417E14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00417E14u) [[unlikely]] return; }
L_00417E14:
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[4], 0u + 76u);
    c.budget -= 2;
L_00417E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417E24u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00417E24u) [[unlikely]] return; }
L_00417E24:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), c.r[4].w[0]);  goto L_00417E40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417E38u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 51u, depth + 1u); else { c.pc = 0x004186D0u; return; } if (c.pc != 0x00417E38u) [[unlikely]] return; }
L_00417E38:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 80u), c.r[4].w[0]);
    c.budget -= 2;
L_00417E40:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BE(c, 4u, depth); } }
L_00417E50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00BE(c, 4u, depth); } }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[6].w[0]);  if (t) { [[clang::musttail]] return unit_00BE(c, 4u, depth); } }
L_00417E7C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_00417EC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417E8Cu); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00417E8Cu) [[unlikely]] return; }
L_00417E8C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 112u), c.r[4].w[0]);  goto L_00417EC0; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 31264u);
    set32(c.r[8], c.r[8].w[0] - 31248u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417EB8u); set32(c.r[9], 0u + 2u);  if (depth < kMaxDepth) unit_008B(c, 355u, depth + 1u); else { c.pc = 0x0034F160u; return; } if (c.pc != 0x00417EB8u) [[unlikely]] return; }
L_00417EB8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 112u), c.r[4].w[0]);
    c.budget -= 2;
L_00417EC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00417EC4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BE(c, 4u, depth); } }
L_00417ED0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00BE(c, 4u, depth); } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BE(c, 4u, depth); } }
L_00417EF0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_00417F14; }
    set32(c.r[4], 0u + 28u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417F0Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 13u, depth + 1u); else { c.pc = 0x001B80E0u; return; } if (c.pc != 0x00417F0Cu) [[unlikely]] return; }
L_00417F0C:
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_00417F14:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BE(c, 4u, depth); } }
L_00417F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417F28u);  if (depth < kMaxDepth) unit_0026(c, 16u, depth + 1u); else { c.pc = 0x001B8120u; return; } if (c.pc != 0x00417F28u) [[unlikely]] return; }
L_00417F28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00BE(c, 4u, depth); } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BE(c, 4u, depth); } }
L_00417F3C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_00417F50; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
L_00417F50:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BE(c, 4u, depth); } }
L_00417F5C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 30u);  goto L_00417F84; }
    set32(c.r[6], ld32((c.r[16].w[0] + 84u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[3], 0u + 30u);
    c.budget -= 8;
L_00417F84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BE(c, 4u, depth); } }
L_00417F8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00BE(c, 4u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_00417FBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417FB8u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_00BE(c, 429u, depth + 1u); else { c.pc = 0x0041B8A0u; return; } if (c.pc != 0x00417FB8u) [[unlikely]] return; }
L_00417FB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00417FBC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BE(c, 4u, depth); } }
L_00417FC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  [[clang::musttail]] return unit_00BE(c, 2u, depth); }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[2] = ld32((c.r[3].w[0] + 17472u));
    c.f[1] = ld32((c.r[4].w[0] + 17476u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.f[0] = ld32((c.r[3].w[0] + 17480u));
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    c.budget -= 8;
    [[clang::musttail]] return unit_00BE(c, 1u, depth);
}

}
