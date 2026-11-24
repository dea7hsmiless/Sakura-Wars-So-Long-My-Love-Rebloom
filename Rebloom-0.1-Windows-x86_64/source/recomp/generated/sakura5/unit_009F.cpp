#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009F[4096] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14,
    0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77,
    0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0,
    0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0,
    0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0,
    0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203,
    0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0,
    0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 233, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0,
    0, 241, 0, 242, 0, 243, 0, 244, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 268, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 272, 0, 273, 0,
    0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 276, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0,
    321, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0,
    0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0,
    0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0,
    0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0,
    0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401,
    0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 406,
    0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0,
    0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419,
    0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 424, 0, 425, 0, 426, 0, 427,
    0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_009F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0039C320;
    case 2u: goto L_0039C380;
    case 3u: goto L_0039C3D0;
    case 4u: goto L_0039C3F0;
    case 5u: goto L_0039C410;
    case 6u: goto L_0039C430;
    case 7u: goto L_0039C450;
    case 8u: goto L_0039C470;
    case 9u: goto L_0039C480;
    case 10u: goto L_0039C498;
    case 11u: goto L_0039C4A8;
    case 12u: goto L_0039C4C0;
    case 13u: goto L_0039C4E4;
    case 14u: goto L_0039C4FC;
    case 15u: goto L_0039C510;
    case 16u: goto L_0039C520;
    case 17u: goto L_0039C530;
    case 18u: goto L_0039C548;
    case 19u: goto L_0039C578;
    case 20u: goto L_0039C594;
    case 21u: goto L_0039C5A8;
    case 22u: goto L_0039C5C0;
    case 23u: goto L_0039C5CC;
    case 24u: goto L_0039C5E0;
    case 25u: goto L_0039C5F8;
    case 26u: goto L_0039C608;
    case 27u: goto L_0039C620;
    case 28u: goto L_0039C640;
    case 29u: goto L_0039C658;
    case 30u: goto L_0039C678;
    case 31u: goto L_0039C6B0;
    case 32u: goto L_0039C6C4;
    case 33u: goto L_0039C6F8;
    case 34u: goto L_0039C710;
    case 35u: goto L_0039C720;
    case 36u: goto L_0039C730;
    case 37u: goto L_0039C748;
    case 38u: goto L_0039C75C;
    case 39u: goto L_0039C778;
    case 40u: goto L_0039C790;
    case 41u: goto L_0039C7A4;
    case 42u: goto L_0039C7C0;
    case 43u: goto L_0039C7E8;
    case 44u: goto L_0039C830;
    case 45u: goto L_0039C848;
    case 46u: goto L_0039C880;
    case 47u: goto L_0039C8DC;
    case 48u: goto L_0039C900;
    case 49u: goto L_0039C934;
    case 50u: goto L_0039C9A8;
    case 51u: goto L_0039C9D0;
    case 52u: goto L_0039CA10;
    case 53u: goto L_0039CA24;
    case 54u: goto L_0039CA4C;
    case 55u: goto L_0039CA74;
    case 56u: goto L_0039CA80;
    case 57u: goto L_0039CAC0;
    case 58u: goto L_0039CAF4;
    case 59u: goto L_0039CB28;
    case 60u: goto L_0039CB50;
    case 61u: goto L_0039CB60;
    case 62u: goto L_0039CBB0;
    case 63u: goto L_0039CBC8;
    case 64u: goto L_0039CBF0;
    case 65u: goto L_0039CC00;
    case 66u: goto L_0039CC18;
    case 67u: goto L_0039CC30;
    case 68u: goto L_0039CC48;
    case 69u: goto L_0039CC60;
    case 70u: goto L_0039CC78;
    case 71u: goto L_0039CC94;
    case 72u: goto L_0039CCD8;
    case 73u: goto L_0039CCE0;
    case 74u: goto L_0039CD08;
    case 75u: goto L_0039CD5C;
    case 76u: goto L_0039CD6C;
    case 77u: goto L_0039CD7C;
    case 78u: goto L_0039CD98;
    case 79u: goto L_0039CDD4;
    case 80u: goto L_0039CDF4;
    case 81u: goto L_0039CE14;
    case 82u: goto L_0039CE54;
    case 83u: goto L_0039CE58;
    case 84u: goto L_0039CE80;
    case 85u: goto L_0039CEA8;
    case 86u: goto L_0039CECC;
    case 87u: goto L_0039CEEC;
    case 88u: goto L_0039CEF4;
    case 89u: goto L_0039CF18;
    case 90u: goto L_0039CF50;
    case 91u: goto L_0039CF74;
    case 92u: goto L_0039CF98;
    case 93u: goto L_0039D008;
    case 94u: goto L_0039D038;
    case 95u: goto L_0039D058;
    case 96u: goto L_0039D098;
    case 97u: goto L_0039D0A0;
    case 98u: goto L_0039D0AC;
    case 99u: goto L_0039D0D0;
    case 100u: goto L_0039D100;
    case 101u: goto L_0039D120;
    case 102u: goto L_0039D160;
    case 103u: goto L_0039D188;
    case 104u: goto L_0039D190;
    case 105u: goto L_0039D1C8;
    case 106u: goto L_0039D1E8;
    case 107u: goto L_0039D21C;
    case 108u: goto L_0039D224;
    case 109u: goto L_0039D248;
    case 110u: goto L_0039D26C;
    case 111u: goto L_0039D284;
    case 112u: goto L_0039D29C;
    case 113u: goto L_0039D2C0;
    case 114u: goto L_0039D2E0;
    case 115u: goto L_0039D328;
    case 116u: goto L_0039D338;
    case 117u: goto L_0039D34C;
    case 118u: goto L_0039D3B8;
    case 119u: goto L_0039D3D4;
    case 120u: goto L_0039D430;
    case 121u: goto L_0039D44C;
    case 122u: goto L_0039D4E8;
    case 123u: goto L_0039D510;
    case 124u: goto L_0039D590;
    case 125u: goto L_0039D5D8;
    case 126u: goto L_0039D600;
    case 127u: goto L_0039D660;
    case 128u: goto L_0039D6E0;
    case 129u: goto L_0039D720;
    case 130u: goto L_0039D72C;
    case 131u: goto L_0039D848;
    case 132u: goto L_0039D868;
    case 133u: goto L_0039D880;
    case 134u: goto L_0039D898;
    case 135u: goto L_0039D8A8;
    case 136u: goto L_0039D8F4;
    case 137u: goto L_0039D90C;
    case 138u: goto L_0039D924;
    case 139u: goto L_0039D93C;
    case 140u: goto L_0039D960;
    case 141u: goto L_0039D970;
    case 142u: goto L_0039D988;
    case 143u: goto L_0039D9B8;
    case 144u: goto L_0039D9CC;
    case 145u: goto L_0039D9E4;
    case 146u: goto L_0039D9F8;
    case 147u: goto L_0039DA10;
    case 148u: goto L_0039DA44;
    case 149u: goto L_0039DA54;
    case 150u: goto L_0039DA6C;
    case 151u: goto L_0039DA94;
    case 152u: goto L_0039DAA0;
    case 153u: goto L_0039DAA8;
    case 154u: goto L_0039DAB0;
    case 155u: goto L_0039DAD8;
    case 156u: goto L_0039DAEC;
    case 157u: goto L_0039DB18;
    case 158u: goto L_0039DB28;
    case 159u: goto L_0039DB88;
    case 160u: goto L_0039DBE8;
    case 161u: goto L_0039DC04;
    case 162u: goto L_0039DC18;
    case 163u: goto L_0039DC20;
    case 164u: goto L_0039DC50;
    case 165u: goto L_0039DC74;
    case 166u: goto L_0039DCA0;
    case 167u: goto L_0039DCC0;
    case 168u: goto L_0039DCD8;
    case 169u: goto L_0039DD08;
    case 170u: goto L_0039DD2C;
    case 171u: goto L_0039DD50;
    case 172u: goto L_0039DD94;
    case 173u: goto L_0039DDC4;
    case 174u: goto L_0039DDD0;
    case 175u: goto L_0039DDE0;
    case 176u: goto L_0039DDF4;
    case 177u: goto L_0039DE08;
    case 178u: goto L_0039DE1C;
    case 179u: goto L_0039DE30;
    case 180u: goto L_0039DE40;
    case 181u: goto L_0039DE60;
    case 182u: goto L_0039DE84;
    case 183u: goto L_0039DE98;
    case 184u: goto L_0039DEAC;
    case 185u: goto L_0039DED4;
    case 186u: goto L_0039DEF0;
    case 187u: goto L_0039DF14;
    case 188u: goto L_0039DF28;
    case 189u: goto L_0039DF3C;
    case 190u: goto L_0039DF50;
    case 191u: goto L_0039DF64;
    case 192u: goto L_0039DF78;
    case 193u: goto L_0039DF8C;
    case 194u: goto L_0039DFA8;
    case 195u: goto L_0039DFD8;
    case 196u: goto L_0039DFE4;
    case 197u: goto L_0039E020;
    case 198u: goto L_0039E050;
    case 199u: goto L_0039E068;
    case 200u: goto L_0039E080;
    case 201u: goto L_0039E098;
    case 202u: goto L_0039E0B8;
    case 203u: goto L_0039E0FC;
    case 204u: goto L_0039E114;
    case 205u: goto L_0039E12C;
    case 206u: goto L_0039E154;
    case 207u: goto L_0039E168;
    case 208u: goto L_0039E198;
    case 209u: goto L_0039E1B0;
    case 210u: goto L_0039E1C8;
    case 211u: goto L_0039E1E0;
    case 212u: goto L_0039E1F8;
    case 213u: goto L_0039E210;
    case 214u: goto L_0039E228;
    case 215u: goto L_0039E250;
    case 216u: goto L_0039E264;
    case 217u: goto L_0039E288;
    case 218u: goto L_0039E2A0;
    case 219u: goto L_0039E2C0;
    case 220u: goto L_0039E2F0;
    case 221u: goto L_0039E328;
    case 222u: goto L_0039E360;
    case 223u: goto L_0039E370;
    case 224u: goto L_0039E3A4;
    case 225u: goto L_0039E3AC;
    case 226u: goto L_0039E3BC;
    case 227u: goto L_0039E3C4;
    case 228u: goto L_0039E3D8;
    case 229u: goto L_0039E404;
    case 230u: goto L_0039E418;
    case 231u: goto L_0039E434;
    case 232u: goto L_0039E440;
    case 233u: goto L_0039E448;
    case 234u: goto L_0039E450;
    case 235u: goto L_0039E458;
    case 236u: goto L_0039E484;
    case 237u: goto L_0039E498;
    case 238u: goto L_0039E4A8;
    case 239u: goto L_0039E4D0;
    case 240u: goto L_0039E4E4;
    case 241u: goto L_0039E504;
    case 242u: goto L_0039E50C;
    case 243u: goto L_0039E514;
    case 244u: goto L_0039E51C;
    case 245u: goto L_0039E524;
    case 246u: goto L_0039E52C;
    case 247u: goto L_0039E550;
    case 248u: goto L_0039E568;
    case 249u: goto L_0039E580;
    case 250u: goto L_0039E5B4;
    case 251u: goto L_0039E5C8;
    case 252u: goto L_0039E5F0;
    case 253u: goto L_0039E624;
    case 254u: goto L_0039E630;
    case 255u: goto L_0039E660;
    case 256u: goto L_0039E670;
    case 257u: goto L_0039E6A8;
    case 258u: goto L_0039E6C8;
    case 259u: goto L_0039E6D8;
    case 260u: goto L_0039E738;
    case 261u: goto L_0039E7A0;
    case 262u: goto L_0039E7C0;
    case 263u: goto L_0039E7D8;
    case 264u: goto L_0039E7F0;
    case 265u: goto L_0039E800;
    case 266u: goto L_0039E810;
    case 267u: goto L_0039E828;
    case 268u: goto L_0039E830;
    case 269u: goto L_0039E838;
    case 270u: goto L_0039E850;
    case 271u: goto L_0039E868;
    case 272u: goto L_0039E870;
    case 273u: goto L_0039E878;
    case 274u: goto L_0039E88C;
    case 275u: goto L_0039E8A0;
    case 276u: goto L_0039E8A8;
    case 277u: goto L_0039E8B0;
    case 278u: goto L_0039E8B8;
    case 279u: goto L_0039E8C0;
    case 280u: goto L_0039E8C8;
    case 281u: goto L_0039E8D0;
    case 282u: goto L_0039E8F0;
    case 283u: goto L_0039E918;
    case 284u: goto L_0039E938;
    case 285u: goto L_0039E958;
    case 286u: goto L_0039E960;
    case 287u: goto L_0039E994;
    case 288u: goto L_0039EA10;
    case 289u: goto L_0039EA28;
    case 290u: goto L_0039EA40;
    case 291u: goto L_0039EA50;
    case 292u: goto L_0039EA58;
    case 293u: goto L_0039EA84;
    case 294u: goto L_0039EAB0;
    case 295u: goto L_0039EAB8;
    case 296u: goto L_0039EAC8;
    case 297u: goto L_0039EAD8;
    case 298u: goto L_0039EB08;
    case 299u: goto L_0039EB28;
    case 300u: goto L_0039EB30;
    case 301u: goto L_0039EB4C;
    case 302u: goto L_0039EB68;
    case 303u: goto L_0039EB90;
    case 304u: goto L_0039EBA0;
    case 305u: goto L_0039EBC8;
    case 306u: goto L_0039EC08;
    case 307u: goto L_0039EC10;
    case 308u: goto L_0039EC4C;
    case 309u: goto L_0039EC70;
    case 310u: goto L_0039EC98;
    case 311u: goto L_0039ECC0;
    case 312u: goto L_0039ECF4;
    case 313u: goto L_0039ED58;
    case 314u: goto L_0039ED80;
    case 315u: goto L_0039EDA4;
    case 316u: goto L_0039EDD0;
    case 317u: goto L_0039EDE8;
    case 318u: goto L_0039EE44;
    case 319u: goto L_0039EE60;
    case 320u: goto L_0039EE70;
    case 321u: goto L_0039EE80;
    case 322u: goto L_0039EE90;
    case 323u: goto L_0039EE9C;
    case 324u: goto L_0039EEAC;
    case 325u: goto L_0039EEBC;
    case 326u: goto L_0039EED4;
    case 327u: goto L_0039EEE8;
    case 328u: goto L_0039EF10;
    case 329u: goto L_0039EF28;
    case 330u: goto L_0039EF38;
    case 331u: goto L_0039EF58;
    case 332u: goto L_0039EF84;
    case 333u: goto L_0039F00C;
    case 334u: goto L_0039F058;
    case 335u: goto L_0039F0B8;
    case 336u: goto L_0039F108;
    case 337u: goto L_0039F120;
    case 338u: goto L_0039F12C;
    case 339u: goto L_0039F164;
    case 340u: goto L_0039F198;
    case 341u: goto L_0039F1A8;
    case 342u: goto L_0039F1D8;
    case 343u: goto L_0039F1EC;
    case 344u: goto L_0039F238;
    case 345u: goto L_0039F260;
    case 346u: goto L_0039F2B8;
    case 347u: goto L_0039F2CC;
    case 348u: goto L_0039F2F8;
    case 349u: goto L_0039F334;
    case 350u: goto L_0039F364;
    case 351u: goto L_0039F38C;
    case 352u: goto L_0039F3D8;
    case 353u: goto L_0039F408;
    case 354u: goto L_0039F428;
    case 355u: goto L_0039F448;
    case 356u: goto L_0039F490;
    case 357u: goto L_0039F4CC;
    case 358u: goto L_0039F4E0;
    case 359u: goto L_0039F5B8;
    case 360u: goto L_0039F600;
    case 361u: goto L_0039F630;
    case 362u: goto L_0039F64C;
    case 363u: goto L_0039F660;
    case 364u: goto L_0039F708;
    case 365u: goto L_0039F72C;
    case 366u: goto L_0039F744;
    case 367u: goto L_0039F75C;
    case 368u: goto L_0039F790;
    case 369u: goto L_0039F7B4;
    case 370u: goto L_0039F7EC;
    case 371u: goto L_0039F818;
    case 372u: goto L_0039F848;
    case 373u: goto L_0039F864;
    case 374u: goto L_0039F884;
    case 375u: goto L_0039F898;
    case 376u: goto L_0039F8B8;
    case 377u: goto L_0039F90C;
    case 378u: goto L_0039F938;
    case 379u: goto L_0039F958;
    case 380u: goto L_0039F968;
    case 381u: goto L_0039F990;
    case 382u: goto L_0039F9C0;
    case 383u: goto L_0039F9E0;
    case 384u: goto L_0039FA04;
    case 385u: goto L_0039FA38;
    case 386u: goto L_0039FA64;
    case 387u: goto L_0039FA74;
    case 388u: goto L_0039FA8C;
    case 389u: goto L_0039FAA8;
    case 390u: goto L_0039FAB0;
    case 391u: goto L_0039FAF8;
    case 392u: goto L_0039FB3C;
    case 393u: goto L_0039FB64;
    case 394u: goto L_0039FBA0;
    case 395u: goto L_0039FBD0;
    case 396u: goto L_0039FBE4;
    case 397u: goto L_0039FBF4;
    case 398u: goto L_0039FC08;
    case 399u: goto L_0039FC40;
    case 400u: goto L_0039FC6C;
    case 401u: goto L_0039FC7C;
    case 402u: goto L_0039FC8C;
    case 403u: goto L_0039FCB0;
    case 404u: goto L_0039FCD8;
    case 405u: goto L_0039FCE8;
    case 406u: goto L_0039FCFC;
    case 407u: goto L_0039FD20;
    case 408u: goto L_0039FD38;
    case 409u: goto L_0039FD88;
    case 410u: goto L_0039FDB0;
    case 411u: goto L_0039FDE8;
    case 412u: goto L_0039FDF8;
    case 413u: goto L_0039FE18;
    case 414u: goto L_0039FE50;
    case 415u: goto L_0039FE80;
    case 416u: goto L_0039FEA4;
    case 417u: goto L_0039FEB4;
    case 418u: goto L_0039FED0;
    case 419u: goto L_0039FEFC;
    case 420u: goto L_0039FF14;
    case 421u: goto L_0039FF38;
    case 422u: goto L_0039FF54;
    case 423u: goto L_0039FF5C;
    case 424u: goto L_0039FF64;
    case 425u: goto L_0039FF6C;
    case 426u: goto L_0039FF74;
    case 427u: goto L_0039FF7C;
    case 428u: goto L_0039FF90;
    case 429u: goto L_0039FFB0;
    case 430u: goto L_0039FFC4;
    case 431u: goto L_0039FFD8;
    default: bad_entry(c, 0x0039C000u); return;
    }
L_0039C320:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[9], c.r[4].w[0] + 4872u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[9].w[0] + 4u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], 0u + 11u);  if (t) { goto L_0039C370; } }
    set32(c.r[5], ld32((c.r[9].w[0] + 76u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A3(c, 193u, depth); }
L_0039C370:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039C380:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[9], c.r[16].w[0] + 4872u);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + c.r[2].w[0]);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[9].w[0] + 4u)));
    set32(c.r[6], 0u + 12u);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0039C3D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C3D0u); set32(c.r[5], ld32((c.r[9].w[0] + 76u)));  if (depth < kMaxDepth) unit_00A3(c, 193u, depth + 1u); else { c.pc = 0x003AE0B0u; return; } if (c.pc != 0x0039C3D0u) [[unlikely]] return; }
L_0039C3D0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0039C3D4:
    set32(c.r[3], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039C3F0:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4880u), c.r[6].w[0]);  c.pc = t; return; }
L_0039C410:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4880u)));  c.pc = t; return; }
L_0039C430:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4884u), c.r[6].w[0]);  c.pc = t; return; }
L_0039C450:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 4884u)));  c.pc = t; return; }
L_0039C470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C480u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 457u, depth + 1u); else { c.pc = 0x0039B758u; return; } if (c.pc != 0x0039C480u) [[unlikely]] return; }
L_0039C480:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039C498:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C4A8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 456u, depth + 1u); else { c.pc = 0x0039B740u; return; } if (c.pc != 0x0039C4A8u) [[unlikely]] return; }
L_0039C4A8:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039C4C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C4E4u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 26u, depth + 1u); else { c.pc = 0x0039C608u; return; } if (c.pc != 0x0039C4E4u) [[unlikely]] return; }
L_0039C4E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0039C518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C4FCu);  if (depth < kMaxDepth) unit_0096(c, 219u, depth + 1u); else { c.pc = 0x0037A8C8u; return; } if (c.pc != 0x0039C4FCu) [[unlikely]] return; }
L_0039C4FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C510u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0096(c, 219u, depth + 1u); else { c.pc = 0x0037A8C8u; return; } if (c.pc != 0x0039C510u) [[unlikely]] return; }
L_0039C510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_0039C560; } }
L_0039C518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C520u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 28u, depth + 1u); else { c.pc = 0x0039C640u; return; } if (c.pc != 0x0039C520u) [[unlikely]] return; }
L_0039C520:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039C558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C530u);  if (depth < kMaxDepth) unit_0096(c, 153u, depth + 1u); else { c.pc = 0x00379CD0u; return; } if (c.pc != 0x0039C530u) [[unlikely]] return; }
L_0039C530:
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C548u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039C548u) [[unlikely]] return; }
L_0039C548:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_0039C560; } }
L_0039C558:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[18].w[0]), 0u);
    c.budget -= 2;
L_0039C560:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039C578:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C594u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0096(c, 170u, depth + 1u); else { c.pc = 0x00379E40u; return; } if (c.pc != 0x0039C594u) [[unlikely]] return; }
L_0039C594:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C5A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039C5A8u) [[unlikely]] return; }
L_0039C5A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[3].w[0] + 24944u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C5C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039C5C0u) [[unlikely]] return; }
L_0039C5C0:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C5CCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 102u, depth + 1u); else { c.pc = 0x00379428u; return; } if (c.pc != 0x0039C5CCu) [[unlikely]] return; }
L_0039C5CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C5E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039C5E0u) [[unlikely]] return; }
L_0039C5E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[3].w[0] + 24948u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C5F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039C5F8u) [[unlikely]] return; }
L_0039C5F8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039C608:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C620u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039C620u) [[unlikely]] return; }
L_0039C620:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 24944u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039C640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C658u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039C658u) [[unlikely]] return; }
L_0039C658:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 24948u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039C678:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];  c.pc = t; return; }
L_0039C6B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C6C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x0039C6C4u) [[unlikely]] return; }
L_0039C6C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 353ull;  if (t) { goto L_0039C6F0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0039E580; }
L_0039C6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C6F8u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x0039C6F8u) [[unlikely]] return; }
L_0039C6F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039C710:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C720u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039C720u) [[unlikely]] return; }
L_0039C720:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039C730:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 49u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C748u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039C748u) [[unlikely]] return; }
L_0039C748:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 56u);  if (t) { goto L_0039C764; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C75Cu);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039C75Cu) [[unlikely]] return; }
L_0039C75C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0039C76C; } }
L_0039C764:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0039C76C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039C778:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 49u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C790u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039C790u) [[unlikely]] return; }
L_0039C790:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 57u);  if (t) { goto L_0039C7AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C7A4u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039C7A4u) [[unlikely]] return; }
L_0039C7A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0039C7B4; } }
L_0039C7AC:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0039C7B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039C7C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[16], c.r[18].w[0] + 3368u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C7E8u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 269u, depth + 1u); else { c.pc = 0x0039E838u; return; } if (c.pc != 0x0039C7E8u) [[unlikely]] return; }
L_0039C7E8:
    set32(c.r[6], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 360u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 356u), c.r[6].w[0]);
    set32(c.r[7], c.r[3].w[0] + 31u);
    c.r[5].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[7].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 3732u), c.r[6].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C830u); st32((c.r[16].w[0] + 360u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x0039C830u) [[unlikely]] return; }
L_0039C830:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039C848:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[16], c.r[17].w[0] + 3368u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C880u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 269u, depth + 1u); else { c.pc = 0x0039E838u; return; } if (c.pc != 0x0039C880u) [[unlikely]] return; }
L_0039C880:
    set32(c.r[7], ld32((c.r[16].w[0] + 500u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 504u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[7].w[0] + 31u);
    c.r[5].d[0] = c.r[7].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], c.r[7].w[0] - c.r[3].w[0]);
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    c.r[3].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_0039C8D4; } }
    set32(c.r[2], c.r[2].w[0] << 5);
    st32((c.r[16].w[0] + 492u), c.r[18].w[0]);
    set32(c.r[2], c.r[7].w[0] - c.r[2].w[0]);
    set32(c.r[20], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 3876u), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 500u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 500u), c.r[3].w[0]);
    c.budget -= 10;
L_0039C8D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C8DCu);  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x0039C8DCu) [[unlikely]] return; }
L_0039C8DC:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039C900:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[16], c.r[18].w[0] + 3368u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C934u); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 269u, depth + 1u); else { c.pc = 0x0039E838u; return; } if (c.pc != 0x0039C934u) [[unlikely]] return; }
L_0039C934:
    set32(c.r[3], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 500u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0039C958; } }
    set32(c.r[2], 0u - 1u);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0039C9A0; } }
L_0039C958:
    set32(c.r[2], ld32((c.r[16].w[0] + 492u)));
    set32(c.r[20], 0u + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 504u)));
    c.r[5].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[6], c.r[3].w[0] + 31u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 3876u)));
    st32((c.r[19].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 504u), c.r[2].w[0]);
    c.budget -= 18;
L_0039C9A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C9A8u);  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x0039C9A8u) [[unlikely]] return; }
L_0039C9A8:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039C9D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CA10u); c.r[23].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x0039CA10u) [[unlikely]] return; }
L_0039CA10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0039CA30; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CA24u); c.r[5].d[0] = c.r[5].d[0] | 354ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x0039CA24u) [[unlikely]] return; }
L_0039CA24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0039CAFC; } }
    c.budget -= 1;
L_0039CA30:
    set32(c.r[22], ld32((c.r[16].w[0] + 3688u)));
    set32(c.r[17], c.r[16].w[0] + 3368u);
    st32((c.r[23].w[0]), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CA4Cu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 35u, depth + 1u); else { c.pc = 0x003AC5A0u; return; } if (c.pc != 0x0039CA4Cu) [[unlikely]] return; }
L_0039CA4C:
    set32(c.r[3], ld32((c.r[17].w[0] + 356u)));
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0039CAF8; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0039CAF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CA74u); set32(c.r[21], c.r[16].w[0] + 3380u);  if (depth < kMaxDepth) unit_009F(c, 269u, depth + 1u); else { c.pc = 0x0039E838u; return; } if (c.pc != 0x0039CA74u) [[unlikely]] return; }
L_0039CA74:
    set32(c.r[16], ld32((c.r[17].w[0] + 360u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0039CA80:
    c.r[2].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_0039CAD4; } }
    set32(c.r[4], c.r[16].w[0] + 31u);
    c.r[3].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0])));
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CAC0u); set32(c.r[4], ld32((c.r[2].w[0] + 352u)));  if (depth < kMaxDepth) unit_009B(c, 173u, depth + 1u); else { c.pc = 0x0038E0D0u; return; } if (c.pc != 0x0039CAC0u) [[unlikely]] return; }
L_0039CAC0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CA80u | kUnwind; return; } goto L_0039CA80; }
L_0039CAD4:
    st32((c.r[23].w[0]), c.r[16].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CAF4u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x0039CAF4u) [[unlikely]] return; }
L_0039CAF4:
    c.r[2].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 1;
L_0039CAF8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0039CAFC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0039CB28:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CB50u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 269u, depth + 1u); else { c.pc = 0x0039E838u; return; } if (c.pc != 0x0039CB50u) [[unlikely]] return; }
L_0039CB50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CB60u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 63u, depth + 1u); else { c.pc = 0x0039CBC8u; return; } if (c.pc != 0x0039CB60u) [[unlikely]] return; }
L_0039CB60:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0039CB88; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039CB8C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0039CB90; } }
L_0039CB88:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0039CB8C:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0039CB90:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039CBA4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039CBA8; } }
L_0039CBA4:
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0039CBA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CBB0u);  if (depth < kMaxDepth) unit_009F(c, 270u, depth + 1u); else { c.pc = 0x0039E850u; return; } if (c.pc != 0x0039CBB0u) [[unlikely]] return; }
L_0039CBB0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039CBC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CBF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 70u, depth + 1u); else { c.pc = 0x0039CC78u; return; } if (c.pc != 0x0039CBF0u) [[unlikely]] return; }
L_0039CBF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CC00u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 72u, depth + 1u); else { c.pc = 0x0039CCD8u; return; } if (c.pc != 0x0039CC00u) [[unlikely]] return; }
L_0039CC00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039CC60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CC18u);  if (depth < kMaxDepth) unit_009F(c, 73u, depth + 1u); else { c.pc = 0x0039CCE0u; return; } if (c.pc != 0x0039CC18u) [[unlikely]] return; }
L_0039CC18:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0039CC64; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CC30u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 128u, depth + 1u); else { c.pc = 0x0039D6E0u; return; } if (c.pc != 0x0039CC30u) [[unlikely]] return; }
L_0039CC30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039CC60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CC48u);  if (depth < kMaxDepth) unit_009F(c, 109u, depth + 1u); else { c.pc = 0x0039D248u; return; } if (c.pc != 0x0039CC48u) [[unlikely]] return; }
L_0039CC48:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0039CC64; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CC60u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 122u, depth + 1u); else { c.pc = 0x0039D4E8u; return; } if (c.pc != 0x0039CC60u) [[unlikely]] return; }
L_0039CC60:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0039CC64:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039CC78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CC94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x0039CC94u) [[unlikely]] return; }
L_0039CC94:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 44u), 0u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039CCD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0039CCE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CD08u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 78u, depth + 1u); else { c.pc = 0x0039CD98u; return; } if (c.pc != 0x0039CD08u) [[unlikely]] return; }
L_0039CD08:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_0039CD80; } }
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039CD80; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[2], c.r[3].w[0] << 1);  if (t) { goto L_0039CD40; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 5;
L_0039CD40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 16376u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CD5Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 89u, depth + 1u); else { c.pc = 0x0039CF18u; return; } if (c.pc != 0x0039CD5Cu) [[unlikely]] return; }
L_0039CD5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CD6Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 95u, depth + 1u); else { c.pc = 0x0039D058u; return; } if (c.pc != 0x0039CD6Cu) [[unlikely]] return; }
L_0039CD6C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CD7Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 128u, depth + 1u); else { c.pc = 0x0039D6E0u; return; } if (c.pc != 0x0039CD7Cu) [[unlikely]] return; }
L_0039CD7C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0039CD80:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039CD98:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CDD4u); st32((c.r[22].w[0]), 0u);  if (depth < kMaxDepth) unit_009F(c, 102u, depth + 1u); else { c.pc = 0x0039D160u; return; } if (c.pc != 0x0039CDD4u) [[unlikely]] return; }
L_0039CDD4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[17].w[0] - c.r[19].w[0]);
    set32(c.r[4], c.r[17].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[21], c.r[20].w[0] - c.r[18].w[0]);  if (t) { goto L_0039CE58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CDF4u); set32(c.r[5], c.r[21].w[0] - 1u);  if (depth < kMaxDepth) unit_009F(c, 102u, depth + 1u); else { c.pc = 0x0039D160u; return; } if (c.pc != 0x0039CDF4u) [[unlikely]] return; }
L_0039CDF4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] - c.r[19].w[0]);
    set32(c.r[4], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[5], c.r[20].w[0] - c.r[3].w[0]);  if (t) { goto L_0039CE58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CE14u); set32(c.r[5], c.r[5].w[0] - 1u);  if (depth < kMaxDepth) unit_009F(c, 102u, depth + 1u); else { c.pc = 0x0039D160u; return; } if (c.pc != 0x0039CE14u) [[unlikely]] return; }
L_0039CE14:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] - c.r[16].w[0]);  if (t) { goto L_0039CE58; } }
    set32(c.r[16], c.r[16].w[0] - c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[4].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039CE58; } }
    mmi::div(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x0039CE34u);  goto L_0039CE38; }
L_0039CE38:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0039CE5C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CE54u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 84u, depth + 1u); else { c.pc = 0x0039CE80u; return; } if (c.pc != 0x0039CE54u) [[unlikely]] return; }
L_0039CE54:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0039CE58:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0039CE5C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039CE80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CEA8u); c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 73u, depth + 1u); else { c.pc = 0x0038A460u; return; } if (c.pc != 0x0039CEA8u) [[unlikely]] return; }
L_0039CEA8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[8], c.r[29].w[0] + 20u);  if (t) { goto L_0039CEFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CECCu);  if (depth < kMaxDepth) unit_009A(c, 8u, depth + 1u); else { c.pc = 0x00388128u; return; } if (c.pc != 0x0039CECCu) [[unlikely]] return; }
L_0039CECC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0039CEFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CEECu);  if (depth < kMaxDepth) unit_009A(c, 36u, depth + 1u); else { c.pc = 0x00389E80u; return; } if (c.pc != 0x0039CEECu) [[unlikely]] return; }
L_0039CEEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CEF4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 89u, depth + 1u); else { c.pc = 0x0038A600u; return; } if (c.pc != 0x0039CEF4u) [[unlikely]] return; }
L_0039CEF4:
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0039CEFC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0039CF18:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[20].w[0] + 16u)));  if (t) { goto L_0039CF68; } }
    c.budget -= 1;
L_0039CF50:
    set32(c.r[16], c.r[16].w[0] - c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + c.r[18].w[0]);  if (t) { goto L_0039CFE4; } }
    c.budget -= 2;
    if (c.r[16].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0039CFE8; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0039CF68:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CF74u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 143u, depth + 1u); else { c.pc = 0x0039D9B8u; return; } if (c.pc != 0x0039CF74u) [[unlikely]] return; }
L_0039CF74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CF50u | kUnwind; return; } goto L_0039CF50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] + 27000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0]), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CF98u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 93u, depth + 1u); else { c.pc = 0x0039D008u; return; } if (c.pc != 0x0039CF98u) [[unlikely]] return; }
L_0039CF98:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0039CFE8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { st32((c.r[20].w[0] + 28u), c.r[2].w[0]);  goto L_0039CFB0; }
L_0039CFB0:
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  goto L_0039CFBC; }
L_0039CFBC:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  goto L_0039CFC8; }
L_0039CFC8:
    set32(c.r[6], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0039CFE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[20].w[0] + 32u), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16448u);
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_0039CFE4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0039CFE8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039D008:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].sd[0] < 2049ll ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], 0u + 2048u);
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[5].d[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 148u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D038u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 60u, depth + 1u); else { c.pc = 0x00387A98u; return; } if (c.pc != 0x0039D038u) [[unlikely]] return; }
L_0039D038:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 144u), c.r[16].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0039DCA0; }
L_0039D058:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    set32(c.r[22], c.r[20].w[0] + c.r[19].w[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[23], ld32((c.r[21].w[0] + 16u)));  if (t) { goto L_0039D0B8; } }
L_0039D098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D0A0u);  if (depth < kMaxDepth) unit_009F(c, 122u, depth + 1u); else { c.pc = 0x0039D4E8u; return; } if (c.pc != 0x0039D0A0u) [[unlikely]] return; }
L_0039D0A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0039D134; } }
    set32(c.r[2], c.r[18].w[0] - c.r[20].w[0]);
    c.budget -= 1;
L_0039D0AC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] - c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_0039D0B8:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0039D134; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D0D0u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (depth < kMaxDepth) unit_009F(c, 102u, depth + 1u); else { c.pc = 0x0039D160u; return; } if (c.pc != 0x0039D0D0u) [[unlikely]] return; }
L_0039D0D0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[5], c.r[22].w[0] - c.r[18].w[0]);  if (t) { goto L_0039D130; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] - c.r[20].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D0ACu | kUnwind; return; } goto L_0039D0AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D100u); c.r[16].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 105u, depth + 1u); else { c.pc = 0x0039D1C8u; return; } if (c.pc != 0x0039D100u) [[unlikely]] return; }
L_0039D100:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[22].w[0] - c.r[17].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D120u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 109u, depth + 1u); else { c.pc = 0x0039D248u; return; } if (c.pc != 0x0039D120u) [[unlikely]] return; }
L_0039D120:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D098u | kUnwind; return; } goto L_0039D098; } }
L_0039D130:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0039D134:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0039D160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039D1AC; } }
L_0039D188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D190u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 29u, depth + 1u); else { c.pc = 0x00389D38u; return; } if (c.pc != 0x0039D190u) [[unlikely]] return; }
L_0039D190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_0039D1A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039D1B0; } }
L_0039D1A0:
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D188u | kUnwind; return; } goto L_0039D188; } }
L_0039D1AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039D1B0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039D1C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D1E8u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 73u, depth + 1u); else { c.pc = 0x0038A460u; return; } if (c.pc != 0x0039D1E8u) [[unlikely]] return; }
L_0039D1E8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    set32(c.r[3], 0u + 6u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[16].d[0];
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 4u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);  if (t) { goto L_0039D22C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D21Cu);  if (depth < kMaxDepth) unit_009A(c, 8u, depth + 1u); else { c.pc = 0x00388128u; return; } if (c.pc != 0x0039D21Cu) [[unlikely]] return; }
L_0039D21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D224u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 89u, depth + 1u); else { c.pc = 0x0038A600u; return; } if (c.pc != 0x0039D224u) [[unlikely]] return; }
L_0039D224:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0039D22C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039D248:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D26Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 114u, depth + 1u); else { c.pc = 0x0039D2E0u; return; } if (c.pc != 0x0039D26Cu) [[unlikely]] return; }
L_0039D26C:
    set32(c.r[4], c.r[16].w[0] + 2u);
    set32(c.r[5], c.r[17].w[0] - 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0039D2AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D284u);  if (depth < kMaxDepth) unit_009F(c, 114u, depth + 1u); else { c.pc = 0x0039D2E0u; return; } if (c.pc != 0x0039D284u) [[unlikely]] return; }
L_0039D284:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0039D2C4; }
    set32(c.r[4], c.r[16].w[0] + 1u);
    set32(c.r[5], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D29Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 114u, depth + 1u); else { c.pc = 0x0039D2E0u; return; } if (c.pc != 0x0039D29Cu) [[unlikely]] return; }
L_0039D29C:
    set32(c.r[4], c.r[16].w[0] + 3u);
    set32(c.r[5], c.r[17].w[0] - 3u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0039D2B8; } }
L_0039D2AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039D2C4; } }
    c.budget -= 1;
L_0039D2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D2C0u);  if (depth < kMaxDepth) unit_009F(c, 114u, depth + 1u); else { c.pc = 0x0039D2E0u; return; } if (c.pc != 0x0039D2C0u) [[unlikely]] return; }
L_0039D2C0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0039D2C4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039D2E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[16].sd[0] < 2049ll ? 1ull : 0ull;
    set32(c.r[5], 0u + 2048u);
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[5].d[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 24952u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D328u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x0039D328u) [[unlikely]] return; }
L_0039D328:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039D39C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[19], c.r[2].w[0] + 15752u);
    c.budget -= 2;
L_0039D338:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 4u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D34Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 147u, depth + 1u); else { c.pc = 0x00398D68u; return; } if (c.pc != 0x0039D34Cu) [[unlikely]] return; }
L_0039D34C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039D390; } }
    st32((c.r[18].w[0] + 12u), c.r[19].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 7u));
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 9u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8u));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 10u));
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[6].d[0] = ld8((c.r[17].w[0] + 11u));
    set32(c.r[3], c.r[3].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_0039D39C; } }
L_0039D390:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D338u | kUnwind; return; } goto L_0039D338; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039D39C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039D3B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D3D4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 124u, depth + 1u); else { c.pc = 0x0039D590u; return; } if (c.pc != 0x0039D3D4u) [[unlikely]] return; }
L_0039D3D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u - 1u);  if (t) { goto L_0039D3E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039D424; } }
    c.budget -= 1;
L_0039D3E8:
    c.r[3].d[0] = ld8((c.r[29].w[0]));
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[1], c.r[1].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 15968u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[3].w[0] << 5);  if (t) { goto L_0039D424; } }
    set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 4;
L_0039D424:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039D430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D44Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 124u, depth + 1u); else { c.pc = 0x0039D590u; return; } if (c.pc != 0x0039D44Cu) [[unlikely]] return; }
L_0039D44C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u - 1u);  if (t) { goto L_0039D460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039D4D8; } }
    c.budget -= 1;
L_0039D460:
    c.r[3].d[0] = ld8((c.r[29].w[0]));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 2u));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[1], c.r[1].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 15968u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039D4D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16224u)));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 3u));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 15952u)));
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 14;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0039D4C0u);  goto L_0039D4C4; }
L_0039D4C4:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 5;
L_0039D4D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039D4E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D510u); c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 124u, depth + 1u); else { c.pc = 0x0039D590u; return; } if (c.pc != 0x0039D510u) [[unlikely]] return; }
L_0039D510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[29].w[0] + 6u));  if (t) { goto L_0039D57C; } }
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[29].w[0] + 3u));
    set32(c.r[4], c.r[4].w[0] << 2);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 15936u));
    set32(c.r[5], c.r[5].w[0] << 2);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 15952u)));
    st32((c.r[16].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[7], c.r[3].w[0] + 9824u);
    ldl(c.r[4], (c.r[29].w[0] + 7u));
    ldr(c.r[4], (c.r[29].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 9u)));
    sdl(c.r[4], (c.r[7].w[0] + 7u));
    sdr(c.r[4], (c.r[7].w[0]));
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[7].w[0] + 9u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 10u)));
    st8((c.r[7].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 25;
L_0039D57C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039D590:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_0039D634; } }
    set32(c.r[22], 0u + 255u);
    set32(c.r[21], 0u + 248u);
    set32(c.r[20], 0u + 15u);
    set32(c.r[19], 0u + 3u);
    c.budget -= 4;
L_0039D5D8:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[22].d[0]) { set32(c.r[18], c.r[18].w[0] - 1u);  goto L_0039D628; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 248ull;
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[21].d[0]) { set32(c.r[18], c.r[18].w[0] - 1u);  goto L_0039D628; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D600u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0039D660u; return; } if (c.pc != 0x0039D600u) [[unlikely]] return; }
L_0039D600:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] - 1u);  goto L_0039D628; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[20].d[0]) { set32(c.r[18], c.r[18].w[0] - 1u);  goto L_0039D628; }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[19].d[0]; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039D638; } }
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_0039D628:
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D5D8u | kUnwind; return; } goto L_0039D5D8; } }
L_0039D634:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039D638:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039D660:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[7].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[12], c.r[2].w[0] >> 4);
    set32(c.r[8], c.r[6].w[0] >> 2);
    set32(c.r[9], c.r[6].w[0] >> 1);
    set32(c.r[5], c.r[7].w[0] >> 1);
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    set32(c.r[10], c.r[2].w[0] >> 3);
    set32(c.r[11], c.r[2].w[0] >> 2);
    c.r[13].d[0] = c.r[6].d[0] & 1ull;
    set32(c.r[6], c.r[6].w[0] >> 4);
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], c.r[2].w[0] >> 6);
    c.r[5].d[0] = c.r[5].d[0] & 3ull;
    c.r[8].d[0] = c.r[8].d[0] & 3ull;
    c.r[9].d[0] = c.r[9].d[0] & 1ull;
    c.r[12].d[0] = c.r[12].d[0] & 3ull;
    c.r[10].d[0] = c.r[10].d[0] & 1ull;
    c.r[11].d[0] = c.r[11].d[0] & 1ull;
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[11].w[0]));  c.pc = t; return; }
L_0039D6E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.budget -= 11;
    { const bool t = c.r[16].sd[0] <= 0; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_0039D820; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[19], c.r[2].w[0] + 15896u);
    set32(c.r[20], c.r[3].w[0] + 16448u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
L_0039D720:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D72Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_009A(c, 95u, depth + 1u); else { c.pc = 0x0038A7E8u; return; } if (c.pc != 0x0039D72Cu) [[unlikely]] return; }
L_0039D72C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] - c.r[17].w[0]);  if (t) { goto L_0039D824; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 7u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] - c.r[4].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] >> 4);
    c.r[6].d[0] = c.r[6].d[0] & 15ull;
    set32(c.r[2], c.r[6].w[0] + 255u);
    c.r[12].d[0] = ld8((c.r[5].w[0] + 11u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[7].d[0] = ld8((c.r[5].w[0] + 10u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.r[8].d[0] = ld8((c.r[5].w[0] + 4u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 6u));
    c.r[10].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.r[11].d[0] = ld8((c.r[5].w[0] + 9u));  if (t) { goto L_0039D818; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] >> 5);  if (t) { goto L_0039D818; } }
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] & 15ull;  if (t) { goto L_0039D818; } }
    set32(c.r[4], c.r[4].w[0] >> 4);
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0039D7E4; } }
    set32(c.r[2], c.r[11].w[0] << 2);
    set32(c.r[3], c.r[10].w[0] << 10);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[7].w[0] >> 6);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 11;
L_0039D7E4:
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[2].d[0] = c.r[7].d[0] & 31ull;
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[4], c.r[12].w[0] >> 3);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[18].w[0] + 8u), c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 11);
    st32((c.r[18].w[0] + 32u), c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0039D820; } }
    c.budget -= 1;
L_0039D818:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D720u | kUnwind; return; } goto L_0039D720; } }
L_0039D820:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0039D824:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039D848:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 32u);
    set32(c.r[5], c.r[5].w[0] + 29200u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A3(c, 328u, depth); }
L_0039D868:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A3(c, 331u, depth); }
L_0039D880:
    st32((c.r[4].w[0] + 144u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_0039D898:
    st32((c.r[4].w[0] + 144u), 0u);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_0039D8A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 6u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[17], c.r[17].w[0] + 6u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0]), 0u);
    c.budget -= 17;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039D944; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D8F4u);  if (depth < kMaxDepth) unit_009F(c, 140u, depth + 1u); else { c.pc = 0x0039D960u; return; } if (c.pc != 0x0039D8F4u) [[unlikely]] return; }
L_0039D8F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] - 12u);  goto L_0039D914; }
    set32(c.r[16], c.r[16].w[0] - 2u);
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D90Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 140u, depth + 1u); else { c.pc = 0x0039D960u; return; } if (c.pc != 0x0039D90Cu) [[unlikely]] return; }
L_0039D90C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] - 12u);  if (t) { goto L_0039D944; } }
L_0039D914:
    set32(c.r[17], c.r[17].w[0] + 12u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D924u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 143u, depth + 1u); else { c.pc = 0x0039D9B8u; return; } if (c.pc != 0x0039D924u) [[unlikely]] return; }
L_0039D924:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039D944; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D93Cu);  if (depth < kMaxDepth) unit_009F(c, 147u, depth + 1u); else { c.pc = 0x0039DA10u; return; } if (c.pc != 0x0039D93Cu) [[unlikely]] return; }
L_0039D93C:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0039D944:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039D960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D970u);  if (depth < kMaxDepth) unit_009F(c, 142u, depth + 1u); else { c.pc = 0x0039D988u; return; } if (c.pc != 0x0039D970u) [[unlikely]] return; }
L_0039D970:
    c.r[2].d[0] = c.r[2].d[0] ^ 447ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039D988:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[6].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];  c.pc = t; return; }
L_0039D9B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D9CCu);  if (depth < kMaxDepth) unit_00A3(c, 332u, depth + 1u); else { c.pc = 0x003AF528u; return; } if (c.pc != 0x0039D9CCu) [[unlikely]] return; }
L_0039D9CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039D9FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D9E4u);  if (depth < kMaxDepth) unit_00A3(c, 347u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x0039D9E4u) [[unlikely]] return; }
L_0039D9E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D9F8u); st32((c.r[29].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A3(c, 336u, depth + 1u); else { c.pc = 0x003AF5F0u; return; } if (c.pc != 0x0039D9F8u) [[unlikely]] return; }
L_0039D9F8:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_0039D9FC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039DA10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 75u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DA44u); set32(c.r[19], c.r[17].w[0] + 120u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039DA44u) [[unlikely]] return; }
L_0039DA44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DA54u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039DA54u) [[unlikely]] return; }
L_0039DA54:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0039DA6C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[16].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DA6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039DA6Cu) [[unlikely]] return; }
L_0039DA6C:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039DAB4; } }
    c.r[2].d[0] = c.r[18].sd[0] < 2049ll ? 1ull : 0ull;
    set32(c.r[16], 0u + 2048u);
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[18].d[0];
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DA94u); set32(c.r[4], c.r[17].w[0] + 268u);  if (depth < kMaxDepth) unit_0099(c, 60u, depth + 1u); else { c.pc = 0x00387A98u; return; } if (c.pc != 0x0039DA94u) [[unlikely]] return; }
L_0039DA94:
    st32((c.r[19].w[0] + 144u), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DAA0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 166u, depth + 1u); else { c.pc = 0x0039DCA0u; return; } if (c.pc != 0x0039DAA0u) [[unlikely]] return; }
L_0039DAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DAA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 219u, depth + 1u); else { c.pc = 0x0039E2C0u; return; } if (c.pc != 0x0039DAA8u) [[unlikely]] return; }
L_0039DAA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DAB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 155u, depth + 1u); else { c.pc = 0x0039DAD8u; return; } if (c.pc != 0x0039DAB0u) [[unlikely]] return; }
L_0039DAB0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0039DAB4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039DAD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DAECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 164u, depth + 1u); else { c.pc = 0x0039DC50u; return; } if (c.pc != 0x0039DAECu) [[unlikely]] return; }
L_0039DAEC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 120u);  if (t) { goto L_0039DB08; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0039DB18; }
L_0039DB08:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039DB18:
    c.r[2].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + 2176u);  if (t) { goto L_0039DB88; } }
L_0039DB28:
    ldl(c.r[3], (c.r[5].w[0] + 7u));
    ldr(c.r[3], (c.r[5].w[0]));
    ldl(c.r[6], (c.r[5].w[0] + 15u));
    ldr(c.r[6], (c.r[5].w[0] + 8u));
    ldl(c.r[7], (c.r[5].w[0] + 23u));
    ldr(c.r[7], (c.r[5].w[0] + 16u));
    ldl(c.r[8], (c.r[5].w[0] + 31u));
    ldr(c.r[8], (c.r[5].w[0] + 24u));
    sdl(c.r[3], (c.r[4].w[0] + 7u));
    sdr(c.r[3], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    sdl(c.r[7], (c.r[4].w[0] + 23u));
    sdr(c.r[7], (c.r[4].w[0] + 16u));
    sdl(c.r[8], (c.r[4].w[0] + 31u));
    sdr(c.r[8], (c.r[4].w[0] + 24u));
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039DB28u | kUnwind; return; } goto L_0039DB28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039DBBC; } }
    c.budget -= 1;
L_0039DB88:
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.r[6].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[7].d[0] = ld64((c.r[5].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[5].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[3].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[6].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[7].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039DB88u | kUnwind; return; } goto L_0039DB88; } }
L_0039DBBC:
    ldl(c.r[2], (c.r[5].w[0] + 7u));
    ldr(c.r[2], (c.r[5].w[0]));
    ldl(c.r[3], (c.r[5].w[0] + 15u));
    ldr(c.r[3], (c.r[5].w[0] + 8u));
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    sdl(c.r[2], (c.r[4].w[0] + 7u));
    sdr(c.r[2], (c.r[4].w[0]));
    sdl(c.r[3], (c.r[4].w[0] + 15u));
    sdr(c.r[3], (c.r[4].w[0] + 8u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[6].w[0]);  c.pc = t; return; }
L_0039DBE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DC04u); set32(c.r[16], c.r[17].w[0] + 120u);  if (depth < kMaxDepth) unit_009F(c, 164u, depth + 1u); else { c.pc = 0x0039DC50u; return; } if (c.pc != 0x0039DC04u) [[unlikely]] return; }
L_0039DC04:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039DC38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DC18u);  if (depth < kMaxDepth) unit_009F(c, 157u, depth + 1u); else { c.pc = 0x0039DB18u; return; } if (c.pc != 0x0039DC18u) [[unlikely]] return; }
L_0039DC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DC20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 166u, depth + 1u); else { c.pc = 0x0039DCA0u; return; } if (c.pc != 0x0039DC20u) [[unlikely]] return; }
L_0039DC20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0039E2C0; }
L_0039DC38:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039DC50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 13992u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039DC8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DC74u);  if (depth < kMaxDepth) unit_00A0(c, 73u, depth + 1u); else { c.pc = 0x003A0988u; return; } if (c.pc != 0x0039DC74u) [[unlikely]] return; }
L_0039DC74:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 13992u)));  goto L_0039DC88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039DC8C; } }
    c.budget -= 1;
L_0039DC88:
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0039DC8C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039DCA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[4], c.r[16].w[0] + 148u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DCC0u); set32(c.r[5], ld32((c.r[16].w[0] + 144u)));  if (depth < kMaxDepth) unit_00A3(c, 332u, depth + 1u); else { c.pc = 0x003AF528u; return; } if (c.pc != 0x0039DCC0u) [[unlikely]] return; }
L_0039DCC0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039DCF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DCD8u);  if (depth < kMaxDepth) unit_009F(c, 169u, depth + 1u); else { c.pc = 0x0039DD08u; return; } if (c.pc != 0x0039DCD8u) [[unlikely]] return; }
L_0039DCD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A3(c, 336u, depth); }
L_0039DCF0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039DD08:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DD2Cu); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 347u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x0039DD2Cu) [[unlikely]] return; }
L_0039DD2C:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[5], c.r[29].w[0] + 4u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 8u);
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0]), c.r[3].w[0]);  if (t) { goto L_0039DE48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DD50u);  if (depth < kMaxDepth) unit_00A3(c, 371u, depth + 1u); else { c.pc = 0x003AFB30u; return; } if (c.pc != 0x0039DD50u) [[unlikely]] return; }
L_0039DD50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_0039DD64; } }
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
L_0039DD64:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 12u);
    set32(c.r[16], c.r[2].w[0] << 1);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] << 2);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DD94u); set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A4(c, 4u, depth + 1u); else { c.pc = 0x003B0040u; return; } if (c.pc != 0x0039DD94u) [[unlikely]] return; }
L_0039DD94:
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    c.r[16].d[0] = c.r[16].sd[0] < 110ll ? 1ull : 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    set32(c.r[2], 0u - c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0039DDB8; } }
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_0039DDB8:
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DDC4u); st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009F(c, 181u, depth + 1u); else { c.pc = 0x0039DE60u; return; } if (c.pc != 0x0039DDC4u) [[unlikely]] return; }
L_0039DDC4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DDD0u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_009F(c, 186u, depth + 1u); else { c.pc = 0x0039DEF0u; return; } if (c.pc != 0x0039DDD0u) [[unlikely]] return; }
L_0039DDD0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 189u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DDE0u); set32(c.r[6], 0u + 189u);  if (depth < kMaxDepth) unit_009F(c, 194u, depth + 1u); else { c.pc = 0x0039DFA8u; return; } if (c.pc != 0x0039DDE0u) [[unlikely]] return; }
L_0039DDE0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[5], 0u + 191u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DDF4u); set32(c.r[6], 0u + 191u);  if (depth < kMaxDepth) unit_009F(c, 194u, depth + 1u); else { c.pc = 0x0039DFA8u; return; } if (c.pc != 0x0039DDF4u) [[unlikely]] return; }
L_0039DDF4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[5], 0u + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DE08u); set32(c.r[6], 0u + 223u);  if (depth < kMaxDepth) unit_009F(c, 194u, depth + 1u); else { c.pc = 0x0039DFA8u; return; } if (c.pc != 0x0039DE08u) [[unlikely]] return; }
L_0039DE08:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[5], 0u + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DE1Cu); set32(c.r[6], 0u + 239u);  if (depth < kMaxDepth) unit_009F(c, 194u, depth + 1u); else { c.pc = 0x0039DFA8u; return; } if (c.pc != 0x0039DE1Cu) [[unlikely]] return; }
L_0039DE1C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[6], c.r[17].w[0] + 76u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DE30u); set32(c.r[5], ld32((c.r[17].w[0] + 68u)));  if (depth < kMaxDepth) unit_009F(c, 197u, depth + 1u); else { c.pc = 0x0039E020u; return; } if (c.pc != 0x0039DE30u) [[unlikely]] return; }
L_0039DE30:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DE40u); set32(c.r[6], c.r[17].w[0] + 92u);  if (depth < kMaxDepth) unit_009F(c, 202u, depth + 1u); else { c.pc = 0x0039E0B8u; return; } if (c.pc != 0x0039DE40u) [[unlikely]] return; }
L_0039DE40:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0039DE48:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039DE60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] - 808u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DE84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 215u, depth + 1u); else { c.pc = 0x0039E250u; return; } if (c.pc != 0x0039DE84u) [[unlikely]] return; }
L_0039DE84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DE98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 215u, depth + 1u); else { c.pc = 0x0039E250u; return; } if (c.pc != 0x0039DE98u) [[unlikely]] return; }
L_0039DE98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DEACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 215u, depth + 1u); else { c.pc = 0x0039E250u; return; } if (c.pc != 0x0039DEACu) [[unlikely]] return; }
L_0039DEAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 568u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0039DECC; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_0039DECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DED4u);  if (depth < kMaxDepth) unit_009F(c, 215u, depth + 1u); else { c.pc = 0x0039E250u; return; } if (c.pc != 0x0039DED4u) [[unlikely]] return; }
L_0039DED4:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039DEF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] - 256u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DF14u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 215u, depth + 1u); else { c.pc = 0x0039E250u; return; } if (c.pc != 0x0039DF14u) [[unlikely]] return; }
L_0039DF14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DF28u); set32(c.r[5], c.r[5].w[0] - 176u);  if (depth < kMaxDepth) unit_009F(c, 215u, depth + 1u); else { c.pc = 0x0039E250u; return; } if (c.pc != 0x0039DF28u) [[unlikely]] return; }
L_0039DF28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DF3Cu); set32(c.r[5], c.r[5].w[0] - 96u);  if (depth < kMaxDepth) unit_009F(c, 215u, depth + 1u); else { c.pc = 0x0039E250u; return; } if (c.pc != 0x0039DF3Cu) [[unlikely]] return; }
L_0039DF3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DF50u); set32(c.r[5], c.r[5].w[0] - 16u);  if (depth < kMaxDepth) unit_009F(c, 215u, depth + 1u); else { c.pc = 0x0039E250u; return; } if (c.pc != 0x0039DF50u) [[unlikely]] return; }
L_0039DF50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DF64u); set32(c.r[5], c.r[5].w[0] + 168u);  if (depth < kMaxDepth) unit_009F(c, 215u, depth + 1u); else { c.pc = 0x0039E250u; return; } if (c.pc != 0x0039DF64u) [[unlikely]] return; }
L_0039DF64:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DF78u); set32(c.r[5], c.r[5].w[0] + 248u);  if (depth < kMaxDepth) unit_009F(c, 215u, depth + 1u); else { c.pc = 0x0039E250u; return; } if (c.pc != 0x0039DF78u) [[unlikely]] return; }
L_0039DF78:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DF8Cu); set32(c.r[5], c.r[5].w[0] + 328u);  if (depth < kMaxDepth) unit_009F(c, 215u, depth + 1u); else { c.pc = 0x0039E250u; return; } if (c.pc != 0x0039DF8Cu) [[unlikely]] return; }
L_0039DF8C:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039DFA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039E004; } }
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 2;
L_0039DFD8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DFE4u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 351u, depth + 1u); else { c.pc = 0x003AF830u; return; } if (c.pc != 0x0039DFE4u) [[unlikely]] return; }
L_0039DFE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_0039DFF4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039E008; } }
L_0039DFF4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039DFD8u | kUnwind; return; } goto L_0039DFD8; } }
L_0039E004:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039E008:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039E020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_0039E09C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E050u); set32(c.r[6], c.r[6].w[0] + 848u);  if (depth < kMaxDepth) unit_009F(c, 217u, depth + 1u); else { c.pc = 0x0039E288u; return; } if (c.pc != 0x0039E050u) [[unlikely]] return; }
L_0039E050:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 960u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E068u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 217u, depth + 1u); else { c.pc = 0x0039E288u; return; } if (c.pc != 0x0039E068u) [[unlikely]] return; }
L_0039E068:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1088u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E080u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 217u, depth + 1u); else { c.pc = 0x0039E288u; return; } if (c.pc != 0x0039E080u) [[unlikely]] return; }
L_0039E080:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E098u); set32(c.r[6], c.r[6].w[0] + 1200u);  if (depth < kMaxDepth) unit_009F(c, 217u, depth + 1u); else { c.pc = 0x0039E288u; return; } if (c.pc != 0x0039E098u) [[unlikely]] return; }
L_0039E098:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_0039E09C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039E0B8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 1312u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 8u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    set32(c.r[20], c.r[16].w[0] + 12u);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[18].d[0] & 255ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E0FCu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 217u, depth + 1u); else { c.pc = 0x0039E288u; return; } if (c.pc != 0x0039E0FCu) [[unlikely]] return; }
L_0039E0FC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1424u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E114u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 217u, depth + 1u); else { c.pc = 0x0039E288u; return; } if (c.pc != 0x0039E114u) [[unlikely]] return; }
L_0039E114:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E12Cu); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 38u, depth + 1u); else { c.pc = 0x003B0608u; return; } if (c.pc != 0x0039E12Cu) [[unlikely]] return; }
L_0039E12C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[6], c.r[6].w[0] + 1720u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0039E14C; } }
    st32((c.r[19].w[0]), c.r[3].w[0]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0039E14C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E154u);  if (depth < kMaxDepth) unit_009F(c, 217u, depth + 1u); else { c.pc = 0x0039E288u; return; } if (c.pc != 0x0039E154u) [[unlikely]] return; }
L_0039E154:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E168u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 354u, depth + 1u); else { c.pc = 0x003AF8A0u; return; } if (c.pc != 0x0039E168u) [[unlikely]] return; }
L_0039E168:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1832u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0039E22C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E198u);  if (depth < kMaxDepth) unit_009F(c, 217u, depth + 1u); else { c.pc = 0x0039E288u; return; } if (c.pc != 0x0039E198u) [[unlikely]] return; }
L_0039E198:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1944u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E1B0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 217u, depth + 1u); else { c.pc = 0x0039E288u; return; } if (c.pc != 0x0039E1B0u) [[unlikely]] return; }
L_0039E1B0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 2056u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E1C8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 217u, depth + 1u); else { c.pc = 0x0039E288u; return; } if (c.pc != 0x0039E1C8u) [[unlikely]] return; }
L_0039E1C8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 2168u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E1E0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 217u, depth + 1u); else { c.pc = 0x0039E288u; return; } if (c.pc != 0x0039E1E0u) [[unlikely]] return; }
L_0039E1E0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 2288u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E1F8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 217u, depth + 1u); else { c.pc = 0x0039E288u; return; } if (c.pc != 0x0039E1F8u) [[unlikely]] return; }
L_0039E1F8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 2400u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E210u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 217u, depth + 1u); else { c.pc = 0x0039E288u; return; } if (c.pc != 0x0039E210u) [[unlikely]] return; }
L_0039E210:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E228u); set32(c.r[6], c.r[6].w[0] + 2536u);  if (depth < kMaxDepth) unit_009F(c, 217u, depth + 1u); else { c.pc = 0x0039E288u; return; } if (c.pc != 0x0039E228u) [[unlikely]] return; }
L_0039E228:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 1;
L_0039E22C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0039E250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E264u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039E264u) [[unlikely]] return; }
L_0039E264:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039E288:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E2A0u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039E2A0u) [[unlikely]] return; }
L_0039E2A0:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039E2C0:
    set32(c.r[5], c.r[4].w[0] + 152u);
    set32(c.r[4], c.r[4].w[0] + 2316u);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 44u), c.r[2].w[0]);  c.pc = t; return; }
L_0039E2F0:
    set32(c.r[4], c.r[4].w[0] + 120u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039E320; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
L_0039E320:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039E328:
    set32(c.r[3], ld32((c.r[4].w[0] + 120u)));
    set32(c.r[4], c.r[4].w[0] + 212u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039E344; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  goto L_0039E344; }
L_0039E344:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039E360:
    c.r[2].d[0] = c.r[5].d[0] ^ 14216ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0039E370:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[3].w[0] + 29720u);
    set32(c.r[2], c.r[2].w[0] + 16240u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 14216u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E3A4u); st32((c.r[5].w[0] + 10396u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_009F(c, 262u, depth + 1u); else { c.pc = 0x0039E7C0u; return; } if (c.pc != 0x0039E3A4u) [[unlikely]] return; }
L_0039E3A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E3ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 228u, depth + 1u); else { c.pc = 0x0039E3D8u; return; } if (c.pc != 0x0039E3ACu) [[unlikely]] return; }
L_0039E3AC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0039E3CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E3BCu);  if (depth < kMaxDepth) unit_009F(c, 264u, depth + 1u); else { c.pc = 0x0039E7F0u; return; } if (c.pc != 0x0039E3BCu) [[unlikely]] return; }
L_0039E3BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E3C4u);  if (depth < kMaxDepth) unit_009F(c, 267u, depth + 1u); else { c.pc = 0x0039E828u; return; } if (c.pc != 0x0039E3C4u) [[unlikely]] return; }
L_0039E3C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0039E3CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039E3D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[16], c.r[16].w[0] + 9848u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[6], 0u + 137u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E404u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 70u, depth + 1u); else { c.pc = 0x00387F08u; return; } if (c.pc != 0x0039E404u) [[unlikely]] return; }
L_0039E404:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], 0u + 400u);
    set32(c.r[5], c.r[5].w[0] + 16656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E418u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 60u, depth + 1u); else { c.pc = 0x00387A98u; return; } if (c.pc != 0x0039E418u) [[unlikely]] return; }
L_0039E418:
    ldl(c.r[2], (c.r[17].w[0] + 7u));
    ldr(c.r[2], (c.r[17].w[0]));
    sdl(c.r[2], (c.r[16].w[0] + 407u));
    sdr(c.r[2], (c.r[16].w[0] + 400u));
    st32((c.r[16].w[0] + 408u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E434u); set32(c.r[4], c.r[16].w[0] + 412u);  if (depth < kMaxDepth) unit_009F(c, 247u, depth + 1u); else { c.pc = 0x0039E550u; return; } if (c.pc != 0x0039E434u) [[unlikely]] return; }
L_0039E434:
    set32(c.r[4], c.r[16].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E440u); set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A2(c, 419u, depth + 1u); else { c.pc = 0x003ABD70u; return; } if (c.pc != 0x0039E440u) [[unlikely]] return; }
L_0039E440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E448u); set32(c.r[4], c.r[16].w[0] + 444u);  if (depth < kMaxDepth) unit_009E(c, 407u, depth + 1u); else { c.pc = 0x0039AE60u; return; } if (c.pc != 0x0039E448u) [[unlikely]] return; }
L_0039E448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E450u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 237u, depth + 1u); else { c.pc = 0x0039E498u; return; } if (c.pc != 0x0039E450u) [[unlikely]] return; }
L_0039E450:
    set32(c.r[2], 0u + 7u);
    set32(c.r[16], c.r[16].w[0] + 544u);
    c.budget -= 2;
L_0039E458:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E458u | kUnwind; return; } goto L_0039E458; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E484u); set32(c.r[4], c.r[4].w[0] + 10296u);  if (depth < kMaxDepth) unit_00A3(c, 141u, depth + 1u); else { c.pc = 0x003AD980u; return; } if (c.pc != 0x0039E484u) [[unlikely]] return; }
L_0039E484:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039E498:
    set32(c.r[4], c.r[4].w[0] + 508u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), 0u);  c.pc = t; return; }
L_0039E4A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], 0u + 7u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[2].w[0] + 10364u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 10;
L_0039E4D0:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0039E4E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E4E4u);  if (depth < kMaxDepth) unit_00A2(c, 199u, depth + 1u); else { c.pc = 0x003A9880u; return; } if (c.pc != 0x0039E4E4u) [[unlikely]] return; }
L_0039E4E4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0039E4E8:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E4D0u | kUnwind; return; } goto L_0039E4D0; }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[16], c.r[16].w[0] + 10280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E504u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 420u, depth + 1u); else { c.pc = 0x003ABD80u; return; } if (c.pc != 0x0039E504u) [[unlikely]] return; }
L_0039E504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E50Cu); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_009E(c, 408u, depth + 1u); else { c.pc = 0x0039AE78u; return; } if (c.pc != 0x0039E50Cu) [[unlikely]] return; }
L_0039E50C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E514u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00A3(c, 142u, depth + 1u); else { c.pc = 0x003ADA18u; return; } if (c.pc != 0x0039E514u) [[unlikely]] return; }
L_0039E514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E51Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 268u, depth + 1u); else { c.pc = 0x0039E830u; return; } if (c.pc != 0x0039E51Cu) [[unlikely]] return; }
L_0039E51C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E524u);  if (depth < kMaxDepth) unit_009F(c, 266u, depth + 1u); else { c.pc = 0x0039E810u; return; } if (c.pc != 0x0039E524u) [[unlikely]] return; }
L_0039E524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E52Cu);  if (depth < kMaxDepth) unit_009F(c, 263u, depth + 1u); else { c.pc = 0x0039E7D8u; return; } if (c.pc != 0x0039E52Cu) [[unlikely]] return; }
L_0039E52C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    if (c.r[16].d[0] == 0) c.r[2].d[0] = c.r[18].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039E550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0039E568; }
L_0039E568:
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_0039E580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0039E5DC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0039E5C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E5B4u); set32(c.r[4], c.r[4].w[0] + 10260u);  if (depth < kMaxDepth) unit_009F(c, 252u, depth + 1u); else { c.pc = 0x0039E5F0u; return; } if (c.pc != 0x0039E5B4u) [[unlikely]] return; }
L_0039E5B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039E5DC; } }
    c.budget -= 1;
L_0039E5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E5C8u); set32(c.r[4], c.r[16].w[0] + 2544u);  if (depth < kMaxDepth) unit_009F(c, 252u, depth + 1u); else { c.pc = 0x0039E5F0u; return; } if (c.pc != 0x0039E5C8u) [[unlikely]] return; }
L_0039E5C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[3], 0u - c.r[2].w[0]);  if (t) { goto L_0039E5D8; } }
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 1;
L_0039E5D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0039E5DC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039E5F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0039E608; } }
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_0039E608:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0039E628; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039E628; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E624u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039E624u) [[unlikely]] return; }
L_0039E624:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0039E628:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039E630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_0039E668; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E660u); set32(c.r[4], c.r[4].w[0] + 10260u);  if (depth < kMaxDepth) unit_009F(c, 258u, depth + 1u); else { c.pc = 0x0039E6C8u; return; } if (c.pc != 0x0039E660u) [[unlikely]] return; }
L_0039E660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0039E6AC; } }
L_0039E668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E670u);  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x0039E670u) [[unlikely]] return; }
L_0039E670:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0039E698; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 257ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } goto L_0039E580; }
L_0039E698:
    set32(c.r[4], c.r[16].w[0] + 2544u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E6A8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 258u, depth + 1u); else { c.pc = 0x0039E6C8u; return; } if (c.pc != 0x0039E6A8u) [[unlikely]] return; }
L_0039E6A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0039E6AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039E6C8:
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_0039E6D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0039E730; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + 9848u);
    ldl(c.r[3], (c.r[2].w[0] + 419u));
    ldr(c.r[3], (c.r[2].w[0] + 412u));
    ldl(c.r[4], (c.r[2].w[0] + 427u));
    ldr(c.r[4], (c.r[2].w[0] + 420u));
    set32(c.r[5], ld32((c.r[2].w[0] + 428u)));
    sdl(c.r[3], (c.r[17].w[0] + 7u));
    sdr(c.r[3], (c.r[17].w[0]));
    sdl(c.r[4], (c.r[17].w[0] + 15u));
    sdr(c.r[4], (c.r[17].w[0] + 8u));
    st32((c.r[17].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0039E78C; } }
    c.budget -= 1;
L_0039E730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E738u);  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x0039E738u) [[unlikely]] return; }
L_0039E738:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0039E760; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 258ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } goto L_0039E580; }
L_0039E760:
    ldl(c.r[2], (c.r[16].w[0] + 2551u));
    ldr(c.r[2], (c.r[16].w[0] + 2544u));
    ldl(c.r[3], (c.r[16].w[0] + 2559u));
    ldr(c.r[3], (c.r[16].w[0] + 2552u));
    set32(c.r[4], ld32((c.r[16].w[0] + 2560u)));
    sdl(c.r[2], (c.r[17].w[0] + 7u));
    sdr(c.r[2], (c.r[17].w[0]));
    sdl(c.r[3], (c.r[17].w[0] + 15u));
    sdr(c.r[3], (c.r[17].w[0] + 8u));
    st32((c.r[17].w[0] + 16u), c.r[4].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 11;
L_0039E78C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039E7A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[2].w[0] + 9840u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039E7B8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 2;
L_0039E7B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039E7C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379D40u | kUnwind; return; } [[clang::musttail]] return unit_0096(c, 159u, depth); }
L_0039E7D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00379DC0u | kUnwind; return; } [[clang::musttail]] return unit_0096(c, 165u, depth); }
L_0039E7F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E800u);  if (depth < kMaxDepth) unit_00A2(c, 17u, depth + 1u); else { c.pc = 0x003A81E8u; return; } if (c.pc != 0x0039E800u) [[unlikely]] return; }
L_0039E800:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D848u | kUnwind; return; } goto L_0039D848; }
L_0039E810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D868u | kUnwind; return; } goto L_0039D868; }
L_0039E828:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039E830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039E838:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C430u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 28u, depth); }
L_0039E850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C448u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 29u, depth); }
L_0039E868:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0039E870:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0039E878:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E88Cu); set32(c.r[5], ld32((c.r[4].w[0] + 7996u)));  if (depth < kMaxDepth) unit_009F(c, 4u, depth + 1u); else { c.pc = 0x0039C3F0u; return; } if (c.pc != 0x0039E88Cu) [[unlikely]] return; }
L_0039E88C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039E8A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0039E8A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0039E8B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0039E8B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0039E8C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0039E8C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0039E8D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 7996u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B740u | kUnwind; return; } [[clang::musttail]] return unit_009E(c, 456u, depth); }
L_0039E8F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 7996u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039B818u | kUnwind; return; } [[clang::musttail]] return unit_009E(c, 459u, depth); }
L_0039E918:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 1281ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } goto L_0039E580; }
L_0039E938:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 1281ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } goto L_0039E580; }
L_0039E958:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0039E960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E994u); c.r[20].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x0039E994u) [[unlikely]] return; }
L_0039E994:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[3], c.r[17].w[0] - 188u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 369ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(68ll) ? 1ull : 0ull;  if (t) { goto L_0039E9D0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } goto L_0039E580; }
L_0039E9D0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0039E9F4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8052u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 336u), c.r[19].w[0]);
    st32((c.r[3].w[0] - 688u), c.r[18].w[0]);
    st32((c.r[4].w[0] + 340u), c.r[20].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
L_0039E9F4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039EA10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039EA20; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8052u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 2;
L_0039EA20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039EA28:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039EA38; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8052u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 2;
L_0039EA38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039EA40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EA50u);  if (depth < kMaxDepth) unit_009F(c, 294u, depth + 1u); else { c.pc = 0x0039EAB0u; return; } if (c.pc != 0x0039EA50u) [[unlikely]] return; }
L_0039EA50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0039EA78; } }
L_0039EA58:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039EA58u | kUnwind; return; } goto L_0039EA58; } }
    c.budget -= 1;
L_0039EA78:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EA84u); set32(c.r[5], c.r[5].w[0] + 29728u);  if (depth < kMaxDepth) unit_009A(c, 44u, depth + 1u); else { c.pc = 0x0038A0C0u; return; } if (c.pc != 0x0039EA84u) [[unlikely]] return; }
L_0039EA84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0039EAA0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 3329ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } goto L_0039E580; }
L_0039EAA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[3].w[0] + 10400u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039EAB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0039EAB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EAC8u);  if (depth < kMaxDepth) unit_009A(c, 54u, depth + 1u); else { c.pc = 0x0038A1C8u; return; } if (c.pc != 0x0039EAC8u) [[unlikely]] return; }
L_0039EAC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039EAD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0039EAF0; }
L_0039EAF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EB08u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 403u, depth + 1u); else { c.pc = 0x0039FCB0u; return; } if (c.pc != 0x0039EB08u) [[unlikely]] return; }
L_0039EB08:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039EB20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039EB50; } }
    c.budget -= 1;
L_0039EB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EB28u);  if (depth < kMaxDepth) unit_009F(c, 302u, depth + 1u); else { c.pc = 0x0039EB68u; return; } if (c.pc != 0x0039EB28u) [[unlikely]] return; }
L_0039EB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EB30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 305u, depth + 1u); else { c.pc = 0x0039EBC8u; return; } if (c.pc != 0x0039EB30u) [[unlikely]] return; }
L_0039EB30:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039EB4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EB4Cu);  if (depth < kMaxDepth) unit_009F(c, 421u, depth + 1u); else { c.pc = 0x0039FF38u; return; } if (c.pc != 0x0039EB4Cu) [[unlikely]] return; }
L_0039EB4C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0039EB50:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039EB68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 85u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8052u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EB90u); set32(c.r[18], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039EB90u) [[unlikely]] return; }
L_0039EB90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 86u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EBA0u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039EBA0u) [[unlikely]] return; }
L_0039EBA0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00388038u | kUnwind; return; } [[clang::musttail]] return unit_009A(c, 2u, depth); }
L_0039EBC8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    c.r[20].d[0] = c.r[20].d[0] | 65534ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_0039EC2C; } }
L_0039EC08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EC10u);  if (depth < kMaxDepth) unit_009F(c, 314u, depth + 1u); else { c.pc = 0x0039ED80u; return; } if (c.pc != 0x0039EC10u) [[unlikely]] return; }
L_0039EC10:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039EC8C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0039EC2C:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039EC8C; } }
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 8u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EC4Cu); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_009F(c, 311u, depth + 1u); else { c.pc = 0x0039ECC0u; return; } if (c.pc != 0x0039EC4Cu) [[unlikely]] return; }
L_0039EC4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 12u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[8], c.r[29].w[0] + 16u);  if (t) { goto L_0039EC8C; } }
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EC70u); set32(c.r[9], ld32((c.r[29].w[0] + 8u)));  if (depth < kMaxDepth) unit_009F(c, 317u, depth + 1u); else { c.pc = 0x0039EDE8u; return; } if (c.pc != 0x0039EC70u) [[unlikely]] return; }
L_0039EC70:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039EC88; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039EC08u | kUnwind; return; } goto L_0039EC08; } }
L_0039EC88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0039EC8C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EC98u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 36u, depth + 1u); else { c.pc = 0x003A04F8u; return; } if (c.pc != 0x0039EC98u) [[unlikely]] return; }
L_0039EC98:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0039ECC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ECF4u); set32(c.r[5], ld32((c.r[16].w[0] + 8060u)));  if (depth < kMaxDepth) unit_009E(c, 457u, depth + 1u); else { c.pc = 0x0039B758u; return; } if (c.pc != 0x0039ECF4u) [[unlikely]] return; }
L_0039ECF4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0039ED68; }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0])));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[19].w[0]), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039ED64; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 14212u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039ED64; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 14208u)));
    c.r[2].d[0] = c.r[2].d[0] & 2047ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039ED64; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 14200u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 14204u)));  if (t) { goto L_0039ED58; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ED58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039ED58u) [[unlikely]] return; }
L_0039ED58:
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[16].w[0] + 14212u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0039ED64:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0039ED68:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0039ED80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EDA4u); set32(c.r[5], ld32((c.r[16].w[0] + 8060u)));  if (depth < kMaxDepth) unit_009E(c, 460u, depth + 1u); else { c.pc = 0x0039B830u; return; } if (c.pc != 0x0039EDA4u) [[unlikely]] return; }
L_0039EDA4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0039EDBC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 14208u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0] + 14208u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_0039EDBC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039EDD0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039EDE0; } }
    st32((c.r[4].w[0] + 14204u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 14200u), c.r[5].w[0]);
    c.budget -= 2;
L_0039EDE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039EDE8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[7].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    st32((c.r[21].w[0]), 0u);
    st32((c.r[18].w[0]), 0u);
    set32(c.r[19], ld32((c.r[17].w[0] + 8052u)));
    st32((c.r[29].w[0] + 20u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EE44u); set32(c.r[20], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_009F(c, 408u, depth + 1u); else { c.pc = 0x0039FD38u; return; } if (c.pc != 0x0039EE44u) [[unlikely]] return; }
L_0039EE44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0039F08C; }
    c.r[2].d[0] = c.r[22].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[30].d[0] = 0ull + 0ull;  goto L_0039EE64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EE60u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 29u, depth + 1u); else { c.pc = 0x00389D38u; return; } if (c.pc != 0x0039EE60u) [[unlikely]] return; }
L_0039EE60:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0039EE64:
    set32(c.r[5], 0u + 87u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EE70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039EE70u) [[unlikely]] return; }
L_0039EE70:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EE80u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039EE80u) [[unlikely]] return; }
L_0039EE80:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EE90u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 4u, depth + 1u); else { c.pc = 0x00388088u; return; } if (c.pc != 0x0039EE90u) [[unlikely]] return; }
L_0039EE90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EE9Cu); set32(c.r[5], 0u + 91u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039EE9Cu) [[unlikely]] return; }
L_0039EE9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EEACu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039EEACu) [[unlikely]] return; }
L_0039EEAC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EEBCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 6u, depth + 1u); else { c.pc = 0x003880D8u; return; } if (c.pc != 0x0039EEBCu) [[unlikely]] return; }
L_0039EEBC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EED4u); set32(c.r[8], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_009A(c, 8u, depth + 1u); else { c.pc = 0x00388128u; return; } if (c.pc != 0x0039EED4u) [[unlikely]] return; }
L_0039EED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039EEEC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EEE8u); c.r[5].d[0] = c.r[5].d[0] | 3331ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x0039EEE8u) [[unlikely]] return; }
L_0039EEE8:
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_0039EEEC:
    set32(c.r[16], ld32((c.r[29].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0039EF14; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EF10u); c.r[7].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 32u, depth + 1u); else { c.pc = 0x003A0440u; return; } if (c.pc != 0x0039EF10u) [[unlikely]] return; }
L_0039EF10:
    set32(c.r[16], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_0039EF14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0039EF68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EF28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 34u, depth + 1u); else { c.pc = 0x0039C710u; return; } if (c.pc != 0x0039EF28u) [[unlikely]] return; }
L_0039EF28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  goto L_0039EF48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EF38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 407u, depth + 1u); else { c.pc = 0x0039FD20u; return; } if (c.pc != 0x0039EF38u) [[unlikely]] return; }
L_0039EF38:
    set32(c.r[2], 0u + 2048u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.r[2].w[0]);  if (t) { goto L_0039F080; } }
    c.budget -= 1;
L_0039EF48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0039EF68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EF58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 36u, depth + 1u); else { c.pc = 0x0039C730u; return; } if (c.pc != 0x0039EF58u) [[unlikely]] return; }
L_0039EF58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_0039EF68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.r[2].w[0]);  if (t) { goto L_0039F080; } }
L_0039EF68:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_0039EFF0; } }
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EF84u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 335u, depth + 1u); else { c.pc = 0x0039F0B8u; return; } if (c.pc != 0x0039EF84u) [[unlikely]] return; }
L_0039EF84:
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[2], ld32((c.r[29].w[0] + 20u)));  if (t) { goto L_0039F088; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0039F08C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_0039EFC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_0039F080; } }
    c.budget -= 1;
L_0039EFC0:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 344u), c.r[6].w[0]);  goto L_0039EFE8; }
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0039F080; } }
    c.budget -= 1;
L_0039EFE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_0039F084; } }
L_0039EFF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0])));  goto L_0039F040; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F00Cu); set32(c.r[5], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_009F(c, 418u, depth + 1u); else { c.pc = 0x0039FED0u; return; } if (c.pc != 0x0039F00Cu) [[unlikely]] return; }
L_0039F00C:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 20u)));  if (t) { goto L_0039F088; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 20u)));  if (t) { goto L_0039F088; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], 0u + 1u);  goto L_0039F034; }
L_0039F034:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_0039F084; } }
L_0039F040:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 12u);
    set32(c.r[8], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[22].w[0] - c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F058u); set32(c.r[5], c.r[23].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_009F(c, 345u, depth + 1u); else { c.pc = 0x0039F260u; return; } if (c.pc != 0x0039F058u) [[unlikely]] return; }
L_0039F058:
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039F080; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
L_0039F080:
    st32((c.r[19].w[0] + 344u), c.r[2].w[0]);
    c.budget -= 1;
L_0039F084:
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 1;
L_0039F088:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0039F08C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0039F0B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[19].w[0]), 0u);
    set32(c.r[18], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[2], c.r[18].w[0] + 3u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0039F110; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F108u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 340u, depth + 1u); else { c.pc = 0x0039F198u; return; } if (c.pc != 0x0039F108u) [[unlikely]] return; }
L_0039F108:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[19].w[0]), c.r[18].w[0]);  goto L_0039F170; }
L_0039F110:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0039F148; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x000D0000u);
    c.budget -= 1;
L_0039F120:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F12Cu); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_009A(c, 29u, depth + 1u); else { c.pc = 0x00389D38u; return; } if (c.pc != 0x0039F12Cu) [[unlikely]] return; }
L_0039F12C:
    c.r[2].d[0] = c.r[2].d[0] & c.r[20].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[19].w[0]), c.r[18].w[0]);  goto L_0039F170; }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F120u | kUnwind; return; } goto L_0039F120; } }
L_0039F148:
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0]), c.r[18].w[0]);  goto L_0039F170; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F164u); set32(c.r[5], c.r[17].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_009F(c, 342u, depth + 1u); else { c.pc = 0x0039F1D8u; return; } if (c.pc != 0x0039F164u) [[unlikely]] return; }
L_0039F164:
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    if (c.r[2].d[0] != 0) c.r[18].d[0] = c.r[3].d[0];
    st32((c.r[19].w[0]), c.r[18].w[0]);
    c.budget -= 3;
L_0039F170:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039F198:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0039F1CC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 2;
L_0039F1A8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039F1D0; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[4].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F1A8u | kUnwind; return; } goto L_0039F1A8; }
L_0039F1CC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0039F1D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039F1D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F1ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 344u, depth + 1u); else { c.pc = 0x0039F238u; return; } if (c.pc != 0x0039F1ECu) [[unlikely]] return; }
L_0039F1EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 12u)));  goto L_0039F218; }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039F228; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039F228; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0039F218:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_0039F228:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039F238:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 8060u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 4888u);  c.pc = t; return; }
L_0039F260:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[22].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st32((c.r[20].w[0]), 0u);
    st32((c.r[19].w[0]), 0u);
    set32(c.r[17], ld32((c.r[18].w[0] + 8052u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F2B8u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_009A(c, 42u, depth + 1u); else { c.pc = 0x0038A030u; return; } if (c.pc != 0x0039F2B8u) [[unlikely]] return; }
L_0039F2B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0039F2D0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F2CCu); c.r[5].d[0] = c.r[5].d[0] | 3334ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x0039F2CCu) [[unlikely]] return; }
L_0039F2CC:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0039F2D0:
    set32(c.r[16], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] >= 0; c.r[8].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0039F300; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F2F8u); c.r[5].d[0] = c.r[5].d[0] | 3342ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x0039F2F8u) [[unlikely]] return; }
L_0039F2F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0039F3B0; } }
L_0039F300:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[2].d[0] = c.r[21].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  goto L_0039F320; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0]), 0u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039F3AC; } }
    c.budget -= 1;
L_0039F320:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[7].w[0] << 2);  goto L_0039F340; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F334u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 418u, depth + 1u); else { c.pc = 0x0039FED0u; return; } if (c.pc != 0x0039F334u) [[unlikely]] return; }
L_0039F334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039F3AC; } }
    c.budget -= 1;
L_0039F340:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] - 688u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] << 2);  goto L_0039F370; }
    set32(c.r[6], ld32((c.r[17].w[0] + 340u)));
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 336u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F364u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 352u, depth + 1u); else { c.pc = 0x0039F3D8u; return; } if (c.pc != 0x0039F364u) [[unlikely]] return; }
L_0039F364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0039F390; } }
    c.budget -= 1;
L_0039F370:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 16432u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F38Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039F38Cu) [[unlikely]] return; }
L_0039F38C:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0039F390:
    set32(c.r[8], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039F3A8; } }
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[2].d[0]) { c.r[22].d[0] = c.r[8].d[0] + 0ull;  goto L_0039F3A8; }
    st32((c.r[20].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_0039F3A8:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_0039F3AC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0039F3B0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0039F3D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F408u); c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 381u, depth + 1u); else { c.pc = 0x0039F990u; return; } if (c.pc != 0x0039F408u) [[unlikely]] return; }
L_0039F408:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0039F42C; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0039F428; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[18].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F428u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039F428u) [[unlikely]] return; }
L_0039F428:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0039F42C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039F448:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F490u); c.r[19].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039F490u) [[unlikely]] return; }
L_0039F490:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[21].w[0] + 8044u);  if (t) { goto L_0039F4A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039F588; } }
L_0039F4A0:
    set32(c.r[18], 0u - 1u);
    set32(c.r[16], ld32((c.r[22].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[16].w[0] + 56u), c.r[17].w[0]);  goto L_0039F4B4; }
L_0039F4B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[16].w[0] + 48u), c.r[17].w[0]);  goto L_0039F4C0; }
L_0039F4C0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F4CCu); set32(c.r[5], 0u + 30u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039F4CCu) [[unlikely]] return; }
L_0039F4CC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[18].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0039F50C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F4E0u); set32(c.r[5], 0u + 55u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039F4E0u) [[unlikely]] return; }
L_0039F4E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 48u)));  goto L_0039F500; }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 56u), c.r[20].w[0]);  goto L_0039F50C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  if (t) { goto L_0039F510; } }
L_0039F500:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  goto L_0039F510; }
    st32((c.r[16].w[0] + 56u), c.r[20].w[0]);
    c.budget -= 1;
L_0039F50C:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_0039F510:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0]; st32((c.r[16].w[0] + 40u), c.r[17].w[0]);  if (t) { goto L_0039F588; } }
    c.budget -= 2;
    if (c.r[19].sd[0] < 0) { set32(c.r[5], ld32((c.r[22].w[0] + 24u)));  goto L_0039F548; }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[4].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[19].d[0];
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[19].d[0];
    st64((c.r[16].w[0] + 16u), c.r[2].d[0]);
    st64((c.r[16].w[0] + 24u), c.r[3].d[0]);
    set32(c.r[5], ld32((c.r[22].w[0] + 24u)));
    c.budget -= 9;
L_0039F548:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.r[30].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 16;
    { set32(c.r[29], c.r[29].w[0] + 80u);  goto L_0039FAB0; }
L_0039F588:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0039F5B8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F600u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039F600u) [[unlikely]] return; }
L_0039F600:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[17].w[0] + 8044u);  if (t) { goto L_0039F610; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039F760; } }
L_0039F610:
    set32(c.r[21], 0u - 1u);
    set32(c.r[16], ld32((c.r[23].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[21].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_0039F638; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F630u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 368u, depth + 1u); else { c.pc = 0x0039F790u; return; } if (c.pc != 0x0039F630u) [[unlikely]] return; }
L_0039F630:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 2;
L_0039F638:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[21].d[0]) { st32((c.r[16].w[0] + 44u), c.r[22].w[0]);  goto L_0039F640; }
L_0039F640:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F64Cu); set32(c.r[5], 0u + 29u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039F64Cu) [[unlikely]] return; }
L_0039F64C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[21].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039F6E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F660u); set32(c.r[5], 0u + 55u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039F660u) [[unlikely]] return; }
L_0039F660:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_0039F680; }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (t) { goto L_0039F688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[22].w[0]);  if (t) { goto L_0039F6F0; } }
L_0039F680:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (t) { goto L_0039F6EC; } }
L_0039F688:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[18].d[0]; c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_0039F6EC; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 36u), c.r[22].w[0]);  goto L_0039F6F0; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 36u), c.r[22].w[0]);  goto L_0039F6F0; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 36u), c.r[22].w[0]);  goto L_0039F6F0; }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 2u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 36u), c.r[22].w[0]);  goto L_0039F6F0; }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 3u));
    set32(c.r[2], 0u + 179u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 184u);  if (t) { goto L_0039F6D8; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 36u), c.r[22].w[0]);  goto L_0039F6F0; }
L_0039F6D8:
    st32((c.r[16].w[0] + 52u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0039F6EC; } }
    c.budget -= 1;
L_0039F6E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_0039F6EC:
    st32((c.r[16].w[0] + 36u), c.r[22].w[0]);
    c.budget -= 1;
L_0039F6F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[22].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039F760; } }
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F708u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 314u, depth + 1u); else { c.pc = 0x003A77F0u; return; } if (c.pc != 0x0039F708u) [[unlikely]] return; }
L_0039F708:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039F760; } }
    set32(c.r[5], ld32((c.r[23].w[0] + 20u)));
    c.r[8].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F72Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 390u, depth + 1u); else { c.pc = 0x0039FAB0u; return; } if (c.pc != 0x0039F72Cu) [[unlikely]] return; }
L_0039F72C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039F750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F744u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 317u, depth + 1u); else { c.pc = 0x003A7860u; return; } if (c.pc != 0x0039F744u) [[unlikely]] return; }
L_0039F744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039F760; } }
    c.budget -= 1;
L_0039F750:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F75Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 340u, depth + 1u); else { c.pc = 0x003A7BA0u; return; } if (c.pc != 0x0039F75Cu) [[unlikely]] return; }
L_0039F75C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0039F760:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0039F790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 59u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F7B4u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x0039F7B4u) [[unlikely]] return; }
L_0039F7B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0039F7FC; } }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0039F800; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0039F7FC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F7ECu); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00A0(c, 23u, depth + 1u); else { c.pc = 0x003A0240u; return; } if (c.pc != 0x0039F7ECu) [[unlikely]] return; }
L_0039F7EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[17].d[0];
    c.budget -= 4;
L_0039F7FC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0039F800:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039F818:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F848u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 135u, depth + 1u); else { c.pc = 0x0039D8A8u; return; } if (c.pc != 0x0039F848u) [[unlikely]] return; }
L_0039F848:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0039F890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F864u);  if (depth < kMaxDepth) unit_00A0(c, 66u, depth + 1u); else { c.pc = 0x003A0890u; return; } if (c.pc != 0x0039F864u) [[unlikely]] return; }
L_0039F864:
    set32(c.r[6], c.r[18].w[0] - 18u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[19].w[0] + 18u);  if (t) { goto L_0039F884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F884u);  if (depth < kMaxDepth) unit_009F(c, 376u, depth + 1u); else { c.pc = 0x0039F8B8u; return; } if (c.pc != 0x0039F884u) [[unlikely]] return; }
L_0039F884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039F898; } }
    c.budget -= 1;
L_0039F890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F898u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 376u, depth + 1u); else { c.pc = 0x0039F8B8u; return; } if (c.pc != 0x0039F898u) [[unlikely]] return; }
L_0039F898:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039F8B8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[8], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[21].w[0] + 8072u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == c.r[8].d[0]; c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0039F96C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F90Cu);  if (depth < kMaxDepth) unit_009E(c, 455u, depth + 1u); else { c.pc = 0x0039B6D0u; return; } if (c.pc != 0x0039F90Cu) [[unlikely]] return; }
L_0039F90C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[20], ld32((c.r[29].w[0] + 12u)));  if (t) { goto L_0039F96C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F938u);  if (depth < kMaxDepth) unit_009F(c, 381u, depth + 1u); else { c.pc = 0x0039F990u; return; } if (c.pc != 0x0039F938u) [[unlikely]] return; }
L_0039F938:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0039F96C; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0039F958; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[18].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F958u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039F958u) [[unlikely]] return; }
L_0039F958:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0039F968; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[19].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F968u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039F968u) [[unlikely]] return; }
L_0039F968:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0039F96C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0039F990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F9C0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039F9C0u) [[unlikely]] return; }
L_0039F9C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039FA20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F9E0u);  if (depth < kMaxDepth) unit_009F(c, 385u, depth + 1u); else { c.pc = 0x0039FA38u; return; } if (c.pc != 0x0039F9E0u) [[unlikely]] return; }
L_0039F9E0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);  if (t) { goto L_0039FA20; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);  if (t) { goto L_0039FA1C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FA04u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 385u, depth + 1u); else { c.pc = 0x0039FA38u; return; } if (c.pc != 0x0039FA04u) [[unlikely]] return; }
L_0039FA04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; set32(c.r[3], c.r[3].w[0] + 10400u);  if (t) { goto L_0039FA1C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0039FA1C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0039FA20:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039FA38:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FA64u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039FA64u) [[unlikely]] return; }
L_0039FA64:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FA74u); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0099(c, 60u, depth + 1u); else { c.pc = 0x00387A98u; return; } if (c.pc != 0x0039FA74u) [[unlikely]] return; }
L_0039FA74:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FA8Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039FA8Cu) [[unlikely]] return; }
L_0039FA8C:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039FAA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0039FAB0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 120u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FAF8u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 456u, depth + 1u); else { c.pc = 0x0039B740u; return; } if (c.pc != 0x0039FAF8u) [[unlikely]] return; }
L_0039FAF8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0039FC14; }
    set32(c.r[17], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[19], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[23], ld32((c.r[29].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[30], ld32((c.r[29].w[0] + 20u)));  if (t) { goto L_0039FC10; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[22].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0039FB78; }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0039FBB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FB3Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 302u, depth + 1u); else { c.pc = 0x003AA838u; return; } if (c.pc != 0x0039FB3Cu) [[unlikely]] return; }
L_0039FB3C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0039FC10; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[7], c.r[29].w[0] + 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st32((c.r[29].w[0] + 40u), c.r[19].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FB64u); st32((c.r[29].w[0] + 44u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A2(c, 292u, depth + 1u); else { c.pc = 0x003AA538u; return; } if (c.pc != 0x0039FB64u) [[unlikely]] return; }
L_0039FB64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  goto L_0039FBBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0039FC14; } }
    c.budget -= 1;
L_0039FB78:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_0039FBBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 10428u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] + 4824u);  if (t) { goto L_0039FBB8; } }
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st32((c.r[29].w[0] + 56u), c.r[16].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FBA0u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039FBA0u) [[unlikely]] return; }
L_0039FBA0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  goto L_0039FBBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039FC10; } }
    c.budget -= 1;
L_0039FBB8:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0039FBBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0039FBD8; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FBD0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 60u, depth + 1u); else { c.pc = 0x00387A98u; return; } if (c.pc != 0x0039FBD0u) [[unlikely]] return; }
L_0039FBD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0039FBF8; } }
L_0039FBD8:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FBE4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 60u, depth + 1u); else { c.pc = 0x00387A98u; return; } if (c.pc != 0x0039FBE4u) [[unlikely]] return; }
L_0039FBE4:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FBF4u); set32(c.r[6], c.r[16].w[0] - c.r[17].w[0]);  if (depth < kMaxDepth) unit_0099(c, 60u, depth + 1u); else { c.pc = 0x00387A98u; return; } if (c.pc != 0x0039FBF4u) [[unlikely]] return; }
L_0039FBF4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0039FBF8:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FC08u); c.r[7].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 459u, depth + 1u); else { c.pc = 0x0039B818u; return; } if (c.pc != 0x0039FC08u) [[unlikely]] return; }
L_0039FC08:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_0039FC10:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0039FC14:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 136u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 152u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0039FC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 8044u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FC6Cu); set32(c.r[5], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_009F(c, 6u, depth + 1u); else { c.pc = 0x0039C430u; return; } if (c.pc != 0x0039FC6Cu) [[unlikely]] return; }
L_0039FC6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FC7Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009F(c, 6u, depth + 1u); else { c.pc = 0x0039C430u; return; } if (c.pc != 0x0039FC7Cu) [[unlikely]] return; }
L_0039FC7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FC8Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009F(c, 6u, depth + 1u); else { c.pc = 0x0039C430u; return; } if (c.pc != 0x0039FC8Cu) [[unlikely]] return; }
L_0039FC8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A1(c, 319u, depth); }
L_0039FCB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 8044u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FCD8u); set32(c.r[5], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_009F(c, 7u, depth + 1u); else { c.pc = 0x0039C450u; return; } if (c.pc != 0x0039FCD8u) [[unlikely]] return; }
L_0039FCD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FCE8u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 7u, depth + 1u); else { c.pc = 0x0039C450u; return; } if (c.pc != 0x0039FCE8u) [[unlikely]] return; }
L_0039FCE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FCFCu); c.r[18].d[0] = c.r[18].d[0] & c.r[19].d[0];  if (depth < kMaxDepth) unit_009F(c, 7u, depth + 1u); else { c.pc = 0x0039C450u; return; } if (c.pc != 0x0039FCFCu) [[unlikely]] return; }
L_0039FCFC:
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039FD20:
    set32(c.r[3], ld32((c.r[4].w[0] + 8052u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 32u), c.r[2].w[0]);  c.pc = t; return; }
L_0039FD38:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[16], c.r[18].w[0] + 8044u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[2].d[0] = c.r[21].sd[0] < 4ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[20], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_0039FDD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FD88u);  if (depth < kMaxDepth) unit_009A(c, 29u, depth + 1u); else { c.pc = 0x00389D38u; return; } if (c.pc != 0x0039FD88u) [[unlikely]] return; }
L_0039FD88:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0039FDC8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], 0u + 1u);  goto L_0039FDBC; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FDB0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 483u, depth + 1u); else { c.pc = 0x0039BC70u; return; } if (c.pc != 0x0039FDB0u) [[unlikely]] return; }
L_0039FDB0:
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_0039FDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_0039FDDC; } }
    c.budget -= 1;
L_0039FDC8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { st32((c.r[20].w[0] + 60u), 0u);  goto L_0039FDDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0039FDE0; } }
L_0039FDD8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039FDDC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0039FDE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FDE8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 415u, depth + 1u); else { c.pc = 0x0039FE80u; return; } if (c.pc != 0x0039FDE8u) [[unlikely]] return; }
L_0039FDE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0039FE00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FDF8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009F(c, 399u, depth + 1u); else { c.pc = 0x0039FC40u; return; } if (c.pc != 0x0039FDF8u) [[unlikely]] return; }
L_0039FDF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039FE54; } }
L_0039FE00:
    c.r[2].d[0] = c.r[22].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[21].sd[0] < 64ll ? 1ull : 0ull;  if (t) { goto L_0039FE28; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FE18u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 418u, depth + 1u); else { c.pc = 0x0039FED0u; return; } if (c.pc != 0x0039FE18u) [[unlikely]] return; }
L_0039FE18:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039FE54; } }
    c.r[3].d[0] = c.r[21].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 1;
L_0039FE28:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039FE54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (t) { goto L_0039FE44; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039FE54; } }
L_0039FE44:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FE50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 418u, depth + 1u); else { c.pc = 0x0039FED0u; return; } if (c.pc != 0x0039FE50u) [[unlikely]] return; }
L_0039FE50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039FE54:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0039FE80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039FEC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FEA4u);  if (depth < kMaxDepth) unit_009F(c, 34u, depth + 1u); else { c.pc = 0x0039C710u; return; } if (c.pc != 0x0039FEA4u) [[unlikely]] return; }
L_0039FEA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039FEBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FEB4u);  if (depth < kMaxDepth) unit_009F(c, 36u, depth + 1u); else { c.pc = 0x0039C730u; return; } if (c.pc != 0x0039FEB4u) [[unlikely]] return; }
L_0039FEB4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0039FEC0; }
L_0039FEBC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039FEC0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039FED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[2], c.r[16].w[0] + 8044u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FEFCu); set32(c.r[17], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_009F(c, 7u, depth + 1u); else { c.pc = 0x0039C450u; return; } if (c.pc != 0x0039FEFCu) [[unlikely]] return; }
L_0039FEFC:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039FF18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FF14u); set32(c.r[5], ld32((c.r[17].w[0] + 60u)));  if (depth < kMaxDepth) unit_009F(c, 399u, depth + 1u); else { c.pc = 0x0039FC40u; return; } if (c.pc != 0x0039FF14u) [[unlikely]] return; }
L_0039FF14:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0039FF18:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { st32((c.r[18].w[0]), c.r[5].w[0]);  goto L_0039FF20; }
L_0039FF20:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039FF38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FF54u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00A0(c, 23u, depth + 1u); else { c.pc = 0x003A0240u; return; } if (c.pc != 0x0039FF54u) [[unlikely]] return; }
L_0039FF54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FF5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 428u, depth + 1u); else { c.pc = 0x0039FF90u; return; } if (c.pc != 0x0039FF5Cu) [[unlikely]] return; }
L_0039FF5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FF64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 26u, depth + 1u); else { c.pc = 0x003A02F0u; return; } if (c.pc != 0x0039FF64u) [[unlikely]] return; }
L_0039FF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FF6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 13u, depth + 1u); else { c.pc = 0x003A0148u; return; } if (c.pc != 0x0039FF6Cu) [[unlikely]] return; }
L_0039FF6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FF74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 29u, depth + 1u); else { c.pc = 0x003A0388u; return; } if (c.pc != 0x0039FF74u) [[unlikely]] return; }
L_0039FF74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FF7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 31u, depth + 1u); else { c.pc = 0x003A0438u; return; } if (c.pc != 0x0039FF7Cu) [[unlikely]] return; }
L_0039FF7C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039FF90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FFB0u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_00A0(c, 2u, depth + 1u); else { c.pc = 0x003A0018u; return; } if (c.pc != 0x0039FFB0u) [[unlikely]] return; }
L_0039FFB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00A0(c, 1u, depth); } }
    set32(c.r[16], ld32((c.r[17].w[0] + 8060u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FFC4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 5u, depth + 1u); else { c.pc = 0x0039C410u; return; } if (c.pc != 0x0039FFC4u) [[unlikely]] return; }
L_0039FFC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00A0(c, 1u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FFD8u);  if (depth < kMaxDepth) unit_00A0(c, 10u, depth + 1u); else { c.pc = 0x003A00E8u; return; } if (c.pc != 0x0039FFD8u) [[unlikely]] return; }
L_0039FFD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00A0(c, 1u, depth); } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A0(c, 7u, depth); }
}

}
