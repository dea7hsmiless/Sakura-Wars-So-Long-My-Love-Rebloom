#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007D[4096] = {
    1, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    66, 0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99,
    0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 102, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0,
    0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 153,
    0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155,
    0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0,
    0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0,
    0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0,
    0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 243,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0,
    0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308,
    0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0,
    0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0,
    0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0,
    0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354,
    0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364,
    0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_007D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00314000;
    case 2u: goto L_00314004;
    case 3u: goto L_00314008;
    case 4u: goto L_00314030;
    case 5u: goto L_003140A0;
    case 6u: goto L_003140BC;
    case 7u: goto L_003140C0;
    case 8u: goto L_003140DC;
    case 9u: goto L_003140FC;
    case 10u: goto L_00314108;
    case 11u: goto L_00314130;
    case 12u: goto L_00314144;
    case 13u: goto L_00314170;
    case 14u: goto L_00314190;
    case 15u: goto L_003141A4;
    case 16u: goto L_00314214;
    case 17u: goto L_00314228;
    case 18u: goto L_00314240;
    case 19u: goto L_0031425C;
    case 20u: goto L_003142A0;
    case 21u: goto L_003142B0;
    case 22u: goto L_003142E4;
    case 23u: goto L_003142F4;
    case 24u: goto L_00314328;
    case 25u: goto L_00314338;
    case 26u: goto L_00314360;
    case 27u: goto L_00314380;
    case 28u: goto L_003143A0;
    case 29u: goto L_003143E0;
    case 30u: goto L_003143E8;
    case 31u: goto L_00314408;
    case 32u: goto L_00314414;
    case 33u: goto L_0031442C;
    case 34u: goto L_00314450;
    case 35u: goto L_00314494;
    case 36u: goto L_003144B0;
    case 37u: goto L_003144DC;
    case 38u: goto L_00314548;
    case 39u: goto L_00314568;
    case 40u: goto L_003145E0;
    case 41u: goto L_00314654;
    case 42u: goto L_003146B4;
    case 43u: goto L_003146D8;
    case 44u: goto L_00314744;
    case 45u: goto L_0031476C;
    case 46u: goto L_00314778;
    case 47u: goto L_00314780;
    case 48u: goto L_003147D0;
    case 49u: goto L_003147DC;
    case 50u: goto L_00314800;
    case 51u: goto L_0031481C;
    case 52u: goto L_00314828;
    case 53u: goto L_00314834;
    case 54u: goto L_003148A8;
    case 55u: goto L_003148C4;
    case 56u: goto L_003148E4;
    case 57u: goto L_0031495C;
    case 58u: goto L_003149D0;
    case 59u: goto L_00314A50;
    case 60u: goto L_00314AB0;
    case 61u: goto L_00314AD4;
    case 62u: goto L_00314B40;
    case 63u: goto L_00314B64;
    case 64u: goto L_00314BD0;
    case 65u: goto L_00314C70;
    case 66u: goto L_00314C80;
    case 67u: goto L_00314C90;
    case 68u: goto L_00314C9C;
    case 69u: goto L_00314CA8;
    case 70u: goto L_00314CB0;
    case 71u: goto L_00314D00;
    case 72u: goto L_00314D0C;
    case 73u: goto L_00314D30;
    case 74u: goto L_00314D40;
    case 75u: goto L_00314D60;
    case 76u: goto L_00314D80;
    case 77u: goto L_00314DA0;
    case 78u: goto L_00314DAC;
    case 79u: goto L_00314DB8;
    case 80u: goto L_00314E2C;
    case 81u: goto L_00314E48;
    case 82u: goto L_00314E54;
    case 83u: goto L_00314E64;
    case 84u: goto L_00314EB8;
    case 85u: goto L_00314ED8;
    case 86u: goto L_00314EF4;
    case 87u: goto L_00314F2C;
    case 88u: goto L_00314F68;
    case 89u: goto L_00314FA4;
    case 90u: goto L_00314FB0;
    case 91u: goto L_00314FBC;
    case 92u: goto L_00314FCC;
    case 93u: goto L_00314FD8;
    case 94u: goto L_00314FE4;
    case 95u: goto L_00314FF0;
    case 96u: goto L_0031502C;
    case 97u: goto L_00315134;
    case 98u: goto L_0031513C;
    case 99u: goto L_0031517C;
    case 100u: goto L_0031519C;
    case 101u: goto L_003151BC;
    case 102u: goto L_0031521C;
    case 103u: goto L_00315220;
    case 104u: goto L_0031523C;
    case 105u: goto L_00315248;
    case 106u: goto L_00315260;
    case 107u: goto L_00315288;
    case 108u: goto L_003152A8;
    case 109u: goto L_003152B4;
    case 110u: goto L_003152CC;
    case 111u: goto L_003152F4;
    case 112u: goto L_00315314;
    case 113u: goto L_00315320;
    case 114u: goto L_00315338;
    case 115u: goto L_00315354;
    case 116u: goto L_003153C4;
    case 117u: goto L_003153E4;
    case 118u: goto L_0031546C;
    case 119u: goto L_003154D0;
    case 120u: goto L_003154F0;
    case 121u: goto L_00315578;
    case 122u: goto L_003155D4;
    case 123u: goto L_003155F4;
    case 124u: goto L_00315678;
    case 125u: goto L_00315698;
    case 126u: goto L_003156A8;
    case 127u: goto L_003156C0;
    case 128u: goto L_003156FC;
    case 129u: goto L_00315738;
    case 130u: goto L_0031574C;
    case 131u: goto L_00315768;
    case 132u: goto L_003157A4;
    case 133u: goto L_0031583C;
    case 134u: goto L_003158C8;
    case 135u: goto L_00315954;
    case 136u: goto L_00315968;
    case 137u: goto L_00315970;
    case 138u: goto L_00315990;
    case 139u: goto L_003159A4;
    case 140u: goto L_003159AC;
    case 141u: goto L_003159CC;
    case 142u: goto L_003159E0;
    case 143u: goto L_003159E8;
    case 144u: goto L_00315A00;
    case 145u: goto L_00315A30;
    case 146u: goto L_00315AA8;
    case 147u: goto L_00315AB4;
    case 148u: goto L_00315ACC;
    case 149u: goto L_00315AF0;
    case 150u: goto L_00315B4C;
    case 151u: goto L_00315B58;
    case 152u: goto L_00315B64;
    case 153u: goto L_00315B7C;
    case 154u: goto L_00315BA0;
    case 155u: goto L_00315BFC;
    case 156u: goto L_00315C08;
    case 157u: goto L_00315C20;
    case 158u: goto L_00315C40;
    case 159u: goto L_00315C60;
    case 160u: goto L_00315C80;
    case 161u: goto L_00315CA0;
    case 162u: goto L_00315CD4;
    case 163u: goto L_00315CE0;
    case 164u: goto L_00315D00;
    case 165u: goto L_00315D10;
    case 166u: goto L_00315D20;
    case 167u: goto L_00315D30;
    case 168u: goto L_00315D40;
    case 169u: goto L_00315D50;
    case 170u: goto L_00315D80;
    case 171u: goto L_00315DA0;
    case 172u: goto L_00315DC0;
    case 173u: goto L_00315DD4;
    case 174u: goto L_00315E10;
    case 175u: goto L_00315F04;
    case 176u: goto L_00315F30;
    case 177u: goto L_00315FA0;
    case 178u: goto L_00315FBC;
    case 179u: goto L_00316000;
    case 180u: goto L_00316014;
    case 181u: goto L_00316034;
    case 182u: goto L_00316048;
    case 183u: goto L_00316068;
    case 184u: goto L_00316090;
    case 185u: goto L_003160AC;
    case 186u: goto L_003160D0;
    case 187u: goto L_003160EC;
    case 188u: goto L_00316108;
    case 189u: goto L_00316124;
    case 190u: goto L_00316140;
    case 191u: goto L_00316170;
    case 192u: goto L_003161A0;
    case 193u: goto L_003161B8;
    case 194u: goto L_003161CC;
    case 195u: goto L_003161E4;
    case 196u: goto L_003161F8;
    case 197u: goto L_00316210;
    case 198u: goto L_00316224;
    case 199u: goto L_0031623C;
    case 200u: goto L_00316250;
    case 201u: goto L_00316268;
    case 202u: goto L_00316280;
    case 203u: goto L_00316294;
    case 204u: goto L_003162D0;
    case 205u: goto L_003162E4;
    case 206u: goto L_003162F0;
    case 207u: goto L_00316318;
    case 208u: goto L_00316334;
    case 209u: goto L_00316348;
    case 210u: goto L_00316364;
    case 211u: goto L_00316378;
    case 212u: goto L_00316394;
    case 213u: goto L_003163A8;
    case 214u: goto L_003163C4;
    case 215u: goto L_003163D8;
    case 216u: goto L_003163F4;
    case 217u: goto L_00316410;
    case 218u: goto L_00316424;
    case 219u: goto L_00316450;
    case 220u: goto L_00316460;
    case 221u: goto L_003164A8;
    case 222u: goto L_003164C4;
    case 223u: goto L_003164D8;
    case 224u: goto L_003164F4;
    case 225u: goto L_00316508;
    case 226u: goto L_00316524;
    case 227u: goto L_00316538;
    case 228u: goto L_00316554;
    case 229u: goto L_00316568;
    case 230u: goto L_00316584;
    case 231u: goto L_00316598;
    case 232u: goto L_003165B4;
    case 233u: goto L_003165C8;
    case 234u: goto L_003165E4;
    case 235u: goto L_0031661C;
    case 236u: goto L_00316624;
    case 237u: goto L_00316634;
    case 238u: goto L_00316674;
    case 239u: goto L_003166A8;
    case 240u: goto L_003166E0;
    case 241u: goto L_00316758;
    case 242u: goto L_00316764;
    case 243u: goto L_0031677C;
    case 244u: goto L_003167A0;
    case 245u: goto L_00316818;
    case 246u: goto L_00316824;
    case 247u: goto L_0031683C;
    case 248u: goto L_00316860;
    case 249u: goto L_003168BC;
    case 250u: goto L_003168C8;
    case 251u: goto L_003168D4;
    case 252u: goto L_003168EC;
    case 253u: goto L_00316910;
    case 254u: goto L_00316920;
    case 255u: goto L_00316930;
    case 256u: goto L_00316940;
    case 257u: goto L_00316950;
    case 258u: goto L_00316960;
    case 259u: goto L_00316990;
    case 260u: goto L_003169B0;
    case 261u: goto L_003169D0;
    case 262u: goto L_003169E4;
    case 263u: goto L_00316A34;
    case 264u: goto L_00316A3C;
    case 265u: goto L_00316A60;
    case 266u: goto L_00316A7C;
    case 267u: goto L_00316A90;
    case 268u: goto L_00316AC0;
    case 269u: goto L_00316BB4;
    case 270u: goto L_00316BE0;
    case 271u: goto L_00316C50;
    case 272u: goto L_00316C54;
    case 273u: goto L_00316C6C;
    case 274u: goto L_00316CB8;
    case 275u: goto L_00316D28;
    case 276u: goto L_00316D40;
    case 277u: goto L_00316D60;
    case 278u: goto L_00316D70;
    case 279u: goto L_00316D90;
    case 280u: goto L_00316DA4;
    case 281u: goto L_00316DC4;
    case 282u: goto L_00316DF0;
    case 283u: goto L_00316E0C;
    case 284u: goto L_00316E28;
    case 285u: goto L_00316E6C;
    case 286u: goto L_00316ED8;
    case 287u: goto L_00316F44;
    case 288u: goto L_00316F60;
    case 289u: goto L_00316F74;
    case 290u: goto L_00316F90;
    case 291u: goto L_00316FE8;
    case 292u: goto L_00316FF4;
    case 293u: goto L_00317020;
    case 294u: goto L_0031703C;
    case 295u: goto L_00317084;
    case 296u: goto L_003170CC;
    case 297u: goto L_003170F8;
    case 298u: goto L_00317114;
    case 299u: goto L_0031712C;
    case 300u: goto L_00317140;
    case 301u: goto L_0031715C;
    case 302u: goto L_00317170;
    case 303u: goto L_00317184;
    case 304u: goto L_003171A0;
    case 305u: goto L_003171BC;
    case 306u: goto L_00317258;
    case 307u: goto L_003172E0;
    case 308u: goto L_003172FC;
    case 309u: goto L_00317320;
    case 310u: goto L_00317340;
    case 311u: goto L_00317370;
    case 312u: goto L_00317384;
    case 313u: goto L_003173A0;
    case 314u: goto L_0031742C;
    case 315u: goto L_0031744C;
    case 316u: goto L_003174B8;
    case 317u: goto L_003174C0;
    case 318u: goto L_003174C8;
    case 319u: goto L_00317520;
    case 320u: goto L_00317534;
    case 321u: goto L_00317580;
    case 322u: goto L_00317594;
    case 323u: goto L_00317644;
    case 324u: goto L_0031764C;
    case 325u: goto L_00317658;
    case 326u: goto L_00317670;
    case 327u: goto L_00317680;
    case 328u: goto L_00317694;
    case 329u: goto L_003176DC;
    case 330u: goto L_00317770;
    case 331u: goto L_00317780;
    case 332u: goto L_003177E0;
    case 333u: goto L_00317850;
    case 334u: goto L_00317864;
    case 335u: goto L_00317890;
    case 336u: goto L_003178B0;
    case 337u: goto L_003178C4;
    case 338u: goto L_003178DC;
    case 339u: goto L_003178F0;
    case 340u: goto L_00317908;
    case 341u: goto L_00317978;
    case 342u: goto L_00317988;
    case 343u: goto L_003179A8;
    case 344u: goto L_00317A14;
    case 345u: goto L_00317A34;
    case 346u: goto L_00317A78;
    case 347u: goto L_00317A8C;
    case 348u: goto L_00317AB0;
    case 349u: goto L_00317ACC;
    case 350u: goto L_00317B00;
    case 351u: goto L_00317B10;
    case 352u: goto L_00317B30;
    case 353u: goto L_00317B70;
    case 354u: goto L_00317B7C;
    case 355u: goto L_00317B88;
    case 356u: goto L_00317BA0;
    case 357u: goto L_00317BC0;
    case 358u: goto L_00317C30;
    case 359u: goto L_00317C9C;
    case 360u: goto L_00317CC0;
    case 361u: goto L_00317D20;
    case 362u: goto L_00317D4C;
    case 363u: goto L_00317D64;
    case 364u: goto L_00317D7C;
    case 365u: goto L_00317D9C;
    case 366u: goto L_00317DA8;
    case 367u: goto L_00317DD0;
    case 368u: goto L_00317DF4;
    case 369u: goto L_00317E30;
    case 370u: goto L_00317E74;
    case 371u: goto L_00317E9C;
    case 372u: goto L_00317EB0;
    case 373u: goto L_00317EC4;
    case 374u: goto L_00317F48;
    case 375u: goto L_00317F90;
    default: bad_entry(c, 0x00314000u); return;
    }
L_00314000:
    set32(c.r[5], 0u + 11100u);
    c.budget -= 1;
L_00314004:
    set32(c.r[2], ld32((c.r[19].w[0] + 1424u)));
    c.budget -= 1;
L_00314008:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003140BC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00314028; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00314090; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00314028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314030u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00314030u) [[unlikely]] return; }
L_00314030:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00314054; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00314064; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_00314054:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00314064:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00314090; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00314084; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00314084; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_00314084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314090; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00314090:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 11100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003140A0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x003140A0u) [[unlikely]] return; }
L_003140A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003140BC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003140BCu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x003140BCu) [[unlikely]] return; }
L_003140BC:
    set32(c.r[2], 0u + 21u);
    c.budget -= 1;
L_003140C0:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 124u);  goto L_003140D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00314108; } }
    set32(c.r[4], 0u + 124u);
    c.budget -= 1;
L_003140D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003140DCu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003140DCu) [[unlikely]] return; }
L_003140DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0031410C; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003140FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 11u, depth + 1u); else { c.pc = 0x00314130u; return; } if (c.pc != 0x003140FCu) [[unlikely]] return; }
L_003140FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314108; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00314108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0031410C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00314130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314144u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 294u, depth + 1u); else { c.pc = 0x00272710u; return; } if (c.pc != 0x00314144u) [[unlikely]] return; }
L_00314144:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 21488u);
    set32(c.r[2], c.r[2].w[0] - 21432u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314170u); set32(c.r[5], 0u + 23u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x00314170u) [[unlikely]] return; }
L_00314170:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00314190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003141A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x003141A4u) [[unlikely]] return; }
L_003141A4:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_003141CC; }
    c.f[1] = 0u;
    c.budget -= 1;
L_003141CC:
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00314234; }
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00314230; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 72u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314214u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00314214u) [[unlikely]] return; }
L_00314214:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 73u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314228u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00314228u) [[unlikely]] return; }
L_00314228:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 2;
L_00314230:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00314234:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00314240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 10u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031425Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 211u, depth + 1u); else { c.pc = 0x002CA110u; return; } if (c.pc != 0x0031425Cu) [[unlikely]] return; }
L_0031425C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 21536u);
    set32(c.r[3], c.r[3].w[0] - 21524u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C540000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 19266ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003142A0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003142A0u) [[unlikely]] return; }
L_003142A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 240u), 0u);  goto L_003142D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003142B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x003142B0u) [[unlikely]] return; }
L_003142B0:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003142CC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 240u), c.r[2].w[0]);  if (t) { goto L_003142D0; } }
L_003142CC:
    st32((c.r[16].w[0] + 240u), 0u);
    c.budget -= 1;
L_003142D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003142E4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003142E4u) [[unlikely]] return; }
L_003142E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 244u), 0u);  goto L_00314314; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003142F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x003142F4u) [[unlikely]] return; }
L_003142F4:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00314310; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 244u), c.r[2].w[0]);  if (t) { goto L_00314314; } }
L_00314310:
    st32((c.r[16].w[0] + 244u), 0u);
    c.budget -= 1;
L_00314314:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314328u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00314328u) [[unlikely]] return; }
L_00314328:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 248u), 0u);  goto L_00314358; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314338u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00314338u) [[unlikely]] return; }
L_00314338:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00314354; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 248u), c.r[2].w[0]);  if (t) { goto L_00314358; } }
L_00314354:
    st32((c.r[16].w[0] + 248u), 0u);
    c.budget -= 1;
L_00314358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314360u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x00314360u) [[unlikely]] return; }
L_00314360:
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 21696u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314380u); st32((c.r[2].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00314380u) [[unlikely]] return; }
L_00314380:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003143A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031442C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 21536u);
    set32(c.r[2], c.r[2].w[0] - 21524u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003143E0u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x003143E0u) [[unlikely]] return; }
L_003143E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003143E8u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x003143E8u) [[unlikely]] return; }
L_003143E8:
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF10F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 21648u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314408u); st32((c.r[2].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00314408u) [[unlikely]] return; }
L_00314408:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314414u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 213u, depth + 1u); else { c.pc = 0x002CA1B0u; return; } if (c.pc != 0x00314414u) [[unlikely]] return; }
L_00314414:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00314430; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031442Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0031442Cu) [[unlikely]] return; }
L_0031442C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00314430:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00314450:
    set32(c.r[29], c.r[29].w[0] - 384u);
    set32(c.r[5], 0u + 20001u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314494u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00314494u) [[unlikely]] return; }
L_00314494:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[30], ld32((c.r[3].w[0] + 960u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003144B0u); set32(c.r[23], c.r[2].w[0] + 452u);  if (depth < kMaxDepth) unit_001C(c, 2u, depth + 1u); else { c.pc = 0x00190050u; return; } if (c.pc != 0x003144B0u) [[unlikely]] return; }
L_003144B0:
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_00315A04; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 21616u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00314000u < 16384u) { entry = entries_007D[(t - 0x00314000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003144DC:
    set32(c.r[5], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 584u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  goto L_00314538; }
    set32(c.r[4], ld32((c.r[5].w[0] + 588u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_00314508; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[5].w[0] + 596u)));  goto L_00314510; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00314508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00315A00; } }
L_00314510:
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  goto L_00314528; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00315A00; } }
L_00314528:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00315A00; } }
L_00314538:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00315A00; } }
L_00314548:
    set32(c.r[16], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00314560; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003145B8; } }
L_00314560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314568u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00314568u) [[unlikely]] return; }
L_00314568:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00314588; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00314598; } }
L_00314588:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_00314598:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_003145B8; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_003145B0; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003145B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003145B8; } }
L_003145B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00315A00; } }
    set32(c.r[16], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003145D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00314630; } }
L_003145D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003145E0u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003145E0u) [[unlikely]] return; }
L_003145E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00314600; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00314610; } }
L_00314600:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00314610:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00314630; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_00314628; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00314628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314630; } }
L_00314630:
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0031464C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003146A4; } }
L_0031464C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314654u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00314654u) [[unlikely]] return; }
L_00314654:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00314674; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00314684; } }
L_00314674:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00314684:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_003146A4; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0031469C; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031469C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003146A4; } }
L_003146A4:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[6], 0u + 10000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003146B4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x003146B4u) [[unlikely]] return; }
L_003146B4:
    set32(c.r[18], ld32((c.r[20].w[0] + 44u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003146D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00314734; } }
L_003146D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003146D8u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003146D8u) [[unlikely]] return; }
L_003146D8:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003146F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00314708; } }
L_003146F8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00314708:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00314734; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00314728; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0031472C; } }
L_00314728:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_0031472C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314734; } }
L_00314734:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[6], 0u + 10000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314744u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00314744u) [[unlikely]] return; }
L_00314744:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00315A00; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00315A00; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00315A00; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031476Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 127u, depth + 1u); else { c.pc = 0x002D57D0u; return; } if (c.pc != 0x0031476Cu) [[unlikely]] return; }
L_0031476C:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314778u); set32(c.r[5], 0u + 11100u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00314778u) [[unlikely]] return; }
L_00314778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314780u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00314780u) [[unlikely]] return; }
L_00314780:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.f[3] = ld32((c.r[2].w[0] + 20416u));
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 176u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1320u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 20420u));
    c.f[4] = ld32((c.r[3].w[0] + 192u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 20424u));
    st32((c.r[29].w[0] + 176u), c.f[3]);
    st32((c.r[29].w[0] + 180u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 20428u));
    st32((c.r[29].w[0] + 184u), c.f[1]);
    st32((c.r[29].w[0] + 176u), c.f[4]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003147D0u); st32((c.r[29].w[0] + 188u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x003147D0u) [[unlikely]] return; }
L_003147D0:
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003147DCu); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x003147DCu) [[unlikely]] return; }
L_003147DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314800u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00314800u) [[unlikely]] return; }
L_00314800:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], 0u + 26u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031481Cu); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031481Cu) [[unlikely]] return; }
L_0031481C:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314828u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x00314828u) [[unlikely]] return; }
L_00314828:
    st32((c.r[20].w[0] + 56u), 0u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 3;
L_00314834:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[2] = ld32((c.r[5].w[0] + 80u));  goto L_0031485C; }
    c.f[2] = 0u;
    c.budget -= 1;
L_0031485C:
    c.f[1] = ld32((c.r[20].w[0] + 56u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[20].w[0] + 56u), c.f[1]);  if (t) { goto L_00315A00; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 44u)));  goto L_003148A0; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031489C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 588u), c.r[3].w[0]);
    c.budget -= 3;
L_0031489C:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 1;
L_003148A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003148A8u); set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));  if (depth < kMaxDepth) unit_006D(c, 131u, depth + 1u); else { c.pc = 0x002D5890u; return; } if (c.pc != 0x003148A8u) [[unlikely]] return; }
L_003148A8:
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[3], 0u + 11u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[20].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00315A00; } }
L_003148C4:
    set32(c.r[16], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003148DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00314934; } }
L_003148DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003148E4u); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003148E4u) [[unlikely]] return; }
L_003148E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00314904; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00314914; } }
L_00314904:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_00314914:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00314934; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_0031492C; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031492C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314934; } }
L_00314934:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00315A00; } }
    set32(c.r[16], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00314954; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003149AC; } }
L_00314954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031495Cu); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0031495Cu) [[unlikely]] return; }
L_0031495C:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0031497C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0031498C; } }
L_0031497C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0031498C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003149AC; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_003149A4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003149A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003149AC; } }
L_003149AC:
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003149C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00314A2C; } }
L_003149C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003149D0u); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003149D0u) [[unlikely]] return; }
L_003149D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003149F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00314A00; } }
L_003149F0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00314A00:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00314A2C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_00314A20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00314A24; } }
L_00314A20:
    set32(c.r[2], c.r[2].w[0] + 40u);
    c.budget -= 1;
L_00314A24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314A2C; } }
L_00314A2C:
    set32(c.r[22], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00314A48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00314AA0; } }
L_00314A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314A50u); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00314A50u) [[unlikely]] return; }
L_00314A50:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00314A70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00314A80; } }
L_00314A70:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00314A80:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00314AA0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00314A98; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00314A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314AA0; } }
L_00314AA0:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[6], 0u + 10000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314AB0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00314AB0u) [[unlikely]] return; }
L_00314AB0:
    set32(c.r[19], ld32((c.r[20].w[0] + 44u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00314ACC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00314B30; } }
L_00314ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314AD4u); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00314AD4u) [[unlikely]] return; }
L_00314AD4:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00314AF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00314B04; } }
L_00314AF4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00314B04:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00314B30; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00314B24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00314B28; } }
L_00314B24:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_00314B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314B30; } }
L_00314B30:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[6], 0u + 10000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314B40u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00314B40u) [[unlikely]] return; }
L_00314B40:
    set32(c.r[19], ld32((c.r[20].w[0] + 44u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00314B5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00314BC0; } }
L_00314B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314B64u); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00314B64u) [[unlikely]] return; }
L_00314B64:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00314B84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00314B94; } }
L_00314B84:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00314B94:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00314BC0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00314BB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00314BB8; } }
L_00314BB4:
    set32(c.r[5], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_00314BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314BC0; } }
L_00314BC0:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[6], 0u + 10000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314BD0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00314BD0u) [[unlikely]] return; }
L_00314BD0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00315A00; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00315A00; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00315A00; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00315A00; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00315A00; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 1320u)));
    c.f[0] = ld32((c.r[4].w[0] + 192u));
    st32((c.r[20].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 196u));
    st32((c.r[20].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 200u));
    st32((c.r[20].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 204u));
    st32((c.r[20].w[0] + 236u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.f[1] = ld32((c.r[20].w[0] + 232u));
    c.f[0] = ld32((c.r[20].w[0] + 228u));
    set32(c.r[4], ld32((c.r[4].w[0] + 1320u)));
    st32((c.r[4].w[0] + 192u), 0u);
    st32((c.r[4].w[0] + 196u), c.f[0]);
    st32((c.r[4].w[0] + 200u), c.f[1]);
    st32((c.r[4].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314C70u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 127u, depth + 1u); else { c.pc = 0x002D57D0u; return; } if (c.pc != 0x00314C70u) [[unlikely]] return; }
L_00314C70:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314C80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00314C80u) [[unlikely]] return; }
L_00314C80:
    set32(c.r[4], c.r[17].w[0] + 352u);
    set32(c.r[6], 0u + 16384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314C90u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 241u, depth + 1u); else { c.pc = 0x0018FD70u; return; } if (c.pc != 0x00314C90u) [[unlikely]] return; }
L_00314C90:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314C9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 127u, depth + 1u); else { c.pc = 0x002D57D0u; return; } if (c.pc != 0x00314C9Cu) [[unlikely]] return; }
L_00314C9C:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314CA8u); set32(c.r[5], 0u + 11100u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00314CA8u) [[unlikely]] return; }
L_00314CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314CB0u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00314CB0u) [[unlikely]] return; }
L_00314CB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.f[3] = ld32((c.r[2].w[0] + 20416u));
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1320u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 20420u));
    c.f[4] = ld32((c.r[3].w[0] + 192u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 20424u));
    st32((c.r[29].w[0] + 160u), c.f[3]);
    st32((c.r[29].w[0] + 164u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 20428u));
    st32((c.r[29].w[0] + 168u), c.f[1]);
    st32((c.r[29].w[0] + 160u), c.f[4]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314D00u); st32((c.r[29].w[0] + 172u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00314D00u) [[unlikely]] return; }
L_00314D00:
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314D0Cu); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00314D0Cu) [[unlikely]] return; }
L_00314D0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314D30u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00314D30u) [[unlikely]] return; }
L_00314D30:
    set32(c.r[5], ld32((c.r[18].w[0] + 144u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314D40u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00314D40u) [[unlikely]] return; }
L_00314D40:
    set32(c.r[2], ld32((c.r[20].w[0] + 240u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 244u)));  goto L_00314D64; }
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], 0u + 10000u);
    set32(c.r[6], 0u + 1230u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314D60u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x00314D60u) [[unlikely]] return; }
L_00314D60:
    set32(c.r[2], ld32((c.r[20].w[0] + 244u)));
    c.budget -= 1;
L_00314D64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 248u)));  goto L_00314D84; }
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], 0u + 10000u);
    set32(c.r[6], 0u + 1240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314D80u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x00314D80u) [[unlikely]] return; }
L_00314D80:
    set32(c.r[2], ld32((c.r[20].w[0] + 248u)));
    c.budget -= 1;
L_00314D84:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00314DA4; }
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], 0u + 10000u);
    set32(c.r[6], 0u + 1250u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314DA0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x00314DA0u) [[unlikely]] return; }
L_00314DA0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00314DA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00314E18; } }
L_00314DAC:
    set32(c.r[16], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314DB8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00314DB8u) [[unlikely]] return; }
L_00314DB8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00314E18; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 20001u);
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00314E14; } }
    c.f[0] = ld32((c.r[4].w[0] + 192u));
    set32(c.r[3], c.r[19].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], 0u + 10u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[3].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 196u));
    st32((c.r[3].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 200u));
    st32((c.r[3].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 204u));
    c.budget -= 13;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; st32((c.r[3].w[0] + 76u), c.f[0]);  if (t) { goto L_00314E14; } }
    set32(c.r[19], 0u + 9u);
    c.budget -= 1;
L_00314E14:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00314E18:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00314DACu | kUnwind; return; } goto L_00314DAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314E2Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0068(c, 319u, depth + 1u); else { c.pc = 0x002C3790u; return; } if (c.pc != 0x00314E2Cu) [[unlikely]] return; }
L_00314E2C:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], 0u + 25u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00314E48u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00314E48u) [[unlikely]] return; }
L_00314E48:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314E54u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x00314E54u) [[unlikely]] return; }
L_00314E54:
    set32(c.r[2], 0u + 4u);
    st32((c.r[20].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 56u), 0u);
    st32((c.r[20].w[0] + 60u), 0u);
    c.budget -= 4;
L_00314E64:
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[4].w[0] + 80u));  goto L_00314E8C; }
    c.f[1] = 0u;
    c.budget -= 1;
L_00314E8C:
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    set32(c.r[2], 0u + 136u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 56u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[20].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_00314EC0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314EB8u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x00314EB8u) [[unlikely]] return; }
L_00314EB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 464u)));  if (t) { goto L_00314FA8; } }
L_00314EC0:
    set32(c.r[2], 0u + 149u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 187u);  goto L_00314EE0; }
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314ED8u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x00314ED8u) [[unlikely]] return; }
L_00314ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314FA4; } }
L_00314EE0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 357u);  goto L_00314EFC; }
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314EF4u); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x00314EF4u) [[unlikely]] return; }
L_00314EF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314FA4; } }
L_00314EFC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 367u);  goto L_00314F38; }
    set32(c.r[2], ld32((c.r[20].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00314F34; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], 0u + 27u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00314F2Cu); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00314F2Cu) [[unlikely]] return; }
L_00314F2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314FA4; } }
L_00314F34:
    set32(c.r[2], 0u + 367u);
    c.budget -= 1;
L_00314F38:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 381u);  goto L_00314F74; }
    set32(c.r[2], ld32((c.r[20].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00314F70; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], 0u + 28u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00314F68u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00314F68u) [[unlikely]] return; }
L_00314F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314FA4; } }
L_00314F70:
    set32(c.r[2], 0u + 381u);
    c.budget -= 1;
L_00314F74:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00314FA4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00314FA4; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], 0u + 29u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00314FA4u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00314FA4u) [[unlikely]] return; }
L_00314FA4:
    set32(c.r[4], ld32((c.r[18].w[0] + 464u)));
    c.budget -= 1;
L_00314FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314FB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 163u, depth + 1u); else { c.pc = 0x00159070u; return; } if (c.pc != 0x00314FB0u) [[unlikely]] return; }
L_00314FB0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314FBCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00314FBCu) [[unlikely]] return; }
L_00314FBC:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314FCCu); set32(c.r[5], c.r[18].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x00314FCCu) [[unlikely]] return; }
L_00314FCC:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314FD8u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x00314FD8u) [[unlikely]] return; }
L_00314FD8:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00315080; } }
L_00314FE4:
    set32(c.r[16], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314FF0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00314FF0u) [[unlikely]] return; }
L_00314FF0:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_00315080; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 20001u);
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031507C; } }
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031502Cu); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0031502Cu) [[unlikely]] return; }
L_0031502C:
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], 0u + 10u);
    st32((c.r[6].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    st32((c.r[6].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    st32((c.r[6].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    st32((c.r[6].w[0] + 204u), c.f[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 164u)));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[6].w[0] + 164u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 176u)));
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    c.budget -= 19;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st32((c.r[6].w[0] + 176u), c.r[4].w[0]);  if (t) { goto L_0031507C; } }
    set32(c.r[17], 0u + 9u);
    c.budget -= 1;
L_0031507C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00315080:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00314FE4u | kUnwind; return; } goto L_00314FE4; }
    c.f[1] = ld32((c.r[20].w[0] + 56u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43D20000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00315A00; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));  goto L_003150C8; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003150C4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 584u), 0u);
    c.budget -= 2;
L_003150C4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 1;
L_003150C8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 44u)));  goto L_003150E8; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003150E4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 588u), c.r[3].w[0]);
    c.budget -= 3;
L_003150E4:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 1;
L_003150E8:
    c.f[0] = ld32((c.r[20].w[0] + 224u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 1320u)));
    st32((c.r[4].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 228u));
    st32((c.r[4].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 232u));
    st32((c.r[4].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 236u));
    st32((c.r[4].w[0] + 204u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315134u); set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));  if (depth < kMaxDepth) unit_006D(c, 131u, depth + 1u); else { c.pc = 0x002D5890u; return; } if (c.pc != 0x00315134u) [[unlikely]] return; }
L_00315134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031513Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 131u, depth + 1u); else { c.pc = 0x002D5890u; return; } if (c.pc != 0x0031513Cu) [[unlikely]] return; }
L_0031513C:
    set32(c.r[3], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[2], 0u - 513u);
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[18].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 172u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 240u)));
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[20].w[0] + 44u)));  goto L_003151A0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031517Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0031517Cu) [[unlikely]] return; }
L_0031517C:
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00315190; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_00315190:
    set32(c.r[6], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031519Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 320u, depth + 1u); else { c.pc = 0x0028F420u; return; } if (c.pc != 0x0031519Cu) [[unlikely]] return; }
L_0031519C:
    set32(c.r[16], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 1;
L_003151A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003151B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0031520C; } }
L_003151B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003151BCu); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003151BCu) [[unlikely]] return; }
L_003151BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003151DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003151EC; } }
L_003151DC:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003151EC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0031520C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00315204; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00315204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031520C; } }
L_0031520C:
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[6], 0u + 11100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031521Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0031521Cu) [[unlikely]] return; }
L_0031521C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00315220:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 5u);  goto L_00315240; }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031523Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0031523Cu) [[unlikely]] return; }
L_0031523C:
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_00315240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00315A00; } }
L_00315248:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00315258; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_00315258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315260u);  if (depth < kMaxDepth) unit_005B(c, 330u, depth + 1u); else { c.pc = 0x0028F550u; return; } if (c.pc != 0x00315260u) [[unlikely]] return; }
L_00315260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00315A00; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 244u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 6u);  goto L_003152AC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315288u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00315288u) [[unlikely]] return; }
L_00315288:
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0031529C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_0031529C:
    set32(c.r[6], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003152A8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 320u, depth + 1u); else { c.pc = 0x0028F420u; return; } if (c.pc != 0x003152A8u) [[unlikely]] return; }
L_003152A8:
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_003152AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00315A00; } }
L_003152B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_003152C4; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_003152C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003152CCu);  if (depth < kMaxDepth) unit_005B(c, 330u, depth + 1u); else { c.pc = 0x0028F550u; return; } if (c.pc != 0x003152CCu) [[unlikely]] return; }
L_003152CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00315A00; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 248u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 7u);  goto L_00315318; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003152F4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003152F4u) [[unlikely]] return; }
L_003152F4:
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00315308; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_00315308:
    set32(c.r[6], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315314u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 320u, depth + 1u); else { c.pc = 0x0028F420u; return; } if (c.pc != 0x00315314u) [[unlikely]] return; }
L_00315314:
    set32(c.r[3], 0u + 7u);
    c.budget -= 1;
L_00315318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00315A00; } }
L_00315320:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00315330; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_00315330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315338u);  if (depth < kMaxDepth) unit_005B(c, 330u, depth + 1u); else { c.pc = 0x0028F550u; return; } if (c.pc != 0x00315338u) [[unlikely]] return; }
L_00315338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00315A00; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315354u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00315354u) [[unlikely]] return; }
L_00315354:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_0031545C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00315458; } }
    set32(c.r[3], 0u + 267u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437B0000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 308u), c.r[2].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u - 265u);
    st32((c.r[29].w[0] + 316u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    st32((c.r[29].w[0] + 304u), c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 312u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 608u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 688u);  if (t) { goto L_003153B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (t) { goto L_003153BC; } }
L_003153B8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003153BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003153C4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0052(c, 96u, depth + 1u); else { c.pc = 0x00268F00u; return; } if (c.pc != 0x003153C4u) [[unlikely]] return; }
L_003153C4:
    c.f[12] = ld32((c.r[28].w[0] - 32164u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[7], c.r[29].w[0] + 304u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003153E4u); set32(c.r[9], 0u + 2u);  if (depth < kMaxDepth) unit_0073(c, 343u, depth + 1u); else { c.pc = 0x002EFCD0u; return; } if (c.pc != 0x003153E4u) [[unlikely]] return; }
L_003153E4:
    c.f[1] = ld32((c.r[29].w[0] + 288u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = 0ull | 49152ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 288u), c.f[0]);
    st32((c.r[16].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 292u));
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    st32((c.r[16].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 300u));
    st32((c.r[16].w[0] + 204u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 240u), 0u);
    st32((c.r[16].w[0] + 244u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 248u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 29;
L_00315458:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0031545C:
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031546Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0031546Cu) [[unlikely]] return; }
L_0031546C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00315568; }
    set32(c.r[2], ld32((c.r[20].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00315564; } }
    set32(c.r[3], 0u + 457u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431A0000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 308u), c.r[2].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3850000u);
    st32((c.r[29].w[0] + 312u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    st32((c.r[29].w[0] + 304u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 608u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 688u);  if (t) { goto L_003154C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (t) { goto L_003154C8; } }
L_003154C4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003154C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003154D0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0052(c, 96u, depth + 1u); else { c.pc = 0x00268F00u; return; } if (c.pc != 0x003154D0u) [[unlikely]] return; }
L_003154D0:
    c.f[12] = ld32((c.r[28].w[0] - 32164u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[7], c.r[29].w[0] + 304u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003154F0u); set32(c.r[9], 0u + 2u);  if (depth < kMaxDepth) unit_0073(c, 343u, depth + 1u); else { c.pc = 0x002EFCD0u; return; } if (c.pc != 0x003154F0u) [[unlikely]] return; }
L_003154F0:
    c.f[1] = ld32((c.r[29].w[0] + 288u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = 0ull | 49152ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 288u), c.f[0]);
    st32((c.r[16].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 292u));
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    st32((c.r[16].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 300u));
    st32((c.r[16].w[0] + 204u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 240u), 0u);
    st32((c.r[16].w[0] + 244u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 248u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 29;
L_00315564:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00315568:
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315578u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00315578u) [[unlikely]] return; }
L_00315578:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[20].w[0] + 60u), 0u);  goto L_0031566C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00315668; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B70000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C60000u);
    st32((c.r[29].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 308u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC37A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 608u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 688u);  if (t) { goto L_003155C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (t) { goto L_003155CC; } }
L_003155C8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003155CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003155D4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0052(c, 96u, depth + 1u); else { c.pc = 0x00268F00u; return; } if (c.pc != 0x003155D4u) [[unlikely]] return; }
L_003155D4:
    c.f[12] = ld32((c.r[28].w[0] - 32164u));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[7], c.r[29].w[0] + 304u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003155F4u); set32(c.r[9], 0u + 2u);  if (depth < kMaxDepth) unit_0073(c, 343u, depth + 1u); else { c.pc = 0x002EFCD0u; return; } if (c.pc != 0x003155F4u) [[unlikely]] return; }
L_003155F4:
    c.f[1] = ld32((c.r[29].w[0] + 288u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[0] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[3].d[0] = 0ull | 49152ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 288u), c.f[0]);
    st32((c.r[16].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 292u));
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    st32((c.r[16].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 300u));
    st32((c.r[16].w[0] + 204u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[16].w[0] + 164u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 240u), 0u);
    st32((c.r[16].w[0] + 244u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 248u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 29;
L_00315668:
    st32((c.r[20].w[0] + 60u), 0u);
    c.budget -= 1;
L_0031566C:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00315A00; } }
L_00315678:
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_00315688; }
    set32(c.r[19], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 1;
L_00315688:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00315A00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00315710; } }
L_00315698:
    set32(c.r[17], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003156A8u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x003156A8u) [[unlikely]] return; }
L_003156A8:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003156C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003156C0u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x003156C0u) [[unlikely]] return; }
L_003156C0:
    c.r[3].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_003156C8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00315710; }
    set32(c.r[16], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1296u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031570C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.f[12] = 0u;
    set32(c.r[6], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003156FCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 257u, depth + 1u); else { c.pc = 0x00282630u; return; } if (c.pc != 0x003156FCu) [[unlikely]] return; }
L_003156FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[21], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 4;
L_0031570C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00315710:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00315698u | kUnwind; return; } goto L_00315698; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[3], 0u + 10u);  goto L_00315744; }
    set32(c.r[25], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[4], c.r[20].w[0] + 20u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00315738u); set32(c.r[5], 0u + 14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00315738u) [[unlikely]] return; }
L_00315738:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00315A00; } }
L_00315744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00315A00; } }
L_0031574C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00315A00; } }
    set32(c.r[3], 0u + 10u);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 2;
L_00315768:
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 240u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 244u)));  goto L_00315804; }
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00315800; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003157A4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003157A4u) [[unlikely]] return; }
L_003157A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00315800; } }
    c.f[1] = ld32((c.r[2].w[0] + 200u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.f[4] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[2].w[0] + 196u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[1] = ld32((c.r[2].w[0] + 192u));
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 192u), c.f[0]);
    st32((c.r[2].w[0] + 196u), c.f[2]);
    st32((c.r[2].w[0] + 200u), c.f[3]);
    st32((c.r[2].w[0] + 204u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[2].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 21;
L_00315800:
    set32(c.r[3], ld32((c.r[20].w[0] + 244u)));
    c.budget -= 1;
L_00315804:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 248u)));  goto L_0031589C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00315898; } }
    c.r[1].d[0] = c.r[3].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00315898; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031583Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0031583Cu) [[unlikely]] return; }
L_0031583C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00315898; } }
    c.f[1] = ld32((c.r[2].w[0] + 200u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.f[4] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[2].w[0] + 196u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[1] = ld32((c.r[2].w[0] + 192u));
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 192u), c.f[0]);
    st32((c.r[2].w[0] + 196u), c.f[2]);
    st32((c.r[2].w[0] + 200u), c.f[3]);
    st32((c.r[2].w[0] + 204u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[2].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 21;
L_00315898:
    set32(c.r[3], ld32((c.r[20].w[0] + 248u)));
    c.budget -= 1;
L_0031589C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 60u)));  goto L_00315928; }
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    c.r[1].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00315924; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003158C8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003158C8u) [[unlikely]] return; }
L_003158C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00315924; } }
    c.f[1] = ld32((c.r[2].w[0] + 200u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.f[4] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[2].w[0] + 196u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[1] = ld32((c.r[2].w[0] + 192u));
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 192u), c.f[0]);
    st32((c.r[2].w[0] + 196u), c.f[2]);
    st32((c.r[2].w[0] + 200u), c.f[3]);
    st32((c.r[2].w[0] + 204u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[2].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 21;
L_00315924:
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 1;
L_00315928:
    c.r[1].d[0] = c.r[3].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00315A00; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 240u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 244u)));  goto L_00315974; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315954u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00315954u) [[unlikely]] return; }
L_00315954:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00315970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315968u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x00315968u) [[unlikely]] return; }
L_00315968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315970u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x00315970u) [[unlikely]] return; }
L_00315970:
    set32(c.r[3], ld32((c.r[20].w[0] + 244u)));
    c.budget -= 1;
L_00315974:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 248u)));  goto L_003159B0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315990u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00315990u) [[unlikely]] return; }
L_00315990:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003159AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003159A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x003159A4u) [[unlikely]] return; }
L_003159A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003159ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x003159ACu) [[unlikely]] return; }
L_003159AC:
    set32(c.r[3], ld32((c.r[20].w[0] + 248u)));
    c.budget -= 1;
L_003159B0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], 0u + 11u);  goto L_003159EC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003159CCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003159CCu) [[unlikely]] return; }
L_003159CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003159E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003159E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x003159E0u) [[unlikely]] return; }
L_003159E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003159E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x003159E8u) [[unlikely]] return; }
L_003159E8:
    set32(c.r[4], 0u + 11u);
    c.budget -= 1;
L_003159EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st32((c.r[20].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_00315A00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00315A04:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_00315A30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00315ACC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 21488u);
    set32(c.r[2], c.r[2].w[0] - 21432u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00315AB4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22256u);
    set32(c.r[2], c.r[2].w[0] + 22312u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00315AB4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315AA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00315AA8u) [[unlikely]] return; }
L_00315AA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315AB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00315AB4u) [[unlikely]] return; }
L_00315AB4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00315AD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315ACCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00315ACCu) [[unlikely]] return; }
L_00315ACC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00315AD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00315AF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00315B7C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 21392u);
    set32(c.r[2], c.r[2].w[0] - 21336u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00315B64; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315B4Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x00315B4Cu) [[unlikely]] return; }
L_00315B4C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315B58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00315B58u) [[unlikely]] return; }
L_00315B58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315B64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00315B64u) [[unlikely]] return; }
L_00315B64:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00315B80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315B7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00315B7Cu) [[unlikely]] return; }
L_00315B7C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00315B80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00315BA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00315C20; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 21152u);
    set32(c.r[2], c.r[2].w[0] - 21096u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00315C08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25440u);
    set32(c.r[2], c.r[2].w[0] + 25496u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315BFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00315BFCu) [[unlikely]] return; }
L_00315BFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315C08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00315C08u) [[unlikely]] return; }
L_00315C08:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00315C24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315C20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00315C20u) [[unlikely]] return; }
L_00315C20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00315C24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00315C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 10u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00315C88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315C60u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00315C60u) [[unlikely]] return; }
L_00315C60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00315C90; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00315C74; } }
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_00315C74:
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315C80u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 18u, depth + 1u); else { c.pc = 0x00314240u; return; } if (c.pc != 0x00315C80u) [[unlikely]] return; }
L_00315C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315C8C; } }
L_00315C88:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00315C8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00315C90:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00315CA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00315CCC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 660u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00315CC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00315CD4; } }
L_00315CC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 660u), c.r[2].w[0]);  if (t) { goto L_00315CD4; } }
L_00315CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315CD4u);  if (depth < kMaxDepth) unit_0063(c, 207u, depth + 1u); else { c.pc = 0x002AE0E0u; return; } if (c.pc != 0x00315CD4u) [[unlikely]] return; }
L_00315CD4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00315CE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00315CF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00315D00; } }
L_00315CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315D00u);  if (depth < kMaxDepth) unit_0063(c, 214u, depth + 1u); else { c.pc = 0x002AE2C0u; return; } if (c.pc != 0x00315D00u) [[unlikely]] return; }
L_00315D00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00315D10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00315BA0u | kUnwind; return; } goto L_00315BA0; }
L_00315D20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00315AF0u | kUnwind; return; } goto L_00315AF0; }
L_00315D30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00315A30u | kUnwind; return; } goto L_00315A30; }
L_00315D40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003143A0u | kUnwind; return; } goto L_003143A0; }
L_00315D50:
    set32(c.r[29], c.r[29].w[0] - 80u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315D80u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00315D80u) [[unlikely]] return; }
L_00315D80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00315DA4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315DA0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 172u, depth + 1u); else { c.pc = 0x00315DC0u; return; } if (c.pc != 0x00315DA0u) [[unlikely]] return; }
L_00315DA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00315DA4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00315DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315DD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x00315DD4u) [[unlikely]] return; }
L_00315DD4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 20864u);
    set32(c.r[2], c.r[2].w[0] - 20808u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 1424u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00315E10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00315E50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00316074; } }
L_00315E50:
    set32(c.r[2], ld32((c.r[19].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[19].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 1424u)));  if (t) { goto L_00315EDC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_00315EE0; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_00315EC4; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00315EC0; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00315EC0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00315EC0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00315EC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00315ED4; } }
L_00315EC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_00315EC4:
    c.r[2].d[0] = c.r[2].d[0] | 33464ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1424u), c.r[2].w[0]);  if (t) { goto L_00315EE4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00315ED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1424u), c.r[2].w[0]);  if (t) { goto L_00315EE4; } }
L_00315EDC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00315EE0:
    st32((c.r[19].w[0] + 1424u), c.r[2].w[0]);
    c.budget -= 1;
L_00315EE4:
    set32(c.r[2], ld32((c.r[19].w[0] + 1424u)));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 14u);  goto L_00315FC0; }
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { set32(c.r[2], ld32((c.r[19].w[0] + 1424u)));  goto L_00315F08; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315F04u); set32(c.r[5], 0u + 11100u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00315F04u) [[unlikely]] return; }
L_00315F04:
    set32(c.r[2], ld32((c.r[19].w[0] + 1424u)));
    c.budget -= 1;
L_00315F08:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00315FBC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00315F28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00315F90; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00315F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315F30u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00315F30u) [[unlikely]] return; }
L_00315F30:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00315F54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00315F64; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_00315F54:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00315F64:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00315F90; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00315F84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00315F84; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_00315F84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315F90; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00315F90:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 11100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315FA0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00315FA0u) [[unlikely]] return; }
L_00315FA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00315FBC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315FBCu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00315FBCu) [[unlikely]] return; }
L_00315FBC:
    set32(c.r[2], 0u + 14u);
    c.budget -= 1;
L_00315FC0:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 136u);  goto L_00316040; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 116u);  goto L_0031600C; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00315FEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00316074; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00315FEC:
    set32(c.r[2], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_00316070; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316000u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 191u, depth + 1u); else { c.pc = 0x00316170u; return; } if (c.pc != 0x00316000u) [[unlikely]] return; }
L_00316000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316070; } }
    set32(c.r[4], 0u + 116u);
    c.budget -= 1;
L_0031600C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316014u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00316014u) [[unlikely]] return; }
L_00316014:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00316078; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316034u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 202u, depth + 1u); else { c.pc = 0x00316280u; return; } if (c.pc != 0x00316034u) [[unlikely]] return; }
L_00316034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316074; } }
    set32(c.r[4], 0u + 136u);
    c.budget -= 1;
L_00316040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316048u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00316048u) [[unlikely]] return; }
L_00316048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00316074; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316068u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 217u, depth + 1u); else { c.pc = 0x00316410u; return; } if (c.pc != 0x00316068u) [[unlikely]] return; }
L_00316068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316074; } }
L_00316070:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00316074:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00316078:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00316090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003160ACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 134u, depth + 1u); else { c.pc = 0x002CDC50u; return; } if (c.pc != 0x003160ACu) [[unlikely]] return; }
L_003160AC:
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_003160C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00316158; } }
L_003160C0:
    set32(c.r[5], 0u + 2005u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003160D0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003160D0u) [[unlikely]] return; }
L_003160D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00316154; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 2006u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003160ECu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003160ECu) [[unlikely]] return; }
L_003160EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00316154; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 2007u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316108u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00316108u) [[unlikely]] return; }
L_00316108:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00316154; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 2008u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316124u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00316124u) [[unlikely]] return; }
L_00316124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00316154; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 2009u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316140u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00316140u) [[unlikely]] return; }
L_00316140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00316154; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st32((c.r[16].w[0] + 172u), c.r[3].w[0]);
    c.budget -= 3;
L_00316154:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00316158:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00316170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1072u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0031626C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 2005u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003161A0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003161A0u) [[unlikely]] return; }
L_003161A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_003161BC; }
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003161B8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0018B0B0u; return; } if (c.pc != 0x003161B8u) [[unlikely]] return; }
L_003161B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_003161BC:
    set32(c.r[5], 0u + 2006u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003161CCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003161CCu) [[unlikely]] return; }
L_003161CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_003161E8; }
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003161E4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0018B0B0u; return; } if (c.pc != 0x003161E4u) [[unlikely]] return; }
L_003161E4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_003161E8:
    set32(c.r[5], 0u + 2007u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003161F8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003161F8u) [[unlikely]] return; }
L_003161F8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00316214; }
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316210u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0018B0B0u; return; } if (c.pc != 0x00316210u) [[unlikely]] return; }
L_00316210:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00316214:
    set32(c.r[5], 0u + 2008u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316224u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00316224u) [[unlikely]] return; }
L_00316224:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00316240; }
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031623Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0018B0B0u; return; } if (c.pc != 0x0031623Cu) [[unlikely]] return; }
L_0031623C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00316240:
    set32(c.r[5], 0u + 2009u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316250u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00316250u) [[unlikely]] return; }
L_00316250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00316268; } }
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316268u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0018B0B0u; return; } if (c.pc != 0x00316268u) [[unlikely]] return; }
L_00316268:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0031626C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00316280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316294u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 148u, depth + 1u); else { c.pc = 0x00275380u; return; } if (c.pc != 0x00316294u) [[unlikely]] return; }
L_00316294:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 20960u);
    set32(c.r[3], c.r[3].w[0] - 20904u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 112u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003162D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003162E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 166u, depth + 1u); else { c.pc = 0x002756A0u; return; } if (c.pc != 0x003162E4u) [[unlikely]] return; }
L_003162E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003162F0u); set32(c.r[5], 0u + 10900u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x003162F0u) [[unlikely]] return; }
L_003162F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00316400; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003163FC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 2005u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316318u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00316318u) [[unlikely]] return; }
L_00316318:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00316338; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 10900u);
    set32(c.r[6], 0u + 33u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316334u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x00316334u) [[unlikely]] return; }
L_00316334:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00316338:
    set32(c.r[5], 0u + 2006u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316348u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00316348u) [[unlikely]] return; }
L_00316348:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00316368; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 10900u);
    set32(c.r[6], 0u + 44u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316364u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x00316364u) [[unlikely]] return; }
L_00316364:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00316368:
    set32(c.r[5], 0u + 2007u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316378u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00316378u) [[unlikely]] return; }
L_00316378:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00316398; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 10900u);
    set32(c.r[6], 0u + 55u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316394u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x00316394u) [[unlikely]] return; }
L_00316394:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00316398:
    set32(c.r[5], 0u + 2008u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003163A8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003163A8u) [[unlikely]] return; }
L_003163A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_003163C8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 10900u);
    set32(c.r[6], 0u + 66u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003163C4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x003163C4u) [[unlikely]] return; }
L_003163C4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_003163C8:
    set32(c.r[5], 0u + 2009u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003163D8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003163D8u) [[unlikely]] return; }
L_003163D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_003163F8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 10900u);
    set32(c.r[6], 0u + 77u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003163F4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x003163F4u) [[unlikely]] return; }
L_003163F4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003163F8:
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 1;
L_003163FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00316400:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00316410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316424u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x00316424u) [[unlikely]] return; }
L_00316424:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 21056u);
    set32(c.r[3], c.r[3].w[0] - 21000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00316450:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A6280u | kUnwind; return; } [[clang::musttail]] return unit_0021(c, 177u, depth); }
L_00316460:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 44u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00316494; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_003166BC; } }
L_00316494:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], 0u + 2001u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003164A8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003164A8u) [[unlikely]] return; }
L_003164A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_003164C8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003164C4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x003164C4u) [[unlikely]] return; }
L_003164C4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_003164C8:
    set32(c.r[5], 0u + 2002u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003164D8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003164D8u) [[unlikely]] return; }
L_003164D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_003164F8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003164F4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x003164F4u) [[unlikely]] return; }
L_003164F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_003164F8:
    set32(c.r[5], 0u + 2005u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316508u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00316508u) [[unlikely]] return; }
L_00316508:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00316528; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 30u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316524u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x00316524u) [[unlikely]] return; }
L_00316524:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00316528:
    set32(c.r[5], 0u + 2006u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316538u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00316538u) [[unlikely]] return; }
L_00316538:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00316558; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 40u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316554u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x00316554u) [[unlikely]] return; }
L_00316554:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00316558:
    set32(c.r[5], 0u + 2007u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316568u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00316568u) [[unlikely]] return; }
L_00316568:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00316588; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 50u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316584u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x00316584u) [[unlikely]] return; }
L_00316584:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_00316588:
    set32(c.r[5], 0u + 2008u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316598u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00316598u) [[unlikely]] return; }
L_00316598:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_003165B8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 60u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003165B4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x003165B4u) [[unlikely]] return; }
L_003165B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_003165B8:
    set32(c.r[5], 0u + 2009u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003165C8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x003165C8u) [[unlikely]] return; }
L_003165C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));  goto L_003165E8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 70u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003165E4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x003165E4u) [[unlikely]] return; }
L_003165E4:
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_003165E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[18], ld32((c.r[5].w[0] + 3024u)));
    set32(c.r[4], c.r[5].w[0] + 112u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], c.r[4].w[0] + 2916u);  if (t) { goto L_00316604; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[3].w[0] + 132u)));  if (t) { goto L_00316608; } }
L_00316604:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00316608:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_003166B8; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031661Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 262u, depth + 1u); else { c.pc = 0x00282740u; return; } if (c.pc != 0x0031661Cu) [[unlikely]] return; }
L_0031661C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003166AC; } }
L_00316624:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316634u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 26u, depth + 1u); else { c.pc = 0x0028C600u; return; } if (c.pc != 0x00316634u) [[unlikely]] return; }
L_00316634:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);  goto L_0031667C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F80000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 144u)));
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.f[13] = 0u;
    c.f[14] = c.f[13];
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316674u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x00316674u) [[unlikely]] return; }
L_00316674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_003166AC; } }
L_0031667C:
    set32(c.r[6], ld32((c.r[17].w[0] + 144u)));
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.f[13] = 0u;
    c.f[14] = c.f[13];
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003166A8u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x003166A8u) [[unlikely]] return; }
L_003166A8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_003166AC:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00316624u | kUnwind; return; } goto L_00316624; }
L_003166B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003166BC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003166E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031677C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 21056u);
    set32(c.r[2], c.r[2].w[0] - 21000u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00316764; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00316764; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316758u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00316758u) [[unlikely]] return; }
L_00316758:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316764u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00316764u) [[unlikely]] return; }
L_00316764:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00316780; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031677Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0031677Cu) [[unlikely]] return; }
L_0031677C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00316780:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003167A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031683C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 20960u);
    set32(c.r[2], c.r[2].w[0] - 20904u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00316824; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22832u);
    set32(c.r[2], c.r[2].w[0] + 22888u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00316824; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316818u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00316818u) [[unlikely]] return; }
L_00316818:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316824u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00316824u) [[unlikely]] return; }
L_00316824:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00316840; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031683Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0031683Cu) [[unlikely]] return; }
L_0031683C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00316840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00316860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003168EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 20864u);
    set32(c.r[2], c.r[2].w[0] - 20808u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003168D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003168BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x003168BCu) [[unlikely]] return; }
L_003168BC:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003168C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x003168C8u) [[unlikely]] return; }
L_003168C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003168D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x003168D4u) [[unlikely]] return; }
L_003168D4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003168F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003168ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003168ECu) [[unlikely]] return; }
L_003168EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003168F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00316910:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00316860u | kUnwind; return; } goto L_00316860; }
L_00316920:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00316090u | kUnwind; return; } goto L_00316090; }
L_00316930:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003167A0u | kUnwind; return; } goto L_003167A0; }
L_00316940:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003166E0u | kUnwind; return; } goto L_003166E0; }
L_00316950:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00316460u | kUnwind; return; } goto L_00316460; }
L_00316960:
    set32(c.r[29], c.r[29].w[0] - 80u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316990u); set32(c.r[4], 0u + 1456u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00316990u) [[unlikely]] return; }
L_00316990:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003169B4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003169B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 261u, depth + 1u); else { c.pc = 0x003169D0u; return; } if (c.pc != 0x003169B0u) [[unlikely]] return; }
L_003169B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003169B4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003169D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003169E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x003169E4u) [[unlikely]] return; }
L_003169E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 20288u);
    set32(c.r[3], c.r[3].w[0] - 20232u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 1428u), 0u);
    st32((c.r[16].w[0] + 1424u), 0u);
    st32((c.r[16].w[0] + 1432u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1436u), 0u);
    st32((c.r[16].w[0] + 1452u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 110u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1444u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 608u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316A34u); set32(c.r[4], c.r[2].w[0] + 2064u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x00316A34u) [[unlikely]] return; }
L_00316A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316A3Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x00316A3Cu) [[unlikely]] return; }
L_00316A3C:
    st32((c.r[16].w[0] + 1448u), c.f[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00316A60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316A7Cu); set32(c.r[4], 0u + 660u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00316A7Cu) [[unlikely]] return; }
L_00316A7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00316AA8; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316A90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 8u, depth + 1u); else { c.pc = 0x002AC0E0u; return; } if (c.pc != 0x00316A90u) [[unlikely]] return; }
L_00316A90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 20624u);
    set32(c.r[2], c.r[2].w[0] - 20568u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 6;
L_00316AA8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00316AC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00316B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00316DD0; } }
L_00316B00:
    set32(c.r[2], ld32((c.r[19].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[19].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 1432u)));  if (t) { goto L_00316B8C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_00316B90; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_00316B74; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00316B70; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00316B70; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00316B70; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00316B70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00316B84; } }
L_00316B70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_00316B74:
    c.r[2].d[0] = c.r[2].d[0] | 33464ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1432u), c.r[2].w[0]);  if (t) { goto L_00316B94; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00316B84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1432u), c.r[2].w[0]);  if (t) { goto L_00316B94; } }
L_00316B8C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00316B90:
    st32((c.r[19].w[0] + 1432u), c.r[2].w[0]);
    c.budget -= 1;
L_00316B94:
    set32(c.r[2], ld32((c.r[19].w[0] + 1432u)));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 21u);  goto L_00316C70; }
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { set32(c.r[2], ld32((c.r[19].w[0] + 1432u)));  goto L_00316BB8; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316BB4u); set32(c.r[5], 0u + 11100u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00316BB4u) [[unlikely]] return; }
L_00316BB4:
    set32(c.r[2], ld32((c.r[19].w[0] + 1432u)));
    c.budget -= 1;
L_00316BB8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00316C6C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00316BD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00316C40; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00316BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316BE0u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00316BE0u) [[unlikely]] return; }
L_00316BE0:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00316C04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00316C14; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_00316C04:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00316C14:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00316C40; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00316C34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00316C34; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_00316C34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316C40; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00316C40:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 11100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316C50u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00316C50u) [[unlikely]] return; }
L_00316C50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00316C6C; } }
    goto L_00316C58;
L_00316C54:
    c.budget -= 1;
L_00316C58:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316C6Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00316C6Cu) [[unlikely]] return; }
L_00316C6C:
    set32(c.r[2], 0u + 21u);
    c.budget -= 1;
L_00316C70:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 132u);  goto L_00316D9C; }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 1428u)));  goto L_00316D4C; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 580u)));  goto L_00316C9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00316DD0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 1;
L_00316C9C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00316CB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00316D18; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00316CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316CB8u); set32(c.r[5], 0u + 42u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00316CB8u) [[unlikely]] return; }
L_00316CB8:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00316CDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00316CEC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_00316CDC:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00316CEC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00316D18; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00316D0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00316D0C; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_00316D0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316D18; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00316D18:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 20000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316D28u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00316D28u) [[unlikely]] return; }
L_00316D28:
    st32((c.r[19].w[0] + 1428u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316D40u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00316D40u) [[unlikely]] return; }
L_00316D40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316DCC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 1428u)));
    c.budget -= 1;
L_00316D4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 148u);  goto L_00316D68; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316D60u); set32(c.r[5], 0u + 20000u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00316D60u) [[unlikely]] return; }
L_00316D60:
    st32((c.r[19].w[0] + 1428u), 0u);
    set32(c.r[4], 0u + 148u);
    c.budget -= 2;
L_00316D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316D70u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00316D70u) [[unlikely]] return; }
L_00316D70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00316DD4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316D90u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 319u, depth + 1u); else { c.pc = 0x00317520u; return; } if (c.pc != 0x00316D90u) [[unlikely]] return; }
L_00316D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316DD0; } }
    set32(c.r[4], 0u + 132u);
    c.budget -= 1;
L_00316D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316DA4u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00316DA4u) [[unlikely]] return; }
L_00316DA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00316DD0; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316DC4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 333u, depth + 1u); else { c.pc = 0x00317850u; return; } if (c.pc != 0x00316DC4u) [[unlikely]] return; }
L_00316DC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316DD0; } }
L_00316DCC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00316DD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00316DD4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00316DF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316E0Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x00316E0Cu) [[unlikely]] return; }
L_00316E0C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00317004; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316E28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 309u, depth + 1u); else { c.pc = 0x00317320u; return; } if (c.pc != 0x00316E28u) [[unlikely]] return; }
L_00316E28:
    set32(c.r[4], ld32((c.r[17].w[0] + 1436u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  goto L_00316F9C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 580u)));  goto L_00316E54; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00317000; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317000; } }
L_00316E54:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00316E64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00316EBC; } }
L_00316E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316E6Cu); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00316E6Cu) [[unlikely]] return; }
L_00316E6C:
    set32(c.r[5], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[2].w[0] << 1);  goto L_00316E8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00316E9C; } }
L_00316E8C:
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00316E9C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00316EBC; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_00316EB4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00316EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316EBC; } }
L_00316EBC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_00316ECC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00316F34; } }
L_00316ECC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316ED8u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00316ED8u) [[unlikely]] return; }
L_00316ED8:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00316EF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00316F08; } }
L_00316EF8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00316F08:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00316F34; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00316F28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00316F2C; } }
L_00316F28:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_00316F2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316F34; } }
L_00316F34:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 20002u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316F44u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00316F44u) [[unlikely]] return; }
L_00316F44:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00317000; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00317000; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1320u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316F60u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 127u, depth + 1u); else { c.pc = 0x002D57D0u; return; } if (c.pc != 0x00316F60u) [[unlikely]] return; }
L_00316F60:
    set32(c.r[2], ld32((c.r[17].w[0] + 1320u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316F74u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00316F74u) [[unlikely]] return; }
L_00316F74:
    c.f[12] = 0u;
    set32(c.r[4], 0u + 73u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316F90u); st32((c.r[17].w[0] + 1440u), 0u);  if (depth < kMaxDepth) unit_0068(c, 317u, depth + 1u); else { c.pc = 0x002C3720u; return; } if (c.pc != 0x00316F90u) [[unlikely]] return; }
L_00316F90:
    set32(c.r[3], 0u + 2u);
    st32((c.r[17].w[0] + 1436u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 3;
L_00316F9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[2] = ld32((c.r[5].w[0] + 80u));  goto L_00316FC0; }
    c.f[2] = 0u;
    c.budget -= 1;
L_00316FC0:
    c.f[1] = ld32((c.r[17].w[0] + 1440u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 1440u), c.f[1]);  if (t) { goto L_00317000; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316FE8u); set32(c.r[4], ld32((c.r[17].w[0] + 1320u)));  if (depth < kMaxDepth) unit_006D(c, 131u, depth + 1u); else { c.pc = 0x002D5890u; return; } if (c.pc != 0x00316FE8u) [[unlikely]] return; }
L_00316FE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316FF4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 310u, depth + 1u); else { c.pc = 0x00317340u; return; } if (c.pc != 0x00316FF4u) [[unlikely]] return; }
L_00316FF4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 1452u), 0u);
    c.budget -= 3;
L_00317000:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00317004:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00317020:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031703Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 134u, depth + 1u); else { c.pc = 0x002CDC50u; return; } if (c.pc != 0x0031703Cu) [[unlikely]] return; }
L_0031703C:
    set32(c.r[3], 0u + 78u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));  goto L_003170E0; }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0031707C; }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 110u)));  goto L_00317068; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00317130; } }
L_00317068:
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1444u), c.f[0]);  if (t) { goto L_0031712C; } }
L_0031707C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317084u);  if (depth < kMaxDepth) unit_007D(c, 309u, depth + 1u); else { c.pc = 0x00317320u; return; } if (c.pc != 0x00317084u) [[unlikely]] return; }
L_00317084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031712C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1436u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031712C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 110u)));
    c.f[3] = ld32((c.r[16].w[0] + 1444u));
    c.f[0] = ld32((c.r[16].w[0] + 1448u));
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0031712C; } }
    st32((c.r[16].w[0] + 1444u), c.f[2]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003170CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 304u, depth + 1u); else { c.pc = 0x003171A0u; return; } if (c.pc != 0x003170CCu) [[unlikely]] return; }
L_003170CC:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1436u), c.r[4].w[0]);  if (t) { goto L_0031712C; } }
L_003170E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 1424u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 672u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031712C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003170F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 309u, depth + 1u); else { c.pc = 0x00317320u; return; } if (c.pc != 0x003170F8u) [[unlikely]] return; }
L_003170F8:
    set32(c.r[6], ld32((c.r[2].w[0] + 172u)));
    set32(c.r[3], 0u - 9u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317114u); st32((c.r[2].w[0] + 172u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_007D(c, 310u, depth + 1u); else { c.pc = 0x00317340u; return; } if (c.pc != 0x00317114u) [[unlikely]] return; }
L_00317114:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00317124; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_00317124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031712Cu);  if (depth < kMaxDepth) unit_005B(c, 255u, depth + 1u); else { c.pc = 0x0028E770u; return; } if (c.pc != 0x0031712Cu) [[unlikely]] return; }
L_0031712C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00317130:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00317140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031715Cu); set32(c.r[5], c.r[2].w[0] + 1424u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0031715Cu) [[unlikely]] return; }
L_0031715C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00317170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 1424u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317184u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00317184u) [[unlikely]] return; }
L_00317184:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003171A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003171BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_007D(c, 309u, depth + 1u); else { c.pc = 0x00317320u; return; } if (c.pc != 0x003171BCu) [[unlikely]] return; }
L_003171BC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00317300; }
    set32(c.r[3], ld32((c.r[18].w[0] + 584u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_003171EC; }
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[4].w[0] + 4u)));  goto L_003171EC; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003171EC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003172FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 20432u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[2] = ld32((c.r[2].w[0] + 20436u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 20440u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20444u));
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 92u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 1320u)));
    c.f[0] = ld32((c.r[2].w[0] + 192u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 196u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 200u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 204u));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317258u); st32((c.r[29].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x00317258u) [[unlikely]] return; }
L_00317258:
    set32(c.r[6], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[2], 0u - 9u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[17].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[17].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[17].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[17].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 240u), 0u);
    st32((c.r[17].w[0] + 244u), 0u);
    st32((c.r[17].w[0] + 248u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003172E0u); st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006D(c, 127u, depth + 1u); else { c.pc = 0x002D57D0u; return; } if (c.pc != 0x003172E0u) [[unlikely]] return; }
L_003172E0:
    st32((c.r[17].w[0] + 496u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_003172F4; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_003172F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003172FCu);  if (depth < kMaxDepth) unit_005B(c, 255u, depth + 1u); else { c.pc = 0x0028E770u; return; } if (c.pc != 0x003172FCu) [[unlikely]] return; }
L_003172FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00317300:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00317320:
    set32(c.r[5], ld32((c.r[4].w[0] + 1424u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] + 112u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A34D0u | kUnwind; return; } [[clang::musttail]] return unit_0060(c, 352u, depth); }
L_00317340:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317370u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 309u, depth + 1u); else { c.pc = 0x00317320u; return; } if (c.pc != 0x00317370u) [[unlikely]] return; }
L_00317370:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { st32((c.r[20].w[0] + 1424u), 0u);  goto L_003174CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317384u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 131u, depth + 1u); else { c.pc = 0x002D5890u; return; } if (c.pc != 0x00317384u) [[unlikely]] return; }
L_00317384:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003173A0u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x003173A0u) [[unlikely]] return; }
L_003173A0:
    set32(c.r[4], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_003174C8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 20448u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 20452u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[17], ld32((c.r[5].w[0] + 20464u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[16], ld32((c.r[4].w[0] + 20468u)));
    c.f[1] = ld32((c.r[3].w[0] + 20456u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20460u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[21], ld32((c.r[3].w[0] + 20472u)));
    st32((c.r[29].w[0] + 148u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[22], ld32((c.r[2].w[0] + 20476u)));
    st32((c.r[29].w[0] + 152u), c.f[1]);
    st32((c.r[29].w[0] + 156u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 608u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 1296u)));
    c.budget -= 25;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[3].w[0] + 688u);  if (t) { goto L_00317420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (t) { goto L_00317424; } }
L_00317420:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00317424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031742Cu);  if (depth < kMaxDepth) unit_0052(c, 96u, depth + 1u); else { c.pc = 0x00268F00u; return; } if (c.pc != 0x0031742Cu) [[unlikely]] return; }
L_0031742C:
    c.f[12] = ld32((c.r[28].w[0] - 32164u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[7], c.r[29].w[0] + 144u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031744Cu); set32(c.r[9], 0u + 2u);  if (depth < kMaxDepth) unit_0073(c, 343u, depth + 1u); else { c.pc = 0x002EFCD0u; return; } if (c.pc != 0x0031744Cu) [[unlikely]] return; }
L_0031744C:
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[19].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[19].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[19].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[19].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 240u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 244u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 248u), c.r[21].w[0]);
    st32((c.r[19].w[0] + 252u), c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003174B8u); st32((c.r[19].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x003174B8u) [[unlikely]] return; }
L_003174B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003174C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x003174C0u) [[unlikely]] return; }
L_003174C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003174C8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 269u, depth + 1u); else { c.pc = 0x002D2C80u; return; } if (c.pc != 0x003174C8u) [[unlikely]] return; }
L_003174C8:
    st32((c.r[20].w[0] + 1424u), 0u);
    c.budget -= 1;
L_003174CC:
    st32((c.r[20].w[0] + 1436u), 0u);
    st32((c.r[20].w[0] + 1440u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_003174F4; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003174F0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[3].w[0] + 576u), 0u);
    c.budget -= 2;
L_003174F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_003174F4:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00317520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317534u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x00317534u) [[unlikely]] return; }
L_00317534:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 20384u);
    set32(c.r[3], c.r[3].w[0] - 20328u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 144u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00317580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317594u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 57u, depth + 1u); else { c.pc = 0x0026C870u; return; } if (c.pc != 0x00317594u) [[unlikely]] return; }
L_00317594:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 3028u)));
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[2].w[0] + 1424u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[3].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 148u)));  if (t) { goto L_003175DC; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 525u);  goto L_003175E0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 576u), c.r[3].w[0]);
    c.budget -= 2;
L_003175DC:
    set32(c.r[2], 0u + 525u);
    c.budget -= 1;
L_003175E0:
    set32(c.r[6], ld32((c.r[16].w[0] + 136u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u + 2090u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], 0u - 405u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[6].w[0] + 192u), c.f[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 196u), c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 200u), c.f[0]);
    st32((c.r[6].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[6].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[6].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317644u); set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x00317644u) [[unlikely]] return; }
L_00317644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031764Cu); set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0031764Cu) [[unlikely]] return; }
L_0031764C:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317658u); set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));  if (depth < kMaxDepth) unit_006D(c, 131u, depth + 1u); else { c.pc = 0x002D5890u; return; } if (c.pc != 0x00317658u) [[unlikely]] return; }
L_00317658:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00317668; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_00317668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317670u);  if (depth < kMaxDepth) unit_005B(c, 255u, depth + 1u); else { c.pc = 0x0028E770u; return; } if (c.pc != 0x00317670u) [[unlikely]] return; }
L_00317670:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00317680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317694u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x00317694u) [[unlikely]] return; }
L_00317694:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00317774; }
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[6].d[0]) { set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  goto L_003176E8; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_003176C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317770; } }
L_003176C8:
    set32(c.r[5], 0u + 25u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003176DCu); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003176DCu) [[unlikely]] return; }
L_003176DC:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 3;
L_003176E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_0031770C; }
    c.f[1] = 0u;
    c.budget -= 1;
L_0031770C:
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 144u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00317770; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42D20000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[4].w[0] + 1320u)));
    c.f[1] = ld32((c.r[3].w[0] + 496u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00317770; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[5].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00317768; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_00317768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317770u);  if (depth < kMaxDepth) unit_005B(c, 255u, depth + 1u); else { c.pc = 0x0028E770u; return; } if (c.pc != 0x00317770u) [[unlikely]] return; }
L_00317770:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00317774:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00317780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 44u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003177A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00317838; } }
L_003177A0:
    set32(c.r[2], 0u + 610u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44580000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441C0000u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003177E0u); set32(c.r[6], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x003177E0u) [[unlikely]] return; }
L_003177E0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 3028u)));
    st32((c.r[5].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[5].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[5].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[5].w[0] + 204u), c.f[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 148u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[3].w[0] + 1424u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 136u), c.r[5].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 22;
L_00317838:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00317850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317864u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 294u, depth + 1u); else { c.pc = 0x00272710u; return; } if (c.pc != 0x00317864u) [[unlikely]] return; }
L_00317864:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 20480u);
    set32(c.r[2], c.r[2].w[0] - 20424u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317890u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_007D(c, 309u, depth + 1u); else { c.pc = 0x00317320u; return; } if (c.pc != 0x00317890u) [[unlikely]] return; }
L_00317890:
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003178B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003178C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 300u, depth + 1u); else { c.pc = 0x002727F0u; return; } if (c.pc != 0x003178C4u) [[unlikely]] return; }
L_003178C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003178E0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003178DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 310u, depth + 1u); else { c.pc = 0x00317340u; return; } if (c.pc != 0x003178DCu) [[unlikely]] return; }
L_003178DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003178E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003178F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317908u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x00317908u) [[unlikely]] return; }
L_00317908:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_00317930; }
    c.f[1] = 0u;
    c.budget -= 1;
L_00317930:
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 124u)));  goto L_00317A40; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00317A3C; } }
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42BA0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00317A3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317978u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_007D(c, 304u, depth + 1u); else { c.pc = 0x003171A0u; return; } if (c.pc != 0x00317978u) [[unlikely]] return; }
L_00317978:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317988u); set32(c.r[6], 0u + 100u);  if (depth < kMaxDepth) unit_0062(c, 58u, depth + 1u); else { c.pc = 0x002A86F0u; return; } if (c.pc != 0x00317988u) [[unlikely]] return; }
L_00317988:
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003179A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00317A04; } }
L_003179A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003179A8u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003179A8u) [[unlikely]] return; }
L_003179A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003179C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003179D8; } }
L_003179C8:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003179D8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00317A04; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_003179F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003179FC; } }
L_003179F8:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_003179FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317A04; } }
L_00317A04:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[6], 0u + 20002u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317A14u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00317A14u) [[unlikely]] return; }
L_00317A14:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_00317A38; }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317A34u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00317A34u) [[unlikely]] return; }
L_00317A34:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00317A38:
    st32((c.r[16].w[0] + 128u), c.r[3].w[0]);
    c.budget -= 1;
L_00317A3C:
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 1;
L_00317A40:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00317A98; }
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00317A94; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 38u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317A78u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00317A78u) [[unlikely]] return; }
L_00317A78:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 40u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317A8Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006D(c, 166u, depth + 1u); else { c.pc = 0x002D5D80u; return; } if (c.pc != 0x00317A8Cu) [[unlikely]] return; }
L_00317A8C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 124u), c.r[3].w[0]);
    c.budget -= 2;
L_00317A94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00317A98:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00317AB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 10u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317ACCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 211u, depth + 1u); else { c.pc = 0x002CA110u; return; } if (c.pc != 0x00317ACCu) [[unlikely]] return; }
L_00317ACC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 20528u);
    set32(c.r[3], c.r[3].w[0] - 20516u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x414C0000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 18242ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317B00u); set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_007D(c, 309u, depth + 1u); else { c.pc = 0x00317320u; return; } if (c.pc != 0x00317B00u) [[unlikely]] return; }
L_00317B00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317B10u); set32(c.r[4], c.r[4].w[0] - 21568u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00317B10u) [[unlikely]] return; }
L_00317B10:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00317B30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00317BA0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 20528u);
    set32(c.r[2], c.r[2].w[0] - 20516u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317B70u); set32(c.r[5], 0u + 20001u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00317B70u) [[unlikely]] return; }
L_00317B70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317B7Cu); set32(c.r[4], c.r[4].w[0] - 21520u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x00317B7Cu) [[unlikely]] return; }
L_00317B7C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317B88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 213u, depth + 1u); else { c.pc = 0x002CA1B0u; return; } if (c.pc != 0x00317B88u) [[unlikely]] return; }
L_00317B88:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00317BA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317BA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x00317BA0u) [[unlikely]] return; }
L_00317BA0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00317BA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00317BC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 11;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_00317F54; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));  goto L_00317E00; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  goto L_00317DB4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 44u)));  goto L_00317C14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00317F78; } }
L_00317C14:
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00317C28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00317C8C; } }
L_00317C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317C30u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00317C30u) [[unlikely]] return; }
L_00317C30:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00317C50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00317C60; } }
L_00317C50:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00317C60:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00317C8C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00317C80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00317C84; } }
L_00317C80:
    set32(c.r[5], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_00317C84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317C8C; } }
L_00317C8C:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[6], 0u + 20001u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317C9Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00317C9Cu) [[unlikely]] return; }
L_00317C9C:
    set32(c.r[18], ld32((c.r[17].w[0] + 44u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 580u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00317CB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00317D10; } }
L_00317CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317CC0u); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00317CC0u) [[unlikely]] return; }
L_00317CC0:
    set32(c.r[4], ld32((c.r[18].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00317CE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00317CF0; } }
L_00317CE0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00317CF0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00317D10; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_00317D08; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00317D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317D10; } }
L_00317D10:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[6], 0u + 20001u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317D20u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00317D20u) [[unlikely]] return; }
L_00317D20:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00317F74; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00317F74; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317D4Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x00317D4Cu) [[unlikely]] return; }
L_00317D4C:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317D64u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00317D64u) [[unlikely]] return; }
L_00317D64:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317D7Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x00317D7Cu) [[unlikely]] return; }
L_00317D7C:
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[5], 0u + 26u);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00317D9Cu); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00317D9Cu) [[unlikely]] return; }
L_00317D9C:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317DA8u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x00317DA8u) [[unlikely]] return; }
L_00317DA8:
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
L_00317DB4:
    set32(c.r[3], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[17].w[0] + 56u), c.r[4].w[0]);  if (t) { goto L_00317DD0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317DD0u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x00317DD0u) [[unlikely]] return; }
L_00317DD0:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.r[1].d[0] = c.r[3].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00317F74; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00317DF4u); set32(c.r[5], 0u + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00317DF4u) [[unlikely]] return; }
L_00317DF4:
    set32(c.r[3], 0u + 2u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
L_00317E00:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00317E0C; }
    set32(c.r[16], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 1;
L_00317E0C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00317F74; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 60u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317E30u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x00282B00u; return; } if (c.pc != 0x00317E30u) [[unlikely]] return; }
L_00317E30:
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    c.f[20] = c.f[0];
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 164u)));
    c.f[13] = c.f[20];
    c.f[14] = c.f[12];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 144u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317E74u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x00317E74u) [[unlikely]] return; }
L_00317E74:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.f[13] = c.f[20] ^ fp::kSign;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 144u)));
    c.f[14] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317E9Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x00317E9Cu) [[unlikely]] return; }
L_00317E9C:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00317EB0u); set32(c.r[5], 0u + 13u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00317EB0u) [[unlikely]] return; }
L_00317EB0:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00317EC4u); set32(c.r[5], 0u + 14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00317EC4u) [[unlikely]] return; }
L_00317EC4:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.f[0] = c.f[20] ^ fp::kSign;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 110u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], 0u + 3u);  goto L_00317F4C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[4].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 60u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[2].w[0] + 1424u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 14;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));  goto L_00317F34; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00317F30; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    st32((c.r[2].w[0] + 576u), 0u);
    c.budget -= 2;
L_00317F30:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 1;
L_00317F34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00317F40; }
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_00317F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317F48u);  if (depth < kMaxDepth) unit_005B(c, 255u, depth + 1u); else { c.pc = 0x0028E770u; return; } if (c.pc != 0x00317F48u) [[unlikely]] return; }
L_00317F48:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_00317F4C:
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 2;
L_00317F54:
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00317F74; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_00317F74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00317F78:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00317F90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[5].w[0] << 2);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));  goto L_00317FB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 4u, depth); } }
L_00317FB4:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[3], ld32((c.r[3].w[0] + 576u)));  if (t) { [[clang::musttail]] return unit_007E(c, 2u, depth); } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00317FD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 3u, depth); } }
L_00317FD4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_007E(c, 4u, depth); }
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 126u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 124u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[4].d[0] + 0ull;  [[clang::musttail]] return unit_007E(c, 1u, depth); }
    [[clang::musttail]] return unit_007E(c, 1u, depth);
}

}
