#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_004B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0,
    0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0,
    0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 0, 0,
    93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104,
    0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 107, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0,
    149, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0,
    0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0,
    0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0,
    0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 233, 0, 234, 0, 0,
    0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0,
    241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265,
    0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0,
    0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0,
    0, 276, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0,
    0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0,
    296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317,
    0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0,
    0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0,
    336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 345, 0, 346, 0, 347, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0,
    353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0,
    0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0,
    0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 369, 0, 370, 0, 0, 0, 0, 371, 0, 0,
    0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376,
    0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0,
    0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    388, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 392, 0, 393, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 401, 0, 402, 0, 403, 0, 404, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 409,
    0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 421, 0, 0,
    0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 432, 0,
    0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_004B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0024C000;
    case 2u: goto L_0024C0AC;
    case 3u: goto L_0024C0C0;
    case 4u: goto L_0024C0CC;
    case 5u: goto L_0024C0DC;
    case 6u: goto L_0024C100;
    case 7u: goto L_0024C1C8;
    case 8u: goto L_0024C1F4;
    case 9u: goto L_0024C220;
    case 10u: goto L_0024C234;
    case 11u: goto L_0024C24C;
    case 12u: goto L_0024C278;
    case 13u: goto L_0024C2C0;
    case 14u: goto L_0024C2E8;
    case 15u: goto L_0024C310;
    case 16u: goto L_0024C340;
    case 17u: goto L_0024C358;
    case 18u: goto L_0024C378;
    case 19u: goto L_0024C398;
    case 20u: goto L_0024C3B4;
    case 21u: goto L_0024C3D0;
    case 22u: goto L_0024C40C;
    case 23u: goto L_0024C418;
    case 24u: goto L_0024C42C;
    case 25u: goto L_0024C4C8;
    case 26u: goto L_0024C4DC;
    case 27u: goto L_0024C4F8;
    case 28u: goto L_0024C588;
    case 29u: goto L_0024C5C8;
    case 30u: goto L_0024C5E0;
    case 31u: goto L_0024C5FC;
    case 32u: goto L_0024C620;
    case 33u: goto L_0024C654;
    case 34u: goto L_0024C664;
    case 35u: goto L_0024C68C;
    case 36u: goto L_0024C6B4;
    case 37u: goto L_0024C6E0;
    case 38u: goto L_0024C710;
    case 39u: goto L_0024C73C;
    case 40u: goto L_0024C748;
    case 41u: goto L_0024C780;
    case 42u: goto L_0024C7A4;
    case 43u: goto L_0024C8BC;
    case 44u: goto L_0024C8D8;
    case 45u: goto L_0024C8F8;
    case 46u: goto L_0024C904;
    case 47u: goto L_0024C914;
    case 48u: goto L_0024C9AC;
    case 49u: goto L_0024C9E0;
    case 50u: goto L_0024CA00;
    case 51u: goto L_0024CA08;
    case 52u: goto L_0024CA1C;
    case 53u: goto L_0024CA2C;
    case 54u: goto L_0024CAC4;
    case 55u: goto L_0024CAF0;
    case 56u: goto L_0024CB58;
    case 57u: goto L_0024CB74;
    case 58u: goto L_0024CBB0;
    case 59u: goto L_0024CBC4;
    case 60u: goto L_0024CBDC;
    case 61u: goto L_0024CC0C;
    case 62u: goto L_0024CC40;
    case 63u: goto L_0024CC54;
    case 64u: goto L_0024CC64;
    case 65u: goto L_0024CC80;
    case 66u: goto L_0024CCA4;
    case 67u: goto L_0024CCD0;
    case 68u: goto L_0024CD1C;
    case 69u: goto L_0024CD30;
    case 70u: goto L_0024CD40;
    case 71u: goto L_0024CD58;
    case 72u: goto L_0024CD74;
    case 73u: goto L_0024CD84;
    case 74u: goto L_0024CDB4;
    case 75u: goto L_0024CDC4;
    case 76u: goto L_0024CDE0;
    case 77u: goto L_0024CE14;
    case 78u: goto L_0024CE20;
    case 79u: goto L_0024CE38;
    case 80u: goto L_0024CE50;
    case 81u: goto L_0024CE58;
    case 82u: goto L_0024CE84;
    case 83u: goto L_0024CE8C;
    case 84u: goto L_0024CE94;
    case 85u: goto L_0024CE9C;
    case 86u: goto L_0024CED8;
    case 87u: goto L_0024CEE8;
    case 88u: goto L_0024CF18;
    case 89u: goto L_0024CF20;
    case 90u: goto L_0024CF5C;
    case 91u: goto L_0024CF64;
    case 92u: goto L_0024CF70;
    case 93u: goto L_0024CF80;
    case 94u: goto L_0024CF90;
    case 95u: goto L_0024CFA0;
    case 96u: goto L_0024CFB8;
    case 97u: goto L_0024CFD8;
    case 98u: goto L_0024CFF0;
    case 99u: goto L_0024D044;
    case 100u: goto L_0024D064;
    case 101u: goto L_0024D090;
    case 102u: goto L_0024D0A0;
    case 103u: goto L_0024D0C8;
    case 104u: goto L_0024D0FC;
    case 105u: goto L_0024D114;
    case 106u: goto L_0024D11C;
    case 107u: goto L_0024D138;
    case 108u: goto L_0024D13C;
    case 109u: goto L_0024D1A4;
    case 110u: goto L_0024D1CC;
    case 111u: goto L_0024D1F0;
    case 112u: goto L_0024D210;
    case 113u: goto L_0024D228;
    case 114u: goto L_0024D23C;
    case 115u: goto L_0024D258;
    case 116u: goto L_0024D270;
    case 117u: goto L_0024D29C;
    case 118u: goto L_0024D2A8;
    case 119u: goto L_0024D2C0;
    case 120u: goto L_0024D2E0;
    case 121u: goto L_0024D300;
    case 122u: goto L_0024D32C;
    case 123u: goto L_0024D34C;
    case 124u: goto L_0024D36C;
    case 125u: goto L_0024D37C;
    case 126u: goto L_0024D390;
    case 127u: goto L_0024D3B0;
    case 128u: goto L_0024D3E0;
    case 129u: goto L_0024D408;
    case 130u: goto L_0024D424;
    case 131u: goto L_0024D444;
    case 132u: goto L_0024D480;
    case 133u: goto L_0024D490;
    case 134u: goto L_0024D4A4;
    case 135u: goto L_0024D4B8;
    case 136u: goto L_0024D4CC;
    case 137u: goto L_0024D4E0;
    case 138u: goto L_0024D500;
    case 139u: goto L_0024D510;
    case 140u: goto L_0024D55C;
    case 141u: goto L_0024D5A8;
    case 142u: goto L_0024D5F4;
    case 143u: goto L_0024D624;
    case 144u: goto L_0024D650;
    case 145u: goto L_0024D674;
    case 146u: goto L_0024D690;
    case 147u: goto L_0024D6E8;
    case 148u: goto L_0024D6F8;
    case 149u: goto L_0024D700;
    case 150u: goto L_0024D70C;
    case 151u: goto L_0024D71C;
    case 152u: goto L_0024D724;
    case 153u: goto L_0024D72C;
    case 154u: goto L_0024D75C;
    case 155u: goto L_0024D7B8;
    case 156u: goto L_0024D7D4;
    case 157u: goto L_0024D7EC;
    case 158u: goto L_0024D808;
    case 159u: goto L_0024D824;
    case 160u: goto L_0024D844;
    case 161u: goto L_0024D854;
    case 162u: goto L_0024D878;
    case 163u: goto L_0024D890;
    case 164u: goto L_0024D8A8;
    case 165u: goto L_0024D8C4;
    case 166u: goto L_0024D8E4;
    case 167u: goto L_0024D8F4;
    case 168u: goto L_0024D918;
    case 169u: goto L_0024D930;
    case 170u: goto L_0024D970;
    case 171u: goto L_0024D978;
    case 172u: goto L_0024D98C;
    case 173u: goto L_0024D9AC;
    case 174u: goto L_0024D9B4;
    case 175u: goto L_0024D9D8;
    case 176u: goto L_0024D9F4;
    case 177u: goto L_0024DA10;
    case 178u: goto L_0024DA24;
    case 179u: goto L_0024DA2C;
    case 180u: goto L_0024DA38;
    case 181u: goto L_0024DA50;
    case 182u: goto L_0024DAF4;
    case 183u: goto L_0024DB2C;
    case 184u: goto L_0024DB50;
    case 185u: goto L_0024DB74;
    case 186u: goto L_0024DB94;
    case 187u: goto L_0024DBA8;
    case 188u: goto L_0024DBDC;
    case 189u: goto L_0024DC24;
    case 190u: goto L_0024DCD0;
    case 191u: goto L_0024DCE0;
    case 192u: goto L_0024DD14;
    case 193u: goto L_0024DD90;
    case 194u: goto L_0024DD98;
    case 195u: goto L_0024DDDC;
    case 196u: goto L_0024DE20;
    case 197u: goto L_0024DE50;
    case 198u: goto L_0024DE84;
    case 199u: goto L_0024DE94;
    case 200u: goto L_0024DED8;
    case 201u: goto L_0024DF34;
    case 202u: goto L_0024DF58;
    case 203u: goto L_0024DFA0;
    case 204u: goto L_0024DFB0;
    case 205u: goto L_0024DFC0;
    case 206u: goto L_0024E040;
    case 207u: goto L_0024E058;
    case 208u: goto L_0024E060;
    case 209u: goto L_0024E0A0;
    case 210u: goto L_0024E0A8;
    case 211u: goto L_0024E0B8;
    case 212u: goto L_0024E0C0;
    case 213u: goto L_0024E134;
    case 214u: goto L_0024E144;
    case 215u: goto L_0024E164;
    case 216u: goto L_0024E17C;
    case 217u: goto L_0024E1FC;
    case 218u: goto L_0024E224;
    case 219u: goto L_0024E250;
    case 220u: goto L_0024E274;
    case 221u: goto L_0024E288;
    case 222u: goto L_0024E300;
    case 223u: goto L_0024E33C;
    case 224u: goto L_0024E35C;
    case 225u: goto L_0024E374;
    case 226u: goto L_0024E38C;
    case 227u: goto L_0024E39C;
    case 228u: goto L_0024E3B4;
    case 229u: goto L_0024E3D0;
    case 230u: goto L_0024E444;
    case 231u: goto L_0024E454;
    case 232u: goto L_0024E464;
    case 233u: goto L_0024E46C;
    case 234u: goto L_0024E474;
    case 235u: goto L_0024E498;
    case 236u: goto L_0024E4B8;
    case 237u: goto L_0024E4C4;
    case 238u: goto L_0024E4D0;
    case 239u: goto L_0024E4E0;
    case 240u: goto L_0024E4F8;
    case 241u: goto L_0024E500;
    case 242u: goto L_0024E510;
    case 243u: goto L_0024E550;
    case 244u: goto L_0024E570;
    case 245u: goto L_0024E590;
    case 246u: goto L_0024E5B4;
    case 247u: goto L_0024E5CC;
    case 248u: goto L_0024E5E0;
    case 249u: goto L_0024E618;
    case 250u: goto L_0024E634;
    case 251u: goto L_0024E650;
    case 252u: goto L_0024E69C;
    case 253u: goto L_0024E6B8;
    case 254u: goto L_0024E6C4;
    case 255u: goto L_0024E6D0;
    case 256u: goto L_0024E6E0;
    case 257u: goto L_0024E6F4;
    case 258u: goto L_0024E724;
    case 259u: goto L_0024E750;
    case 260u: goto L_0024E770;
    case 261u: goto L_0024E7B0;
    case 262u: goto L_0024E7B8;
    case 263u: goto L_0024E7C0;
    case 264u: goto L_0024E7C8;
    case 265u: goto L_0024E7FC;
    case 266u: goto L_0024E814;
    case 267u: goto L_0024E82C;
    case 268u: goto L_0024E834;
    case 269u: goto L_0024E850;
    case 270u: goto L_0024E874;
    case 271u: goto L_0024E890;
    case 272u: goto L_0024E8A8;
    case 273u: goto L_0024E8B0;
    case 274u: goto L_0024E8CC;
    case 275u: goto L_0024E8F0;
    case 276u: goto L_0024E904;
    case 277u: goto L_0024E918;
    case 278u: goto L_0024E924;
    case 279u: goto L_0024E940;
    case 280u: goto L_0024E95C;
    case 281u: goto L_0024E980;
    case 282u: goto L_0024E9A4;
    case 283u: goto L_0024E9C8;
    case 284u: goto L_0024E9E0;
    case 285u: goto L_0024E9F8;
    case 286u: goto L_0024EA1C;
    case 287u: goto L_0024EA38;
    case 288u: goto L_0024EA64;
    case 289u: goto L_0024EAC0;
    case 290u: goto L_0024EAF0;
    case 291u: goto L_0024EB18;
    case 292u: goto L_0024EB2C;
    case 293u: goto L_0024EB40;
    case 294u: goto L_0024EB58;
    case 295u: goto L_0024EB6C;
    case 296u: goto L_0024EB80;
    case 297u: goto L_0024EB98;
    case 298u: goto L_0024EBAC;
    case 299u: goto L_0024EBC0;
    case 300u: goto L_0024EBD8;
    case 301u: goto L_0024EBEC;
    case 302u: goto L_0024EC00;
    case 303u: goto L_0024EC18;
    case 304u: goto L_0024EC2C;
    case 305u: goto L_0024EC40;
    case 306u: goto L_0024EC58;
    case 307u: goto L_0024EC6C;
    case 308u: goto L_0024EC80;
    case 309u: goto L_0024EC98;
    case 310u: goto L_0024ECA0;
    case 311u: goto L_0024ECC4;
    case 312u: goto L_0024ECE0;
    case 313u: goto L_0024ED08;
    case 314u: goto L_0024ED30;
    case 315u: goto L_0024ED4C;
    case 316u: goto L_0024ED60;
    case 317u: goto L_0024ED7C;
    case 318u: goto L_0024EDA0;
    case 319u: goto L_0024EDB8;
    case 320u: goto L_0024EDCC;
    case 321u: goto L_0024EDE0;
    case 322u: goto L_0024EDF8;
    case 323u: goto L_0024EE0C;
    case 324u: goto L_0024EE20;
    case 325u: goto L_0024EE38;
    case 326u: goto L_0024EE4C;
    case 327u: goto L_0024EE60;
    case 328u: goto L_0024EE98;
    case 329u: goto L_0024EEC8;
    case 330u: goto L_0024EEF8;
    case 331u: goto L_0024EF28;
    case 332u: goto L_0024EF78;
    case 333u: goto L_0024EFA0;
    case 334u: goto L_0024EFB4;
    case 335u: goto L_0024EFE0;
    case 336u: goto L_0024F000;
    case 337u: goto L_0024F038;
    case 338u: goto L_0024F080;
    case 339u: goto L_0024F0C8;
    case 340u: goto L_0024F110;
    case 341u: goto L_0024F168;
    case 342u: goto L_0024F190;
    case 343u: goto L_0024F1A4;
    case 344u: goto L_0024F1D0;
    case 345u: goto L_0024F208;
    case 346u: goto L_0024F210;
    case 347u: goto L_0024F218;
    case 348u: goto L_0024F220;
    case 349u: goto L_0024F230;
    case 350u: goto L_0024F248;
    case 351u: goto L_0024F254;
    case 352u: goto L_0024F274;
    case 353u: goto L_0024F280;
    case 354u: goto L_0024F2A4;
    case 355u: goto L_0024F2C8;
    case 356u: goto L_0024F2EC;
    case 357u: goto L_0024F308;
    case 358u: goto L_0024F328;
    case 359u: goto L_0024F34C;
    case 360u: goto L_0024F374;
    case 361u: goto L_0024F398;
    case 362u: goto L_0024F3A8;
    case 363u: goto L_0024F3C0;
    case 364u: goto L_0024F3D0;
    case 365u: goto L_0024F3DC;
    case 366u: goto L_0024F410;
    case 367u: goto L_0024F448;
    case 368u: goto L_0024F450;
    case 369u: goto L_0024F458;
    case 370u: goto L_0024F460;
    case 371u: goto L_0024F474;
    case 372u: goto L_0024F48C;
    case 373u: goto L_0024F498;
    case 374u: goto L_0024F4C4;
    case 375u: goto L_0024F4D4;
    case 376u: goto L_0024F4FC;
    case 377u: goto L_0024F508;
    case 378u: goto L_0024F52C;
    case 379u: goto L_0024F550;
    case 380u: goto L_0024F574;
    case 381u: goto L_0024F590;
    case 382u: goto L_0024F5B0;
    case 383u: goto L_0024F5D8;
    case 384u: goto L_0024F600;
    case 385u: goto L_0024F644;
    case 386u: goto L_0024F670;
    case 387u: goto L_0024F6C8;
    case 388u: goto L_0024F700;
    case 389u: goto L_0024F71C;
    case 390u: goto L_0024F724;
    case 391u: goto L_0024F760;
    case 392u: goto L_0024F78C;
    case 393u: goto L_0024F794;
    case 394u: goto L_0024F79C;
    case 395u: goto L_0024F7AC;
    case 396u: goto L_0024F7C4;
    case 397u: goto L_0024F7D0;
    case 398u: goto L_0024F7F8;
    case 399u: goto L_0024F820;
    case 400u: goto L_0024F860;
    case 401u: goto L_0024F890;
    case 402u: goto L_0024F898;
    case 403u: goto L_0024F8A0;
    case 404u: goto L_0024F8A8;
    case 405u: goto L_0024F8B0;
    case 406u: goto L_0024F8C0;
    case 407u: goto L_0024F8D8;
    case 408u: goto L_0024F8E4;
    case 409u: goto L_0024F8FC;
    case 410u: goto L_0024F908;
    case 411u: goto L_0024F920;
    case 412u: goto L_0024F92C;
    case 413u: goto L_0024F950;
    case 414u: goto L_0024F970;
    case 415u: goto L_0024F99C;
    case 416u: goto L_0024F9B4;
    case 417u: goto L_0024F9CC;
    case 418u: goto L_0024FA10;
    case 419u: goto L_0024FA58;
    case 420u: goto L_0024FA68;
    case 421u: goto L_0024FA74;
    case 422u: goto L_0024FA88;
    case 423u: goto L_0024FA94;
    case 424u: goto L_0024FAA8;
    case 425u: goto L_0024FAB4;
    case 426u: goto L_0024FAC8;
    case 427u: goto L_0024FAD4;
    case 428u: goto L_0024FB2C;
    case 429u: goto L_0024FB38;
    case 430u: goto L_0024FB5C;
    case 431u: goto L_0024FB6C;
    case 432u: goto L_0024FB78;
    case 433u: goto L_0024FB9C;
    case 434u: goto L_0024FBB0;
    case 435u: goto L_0024FBBC;
    case 436u: goto L_0024FBE0;
    case 437u: goto L_0024FC3C;
    case 438u: goto L_0024FC74;
    case 439u: goto L_0024FCB0;
    case 440u: goto L_0024FCEC;
    case 441u: goto L_0024FD24;
    case 442u: goto L_0024FD60;
    case 443u: goto L_0024FD9C;
    case 444u: goto L_0024FDD8;
    case 445u: goto L_0024FEB8;
    case 446u: goto L_0024FEEC;
    case 447u: goto L_0024FF20;
    case 448u: goto L_0024FF40;
    default: bad_entry(c, 0x0024C000u); return;
    }
L_0024C000:
    set32(c.r[29], c.r[29].w[0] - 320u);
    set32(c.r[3], 0u + 23u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 13;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0024CA44; }
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 148u)));  goto L_0024C990; }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0024C92C; }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 20u);  goto L_0024C89C; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[17].w[0] + 184u));  goto L_0024C6D4; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 10u);  goto L_0024C630; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0024C508; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0024C350; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0024C0D4; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  goto L_0024C0A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0024CAC8; } }
L_0024C0A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C0ACu); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024C0ACu) [[unlikely]] return; }
L_0024C0AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C0C0u); c.r[5].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x0024C0C0u) [[unlikely]] return; }
L_0024C0C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C0CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0024C0CCu) [[unlikely]] return; }
L_0024C0CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024CAC4; } }
L_0024C0D4:
    set32(c.r[18], 0u + 3u);
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 2;
L_0024C0DC:
    c.r[7].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 308u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C100u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0024C100u) [[unlikely]] return; }
L_0024C100:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 148u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024C0DCu | kUnwind; return; } goto L_0024C0DC; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u - 129u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  goto L_0024C140; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 15336u);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 4;
L_0024C140:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  goto L_0024C15C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 15319u);
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 4;
L_0024C15C:
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  goto L_0024C178; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 15302u);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 4;
L_0024C178:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  goto L_0024C190; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
L_0024C190:
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  goto L_0024C1A8; }
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
L_0024C1A8:
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0024C318; }
    set32(c.r[2], 0u + 3u);
    st32((c.r[17].w[0] + 156u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024C318; } }
L_0024C1C8:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 60u)));
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024C1E4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0024C1E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024C220; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C1F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x0024C1F4u) [[unlikely]] return; }
L_0024C1F4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024C220; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_0024C210; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024C220; } }
L_0024C210:
    set32(c.r[4], c.r[29].w[0] + 300u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C220u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x0024C220u) [[unlikely]] return; }
L_0024C220:
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 296u);
    set32(c.r[5], c.r[29].w[0] + 300u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C234u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 68u, depth + 1u); else { c.pc = 0x001E0820u; return; } if (c.pc != 0x0024C234u) [[unlikely]] return; }
L_0024C234:
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_0024C244; }
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0024C244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C24Cu); set32(c.r[4], c.r[29].w[0] + 292u);  if (depth < kMaxDepth) unit_0042(c, 329u, depth + 1u); else { c.pc = 0x0022B0D0u; return; } if (c.pc != 0x0024C24Cu) [[unlikely]] return; }
L_0024C24C:
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[19], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 160u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[19].w[0] + 160u);  if (t) { goto L_0024C278; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0024C278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C278u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024C278u) [[unlikely]] return; }
L_0024C278:
    set32(c.r[3], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 292u)));  goto L_0024C294; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 4;
L_0024C294:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 296u)));  goto L_0024C2C4; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0024C2C0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C2C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024C2C0u) [[unlikely]] return; }
L_0024C2C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 296u)));
    c.budget -= 1;
L_0024C2C4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 300u)));  goto L_0024C2EC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0024C2E8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 296u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C2E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024C2E8u) [[unlikely]] return; }
L_0024C2E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 300u)));
    c.budget -= 1;
L_0024C2EC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[19].w[0] + 164u), c.r[16].w[0]);  goto L_0024C314; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0024C310; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C310u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024C310u) [[unlikely]] return; }
L_0024C310:
    st32((c.r[19].w[0] + 164u), c.r[16].w[0]);
    c.budget -= 1;
L_0024C314:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0024C318:
    set32(c.r[6], ld32((c.r[17].w[0] + 156u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024C1C8u | kUnwind; return; } goto L_0024C1C8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 88u)));  goto L_0024C344; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C340u); set32(c.r[5], c.r[17].w[0] + 160u);  if (depth < kMaxDepth) unit_004A(c, 338u, depth + 1u); else { c.pc = 0x0024B820u; return; } if (c.pc != 0x0024C340u) [[unlikely]] return; }
L_0024C340:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 1;
L_0024C344:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_0024C350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C358u);  if (depth < kMaxDepth) unit_004A(c, 388u, depth + 1u); else { c.pc = 0x0024BE80u; return; } if (c.pc != 0x0024C358u) [[unlikely]] return; }
L_0024C358:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C378u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0024C378u) [[unlikely]] return; }
L_0024C378:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[7], 0u + 22u);
    set32(c.r[4], c.r[29].w[0] + 276u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C398u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0024C398u) [[unlikely]] return; }
L_0024C398:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 264u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C3B4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0024C3B4u) [[unlikely]] return; }
L_0024C3B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C3D0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0024C3D0u) [[unlikely]] return; }
L_0024C3D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[4], 0u + 4096u);  goto L_0024C410; }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] - 15540u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C40Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0024C40Cu) [[unlikely]] return; }
L_0024C40C:
    set32(c.r[4], 0u + 4096u);
    c.budget -= 1;
L_0024C410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C418u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024C418u) [[unlikely]] return; }
L_0024C418:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C42Cu); c.r[5].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x0024C42Cu) [[unlikely]] return; }
L_0024C42C:
    set32(c.r[3], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0024C444; }
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_0024C444:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_0024C454; }
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 2;
L_0024C454:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[20].w[0] << 3);  goto L_0024C464; }
    set32(c.r[20], 0u + 1u);
    set32(c.r[2], c.r[20].w[0] << 3);
    c.budget -= 2;
L_0024C464:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[7], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 164u)));
    set32(c.r[5], c.r[5].w[0] + 10148u);
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 232u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[7].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[7].w[0] + 68u), 0u);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 24576ull;
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C4C8u); set32(c.r[6], 0u + 258u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0024C4C8u) [[unlikely]] return; }
L_0024C4C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C4DCu); set32(c.r[16], ld32((c.r[29].w[0] + 232u)));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x0024C4DCu) [[unlikely]] return; }
L_0024C4DC:
    st32((c.r[2].w[0] + 272u), c.r[16].w[0]);
    set32(c.r[4], 0u + 17u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C4F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0024C4F8u) [[unlikely]] return; }
L_0024C4F8:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0024CAC4; } }
L_0024C508:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.f[2] = ld32((c.r[17].w[0] + 188u));  if (t) { goto L_0024C520; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0024C53C; } }
L_0024C520:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 7;
L_0024C53C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.f[2] = ld32((c.r[17].w[0] + 188u));
    c.f[3] = ld32((c.r[3].w[0] + 27140u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[3]);
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 188u), c.f[0]);  if (t) { goto L_0024C588; } }
    c.f[0] = ld32((c.r[17].w[0] + 188u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[17].w[0] + 188u));  goto L_0024C58C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C588u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_003D(c, 37u, depth + 1u); else { c.pc = 0x00214580u; return; } if (c.pc != 0x0024C588u) [[unlikely]] return; }
L_0024C588:
    c.f[1] = ld32((c.r[17].w[0] + 188u));
    c.budget -= 1;
L_0024C58C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[17].w[0] + 188u));  goto L_0024C600; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024C5FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C5C8u);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0024C5C8u) [[unlikely]] return; }
L_0024C5C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C5E0u); c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0024C5E0u) [[unlikely]] return; }
L_0024C5E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[13] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C5FCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_004A(c, 344u, depth + 1u); else { c.pc = 0x0024B990u; return; } if (c.pc != 0x0024C5FCu) [[unlikely]] return; }
L_0024C5FC:
    c.f[0] = ld32((c.r[17].w[0] + 188u));
    c.budget -= 1;
L_0024C600:
    c.f[12] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024CAC4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C620u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_004A(c, 344u, depth + 1u); else { c.pc = 0x0024B990u; return; } if (c.pc != 0x0024C620u) [[unlikely]] return; }
L_0024C620:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
L_0024C630:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 188u), 0u);
    st32((c.r[17].w[0] + 192u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024C654; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 184u), 0u);  if (t) { goto L_0024C658; } }
L_0024C654:
    st32((c.r[17].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 1;
L_0024C658:
    set32(c.r[5], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C664u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 55u, depth + 1u); else { c.pc = 0x0024CAF0u; return; } if (c.pc != 0x0024C664u) [[unlikely]] return; }
L_0024C664:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[7], 0u + 1u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[6], 0u + 2u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C68Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 337u, depth + 1u); else { c.pc = 0x001EEE30u; return; } if (c.pc != 0x0024C68Cu) [[unlikely]] return; }
L_0024C68C:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], 0u + 23u);
    set32(c.r[4], c.r[29].w[0] + 204u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C6B4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 337u, depth + 1u); else { c.pc = 0x001EEE30u; return; } if (c.pc != 0x0024C6B4u) [[unlikely]] return; }
L_0024C6B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    st32((c.r[17].w[0] + 196u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 184u));
    c.budget -= 8;
L_0024C6D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C6E0u); c.f[20] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x0024C6E0u) [[unlikely]] return; }
L_0024C6E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);  goto L_0024C708; }
    c.f[1] = ld32((c.r[17].w[0] + 192u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024C898; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_0024C708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C710u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x0024C710u) [[unlikely]] return; }
L_0024C710:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);  goto L_0024C740; }
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0024C73C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], 0u + 7u);
    st32((c.r[17].w[0] + 184u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C73Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0024C73Cu) [[unlikely]] return; }
L_0024C73C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 1;
L_0024C740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C748u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x0024C748u) [[unlikely]] return; }
L_0024C748:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 184u)));  goto L_0024C784; }
    set32(c.r[3], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024C780; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 7u);
    st32((c.r[17].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C780u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0024C780u) [[unlikely]] return; }
L_0024C780:
    set32(c.r[5], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 1;
L_0024C784:
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024C7A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C7A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 55u, depth + 1u); else { c.pc = 0x0024CAF0u; return; } if (c.pc != 0x0024C7A4u) [[unlikely]] return; }
L_0024C7A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0024C7C0; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0024C7D8; } }
L_0024C7C0:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_0024C7D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 192u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[4].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[17].w[0] + 192u), c.f[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 11;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0024C810; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0024C828; } }
L_0024C810:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_0024C828:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 196u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[4].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[17].w[0] + 196u), c.f[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 11;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0024C860; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0024C878; } }
L_0024C860:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_0024C878:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 200u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 200u), c.f[0]);  if (t) { goto L_0024CAC4; } }
L_0024C898:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_0024C89C:
    set32(c.r[7], 0u + 5u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 184u);
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C8BCu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0024C8BCu) [[unlikely]] return; }
L_0024C8BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C8D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0024C8D8u) [[unlikely]] return; }
L_0024C8D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[7], 0u + 24u);
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C8F8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0024C8F8u) [[unlikely]] return; }
L_0024C8F8:
    set32(c.r[5], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C904u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 67u, depth + 1u); else { c.pc = 0x0024CCD0u; return; } if (c.pc != 0x0024C904u) [[unlikely]] return; }
L_0024C904:
    set32(c.r[4], 0u + 15u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C914u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0024C914u) [[unlikely]] return; }
L_0024C914:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    st32((c.r[17].w[0] + 188u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0024CAC4; } }
L_0024C92C:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0024C944; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0024C95C; } }
L_0024C944:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_0024C95C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 188u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 188u), c.f[1]);  if (t) { goto L_0024CAC4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 4;
L_0024C990:
    set32(c.r[7], 0u + 3u);
    set32(c.r[4], c.r[29].w[0] + 156u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C9ACu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0024C9ACu) [[unlikely]] return; }
L_0024C9AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[3], c.r[3].w[0] - 15524u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C9E0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0024C9E0u) [[unlikely]] return; }
L_0024C9E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[7], 0u + 25u);
    set32(c.r[4], c.r[29].w[0] + 132u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CA00u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0024CA00u) [[unlikely]] return; }
L_0024CA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CA08u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024CA08u) [[unlikely]] return; }
L_0024CA08:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CA1Cu); c.r[5].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x0024CA1Cu) [[unlikely]] return; }
L_0024CA1C:
    set32(c.r[4], 0u + 18u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CA2Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0024CA2Cu) [[unlikely]] return; }
L_0024CA2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[17].w[0] + 188u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0024CAC4; } }
L_0024CA44:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0024CA5C; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0024CA74; } }
L_0024CA5C:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_0024CA74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 188u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 188u), c.f[1]);  if (t) { goto L_0024CAC4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u - 129u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CAC4u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0024CAC4u) [[unlikely]] return; }
L_0024CAC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0024CAC8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_0024CAF0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 15516u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[6], 0u + 2u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 156u)));
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CB58u); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0024CB58u) [[unlikely]] return; }
L_0024CB58:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 164u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CB74u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0024CB74u) [[unlikely]] return; }
L_0024CB74:
    set32(c.r[7], ld32((c.r[17].w[0] + 156u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[3], c.r[3].w[0] + 10148u);
    set32(c.r[4], c.r[29].w[0] + 156u);
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CBB0u); set32(c.r[6], 0u + 258u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0024CBB0u) [[unlikely]] return; }
L_0024CBB0:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CBC4u); set32(c.r[18], ld32((c.r[29].w[0] + 156u)));  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x0024CBC4u) [[unlikely]] return; }
L_0024CBC4:
    st32((c.r[2].w[0] + 272u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0024CC78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0024CC68; } }
L_0024CBDC:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 148u);
    set32(c.r[19], ld32((c.r[3].w[0] + 164u)));
    set32(c.r[6], 0u + 261u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[18], c.r[19].w[0] << 2);
    c.r[7].d[0] = c.r[19].d[0] ^ c.r[16].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CC0Cu); c.r[7].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0024CC0Cu) [[unlikely]] return; }
L_0024CC0C:
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[28].w[0] - 31912u)));  goto L_0024CC24; }
    set32(c.r[7], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0024CC24:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 140u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CC40u); set32(c.r[6], 0u + 257u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0024CC40u) [[unlikely]] return; }
L_0024CC40:
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    c.r[7].d[0] = c.r[21].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 132u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 5;
L_0024CC54:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CC64u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0024CC64u) [[unlikely]] return; }
L_0024CC64:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0024CC68:
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[20].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024CBDCu | kUnwind; return; } goto L_0024CBDC; }
L_0024CC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CC80u); set32(c.r[4], 0u + 4098u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024CC80u) [[unlikely]] return; }
L_0024CC80:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10020000u);
    c.r[5].d[0] = c.r[2].d[0] | 4100ull;
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CCA4u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x0024CCA4u) [[unlikely]] return; }
L_0024CCA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0024CCD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[7], c.r[7].w[0] - 15468u);
    set32(c.r[9], ld32((c.r[4].w[0] + 156u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[4], c.r[9].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CD1Cu); set32(c.r[4], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0024CD1Cu) [[unlikely]] return; }
L_0024CD1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024CD30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024CD40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 4104u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CD58u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x0024CD58u) [[unlikely]] return; }
L_0024CD58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 19760u);
    set32(c.r[4], c.r[16].w[0] + 152u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CD74u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 216u, depth + 1u); else { c.pc = 0x0020DFF0u; return; } if (c.pc != 0x0024CD74u) [[unlikely]] return; }
L_0024CD74:
    set32(c.r[4], c.r[16].w[0] + 152u);
    set32(c.r[5], 0u + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CD84u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_003B(c, 228u, depth + 1u); else { c.pc = 0x0020E270u; return; } if (c.pc != 0x0024CD84u) [[unlikely]] return; }
L_0024CD84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 188u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    st32((c.r[16].w[0] + 192u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x430C0000u);
    st32((c.r[16].w[0] + 196u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 152u);
    st32((c.r[16].w[0] + 200u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CDB4u); set32(c.r[5], c.r[5].w[0] - 15183u);  if (depth < kMaxDepth) unit_003B(c, 314u, depth + 1u); else { c.pc = 0x0020FC40u; return; } if (c.pc != 0x0024CDB4u) [[unlikely]] return; }
L_0024CDB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CDC4u); set32(c.r[5], c.r[5].w[0] - 15280u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x0024CDC4u) [[unlikely]] return; }
L_0024CDC4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024CDE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024CE38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[17].w[0] + 152u);
    set32(c.r[2], c.r[2].w[0] + 19760u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CE14u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003B(c, 219u, depth + 1u); else { c.pc = 0x0020E110u; return; } if (c.pc != 0x0024CE14u) [[unlikely]] return; }
L_0024CE14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CE20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x0024CE20u) [[unlikely]] return; }
L_0024CE20:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0024CE3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CE38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0024CE38u) [[unlikely]] return; }
L_0024CE38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024CE3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024CE50:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 2;
L_0024CE58:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024CF70; } }
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CE84u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 356u, depth + 1u); else { c.pc = 0x00207D10u; return; } if (c.pc != 0x0024CE84u) [[unlikely]] return; }
L_0024CE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CE8Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0024CE8Cu) [[unlikely]] return; }
L_0024CE8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CE94u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x0024CE94u) [[unlikely]] return; }
L_0024CE94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CE9Cu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0024CE9Cu) [[unlikely]] return; }
L_0024CE9C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 10384u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 10388u));
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 10396u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[29].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 48u), c.f[2]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CED8u); st32((c.r[29].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0024CED8u) [[unlikely]] return; }
L_0024CED8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[6].w[0] + 10304u);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
L_0024CEE8:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024CEE8u | kUnwind; return; } goto L_0024CEE8; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CF18u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 335u, depth + 1u); else { c.pc = 0x0015AE50u; return; } if (c.pc != 0x0024CF18u) [[unlikely]] return; }
L_0024CF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CF20u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x0024CF20u) [[unlikely]] return; }
L_0024CF20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[3].w[0] + 10384u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 10388u));
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 10396u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 40u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 32u), c.f[2]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 36u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CF5Cu); st32((c.r[29].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x0024CF5Cu) [[unlikely]] return; }
L_0024CF5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CF64u); set32(c.r[4], c.r[16].w[0] + 152u);  if (depth < kMaxDepth) unit_003B(c, 248u, depth + 1u); else { c.pc = 0x0020E740u; return; } if (c.pc != 0x0024CF64u) [[unlikely]] return; }
L_0024CF64:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CF70u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0039(c, 362u, depth + 1u); else { c.pc = 0x00207E10u; return; } if (c.pc != 0x0024CF70u) [[unlikely]] return; }
L_0024CF70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0024CF80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CF90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0024CF90u) [[unlikely]] return; }
L_0024CF90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024CFA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CFB8u); set32(c.r[4], c.r[16].w[0] + 152u);  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x0024CFB8u) [[unlikely]] return; }
L_0024CFB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CFD8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0024CFD8u) [[unlikely]] return; }
L_0024CFD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024CFF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 10u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 9;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 10u);  goto L_0024D1C0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);  goto L_0024D088; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 148u), 0u);  goto L_0024D06C; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  goto L_0024D03C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0024D1F4; } }
L_0024D03C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D044u); set32(c.r[4], c.r[17].w[0] + 152u);  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x0024D044u) [[unlikely]] return; }
L_0024D044:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D064u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0024D064u) [[unlikely]] return; }
L_0024D064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024D1F0; } }
L_0024D06C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.budget -= 7;
L_0024D088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D090u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x0024D090u) [[unlikely]] return; }
L_0024D090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024D1BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D0A0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x0024D0A0u) [[unlikely]] return; }
L_0024D0A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);  goto L_0024D0C0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 148u), c.r[2].w[0]);  if (t) { goto L_0024D0BC; } }
    st32((c.r[17].w[0] + 148u), 0u);
    c.budget -= 1;
L_0024D0BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 1;
L_0024D0C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D0C8u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x0024D0C8u) [[unlikely]] return; }
L_0024D0C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 4098u);  goto L_0024D0F4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 148u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024D0F0; } }
    set32(c.r[2], 0u + 3u);
    st32((c.r[17].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 2;
L_0024D0F0:
    set32(c.r[4], 0u + 4098u);
    c.budget -= 1;
L_0024D0F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D0FCu);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024D0FCu) [[unlikely]] return; }
L_0024D0FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10020000u);
    c.r[5].d[0] = c.r[2].d[0] | 4100ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D114u); set32(c.r[6], c.r[3].w[0] + 1u);  if (depth < kMaxDepth) unit_002B(c, 399u, depth + 1u); else { c.pc = 0x001CF930u; return; } if (c.pc != 0x0024D114u) [[unlikely]] return; }
L_0024D114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D11Cu); set32(c.r[4], c.r[17].w[0] + 152u);  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x0024D11Cu) [[unlikely]] return; }
L_0024D11C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFC00000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[2].d[0] | 49344ull;
    set32(c.r[4], c.r[17].w[0] + 152u);
    set32(c.r[5], c.r[5].w[0] - 15114u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D138u); st32((c.r[17].w[0] + 216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003B(c, 314u, depth + 1u); else { c.pc = 0x0020FC40u; return; } if (c.pc != 0x0024D138u) [[unlikely]] return; }
L_0024D138:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D13C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 10368u));
    c.f[2] = ld32((c.r[2].w[0] + 10372u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 10376u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 52u), c.f[2]);
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.f[0] = ld32((c.r[2].w[0] + 10380u));
    st32((c.r[29].w[0] + 56u), c.f[1]);
    c.budget -= 14;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 60u), c.f[0]);  if (t) { goto L_0024D184; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF200000u);
    c.r[2].d[0] = c.r[2].d[0] | 24576ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 216u), c.r[2].w[0]);  if (t) { goto L_0024D190; } }
L_0024D184:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFC00000u);
    c.r[2].d[0] = c.r[2].d[0] | 49344ull;
    st32((c.r[17].w[0] + 216u), c.r[2].w[0]);
    c.budget -= 3;
L_0024D190:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D1A4u); set32(c.r[4], c.r[17].w[0] + 152u);  if (depth < kMaxDepth) unit_003B(c, 314u, depth + 1u); else { c.pc = 0x0020FC40u; return; } if (c.pc != 0x0024D1A4u) [[unlikely]] return; }
L_0024D1A4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024D13Cu | kUnwind; return; } goto L_0024D13C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024D1F0; } }
L_0024D1BC:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_0024D1C0:
    set32(c.r[4], c.r[17].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D1CCu); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x0024D1CCu) [[unlikely]] return; }
L_0024D1CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D1F0u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0024D1F0u) [[unlikely]] return; }
L_0024D1F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0024D1F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024D210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 4102u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D228u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x0024D228u) [[unlikely]] return; }
L_0024D228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 19824u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D23Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004B(c, 120u, depth + 1u); else { c.pc = 0x0024D2E0u; return; } if (c.pc != 0x0024D23Cu) [[unlikely]] return; }
L_0024D23C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x504C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[2].d[0] | 22337ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14400u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D258u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x0024D258u) [[unlikely]] return; }
L_0024D258:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024D270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024D2C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 19824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D29Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004B(c, 121u, depth + 1u); else { c.pc = 0x0024D300u; return; } if (c.pc != 0x0024D29Cu) [[unlikely]] return; }
L_0024D29C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D2A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x0024D2A8u) [[unlikely]] return; }
L_0024D2A8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0024D2C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D2C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0024D2C0u) [[unlikely]] return; }
L_0024D2C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024D2C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024D2E0:
    st32((c.r[4].w[0] + 148u), 0u);
    st32((c.r[4].w[0] + 152u), 0u);
    st32((c.r[4].w[0] + 160u), 0u);
    st32((c.r[4].w[0] + 164u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 172u), 0u);  c.pc = t; return; }
L_0024D300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 160u)));  goto L_0024D334; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D32Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D32Cu) [[unlikely]] return; }
L_0024D32C:
    st32((c.r[16].w[0] + 148u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 2;
L_0024D334:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 164u)));  goto L_0024D354; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D34Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D34Cu) [[unlikely]] return; }
L_0024D34C:
    st32((c.r[16].w[0] + 160u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 2;
L_0024D354:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0024D374; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D36Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D36Cu) [[unlikely]] return; }
L_0024D36C:
    st32((c.r[16].w[0] + 164u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0024D374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D37Cu);  if (depth < kMaxDepth) unit_004B(c, 144u, depth + 1u); else { c.pc = 0x0024D650u; return; } if (c.pc != 0x0024D37Cu) [[unlikely]] return; }
L_0024D37C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024D390:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_0024D3B0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_0024D3C8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0024D3D0; } }
L_0024D3C8:
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 2;
L_0024D3D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D3E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D408u); c.f[21] = c.f[12];  if (depth < kMaxDepth) unit_0033(c, 322u, depth + 1u); else { c.pc = 0x001EEC10u; return; } if (c.pc != 0x0024D408u) [[unlikely]] return; }
L_0024D408:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D424u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0024D424u) [[unlikely]] return; }
L_0024D424:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 208u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 292u)));
    c.f[12] = c.f[20];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D444u); st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0024D444u) [[unlikely]] return; }
L_0024D444:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 212u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 292u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 292u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024D480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D490u); set32(c.r[4], 0u + 4100u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024D490u) [[unlikely]] return; }
L_0024D490:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], 0u + 4101u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D4A4u); st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024D4A4u) [[unlikely]] return; }
L_0024D4A4:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], 0u + 4108u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D4B8u); st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024D4B8u) [[unlikely]] return; }
L_0024D4B8:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], 0u + 4106u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D4CCu); st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024D4CCu) [[unlikely]] return; }
L_0024D4CC:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], 0u + 4105u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D4E0u); st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024D4E0u) [[unlikely]] return; }
L_0024D4E0:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0024D500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D510u); set32(c.r[4], 0u + 4100u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024D510u) [[unlikely]] return; }
L_0024D510:
    set32(c.r[3], ld32((c.r[2].w[0] + 228u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024D540; }
    c.f[1] = ld32((c.r[3].w[0] + 60u));
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0024D540; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024D540; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024D540:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 4101u);  goto L_0024D554; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024D638; } }
    set32(c.r[4], 0u + 4101u);
    c.budget -= 1;
L_0024D554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D55Cu);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024D55Cu) [[unlikely]] return; }
L_0024D55C:
    set32(c.r[3], ld32((c.r[2].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024D58C; }
    c.f[1] = ld32((c.r[3].w[0] + 60u));
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0024D58C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024D58C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024D58C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 4108u);  goto L_0024D5A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024D638; } }
    set32(c.r[4], 0u + 4108u);
    c.budget -= 1;
L_0024D5A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D5A8u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024D5A8u) [[unlikely]] return; }
L_0024D5A8:
    set32(c.r[3], ld32((c.r[2].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024D5D8; }
    c.f[1] = ld32((c.r[3].w[0] + 60u));
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0024D5D8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024D5D8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024D5D8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 4106u);  goto L_0024D5EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024D638; } }
    set32(c.r[4], 0u + 4106u);
    c.budget -= 1;
L_0024D5EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D5F4u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024D5F4u) [[unlikely]] return; }
L_0024D5F4:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 4105u);  goto L_0024D61C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024D638; } }
    set32(c.r[4], 0u + 4105u);
    c.budget -= 1;
L_0024D61C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D624u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024D624u) [[unlikely]] return; }
L_0024D624:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
L_0024D638:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0024D650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0024D67C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D674u);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x001B81D0u; return; } if (c.pc != 0x0024D674u) [[unlikely]] return; }
L_0024D674:
    st32((c.r[16].w[0] + 172u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0024D67C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024D690:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024D93C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 432u);  goto L_0024D7CC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 164u)));  goto L_0024D774; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0024D714; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0024D6EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0024D9F8; } }
L_0024D6E8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0024D6EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D6F8u); st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004B(c, 121u, depth + 1u); else { c.pc = 0x0024D300u; return; } if (c.pc != 0x0024D6F8u) [[unlikely]] return; }
L_0024D6F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D700u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 120u, depth + 1u); else { c.pc = 0x0024D2E0u; return; } if (c.pc != 0x0024D700u) [[unlikely]] return; }
L_0024D700:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D70Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0024D70Cu) [[unlikely]] return; }
L_0024D70C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024D9F4; } }
L_0024D714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D71Cu);  if (depth < kMaxDepth) unit_004B(c, 121u, depth + 1u); else { c.pc = 0x0024D300u; return; } if (c.pc != 0x0024D71Cu) [[unlikely]] return; }
L_0024D71C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D724u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 120u, depth + 1u); else { c.pc = 0x0024D2E0u; return; } if (c.pc != 0x0024D724u) [[unlikely]] return; }
L_0024D724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D72Cu); set32(c.r[4], 0u + 360u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0024D72Cu) [[unlikely]] return; }
L_0024D72C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 164u), c.r[4].w[0]);  goto L_0024D764; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 14303u);
    set32(c.r[7], c.r[7].w[0] - 14290u);
    set32(c.r[8], 0u + 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D75Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x0024D75Cu) [[unlikely]] return; }
L_0024D75C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 164u), c.r[4].w[0]);
    c.budget -= 2;
L_0024D764:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 4;
L_0024D774:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024D9F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024D7A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_0024D7C0; }
L_0024D7A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D7B8u); set32(c.r[5], c.r[5].w[0] - 14276u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0024D7B8u) [[unlikely]] return; }
L_0024D7B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024D6E8u | kUnwind; return; } goto L_0024D6E8; } }
L_0024D7C0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], 0u + 432u);
    c.budget -= 3;
L_0024D7CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D7D4u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0024D7D4u) [[unlikely]] return; }
L_0024D7D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 160u), c.r[2].w[0]);  goto L_0024D7F0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D7ECu); set32(c.r[6], 0u + 14u);  if (depth < kMaxDepth) unit_0033(c, 344u, depth + 1u); else { c.pc = 0x001EEF40u; return; } if (c.pc != 0x0024D7ECu) [[unlikely]] return; }
L_0024D7EC:
    st32((c.r[16].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 1;
L_0024D7F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48530000u);
    c.r[5].d[0] = c.r[2].d[0] | 20562ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D808u); set32(c.r[4], ld32((c.r[2].w[0] + 72u)));  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x0024D808u) [[unlikely]] return; }
L_0024D808:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D824u); c.r[5].d[0] = c.r[2].d[0] | 17752ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x0024D824u) [[unlikely]] return; }
L_0024D824:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024D834; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], 0u + 60u);  goto L_0024D84C; }
L_0024D834:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D844u); set32(c.r[5], c.r[5].w[0] - 14261u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0024D844u) [[unlikely]] return; }
L_0024D844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024D6E8u | kUnwind; return; } goto L_0024D6E8; } }
L_0024D84C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D854u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0024D854u) [[unlikely]] return; }
L_0024D854:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = c.r[2].d[0] + 0ull;  goto L_0024D87C; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D878u); set32(c.r[8], c.r[8].w[0] - 14304u);  if (depth < kMaxDepth) unit_0034(c, 57u, depth + 1u); else { c.pc = 0x001F08A0u; return; } if (c.pc != 0x0024D878u) [[unlikely]] return; }
L_0024D878:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0024D87C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D890u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0033(c, 397u, depth + 1u); else { c.pc = 0x001EF710u; return; } if (c.pc != 0x0024D890u) [[unlikely]] return; }
L_0024D890:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D8A8u); c.r[5].d[0] = c.r[2].d[0] | 17473ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x0024D8A8u) [[unlikely]] return; }
L_0024D8A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D8C4u); c.r[5].d[0] = c.r[2].d[0] | 21075ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x0024D8C4u) [[unlikely]] return; }
L_0024D8C4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024D8D4; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], 0u + 60u);  goto L_0024D8EC; }
L_0024D8D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D8E4u); set32(c.r[5], c.r[5].w[0] - 14261u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0024D8E4u) [[unlikely]] return; }
L_0024D8E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024D6E8u | kUnwind; return; } goto L_0024D6E8; } }
L_0024D8EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D8F4u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0024D8F4u) [[unlikely]] return; }
L_0024D8F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 160u)));  goto L_0024D91C; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D918u); set32(c.r[8], c.r[8].w[0] - 14304u);  if (depth < kMaxDepth) unit_0034(c, 7u, depth + 1u); else { c.pc = 0x001F00E0u; return; } if (c.pc != 0x0024D918u) [[unlikely]] return; }
L_0024D918:
    set32(c.r[3], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 1;
L_0024D91C:
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D930u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 397u, depth + 1u); else { c.pc = 0x001EF710u; return; } if (c.pc != 0x0024D930u) [[unlikely]] return; }
L_0024D930:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_0024D93C:
    set32(c.r[4], ld32((c.r[16].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024D9F4; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], c.r[6].w[0] + 10400u);
    set32(c.r[7], 0u + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D970u); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_0033(c, 359u, depth + 1u); else { c.pc = 0x001EF0E0u; return; } if (c.pc != 0x0024D970u) [[unlikely]] return; }
L_0024D970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D978u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0024D978u) [[unlikely]] return; }
L_0024D978:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), c.r[2].w[0]);  goto L_0024D990; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D98Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 307u, depth + 1u); else { c.pc = 0x0025BD20u; return; } if (c.pc != 0x0024D98Cu) [[unlikely]] return; }
L_0024D98C:
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 1;
L_0024D990:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 160u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D9ACu); set32(c.r[6], c.r[6].w[0] + 10800u);  if (depth < kMaxDepth) unit_004E(c, 330u, depth + 1u); else { c.pc = 0x0025BFA0u; return; } if (c.pc != 0x0024D9ACu) [[unlikely]] return; }
L_0024D9AC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0024D9B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - 14928u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[5].w[0] + 8u);
    set32(c.r[7], c.r[5].w[0] + 16u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D9D8u); set32(c.r[8], c.r[5].w[0] + 24u);  if (depth < kMaxDepth) unit_003C(c, 173u, depth + 1u); else { c.pc = 0x00211C50u; return; } if (c.pc != 0x0024D9D8u) [[unlikely]] return; }
L_0024D9D8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024D9B4u | kUnwind; return; } goto L_0024D9B4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D9F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0024D9F4u) [[unlikely]] return; }
L_0024D9F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0024D9F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024DA10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DA24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 121u, depth + 1u); else { c.pc = 0x0024D300u; return; } if (c.pc != 0x0024DA24u) [[unlikely]] return; }
L_0024DA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DA2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 120u, depth + 1u); else { c.pc = 0x0024D2E0u; return; } if (c.pc != 0x0024DA2Cu) [[unlikely]] return; }
L_0024DA2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DA38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0024DA38u) [[unlikely]] return; }
L_0024DA38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024DA50:
    set32(c.r[29], c.r[29].w[0] - 272u);
    set32(c.r[3], 0u + 22u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 11;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024E18C; } }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0024E0D0; }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 20u);  goto L_0024E04C; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0024DFD0; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 10u);  goto L_0024DF64; }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[6].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_0024DCF4; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[5].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0024DC34; }
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_0024DAFC; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  goto L_0024DAE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0024E228; } }
L_0024DAE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DAF4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0024DAF4u) [[unlikely]] return; }
L_0024DAF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024E224; } }
L_0024DAFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB2Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0024DB2Cu) [[unlikely]] return; }
L_0024DB2C:
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 12u);
    set32(c.r[4], c.r[29].w[0] + 252u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB50u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 334u, depth + 1u); else { c.pc = 0x001EEDA0u; return; } if (c.pc != 0x0024DB50u) [[unlikely]] return; }
L_0024DB50:
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 9u);
    set32(c.r[4], c.r[29].w[0] + 236u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB74u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 334u, depth + 1u); else { c.pc = 0x001EEDA0u; return; } if (c.pc != 0x0024DB74u) [[unlikely]] return; }
L_0024DB74:
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[4], c.r[29].w[0] + 220u);
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB94u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0024DB94u) [[unlikely]] return; }
L_0024DB94:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[19], 0u + 2u);
    set32(c.r[20], 0u + 11u);
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 5;
L_0024DBA8:
    c.r[7].d[0] = c.r[20].d[0] << 32;
    c.r[8].d[0] = c.r[19].d[0] << 32;
    c.r[9].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DBDCu); c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);  if (depth < kMaxDepth) unit_0033(c, 334u, depth + 1u); else { c.pc = 0x001EEDA0u; return; } if (c.pc != 0x0024DBDCu) [[unlikely]] return; }
L_0024DBDC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 160u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024DBA8u | kUnwind; return; } goto L_0024DBA8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[4], 0u + 20001u);
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 156u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    st32((c.r[2].w[0] + 56u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DC24u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0024DC24u) [[unlikely]] return; }
L_0024DC24:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0024E224; } }
L_0024DC34:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0024DC4C; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0024DC64; } }
L_0024DC4C:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_0024DC64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 152u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 152u), c.f[1]);  if (t) { goto L_0024E224; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    st32((c.r[29].w[0] + 180u), c.f[0]);
    set32(c.r[6], 0u + 2u);
    set32(c.r[9], ld32((c.r[29].w[0] + 180u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 60u), c.f[0]);
    st32((c.r[3].w[0] + 68u), c.f[0]);
    st32((c.r[3].w[0] + 64u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DCD0u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 337u, depth + 1u); else { c.pc = 0x001EEE30u; return; } if (c.pc != 0x0024DCD0u) [[unlikely]] return; }
L_0024DCD0:
    set32(c.r[4], 0u + 20004u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DCE0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0024DCE0u) [[unlikely]] return; }
L_0024DCE0:
    st32((c.r[17].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
L_0024DCF4:
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024DF60; } }
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024E048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DD14u); set32(c.r[4], 0u + 4105u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x0024DD14u) [[unlikely]] return; }
L_0024DD14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 148u)));  goto L_0024DD4C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 220u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024DD48; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0024DD58; } }
L_0024DD48:
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_0024DD4C:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_0024DD58:
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.f[1] = ld32((c.r[3].w[0] + 60u));
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0024DD74; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024DD74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 148u)));  goto L_0024DD9C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DD90u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004B(c, 132u, depth + 1u); else { c.pc = 0x0024D480u; return; } if (c.pc != 0x0024DD90u) [[unlikely]] return; }
L_0024DD90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DD98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 144u, depth + 1u); else { c.pc = 0x0024D650u; return; } if (c.pc != 0x0024DD98u) [[unlikely]] return; }
L_0024DD98:
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_0024DD9C:
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[1] = ld32((c.r[17].w[0] + 156u));  goto L_0024DE98; }
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] - 14544u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DDDCu); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0024DDDCu) [[unlikely]] return; }
L_0024DDDC:
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] + 10832u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], ld32((c.r[17].w[0] + 168u)));  goto L_0024DE24; }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 164u);
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DE20u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x0024DE20u) [[unlikely]] return; }
L_0024DE20:
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 1;
L_0024DE24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] + 10836u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0024DE94; } }
    set32(c.r[4], 0u + 20005u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DE50u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0024DE50u) [[unlikely]] return; }
L_0024DE50:
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] + 10836u);
    set32(c.r[4], c.r[29].w[0] + 156u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DE84u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0024DE84u) [[unlikely]] return; }
L_0024DE84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DE94u); st32((c.r[17].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 37u, depth + 1u); else { c.pc = 0x00214580u; return; } if (c.pc != 0x0024DE94u) [[unlikely]] return; }
L_0024DE94:
    c.f[1] = ld32((c.r[17].w[0] + 156u));
    c.budget -= 1;
L_0024DE98:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[17].w[0] + 156u));  goto L_0024DF00; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0024DEC8; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0024DEE0; } }
L_0024DEC8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_0024DED8:
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 2;
L_0024DEE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 156u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[2].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[17].w[0] + 156u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 156u));
    c.budget -= 8;
L_0024DF00:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[17].w[0] + 168u)));  goto L_0024DF3C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 14448u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DF34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 128u, depth + 1u); else { c.pc = 0x0024D3E0u; return; } if (c.pc != 0x0024DF34u) [[unlikely]] return; }
L_0024DF34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024E224; } }
L_0024DF3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 14496u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DF58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 128u, depth + 1u); else { c.pc = 0x0024D3E0u; return; } if (c.pc != 0x0024DF58u) [[unlikely]] return; }
L_0024DF58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024E224; } }
L_0024DF60:
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
L_0024DF64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DFA0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0024DFA0u) [[unlikely]] return; }
L_0024DFA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DFB0u); st32((c.r[17].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004B(c, 144u, depth + 1u); else { c.pc = 0x0024D650u; return; } if (c.pc != 0x0024DFB0u) [[unlikely]] return; }
L_0024DFB0:
    set32(c.r[4], 0u + 20002u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DFC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0024DFC0u) [[unlikely]] return; }
L_0024DFC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0024E224; } }
L_0024DFD0:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0024DFE8; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0024E000; } }
L_0024DFE8:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_0024E000:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 152u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 152u), c.f[1]);  if (t) { goto L_0024E224; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E040u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0024E040u) [[unlikely]] return; }
L_0024E040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024E224; } }
L_0024E048:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_0024E04C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E058u); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004B(c, 132u, depth + 1u); else { c.pc = 0x0024D480u; return; } if (c.pc != 0x0024E058u) [[unlikely]] return; }
L_0024E058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E060u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 138u, depth + 1u); else { c.pc = 0x0024D500u; return; } if (c.pc != 0x0024E060u) [[unlikely]] return; }
L_0024E060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024E224; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[6], 0u + 2u);
    st32((c.r[3].w[0] + 68u), 0u);
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    st32((c.r[3].w[0] + 60u), c.f[0]);
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E0A0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0024E0A0u) [[unlikely]] return; }
L_0024E0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E0A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 144u, depth + 1u); else { c.pc = 0x0024D650u; return; } if (c.pc != 0x0024E0A8u) [[unlikely]] return; }
L_0024E0A8:
    set32(c.r[4], 0u + 20006u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E0B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0024E0B8u) [[unlikely]] return; }
L_0024E0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E0C0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_003D(c, 37u, depth + 1u); else { c.pc = 0x00214580u; return; } if (c.pc != 0x0024E0C0u) [[unlikely]] return; }
L_0024E0C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0024E224; } }
L_0024E0D0:
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0024E0E8; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0024E100; } }
L_0024E0E8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 6;
L_0024E100:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[17].w[0] + 152u));
    c.f[12] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 152u), c.f[0]);  if (t) { goto L_0024E13C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E134u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 128u, depth + 1u); else { c.pc = 0x0024D3E0u; return; } if (c.pc != 0x0024E134u) [[unlikely]] return; }
L_0024E134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024E224; } }
L_0024E13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E144u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 128u, depth + 1u); else { c.pc = 0x0024D3E0u; return; } if (c.pc != 0x0024E144u) [[unlikely]] return; }
L_0024E144:
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E164u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001EED20u; return; } if (c.pc != 0x0024E164u) [[unlikely]] return; }
L_0024E164:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    set32(c.r[4], 0u + 20003u);
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E17Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0024E17Cu) [[unlikely]] return; }
L_0024E17C:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0024E224; } }
L_0024E18C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0024E1A8; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0024E1C0; } }
L_0024E1A8:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_0024E1C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 152u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 152u), c.f[1]);  if (t) { goto L_0024E224; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E1FCu); set32(c.r[6], 0u + 263u);  if (depth < kMaxDepth) unit_0033(c, 325u, depth + 1u); else { c.pc = 0x001EEC50u; return; } if (c.pc != 0x0024E1FCu) [[unlikely]] return; }
L_0024E1FC:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024E224; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E224u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0024E224u) [[unlikely]] return; }
L_0024E224:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0024E228:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_0024E250:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E274u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x0024E274u) [[unlikely]] return; }
L_0024E274:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[18].w[0] + 72u);
    set32(c.r[2], c.r[2].w[0] + 19888u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E288u); st32((c.r[18].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0024E288u) [[unlikely]] return; }
L_0024E288:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x56450000u);
    set32(c.r[2], 0u + 99u);
    c.r[3].d[0] = c.r[3].d[0] | 19777ull;
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 80u), 0u);
    st32((c.r[18].w[0] + 56u), 0u);
    st32((c.r[18].w[0] + 100u), 0u);
    st32((c.r[18].w[0] + 60u), 0u);
    st32((c.r[18].w[0] + 64u), 0u);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st32((c.r[18].w[0] + 68u), c.r[16].w[0]);  if (t) { goto L_0024E2C0; } }
    set32(c.r[2], 0u + 21u);
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 2;
L_0024E2C0:
    st32((c.r[18].w[0] + 84u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    st32((c.r[18].w[0] + 88u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[18].w[0] + 92u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024E300:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024E3B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 19888u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  goto L_0024E344; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E33Cu);  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x0024E33Cu) [[unlikely]] return; }
L_0024E33C:
    st32((c.r[17].w[0] + 100u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 2;
L_0024E344:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 60u)));  goto L_0024E364; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E35Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E35Cu) [[unlikely]] return; }
L_0024E35C:
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 2;
L_0024E364:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  goto L_0024E37C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E374u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x0024E374u) [[unlikely]] return; }
L_0024E374:
    st32((c.r[17].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 2;
L_0024E37C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0024E394; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E38Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x0024E38Cu) [[unlikely]] return; }
L_0024E38C:
    st32((c.r[17].w[0] + 64u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0024E394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E39Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0024E39Cu) [[unlikely]] return; }
L_0024E39C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0024E3B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E3B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0024E3B4u) [[unlikely]] return; }
L_0024E3B4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024E3B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024E3D0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 10;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0024E754; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  goto L_0024E71C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  goto L_0024E588; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  goto L_0024E43C; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0024E42C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024E750; } }
L_0024E42C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0024E750; } }
L_0024E43C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E444u);  if (depth < kMaxDepth) unit_0044(c, 501u, depth + 1u); else { c.pc = 0x00233970u; return; } if (c.pc != 0x0024E444u) [[unlikely]] return; }
L_0024E444:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 360u);  goto L_0024E508; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E454u);  if (depth < kMaxDepth) unit_0024(c, 464u, depth + 1u); else { c.pc = 0x001B3240u; return; } if (c.pc != 0x0024E454u) [[unlikely]] return; }
L_0024E454:
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E464u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x0024E464u) [[unlikely]] return; }
L_0024E464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E46Cu);  if (depth < kMaxDepth) unit_0024(c, 464u, depth + 1u); else { c.pc = 0x001B3240u; return; } if (c.pc != 0x0024E46Cu) [[unlikely]] return; }
L_0024E46C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E474u); set32(c.r[4], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x0024E474u) [[unlikely]] return; }
L_0024E474:
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 63u)));
    set32(c.r[2], 0u + 92u);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 68u)));  goto L_0024E49C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E498u); set32(c.r[5], c.r[5].w[0] - 13856u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x0024E498u) [[unlikely]] return; }
L_0024E498:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_0024E49C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] + 10976u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E4B8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x0024E4B8u) [[unlikely]] return; }
L_0024E4B8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E4C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 300u, depth + 1u); else { c.pc = 0x001AFA00u; return; } if (c.pc != 0x0024E4C4u) [[unlikely]] return; }
L_0024E4C4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E4D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 304u, depth + 1u); else { c.pc = 0x001AFA80u; return; } if (c.pc != 0x0024E4D0u) [[unlikely]] return; }
L_0024E4D0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E4E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 408u, depth + 1u); else { c.pc = 0x001B2F10u; return; } if (c.pc != 0x0024E4E0u) [[unlikely]] return; }
L_0024E4E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_0024E738; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E4F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 302u, depth + 1u); else { c.pc = 0x001AFA40u; return; } if (c.pc != 0x0024E4F8u) [[unlikely]] return; }
L_0024E4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E500u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 301u, depth + 1u); else { c.pc = 0x001AFA20u; return; } if (c.pc != 0x0024E500u) [[unlikely]] return; }
L_0024E500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0024E580; } }
L_0024E508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E510u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0024E510u) [[unlikely]] return; }
L_0024E510:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 56u), c.r[4].w[0]);  goto L_0024E558; }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 10976u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 13854u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[8], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E550u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x0024E550u) [[unlikely]] return; }
L_0024E550:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 2;
L_0024E558:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0024E57C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E570u); set32(c.r[5], c.r[5].w[0] - 13835u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0024E570u) [[unlikely]] return; }
L_0024E570:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_0024E750; } }
L_0024E57C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0024E580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_0024E750; } }
L_0024E588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E590u);  if (depth < kMaxDepth) unit_0044(c, 501u, depth + 1u); else { c.pc = 0x00233970u; return; } if (c.pc != 0x0024E590u) [[unlikely]] return; }
L_0024E590:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 56u)));  goto L_0024E5E8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E5B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x0024E5B4u) [[unlikely]] return; }
L_0024E5B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_0024E738; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 100u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E5CCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0024E5CCu) [[unlikely]] return; }
L_0024E5CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 60u)));  goto L_0024E658; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E5E0u);  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x0024E5E0u) [[unlikely]] return; }
L_0024E5E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), 0u);  if (t) { goto L_0024E654; } }
L_0024E5E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024E750; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E618u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x0024E618u) [[unlikely]] return; }
L_0024E618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_0024E738; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E634u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0024E634u) [[unlikely]] return; }
L_0024E634:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024E654; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E650u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E650u) [[unlikely]] return; }
L_0024E650:
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 1;
L_0024E654:
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_0024E658:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 21324ull;
    set32(c.r[7], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] >> 8);
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[7].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 15;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0024E6A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E69Cu); set32(c.r[4], c.r[16].w[0] + 72u);  if (depth < kMaxDepth) unit_0022(c, 92u, depth + 1u); else { c.pc = 0x001A8E80u; return; } if (c.pc != 0x0024E69Cu) [[unlikely]] return; }
L_0024E69C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0024E6BC; } }
L_0024E6A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E6B8u); set32(c.r[5], c.r[5].w[0] - 13797u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0024E6B8u) [[unlikely]] return; }
L_0024E6B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0024E6BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E6C4u);  if (depth < kMaxDepth) unit_004B(c, 324u, depth + 1u); else { c.pc = 0x0024EE20u; return; } if (c.pc != 0x0024E6C4u) [[unlikely]] return; }
L_0024E6C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E6D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x0024E6D0u) [[unlikely]] return; }
L_0024E6D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0024E738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0024E6EC; } }
L_0024E6E0:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_0024E6EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E6F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 324u, depth + 1u); else { c.pc = 0x0024EE20u; return; } if (c.pc != 0x0024E6F4u) [[unlikely]] return; }
L_0024E6F4:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 64u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E6E0u | kUnwind; return; } goto L_0024E6E0; }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_0024E750; } }
L_0024E71C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E724u);  if (depth < kMaxDepth) unit_0044(c, 498u, depth + 1u); else { c.pc = 0x00233940u; return; } if (c.pc != 0x0024E724u) [[unlikely]] return; }
L_0024E724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024E750; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_0024E750; } }
L_0024E738:
    set32(c.r[2], 0u - 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E750u); set32(c.r[5], c.r[5].w[0] - 13769u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x0024E750u) [[unlikely]] return; }
L_0024E750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0024E754:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_0024E770:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 280u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E7B0u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0024E7B0u) [[unlikely]] return; }
L_0024E7B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E7B8u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0024E7B8u) [[unlikely]] return; }
L_0024E7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E7C0u); set32(c.r[4], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0024E7C0u) [[unlikely]] return; }
L_0024E7C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E7C8u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0024E7C8u) [[unlikely]] return; }
L_0024E7C8:
    set32(c.r[2], 0u + 100u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[16].sd[0] < 90ll ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 248u);  goto L_0024E7F0; }
    set32(c.r[16], 0u + 90u);
    set32(c.r[4], c.r[29].w[0] + 248u);
    c.budget -= 2;
L_0024E7F0:
    set32(c.r[5], c.r[21].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E7FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024E7FCu) [[unlikely]] return; }
L_0024E7FC:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 248u));
    set32(c.r[5], c.r[29].w[0] + 280u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E814u); st64((c.r[29].w[0] + 280u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024E814u) [[unlikely]] return; }
L_0024E814:
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    st32((c.r[29].w[0] + 272u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 276u), c.r[2].w[0]);  if (t) { goto L_0024E860; } }
L_0024E82C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E834u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x0024E834u) [[unlikely]] return; }
L_0024E834:
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[4], c.r[29].w[0] + 280u);
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[29].w[0] + 272u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E850u); st32((c.r[29].w[0] + 276u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x0024E850u) [[unlikely]] return; }
L_0024E850:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0024E860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0024EA88; } }
L_0024E860:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E874u); set32(c.r[6], c.r[6].w[0] - 13736u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024E874u) [[unlikely]] return; }
L_0024E874:
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 232u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E82Cu | kUnwind; return; } goto L_0024E82C; }
    set32(c.r[4], c.r[29].w[0] + 216u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E890u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024E890u) [[unlikely]] return; }
L_0024E890:
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    st32((c.r[29].w[0] + 264u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 268u), c.r[2].w[0]);  if (t) { goto L_0024E8DC; } }
L_0024E8A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E8B0u); set32(c.r[5], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x0024E8B0u) [[unlikely]] return; }
L_0024E8B0:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[29].w[0] + 264u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E8CCu); st32((c.r[29].w[0] + 268u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x0024E8CCu) [[unlikely]] return; }
L_0024E8CC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0024E8DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0024EA88; } }
L_0024E8DC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 200u);
    set32(c.r[5], c.r[29].w[0] + 264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E8F0u); set32(c.r[6], c.r[6].w[0] - 13730u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024E8F0u) [[unlikely]] return; }
L_0024E8F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 208u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E8A8u | kUnwind; return; } goto L_0024E8A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E904u); set32(c.r[4], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x0024E904u) [[unlikely]] return; }
L_0024E904:
    set32(c.r[18], 0u - 1u);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[22].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0024EA78; } }
L_0024E918:
    set32(c.r[5], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E924u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024E924u) [[unlikely]] return; }
L_0024E924:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    st32((c.r[29].w[0] + 256u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 256u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E940u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 418u, depth + 1u); else { c.pc = 0x0024FA10u; return; } if (c.pc != 0x0024E940u) [[unlikely]] return; }
L_0024E940:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0024EA78; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 184u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E95Cu); set32(c.r[6], c.r[6].w[0] - 13723u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024E95Cu) [[unlikely]] return; }
L_0024E95C:
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024EA74; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E980u); set32(c.r[6], c.r[6].w[0] - 13716u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024E980u) [[unlikely]] return; }
L_0024E980:
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024EA74; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E9A4u); set32(c.r[6], c.r[6].w[0] - 13711u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024E9A4u) [[unlikely]] return; }
L_0024E9A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024EA74; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E9C8u); set32(c.r[6], c.r[6].w[0] - 13706u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024E9C8u) [[unlikely]] return; }
L_0024E9C8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[22], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E9E0u); set32(c.r[6], c.r[6].w[0] - 13711u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024E9E0u) [[unlikely]] return; }
L_0024E9E0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[18], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E9F8u); set32(c.r[6], c.r[6].w[0] - 13701u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024E9F8u) [[unlikely]] return; }
L_0024E9F8:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 148u)));  if (t) { goto L_0024EA1C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0024EA1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EA1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024EA1Cu) [[unlikely]] return; }
L_0024EA1C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[20].w[0]), 0u);  goto L_0024EA74; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024EA70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EA38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x0024EA38u) [[unlikely]] return; }
L_0024EA38:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024EA64; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_0024EA54; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024EA64; } }
L_0024EA54:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EA64u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x0024EA64u) [[unlikely]] return; }
L_0024EA64:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024EA74; } }
L_0024EA70:
    st32((c.r[20].w[0]), 0u);
    c.budget -= 1;
L_0024EA74:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0024EA78:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 192u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E918u | kUnwind; return; } goto L_0024E918; }
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_0024EA88:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_0024EAC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0024EADC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_0024EADC:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EAF0u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_004B(c, 400u, depth + 1u); else { c.pc = 0x0024F860u; return; } if (c.pc != 0x0024EAF0u) [[unlikely]] return; }
L_0024EAF0:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024EB18; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0024EB18; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024EB18u) [[unlikely]] return; }
L_0024EB18:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 24u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB2Cu); set32(c.r[6], c.r[6].w[0] - 13696u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024EB2Cu) [[unlikely]] return; }
L_0024EB2C:
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024EB40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], c.r[4].w[0] + 72u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 24u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB58u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024EB58u) [[unlikely]] return; }
L_0024EB58:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 24u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB6Cu); set32(c.r[6], c.r[6].w[0] - 13691u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024EB6Cu) [[unlikely]] return; }
L_0024EB6C:
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024EB80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], c.r[4].w[0] + 72u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 24u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB98u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024EB98u) [[unlikely]] return; }
L_0024EB98:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 24u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EBACu); set32(c.r[6], c.r[6].w[0] - 13682u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024EBACu) [[unlikely]] return; }
L_0024EBAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024EBC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], c.r[4].w[0] + 72u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 24u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EBD8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024EBD8u) [[unlikely]] return; }
L_0024EBD8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 24u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EBECu); set32(c.r[6], c.r[6].w[0] - 13675u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024EBECu) [[unlikely]] return; }
L_0024EBEC:
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024EC00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], c.r[4].w[0] + 72u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 24u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EC18u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024EC18u) [[unlikely]] return; }
L_0024EC18:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 24u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EC2Cu); set32(c.r[6], c.r[6].w[0] - 13667u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024EC2Cu) [[unlikely]] return; }
L_0024EC2C:
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024EC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], c.r[4].w[0] + 72u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 24u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EC58u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024EC58u) [[unlikely]] return; }
L_0024EC58:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 24u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EC6Cu); set32(c.r[6], c.r[6].w[0] - 13653u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024EC6Cu) [[unlikely]] return; }
L_0024EC6C:
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024EC80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], c.r[4].w[0] + 72u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 24u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EC98u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024EC98u) [[unlikely]] return; }
L_0024EC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ECA0u); set32(c.r[4], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_0022(c, 134u, depth + 1u); else { c.pc = 0x001A9590u; return; } if (c.pc != 0x0024ECA0u) [[unlikely]] return; }
L_0024ECA0:
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);  goto L_0024ECB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0024ECC8; } }
L_0024ECB4:
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ECC4u); set32(c.r[6], c.r[6].w[0] - 13641u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024ECC4u) [[unlikely]] return; }
L_0024ECC4:
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 1;
L_0024ECC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024ECE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 72u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ED08u); set32(c.r[5], c.r[2].w[0] + 72u);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024ED08u) [[unlikely]] return; }
L_0024ED08:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);  goto L_0024ED54; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);  goto L_0024ED24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0024ED84; } }
L_0024ED24:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ED30u); set32(c.r[5], c.r[5].w[0] - 13632u);  if (depth < kMaxDepth) unit_0022(c, 145u, depth + 1u); else { c.pc = 0x001A96E0u; return; } if (c.pc != 0x0024ED30u) [[unlikely]] return; }
L_0024ED30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0024ED80; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ED4Cu); set32(c.r[6], c.r[6].w[0] - 13632u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024ED4Cu) [[unlikely]] return; }
L_0024ED4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 68u)));  if (t) { goto L_0024ED80; } }
L_0024ED54:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ED60u); set32(c.r[5], c.r[5].w[0] - 13626u);  if (depth < kMaxDepth) unit_0022(c, 145u, depth + 1u); else { c.pc = 0x001A96E0u; return; } if (c.pc != 0x0024ED60u) [[unlikely]] return; }
L_0024ED60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], 0u - 1u);  goto L_0024ED80; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ED7Cu); set32(c.r[6], c.r[6].w[0] - 13626u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024ED7Cu) [[unlikely]] return; }
L_0024ED7C:
    set32(c.r[16], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_0024ED80:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0024ED84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024EDA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], c.r[4].w[0] + 72u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 24u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EDB8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024EDB8u) [[unlikely]] return; }
L_0024EDB8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 24u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EDCCu); set32(c.r[6], c.r[6].w[0] - 13615u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024EDCCu) [[unlikely]] return; }
L_0024EDCC:
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024EDE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], c.r[4].w[0] + 72u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 24u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EDF8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024EDF8u) [[unlikely]] return; }
L_0024EDF8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 24u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EE0Cu); set32(c.r[6], c.r[6].w[0] - 13605u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024EE0Cu) [[unlikely]] return; }
L_0024EE0C:
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024EE20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], c.r[4].w[0] + 72u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 24u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EE38u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024EE38u) [[unlikely]] return; }
L_0024EE38:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 24u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EE4Cu); set32(c.r[6], c.r[6].w[0] - 13598u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024EE4Cu) [[unlikely]] return; }
L_0024EE4C:
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024EE60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024EE88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 12u);  if (t) { goto L_0024EE8C; } }
L_0024EE88:
    set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_0024EE8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EE98u); set32(c.r[5], c.r[5].w[0] - 13591u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x0024EE98u) [[unlikely]] return; }
L_0024EE98:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_0024EEB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 84u)));  if (t) { goto L_0024EFC4; } }
L_0024EEB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_0024EEBC; }
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0024EEBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EEC8u); set32(c.r[5], c.r[5].w[0] - 13581u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x0024EEC8u) [[unlikely]] return; }
L_0024EEC8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_0024EEE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 88u)));  if (t) { goto L_0024EFC4; } }
L_0024EEE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_0024EEEC; }
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0024EEEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EEF8u); set32(c.r[5], c.r[5].w[0] - 13570u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x0024EEF8u) [[unlikely]] return; }
L_0024EEF8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_0024EF10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 92u)));  if (t) { goto L_0024EFC4; } }
L_0024EF10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_0024EF1C; }
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0024EF1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EF28u); set32(c.r[5], c.r[5].w[0] - 13557u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x0024EF28u) [[unlikely]] return; }
L_0024EF28:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 64u)));  goto L_0024EF40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 96u)));  if (t) { goto L_0024EFC4; } }
L_0024EF40:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_0024EF50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024EFC4; } }
L_0024EF50:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[29].w[0] + 76u), c.r[3].w[0]);  goto L_0024EF68; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 4;
L_0024EF68:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EF78u); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_004B(c, 400u, depth + 1u); else { c.pc = 0x0024F860u; return; } if (c.pc != 0x0024EF78u) [[unlikely]] return; }
L_0024EF78:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024EFA0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0024EFA0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EFA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024EFA0u) [[unlikely]] return; }
L_0024EFA0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EFB4u); set32(c.r[6], c.r[6].w[0] - 13706u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024EFB4u) [[unlikely]] return; }
L_0024EFB4:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
L_0024EFC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024EFE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024EFF4; }
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 2;
L_0024EFF4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024F000:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024F028; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 12u);  if (t) { goto L_0024F02C; } }
L_0024F028:
    set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_0024F02C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F038u); set32(c.r[5], c.r[5].w[0] - 13591u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x0024F038u) [[unlikely]] return; }
L_0024F038:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_0024F068; }
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[17].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_0024F1BC; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_0024F1BC; } }
L_0024F068:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_0024F074; }
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0024F074:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F080u); set32(c.r[5], c.r[5].w[0] - 13581u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x0024F080u) [[unlikely]] return; }
L_0024F080:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_0024F0B0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0024F1BC; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_0024F1BC; } }
L_0024F0B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_0024F0BC; }
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0024F0BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F0C8u); set32(c.r[5], c.r[5].w[0] - 13570u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x0024F0C8u) [[unlikely]] return; }
L_0024F0C8:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_0024F0F8; }
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_0024F1BC; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_0024F1BC; } }
L_0024F0F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 31912u)));  goto L_0024F104; }
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0024F104:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F110u); set32(c.r[5], c.r[5].w[0] - 13557u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x0024F110u) [[unlikely]] return; }
L_0024F110:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_0024F140; }
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_0024F1BC; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_0024F1BC; } }
L_0024F140:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[29].w[0] + 76u), c.r[3].w[0]);  goto L_0024F158; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 4;
L_0024F158:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F168u); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_004B(c, 400u, depth + 1u); else { c.pc = 0x0024F860u; return; } if (c.pc != 0x0024F168u) [[unlikely]] return; }
L_0024F168:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024F190; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0024F190; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F190u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024F190u) [[unlikely]] return; }
L_0024F190:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F1A4u); set32(c.r[6], c.r[6].w[0] - 13706u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024F1A4u) [[unlikely]] return; }
L_0024F1A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0024F1BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024F1D0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F208u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0024F208u) [[unlikely]] return; }
L_0024F208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F210u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0024F210u) [[unlikely]] return; }
L_0024F210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F218u); set32(c.r[4], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0024F218u) [[unlikely]] return; }
L_0024F218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F220u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0024F220u) [[unlikely]] return; }
L_0024F220:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F230u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 391u, depth + 1u); else { c.pc = 0x0024F760u; return; } if (c.pc != 0x0024F230u) [[unlikely]] return; }
L_0024F230:
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    st32((c.r[29].w[0] + 232u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 236u), c.r[2].w[0]);  if (t) { goto L_0024F3D4; } }
L_0024F248:
    set32(c.r[5], c.r[29].w[0] + 232u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F254u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024F254u) [[unlikely]] return; }
L_0024F254:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[16], 0u - 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 228u), c.r[2].w[0]);  if (t) { goto L_0024F344; } }
L_0024F274:
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F280u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024F280u) [[unlikely]] return; }
L_0024F280:
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 216u);
    set32(c.r[6], c.r[6].w[0] - 13723u);
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F2A4u); st32((c.r[29].w[0] + 220u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024F2A4u) [[unlikely]] return; }
L_0024F2A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0024F344; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[29].w[0] + 216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F2C8u); set32(c.r[6], c.r[6].w[0] - 13716u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024F2C8u) [[unlikely]] return; }
L_0024F2C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024F340; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F2ECu); set32(c.r[6], c.r[6].w[0] - 13711u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024F2ECu) [[unlikely]] return; }
L_0024F2EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024F340; } }
    c.r[5].d[0] = ld64((c.r[29].w[0] + 216u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F308u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 418u, depth + 1u); else { c.pc = 0x0024FA10u; return; } if (c.pc != 0x0024F308u) [[unlikely]] return; }
L_0024F308:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0024F340; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[29].w[0] + 216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F328u); set32(c.r[6], c.r[6].w[0] - 13711u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024F328u) [[unlikely]] return; }
L_0024F328:
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[22], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 156u)));
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 6;
L_0024F340:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0024F344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F34Cu); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x0024F34Cu) [[unlikely]] return; }
L_0024F34C:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 184u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F274u | kUnwind; return; } goto L_0024F274; }
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0024F3D4; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F374u); set32(c.r[6], c.r[6].w[0] - 13696u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024F374u) [[unlikely]] return; }
L_0024F374:
    set32(c.r[3], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024F3D0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F398u); set32(c.r[6], c.r[6].w[0] - 13730u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024F398u) [[unlikely]] return; }
L_0024F398:
    set32(c.r[6], ld32((c.r[29].w[0] + 140u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F3A8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 447u, depth + 1u); else { c.pc = 0x0024FF20u; return; } if (c.pc != 0x0024F3A8u) [[unlikely]] return; }
L_0024F3A8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F3C0u); set32(c.r[6], c.r[6].w[0] - 13543u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024F3C0u) [[unlikely]] return; }
L_0024F3C0:
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F3D0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 91u, depth + 1u); else { c.pc = 0x00235750u; return; } if (c.pc != 0x0024F3D0u) [[unlikely]] return; }
L_0024F3D0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0024F3D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F3DCu); set32(c.r[4], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x0024F3DCu) [[unlikely]] return; }
L_0024F3DC:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 192u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F248u | kUnwind; return; } goto L_0024F248; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0024F410:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 264u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F448u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0024F448u) [[unlikely]] return; }
L_0024F448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F450u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0024F450u) [[unlikely]] return; }
L_0024F450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F458u); set32(c.r[4], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0024F458u) [[unlikely]] return; }
L_0024F458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F460u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0024F460u) [[unlikely]] return; }
L_0024F460:
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F474u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 391u, depth + 1u); else { c.pc = 0x0024F760u; return; } if (c.pc != 0x0024F474u) [[unlikely]] return; }
L_0024F474:
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    st32((c.r[29].w[0] + 264u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 268u), c.r[2].w[0]);  if (t) { goto L_0024F63C; } }
L_0024F48C:
    set32(c.r[5], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F498u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024F498u) [[unlikely]] return; }
L_0024F498:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[4], c.r[29].w[0] + 216u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[6], c.r[6].w[0] - 13730u);
    st32((c.r[29].w[0] + 256u), c.r[3].w[0]);
    set32(c.r[22], 0u - 1u);
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F4C4u); c.r[23].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024F4C4u) [[unlikely]] return; }
L_0024F4C4:
    set32(c.r[6], ld32((c.r[29].w[0] + 220u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F4D4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_004B(c, 447u, depth + 1u); else { c.pc = 0x0024FF20u; return; } if (c.pc != 0x0024F4D4u) [[unlikely]] return; }
L_0024F4D4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 502u);
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[19].d[0] = 0ull + 0ull;  goto L_0024F5CC; }
    set32(c.r[2], 0u + 503u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0024F63C; }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024F5CC; } }
L_0024F4FC:
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F508u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024F508u) [[unlikely]] return; }
L_0024F508:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[4], c.r[29].w[0] + 200u);
    set32(c.r[5], c.r[29].w[0] + 248u);
    set32(c.r[6], c.r[6].w[0] - 13723u);
    st32((c.r[29].w[0] + 248u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F52Cu); st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024F52Cu) [[unlikely]] return; }
L_0024F52C:
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.r[1].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0024F5CC; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 248u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F550u); set32(c.r[6], c.r[6].w[0] - 13716u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024F550u) [[unlikely]] return; }
L_0024F550:
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024F5C8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 184u);
    set32(c.r[5], c.r[29].w[0] + 248u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F574u); set32(c.r[6], c.r[6].w[0] - 13711u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024F574u) [[unlikely]] return; }
L_0024F574:
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    c.r[1].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024F5C8; } }
    c.r[5].d[0] = ld64((c.r[29].w[0] + 248u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F590u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 418u, depth + 1u); else { c.pc = 0x0024FA10u; return; } if (c.pc != 0x0024F590u) [[unlikely]] return; }
L_0024F590:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0024F5C8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 248u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F5B0u); set32(c.r[6], c.r[6].w[0] - 13711u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024F5B0u) [[unlikely]] return; }
L_0024F5B0:
    set32(c.r[3], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[23], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[22], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 6;
L_0024F5C8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0024F5CC:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F5D8u);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x0024F5D8u) [[unlikely]] return; }
L_0024F5D8:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 208u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F4FCu | kUnwind; return; } goto L_0024F4FC; }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0024F638; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F600u); set32(c.r[6], c.r[6].w[0] - 13543u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024F600u) [[unlikely]] return; }
L_0024F600:
    set32(c.r[2], 0u + 502u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[3], ld32((c.r[29].w[0] + 172u)));  if (t) { goto L_0024F61C; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 503u);  goto L_0024F620; }
    c.r[18].d[0] = c.r[18].d[0] | 1ull;
    c.budget -= 1;
L_0024F61C:
    set32(c.r[2], 0u + 503u);
    c.budget -= 1;
L_0024F620:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0024F638; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024F638; } }
    c.r[18].d[0] = c.r[18].d[0] | 2ull;
    c.budget -= 1;
L_0024F638:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0024F63C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F644u); set32(c.r[4], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x0024F644u) [[unlikely]] return; }
L_0024F644:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 224u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F48Cu | kUnwind; return; } goto L_0024F48C; }
    set32(c.r[3], ld32((c.r[21].w[0] + 68u)));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0024F6CC; }
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F670u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0024F670u) [[unlikely]] return; }
L_0024F670:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024F684; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 144u)));  if (t) { goto L_0024F698; } }
L_0024F684:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024F698; }
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_0024F698:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0024F6A4; }
    c.r[18].d[0] = c.r[18].d[0] | 3ull;
    c.budget -= 1;
L_0024F6A4:
    set32(c.r[4], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024F6C8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0024F6C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F6C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024F6C8u) [[unlikely]] return; }
L_0024F6C8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0024F6CC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_0024F700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F71Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 324u, depth + 1u); else { c.pc = 0x0024EE20u; return; } if (c.pc != 0x0024F71Cu) [[unlikely]] return; }
L_0024F71C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0024F738; } }
L_0024F724:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
L_0024F738:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F724u | kUnwind; return; } goto L_0024F724; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024F760:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F78Cu); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0024F78Cu) [[unlikely]] return; }
L_0024F78C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F794u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0024F794u) [[unlikely]] return; }
L_0024F794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F79Cu); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0024F79Cu) [[unlikely]] return; }
L_0024F79C:
    set32(c.r[5], c.r[16].w[0] + 72u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F7ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024F7ACu) [[unlikely]] return; }
L_0024F7AC:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (t) { goto L_0024F818; } }
L_0024F7C4:
    set32(c.r[5], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F7D0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024F7D0u) [[unlikely]] return; }
L_0024F7D0:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[6].w[0] - 13736u);
    st32((c.r[29].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[19], c.r[17].w[0] + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F7F8u); st32((c.r[29].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024F7F8u) [[unlikely]] return; }
L_0024F7F8:
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[3].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0024F818; }
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0024F83C; } }
L_0024F818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F820u); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x0024F820u) [[unlikely]] return; }
L_0024F820:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 88u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F7C4u | kUnwind; return; } goto L_0024F7C4; }
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0024F83C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0024F860:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 168u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F890u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0024F890u) [[unlikely]] return; }
L_0024F890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F898u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0024F898u) [[unlikely]] return; }
L_0024F898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F8A0u); set32(c.r[4], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0024F8A0u) [[unlikely]] return; }
L_0024F8A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F8A8u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0024F8A8u) [[unlikely]] return; }
L_0024F8A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F8B0u); set32(c.r[4], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x0024F8B0u) [[unlikely]] return; }
L_0024F8B0:
    set32(c.r[5], c.r[16].w[0] + 72u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F8C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024F8C0u) [[unlikely]] return; }
L_0024F8C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 172u), c.r[2].w[0]);  if (t) { goto L_0024F9C4; } }
L_0024F8D8:
    set32(c.r[5], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F8E4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024F8E4u) [[unlikely]] return; }
L_0024F8E4:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 164u), c.r[2].w[0]);  if (t) { goto L_0024F9AC; } }
L_0024F8FC:
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F908u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024F908u) [[unlikely]] return; }
L_0024F908:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_0024F994; } }
L_0024F920:
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F92Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024F92Cu) [[unlikely]] return; }
L_0024F92C:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[6].w[0] - 13701u);
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F950u); st32((c.r[29].w[0] + 148u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024F950u) [[unlikely]] return; }
L_0024F950:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 100u)));  if (t) { goto L_0024F964; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 12u);  if (t) { goto L_0024F968; } }
L_0024F964:
    set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_0024F968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F970u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x0024F970u) [[unlikely]] return; }
L_0024F970:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0024F994; }
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0024F9E8; } }
L_0024F994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F99Cu); set32(c.r[4], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x0024F99Cu) [[unlikely]] return; }
L_0024F99C:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F920u | kUnwind; return; } goto L_0024F920; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0024F9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F9B4u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x0024F9B4u) [[unlikely]] return; }
L_0024F9B4:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F8FCu | kUnwind; return; } goto L_0024F8FC; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0024F9C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F9CCu); set32(c.r[4], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_0022(c, 103u, depth + 1u); else { c.pc = 0x001A9030u; return; } if (c.pc != 0x0024F9CCu) [[unlikely]] return; }
L_0024F9CC:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 120u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F8D8u | kUnwind; return; } goto L_0024F8D8; }
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0024F9E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0024FA10:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 152u), c.r[5].d[0]);
    st32((c.r[29].w[0] + 260u), 0u);
    st32((c.r[29].w[0] + 256u), 0u);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 272u), 0u);  if (t) { goto L_0024FEA4; } }
L_0024FA58:
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FA68u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024FA68u) [[unlikely]] return; }
L_0024FA68:
    set32(c.r[4], c.r[29].w[0] + 344u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FA74u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x0024FA74u) [[unlikely]] return; }
L_0024FA74:
    set32(c.r[16], ld32((c.r[29].w[0] + 348u)));
    set32(c.r[6], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FA88u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024FA88u) [[unlikely]] return; }
L_0024FA88:
    set32(c.r[4], c.r[29].w[0] + 328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FA94u); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x0024FA94u) [[unlikely]] return; }
L_0024FA94:
    set32(c.r[23], ld32((c.r[29].w[0] + 332u)));
    set32(c.r[6], c.r[17].w[0] + 2u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FAA8u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024FAA8u) [[unlikely]] return; }
L_0024FAA8:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FAB4u); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x0024FAB4u) [[unlikely]] return; }
L_0024FAB4:
    set32(c.r[18], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[6], c.r[17].w[0] + 3u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FAC8u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x0024FAC8u) [[unlikely]] return; }
L_0024FAC8:
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FAD4u); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x0024FAD4u) [[unlikely]] return; }
L_0024FAD4:
    set32(c.r[3], 0u + 1000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[3].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[17].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[21], ld32((c.r[29].w[0] + 300u)));  if (t) { goto L_0024FBE0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_0024FBA4; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[5].d[0]) { set32(c.r[4], c.r[29].w[0] + 192u);  goto L_0024FB64; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 224u);  goto L_0024FB20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0024FBE4; } }
L_0024FB20:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FB2Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0024FB2Cu) [[unlikely]] return; }
L_0024FB2C:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FB38u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024FB38u) [[unlikely]] return; }
L_0024FB38:
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024FBE0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0024FBE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FB5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024FB5Cu) [[unlikely]] return; }
L_0024FB5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FBE0; } }
L_0024FB64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FB6Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0024FB6Cu) [[unlikely]] return; }
L_0024FB6C:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FB78u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024FB78u) [[unlikely]] return; }
L_0024FB78:
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024FBE0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0024FBE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FB9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024FB9Cu) [[unlikely]] return; }
L_0024FB9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FBE0; } }
L_0024FBA4:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FBB0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x0024FBB0u) [[unlikely]] return; }
L_0024FBB0:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FBBCu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x0024FBBCu) [[unlikely]] return; }
L_0024FBBC:
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024FBE0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0024FBE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FBE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024FBE0u) [[unlikely]] return; }
L_0024FBE0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0024FBE4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0024FE14; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { c.r[1].d[0] = c.r[23].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;  goto L_0024FC18; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0024FC14; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0024FC14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0024FE64; } }
L_0024FC14:
    c.r[1].d[0] = c.r[23].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 1;
L_0024FC18:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024FE60; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[23].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 14240u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0024C000u < 16384u) { entry = entries_004B[(t - 0x0024C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024FC3C:
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024FC50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 256u)));  if (t) { goto L_0024FC64; } }
L_0024FC50:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024FC64; }
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_0024FC64:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { c.r[19].d[0] = 0ull + 0ull;  goto L_0024FE60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0024FE60; } }
L_0024FC74:
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024FC88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 256u)));  if (t) { goto L_0024FC9C; } }
L_0024FC88:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024FC9C; }
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_0024FC9C:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0024FE60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0024FE60; } }
L_0024FCB0:
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024FCC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 256u)));  if (t) { goto L_0024FCD8; } }
L_0024FCC4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024FCD8; }
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_0024FCD8:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0024FE60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0024FE60; } }
L_0024FCEC:
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024FD00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 256u)));  if (t) { goto L_0024FD14; } }
L_0024FD00:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024FD14; }
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_0024FD14:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[19].d[0] = 0ull + 0ull;  goto L_0024FE60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0024FE60; } }
L_0024FD24:
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024FD38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 256u)));  if (t) { goto L_0024FD4C; } }
L_0024FD38:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024FD4C; }
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_0024FD4C:
    c.r[2].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0024FE60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0024FE60; } }
L_0024FD60:
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024FD74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 256u)));  if (t) { goto L_0024FD88; } }
L_0024FD74:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024FD88; }
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_0024FD88:
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0024FE60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0024FE60; } }
L_0024FD9C:
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024FDB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 256u)));  if (t) { goto L_0024FDC4; } }
L_0024FDB0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024FDC4; }
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_0024FDC4:
    c.r[2].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], 0u + 1u);  goto L_0024FE60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0024FE60; } }
L_0024FDD8:
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024FDEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 256u)));  if (t) { goto L_0024FE00; } }
L_0024FDEC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024FE00; }
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_0024FE00:
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], 0u + 1u);  goto L_0024FE60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0024FE60; } }
L_0024FE14:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024FE34; }
    set32(c.r[2], ld32((c.r[22].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], 0u + 1u);  goto L_0024FE60; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024FE34:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { c.r[19].d[0] = 0ull + 0ull;  goto L_0024FE60; }
    set32(c.r[2], ld32((c.r[22].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0024FE5C; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FE60; } }
L_0024FE5C:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024FE60:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0024FE64:
    c.budget -= 2;
    if (c.r[21].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0024FE98; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_0024FE88; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 260u)));  goto L_0024FECC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_0024FEA4; } }
L_0024FE88:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0024FEA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FEC8; } }
L_0024FE98:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0024FEC8; } }
L_0024FEA0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0024FEA4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 280u);
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FEB8u); set32(c.r[6], c.r[6].w[0] - 13538u);  if (depth < kMaxDepth) unit_0022(c, 138u, depth + 1u); else { c.pc = 0x001A9600u; return; } if (c.pc != 0x0024FEB8u) [[unlikely]] return; }
L_0024FEB8:
    set32(c.r[2], ld32((c.r[29].w[0] + 284u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024FA58u | kUnwind; return; } goto L_0024FA58; }
L_0024FEC8:
    set32(c.r[4], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 1;
L_0024FECC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_0024FEF0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0024FEEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FEECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x0024FEECu) [[unlikely]] return; }
L_0024FEEC:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0024FEF0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_0024FF20:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);  c.pc = t; return; }
L_0024FF40:
    set32(c.r[2], 0u + 605u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 50u);  [[clang::musttail]] return unit_004C(c, 3u, depth); }
    set32(c.r[2], 0u + 604u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 49u);  [[clang::musttail]] return unit_004C(c, 3u, depth); }
    set32(c.r[2], 0u + 603u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 48u);  [[clang::musttail]] return unit_004C(c, 3u, depth); }
    set32(c.r[2], 0u + 602u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 47u);  [[clang::musttail]] return unit_004C(c, 3u, depth); }
    set32(c.r[2], 0u + 601u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 46u);  [[clang::musttail]] return unit_004C(c, 3u, depth); }
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 45u);  [[clang::musttail]] return unit_004C(c, 3u, depth); }
    set32(c.r[2], 0u + 506u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 43u);  [[clang::musttail]] return unit_004C(c, 3u, depth); }
    set32(c.r[2], 0u + 505u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 41u);  [[clang::musttail]] return unit_004C(c, 3u, depth); }
    set32(c.r[2], 0u + 504u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 40u);  [[clang::musttail]] return unit_004C(c, 3u, depth); }
    set32(c.r[2], 0u + 503u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 39u);  [[clang::musttail]] return unit_004C(c, 3u, depth); }
    set32(c.r[2], 0u + 502u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 38u);  [[clang::musttail]] return unit_004C(c, 3u, depth); }
    set32(c.r[2], 0u + 501u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 37u);  [[clang::musttail]] return unit_004C(c, 3u, depth); }
    set32(c.r[2], 0u + 500u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 36u);  [[clang::musttail]] return unit_004C(c, 3u, depth); }
    set32(c.r[2], 0u + 405u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 34u);  [[clang::musttail]] return unit_004C(c, 3u, depth); }
    set32(c.r[2], 0u + 404u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 33u);  [[clang::musttail]] return unit_004C(c, 3u, depth); }
    set32(c.r[2], 0u + 403u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 32u);  [[clang::musttail]] return unit_004C(c, 3u, depth); }
    [[clang::musttail]] return unit_004C(c, 1u, depth);
}

}
