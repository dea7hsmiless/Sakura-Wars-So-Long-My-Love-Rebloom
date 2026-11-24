#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007E[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 17,
    0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0,
    0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0,
    66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 71, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 79, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0,
    94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0,
    0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0,
    0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109,
    0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0,
    0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0,
    0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0,
    0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0,
    0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0,
    0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    243, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263,
    0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0,
    297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0,
    0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    323, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349,
    0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0,
    0, 357, 0, 0, 0, 358, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0,
    364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0,
};

void unit_007E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00318000;
    case 2u: goto L_00318034;
    case 3u: goto L_00318094;
    case 4u: goto L_0031809C;
    case 5u: goto L_003180B0;
    case 6u: goto L_0031810C;
    case 7u: goto L_00318118;
    case 8u: goto L_00318130;
    case 9u: goto L_00318150;
    case 10u: goto L_00318170;
    case 11u: goto L_00318190;
    case 12u: goto L_003181B0;
    case 13u: goto L_003181D0;
    case 14u: goto L_003181E0;
    case 15u: goto L_00318258;
    case 16u: goto L_00318264;
    case 17u: goto L_0031827C;
    case 18u: goto L_003182A0;
    case 19u: goto L_00318318;
    case 20u: goto L_00318324;
    case 21u: goto L_0031833C;
    case 22u: goto L_00318360;
    case 23u: goto L_003183BC;
    case 24u: goto L_003183C8;
    case 25u: goto L_003183D4;
    case 26u: goto L_003183EC;
    case 27u: goto L_00318410;
    case 28u: goto L_00318420;
    case 29u: goto L_00318430;
    case 30u: goto L_00318440;
    case 31u: goto L_00318450;
    case 32u: goto L_00318460;
    case 33u: goto L_00318470;
    case 34u: goto L_00318480;
    case 35u: goto L_003184B0;
    case 36u: goto L_003184D0;
    case 37u: goto L_003184F0;
    case 38u: goto L_00318504;
    case 39u: goto L_00318530;
    case 40u: goto L_00318590;
    case 41u: goto L_003185B0;
    case 42u: goto L_003185E0;
    case 43u: goto L_003185F4;
    case 44u: goto L_00318620;
    case 45u: goto L_0031869C;
    case 46u: goto L_003186D0;
    case 47u: goto L_00318700;
    case 48u: goto L_00318720;
    case 49u: goto L_00318754;
    case 50u: goto L_00318780;
    case 51u: goto L_003187AC;
    case 52u: goto L_003187D8;
    case 53u: goto L_00318804;
    case 54u: goto L_00318834;
    case 55u: goto L_00318870;
    case 56u: goto L_003188E8;
    case 57u: goto L_003188F4;
    case 58u: goto L_0031890C;
    case 59u: goto L_00318930;
    case 60u: goto L_0031898C;
    case 61u: goto L_00318998;
    case 62u: goto L_003189A4;
    case 63u: goto L_003189BC;
    case 64u: goto L_003189E0;
    case 65u: goto L_003189F0;
    case 66u: goto L_00318A00;
    case 67u: goto L_00318A10;
    case 68u: goto L_00318A40;
    case 69u: goto L_00318A60;
    case 70u: goto L_00318A80;
    case 71u: goto L_00318A94;
    case 72u: goto L_00318A98;
    case 73u: goto L_00318AC0;
    case 74u: goto L_00318ADC;
    case 75u: goto L_00318AE4;
    case 76u: goto L_00318B00;
    case 77u: goto L_00318BB4;
    case 78u: goto L_00318BDC;
    case 79u: goto L_00318C14;
    case 80u: goto L_00318C18;
    case 81u: goto L_00318C58;
    case 82u: goto L_00318C88;
    case 83u: goto L_00318C9C;
    case 84u: goto L_00318CB4;
    case 85u: goto L_00318CD4;
    case 86u: goto L_00318CF4;
    case 87u: goto L_00318D20;
    case 88u: goto L_00318D74;
    case 89u: goto L_00318DB0;
    case 90u: goto L_00318DC0;
    case 91u: goto L_00318DD0;
    case 92u: goto L_00318DE8;
    case 93u: goto L_00318DF4;
    case 94u: goto L_00318E00;
    case 95u: goto L_00318E10;
    case 96u: goto L_00318E1C;
    case 97u: goto L_00318E2C;
    case 98u: goto L_00318E50;
    case 99u: goto L_00318E64;
    case 100u: goto L_00318E84;
    case 101u: goto L_00318ED0;
    case 102u: goto L_00318EEC;
    case 103u: goto L_00318F0C;
    case 104u: goto L_00318F2C;
    case 105u: goto L_00318F3C;
    case 106u: goto L_00318F4C;
    case 107u: goto L_00318F5C;
    case 108u: goto L_00318F6C;
    case 109u: goto L_00318F7C;
    case 110u: goto L_00318F84;
    case 111u: goto L_00318FA0;
    case 112u: goto L_00319024;
    case 113u: goto L_003190DC;
    case 114u: goto L_00319124;
    case 115u: goto L_00319134;
    case 116u: goto L_00319144;
    case 117u: goto L_0031916C;
    case 118u: goto L_00319190;
    case 119u: goto L_00319218;
    case 120u: goto L_00319248;
    case 121u: goto L_0031925C;
    case 122u: goto L_0031926C;
    case 123u: goto L_0031928C;
    case 124u: goto L_003192F0;
    case 125u: goto L_00319314;
    case 126u: goto L_00319330;
    case 127u: goto L_0031936C;
    case 128u: goto L_00319378;
    case 129u: goto L_00319390;
    case 130u: goto L_0031939C;
    case 131u: goto L_003193EC;
    case 132u: goto L_0031940C;
    case 133u: goto L_00319430;
    case 134u: goto L_00319464;
    case 135u: goto L_003194A8;
    case 136u: goto L_003194E0;
    case 137u: goto L_00319548;
    case 138u: goto L_00319558;
    case 139u: goto L_00319560;
    case 140u: goto L_00319590;
    case 141u: goto L_003195D8;
    case 142u: goto L_003195FC;
    case 143u: goto L_00319604;
    case 144u: goto L_003196A8;
    case 145u: goto L_003196C4;
    case 146u: goto L_003196CC;
    case 147u: goto L_00319700;
    case 148u: goto L_00319718;
    case 149u: goto L_003197D4;
    case 150u: goto L_003197F8;
    case 151u: goto L_00319840;
    case 152u: goto L_003198B8;
    case 153u: goto L_003198C4;
    case 154u: goto L_003198DC;
    case 155u: goto L_00319900;
    case 156u: goto L_0031995C;
    case 157u: goto L_00319968;
    case 158u: goto L_00319974;
    case 159u: goto L_0031998C;
    case 160u: goto L_003199B0;
    case 161u: goto L_003199C0;
    case 162u: goto L_003199D0;
    case 163u: goto L_003199E0;
    case 164u: goto L_003199F0;
    case 165u: goto L_00319A20;
    case 166u: goto L_00319A40;
    case 167u: goto L_00319A60;
    case 168u: goto L_00319A74;
    case 169u: goto L_00319A9C;
    case 170u: goto L_00319AC0;
    case 171u: goto L_00319B1C;
    case 172u: goto L_00319B44;
    case 173u: goto L_00319B64;
    case 174u: goto L_00319B8C;
    case 175u: goto L_00319BAC;
    case 176u: goto L_00319BE0;
    case 177u: goto L_00319BFC;
    case 178u: goto L_00319C10;
    case 179u: goto L_00319C40;
    case 180u: goto L_00319C90;
    case 181u: goto L_00319C9C;
    case 182u: goto L_00319CC4;
    case 183u: goto L_00319DB4;
    case 184u: goto L_00319DC8;
    case 185u: goto L_00319E00;
    case 186u: goto L_00319E1C;
    case 187u: goto L_00319E30;
    case 188u: goto L_00319E40;
    case 189u: goto L_00319E60;
    case 190u: goto L_00319E74;
    case 191u: goto L_00319EB0;
    case 192u: goto L_00319EF0;
    case 193u: goto L_00319F60;
    case 194u: goto L_00319FB0;
    case 195u: goto L_00319FCC;
    case 196u: goto L_00319FE4;
    case 197u: goto L_0031A000;
    case 198u: goto L_0031A034;
    case 199u: goto L_0031A054;
    case 200u: goto L_0031A070;
    case 201u: goto L_0031A09C;
    case 202u: goto L_0031A0D0;
    case 203u: goto L_0031A0E8;
    case 204u: goto L_0031A10C;
    case 205u: goto L_0031A130;
    case 206u: goto L_0031A168;
    case 207u: goto L_0031A1D4;
    case 208u: goto L_0031A1DC;
    case 209u: goto L_0031A240;
    case 210u: goto L_0031A254;
    case 211u: goto L_0031A280;
    case 212u: goto L_0031A2A0;
    case 213u: goto L_0031A2A8;
    case 214u: goto L_0031A2C0;
    case 215u: goto L_0031A30C;
    case 216u: goto L_0031A32C;
    case 217u: goto L_0031A390;
    case 218u: goto L_0031A3C0;
    case 219u: goto L_0031A3CC;
    case 220u: goto L_0031A3D8;
    case 221u: goto L_0031A400;
    case 222u: goto L_0031A46C;
    case 223u: goto L_0031A474;
    case 224u: goto L_0031A4E8;
    case 225u: goto L_0031A504;
    case 226u: goto L_0031A50C;
    case 227u: goto L_0031A540;
    case 228u: goto L_0031A578;
    case 229u: goto L_0031A5A0;
    case 230u: goto L_0031A5F0;
    case 231u: goto L_0031A604;
    case 232u: goto L_0031A660;
    case 233u: goto L_0031A674;
    case 234u: goto L_0031A688;
    case 235u: goto L_0031A6A4;
    case 236u: goto L_0031A6B0;
    case 237u: goto L_0031A6B8;
    case 238u: goto L_0031A6D0;
    case 239u: goto L_0031A6E4;
    case 240u: goto L_0031A71C;
    case 241u: goto L_0031A730;
    case 242u: goto L_0031A770;
    case 243u: goto L_0031A780;
    case 244u: goto L_0031A794;
    case 245u: goto L_0031A7A0;
    case 246u: goto L_0031A7B8;
    case 247u: goto L_0031A7C4;
    case 248u: goto L_0031A7F0;
    case 249u: goto L_0031A82C;
    case 250u: goto L_0031A83C;
    case 251u: goto L_0031A864;
    case 252u: goto L_0031A880;
    case 253u: goto L_0031A8F4;
    case 254u: goto L_0031A900;
    case 255u: goto L_0031A91C;
    case 256u: goto L_0031A94C;
    case 257u: goto L_0031A954;
    case 258u: goto L_0031A958;
    case 259u: goto L_0031A974;
    case 260u: goto L_0031A990;
    case 261u: goto L_0031A9B0;
    case 262u: goto L_0031A9F0;
    case 263u: goto L_0031A9FC;
    case 264u: goto L_0031AA14;
    case 265u: goto L_0031AA30;
    case 266u: goto L_0031AA88;
    case 267u: goto L_0031AA94;
    case 268u: goto L_0031AAAC;
    case 269u: goto L_0031AAC4;
    case 270u: goto L_0031AB00;
    case 271u: goto L_0031AB14;
    case 272u: goto L_0031AB4C;
    case 273u: goto L_0031AB80;
    case 274u: goto L_0031ABDC;
    case 275u: goto L_0031ABE8;
    case 276u: goto L_0031AC00;
    case 277u: goto L_0031AC20;
    case 278u: goto L_0031AC40;
    case 279u: goto L_0031AC60;
    case 280u: goto L_0031AC80;
    case 281u: goto L_0031ACA0;
    case 282u: goto L_0031ACB0;
    case 283u: goto L_0031AD28;
    case 284u: goto L_0031AD34;
    case 285u: goto L_0031AD4C;
    case 286u: goto L_0031AD70;
    case 287u: goto L_0031ADE8;
    case 288u: goto L_0031ADF4;
    case 289u: goto L_0031AE0C;
    case 290u: goto L_0031AE30;
    case 291u: goto L_0031AE8C;
    case 292u: goto L_0031AE98;
    case 293u: goto L_0031AEA4;
    case 294u: goto L_0031AEBC;
    case 295u: goto L_0031AEE0;
    case 296u: goto L_0031AEF0;
    case 297u: goto L_0031AF00;
    case 298u: goto L_0031AF10;
    case 299u: goto L_0031AF20;
    case 300u: goto L_0031AF30;
    case 301u: goto L_0031AF40;
    case 302u: goto L_0031AF50;
    case 303u: goto L_0031AF60;
    case 304u: goto L_0031AF90;
    case 305u: goto L_0031AFB0;
    case 306u: goto L_0031AFD0;
    case 307u: goto L_0031AFE4;
    case 308u: goto L_0031B01C;
    case 309u: goto L_0031B048;
    case 310u: goto L_0031B070;
    case 311u: goto L_0031B0E8;
    case 312u: goto L_0031B108;
    case 313u: goto L_0031B11C;
    case 314u: goto L_0031B13C;
    case 315u: goto L_0031B14C;
    case 316u: goto L_0031B15C;
    case 317u: goto L_0031B1C8;
    case 318u: goto L_0031B210;
    case 319u: goto L_0031B238;
    case 320u: goto L_0031B270;
    case 321u: goto L_0031B280;
    case 322u: goto L_0031B300;
    case 323u: goto L_0031B380;
    case 324u: goto L_0031B38C;
    case 325u: goto L_0031B39C;
    case 326u: goto L_0031B3AC;
    case 327u: goto L_0031B3BC;
    case 328u: goto L_0031B3CC;
    case 329u: goto L_0031B4A8;
    case 330u: goto L_0031B4C0;
    case 331u: goto L_0031B55C;
    case 332u: goto L_0031B6B8;
    case 333u: goto L_0031B6CC;
    case 334u: goto L_0031B774;
    case 335u: goto L_0031B7C8;
    case 336u: goto L_0031B7F0;
    case 337u: goto L_0031B828;
    case 338u: goto L_0031B838;
    case 339u: goto L_0031B8CC;
    case 340u: goto L_0031B8E4;
    case 341u: goto L_0031B934;
    case 342u: goto L_0031B980;
    case 343u: goto L_0031B9A0;
    case 344u: goto L_0031BA68;
    case 345u: goto L_0031BAA8;
    case 346u: goto L_0031BB60;
    case 347u: goto L_0031BB9C;
    case 348u: goto L_0031BBE0;
    case 349u: goto L_0031BBFC;
    case 350u: goto L_0031BC10;
    case 351u: goto L_0031BC30;
    case 352u: goto L_0031BC38;
    case 353u: goto L_0031BC5C;
    case 354u: goto L_0031BC68;
    case 355u: goto L_0031BC90;
    case 356u: goto L_0031BCE4;
    case 357u: goto L_0031BD04;
    case 358u: goto L_0031BD14;
    case 359u: goto L_0031BD1C;
    case 360u: goto L_0031BD2C;
    case 361u: goto L_0031BD4C;
    case 362u: goto L_0031BD58;
    case 363u: goto L_0031BD6C;
    case 364u: goto L_0031BD80;
    case 365u: goto L_0031BDA4;
    case 366u: goto L_0031BDAC;
    case 367u: goto L_0031BDBC;
    case 368u: goto L_0031BDCC;
    case 369u: goto L_0031BDDC;
    case 370u: goto L_0031BE38;
    case 371u: goto L_0031BE58;
    case 372u: goto L_0031BE94;
    case 373u: goto L_0031BEA8;
    case 374u: goto L_0031BEB8;
    case 375u: goto L_0031BEE0;
    case 376u: goto L_0031BF50;
    case 377u: goto L_0031BFE4;
    case 378u: goto L_0031BFF0;
    default: bad_entry(c, 0x00318000u); return;
    }
L_00318000:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00318028; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031809C; } }
L_00318028:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031809C; } }
L_00318034:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_0031809C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 126u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 124u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[4].d[0] + 0ull;  goto L_00318060; }
L_00318060:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00318088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031809C; } }
L_00318088:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031809C; } }
L_00318094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031809Cu);  if (depth < kMaxDepth) unit_0063(c, 207u, depth + 1u); else { c.pc = 0x002AE0E0u; return; } if (c.pc != 0x0031809Cu) [[unlikely]] return; }
L_0031809C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003180B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00318130; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 20624u);
    set32(c.r[2], c.r[2].w[0] - 20568u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00318118; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25440u);
    set32(c.r[2], c.r[2].w[0] + 25496u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031810Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0031810Cu) [[unlikely]] return; }
L_0031810C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318118u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00318118u) [[unlikely]] return; }
L_00318118:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00318134; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318130u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00318130u) [[unlikely]] return; }
L_00318130:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00318134:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00318150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 10u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00318198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318170u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00318170u) [[unlikely]] return; }
L_00318170:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003181A0; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00318184; } }
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_00318184:
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318190u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 348u, depth + 1u); else { c.pc = 0x00317AB0u; return; } if (c.pc != 0x00318190u) [[unlikely]] return; }
L_00318190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031819C; } }
L_00318198:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031819C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003181A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003181B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003181C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003181D0; } }
L_003181C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003181D0u);  if (depth < kMaxDepth) unit_0063(c, 214u, depth + 1u); else { c.pc = 0x002AE2C0u; return; } if (c.pc != 0x003181D0u) [[unlikely]] return; }
L_003181D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003181E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031827C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 20480u);
    set32(c.r[2], c.r[2].w[0] - 20424u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00318264; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 22256u);
    set32(c.r[2], c.r[2].w[0] + 22312u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00318264; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318258u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00318258u) [[unlikely]] return; }
L_00318258:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318264u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00318264u) [[unlikely]] return; }
L_00318264:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00318280; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031827Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0031827Cu) [[unlikely]] return; }
L_0031827C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00318280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003182A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031833C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 20384u);
    set32(c.r[2], c.r[2].w[0] - 20328u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00318324; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00318324; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318318u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00318318u) [[unlikely]] return; }
L_00318318:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318324u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00318324u) [[unlikely]] return; }
L_00318324:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00318340; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031833Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0031833Cu) [[unlikely]] return; }
L_0031833C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00318340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00318360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003183EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 20288u);
    set32(c.r[2], c.r[2].w[0] - 20232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003183D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003183BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x003183BCu) [[unlikely]] return; }
L_003183BC:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003183C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x003183C8u) [[unlikely]] return; }
L_003183C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003183D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x003183D4u) [[unlikely]] return; }
L_003183D4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003183F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003183ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003183ECu) [[unlikely]] return; }
L_003183EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003183F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00318410:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00318360u | kUnwind; return; } goto L_00318360; }
L_00318420:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00317020u | kUnwind; return; } [[clang::musttail]] return unit_007D(c, 293u, depth); }
L_00318430:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003182A0u | kUnwind; return; } goto L_003182A0; }
L_00318440:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00317780u | kUnwind; return; } [[clang::musttail]] return unit_007D(c, 331u, depth); }
L_00318450:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003181E0u | kUnwind; return; } goto L_003181E0; }
L_00318460:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00317B30u | kUnwind; return; } [[clang::musttail]] return unit_007D(c, 352u, depth); }
L_00318470:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003180B0u | kUnwind; return; } goto L_003180B0; }
L_00318480:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003184B0u); set32(c.r[4], 0u + 1424u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x003184B0u) [[unlikely]] return; }
L_003184B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003184D4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003184D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 37u, depth + 1u); else { c.pc = 0x003184F0u; return; } if (c.pc != 0x003184D0u) [[unlikely]] return; }
L_003184D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003184D4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003184F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318504u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x00318504u) [[unlikely]] return; }
L_00318504:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 19952u);
    set32(c.r[3], c.r[3].w[0] - 19896u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00318530:
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
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00318570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003185BC; } }
L_00318570:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 136u);  goto L_00318588; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003185BC; } }
    set32(c.r[4], 0u + 136u);
    c.budget -= 1;
L_00318588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318590u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00318590u) [[unlikely]] return; }
L_00318590:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003185C0; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003185B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 42u, depth + 1u); else { c.pc = 0x003185E0u; return; } if (c.pc != 0x003185B0u) [[unlikely]] return; }
L_003185B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003185BC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003185BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003185C0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003185E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003185F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x003185F4u) [[unlikely]] return; }
L_003185F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 20048u);
    set32(c.r[3], c.r[3].w[0] - 19992u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00318620:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00318654; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 132u)));  if (t) { goto L_00318658; } }
L_00318654:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00318658:
    set32(c.r[6], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u + 46u);
    set32(c.r[20], ld32((c.r[6].w[0] + 3024u)));
    set32(c.r[4], c.r[6].w[0] + 112u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[19], c.r[4].w[0] + 2916u);  if (t) { goto L_00318718; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[21].d[0] = 0ull + 0ull;  goto L_00318704; }
    set32(c.r[3], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00318690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00318848; } }
L_00318690:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318704; } }
L_0031869C:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = 0u;
    set32(c.r[5], ld32((c.r[3].w[0] + 144u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], ld32((c.r[18].w[0] + 144u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003186D0u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x003186D0u) [[unlikely]] return; }
L_003186D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 144u)));
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.f[13] = 0u;
    c.f[14] = c.f[13];
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318700u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x00318700u) [[unlikely]] return; }
L_00318700:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_00318704:
    c.r[3].d[0] = c.r[21].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[21].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031869Cu | kUnwind; return; } goto L_0031869C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318844; } }
L_00318718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00318838; } }
L_00318720:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[13] = 0u;
    set32(c.r[5], ld32((c.r[3].w[0] + 144u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], ld32((c.r[18].w[0] + 144u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318754u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x00318754u) [[unlikely]] return; }
L_00318754:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.f[13] = 0u;
    set32(c.r[6], ld32((c.r[18].w[0] + 144u)));
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 144u)));
    c.f[14] = c.f[13];
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318780u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x00318780u) [[unlikely]] return; }
L_00318780:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[13] = 0u;
    set32(c.r[6], ld32((c.r[18].w[0] + 144u)));
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 144u)));
    c.f[14] = c.f[13];
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003187ACu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x003187ACu) [[unlikely]] return; }
L_003187AC:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42140000u);
    c.f[13] = 0u;
    set32(c.r[6], ld32((c.r[18].w[0] + 144u)));
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 144u)));
    c.f[14] = c.f[13];
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003187D8u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x003187D8u) [[unlikely]] return; }
L_003187D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42300000u);
    c.f[13] = 0u;
    set32(c.r[6], ld32((c.r[18].w[0] + 144u)));
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 144u)));
    c.f[14] = c.f[13];
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318804u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x00318804u) [[unlikely]] return; }
L_00318804:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x424C0000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 144u)));
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.f[13] = 0u;
    c.f[14] = c.f[13];
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318834u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x00318834u) [[unlikely]] return; }
L_00318834:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_00318838:
    c.r[3].d[0] = c.r[21].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[21].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00318720u | kUnwind; return; } goto L_00318720; }
L_00318844:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00318848:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00318870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031890C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 20048u);
    set32(c.r[2], c.r[2].w[0] - 19992u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003188F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003188F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003188E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x003188E8u) [[unlikely]] return; }
L_003188E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003188F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x003188F4u) [[unlikely]] return; }
L_003188F4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00318910; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031890Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0031890Cu) [[unlikely]] return; }
L_0031890C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00318910:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00318930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003189BC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 19952u);
    set32(c.r[2], c.r[2].w[0] - 19896u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003189A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031898Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0031898Cu) [[unlikely]] return; }
L_0031898C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318998u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00318998u) [[unlikely]] return; }
L_00318998:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003189A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x003189A4u) [[unlikely]] return; }
L_003189A4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003189C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003189BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003189BCu) [[unlikely]] return; }
L_003189BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003189C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003189E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00318930u | kUnwind; return; } goto L_00318930; }
L_003189F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00318870u | kUnwind; return; } goto L_00318870; }
L_00318A00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00318620u | kUnwind; return; } goto L_00318620; }
L_00318A10:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318A40u); set32(c.r[4], 0u + 1424u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00318A40u) [[unlikely]] return; }
L_00318A40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00318A64; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318A60u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 70u, depth + 1u); else { c.pc = 0x00318A80u; return; } if (c.pc != 0x00318A60u) [[unlikely]] return; }
L_00318A60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00318A64:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00318A80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318A94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x00318A94u) [[unlikely]] return; }
L_00318A94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 1;
L_00318A98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 19616u);
    set32(c.r[3], c.r[3].w[0] - 19560u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00318AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 34470ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318ADCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00318ADCu) [[unlikely]] return; }
L_00318ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318AE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 85u, depth + 1u); else { c.pc = 0x0027CCC0u; return; } if (c.pc != 0x00318AE4u) [[unlikely]] return; }
L_00318AE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00318B00:
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
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00318B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00318D00; } }
L_00318B40:
    set32(c.r[2], ld32((c.r[19].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[19].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_00318CA8; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00318CA4; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_00318BA8; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00318BA4; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00318BA4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00318BA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_00318C94; } }
L_00318BA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_00318BA8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318BB4u); c.r[5].d[0] = c.r[2].d[0] | 34470ull;  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x00318BB4u) [[unlikely]] return; }
L_00318BB4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 14u);  goto L_00318CB8; }
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00318BD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00318C44; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00318BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318BDCu); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00318BDCu) [[unlikely]] return; }
L_00318BDC:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00318C00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00318C10; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_00318C00:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00318C10:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00318C44; }
    goto L_00318C18;
L_00318C14:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00318C18:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_00318C34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00318C38; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_00318C34:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_00318C38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318C44; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00318C44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 34470ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318C58u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00318C58u) [[unlikely]] return; }
L_00318C58:
    set32(c.r[4], ld32((c.r[19].w[0] + 148u)));
    set32(c.r[3], 0u + 6002u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], 0u + 20u);  goto L_00318C74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 10u);  if (t) { goto L_00318C74; } }
    set32(c.r[5], 0u + 20u);
    c.budget -= 1;
L_00318C74:
    set32(c.r[25], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00318C88u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00318C88u) [[unlikely]] return; }
L_00318C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318CB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_00318C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318C9Cu); c.r[5].d[0] = c.r[2].d[0] | 34470ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00318C9Cu) [[unlikely]] return; }
L_00318C9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318CB4; } }
L_00318CA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_00318CA8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318CB4u); c.r[5].d[0] = c.r[2].d[0] | 34470ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00318CB4u) [[unlikely]] return; }
L_00318CB4:
    set32(c.r[2], 0u + 14u);
    c.budget -= 1;
L_00318CB8:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 160u);  goto L_00318CCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00318D00; } }
    set32(c.r[4], 0u + 160u);
    c.budget -= 1;
L_00318CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318CD4u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00318CD4u) [[unlikely]] return; }
L_00318CD4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00318D04; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318CF4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 98u, depth + 1u); else { c.pc = 0x00318E50u; return; } if (c.pc != 0x00318CF4u) [[unlikely]] return; }
L_00318CF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318D00; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00318D00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00318D04:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00318D20:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[2], 0u + 16u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00318D50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318E24; } }
L_00318D50:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 3028u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1320u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_00318D6C; }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 2;
L_00318D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318D74u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00318D74u) [[unlikely]] return; }
L_00318D74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[2].w[0] + 20496u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[1] = ld32((c.r[3].w[0] + 20500u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 20508u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 144u), c.f[2]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318DB0u); st32((c.r[29].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00318DB0u) [[unlikely]] return; }
L_00318DB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[19], c.r[2].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318DC0u); set32(c.r[4], c.r[19].w[0] + 2848u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00318DC0u) [[unlikely]] return; }
L_00318DC0:
    set32(c.r[4], c.r[19].w[0] + 2848u);
    set32(c.r[6], c.r[16].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318DD0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x00318DD0u) [[unlikely]] return; }
L_00318DD0:
    set32(c.r[6], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[4], c.r[19].w[0] + 2848u);
    set32(c.r[7], ld32((c.r[16].w[0] + 244u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 248u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318DE8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 245u, depth + 1u); else { c.pc = 0x0018FE90u; return; } if (c.pc != 0x00318DE8u) [[unlikely]] return; }
L_00318DE8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318DF4u); set32(c.r[5], c.r[19].w[0] + 2848u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00318DF4u) [[unlikely]] return; }
L_00318DF4:
    set32(c.r[4], c.r[19].w[0] + 2848u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318E00u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x00318E00u) [[unlikely]] return; }
L_00318E00:
    set32(c.r[4], c.r[19].w[0] + 2848u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318E10u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x00318E10u) [[unlikely]] return; }
L_00318E10:
    set32(c.r[4], c.r[18].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318E1Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 120u, depth + 1u); else { c.pc = 0x002790D0u; return; } if (c.pc != 0x00318E1Cu) [[unlikely]] return; }
L_00318E1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00318E30; } }
L_00318E24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318E2Cu);  if (depth < kMaxDepth) unit_006B(c, 152u, depth + 1u); else { c.pc = 0x002CDEC0u; return; } if (c.pc != 0x00318E2Cu) [[unlikely]] return; }
L_00318E2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00318E30:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00318E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318E64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x00318E64u) [[unlikely]] return; }
L_00318E64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 19712u);
    set32(c.r[2], c.r[2].w[0] - 19656u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 8;
L_00318E84:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00318E84u | kUnwind; return; } goto L_00318E84; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00318ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 7;
L_00318EEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 21472u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00318F0Cu); set32(c.r[5], ld32((c.r[2].w[0])));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00318F0Cu) [[unlikely]] return; }
L_00318F0C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00318EECu | kUnwind; return; } goto L_00318EEC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318F2Cu); c.r[5].d[0] = c.r[2].d[0] | 34465ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00318F2Cu) [[unlikely]] return; }
L_00318F2C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318F3Cu); c.r[5].d[0] = c.r[2].d[0] | 34466ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00318F3Cu) [[unlikely]] return; }
L_00318F3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318F4Cu); c.r[5].d[0] = c.r[2].d[0] | 34467ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00318F4Cu) [[unlikely]] return; }
L_00318F4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318F5Cu); c.r[5].d[0] = c.r[2].d[0] | 34468ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00318F5Cu) [[unlikely]] return; }
L_00318F5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318F6Cu); c.r[5].d[0] = c.r[2].d[0] | 34469ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00318F6Cu) [[unlikely]] return; }
L_00318F6C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318F7Cu); c.r[5].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x00318F7Cu) [[unlikely]] return; }
L_00318F7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318F84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 57u, depth + 1u); else { c.pc = 0x0026C870u; return; } if (c.pc != 0x00318F84u) [[unlikely]] return; }
L_00318F84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00318FA0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00319000; } }
    set32(c.r[3], 0u + 47u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[19], ld32((c.r[18].w[0] + 76u)));  goto L_00319004; }
    set32(c.r[3], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_00319000; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_00319000; } }
    set32(c.r[3], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_00319000; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00319410; } }
L_00319000:
    set32(c.r[19], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_00319004:
    set32(c.r[3], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 136u)));  if (t) { goto L_00319018; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00319090; } }
L_00319018:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319024u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00319024u) [[unlikely]] return; }
L_00319024:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00319044; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00319054; } }
L_00319044:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_00319054:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00319090; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_00319078; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00319088; } }
L_00319078:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_00319088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319090; } }
L_00319090:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0031940C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[5], 0u + 68u);
    set32(c.r[2], ld32((c.r[3].w[0] + 476u)));
    st32((c.r[3].w[0] + 480u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    st32((c.r[2].w[0] + 476u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 484u)));
    st32((c.r[3].w[0] + 488u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 13;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003190D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0031910C; } }
L_003190D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003190DCu);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x003190DCu) [[unlikely]] return; }
L_003190DC:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003190FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0031910C; } }
L_003190FC:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0031910C:
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    st32((c.r[2].w[0] + 484u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319124u); set32(c.r[5], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000E(c, 140u, depth + 1u); else { c.pc = 0x00158D80u; return; } if (c.pc != 0x00319124u) [[unlikely]] return; }
L_00319124:
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319134u); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x00158E60u; return; } if (c.pc != 0x00319134u) [[unlikely]] return; }
L_00319134:
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319144u); set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_000E(c, 148u, depth + 1u); else { c.pc = 0x00158E90u; return; } if (c.pc != 0x00319144u) [[unlikely]] return; }
L_00319144:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031916Cu); set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  if (depth < kMaxDepth) unit_005A(c, 338u, depth + 1u); else { c.pc = 0x0028B760u; return; } if (c.pc != 0x0031916Cu) [[unlikely]] return; }
L_0031916C:
    set32(c.r[19], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 136u)));  if (t) { goto L_00319184; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003191FC; } }
L_00319184:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319190u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x00319190u) [[unlikely]] return; }
L_00319190:
    set32(c.r[4], ld32((c.r[19].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003191B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003191C0; } }
L_003191B0:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003191C0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_003191FC; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  goto L_003191E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003191F4; } }
L_003191E4:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_003191F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003191FC; } }
L_003191FC:
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.r[2].d[0] = c.r[2].d[0] | 34465ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319218u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x00319218u) [[unlikely]] return; }
L_00319218:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_00319260; }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 76u)));  goto L_0031924C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 312u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319248u); set32(c.r[6], c.r[2].w[0] + 15u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x00319248u) [[unlikely]] return; }
L_00319248:
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_0031924C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031925Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0031925Cu) [[unlikely]] return; }
L_0031925C:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_00319260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031926Cu); c.r[5].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0031926Cu) [[unlikely]] return; }
L_0031926C:
    set32(c.r[16], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00319284; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003192DC; } }
L_00319284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031928Cu); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0031928Cu) [[unlikely]] return; }
L_0031928C:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_003192AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003192BC; } }
L_003192AC:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_003192BC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_003192DC; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_003192D4; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003192D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003192DC; } }
L_003192DC:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[6].d[0] = c.r[2].d[0] | 34464ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003192F0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x003192F0u) [[unlikely]] return; }
L_003192F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 136u)));  goto L_003193AC; }
    set32(c.r[2], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 312u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319314u); set32(c.r[6], c.r[2].w[0] + 10u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x00319314u) [[unlikely]] return; }
L_00319314:
    set32(c.r[17], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], 0u + 6001u);
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00319388; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319330u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00319330u) [[unlikely]] return; }
L_00319330:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[17].w[0] + 352u);
    c.f[2] = ld32((c.r[2].w[0] + 20484u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[2].w[0] + 20488u));
    st32((c.r[29].w[0] + 84u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 20492u));
    st32((c.r[29].w[0] + 88u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[29].w[0] + 92u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031936Cu); st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0018F570u; return; } if (c.pc != 0x0031936Cu) [[unlikely]] return; }
L_0031936C:
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319378u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x00319378u) [[unlikely]] return; }
L_00319378:
    set32(c.r[3], ld32((c.r[16].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 308u), c.r[3].w[0]);  if (t) { goto L_003193A8; } }
L_00319388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319390u);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00319390u) [[unlikely]] return; }
L_00319390:
    set32(c.r[5], c.r[17].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031939Cu); set32(c.r[4], c.r[16].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0031939Cu) [[unlikely]] return; }
L_0031939C:
    set32(c.r[3], ld32((c.r[16].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    c.budget -= 3;
L_003193A8:
    set32(c.r[3], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 1;
L_003193AC:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0031940C; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031940C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 21472u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003193ECu); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003193ECu) [[unlikely]] return; }
L_003193EC:
    set32(c.r[3], ld32((c.r[18].w[0] + 136u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 21468u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031940Cu); set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  if (depth < kMaxDepth) unit_005B(c, 80u, depth + 1u); else { c.pc = 0x0028CEC0u; return; } if (c.pc != 0x0031940Cu) [[unlikely]] return; }
L_0031940C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00319410:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00319430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00319458; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 5u);  if (t) { goto L_003194C4; } }
L_00319458:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319464u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0019(c, 17u, depth + 1u); else { c.pc = 0x00184510u; return; } if (c.pc != 0x00319464u) [[unlikely]] return; }
L_00319464:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;  goto L_0031947C; }
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 2);  goto L_00319498; }
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 1;
L_0031947C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00319488; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00319488:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00319494; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00319494:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.budget -= 1;
L_00319498:
    set32(c.r[5], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 140u)));  if (t) { goto L_003194B8; } }
L_003194A8:
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 140u)));
    st32((c.r[4].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 4;
L_003194B8:
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003194A8u | kUnwind; return; } goto L_003194A8; }
L_003194C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003194E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[21], ld32((c.r[5].w[0] + 3024u)));
    set32(c.r[4], c.r[5].w[0] + 112u);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[22], c.r[4].w[0] + 2916u);  if (t) { goto L_00319534; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[3].w[0] + 132u)));  if (t) { goto L_00319538; } }
L_00319534:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00319538:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_0031980C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319548u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 133u, depth + 1u); else { c.pc = 0x00319430u; return; } if (c.pc != 0x00319548u) [[unlikely]] return; }
L_00319548:
    st32((c.r[19].w[0] + 136u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319558u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 262u, depth + 1u); else { c.pc = 0x00282740u; return; } if (c.pc != 0x00319558u) [[unlikely]] return; }
L_00319558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003197FC; } }
L_00319560:
    set32(c.r[5], ld32((c.r[19].w[0] + 136u)));
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], ld32((c.r[3].w[0])));  if (t) { goto L_003197F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 21392u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00318000u < 16384u) { entry = entries_007E[(t - 0x00318000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00319590:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[8], ld32((c.r[19].w[0] + 96u)));
    c.f[20] = c.r[2].w[0];
    set32(c.r[2], 0u + 4u);
    c.budget -= 6;
    if (c.r[8].d[0] != c.r[2].d[0]) { set32(c.r[20], ld32((c.r[16].w[0] + 144u)));  goto L_003195BC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    set32(c.r[20], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 5;
L_003195BC:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 76u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0] + 144u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003195D8u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x00282B00u; return; } if (c.pc != 0x003195D8u) [[unlikely]] return; }
L_003195D8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.f[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.f[14] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003195FCu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x003195FCu) [[unlikely]] return; }
L_003195FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_003197FC; } }
L_00319604:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  goto L_00319628; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00319624; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_00319634; } }
L_00319624:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_00319628:
    c.f[22] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031963C; } }
L_00319634:
    c.f[22] = c.r[2].w[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0031963C:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);  goto L_0031965C; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00319658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);  if (t) { goto L_00319668; } }
L_00319658:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.budget -= 1;
L_0031965C:
    c.f[20] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[19].w[0] + 96u)));  if (t) { goto L_00319670; } }
L_00319668:
    c.f[20] = c.r[2].w[0];
    set32(c.r[8], ld32((c.r[19].w[0] + 96u)));
    c.budget -= 2;
L_00319670:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[8].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[19].w[0] + 76u)));  goto L_00319694; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[2].w[0];
    c.f[22] = fp::ee::add(c.fcr31, c.f[22], c.f[0]);
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 6;
L_00319694:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003196A8u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x00282B00u; return; } if (c.pc != 0x003196A8u) [[unlikely]] return; }
L_003196A8:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[20], c.f[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[20].d[0] = 0ull + 0ull;
    c.f[21] = c.f[0];
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
L_003196C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003196CCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x003196CCu) [[unlikely]] return; }
L_003196CC:
    set32(c.r[2], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != 0ull; c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[22]);  if (t) { goto L_003196E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = c.f[21];  if (t) { goto L_003196E8; } }
L_003196E4:
    c.f[13] = 0u;
    c.budget -= 1;
L_003196E8:
    set32(c.r[6], ld32((c.r[16].w[0] + 144u)));
    c.f[14] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319700u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x00319700u) [[unlikely]] return; }
L_00319700:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.f[22] = fp::ee::add(c.fcr31, c.f[22], c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003196C4u | kUnwind; return; } goto L_003196C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003197F8; } }
L_00319718:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 192u));
    set32(c.r[2], ld32((c.r[3].w[0] + 3028u)));
    c.f[2] = ld32((c.r[2].w[0] + 192u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0xC20C0000u);  goto L_00319748; }
    c.f[1] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC20C0000u);
    c.budget -= 2;
L_00319748:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);  goto L_00319764; }
    c.f[1] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.budget -= 2;
L_00319764:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42FA0000u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[8], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[2], 0u + 4u);
    c.f[0] = c.r[5].w[0];
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[2] = c.r[4].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 16;
    { const bool t = c.r[8].d[0] != c.r[2].d[0]; c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);  if (t) { goto L_003197B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 4;
L_003197B4:
    set32(c.r[20], ld32((c.r[16].w[0] + 144u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 76u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0] + 144u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003197D4u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x00282B00u; return; } if (c.pc != 0x003197D4u) [[unlikely]] return; }
L_003197D4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.f[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.f[14] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003197F8u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x003197F8u) [[unlikely]] return; }
L_003197F8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003197FC:
    c.r[3].d[0] = c.r[17].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00319560u | kUnwind; return; } goto L_00319560; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0031980C:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00319840:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003198DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 19712u);
    set32(c.r[2], c.r[2].w[0] - 19656u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003198C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003198C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003198B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x003198B8u) [[unlikely]] return; }
L_003198B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003198C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x003198C4u) [[unlikely]] return; }
L_003198C4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003198E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003198DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x003198DCu) [[unlikely]] return; }
L_003198DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003198E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00319900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031998C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 19616u);
    set32(c.r[2], c.r[2].w[0] - 19560u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00319974; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031995Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0031995Cu) [[unlikely]] return; }
L_0031995C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319968u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00319968u) [[unlikely]] return; }
L_00319968:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319974u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x00319974u) [[unlikely]] return; }
L_00319974:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00319990; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031998Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0031998Cu) [[unlikely]] return; }
L_0031998C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00319990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003199B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00319900u | kUnwind; return; } goto L_00319900; }
L_003199C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00318D20u | kUnwind; return; } goto L_00318D20; }
L_003199D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00319840u | kUnwind; return; } goto L_00319840; }
L_003199E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00318FA0u | kUnwind; return; } goto L_00318FA0; }
L_003199F0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319A20u); set32(c.r[4], 0u + 1440u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00319A20u) [[unlikely]] return; }
L_00319A20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00319A44; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319A40u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 167u, depth + 1u); else { c.pc = 0x00319A60u; return; } if (c.pc != 0x00319A40u) [[unlikely]] return; }
L_00319A40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00319A44:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00319A60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319A74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x00319A74u) [[unlikely]] return; }
L_00319A74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 19040u);
    set32(c.r[2], c.r[2].w[0] - 18984u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319A9Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x00319A9Cu) [[unlikely]] return; }
L_00319A9C:
    st32((c.r[16].w[0] + 1428u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 1424u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00319AC0:
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
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00319B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00319BB8; } }
L_00319B00:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00319B14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00319BB8; } }
L_00319B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319B1Cu);  if (depth < kMaxDepth) unit_007E(c, 205u, depth + 1u); else { c.pc = 0x0031A130u; return; } if (c.pc != 0x00319B1Cu) [[unlikely]] return; }
L_00319B1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 164u)));  goto L_00319B70; }
    set32(c.r[3], ld32((c.r[19].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFBFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u + 136u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319B44u); st32((c.r[19].w[0] + 1428u), 0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00319B44u) [[unlikely]] return; }
L_00319B44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00319BBC; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319B64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 230u, depth + 1u); else { c.pc = 0x0031A5F0u; return; } if (c.pc != 0x00319B64u) [[unlikely]] return; }
L_00319B64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319BB8; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 164u)));
    c.budget -= 1;
L_00319B70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 136u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319B8Cu); st32((c.r[19].w[0] + 1428u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00319B8Cu) [[unlikely]] return; }
L_00319B8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319BB8; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319BACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 209u, depth + 1u); else { c.pc = 0x0031A240u; return; } if (c.pc != 0x00319BACu) [[unlikely]] return; }
L_00319BAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319BB8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00319BB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00319BBC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00319BE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319BFCu); set32(c.r[4], 0u + 660u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00319BFCu) [[unlikely]] return; }
L_00319BFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00319C28; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319C10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 8u, depth + 1u); else { c.pc = 0x002AC0E0u; return; } if (c.pc != 0x00319C10u) [[unlikely]] return; }
L_00319C10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 19328u);
    set32(c.r[2], c.r[2].w[0] - 19272u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 6;
L_00319C28:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00319C40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 16u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00319C6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00319CBC; } }
L_00319C6C:
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319CB8; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 1320u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00319CB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319C90u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00319C90u) [[unlikely]] return; }
L_00319C90:
    set32(c.r[5], c.r[18].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319C9Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x00319C9Cu) [[unlikely]] return; }
L_00319C9C:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 7;
L_00319CB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00319CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319CC4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 134u, depth + 1u); else { c.pc = 0x002CDC50u; return; } if (c.pc != 0x00319CC4u) [[unlikely]] return; }
L_00319CC4:
    set32(c.r[3], 0u + 77u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));  goto L_00319E08; }
    set32(c.r[3], 0u + 68u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_00319DBC; }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 172u)));  goto L_00319CF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00319E44; } }
L_00319CF0:
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00319E40; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00319E40; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1320u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00319E40; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[17].w[0] + 192u));  goto L_00319D40; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00319E40; } }
    c.f[0] = ld32((c.r[17].w[0] + 192u));
    c.budget -= 1;
L_00319D40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[4].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 196u));
    st32((c.r[4].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 200u));
    st32((c.r[4].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 204u));
    st32((c.r[4].w[0] + 204u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    st32((c.r[4].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 244u)));
    st32((c.r[4].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 248u)));
    st32((c.r[4].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 252u)));
    st32((c.r[4].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319DB4u); st32((c.r[4].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x00319DB4u) [[unlikely]] return; }
L_00319DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319E40; } }
L_00319DBC:
    set32(c.r[5], ld32((c.r[2].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319DC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 125u, depth + 1u); else { c.pc = 0x002E9860u; return; } if (c.pc != 0x00319DC8u) [[unlikely]] return; }
L_00319DC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319E40; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 120u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 1412u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 144u)));  if (t) { goto L_00319DF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_00319DF4; } }
L_00319DF0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00319DF4:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319E00u);  if (depth < kMaxDepth) unit_0058(c, 257u, depth + 1u); else { c.pc = 0x00282630u; return; } if (c.pc != 0x00319E00u) [[unlikely]] return; }
L_00319E00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319E40; } }
L_00319E08:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 672u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319E1Cu); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x00319E1Cu) [[unlikely]] return; }
L_00319E1C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00319E40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319E30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 125u, depth + 1u); else { c.pc = 0x002E9860u; return; } if (c.pc != 0x00319E30u) [[unlikely]] return; }
L_00319E30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319E40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319E40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 111u, depth + 1u); else { c.pc = 0x002E96E0u; return; } if (c.pc != 0x00319E40u) [[unlikely]] return; }
L_00319E40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00319E44:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00319E60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319E74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0028A510u; return; } if (c.pc != 0x00319E74u) [[unlikely]] return; }
L_00319E74:
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00319EE0; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 3424u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00319EA0; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_00319EA0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00319EDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319EB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 205u, depth + 1u); else { c.pc = 0x0031A130u; return; } if (c.pc != 0x00319EB0u) [[unlikely]] return; }
L_00319EB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 164u)));  goto L_00319ED0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_00319EDC; } }
L_00319ED0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 3;
L_00319EDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00319EE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00319EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1100u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 172u)));  goto L_00319F0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00319F9C; } }
L_00319F0C:
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 1428u)));  goto L_00319F50; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 140u)));
    c.f[2] = ld32((c.r[3].w[0] + 11072u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[1] = ld32((c.r[3].w[0] + 11076u));
    st32((c.r[4].w[0] + 1264u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[3].w[0] + 11080u));
    st32((c.r[4].w[0] + 1268u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[4].w[0] + 1272u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 11084u));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1276u), c.f[0]);  if (t) { goto L_00319F98; } }
L_00319F50:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  goto L_00319F68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319F60u);  if (depth < kMaxDepth) unit_005A(c, 330u, depth + 1u); else { c.pc = 0x0028B630u; return; } if (c.pc != 0x00319F60u) [[unlikely]] return; }
L_00319F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00319F98; } }
L_00319F68:
    set32(c.r[4], ld32((c.r[4].w[0] + 140u)));
    c.f[2] = ld32((c.r[3].w[0] + 11072u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[1] = ld32((c.r[3].w[0] + 11076u));
    st32((c.r[4].w[0] + 1264u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[3].w[0] + 11080u));
    st32((c.r[4].w[0] + 1268u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[4].w[0] + 1272u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 11084u));
    st32((c.r[4].w[0] + 1276u), c.f[0]);
    c.budget -= 12;
L_00319F98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00319F9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00319FB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319FCCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 125u, depth + 1u); else { c.pc = 0x002E9860u; return; } if (c.pc != 0x00319FCCu) [[unlikely]] return; }
L_00319FCC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00319FDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00319FE4; } }
L_00319FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319FE4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 243u, depth + 1u); else { c.pc = 0x0027ED10u; return; } if (c.pc != 0x00319FE4u) [[unlikely]] return; }
L_00319FE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031A000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031A054; } }
    set32(c.r[16], ld32((c.r[4].w[0] + 1320u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A034u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 125u, depth + 1u); else { c.pc = 0x002E9860u; return; } if (c.pc != 0x0031A034u) [[unlikely]] return; }
L_0031A034:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0])));  goto L_0031A048; }
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0031A054; } }
L_0031A048:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A054u); set32(c.r[4], c.r[4].w[0] - 21344u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0031A054u) [[unlikely]] return; }
L_0031A054:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 4u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031A070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031A0F0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A09Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x0031A09Cu) [[unlikely]] return; }
L_0031A09C:
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0])));  goto L_0031A0DC; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A0D8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A0D0u); st32((c.r[16].w[0] + 172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0072(c, 103u, depth + 1u); else { c.pc = 0x002E9600u; return; } if (c.pc != 0x0031A0D0u) [[unlikely]] return; }
L_0031A0D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0031A110; } }
L_0031A0D8:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0031A0DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A0E8u); set32(c.r[4], c.r[4].w[0] - 21280u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0031A0E8u) [[unlikely]] return; }
L_0031A0E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A10C; } }
L_0031A0F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A10C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A10Cu); set32(c.r[4], c.r[4].w[0] - 21216u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x0031A10Cu) [[unlikely]] return; }
L_0031A10C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0031A110:
    set32(c.r[2], 0u + 4u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031A130:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 3424u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031A15C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0])));  if (t) { goto L_0031A160; } }
L_0031A15C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031A160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A168u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0031A168u) [[unlikely]] return; }
L_0031A168:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 148u)));  goto L_0031A180; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031A220; } }
L_0031A180:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0031A220; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 172u)));  goto L_0031A1A4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A220; } }
L_0031A1A4:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 608u)));  goto L_0031A1B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031A220; } }
L_0031A1B8:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[2].w[0] + 2064u);
    set32(c.r[2], c.r[3].w[0] + 112u);
    set32(c.r[16], ld32((c.r[3].w[0] + 960u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A1D4u); set32(c.r[17], c.r[2].w[0] + 452u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x0031A1D4u) [[unlikely]] return; }
L_0031A1D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031A210; } }
L_0031A1DC:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0031A210; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031A20C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031A220; } }
L_0031A20C:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0031A210:
    c.r[3].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A1DCu | kUnwind; return; } goto L_0031A1DC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0031A220:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031A240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A254u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x0031A254u) [[unlikely]] return; }
L_0031A254:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 19136u);
    set32(c.r[3], c.r[3].w[0] - 19080u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031A280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A2A0u); c.r[5].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0031A2A0u) [[unlikely]] return; }
L_0031A2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A2A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 57u, depth + 1u); else { c.pc = 0x0026C870u; return; } if (c.pc != 0x0031A2A8u) [[unlikely]] return; }
L_0031A2A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031A2C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 46u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031A2FC; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_0031A300; }
    set32(c.r[3], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0031A2FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0031A3E8; } }
L_0031A2FC:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_0031A300:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A30Cu); c.r[5].d[0] = c.r[2].d[0] | 34464ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0031A30Cu) [[unlikely]] return; }
L_0031A30C:
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0031A324; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0031A37C; } }
L_0031A324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A32Cu); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x0031A32Cu) [[unlikely]] return; }
L_0031A32C:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0031A34C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0031A35C; } }
L_0031A34C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0031A35C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0031A37C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_0031A374; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031A374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A37C; } }
L_0031A37C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[6].d[0] = c.r[2].d[0] | 34464ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A390u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x0031A390u) [[unlikely]] return; }
L_0031A390:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0031A3E4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 312u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A3C0u); set32(c.r[6], c.r[2].w[0] + 300u);  if (depth < kMaxDepth) unit_0062(c, 55u, depth + 1u); else { c.pc = 0x002A8670u; return; } if (c.pc != 0x0031A3C0u) [[unlikely]] return; }
L_0031A3C0:
    set32(c.r[17], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A3CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0031A3CCu) [[unlikely]] return; }
L_0031A3CC:
    set32(c.r[5], c.r[17].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A3D8u); set32(c.r[4], c.r[16].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0031A3D8u) [[unlikely]] return; }
L_0031A3D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    c.budget -= 3;
L_0031A3E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0031A3E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031A400:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[21], ld32((c.r[5].w[0] + 3024u)));
    set32(c.r[4], c.r[5].w[0] + 112u);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[22], c.r[4].w[0] + 2916u);  if (t) { goto L_0031A454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[3].w[0] + 132u)));  if (t) { goto L_0031A458; } }
L_0031A454:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031A458:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_0031A5B4; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A46Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 262u, depth + 1u); else { c.pc = 0x00282740u; return; } if (c.pc != 0x0031A46Cu) [[unlikely]] return; }
L_0031A46C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0031A5A4; } }
L_0031A474:
    set32(c.r[8], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[4], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] == c.r[3].d[0]; set32(c.r[17], ld32((c.r[4].w[0])));  if (t) { goto L_0031A558; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_0031A4A4; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0031A4A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0031A5A4; } }
L_0031A4A4:
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);  goto L_0031A4C4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[22] = c.r[3].w[0];
    c.f[20] = c.r[2].w[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[20].w[0] + 76u)));  if (t) { goto L_0031A4D4; } }
L_0031A4C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[22] = c.r[3].w[0];
    c.f[20] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[20].w[0] + 76u)));
    c.budget -= 4;
L_0031A4D4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A4E8u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x00282B00u; return; } if (c.pc != 0x0031A4E8u) [[unlikely]] return; }
L_0031A4E8:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[20], c.f[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[21] = c.f[0];
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
L_0031A504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A50Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x0031A50Cu) [[unlikely]] return; }
L_0031A50C:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[22]);  if (t) { goto L_0031A524; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = c.f[21];  if (t) { goto L_0031A528; } }
L_0031A524:
    c.f[13] = 0u;
    c.budget -= 1;
L_0031A528:
    set32(c.r[6], ld32((c.r[17].w[0] + 144u)));
    c.f[14] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A540u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x0031A540u) [[unlikely]] return; }
L_0031A540:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.f[22] = fp::ee::add(c.fcr31, c.f[22], c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A504u | kUnwind; return; } goto L_0031A504; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A5A0; } }
L_0031A558:
    set32(c.r[16], ld32((c.r[17].w[0] + 144u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 76u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[5].w[0] + 144u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A578u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x00282B00u; return; } if (c.pc != 0x0031A578u) [[unlikely]] return; }
L_0031A578:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[13] = c.f[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A5A0u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x0031A5A0u) [[unlikely]] return; }
L_0031A5A0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0031A5A4:
    c.r[3].d[0] = c.r[18].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A474u | kUnwind; return; } goto L_0031A474; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0031A5B4:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0031A5F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A604u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 45u, depth + 1u); else { c.pc = 0x0026C620u; return; } if (c.pc != 0x0031A604u) [[unlikely]] return; }
L_0031A604:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 19232u);
    set32(c.r[2], c.r[2].w[0] - 19176u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031A660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A674u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 248u, depth + 1u); else { c.pc = 0x0031A7F0u; return; } if (c.pc != 0x0031A674u) [[unlikely]] return; }
L_0031A674:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A688u); set32(c.r[5], 0u + 25u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A688u) [[unlikely]] return; }
L_0031A688:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A6A4u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0031A6A4u) [[unlikely]] return; }
L_0031A6A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A6B0u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0031A6B0u) [[unlikely]] return; }
L_0031A6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A6B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 57u, depth + 1u); else { c.pc = 0x0026C870u; return; } if (c.pc != 0x0031A6B8u) [[unlikely]] return; }
L_0031A6B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031A6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A6E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 77u, depth + 1u); else { c.pc = 0x0026CAC0u; return; } if (c.pc != 0x0031A6E4u) [[unlikely]] return; }
L_0031A6E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0031A720; }
    c.f[1] = ld32((c.r[16].w[0] + 100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42D80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0031A71C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A71Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 248u, depth + 1u); else { c.pc = 0x0031A7F0u; return; } if (c.pc != 0x0031A71Cu) [[unlikely]] return; }
L_0031A71C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0031A720:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031A730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 44u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031A754; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0031A7D4; } }
L_0031A754:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 25u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A770u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A770u) [[unlikely]] return; }
L_0031A770:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A780u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0062(c, 19u, depth + 1u); else { c.pc = 0x002A81E0u; return; } if (c.pc != 0x0031A780u) [[unlikely]] return; }
L_0031A780:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 68u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A794u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x0031A794u) [[unlikely]] return; }
L_0031A794:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A7A0u); set32(c.r[5], 0u + 68u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x0031A7A0u) [[unlikely]] return; }
L_0031A7A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0031A7D0; } }
    set32(c.r[16], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A7B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0031A7B8u) [[unlikely]] return; }
L_0031A7B8:
    set32(c.r[5], c.r[16].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A7C4u); set32(c.r[4], c.r[17].w[0] + 352u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0018F3A0u; return; } if (c.pc != 0x0031A7C4u) [[unlikely]] return; }
L_0031A7C4:
    set32(c.r[3], ld32((c.r[17].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[17].w[0] + 308u), c.r[3].w[0]);
    c.budget -= 3;
L_0031A7D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0031A7D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031A7F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031A864; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], 0u + 69u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A82Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x0031A82Cu) [[unlikely]] return; }
L_0031A82C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 3028u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A83Cu); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0072(c, 103u, depth + 1u); else { c.pc = 0x002E9600u; return; } if (c.pc != 0x0031A83Cu) [[unlikely]] return; }
L_0031A83C:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A864u); set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0031A864u) [[unlikely]] return; }
L_0031A864:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031A880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0031A8BC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 76u)));  goto L_0031A8A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A8EC; } }
L_0031A8A4:
    set32(c.r[2], ld32((c.r[2].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A8EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031A8F4; } }
L_0031A8BC:
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  goto L_0031A8D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031A8F4; } }
L_0031A8D8:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_0031A8F4; } }
L_0031A8EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A8F4u);  if (depth < kMaxDepth) unit_0063(c, 207u, depth + 1u); else { c.pc = 0x002AE0E0u; return; } if (c.pc != 0x0031A8F4u) [[unlikely]] return; }
L_0031A8F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031A900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 10u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A91Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 211u, depth + 1u); else { c.pc = 0x002CA110u; return; } if (c.pc != 0x0031A91Cu) [[unlikely]] return; }
L_0031A91C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 19376u);
    set32(c.r[2], c.r[2].w[0] - 19364u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], 0u + 70u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A94Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_006D(c, 10u, depth + 1u); else { c.pc = 0x002D4150u; return; } if (c.pc != 0x0031A94Cu) [[unlikely]] return; }
L_0031A94C:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A958u); set32(c.r[5], 0u + 70u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x0031A958u) [[unlikely]] return; }
    goto L_0031A958;
L_0031A954:
    set32(c.r[5], 0u + 70u);
    c.budget -= 1;
L_0031A958:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  goto L_0031A978; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A974u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x0031A974u) [[unlikely]] return; }
L_0031A974:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_0031A978:
    set32(c.r[5], 0u + 26u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A990u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A990u) [[unlikely]] return; }
L_0031A990:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031A9B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031AA14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 19376u);
    set32(c.r[2], c.r[2].w[0] - 19364u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A9F0u); set32(c.r[5], 0u + 70u);  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x0031A9F0u) [[unlikely]] return; }
L_0031A9F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A9FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 213u, depth + 1u); else { c.pc = 0x002CA1B0u; return; } if (c.pc != 0x0031A9FCu) [[unlikely]] return; }
L_0031A9FC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0031AA18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AA14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x0031AA14u) [[unlikely]] return; }
L_0031AA14:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031AA18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031AA30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031AB68; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_0031AB24; }
    set32(c.r[8], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[8].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  goto L_0031AAA4; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  goto L_0031AA74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0031AB6C; } }
L_0031AA74:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AA88u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0031AA88u) [[unlikely]] return; }
L_0031AA88:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AA94u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 126u)));  if (depth < kMaxDepth) unit_005A(c, 312u, depth + 1u); else { c.pc = 0x0028B280u; return; } if (c.pc != 0x0031AA94u) [[unlikely]] return; }
L_0031AA94:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0031AB68; } }
L_0031AAA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AAACu); set32(c.r[5], 0u + 70u);  if (depth < kMaxDepth) unit_0061(c, 355u, depth + 1u); else { c.pc = 0x002A7C30u; return; } if (c.pc != 0x0031AAACu) [[unlikely]] return; }
L_0031AAAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031AB68; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AAC4u); set32(c.r[4], c.r[2].w[0] + 2072u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x0031AAC4u) [[unlikely]] return; }
L_0031AAC4:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1320u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.f[13] = c.f[0] ^ fp::kSign;  if (t) { goto L_0031AAE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_0031AAEC; } }
L_0031AAE8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031AAEC:
    c.f[12] = 0u;
    c.r[7].d[0] = 0ull + 0ull;
    c.f[14] = c.f[12];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AB00u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x002824C0u; return; } if (c.pc != 0x0031AB00u) [[unlikely]] return; }
L_0031AB00:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AB14u); set32(c.r[5], 0u + 14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031AB14u) [[unlikely]] return; }
L_0031AB14:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0031AB68; } }
L_0031AB24:
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0031AB68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AB4Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 192u, depth + 1u); else { c.pc = 0x0027E0F0u; return; } if (c.pc != 0x0031AB4Cu) [[unlikely]] return; }
L_0031AB4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 7;
L_0031AB68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0031AB6C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031AB80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031AC00; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 19328u);
    set32(c.r[2], c.r[2].w[0] - 19272u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0031ABE8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25440u);
    set32(c.r[2], c.r[2].w[0] + 25496u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ABDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0031ABDCu) [[unlikely]] return; }
L_0031ABDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ABE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0031ABE8u) [[unlikely]] return; }
L_0031ABE8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0031AC04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AC00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0031AC00u) [[unlikely]] return; }
L_0031AC00:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0031AC04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031AC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 10u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031AC68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AC40u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x0031AC40u) [[unlikely]] return; }
L_0031AC40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0031AC70; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0031AC54; } }
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_0031AC54:
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AC60u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 254u, depth + 1u); else { c.pc = 0x0031A900u; return; } if (c.pc != 0x0031AC60u) [[unlikely]] return; }
L_0031AC60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031AC6C; } }
L_0031AC68:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031AC6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0031AC70:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031AC80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0031AC98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031ACA0; } }
L_0031AC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ACA0u);  if (depth < kMaxDepth) unit_0063(c, 214u, depth + 1u); else { c.pc = 0x002AE2C0u; return; } if (c.pc != 0x0031ACA0u) [[unlikely]] return; }
L_0031ACA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031ACB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031AD4C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 19232u);
    set32(c.r[2], c.r[2].w[0] - 19176u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0031AD34; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0031AD34; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AD28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0031AD28u) [[unlikely]] return; }
L_0031AD28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AD34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0031AD34u) [[unlikely]] return; }
L_0031AD34:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0031AD50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AD4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0031AD4Cu) [[unlikely]] return; }
L_0031AD4C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031AD50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031AD70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031AE0C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 19136u);
    set32(c.r[2], c.r[2].w[0] - 19080u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0031ADF4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 21536u);
    set32(c.r[2], c.r[2].w[0] + 21592u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0031ADF4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 23952u);
    set32(c.r[2], c.r[2].w[0] + 24008u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ADE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0031ADE8u) [[unlikely]] return; }
L_0031ADE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ADF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0031ADF4u) [[unlikely]] return; }
L_0031ADF4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0031AE10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AE0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0031AE0Cu) [[unlikely]] return; }
L_0031AE0C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031AE10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031AE30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031AEBC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 19040u);
    set32(c.r[2], c.r[2].w[0] - 18984u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0031AEA4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 28176u);
    set32(c.r[2], c.r[2].w[0] + 28232u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 816u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AE8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0031AE8Cu) [[unlikely]] return; }
L_0031AE8C:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AE98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x0031AE98u) [[unlikely]] return; }
L_0031AE98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AEA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x0031AEA4u) [[unlikely]] return; }
L_0031AEA4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0031AEC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AEBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0031AEBCu) [[unlikely]] return; }
L_0031AEBC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0031AEC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031AEE0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031AE30u | kUnwind; return; } goto L_0031AE30; }
L_0031AEF0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00319C40u | kUnwind; return; } goto L_00319C40; }
L_0031AF00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031AD70u | kUnwind; return; } goto L_0031AD70; }
L_0031AF10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A2C0u | kUnwind; return; } goto L_0031A2C0; }
L_0031AF20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031ACB0u | kUnwind; return; } goto L_0031ACB0; }
L_0031AF30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A730u | kUnwind; return; } goto L_0031A730; }
L_0031AF40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031AB80u | kUnwind; return; } goto L_0031AB80; }
L_0031AF50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A9B0u | kUnwind; return; } goto L_0031A9B0; }
L_0031AF60:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AF90u); set32(c.r[4], 0u + 1648u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0031AF90u) [[unlikely]] return; }
L_0031AF90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0031AFB4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AFB0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 306u, depth + 1u); else { c.pc = 0x0031AFD0u; return; } if (c.pc != 0x0031AFB0u) [[unlikely]] return; }
L_0031AFB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0031AFB4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0031AFD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AFE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 37u, depth + 1u); else { c.pc = 0x0027C290u; return; } if (c.pc != 0x0031AFE4u) [[unlikely]] return; }
L_0031AFE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 18560u);
    set32(c.r[2], c.r[2].w[0] - 18504u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1464u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1476u), 0u);
    st32((c.r[16].w[0] + 1480u), 0u);
    st32((c.r[16].w[0] + 1484u), 0u);
    st32((c.r[16].w[0] + 1468u), 0u);
    st32((c.r[16].w[0] + 1472u), 0u);
    c.budget -= 14;
L_0031B01C:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 1424u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031B01Cu | kUnwind; return; } goto L_0031B01C; } }
    set32(c.r[4], c.r[16].w[0] + 1488u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B048u); set32(c.r[6], 0u + 160u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x0031B048u) [[unlikely]] return; }
L_0031B048:
    set32(c.r[3], 0u + 6u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1616u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1620u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031B070:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031B0B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031B1F0; } }
L_0031B0B0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[18], 0u + 1u);  goto L_0031B148; }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 184u);  goto L_0031B114; }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 148u);  goto L_0031B0E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031B1F0; } }
    set32(c.r[4], 0u + 148u);
    c.budget -= 1;
L_0031B0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B0E8u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0031B0E8u) [[unlikely]] return; }
L_0031B0E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0031B1F4; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B108u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 3u, depth + 1u); else { c.pc = 0x0031C070u; return; } if (c.pc != 0x0031B108u) [[unlikely]] return; }
L_0031B108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B1F0; } }
    set32(c.r[4], 0u + 184u);
    c.budget -= 1;
L_0031B114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B11Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0031B11Cu) [[unlikely]] return; }
L_0031B11C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B1F0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B13Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 17u, depth + 1u); else { c.pc = 0x0031C330u; return; } if (c.pc != 0x0031B13Cu) [[unlikely]] return; }
L_0031B13C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B1F0; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_0031B148:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0031B14C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B15Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0031B15Cu) [[unlikely]] return; }
L_0031B15C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0031B1E0; }
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[17], c.r[4].w[0] + 1424u);
    set32(c.r[4], ld32((c.r[4].w[0] + 1424u)));
    c.budget -= 7;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_0031B1B4; }
    set32(c.r[6], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0031B1B0; } }
    set32(c.r[4], c.r[3].w[0] << (c.r[18].w[0] & 31u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], c.r[3].w[0] + 584u);
    set32(c.r[3], ld32((c.r[3].w[0] + 584u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_0031B1B0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0031B1B0; } }
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0031B1B0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0031B1B4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_0031B1CC; }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B1C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 378u, depth + 1u); else { c.pc = 0x0031BFF0u; return; } if (c.pc != 0x0031B1C8u) [[unlikely]] return; }
L_0031B1C8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0031B1CC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0031B1DC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0031B1DC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0031B1E0:
    c.r[2].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031B14Cu | kUnwind; return; } goto L_0031B14C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031B1F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0031B1F4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0031B210:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B238u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0021(c, 177u, depth + 1u); else { c.pc = 0x001A6280u; return; } if (c.pc != 0x0031B238u) [[unlikely]] return; }
L_0031B238:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_0031B95C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 1472u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1476u)));  goto L_0031B2B8; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 960u)));
    set32(c.r[3], c.r[4].w[0] + 112u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[3].w[0] + 452u);  if (t) { goto L_0031B2A0; } }
L_0031B270:
    set32(c.r[17], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B280u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x0031B280u) [[unlikely]] return; }
L_0031B280:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0031B2A0; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[16].w[0] + 1488u);
    st32((c.r[3].w[0] + 1144u), c.r[4].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 4;
L_0031B2A0:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031B270u | kUnwind; return; } goto L_0031B270; }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 1472u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1476u)));
    c.budget -= 3;
L_0031B2B8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_0031B8A0; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));  goto L_0031B75C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 1180u)));  goto L_0031B2EC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031B958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B958; } }
L_0031B2EC:
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031B958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0031B52C; } }
L_0031B300:
    set32(c.r[17], c.r[18].w[0] << 2);
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 644u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 148u)));
    c.budget -= 8;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0031B52C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 648u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0031B528; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 1484u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] - 21168u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[7].w[0] + 192u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[16].w[0] + 192u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[7].w[0] + 192u));
    c.f[20] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 196u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 200u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 204u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B380u); st32((c.r[29].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0031B380u) [[unlikely]] return; }
L_0031B380:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B38Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0031B38Cu) [[unlikely]] return; }
L_0031B38C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B39Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0031B39Cu) [[unlikely]] return; }
L_0031B39C:
    set32(c.r[3], ld32((c.r[16].w[0] + 1480u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B3ACu); set32(c.r[4], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x0031B3ACu) [[unlikely]] return; }
L_0031B3AC:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B3BCu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0031B3BCu) [[unlikely]] return; }
L_0031B3BC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B3CCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0031B3CCu) [[unlikely]] return; }
L_0031B3CC:
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0xC3660000u);  goto L_0031B404; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43660000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  goto L_0031B498; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3660000u);
    c.budget -= 1;
L_0031B404:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[29].w[0] + 136u));  goto L_0031B434; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3430000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0031B494; } }
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 1;
L_0031B434:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0xC3660000u);  goto L_0031B468; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43660000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0031B494; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3660000u);
    c.budget -= 1;
L_0031B468:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[16].w[0] + 1456u)));  goto L_0031B4AC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3430000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031B4A8; } }
L_0031B494:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_0031B498:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B4A8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x0031B4A8u) [[unlikely]] return; }
L_0031B4A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 1456u)));
    c.budget -= 1;
L_0031B4AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B4C0u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_007E(c, 355u, depth + 1u); else { c.pc = 0x0031BC90u; return; } if (c.pc != 0x0031B4C0u) [[unlikely]] return; }
L_0031B4C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031B528; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1456u)));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.f[2] = ld32((c.r[29].w[0] + 164u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = ld32((c.r[29].w[0] + 168u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.f[1] = ld32((c.r[5].w[0] + 192u));
    c.f[3] = ld32((c.r[5].w[0] + 196u));
    c.f[5] = ld32((c.r[5].w[0] + 200u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[5].w[0] + 192u), c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[5].w[0] + 196u), c.f[2]);
    st32((c.r[5].w[0] + 200u), c.f[4]);
    st32((c.r[5].w[0] + 204u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 24;
L_0031B528:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0031B52C:
    set32(c.r[3], ld32((c.r[16].w[0] + 1460u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 1456u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031B300u | kUnwind; return; } goto L_0031B300; }
    set32(c.r[3], ld32((c.r[16].w[0] + 1480u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 1480u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031B958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0031B730; } }
L_0031B55C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    set32(c.r[17], c.r[18].w[0] << 2);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[1] = ld32((c.r[2].w[0] + 192u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    st32((c.r[29].w[0] + 144u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 196u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 200u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 204u));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 156u), c.f[0]);  if (t) { goto L_0031B5B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43660000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[29].w[0] + 144u));  goto L_0031B5B8; }
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.budget -= 1;
L_0031B5B4:
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0031B5B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3660000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[29].w[0] + 152u));  goto L_0031B5F0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3430000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031B5EC; } }
    st32((c.r[29].w[0] + 144u), c.f[1]);
    c.budget -= 1;
L_0031B5EC:
    c.f[1] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 1;
L_0031B5F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[29].w[0] + 152u));  goto L_0031B62C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43520000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031B628; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43660000u);
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 2;
L_0031B628:
    c.f[2] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 1;
L_0031B62C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3660000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[16].w[0] + 1456u)));  goto L_0031B664; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3430000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031B660; } }
    st32((c.r[29].w[0] + 152u), c.f[1]);
    c.budget -= 1;
L_0031B660:
    set32(c.r[3], ld32((c.r[16].w[0] + 1456u)));
    c.budget -= 1;
L_0031B664:
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[4].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[4].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[4].w[0] + 204u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1456u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B6B8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x0031B6B8u) [[unlikely]] return; }
L_0031B6B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 1456u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B6CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 375u, depth + 1u); else { c.pc = 0x0031BEE0u; return; } if (c.pc != 0x0031B6CCu) [[unlikely]] return; }
L_0031B6CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0031B730; }
    set32(c.r[3], ld32((c.r[16].w[0] + 1456u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st32((c.r[4].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1456u)));
    set32(c.r[7], ld32((c.r[28].w[0] - 30280u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[4], ld32((c.r[3].w[0] + 148u)));  if (t) { goto L_0031B72C; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[3], ld32((c.r[6].w[0] + 580u)));
    set32(c.r[5], c.r[6].w[0] + 580u);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_0031B72C; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0031B72C; } }
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0031B72C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0031B730:
    set32(c.r[3], ld32((c.r[16].w[0] + 1460u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 1456u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031B55Cu | kUnwind; return; } goto L_0031B55C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 1476u), 0u);
    st32((c.r[16].w[0] + 1484u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1468u), c.r[3].w[0]);  if (t) { goto L_0031B958; } }
L_0031B75C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0031B768; }
    set32(c.r[3], ld32((c.r[3].w[0] + 136u)));
    c.budget -= 1;
L_0031B768:
    set32(c.r[18], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0031B7CC; } }
L_0031B774:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[6].w[0] + 172u)));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0031B7CC; }
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031B7C8; } }
    c.f[0] = ld32((c.r[6].w[0] + 192u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 196u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 200u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 204u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B7C8u); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 260u, depth + 1u); else { c.pc = 0x0020A6C0u; return; } if (c.pc != 0x0031B7C8u) [[unlikely]] return; }
L_0031B7C8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0031B7CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 1460u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 1456u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031B774u | kUnwind; return; } goto L_0031B774; }
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 1476u), c.r[3].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B8A0; } }
L_0031B7F0:
    set32(c.r[17], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 172u)));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0031B8A0; }
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031B89C; } }
    set32(c.r[5], c.r[5].w[0] + 192u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B828u); set32(c.r[6], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x0031B828u) [[unlikely]] return; }
L_0031B828:
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 164u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B838u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x0031B838u) [[unlikely]] return; }
L_0031B838:
    set32(c.r[5], ld32((c.r[16].w[0] + 1456u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1500000u);
    c.f[2] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.f[4] = ld32((c.r[29].w[0] + 164u));
    c.f[1] = ld32((c.r[5].w[0] + 192u));
    c.f[3] = ld32((c.r[5].w[0] + 196u));
    c.f[5] = ld32((c.r[5].w[0] + 200u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[5].w[0] + 192u), c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[5].w[0] + 196u), c.f[2]);
    st32((c.r[5].w[0] + 200u), c.f[4]);
    st32((c.r[5].w[0] + 204u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 25;
L_0031B89C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0031B8A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 1460u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 1456u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031B7F0u | kUnwind; return; } goto L_0031B7F0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 1480u)));
    set32(c.r[3], 0u + 25u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[16].w[0] + 1480u), c.r[4].w[0]);  if (t) { goto L_0031B8CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B8CCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 301u, depth + 1u); else { c.pc = 0x00266750u; return; } if (c.pc != 0x0031B8CCu) [[unlikely]] return; }
L_0031B8CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 1480u)));
    c.r[3].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031B958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0031B938; } }
L_0031B8E4:
    set32(c.r[6], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 172u)));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0031B938; }
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031B934; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 148u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 1424u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1456u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B934u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 376u, depth + 1u); else { c.pc = 0x0031BF50u; return; } if (c.pc != 0x0031B934u) [[unlikely]] return; }
L_0031B934:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0031B938:
    set32(c.r[3], ld32((c.r[16].w[0] + 1460u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 1456u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031B8E4u | kUnwind; return; } goto L_0031B8E4; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 1476u), 0u);
    st32((c.r[16].w[0] + 1468u), 0u);
    c.budget -= 4;
L_0031B958:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0031B95C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0031B980:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B9A0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 134u, depth + 1u); else { c.pc = 0x002CDC50u; return; } if (c.pc != 0x0031B9A0u) [[unlikely]] return; }
L_0031B9A0:
    set32(c.r[3], 0u + 78u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));  goto L_0031BB48; }
    set32(c.r[3], 0u + 74u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_0031BAF4; }
    set32(c.r[3], 0u + 73u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));  goto L_0031BAB8; }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_0031BA28; }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_0031B9E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0031BBC4; } }
L_0031B9E4:
    set32(c.r[4], c.r[3].w[0] + 112u);
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_0031BBC0; } }
    set32(c.r[3], c.r[4].w[0] + 2916u);
    st32((c.r[17].w[0] + 1456u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 3024u)));
    st32((c.r[17].w[0] + 1460u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031BBC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031BBC0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 580u), 0u);  if (t) { goto L_0031BBC0; } }
L_0031BA28:
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_0031BBC0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1468u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031BBC0; } }
    st32((c.r[17].w[0] + 1480u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  if (t) { goto L_0031BA58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 136u)));  if (t) { goto L_0031BA5C; } }
L_0031BA58:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031BA5C:
    set32(c.r[5], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BA68u); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x002A3470u; return; } if (c.pc != 0x0031BA68u) [[unlikely]] return; }
L_0031BA68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_0031BA9C; }
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031BA98; } }
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031BA98; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1476u), c.r[2].w[0]);  if (t) { goto L_0031BAA0; } }
L_0031BA98:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0031BA9C:
    st32((c.r[17].w[0] + 1476u), c.r[2].w[0]);
    c.budget -= 1;
L_0031BAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BAA8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 301u, depth + 1u); else { c.pc = 0x00266750u; return; } if (c.pc != 0x0031BAA8u) [[unlikely]] return; }
L_0031BAA8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_0031BBC0; } }
L_0031BAB8:
    set32(c.r[4], 0u - 2049u);
    set32(c.r[3], 0u - 5u);
    set32(c.r[6], ld32((c.r[5].w[0] + 116u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 172u)));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[6].w[0] + 172u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 72u), 0u);  if (t) { goto L_0031BBC0; } }
L_0031BAF4:
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[28].w[0] - 30280u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[6], c.r[3].w[0] << (c.r[4].w[0] & 31u));  if (t) { goto L_0031BB2C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[4], c.r[3].w[0] + 588u);
    set32(c.r[3], ld32((c.r[3].w[0] + 588u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);  if (t) { goto L_0031BB2C; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));  goto L_0031BB30; }
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0031BB2C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0031BB30:
    set32(c.r[3], 0u - 33u);
    set32(c.r[5], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 172u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 172u), c.r[3].w[0]);  if (t) { goto L_0031BBC0; } }
L_0031BB48:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 672u)));
    set32(c.r[4], c.r[2].w[0] + 112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BB60u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0031BB60u) [[unlikely]] return; }
L_0031BB60:
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0031BBC0; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[2].w[0] + 1424u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[2], 0u - 33u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BB9Cu); st32((c.r[16].w[0] + 172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 378u, depth + 1u); else { c.pc = 0x0031BFF0u; return; } if (c.pc != 0x0031BB9Cu) [[unlikely]] return; }
L_0031BB9C:
    set32(c.r[5], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[4], 0u - 2049u);
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 172u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 9;
L_0031BBC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0031BBC4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031BBE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BBFCu); set32(c.r[5], c.r[2].w[0] + 1424u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0031BBFCu) [[unlikely]] return; }
L_0031BBFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031BC10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BC30u); set32(c.r[4], c.r[17].w[0] + 1424u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0031BC30u) [[unlikely]] return; }
L_0031BC30:
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_0031BC38:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 1424u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0031BC6C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BC5Cu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x002A34D0u; return; } if (c.pc != 0x0031BC5Cu) [[unlikely]] return; }
L_0031BC5C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BC68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 376u, depth + 1u); else { c.pc = 0x0031BF50u; return; } if (c.pc != 0x0031BC68u) [[unlikely]] return; }
L_0031BC68:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0031BC6C:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031BC38u | kUnwind; return; } goto L_0031BC38; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 32u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031BC90:
    set32(c.r[29], c.r[29].w[0] - 464u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[19].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0031BCC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031BEBC; } }
L_0031BCC4:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 448u), 0u);
    st32((c.r[29].w[0] + 432u), 0u);
    st32((c.r[29].w[0] + 436u), 0u);
    st32((c.r[29].w[0] + 440u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BCE4u); st32((c.r[29].w[0] + 444u), 0u);  if (depth < kMaxDepth) unit_0051(c, 303u, depth + 1u); else { c.pc = 0x00266780u; return; } if (c.pc != 0x0031BCE4u) [[unlikely]] return; }
L_0031BCE4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[19].w[0] + 192u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[21], ld32((c.r[3].w[0] + 960u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BD04u); set32(c.r[16], c.r[2].w[0] + 452u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0031BD04u) [[unlikely]] return; }
L_0031BD04:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BD14u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0031BD14u) [[unlikely]] return; }
L_0031BD14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BD1Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0031BD1Cu) [[unlikely]] return; }
L_0031BD1C:
    c.f[0] = ld32((c.r[19].w[0] + 656u));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 224u), c.f[0]);  if (t) { goto L_0031BD8C; } }
L_0031BD2C:
    set32(c.r[20], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0031BD8C; }
    set32(c.r[5], c.r[2].w[0] + 192u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BD4Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 189u, depth + 1u); else { c.pc = 0x00182590u; return; } if (c.pc != 0x0031BD4Cu) [[unlikely]] return; }
L_0031BD4C:
    set32(c.r[20], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BD58u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0031BD58u) [[unlikely]] return; }
L_0031BD58:
    c.f[0] = ld32((c.r[20].w[0] + 656u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BD6Cu); st32((c.r[29].w[0] + 176u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 258u, depth + 1u); else { c.pc = 0x0017B830u; return; } if (c.pc != 0x0031BD6Cu) [[unlikely]] return; }
L_0031BD6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031BD88; } }
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BD80u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0031BD80u) [[unlikely]] return; }
L_0031BD80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031BEBC; } }
L_0031BD88:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0031BD8C:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031BD2Cu | kUnwind; return; } goto L_0031BD2C; }
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BDA4u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0051(c, 331u, depth + 1u); else { c.pc = 0x00266D40u; return; } if (c.pc != 0x0031BDA4u) [[unlikely]] return; }
L_0031BDA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BDACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x0031BDACu) [[unlikely]] return; }
L_0031BDAC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[19].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BDBCu); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x0031BDBCu) [[unlikely]] return; }
L_0031BDBC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BDCCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0031BDCCu) [[unlikely]] return; }
L_0031BDCC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BDDCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x0031BDDCu) [[unlikely]] return; }
L_0031BDDC:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[2], 0u + 1u);
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[29].w[0] + 244u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    st32((c.r[29].w[0] + 252u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[29].w[0] + 256u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[29].w[0] + 260u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[29].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    st32((c.r[29].w[0] + 268u), c.f[1]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BE38u); st32((c.r[29].w[0] + 272u), c.f[0]);  if (depth < kMaxDepth) unit_0026(c, 380u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x0031BE38u) [[unlikely]] return; }
L_0031BE38:
    set32(c.r[3], ld32((c.r[19].w[0] + 144u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 418u)));
    st16((c.r[29].w[0] + 416u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_0031BE54; } }
    st16((c.r[29].w[0] + 418u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0031BE54:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_0031BE58:
    set32(c.r[2], 0u - 17u);
    set32(c.r[4], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 280u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 280u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0031BE80; } }
    set32(c.r[5], c.r[2].w[0] + 304u);
    c.budget -= 1;
L_0031BE80:
    set32(c.r[4], c.r[2].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 240u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BE94u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 417u, depth + 1u); else { c.pc = 0x001BBAD0u; return; } if (c.pc != 0x0031BE94u) [[unlikely]] return; }
L_0031BE94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 240u);  goto L_0031BEB0; }
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BEA8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0031BEA8u) [[unlikely]] return; }
L_0031BEA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031BEBC; } }
L_0031BEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BEB8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0051(c, 305u, depth + 1u); else { c.pc = 0x002667E0u; return; } if (c.pc != 0x0031BEB8u) [[unlikely]] return; }
L_0031BEB8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031BEBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 464u);  c.pc = t; return; }
L_0031BEE0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.f[3] = ld32((c.r[5].w[0] + 192u));  goto L_0031BEF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031BF3C; } }
L_0031BEF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = ld32((c.r[5].w[0] + 200u));  if (t) { goto L_0031BF38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3430000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_0031BF3C; }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031BF38; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 1u);  goto L_0031BF3C; }
L_0031BF38:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031BF3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031BF50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0031BFE4; } }
    set32(c.r[2], 0u + 5000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 172u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[7], 0u - 5000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[8], 0u + 2u);
    c.r[2].d[0] = c.r[3].d[0] | 32ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[5].w[0] + 172u), c.r[2].w[0]);
    c.r[9].d[0] = c.r[2].d[0] | 2048ull;
    set32(c.r[2], c.r[4].w[0] + 1488u);
    st32((c.r[5].w[0] + 172u), c.r[9].w[0]);
    c.r[4].d[0] = c.r[9].d[0] | 512ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st32((c.r[5].w[0] + 172u), c.r[4].w[0]);
    c.f[0] = c.r[7].w[0];
    set32(c.r[9], ld32((c.r[5].w[0] + 176u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[9].d[0] | 4ull;
    st32((c.r[5].w[0] + 176u), c.r[7].w[0]);
    st32((c.r[5].w[0] + 72u), c.r[8].w[0]);
    st32((c.r[5].w[0] + 192u), c.f[1]);
    st32((c.r[5].w[0] + 196u), c.f[0]);
    st32((c.r[5].w[0] + 200u), c.f[1]);
    st32((c.r[5].w[0] + 204u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 164u)));
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[5].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BFE4u); st32((c.r[5].w[0] + 1144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 359u, depth + 1u); else { c.pc = 0x002D3C70u; return; } if (c.pc != 0x0031BFE4u) [[unlikely]] return; }
L_0031BFE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031BFF0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007F(c, 2u, depth); } }
    set32(c.r[6], ld32((c.r[5].w[0] + 172u)));
    set32(c.r[4], 0u - 513u);
    c.budget -= 2;
    [[clang::musttail]] return unit_007F(c, 1u, depth);
}

}
