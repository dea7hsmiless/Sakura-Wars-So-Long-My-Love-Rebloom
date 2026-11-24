#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005B[4096] = {
    1, 2, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 27, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0,
    0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 47,
    0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0,
    0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0,
    0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0,
    0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0,
    0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0,
    0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0,
    0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173,
    0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 182, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0,
    0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0,
    223, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0,
    0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 250, 0, 251, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0,
    0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0,
    0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0,
    0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0,
    0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0,
    0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0,
    339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349,
    0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0,
    0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369,
    0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0,
    0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0,
    0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0,
};

void unit_005B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0028C000;
    case 2u: goto L_0028C004;
    case 3u: goto L_0028C008;
    case 4u: goto L_0028C020;
    case 5u: goto L_0028C038;
    case 6u: goto L_0028C054;
    case 7u: goto L_0028C074;
    case 8u: goto L_0028C0A0;
    case 9u: goto L_0028C0B8;
    case 10u: goto L_0028C0D4;
    case 11u: goto L_0028C0F4;
    case 12u: goto L_0028C120;
    case 13u: goto L_0028C170;
    case 14u: goto L_0028C1E8;
    case 15u: goto L_0028C208;
    case 16u: goto L_0028C224;
    case 17u: goto L_0028C284;
    case 18u: goto L_0028C358;
    case 19u: goto L_0028C3A0;
    case 20u: goto L_0028C3F8;
    case 21u: goto L_0028C46C;
    case 22u: goto L_0028C4A8;
    case 23u: goto L_0028C540;
    case 24u: goto L_0028C588;
    case 25u: goto L_0028C5BC;
    case 26u: goto L_0028C600;
    case 27u: goto L_0028C610;
    case 28u: goto L_0028C614;
    case 29u: goto L_0028C630;
    case 30u: goto L_0028C670;
    case 31u: goto L_0028C6A4;
    case 32u: goto L_0028C6D0;
    case 33u: goto L_0028C6F0;
    case 34u: goto L_0028C704;
    case 35u: goto L_0028C720;
    case 36u: goto L_0028C74C;
    case 37u: goto L_0028C760;
    case 38u: goto L_0028C790;
    case 39u: goto L_0028C7E4;
    case 40u: goto L_0028C7F4;
    case 41u: goto L_0028C80C;
    case 42u: goto L_0028C828;
    case 43u: goto L_0028C838;
    case 44u: goto L_0028C848;
    case 45u: goto L_0028C860;
    case 46u: goto L_0028C86C;
    case 47u: goto L_0028C87C;
    case 48u: goto L_0028C88C;
    case 49u: goto L_0028C8A0;
    case 50u: goto L_0028C8F8;
    case 51u: goto L_0028C944;
    case 52u: goto L_0028C958;
    case 53u: goto L_0028C970;
    case 54u: goto L_0028C990;
    case 55u: goto L_0028C9DC;
    case 56u: goto L_0028C9F8;
    case 57u: goto L_0028CA44;
    case 58u: goto L_0028CA5C;
    case 59u: goto L_0028CA74;
    case 60u: goto L_0028CA88;
    case 61u: goto L_0028CAD4;
    case 62u: goto L_0028CAF4;
    case 63u: goto L_0028CB40;
    case 64u: goto L_0028CB70;
    case 65u: goto L_0028CB94;
    case 66u: goto L_0028CBAC;
    case 67u: goto L_0028CBC0;
    case 68u: goto L_0028CBD0;
    case 69u: goto L_0028CC20;
    case 70u: goto L_0028CC2C;
    case 71u: goto L_0028CCC0;
    case 72u: goto L_0028CD04;
    case 73u: goto L_0028CD10;
    case 74u: goto L_0028CD98;
    case 75u: goto L_0028CDBC;
    case 76u: goto L_0028CDD8;
    case 77u: goto L_0028CDF4;
    case 78u: goto L_0028CE38;
    case 79u: goto L_0028CE44;
    case 80u: goto L_0028CEC0;
    case 81u: goto L_0028CEF4;
    case 82u: goto L_0028CF00;
    case 83u: goto L_0028CF1C;
    case 84u: goto L_0028CF30;
    case 85u: goto L_0028CF40;
    case 86u: goto L_0028CF70;
    case 87u: goto L_0028CF9C;
    case 88u: goto L_0028CFC8;
    case 89u: goto L_0028CFEC;
    case 90u: goto L_0028D008;
    case 91u: goto L_0028D018;
    case 92u: goto L_0028D028;
    case 93u: goto L_0028D038;
    case 94u: goto L_0028D04C;
    case 95u: goto L_0028D070;
    case 96u: goto L_0028D094;
    case 97u: goto L_0028D0A4;
    case 98u: goto L_0028D0BC;
    case 99u: goto L_0028D0D0;
    case 100u: goto L_0028D110;
    case 101u: goto L_0028D160;
    case 102u: goto L_0028D18C;
    case 103u: goto L_0028D1A4;
    case 104u: goto L_0028D200;
    case 105u: goto L_0028D240;
    case 106u: goto L_0028D25C;
    case 107u: goto L_0028D268;
    case 108u: goto L_0028D300;
    case 109u: goto L_0028D324;
    case 110u: goto L_0028D334;
    case 111u: goto L_0028D354;
    case 112u: goto L_0028D370;
    case 113u: goto L_0028D384;
    case 114u: goto L_0028D398;
    case 115u: goto L_0028D3AC;
    case 116u: goto L_0028D3C0;
    case 117u: goto L_0028D3D4;
    case 118u: goto L_0028D3F4;
    case 119u: goto L_0028D408;
    case 120u: goto L_0028D428;
    case 121u: goto L_0028D43C;
    case 122u: goto L_0028D45C;
    case 123u: goto L_0028D474;
    case 124u: goto L_0028D488;
    case 125u: goto L_0028D494;
    case 126u: goto L_0028D4C0;
    case 127u: goto L_0028D4D4;
    case 128u: goto L_0028D4E4;
    case 129u: goto L_0028D510;
    case 130u: goto L_0028D55C;
    case 131u: goto L_0028D590;
    case 132u: goto L_0028D5D8;
    case 133u: goto L_0028D608;
    case 134u: goto L_0028D618;
    case 135u: goto L_0028D630;
    case 136u: goto L_0028D658;
    case 137u: goto L_0028D660;
    case 138u: goto L_0028D6C4;
    case 139u: goto L_0028D6D4;
    case 140u: goto L_0028D6E0;
    case 141u: goto L_0028D6F0;
    case 142u: goto L_0028D724;
    case 143u: goto L_0028D744;
    case 144u: goto L_0028D750;
    case 145u: goto L_0028D758;
    case 146u: goto L_0028D770;
    case 147u: goto L_0028D7C8;
    case 148u: goto L_0028D7E0;
    case 149u: goto L_0028D828;
    case 150u: goto L_0028D838;
    case 151u: goto L_0028D850;
    case 152u: goto L_0028D85C;
    case 153u: goto L_0028D874;
    case 154u: goto L_0028D884;
    case 155u: goto L_0028D8A4;
    case 156u: goto L_0028D8C8;
    case 157u: goto L_0028D8EC;
    case 158u: goto L_0028D910;
    case 159u: goto L_0028D940;
    case 160u: goto L_0028D948;
    case 161u: goto L_0028D964;
    case 162u: goto L_0028D974;
    case 163u: goto L_0028D990;
    case 164u: goto L_0028D9B0;
    case 165u: goto L_0028D9F0;
    case 166u: goto L_0028D9F8;
    case 167u: goto L_0028DA1C;
    case 168u: goto L_0028DA34;
    case 169u: goto L_0028DA50;
    case 170u: goto L_0028DA5C;
    case 171u: goto L_0028DAA4;
    case 172u: goto L_0028DAC4;
    case 173u: goto L_0028DAFC;
    case 174u: goto L_0028DB04;
    case 175u: goto L_0028DB0C;
    case 176u: goto L_0028DB1C;
    case 177u: goto L_0028DB28;
    case 178u: goto L_0028DB64;
    case 179u: goto L_0028DB6C;
    case 180u: goto L_0028DBD8;
    case 181u: goto L_0028DBF0;
    case 182u: goto L_0028DBF8;
    case 183u: goto L_0028DC00;
    case 184u: goto L_0028DC20;
    case 185u: goto L_0028DC4C;
    case 186u: goto L_0028DC54;
    case 187u: goto L_0028DC68;
    case 188u: goto L_0028DD40;
    case 189u: goto L_0028DD5C;
    case 190u: goto L_0028DD80;
    case 191u: goto L_0028DD90;
    case 192u: goto L_0028DDB0;
    case 193u: goto L_0028DDD8;
    case 194u: goto L_0028DDE8;
    case 195u: goto L_0028DE08;
    case 196u: goto L_0028DE30;
    case 197u: goto L_0028DE40;
    case 198u: goto L_0028DE60;
    case 199u: goto L_0028DE88;
    case 200u: goto L_0028DE98;
    case 201u: goto L_0028DEB8;
    case 202u: goto L_0028DED8;
    case 203u: goto L_0028DEEC;
    case 204u: goto L_0028DF00;
    case 205u: goto L_0028DF24;
    case 206u: goto L_0028DF44;
    case 207u: goto L_0028DF64;
    case 208u: goto L_0028DF84;
    case 209u: goto L_0028DFB0;
    case 210u: goto L_0028DFCC;
    case 211u: goto L_0028E000;
    case 212u: goto L_0028E018;
    case 213u: goto L_0028E024;
    case 214u: goto L_0028E02C;
    case 215u: goto L_0028E034;
    case 216u: goto L_0028E050;
    case 217u: goto L_0028E070;
    case 218u: goto L_0028E090;
    case 219u: goto L_0028E0B0;
    case 220u: goto L_0028E0C0;
    case 221u: goto L_0028E0D0;
    case 222u: goto L_0028E0F4;
    case 223u: goto L_0028E100;
    case 224u: goto L_0028E10C;
    case 225u: goto L_0028E118;
    case 226u: goto L_0028E130;
    case 227u: goto L_0028E190;
    case 228u: goto L_0028E1A0;
    case 229u: goto L_0028E1E4;
    case 230u: goto L_0028E200;
    case 231u: goto L_0028E24C;
    case 232u: goto L_0028E280;
    case 233u: goto L_0028E334;
    case 234u: goto L_0028E3C4;
    case 235u: goto L_0028E3F0;
    case 236u: goto L_0028E424;
    case 237u: goto L_0028E434;
    case 238u: goto L_0028E474;
    case 239u: goto L_0028E498;
    case 240u: goto L_0028E4C4;
    case 241u: goto L_0028E4D8;
    case 242u: goto L_0028E560;
    case 243u: goto L_0028E5A0;
    case 244u: goto L_0028E5D8;
    case 245u: goto L_0028E5F0;
    case 246u: goto L_0028E62C;
    case 247u: goto L_0028E64C;
    case 248u: goto L_0028E68C;
    case 249u: goto L_0028E6D8;
    case 250u: goto L_0028E704;
    case 251u: goto L_0028E70C;
    case 252u: goto L_0028E720;
    case 253u: goto L_0028E72C;
    case 254u: goto L_0028E748;
    case 255u: goto L_0028E770;
    case 256u: goto L_0028E7A8;
    case 257u: goto L_0028E7BC;
    case 258u: goto L_0028E7CC;
    case 259u: goto L_0028E7F8;
    case 260u: goto L_0028E818;
    case 261u: goto L_0028E890;
    case 262u: goto L_0028E8B8;
    case 263u: goto L_0028E8C0;
    case 264u: goto L_0028E8CC;
    case 265u: goto L_0028E8D8;
    case 266u: goto L_0028E8F0;
    case 267u: goto L_0028E920;
    case 268u: goto L_0028E934;
    case 269u: goto L_0028E940;
    case 270u: goto L_0028E958;
    case 271u: goto L_0028E974;
    case 272u: goto L_0028E984;
    case 273u: goto L_0028E9A8;
    case 274u: goto L_0028E9B8;
    case 275u: goto L_0028E9CC;
    case 276u: goto L_0028E9F8;
    case 277u: goto L_0028EA08;
    case 278u: goto L_0028EA1C;
    case 279u: goto L_0028EA2C;
    case 280u: goto L_0028EA58;
    case 281u: goto L_0028EA68;
    case 282u: goto L_0028EA90;
    case 283u: goto L_0028EABC;
    case 284u: goto L_0028EB0C;
    case 285u: goto L_0028EB2C;
    case 286u: goto L_0028EB44;
    case 287u: goto L_0028EC34;
    case 288u: goto L_0028ECA0;
    case 289u: goto L_0028ECB4;
    case 290u: goto L_0028ECF0;
    case 291u: goto L_0028ED50;
    case 292u: goto L_0028EE00;
    case 293u: goto L_0028EE3C;
    case 294u: goto L_0028EE4C;
    case 295u: goto L_0028EEFC;
    case 296u: goto L_0028EF50;
    case 297u: goto L_0028EFBC;
    case 298u: goto L_0028EFCC;
    case 299u: goto L_0028EFE4;
    case 300u: goto L_0028F020;
    case 301u: goto L_0028F06C;
    case 302u: goto L_0028F094;
    case 303u: goto L_0028F0F4;
    case 304u: goto L_0028F144;
    case 305u: goto L_0028F158;
    case 306u: goto L_0028F16C;
    case 307u: goto L_0028F180;
    case 308u: goto L_0028F194;
    case 309u: goto L_0028F1A0;
    case 310u: goto L_0028F1CC;
    case 311u: goto L_0028F1D8;
    case 312u: goto L_0028F1FC;
    case 313u: goto L_0028F230;
    case 314u: goto L_0028F250;
    case 315u: goto L_0028F290;
    case 316u: goto L_0028F2F8;
    case 317u: goto L_0028F35C;
    case 318u: goto L_0028F364;
    case 319u: goto L_0028F398;
    case 320u: goto L_0028F420;
    case 321u: goto L_0028F458;
    case 322u: goto L_0028F46C;
    case 323u: goto L_0028F4B8;
    case 324u: goto L_0028F4C4;
    case 325u: goto L_0028F4E4;
    case 326u: goto L_0028F4F8;
    case 327u: goto L_0028F508;
    case 328u: goto L_0028F518;
    case 329u: goto L_0028F528;
    case 330u: goto L_0028F550;
    case 331u: goto L_0028F5A0;
    case 332u: goto L_0028F5CC;
    case 333u: goto L_0028F5EC;
    case 334u: goto L_0028F604;
    case 335u: goto L_0028F618;
    case 336u: goto L_0028F650;
    case 337u: goto L_0028F68C;
    case 338u: goto L_0028F6DC;
    case 339u: goto L_0028F700;
    case 340u: goto L_0028F750;
    case 341u: goto L_0028F760;
    case 342u: goto L_0028F7B4;
    case 343u: goto L_0028F810;
    case 344u: goto L_0028F8C8;
    case 345u: goto L_0028F8D0;
    case 346u: goto L_0028F998;
    case 347u: goto L_0028F9A0;
    case 348u: goto L_0028F9E4;
    case 349u: goto L_0028F9FC;
    case 350u: goto L_0028FA14;
    case 351u: goto L_0028FA28;
    case 352u: goto L_0028FA40;
    case 353u: goto L_0028FA64;
    case 354u: goto L_0028FA88;
    case 355u: goto L_0028FAAC;
    case 356u: goto L_0028FAC4;
    case 357u: goto L_0028FAE0;
    case 358u: goto L_0028FB00;
    case 359u: goto L_0028FB20;
    case 360u: goto L_0028FB44;
    case 361u: goto L_0028FB5C;
    case 362u: goto L_0028FB7C;
    case 363u: goto L_0028FBC0;
    case 364u: goto L_0028FC10;
    case 365u: goto L_0028FC20;
    case 366u: goto L_0028FC54;
    case 367u: goto L_0028FCC8;
    case 368u: goto L_0028FCE8;
    case 369u: goto L_0028FCFC;
    case 370u: goto L_0028FD10;
    case 371u: goto L_0028FD24;
    case 372u: goto L_0028FD44;
    case 373u: goto L_0028FD4C;
    case 374u: goto L_0028FD80;
    case 375u: goto L_0028FD94;
    case 376u: goto L_0028FDC0;
    case 377u: goto L_0028FDD4;
    case 378u: goto L_0028FE1C;
    case 379u: goto L_0028FE4C;
    case 380u: goto L_0028FE64;
    case 381u: goto L_0028FE88;
    case 382u: goto L_0028FEA0;
    case 383u: goto L_0028FEC4;
    case 384u: goto L_0028FEDC;
    case 385u: goto L_0028FF0C;
    case 386u: goto L_0028FF30;
    case 387u: goto L_0028FF54;
    case 388u: goto L_0028FF78;
    case 389u: goto L_0028FF90;
    case 390u: goto L_0028FFA8;
    case 391u: goto L_0028FFD0;
    case 392u: goto L_0028FFE0;
    case 393u: goto L_0028FFF0;
    default: bad_entry(c, 0x0028C000u); return;
    }
L_0028C000:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_0028C004:
    set32(c.r[2], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 1;
L_0028C008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028C020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C038u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x0028C038u) [[unlikely]] return; }
L_0028C038:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_0028C04C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C088; } }
L_0028C04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C054u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0028C054u) [[unlikely]] return; }
L_0028C054:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0028C06C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C088; } }
L_0028C06C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C074u);  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x0028C074u) [[unlikely]] return; }
L_0028C074:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 552u)));
    c.budget -= 5;
L_0028C088:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028C0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C0B8u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x0028C0B8u) [[unlikely]] return; }
L_0028C0B8:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_0028C0CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C108; } }
L_0028C0CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C0D4u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0028C0D4u) [[unlikely]] return; }
L_0028C0D4:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0028C0EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C108; } }
L_0028C0EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C0F4u);  if (depth < kMaxDepth) unit_005A(c, 387u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x0028C0F4u) [[unlikely]] return; }
L_0028C0F4:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 556u)));
    c.budget -= 5;
L_0028C108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028C120:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 520u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028C378; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1180u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[17], ld32((c.r[16].w[0] + 476u)));  goto L_0028C1F4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], 0u + 6u);  goto L_0028C168; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C1C0; } }
L_0028C168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C170u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0028C170u) [[unlikely]] return; }
L_0028C170:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0028C190; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028C1A0; } }
L_0028C190:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0028C1A0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028C1C0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_0028C1B8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028C1B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C1C0; } }
L_0028C1C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028C1F0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 476u)));
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 608u)));  goto L_0028C228; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C1E8u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x0028C1E8u) [[unlikely]] return; }
L_0028C1E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C224; } }
L_0028C1F0:
    set32(c.r[17], ld32((c.r[16].w[0] + 476u)));
    c.budget -= 1;
L_0028C1F4:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[5].d[0];  if (t) { goto L_0028C224; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C208u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0028C208u) [[unlikely]] return; }
L_0028C208:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0028C224; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C224u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x0028C224u) [[unlikely]] return; }
L_0028C224:
    set32(c.r[3], ld32((c.r[16].w[0] + 608u)));
    c.budget -= 1;
L_0028C228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 2032u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028C254; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_0028C278; } }
L_0028C254:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0028C27C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 4;
L_0028C278:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028C27C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C284u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0028C284u) [[unlikely]] return; }
L_0028C284:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 608u)));  goto L_0028C2A8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 608u)));
    c.budget -= 5;
L_0028C2A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[21] = ld32((c.r[4].w[0] + 2032u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[21]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[16].w[0] + 176u)));  goto L_0028C2D8; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0028C37C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 1;
L_0028C2D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028C378; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0028C378; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028C378; } }
    c.f[20] = 0u;
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028C378; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[20] = ld32((c.r[4].w[0] + 80u));  goto L_0028C348; }
L_0028C348:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C358u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0028C358u) [[unlikely]] return; }
L_0028C358:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028C378; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 4;
L_0028C378:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0028C37C:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028C3A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 580u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028C3C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C524; } }
L_0028C3C4:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028C450; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0028C3E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C514; } }
L_0028C3E0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], 0u + 42u);  goto L_0028C3F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C448; } }
L_0028C3F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C3F8u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0028C3F8u) [[unlikely]] return; }
L_0028C3F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0028C418; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028C428; } }
L_0028C418:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0028C428:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0028C448; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[6], ld32((c.r[3].w[0])));  goto L_0028C440; }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028C440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C448; } }
L_0028C448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C514; } }
L_0028C450:
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0028C48C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C46Cu); set32(c.r[4], ld32((c.r[2].w[0] + 80u)));  if (depth < kMaxDepth) unit_005C(c, 251u, depth + 1u); else { c.pc = 0x002921E0u; return; } if (c.pc != 0x0028C46Cu) [[unlikely]] return; }
L_0028C46C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_0028C480; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0028C48C; } }
L_0028C480:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 580u)));  goto L_0028C490; }
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0028C48C:
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 1;
L_0028C490:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0028C4A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028C514; } }
L_0028C4A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C4A8u); set32(c.r[5], 0u + 45u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0028C4A8u) [[unlikely]] return; }
L_0028C4A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0028C4C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028C4D8; } }
L_0028C4C8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0028C4D8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0028C514; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_0028C4FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028C50C; } }
L_0028C4FC:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0028C50C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C514; } }
L_0028C514:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028C524; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[6].w[0])));  if (t) { goto L_0028C524; } }
L_0028C524:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028C540:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_0028C568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C5DC; } }
L_0028C568:
    set32(c.r[3], ld32((c.r[17].w[0] + 1296u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028C580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C5DC; } }
L_0028C580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C588u);  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0028C588u) [[unlikely]] return; }
L_0028C588:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0028C5A8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[2].w[0] + 36u));  if (t) { goto L_0028C5B0; } }
L_0028C5A8:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.f[20] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 2;
L_0028C5B0:
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C5BCu); set32(c.r[5], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x0028C5BCu) [[unlikely]] return; }
L_0028C5BC:
    c.f[2] = ld32((c.r[17].w[0] + 656u));
    c.f[1] = ld32((c.r[16].w[0] + 656u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 1u);  goto L_0028C5DC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028C5DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028C600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C610u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x0028C610u) [[unlikely]] return; }
L_0028C610:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0028C614:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028C620; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028C620:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028C630:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 1296u)));  if (t) { goto L_0028C660; } }
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0028C664; } }
L_0028C660:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028C664:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028C670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1304u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028C694; } }
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028C69C; } }
L_0028C694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C6BC; } }
L_0028C69C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C6A4u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x0028C6A4u) [[unlikely]] return; }
L_0028C6A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 1304u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 6;
L_0028C6BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028C6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1312u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028C708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C6F0u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0028C6F0u) [[unlikely]] return; }
L_0028C6F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  goto L_0028C708; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C704u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 278u, depth + 1u); else { c.pc = 0x00285A00u; return; } if (c.pc != 0x0028C704u) [[unlikely]] return; }
L_0028C704:
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    c.budget -= 1;
L_0028C708:
    set32(c.r[2], ld32((c.r[16].w[0] + 1312u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028C720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1312u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0028C754; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C74Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028C74Cu) [[unlikely]] return; }
L_0028C74C:
    st32((c.r[16].w[0] + 1312u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0028C754:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028C760:
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 84u)));  goto L_0028C778; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028C780; } }
L_0028C778:
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0028C780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028C790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 11;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[5].w[0] + 48u)));  goto L_0028C874; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[5].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0028C7EC; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 50u);  goto L_0028C7DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0028C890; } }
L_0028C7DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C7E4u);  if (depth < kMaxDepth) unit_0067(c, 268u, depth + 1u); else { c.pc = 0x002BE890u; return; } if (c.pc != 0x0028C7E4u) [[unlikely]] return; }
L_0028C7E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C88C; } }
L_0028C7EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C7F4u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0028C7F4u) [[unlikely]] return; }
L_0028C7F4:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_0028C840; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C80Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0028C80Cu) [[unlikely]] return; }
L_0028C80C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_0028C830; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C828u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0067(c, 268u, depth + 1u); else { c.pc = 0x002BE890u; return; } if (c.pc != 0x0028C828u) [[unlikely]] return; }
L_0028C828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C88C; } }
L_0028C830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C838u); set32(c.r[4], 0u + 49u);  if (depth < kMaxDepth) unit_0067(c, 268u, depth + 1u); else { c.pc = 0x002BE890u; return; } if (c.pc != 0x0028C838u) [[unlikely]] return; }
L_0028C838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C88C; } }
L_0028C840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C848u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0028C848u) [[unlikely]] return; }
L_0028C848:
    c.r[3].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028C88C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C860u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 12u, depth + 1u); else { c.pc = 0x002A4290u; return; } if (c.pc != 0x0028C860u) [[unlikely]] return; }
L_0028C860:
    set32(c.r[4], 0u + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C86Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 268u, depth + 1u); else { c.pc = 0x002BE890u; return; } if (c.pc != 0x0028C86Cu) [[unlikely]] return; }
L_0028C86C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C88C; } }
L_0028C874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C87Cu); set32(c.r[4], 0u + 50u);  if (depth < kMaxDepth) unit_0067(c, 268u, depth + 1u); else { c.pc = 0x002BE890u; return; } if (c.pc != 0x0028C87Cu) [[unlikely]] return; }
L_0028C87C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C88Cu); set32(c.r[4], 0u + 21u);  if (depth < kMaxDepth) unit_0067(c, 273u, depth + 1u); else { c.pc = 0x002BE970u; return; } if (c.pc != 0x0028C88Cu) [[unlikely]] return; }
L_0028C88C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0028C890:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028C8A0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 11;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], ld32((c.r[4].w[0] + 48u)));  goto L_0028CAE4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0028C950; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_0028C8EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028CB54; } }
L_0028C8EC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C8F8u); set32(c.r[6], 0u + 50u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0028C8F8u) [[unlikely]] return; }
L_0028C8F8:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028C90C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 176u)));  if (t) { goto L_0028C920; } }
L_0028C90C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_0028C920; }
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_0028C920:
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] & 2ull;  goto L_0028CB54; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0028C944; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C944u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0028C944u) [[unlikely]] return; }
L_0028C944:
    c.r[2].d[0] = c.r[16].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028CB54; } }
L_0028C950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C958u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0028C958u) [[unlikely]] return; }
L_0028C958:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_0028CA54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C970u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0028C970u) [[unlikely]] return; }
L_0028C970:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_0028C9EC; }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C990u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0028C990u) [[unlikely]] return; }
L_0028C990:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028C9A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 144u)));  if (t) { goto L_0028C9B8; } }
L_0028C9A4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_0028C9B8; }
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 3;
L_0028C9B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028C9E0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0028C9DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C9DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0028C9DCu) [[unlikely]] return; }
L_0028C9DC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028C9E0:
    set32(c.r[2], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];  if (t) { goto L_0028CB54; } }
L_0028C9EC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C9F8u); set32(c.r[6], 0u + 49u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0028C9F8u) [[unlikely]] return; }
L_0028C9F8:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028CA0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 112u)));  if (t) { goto L_0028CA20; } }
L_0028CA0C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_0028CA20; }
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 3;
L_0028CA20:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028CA48; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0028CA44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CA44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0028CA44u) [[unlikely]] return; }
L_0028CA44:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028CA48:
    set32(c.r[2], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];  if (t) { goto L_0028CB54; } }
L_0028CA54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CA5Cu);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0028CA5Cu) [[unlikely]] return; }
L_0028CA5C:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CB50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CA74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 12u, depth + 1u); else { c.pc = 0x002A4290u; return; } if (c.pc != 0x0028CA74u) [[unlikely]] return; }
L_0028CA74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CA88u); set32(c.r[6], 0u + 160u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0028CA88u) [[unlikely]] return; }
L_0028CA88:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028CA9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_0028CAB0; } }
L_0028CA9C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_0028CAB0; }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 3;
L_0028CAB0:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028CAD8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0028CAD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CAD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0028CAD4u) [[unlikely]] return; }
L_0028CAD4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028CAD8:
    set32(c.r[2], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];  if (t) { goto L_0028CB54; } }
L_0028CAE4:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 50u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CAF4u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0028CAF4u) [[unlikely]] return; }
L_0028CAF4:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028CB08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_0028CB1C; } }
L_0028CB08:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_0028CB1C; }
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 3;
L_0028CB1C:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028CB44; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0028CB40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CB40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0028CB40u) [[unlikely]] return; }
L_0028CB40:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028CB44:
    set32(c.r[2], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];  if (t) { goto L_0028CB54; } }
L_0028CB50:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028CB54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0028CB70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1296u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 1300u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 1296u), c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CB94u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 313u, depth + 1u); else { c.pc = 0x0028B330u; return; } if (c.pc != 0x0028CB94u) [[unlikely]] return; }
L_0028CB94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 16u)));  goto L_0028CBB4; }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 200u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CBACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CBACu) [[unlikely]] return; }
L_0028CBAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0028CBC4; } }
L_0028CBB4:
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CBC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CBC0u) [[unlikely]] return; }
L_0028CBC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0028CBC4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028CBD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 108u)));
    c.budget -= 9;
    { const bool t = c.r[18].sd[0] > 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028CBFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028CC80; } }
L_0028CBFC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] > 0; set32(c.r[17], c.r[2].w[0] + 76u);  if (t) { goto L_0028CC18; } }
    c.f[1] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 92u));  if (t) { goto L_0028CC70; } }
L_0028CC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CC20u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 110u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0028CC20u) [[unlikely]] return; }
L_0028CC20:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CC2Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0028CC2Cu) [[unlikely]] return; }
L_0028CC2C:
    c.f[1] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028CC54; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_0028CC54:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028CC6C; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_0028CC6C:
    c.f[0] = ld32((c.r[17].w[0] + 92u));
    c.budget -= 1;
L_0028CC70:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028CC80; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028CC80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 608u)));  goto L_0028CCA4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 608u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0028CCA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0028CEA8; } }
L_0028CCA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 608u)));
    c.budget -= 1;
L_0028CCA4:
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_0028CCB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028CEA4; } }
L_0028CCB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CCC0u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0028CCC0u) [[unlikely]] return; }
L_0028CCC0:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_0028CDEC; }
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[18].sd[0] > 0) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0028CCE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028CD64; } }
L_0028CCE4:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] > 0; set32(c.r[17], c.r[2].w[0] + 76u);  if (t) { goto L_0028CCFC; } }
    c.f[1] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 92u));  if (t) { goto L_0028CD54; } }
L_0028CCFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CD04u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 110u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0028CD04u) [[unlikely]] return; }
L_0028CD04:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CD10u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0028CD10u) [[unlikely]] return; }
L_0028CD10:
    c.f[1] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028CD38; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_0028CD38:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028CD50; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_0028CD50:
    c.f[0] = ld32((c.r[17].w[0] + 92u));
    c.budget -= 1;
L_0028CD54:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028CD64; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028CD64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_0028CD74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028CEA4; } }
L_0028CD74:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { goto L_0028CDD0; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CD98u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CD98u) [[unlikely]] return; }
L_0028CD98:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 2u);  goto L_0028CEA4; }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CDBCu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CDBCu) [[unlikely]] return; }
L_0028CDBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028CEA4; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028CEA4; } }
L_0028CDD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CDD8u);  if (depth < kMaxDepth) unit_00C1(c, 91u, depth + 1u); else { c.pc = 0x00424AE0u; return; } if (c.pc != 0x0028CDD8u) [[unlikely]] return; }
L_0028CDD8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028CDE4; }
L_0028CDE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0028CEA4; } }
L_0028CDEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CDF4u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0028CDF4u) [[unlikely]] return; }
L_0028CDF4:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028CEA4; }
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[18].sd[0] > 0) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0028CE18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028CE98; } }
L_0028CE18:
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] > 0; set32(c.r[17], c.r[2].w[0] + 76u);  if (t) { goto L_0028CE30; } }
    c.f[1] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 92u));  if (t) { goto L_0028CE88; } }
L_0028CE30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CE38u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 110u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0028CE38u) [[unlikely]] return; }
L_0028CE38:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CE44u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0028CE44u) [[unlikely]] return; }
L_0028CE44:
    c.f[1] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0028CE6C; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_0028CE6C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028CE84; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_0028CE84:
    c.f[0] = ld32((c.r[17].w[0] + 92u));
    c.budget -= 1;
L_0028CE88:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028CE98; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028CE98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028CEA4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028CEA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0028CEA8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028CEC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[5].w[0] << 3);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 608u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30252u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 1628u);  if (t) { goto L_0028CEF4; } }
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[5].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0028CEF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CEF4u); c.f[12] = ld32((c.r[3].w[0] + 4u));  if (depth < kMaxDepth) unit_0071(c, 292u, depth + 1u); else { c.pc = 0x002E6720u; return; } if (c.pc != 0x0028CEF4u) [[unlikely]] return; }
L_0028CEF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0028CEF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028CF00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30252u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0028CF20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CF1Cu);  if (depth < kMaxDepth) unit_0071(c, 293u, depth + 1u); else { c.pc = 0x002E6740u; return; } if (c.pc != 0x0028CF1Cu) [[unlikely]] return; }
L_0028CF1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0028CF20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028CF30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CF40u);  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x0028CF40u) [[unlikely]] return; }
L_0028CF40:
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u + 9u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_0028CF64; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0028CF68; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028CF64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0028CF68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028CF70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 580u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CF9Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_005C(c, 46u, depth + 1u); else { c.pc = 0x00290810u; return; } if (c.pc != 0x0028CF9Cu) [[unlikely]] return; }
L_0028CF9C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028D050; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 88u);  goto L_0028CFC0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D050; } }
L_0028CFC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CFC8u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0028CFC8u) [[unlikely]] return; }
L_0028CFC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0028CFF0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CFECu); set32(c.r[6], c.r[6].w[0] - 2080u);  if (depth < kMaxDepth) unit_0066(c, 348u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x0028CFECu) [[unlikely]] return; }
L_0028CFEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0028CFF0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  goto L_0028D044; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0028D020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D008u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0028D008u) [[unlikely]] return; }
L_0028D008:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D018u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 35u, depth + 1u); else { c.pc = 0x002BC4F0u; return; } if (c.pc != 0x0028D018u) [[unlikely]] return; }
L_0028D018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028D03C; } }
L_0028D020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D028u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0028D028u) [[unlikely]] return; }
L_0028D028:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D038u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 34u, depth + 1u); else { c.pc = 0x002BC4C0u; return; } if (c.pc != 0x0028D038u) [[unlikely]] return; }
L_0028D038:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028D03C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D050; } }
L_0028D044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D04Cu); set32(c.r[4], c.r[4].w[0] - 2064u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0028D04Cu) [[unlikely]] return; }
L_0028D04C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028D050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028D070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 420u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 64u);  goto L_0028D09C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D094u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0028D094u) [[unlikely]] return; }
L_0028D094:
    st32((c.r[16].w[0] + 420u), 0u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 2;
L_0028D09C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D0A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x0028D0A4u) [[unlikely]] return; }
L_0028D0A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 420u), c.r[2].w[0]);  if (t) { goto L_0028D0B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D0C0; } }
L_0028D0B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D0BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0028D0BCu) [[unlikely]] return; }
L_0028D0BC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028D0C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028D0D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 1316u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 80u)));  goto L_0028D0E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D104; } }
L_0028D0E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 44u)));  goto L_0028D0F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D104; } }
L_0028D0F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028D104; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 48u)));  if (t) { goto L_0028D104; } }
L_0028D104:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028D110:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 34464ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.f[21] = fp::cvt_s_w(c.f[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 960u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + 452u);  if (t) { goto L_0028D1BC; } }
L_0028D160:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[20].d[0] == c.r[19].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0028D1BC; }
    set32(c.r[3], ld32((c.r[19].w[0] + 1296u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 1296u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028D1B8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D18Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 104u, depth + 1u); else { c.pc = 0x0028D200u; return; } if (c.pc != 0x0028D18Cu) [[unlikely]] return; }
L_0028D18C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D1B8; } }
    c.f[20] = ld32((c.r[20].w[0] + 656u));
    set32(c.r[5], c.r[20].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D1A4u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x0028D1A4u) [[unlikely]] return; }
L_0028D1A4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0028D1B8; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_0028D1B8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0028D1BC:
    c.r[2].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D160u | kUnwind; return; } goto L_0028D160; }
    c.f[0] = c.f[21];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0028D200:
    set32(c.r[3], ld32((c.r[5].w[0] + 72u)));
    set32(c.r[2], c.r[3].w[0] - 2u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 72u)));  goto L_0028D21C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D234; } }
L_0028D21C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].d[0] ^ 1ull;  goto L_0028D230; }
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0028D234; } }
L_0028D230:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0028D234:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028D240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D25Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0028D25Cu) [[unlikely]] return; }
L_0028D25C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D268u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x0028D268u) [[unlikely]] return; }
L_0028D268:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 28512u);
    set32(c.r[3], c.r[3].w[0] + 28568u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534E0000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21843ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[28].w[0] - 30324u), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 112u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 168u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 144u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 152u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D300u); set32(c.r[6], 0u + 13584u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0028D300u) [[unlikely]] return; }
L_0028D300:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 140u);
    st32((c.r[2].w[0] + 13264u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D324u); st32((c.r[2].w[0] + 13360u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0028D324u) [[unlikely]] return; }
L_0028D324:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 72u)));  goto L_0028D338; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D334u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 298u, depth + 1u); else { c.pc = 0x002928A0u; return; } if (c.pc != 0x0028D334u) [[unlikely]] return; }
L_0028D334:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_0028D338:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0028D480; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D354u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0028D354u) [[unlikely]] return; }
L_0028D354:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 124u), c.r[2].w[0]);  goto L_0028D374; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028D368; } }
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_0028D368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D370u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 161u, depth + 1u); else { c.pc = 0x002894E0u; return; } if (c.pc != 0x0028D370u) [[unlikely]] return; }
L_0028D370:
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 1;
L_0028D374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D47C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D384u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0028D384u) [[unlikely]] return; }
L_0028D384:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 116u), c.r[2].w[0]);  goto L_0028D39C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D398u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0028D398u) [[unlikely]] return; }
L_0028D398:
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 1;
L_0028D39C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D47C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D3ACu); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0028D3ACu) [[unlikely]] return; }
L_0028D3AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 120u), c.r[2].w[0]);  goto L_0028D3C4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D3C0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0028D3C0u) [[unlikely]] return; }
L_0028D3C0:
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 1;
L_0028D3C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D47C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D3D4u); set32(c.r[4], 0u + 1696u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0028D3D4u) [[unlikely]] return; }
L_0028D3D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  goto L_0028D3F8; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028D3E8; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_0028D3E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D3F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 18u, depth + 1u); else { c.pc = 0x00280350u; return; } if (c.pc != 0x0028D3F4u) [[unlikely]] return; }
L_0028D3F4:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 1;
L_0028D3F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D47C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D408u); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0028D408u) [[unlikely]] return; }
L_0028D408:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), c.r[2].w[0]);  goto L_0028D42C; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028D41C; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_0028D41C:
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D428u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 157u, depth + 1u); else { c.pc = 0x002A5A60u; return; } if (c.pc != 0x0028D428u) [[unlikely]] return; }
L_0028D428:
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 1;
L_0028D42C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D47C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D43Cu); set32(c.r[4], 0u + 336u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0028D43Cu) [[unlikely]] return; }
L_0028D43C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  goto L_0028D460; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028D450; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_0028D450:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D45Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 420u, depth + 1u); else { c.pc = 0x002DF1C0u; return; } if (c.pc != 0x0028D45Cu) [[unlikely]] return; }
L_0028D45C:
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 1;
L_0028D460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D47C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D474u); set32(c.r[4], c.r[4].w[0] - 2016u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0028D474u) [[unlikely]] return; }
L_0028D474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028D4A8; } }
L_0028D47C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028D480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D488u);  if (depth < kMaxDepth) unit_006C(c, 59u, depth + 1u); else { c.pc = 0x002D0950u; return; } if (c.pc != 0x0028D488u) [[unlikely]] return; }
L_0028D488:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D494u); set32(c.r[4], c.r[4].w[0] - 1984u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0028D494u) [[unlikely]] return; }
L_0028D494:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_0028D4A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028D4C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D4D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 59u, depth + 1u); else { c.pc = 0x002D0950u; return; } if (c.pc != 0x0028D4D4u) [[unlikely]] return; }
L_0028D4D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[28].w[0] - 30324u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D4E4u); set32(c.r[4], c.r[4].w[0] - 1936u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0028D4E4u) [[unlikely]] return; }
L_0028D4E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028D510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0028D61C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0028D618; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 132u)));  goto L_0028D5C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D55Cu);  if (depth < kMaxDepth) unit_0060(c, 86u, depth + 1u); else { c.pc = 0x002A0DD0u; return; } if (c.pc != 0x0028D55Cu) [[unlikely]] return; }
L_0028D55C:
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0028D57C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  goto L_0028D580; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0028D57C:
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0028D580:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 30324u)));  goto L_0028D59C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D590u);  if (depth < kMaxDepth) unit_006B(c, 6u, depth + 1u); else { c.pc = 0x002CC0F0u; return; } if (c.pc != 0x0028D590u) [[unlikely]] return; }
L_0028D590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D5C4; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30324u)));
    c.budget -= 1;
L_0028D59C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 168u)));  goto L_0028D5B8; }
    set32(c.r[4], ld32((c.r[5].w[0] + 88u)));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 5;
L_0028D5B8:
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 3;
L_0028D5C4:
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 1;
L_0028D5C8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30324u)));  goto L_0028D5DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D5D8u);  if (depth < kMaxDepth) unit_006B(c, 13u, depth + 1u); else { c.pc = 0x002CC210u; return; } if (c.pc != 0x0028D5D8u) [[unlikely]] return; }
L_0028D5D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30324u)));
    c.budget -= 1;
L_0028D5DC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0028D5EC; }
    set32(c.r[3], ld32((c.r[3].w[0] + 88u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 2;
L_0028D5EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028D618; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D608u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x0028D608u) [[unlikely]] return; }
L_0028D608:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D618u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 113u, depth + 1u); else { c.pc = 0x0027D040u; return; } if (c.pc != 0x0028D618u) [[unlikely]] return; }
L_0028D618:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0028D61C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028D630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028D6E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D658u);  if (depth < kMaxDepth) unit_0058(c, 266u, depth + 1u); else { c.pc = 0x00282820u; return; } if (c.pc != 0x0028D658u) [[unlikely]] return; }
L_0028D658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D660u); set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_005A(c, 171u, depth + 1u); else { c.pc = 0x00289650u; return; } if (c.pc != 0x0028D660u) [[unlikely]] return; }
L_0028D660:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_0028D69C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 176u)));  goto L_0028D684; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0028D68C; } }
L_0028D684:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 2;
L_0028D68C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028D698; } }
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 1;
L_0028D698:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0028D69C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0028D6E4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0028D6BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D6E0; } }
L_0028D6BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D6C4u);  if (depth < kMaxDepth) unit_006C(c, 71u, depth + 1u); else { c.pc = 0x002D0AC0u; return; } if (c.pc != 0x0028D6C4u) [[unlikely]] return; }
L_0028D6C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0028D6D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D6D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 89u, depth + 1u); else { c.pc = 0x002D0FC0u; return; } if (c.pc != 0x0028D6D4u) [[unlikely]] return; }
L_0028D6D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028D6D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D6E0u);  if (depth < kMaxDepth) unit_005C(c, 25u, depth + 1u); else { c.pc = 0x00290450u; return; } if (c.pc != 0x0028D6E0u) [[unlikely]] return; }
L_0028D6E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0028D6E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028D6F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028D758; } }
    c.r[2].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0028D748; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D724u);  if (depth < kMaxDepth) unit_005B(c, 330u, depth + 1u); else { c.pc = 0x0028F550u; return; } if (c.pc != 0x0028D724u) [[unlikely]] return; }
L_0028D724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D744; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D744u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 72u, depth + 1u); else { c.pc = 0x002D0B40u; return; } if (c.pc != 0x0028D744u) [[unlikely]] return; }
L_0028D744:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028D748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D750u);  if (depth < kMaxDepth) unit_0058(c, 266u, depth + 1u); else { c.pc = 0x00282820u; return; } if (c.pc != 0x0028D750u) [[unlikely]] return; }
L_0028D750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D758u); set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_005A(c, 171u, depth + 1u); else { c.pc = 0x00289650u; return; } if (c.pc != 0x0028D758u) [[unlikely]] return; }
L_0028D758:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028D770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0028D7CC; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[12] = ld32((c.r[5].w[0] + 80u));  goto L_0028D7B4; }
    c.f[12] = 0u;
    c.budget -= 1;
L_0028D7B4:
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0028D7C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D7C8u);  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x0028D7C8u) [[unlikely]] return; }
L_0028D7C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0028D7CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028D7E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 13;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0028D8F0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[2].w[0] + 448u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + 52u);  if (t) { goto L_0028D83C; } }
L_0028D828:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D838u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 25u, depth + 1u); else { c.pc = 0x002A8260u; return; } if (c.pc != 0x0028D838u) [[unlikely]] return; }
L_0028D838:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0028D83C:
    c.r[2].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D828u | kUnwind; return; } goto L_0028D828; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0028D860; } }
L_0028D850:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D85Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_006C(c, 364u, depth + 1u); else { c.pc = 0x002D3E30u; return; } if (c.pc != 0x0028D85Cu) [[unlikely]] return; }
L_0028D85C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0028D860:
    c.r[2].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D850u | kUnwind; return; } goto L_0028D850; }
    set32(c.r[20], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0028D874:
    c.budget -= 2;
    if (c.r[20].d[0] == c.r[2].d[0]) { set32(c.r[20], c.r[20].w[0] - 1u);  goto L_0028D8B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0028D8A8; } }
L_0028D884:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0028D8A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D8A4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 25u, depth + 1u); else { c.pc = 0x002A8260u; return; } if (c.pc != 0x0028D8A4u) [[unlikely]] return; }
L_0028D8A4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0028D8A8:
    c.r[2].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D884u | kUnwind; return; } goto L_0028D884; }
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 1;
L_0028D8B8:
    c.budget -= 2;
    if (c.r[20].sd[0] >= 0) { set32(c.r[2], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D874u | kUnwind; return; } goto L_0028D874; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D8C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 266u, depth + 1u); else { c.pc = 0x00282820u; return; } if (c.pc != 0x0028D8C8u) [[unlikely]] return; }
L_0028D8C8:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0028D8E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D8EC; } }
L_0028D8E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D8ECu);  if (depth < kMaxDepth) unit_0058(c, 356u, depth + 1u); else { c.pc = 0x00283460u; return; } if (c.pc != 0x0028D8ECu) [[unlikely]] return; }
L_0028D8EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0028D8F0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0028D910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0028D994; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D940u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00161BB0u; return; } if (c.pc != 0x0028D940u) [[unlikely]] return; }
L_0028D940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D948u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x0028D948u) [[unlikely]] return; }
L_0028D948:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 352u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 74u));
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D964u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0028D964u) [[unlikely]] return; }
L_0028D964:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[3], 0u + 7000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D974u); st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0064(c, 90u, depth + 1u); else { c.pc = 0x002B0A50u; return; } if (c.pc != 0x0028D974u) [[unlikely]] return; }
L_0028D974:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D990u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0068(c, 190u, depth + 1u); else { c.pc = 0x002C2440u; return; } if (c.pc != 0x0028D990u) [[unlikely]] return; }
L_0028D990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0028D994:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028D9B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 12;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0028DC04; }
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 448u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D9F0u); set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0064(c, 73u, depth + 1u); else { c.pc = 0x002B08C0u; return; } if (c.pc != 0x0028D9F0u) [[unlikely]] return; }
L_0028D9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0028DA20; } }
L_0028D9F8:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0028DA20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DA1Cu);  if (depth < kMaxDepth) unit_006D(c, 54u, depth + 1u); else { c.pc = 0x002D49F0u; return; } if (c.pc != 0x0028DA1Cu) [[unlikely]] return; }
L_0028DA1C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0028DA20:
    c.r[2].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D9F8u | kUnwind; return; } goto L_0028D9F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DA34u);  if (depth < kMaxDepth) unit_0064(c, 77u, depth + 1u); else { c.pc = 0x002B0910u; return; } if (c.pc != 0x0028DA34u) [[unlikely]] return; }
L_0028DA34:
    set32(c.r[2], ld32((c.r[17].w[0] + 448u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[18].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_0028DA74; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DA50u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 445u, depth + 1u); else { c.pc = 0x0015BC00u; return; } if (c.pc != 0x0028DA50u) [[unlikely]] return; }
L_0028DA50:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DA5Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000E(c, 440u, depth + 1u); else { c.pc = 0x0015BB60u; return; } if (c.pc != 0x0028DA5Cu) [[unlikely]] return; }
L_0028DA5C:
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 136u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 140u), c.f[0]);  if (t) { goto L_0028DA98; } }
L_0028DA74:
    st32((c.r[29].w[0] + 144u), 0u);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 152u), 0u);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 136u), 0u);
    c.budget -= 9;
L_0028DA98:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DAA4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0028DAA4u) [[unlikely]] return; }
L_0028DAA4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 5u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DAC4u); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0051(c, 331u, depth + 1u); else { c.pc = 0x00266D40u; return; } if (c.pc != 0x0028DAC4u) [[unlikely]] return; }
L_0028DAC4:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u - 9u);
    set32(c.r[2], 0u - 17u);
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 280u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 280u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 280u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DAFCu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0028DAFCu) [[unlikely]] return; }
L_0028DAFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DB04u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0028DB04u) [[unlikely]] return; }
L_0028DB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DB0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x0028DB0Cu) [[unlikely]] return; }
L_0028DB0C:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    set32(c.r[3], 0u + 4000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DB1Cu); st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0013(c, 107u, depth + 1u); else { c.pc = 0x0016D590u; return; } if (c.pc != 0x0028DB1Cu) [[unlikely]] return; }
L_0028DB1C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DB28u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 117u, depth + 1u); else { c.pc = 0x0016D790u; return; } if (c.pc != 0x0028DB28u) [[unlikely]] return; }
L_0028DB28:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028DB38; }
    set32(c.r[2], ld32((c.r[2].w[0] + 120u)));
    c.budget -= 1;
L_0028DB38:
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0028DB58; }
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[3].w[0])));  goto L_0028DB58; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028DB58:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DB64u);  if (depth < kMaxDepth) unit_0013(c, 118u, depth + 1u); else { c.pc = 0x0016D7A0u; return; } if (c.pc != 0x0028DB64u) [[unlikely]] return; }
L_0028DB64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0028DBDC; } }
L_0028DB6C:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0028DBDC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0028DBC8; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 176u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[3].d[0] & 15ull;
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
L_0028DBC8:
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[7], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DBD8u); set32(c.r[8], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_006D(c, 73u, depth + 1u); else { c.pc = 0x002D4BF0u; return; } if (c.pc != 0x0028DBD8u) [[unlikely]] return; }
L_0028DBD8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0028DBDC:
    c.r[2].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028DB6Cu | kUnwind; return; } goto L_0028DB6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DBF0u);  if (depth < kMaxDepth) unit_0013(c, 111u, depth + 1u); else { c.pc = 0x0016D670u; return; } if (c.pc != 0x0028DBF0u) [[unlikely]] return; }
L_0028DBF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DBF8u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x0028DBF8u) [[unlikely]] return; }
L_0028DBF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DC00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 207u, depth + 1u); else { c.pc = 0x00161C50u; return; } if (c.pc != 0x0028DC00u) [[unlikely]] return; }
L_0028DC00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0028DC04:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0028DC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0028DD34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DC4Cu); set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_005A(c, 177u, depth + 1u); else { c.pc = 0x00289750u; return; } if (c.pc != 0x0028DC4Cu) [[unlikely]] return; }
L_0028DC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DC54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 277u, depth + 1u); else { c.pc = 0x00282A70u; return; } if (c.pc != 0x0028DC54u) [[unlikely]] return; }
L_0028DC54:
    set32(c.r[4], ld32((c.r[28].w[0] - 30304u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.f[4] = ld32((c.r[16].w[0] + 168u));  goto L_0028DC6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DC68u);  if (depth < kMaxDepth) unit_00A8(c, 168u, depth + 1u); else { c.pc = 0x003C1EF0u; return; } if (c.pc != 0x0028DC68u) [[unlikely]] return; }
L_0028DC68:
    c.f[4] = ld32((c.r[16].w[0] + 168u));
    c.budget -= 1;
L_0028DC6C:
    c.f[3] = 0u;
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[4]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  goto L_0028DD00; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[3] = ld32((c.r[5].w[0] + 80u));  goto L_0028DCA4; }
L_0028DCA4:
    c.f[2] = ld32((c.r[16].w[0] + 164u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = 0u;
    c.f[0] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 164u), c.f[2]);  if (t) { goto L_0028DCD4; } }
    st32((c.r[16].w[0] + 164u), c.f[0]);
    st32((c.r[16].w[0] + 168u), c.f[1]);
    c.budget -= 2;
L_0028DCD4:
    c.f[3] = ld32((c.r[16].w[0] + 172u));
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.f[1] = ld32((c.r[16].w[0] + 176u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[16].w[0] + 164u));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 11;
L_0028DD00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_0028DD24; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0028DD24:
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_0028DD34:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028DD40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DD5Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_006F(c, 130u, depth + 1u); else { c.pc = 0x002DCC90u; return; } if (c.pc != 0x0028DD5Cu) [[unlikely]] return; }
L_0028DD5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  goto L_0028DF0C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 592u);  goto L_0028DD88; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DD80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DD80u) [[unlikely]] return; }
L_0028DD80:
    st32((c.r[16].w[0] + 128u), 0u);
    set32(c.r[4], 0u + 592u);
    c.budget -= 2;
L_0028DD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DD90u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0028DD90u) [[unlikely]] return; }
L_0028DD90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 128u), c.r[2].w[0]);  goto L_0028DDB4; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028DDA4; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_0028DDA4:
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DDB0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 68u, depth + 1u); else { c.pc = 0x002A0A30u; return; } if (c.pc != 0x0028DDB0u) [[unlikely]] return; }
L_0028DDB0:
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 1;
L_0028DDB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DF08; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 496u);  goto L_0028DDE0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DDD8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DDD8u) [[unlikely]] return; }
L_0028DDD8:
    st32((c.r[16].w[0] + 132u), 0u);
    set32(c.r[4], 0u + 496u);
    c.budget -= 2;
L_0028DDE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DDE8u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0028DDE8u) [[unlikely]] return; }
L_0028DDE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 132u), c.r[2].w[0]);  goto L_0028DE0C; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028DDFC; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_0028DDFC:
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DE08u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 8u, depth + 1u); else { c.pc = 0x002CC140u; return; } if (c.pc != 0x0028DE08u) [[unlikely]] return; }
L_0028DE08:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 1;
L_0028DE0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DF08; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 640u);  goto L_0028DE38; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DE30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DE30u) [[unlikely]] return; }
L_0028DE30:
    st32((c.r[16].w[0] + 140u), 0u);
    set32(c.r[4], 0u + 640u);
    c.budget -= 2;
L_0028DE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DE40u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0028DE40u) [[unlikely]] return; }
L_0028DE40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 140u), c.r[2].w[0]);  goto L_0028DE64; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028DE54; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_0028DE54:
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DE60u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 302u, depth + 1u); else { c.pc = 0x0029B5A0u; return; } if (c.pc != 0x0028DE60u) [[unlikely]] return; }
L_0028DE60:
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 1;
L_0028DE64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DF08; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 512u);  goto L_0028DE90; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DE88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DE88u) [[unlikely]] return; }
L_0028DE88:
    st32((c.r[16].w[0] + 144u), 0u);
    set32(c.r[4], 0u + 512u);
    c.budget -= 2;
L_0028DE90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DE98u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0028DE98u) [[unlikely]] return; }
L_0028DE98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 144u), c.r[2].w[0]);  goto L_0028DEBC; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028DEAC; } }
    set32(c.r[6], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_0028DEAC:
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DEB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 48u, depth + 1u); else { c.pc = 0x002BC650u; return; } if (c.pc != 0x0028DEB8u) [[unlikely]] return; }
L_0028DEB8:
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 1;
L_0028DEBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DF08; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DED8u); set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  if (depth < kMaxDepth) unit_0060(c, 209u, depth + 1u); else { c.pc = 0x002A1C30u; return; } if (c.pc != 0x0028DED8u) [[unlikely]] return; }
L_0028DED8:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DEECu); set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  if (depth < kMaxDepth) unit_006B(c, 41u, depth + 1u); else { c.pc = 0x002CC690u; return; } if (c.pc != 0x0028DEECu) [[unlikely]] return; }
L_0028DEEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DF00u); set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  if (depth < kMaxDepth) unit_0067(c, 78u, depth + 1u); else { c.pc = 0x002BC9F0u; return; } if (c.pc != 0x0028DF00u) [[unlikely]] return; }
L_0028DF00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028DF9C; } }
L_0028DF08:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 1;
L_0028DF0C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  goto L_0028DF2C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DF24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DF24u) [[unlikely]] return; }
L_0028DF24:
    st32((c.r[16].w[0] + 128u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 2;
L_0028DF2C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  goto L_0028DF4C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DF44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DF44u) [[unlikely]] return; }
L_0028DF44:
    st32((c.r[16].w[0] + 132u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 2;
L_0028DF4C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  goto L_0028DF6C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DF64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DF64u) [[unlikely]] return; }
L_0028DF64:
    st32((c.r[16].w[0] + 140u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 2;
L_0028DF6C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0028DF8C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DF84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DF84u) [[unlikely]] return; }
L_0028DF84:
    st32((c.r[16].w[0] + 144u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_0028DF8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0028DF9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028DFB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DFCCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_006F(c, 161u, depth + 1u); else { c.pc = 0x002DCF10u; return; } if (c.pc != 0x0028DFCCu) [[unlikely]] return; }
L_0028DFCC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0028DFDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028DFEC; } }
L_0028DFDC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0028DFEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028E000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E018u); set32(c.r[4], ld32((c.r[4].w[0] + 152u)));  if (depth < kMaxDepth) unit_006F(c, 456u, depth + 1u); else { c.pc = 0x002DF710u; return; } if (c.pc != 0x0028E018u) [[unlikely]] return; }
L_0028E018:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E024u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 28u, depth + 1u); else { c.pc = 0x002804A0u; return; } if (c.pc != 0x0028E024u) [[unlikely]] return; }
L_0028E024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E02Cu); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0061(c, 167u, depth + 1u); else { c.pc = 0x002A5BB0u; return; } if (c.pc != 0x0028E02Cu) [[unlikely]] return; }
L_0028E02C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E034u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 235u, depth + 1u); else { c.pc = 0x0028E3F0u; return; } if (c.pc != 0x0028E034u) [[unlikely]] return; }
L_0028E034:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  goto L_0028E058; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E050u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E050u) [[unlikely]] return; }
L_0028E050:
    st32((c.r[16].w[0] + 128u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 2;
L_0028E058:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  goto L_0028E078; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E070u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E070u) [[unlikely]] return; }
L_0028E070:
    st32((c.r[16].w[0] + 132u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 2;
L_0028E078:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  goto L_0028E098; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E090u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E090u) [[unlikely]] return; }
L_0028E090:
    st32((c.r[16].w[0] + 140u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 2;
L_0028E098:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 72u)));  goto L_0028E0B8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E0B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E0B0u) [[unlikely]] return; }
L_0028E0B0:
    st32((c.r[16].w[0] + 144u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 2;
L_0028E0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E0C0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_005C(c, 304u, depth + 1u); else { c.pc = 0x002929C0u; return; } if (c.pc != 0x0028E0C0u) [[unlikely]] return; }
L_0028E0C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028E0D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0] + 72u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E0F4u); set32(c.r[4], ld32((c.r[4].w[0] + 128u)));  if (depth < kMaxDepth) unit_0060(c, 212u, depth + 1u); else { c.pc = 0x002A1CC0u; return; } if (c.pc != 0x0028E0F4u) [[unlikely]] return; }
L_0028E0F4:
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E100u); set32(c.r[4], ld32((c.r[17].w[0] + 132u)));  if (depth < kMaxDepth) unit_006B(c, 44u, depth + 1u); else { c.pc = 0x002CC700u; return; } if (c.pc != 0x0028E100u) [[unlikely]] return; }
L_0028E100:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E10Cu); set32(c.r[4], ld32((c.r[17].w[0] + 140u)));  if (depth < kMaxDepth) unit_005E(c, 379u, depth + 1u); else { c.pc = 0x0029BF60u; return; } if (c.pc != 0x0028E10Cu) [[unlikely]] return; }
L_0028E10C:
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E118u); set32(c.r[4], ld32((c.r[17].w[0] + 144u)));  if (depth < kMaxDepth) unit_0067(c, 81u, depth + 1u); else { c.pc = 0x002BCA80u; return; } if (c.pc != 0x0028E118u) [[unlikely]] return; }
L_0028E118:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028E130:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[18], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028E16C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E3C8; } }
L_0028E16C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 524u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E198; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E190u); set32(c.r[4], c.r[4].w[0] - 1904u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0028E190u) [[unlikely]] return; }
L_0028E190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E3C8; } }
L_0028E198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E1A0u);  if (depth < kMaxDepth) unit_005B(c, 235u, depth + 1u); else { c.pc = 0x0028E3F0u; return; } if (c.pc != 0x0028E1A0u) [[unlikely]] return; }
L_0028E1A0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 524u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 448u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 448u)));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(100ll) ? 1ull : 0ull;
    c.budget -= 13;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_0028E1F4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 99u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E1E4u); set32(c.r[4], c.r[4].w[0] - 1840u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0028E1E4u) [[unlikely]] return; }
L_0028E1E4:
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[3], 0u + 99u);
    st32((c.r[2].w[0] + 448u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
L_0028E1F4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E200u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0028E200u) [[unlikely]] return; }
L_0028E200:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028E214; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_0028E228; } }
L_0028E214:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_0028E228; }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_0028E228:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028E250; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0028E24C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E24Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0028E24Cu) [[unlikely]] return; }
L_0028E24C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028E250:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 72u)));  goto L_0028E274; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E270; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u + 99u);
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 3;
L_0028E270:
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    c.budget -= 1;
L_0028E274:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 848u), 0u);  if (t) { goto L_0028E38C; } }
L_0028E280:
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 524u)));  if (t) { goto L_0028E2B8; } }
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_0028E2D0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 1);  goto L_0028E2C4; }
L_0028E2B8:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E2D0; } }
L_0028E2C4:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[8], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_0028E2D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[8].w[0] + 20u)));  if (t) { goto L_0028E300; } }
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0028E304; } }
L_0028E300:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028E304:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[9], 0u + 1u);  goto L_0028E314; }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028E314:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0028E320; } }
    set32(c.r[5], c.r[19].w[0] + 52u);
    c.budget -= 1;
L_0028E320:
    set32(c.r[4], ld32((c.r[19].w[0] + 120u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E334u); set32(c.r[16], c.r[17].w[0] << 2);  if (depth < kMaxDepth) unit_0083(c, 96u, depth + 1u); else { c.pc = 0x0032CD80u; return; } if (c.pc != 0x0028E334u) [[unlikely]] return; }
L_0028E334:
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[2], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0028E3BC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E3B8; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 848u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 452u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 848u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 848u), c.r[2].w[0]);
    c.budget -= 9;
L_0028E38C:
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 448u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E280u | kUnwind; return; } goto L_0028E280; }
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0028E3C8; } }
L_0028E3B8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0028E3BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E3C4u);  if (depth < kMaxDepth) unit_005B(c, 235u, depth + 1u); else { c.pc = 0x0028E3F0u; return; } if (c.pc != 0x0028E3C4u) [[unlikely]] return; }
L_0028E3C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028E3C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0028E3F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 644u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028E434; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E424u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0028E424u) [[unlikely]] return; }
L_0028E424:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));  goto L_0028E438; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E434u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 249u, depth + 1u); else { c.pc = 0x002F3A40u; return; } if (c.pc != 0x0028E434u) [[unlikely]] return; }
L_0028E434:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 1;
L_0028E438:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));  goto L_0028E44C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 644u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
L_0028E44C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 72u)));  goto L_0028E460; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 648u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
L_0028E460:
    set32(c.r[2], ld32((c.r[2].w[0] + 448u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 72u)));  goto L_0028E4B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] - 1u);  if (t) { goto L_0028E4A8; } }
L_0028E474:
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] - 1u);  goto L_0028E4A8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E498u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E498u) [[unlikely]] return; }
L_0028E498:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 52u), 0u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
L_0028E4A8:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E474u | kUnwind; return; } goto L_0028E474; }
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_0028E4B4:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 396u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E4C4u); set32(c.r[4], c.r[2].w[0] + 52u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0028E4C4u) [[unlikely]] return; }
L_0028E4C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 396u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E4D8u); set32(c.r[4], c.r[2].w[0] + 452u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0028E4D8u) [[unlikely]] return; }
L_0028E4D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[4].w[0] + 448u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    st32((c.r[4].w[0] + 848u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    st32((c.r[4].w[0] + 3312u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    st32((c.r[4].w[0] + 13260u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    st32((c.r[4].w[0] + 1248u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    st32((c.r[4].w[0] + 2912u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    st32((c.r[4].w[0] + 3320u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    st32((c.r[4].w[0] + 13364u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    st32((c.r[4].w[0] + 13368u), 0u);
    st32((c.r[17].w[0] + 80u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028E560:
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[5], c.r[3].w[0] + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028E590; } }
    st32((c.r[5].w[0]), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    st32((c.r[3].w[0] + 3312u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    st32((c.r[3].w[0] + 2912u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    st32((c.r[3].w[0] + 3320u), 0u);
    c.budget -= 7;
L_0028E590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028E5A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[3], c.r[7].w[0] + 452u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0028E5E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E5D8u); set32(c.r[4], c.r[4].w[0] - 1776u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0028E5D8u) [[unlikely]] return; }
L_0028E5D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0028E74C; } }
L_0028E5E0:
    set32(c.r[6], ld32((c.r[7].w[0] + 448u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028E60C; } }
L_0028E5F0:
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 5;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_0028E60C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028E618; } }
L_0028E60C:
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E5F0u | kUnwind; return; } goto L_0028E5F0; }
L_0028E618:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 172u)));  goto L_0028E634; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E62Cu); set32(c.r[4], c.r[4].w[0] - 1712u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0028E62Cu) [[unlikely]] return; }
L_0028E62C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E748; } }
L_0028E634:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1180u)));  goto L_0028E658; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E64Cu); set32(c.r[4], c.r[4].w[0] - 1648u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0028E64Cu) [[unlikely]] return; }
L_0028E64C:
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), 0u);  if (t) { goto L_0028E748; } }
L_0028E658:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0028E748; } }
    st32((c.r[7].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_0028E680; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
L_0028E680:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E68Cu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0028E68Cu) [[unlikely]] return; }
L_0028E68C:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028E6A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_0028E6B4; } }
L_0028E6A0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_0028E6B4; }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_0028E6B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_0028E6DC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0028E6D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E6D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0028E6D8u) [[unlikely]] return; }
L_0028E6D8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0028E6DC:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[19].w[0] + 52u)));  goto L_0028E710; }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028E70C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 1296u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E704u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0027AC70u; return; } if (c.pc != 0x0028E704u) [[unlikely]] return; }
L_0028E704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E70Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 301u, depth + 1u); else { c.pc = 0x00266750u; return; } if (c.pc != 0x0028E70Cu) [[unlikely]] return; }
L_0028E70C:
    set32(c.r[25], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 1;
L_0028E710:
    set32(c.r[4], c.r[19].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E720u); set32(c.r[5], 0u + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E720u) [[unlikely]] return; }
L_0028E720:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E72Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 197u, depth + 1u); else { c.pc = 0x00289AE0u; return; } if (c.pc != 0x0028E72Cu) [[unlikely]] return; }
L_0028E72C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E748u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0028E748u) [[unlikely]] return; }
L_0028E748:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0028E74C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0028E770:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    st32((c.r[3].w[0] + 1248u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 848u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0028E860; } }
L_0028E7A8:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 452u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E7BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 230u, depth + 1u); else { c.pc = 0x00289F50u; return; } if (c.pc != 0x0028E7BCu) [[unlikely]] return; }
L_0028E7BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0028E860; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0028E7CC; } }
L_0028E7CC:
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1248u)));
    c.r[1].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 72u)));  goto L_0028E810; }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 852u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E7F8u); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x0028E7F8u) [[unlikely]] return; }
L_0028E7F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 152u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E7CCu | kUnwind; return; } goto L_0028E7CC; }
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_0028E810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 1248u)));  if (t) { goto L_0028E82C; } }
L_0028E818:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 848u)));
    st32((c.r[4].w[0] + 852u), c.r[3].w[0]);
    c.budget -= 5;
L_0028E82C:
    c.r[1].d[0] = c.r[18].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E818u | kUnwind; return; } goto L_0028E818; }
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 852u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1248u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 1248u), c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 10;
L_0028E860:
    c.r[3].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E7A8u | kUnwind; return; } goto L_0028E7A8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0028E890:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E8B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005B(c, 255u, depth + 1u); else { c.pc = 0x0028E770u; return; } if (c.pc != 0x0028E8B8u) [[unlikely]] return; }
L_0028E8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E8C0u); set32(c.r[4], c.r[20].w[0] + 52u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x0028E8C0u) [[unlikely]] return; }
L_0028E8C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[19], 0u + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 3;
L_0028E8CC:
    set32(c.r[21], ld32((c.r[2].w[0] + 1248u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0028EA38; } }
L_0028E8D8:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 852u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E8F0u); set32(c.r[4], c.r[4].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x0028E8F0u) [[unlikely]] return; }
L_0028E8F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0028E938; }
    set32(c.r[25], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[4], c.r[20].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E920u); set32(c.r[5], 0u + 7u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E920u) [[unlikely]] return; }
L_0028E920:
    set32(c.r[25], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[4], c.r[20].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E934u); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028E934u) [[unlikely]] return; }
L_0028E934:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028E938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E940u);  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x0028E940u) [[unlikely]] return; }
L_0028E940:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 21u);  goto L_0028E9BC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E958u); st32((c.r[2].w[0] + 30160u), 0u);  if (depth < kMaxDepth) unit_005A(c, 256u, depth + 1u); else { c.pc = 0x0028A410u; return; } if (c.pc != 0x0028E958u) [[unlikely]] return; }
L_0028E958:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0028E9B0; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 120u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E974u); st16((c.r[17].w[0] + 124u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0063(c, 48u, depth + 1u); else { c.pc = 0x002AC590u; return; } if (c.pc != 0x0028E974u) [[unlikely]] return; }
L_0028E974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028E9B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E984u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 227u, depth + 1u); else { c.pc = 0x00289E70u; return; } if (c.pc != 0x0028E984u) [[unlikely]] return; }
L_0028E984:
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 144u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E9A8u); set32(c.r[4], c.r[4].w[0] - 1584u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x0028E9A8u) [[unlikely]] return; }
L_0028E9A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0028EA38; } }
L_0028E9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E9B8u);  if (depth < kMaxDepth) unit_0063(c, 48u, depth + 1u); else { c.pc = 0x002AC590u; return; } if (c.pc != 0x0028E9B8u) [[unlikely]] return; }
L_0028E9B8:
    set32(c.r[2], 0u + 21u);
    c.budget -= 1;
L_0028E9BC:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0028EA14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E9CCu); set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0028E9CCu) [[unlikely]] return; }
L_0028E9CC:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028EA10; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[4], c.r[3].w[0] + 112u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E9F8u); set32(c.r[5], c.r[2].w[0] + 17233u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0028E9F8u) [[unlikely]] return; }
L_0028E9F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028EA10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EA08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 227u, depth + 1u); else { c.pc = 0x00289E70u; return; } if (c.pc != 0x0028EA08u) [[unlikely]] return; }
L_0028EA08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 152u), c.r[2].w[0]);  if (t) { goto L_0028EA34; } }
L_0028EA10:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0028EA14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EA1Cu);  if (depth < kMaxDepth) unit_005B(c, 255u, depth + 1u); else { c.pc = 0x0028E770u; return; } if (c.pc != 0x0028EA1Cu) [[unlikely]] return; }
L_0028EA1C:
    set32(c.r[5], ld32((c.r[17].w[0] + 144u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EA2Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_005B(c, 243u, depth + 1u); else { c.pc = 0x0028E5A0u; return; } if (c.pc != 0x0028EA2Cu) [[unlikely]] return; }
L_0028EA2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0028EA6C; } }
L_0028EA34:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0028EA38:
    c.r[2].d[0] = c.r[18].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E8D8u | kUnwind; return; } goto L_0028E8D8; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  goto L_0028EA60; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EA58u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 255u, depth + 1u); else { c.pc = 0x0028E770u; return; } if (c.pc != 0x0028EA58u) [[unlikely]] return; }
L_0028EA58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 72u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E8CCu | kUnwind; return; } goto L_0028E8CC; } }
L_0028EA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EA68u); set32(c.r[4], c.r[4].w[0] - 1536u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0028EA68u) [[unlikely]] return; }
L_0028EA68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0028EA6C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0028EA90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 448u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028EAD8; } }
L_0028EABC:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[4].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 7;
L_0028EAD8:
    c.r[3].d[0] = c.r[5].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EABCu | kUnwind; return; } goto L_0028EABC; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u + 1u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[5].w[0] + 112u);
    set32(c.r[5], ld32((c.r[5].w[0] + 116u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 1100u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0028EB30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EB0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x0028EB0Cu) [[unlikely]] return; }
L_0028EB0C:
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 13264u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028EB30; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EB2Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x0028EB2Cu) [[unlikely]] return; }
L_0028EB2C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0028EB30:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u - 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);  if (t) { goto L_0028EC1C; } }
L_0028EB44:
    set32(c.r[9], c.r[6].w[0] << 2);
    set32(c.r[8], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 116u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[8].d[0];  if (t) { goto L_0028EB88; } }
    set32(c.r[8], ld32((c.r[5].w[0] + 176u)));
    c.r[8].d[0] = c.r[8].d[0] & c.r[4].d[0];
    st32((c.r[5].w[0] + 176u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0] + 1320u)));
    c.budget -= 6;
    if (c.r[8].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0028EC1C; }
    set32(c.r[5], ld32((c.r[8].w[0] + 176u)));
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 176u), c.r[5].w[0]);  if (t) { goto L_0028EC18; } }
L_0028EB88:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[18].d[0]) { set32(c.r[8], ld32((c.r[5].w[0] + 176u)));  goto L_0028EB9C; }
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[17].d[0]) { set32(c.r[8], ld32((c.r[5].w[0] + 164u)));  goto L_0028EBA8; }
    set32(c.r[8], ld32((c.r[5].w[0] + 176u)));
    c.budget -= 1;
L_0028EB9C:
    c.r[8].d[0] = c.r[8].d[0] & c.r[4].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 176u), c.r[8].w[0]);  if (t) { goto L_0028EC18; } }
L_0028EBA8:
    c.r[8].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.budget -= 3;
    if (c.r[8].d[0] == 0ull) { set32(c.r[8], ld32((c.r[5].w[0] + 84u)));  goto L_0028EC00; }
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0028EBFC; } }
    set32(c.r[8], ld32((c.r[5].w[0] + 176u)));
    c.r[8].d[0] = c.r[8].d[0] & c.r[4].d[0];
    st32((c.r[5].w[0] + 176u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0] + 1320u)));
    c.budget -= 6;
    if (c.r[8].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0028EC18; }
    set32(c.r[5], ld32((c.r[8].w[0] + 176u)));
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0028EC18; } }
    set32(c.r[5], ld32((c.r[8].w[0] + 176u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 176u), c.r[5].w[0]);  if (t) { goto L_0028EC18; } }
L_0028EBFC:
    set32(c.r[8], ld32((c.r[5].w[0] + 84u)));
    c.budget -= 1;
L_0028EC00:
    c.r[8].d[0] = c.r[8].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0028EC18; } }
    set32(c.r[8], ld32((c.r[5].w[0] + 176u)));
    c.r[8].d[0] = c.r[8].d[0] & c.r[4].d[0];
    st32((c.r[5].w[0] + 176u), c.r[8].w[0]);
    c.budget -= 3;
L_0028EC18:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0028EC1C:
    c.r[5].d[0] = c.r[6].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EB44u | kUnwind; return; } goto L_0028EB44; }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 2u);  if (t) { goto L_0028EC6C; } }
L_0028EC34:
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 1320u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0028EC6C; }
    set32(c.r[3], ld32((c.r[3].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0028EC68; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 3;
L_0028EC68:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0028EC6C:
    c.r[3].d[0] = c.r[6].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EC34u | kUnwind; return; } goto L_0028EC34; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028ECA0:
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[3].w[0] + 448u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u - 2u);  if (t) { goto L_0028ECD0; } }
L_0028ECB4:
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st32((c.r[6].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 7;
L_0028ECD0:
    c.r[3].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028ECB4u | kUnwind; return; } goto L_0028ECB4; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028ECF0:
    c.f[0] = ld32((c.r[28].w[0] - 32692u));
    fpu_compare(c, fp::key(c.f[13]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0028ED20; }
    st32((c.r[4].w[0] + 172u), c.f[12]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 176u), c.f[12]);
    st32((c.r[4].w[0] + 164u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 168u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.f[12]);  if (t) { goto L_0028ED44; } }
L_0028ED20:
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[13]);
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 172u), c.f[1]);
    st32((c.r[4].w[0] + 176u), c.f[12]);
    st32((c.r[4].w[0] + 164u), 0u);
    st32((c.r[4].w[0] + 168u), c.f[0]);
    c.budget -= 9;
L_0028ED44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028ED50:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(99ll) ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 172u), c.r[5].w[0]);  if (t) { goto L_0028EDB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028EFE8; } }
L_0028EDB4:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[23], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[23].w[0] + 84u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0028EDE8; }
    set32(c.r[2], ld32((c.r[23].w[0] + 88u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 4);  goto L_0028EDE4; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028EDE8; } }
L_0028EDE4:
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0028EDE8:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 80u)));  goto L_0028EE08; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EE00u); set32(c.r[4], c.r[4].w[0] - 1488u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0028EE00u) [[unlikely]] return; }
L_0028EE00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028EFE8; } }
L_0028EE08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[30].d[0] = 0ull + 0ull;  goto L_0028EE2C; }
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[30], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_0028EE2C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EE3Cu); set32(c.r[6], 0u + 96u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0028EE3Cu) [[unlikely]] return; }
L_0028EE3C:
    st32((c.r[29].w[0] + 176u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 4;
L_0028EE4C:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 184u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EE4Cu | kUnwind; return; } goto L_0028EE4C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 196u), c.r[18].w[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[29].w[0] + 220u), c.f[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[29].w[0] + 228u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    st32((c.r[29].w[0] + 232u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    st32((c.r[29].w[0] + 236u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 256u), 0u);
    set32(c.r[2], ld32((c.r[30].w[0])));
    c.budget -= 28;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0028EEE0; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028EEE0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028EEFC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EEFCu); set32(c.r[6], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0060(c, 374u, depth + 1u); else { c.pc = 0x002A38B0u; return; } if (c.pc != 0x0028EEFCu) [[unlikely]] return; }
L_0028EEFC:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] >= 0;  if (t) { goto L_0028EF20; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    set32(c.r[22], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 56u);  if (t) { goto L_0028EF20; } }
    set32(c.r[2], c.r[22].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0028EF20:
    set32(c.r[2], ld32((c.r[30].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[9], 0u + 1u);  goto L_0028EF30; }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028EF30:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0028EF3C; } }
    set32(c.r[5], c.r[20].w[0] + 52u);
    c.budget -= 1;
L_0028EF3C:
    set32(c.r[4], ld32((c.r[20].w[0] + 120u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EF50u); set32(c.r[8], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0083(c, 96u, depth + 1u); else { c.pc = 0x0032CD80u; return; } if (c.pc != 0x0028EF50u) [[unlikely]] return; }
L_0028EF50:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 72u)));  goto L_0028EF64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028EFE8; } }
L_0028EF64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 52u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 448u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 848u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 452u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 848u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 848u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    st32((c.r[16].w[0] + 1376u), c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EFBCu); st32((c.r[16].w[0] + 1380u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_005A(c, 227u, depth + 1u); else { c.pc = 0x00289E70u; return; } if (c.pc != 0x0028EFBCu) [[unlikely]] return; }
L_0028EFBC:
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EFCCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 313u, depth + 1u); else { c.pc = 0x0028B330u; return; } if (c.pc != 0x0028EFCCu) [[unlikely]] return; }
L_0028EFCC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0028EFE8; }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 200u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EFE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028EFE4u) [[unlikely]] return; }
L_0028EFE4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028EFE8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_0028F020:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F06Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0028F06Cu) [[unlikely]] return; }
L_0028F06C:
    c.f[0] = ld32((c.r[20].w[0] + 736u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 740u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 744u));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 748u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F094u); st32((c.r[18].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0028F094u) [[unlikely]] return; }
L_0028F094:
    c.f[0] = ld32((c.r[19].w[0] + 736u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 740u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 744u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 748u));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 12u), c.f[0]);  if (t) { goto L_0028F0C0; } }
    c.f[0] = ld32((c.r[20].w[0] + 720u));
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 2;
L_0028F0C0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0028F0D0; } }
    c.f[0] = ld32((c.r[19].w[0] + 720u));
    st32((c.r[21].w[0]), c.f[0]);
    c.budget -= 2;
L_0028F0D0:
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 31436u)));  goto L_0028F0FC; }
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F0F4u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 6u, depth + 1u); else { c.pc = 0x00184080u; return; } if (c.pc != 0x0028F0F4u) [[unlikely]] return; }
L_0028F0F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_0028F200; } }
L_0028F0FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[3], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 156u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0028F124; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30248u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0028F124; }
    set32(c.r[5], ld32((c.r[2].w[0] + 368u)));
    c.budget -= 1;
L_0028F124:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0028F134; }
    set32(c.r[4], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 1;
L_0028F134:
    set32(c.r[6], c.r[29].w[0] + 224u);
    set32(c.r[7], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F144u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 266u, depth + 1u); else { c.pc = 0x002660D0u; return; } if (c.pc != 0x0028F144u) [[unlikely]] return; }
L_0028F144:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F158u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 176u, depth + 1u); else { c.pc = 0x002C2280u; return; } if (c.pc != 0x0028F158u) [[unlikely]] return; }
L_0028F158:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F16Cu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 62u, depth + 1u); else { c.pc = 0x0015C7E0u; return; } if (c.pc != 0x0028F16Cu) [[unlikely]] return; }
L_0028F16C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F180u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 62u, depth + 1u); else { c.pc = 0x0015C7E0u; return; } if (c.pc != 0x0028F180u) [[unlikely]] return; }
L_0028F180:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0028F1B8; } }
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F194u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x0028F194u) [[unlikely]] return; }
L_0028F194:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F1A0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 45u, depth + 1u); else { c.pc = 0x0015C500u; return; } if (c.pc != 0x0028F1A0u) [[unlikely]] return; }
L_0028F1A0:
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 6;
L_0028F1B8:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0028F1F4; }
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F1CCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x0028F1CCu) [[unlikely]] return; }
L_0028F1CC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F1D8u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000F(c, 45u, depth + 1u); else { c.pc = 0x0015C500u; return; } if (c.pc != 0x0028F1D8u) [[unlikely]] return; }
L_0028F1D8:
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[21].w[0]), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
L_0028F1F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F1FCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x0028F1FCu) [[unlikely]] return; }
L_0028F1FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0028F200:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0028F230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F250u); set32(c.r[6], c.r[2].w[0] + 13232u);  if (depth < kMaxDepth) unit_005B(c, 315u, depth + 1u); else { c.pc = 0x0028F290u; return; } if (c.pc != 0x0028F250u) [[unlikely]] return; }
L_0028F250:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[3].w[0] + 13260u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[3].w[0] + 13268u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 13260u)));
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 13272u), 0u);  goto L_0028F278; }
    set32(c.r[3], ld32((c.r[4].w[0] + 13232u)));
    st32((c.r[4].w[0] + 13272u), c.r[3].w[0]);
    c.budget -= 2;
L_0028F278:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028F290:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { const bool t = c.r[20].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0028F2CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F3F8; } }
L_0028F2CC:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_0028F2E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F3F8; } }
L_0028F2E4:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[22], ld32((c.r[3].w[0] + 960u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[2].w[0] + 452u);  if (t) { goto L_0028F3E8; } }
L_0028F2F8:
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[20].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0028F3E8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028F3E4; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1296u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028F3E4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028F3E4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 781ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028F3E4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F35Cu); set32(c.r[5], ld32((c.r[20].w[0] + 148u)));  if (depth < kMaxDepth) unit_005C(c, 255u, depth + 1u); else { c.pc = 0x00292250u; return; } if (c.pc != 0x0028F35Cu) [[unlikely]] return; }
L_0028F35C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_0028F364; } }
L_0028F364:
    c.r[1].d[0] = c.r[11].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[10].d[0] = c.r[18].d[0] + 0ull;  goto L_0028F38C; }
    set32(c.r[3], c.r[11].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[11], c.r[11].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F364u | kUnwind; return; } goto L_0028F364; }
    c.r[10].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0028F38C:
    set32(c.r[9], c.r[29].w[0] + 124u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[19].w[0] - 4u);  if (t) { goto L_0028F3BC; } }
L_0028F398:
    set32(c.r[3], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[7].w[0] + c.r[29].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[3], c.r[8].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0] + 128u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[19].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 9;
L_0028F3BC:
    c.r[1].d[0] = c.r[11].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[7], c.r[10].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F398u | kUnwind; return; } goto L_0028F398; }
    set32(c.r[3], c.r[11].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[5], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 128u), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 7;
L_0028F3E4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0028F3E8:
    c.r[2].d[0] = c.r[17].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F2F8u | kUnwind; return; } goto L_0028F2F8; }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0028F3F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0028F420:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0] + 156u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 160u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F458u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 346u, depth + 1u); else { c.pc = 0x002A3390u; return; } if (c.pc != 0x0028F458u) [[unlikely]] return; }
L_0028F458:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0028F538; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F46Cu); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0028F46Cu) [[unlikely]] return; }
L_0028F46C:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028F534; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], 0u + 1u);  goto L_0028F4B0; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028F4B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F4B8u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_005C(c, 60u, depth + 1u); else { c.pc = 0x00290A70u; return; } if (c.pc != 0x0028F4B8u) [[unlikely]] return; }
L_0028F4B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F4C4u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0028F4C4u) [[unlikely]] return; }
L_0028F4C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 96u), c.r[2].w[0]);  goto L_0028F4E8; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F4E4u); set32(c.r[6], c.r[6].w[0] - 1432u);  if (depth < kMaxDepth) unit_0066(c, 348u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x0028F4E4u) [[unlikely]] return; }
L_0028F4E4:
    st32((c.r[19].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 1;
L_0028F4E8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0028F510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F4F8u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0028F4F8u) [[unlikely]] return; }
L_0028F4F8:
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F508u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 35u, depth + 1u); else { c.pc = 0x002BC4F0u; return; } if (c.pc != 0x0028F508u) [[unlikely]] return; }
L_0028F508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  if (t) { goto L_0028F52C; } }
L_0028F510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F518u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x0028F518u) [[unlikely]] return; }
L_0028F518:
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F528u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 34u, depth + 1u); else { c.pc = 0x002BC4C0u; return; } if (c.pc != 0x0028F528u) [[unlikely]] return; }
L_0028F528:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0028F52C:
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 2;
L_0028F534:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0028F538:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028F550:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 96u)));  goto L_0028F568; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028F590; } }
L_0028F568:
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028F590; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028F590; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028F590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028F5A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 448u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0028F61C; } }
L_0028F5CC:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 5;
    if (c.r[19].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0028F61C; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F5ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 313u, depth + 1u); else { c.pc = 0x0028B330u; return; } if (c.pc != 0x0028F5ECu) [[unlikely]] return; }
L_0028F5EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[19].w[0] + 16u)));  goto L_0028F60C; }
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 200u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F604u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028F604u) [[unlikely]] return; }
L_0028F604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F618; } }
L_0028F60C:
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F618u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028F618u) [[unlikely]] return; }
L_0028F618:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0028F61C:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F5CCu | kUnwind; return; } goto L_0028F5CC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028F650:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 560u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { goto L_0028F714; } }
L_0028F68C:
    set32(c.r[3], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 560u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 2);  goto L_0028F6A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0028F6B0; } }
L_0028F6A8:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 2;
L_0028F6B0:
    set32(c.r[2], ld32((c.r[19].w[0] + 1376u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[25], ld32((c.r[19].w[0] + 16u)));  goto L_0028F6CC; }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
L_0028F6CC:
    set32(c.r[5], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 212u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F6DCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028F6DCu) [[unlikely]] return; }
L_0028F6DC:
    set32(c.r[25], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + 15u);
    set32(c.r[2], 0u - 16u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 220u)));
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F700u); set32(c.r[5], c.r[16].w[0] + c.r[17].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028F700u) [[unlikely]] return; }
L_0028F700:
    set32(c.r[3], c.r[2].w[0] + 15u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[2], 0u - 16u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_0028F714:
    c.r[2].d[0] = c.r[20].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F68Cu | kUnwind; return; } goto L_0028F68C; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0028F750:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0028F760:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[19], c.r[19].w[0] + 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    st32((c.r[2].w[0] + 848u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[30], ld32((c.r[2].w[0] + 448u)));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0028FAC8; } }
L_0028F7B4:
    set32(c.r[3], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 560u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  goto L_0028F7D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0028F7D8; } }
L_0028F7D0:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 2;
L_0028F7D8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0028FAC8; }
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 848u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 452u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 848u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 848u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F810u); set32(c.r[16], c.r[21].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0028F810u) [[unlikely]] return; }
L_0028F810:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 216u)));  goto L_0028F9CC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 216u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0028F904; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 252u)));  if (t) { goto L_0028F860; } }
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[2], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0028F864; } }
L_0028F860:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028F864:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], 0u + 1u);  goto L_0028F874; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028F874:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 248u)));  if (t) { goto L_0028F89C; } }
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0028F8A0; } }
L_0028F89C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028F8A0:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028F8B0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028F8B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0028F900; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 144u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F8C8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_005B(c, 320u, depth + 1u); else { c.pc = 0x0028F420u; return; } if (c.pc != 0x0028F8C8u) [[unlikely]] return; }
L_0028F8C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F8D0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 72u, depth + 1u); else { c.pc = 0x002D0B40u; return; } if (c.pc != 0x0028F8D0u) [[unlikely]] return; }
L_0028F8D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 560u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  goto L_0028F8F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0028F8F8; } }
L_0028F8F0:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 2;
L_0028F8F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F9C8; } }
L_0028F900:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0028F904:
    set32(c.r[7], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 248u)));  if (t) { goto L_0028F930; } }
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[2], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0028F934; } }
L_0028F930:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028F934:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], 0u + 1u);  goto L_0028F944; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028F944:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 1296u)));  if (t) { goto L_0028F96C; } }
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0028F970; } }
L_0028F96C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028F970:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028F980; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028F980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0028F9C8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 144u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F998u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_005B(c, 320u, depth + 1u); else { c.pc = 0x0028F420u; return; } if (c.pc != 0x0028F998u) [[unlikely]] return; }
L_0028F998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F9A0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 72u, depth + 1u); else { c.pc = 0x002D0B40u; return; } if (c.pc != 0x0028F9A0u) [[unlikely]] return; }
L_0028F9A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 560u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  goto L_0028F9C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0028F9C8; } }
L_0028F9C0:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 2;
L_0028F9C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 1;
L_0028F9CC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 16u)));  goto L_0028FA54; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F9E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005B(c, 86u, depth + 1u); else { c.pc = 0x0028CF70u; return; } if (c.pc != 0x0028F9E4u) [[unlikely]] return; }
L_0028F9E4:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[22].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_0028FA44; }
    set32(c.r[23], ld32((c.r[22].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F9FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x0028F9FCu) [[unlikely]] return; }
L_0028F9FC:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FA14u); set32(c.r[8], 0u + 6u);  if (depth < kMaxDepth) unit_0057(c, 209u, depth + 1u); else { c.pc = 0x0027E360u; return; } if (c.pc != 0x0028FA14u) [[unlikely]] return; }
L_0028FA14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FA28u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x0028FA28u) [[unlikely]] return; }
L_0028FA28:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0028FA40; } }
    set32(c.r[25], ld32((c.r[22].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FA40u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028FA40u) [[unlikely]] return; }
L_0028FA40:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0028FA44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
L_0028FA54:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 216u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FA64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028FA64u) [[unlikely]] return; }
L_0028FA64:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + 15u);
    set32(c.r[2], 0u - 16u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 224u)));
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FA88u); set32(c.r[5], c.r[21].w[0] + c.r[16].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028FA88u) [[unlikely]] return; }
L_0028FA88:
    set32(c.r[3], c.r[2].w[0] + 15u);
    set32(c.r[2], 0u - 16u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_0028FABC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FAACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 19u, depth + 1u); else { c.pc = 0x002A81E0u; return; } if (c.pc != 0x0028FAACu) [[unlikely]] return; }
L_0028FAAC:
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 848u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 848u), c.r[2].w[0]);
    c.budget -= 4;
L_0028FABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FAC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x0028FAC4u) [[unlikely]] return; }
L_0028FAC4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0028FAC8:
    c.r[2].d[0] = c.r[18].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F7B4u | kUnwind; return; } goto L_0028F7B4; }
    c.r[22].d[0] = ld8((c.r[21].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0028FB60; } }
L_0028FAE0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 260u)));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 248u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FB00u); set32(c.r[9], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_005B(c, 291u, depth + 1u); else { c.pc = 0x0028ED50u; return; } if (c.pc != 0x0028FB00u) [[unlikely]] return; }
L_0028FB00:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0028FB60; }
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 216u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FB20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028FB20u) [[unlikely]] return; }
L_0028FB20:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + 15u);
    set32(c.r[2], 0u - 16u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 224u)));
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FB44u); set32(c.r[5], c.r[21].w[0] + c.r[16].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028FB44u) [[unlikely]] return; }
L_0028FB44:
    set32(c.r[3], c.r[2].w[0] + 15u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], 0u - 16u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FB5Cu); set32(c.r[19], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x0028FB5Cu) [[unlikely]] return; }
L_0028FB5C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0028FB60:
    c.r[2].d[0] = c.r[18].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[21].w[0] + c.r[19].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FAE0u | kUnwind; return; } goto L_0028FAE0; }
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 448u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0028FBC4; } }
L_0028FB7C:
    set32(c.r[3], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 560u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  goto L_0028FB98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0028FBA0; } }
L_0028FB98:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 2;
L_0028FBA0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0028FBC4; }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FBC0u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0028FBC0u) [[unlikely]] return; }
L_0028FBC0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0028FBC4:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FB7Cu | kUnwind; return; } goto L_0028FB7C; }
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0028FC10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0028FC20:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 13;
L_0028FC54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));  goto L_0028FC78; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028FC74; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], c.r[4].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 4;
L_0028FC74:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 1;
L_0028FC78:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0028FC9C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028FC98; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], c.r[4].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 4;
L_0028FC98:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0028FC9C:
    c.r[2].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FC54u | kUnwind; return; } goto L_0028FC54; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0028FCC0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 16u), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
L_0028FCC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FCC8u);  if (depth < kMaxDepth) unit_005B(c, 255u, depth + 1u); else { c.pc = 0x0028E770u; return; } if (c.pc != 0x0028FCC8u) [[unlikely]] return; }
L_0028FCC8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 1248u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 468u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[2].w[0] + 852u);  if (t) { goto L_0028FD6C; } }
L_0028FCE8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FCFCu); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x0028FCFCu) [[unlikely]] return; }
L_0028FCFC:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FD10u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 219u, depth + 1u); else { c.pc = 0x00291E60u; return; } if (c.pc != 0x0028FD10u) [[unlikely]] return; }
L_0028FD10:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 138u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FD24u); set32(c.r[22], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 8u, depth + 1u); else { c.pc = 0x0028C0A0u; return; } if (c.pc != 0x0028FD24u) [[unlikely]] return; }
L_0028FD24:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[23].w[0] + c.r[22].w[0]);
    set32(c.r[22], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 3u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FD44u); set32(c.r[23], c.r[2].w[0] + 468u);  if (depth < kMaxDepth) unit_006A(c, 58u, depth + 1u); else { c.pc = 0x002C8900u; return; } if (c.pc != 0x0028FD44u) [[unlikely]] return; }
L_0028FD44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FD4Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x0028FD4Cu) [[unlikely]] return; }
L_0028FD4C:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[22].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[17].w[0] + 152u), c.r[2].w[0]);  if (t) { goto L_0028FD68; } }
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0028FD68:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0028FD6C:
    c.r[2].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FCE8u | kUnwind; return; } goto L_0028FCE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));  if (t) { goto L_0028FD98; } }
L_0028FD80:
    set32(c.r[19], c.r[19].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FD94u); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028FD94u) [[unlikely]] return; }
L_0028FD94:
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 1;
L_0028FD98:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[25], ld32((c.r[20].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FD80u | kUnwind; return; } goto L_0028FD80; }
    set32(c.r[17], c.r[19].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_0028FDB8; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028FDB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0028FDE4; } }
L_0028FDC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FDD4u); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x0028FDD4u) [[unlikely]] return; }
L_0028FDD4:
    set32(c.r[3], ld32((c.r[2].w[0] + 152u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    st32((c.r[2].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 4;
L_0028FDE4:
    c.r[2].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FDC0u | kUnwind; return; } goto L_0028FDC0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[20].w[0] + 52u);  goto L_0028FE10; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 52u);
    c.budget -= 5;
L_0028FE10:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FE1Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x0028FE1Cu) [[unlikely]] return; }
L_0028FE1C:
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 3u);  goto L_0028FE6C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1248u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028FFAC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 5000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FE4Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0028FE4Cu) [[unlikely]] return; }
L_0028FE4C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FE64u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0028FE64u) [[unlikely]] return; }
L_0028FE64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028FFAC; } }
L_0028FE6C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 16u);  goto L_0028FEA8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 30000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FE88u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0028FE88u) [[unlikely]] return; }
L_0028FE88:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FEA0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0028FEA0u) [[unlikely]] return; }
L_0028FEA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028FFAC; } }
L_0028FEA8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 21u);  goto L_0028FEE4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 20025u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FEC4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0028FEC4u) [[unlikely]] return; }
L_0028FEC4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FEDCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0028FEDCu) [[unlikely]] return; }
L_0028FEDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028FFAC; } }
L_0028FEE4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 22u);  goto L_0028FF14; }
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 1248u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028FFAC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 852u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FF0Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x0028FF0Cu) [[unlikely]] return; }
L_0028FF0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028FFAC; } }
L_0028FF14:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 23u);  goto L_0028FF38; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[5].d[0] = 0ull | 50001ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FF30u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0028FF30u) [[unlikely]] return; }
L_0028FF30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028FFAC; } }
L_0028FF38:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 25u);  goto L_0028FF5C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FF54u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0028FF54u) [[unlikely]] return; }
L_0028FF54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028FFAC; } }
L_0028FF5C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0028FF98; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 10025u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FF78u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0028FF78u) [[unlikely]] return; }
L_0028FF78:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FF90u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0028FF90u) [[unlikely]] return; }
L_0028FF90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028FFAC; } }
L_0028FF98:
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FFA8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0028FFA8u) [[unlikely]] return; }
L_0028FFA8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0028FFAC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0028FFB8; } }
    st32((c.r[17].w[0] + 152u), 0u);
    c.budget -= 1;
L_0028FFB8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0028FFC8; }
    st32((c.r[16].w[0] + 152u), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_0028FFC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FFD0u);  if (depth < kMaxDepth) unit_005B(c, 255u, depth + 1u); else { c.pc = 0x0028E770u; return; } if (c.pc != 0x0028FFD0u) [[unlikely]] return; }
L_0028FFD0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  [[clang::musttail]] return unit_005C(c, 2u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FFE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0028C760u; return; } if (c.pc != 0x0028FFE0u) [[unlikely]] return; }
L_0028FFE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 144u)));  goto L_0028FFF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FFF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 48u, depth + 1u); else { c.pc = 0x002AC590u; return; } if (c.pc != 0x0028FFF0u) [[unlikely]] return; }
L_0028FFF0:
    set32(c.r[5], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 1;
L_0028FFF4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290000u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 243u, depth + 1u); else { c.pc = 0x0028E5A0u; return; } if (c.pc != 0x00290000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_005C(c, 1u, depth);
}

}
