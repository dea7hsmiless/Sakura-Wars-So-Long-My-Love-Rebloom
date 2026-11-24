#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B9[4096] = {
    1, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50,
    0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 53, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58,
    0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0,
    0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 84,
    0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0,
    0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 196, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0,
    0, 0, 0, 0, 0, 218, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 225, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 228, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 235, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 239, 240,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0,
    0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0,
    246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 251, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0,
    0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0,
    0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0,
    0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0,
    277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 281, 0, 282, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0,
    285, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0,
    315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324,
    0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339,
    0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0,
    350, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0,
    366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0,
    0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0,
    387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393,
    0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0,
    0, 0, 398, 0, 399, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0,
    0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B9(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00404000;
    case 2u: goto L_00404004;
    case 3u: goto L_00404008;
    case 4u: goto L_00404030;
    case 5u: goto L_00404054;
    case 6u: goto L_00404068;
    case 7u: goto L_0040407C;
    case 8u: goto L_00404090;
    case 9u: goto L_004040A0;
    case 10u: goto L_004040E4;
    case 11u: goto L_00404110;
    case 12u: goto L_0040411C;
    case 13u: goto L_00404130;
    case 14u: goto L_00404150;
    case 15u: goto L_0040415C;
    case 16u: goto L_004041A4;
    case 17u: goto L_004041C8;
    case 18u: goto L_004041D4;
    case 19u: goto L_0040421C;
    case 20u: goto L_0040425C;
    case 21u: goto L_00404280;
    case 22u: goto L_004042A4;
    case 23u: goto L_004042B4;
    case 24u: goto L_00404308;
    case 25u: goto L_00404328;
    case 26u: goto L_0040434C;
    case 27u: goto L_00404374;
    case 28u: goto L_004043A0;
    case 29u: goto L_004043C0;
    case 30u: goto L_00404414;
    case 31u: goto L_0040444C;
    case 32u: goto L_00404490;
    case 33u: goto L_00404498;
    case 34u: goto L_004044C8;
    case 35u: goto L_004044F0;
    case 36u: goto L_00404520;
    case 37u: goto L_0040453C;
    case 38u: goto L_00404558;
    case 39u: goto L_004045B0;
    case 40u: goto L_004045C0;
    case 41u: goto L_004045F0;
    case 42u: goto L_0040462C;
    case 43u: goto L_0040463C;
    case 44u: goto L_0040464C;
    case 45u: goto L_00404674;
    case 46u: goto L_004046CC;
    case 47u: goto L_004046E0;
    case 48u: goto L_00404794;
    case 49u: goto L_004047EC;
    case 50u: goto L_004047FC;
    case 51u: goto L_00404810;
    case 52u: goto L_00404818;
    case 53u: goto L_00404830;
    case 54u: goto L_00404838;
    case 55u: goto L_00404840;
    case 56u: goto L_00404850;
    case 57u: goto L_00404864;
    case 58u: goto L_0040487C;
    case 59u: goto L_0040488C;
    case 60u: goto L_004048A4;
    case 61u: goto L_004048B8;
    case 62u: goto L_004048D0;
    case 63u: goto L_004048EC;
    case 64u: goto L_004048FC;
    case 65u: goto L_00404920;
    case 66u: goto L_00404940;
    case 67u: goto L_00404960;
    case 68u: goto L_004049D4;
    case 69u: goto L_00404A10;
    case 70u: goto L_00404A2C;
    case 71u: goto L_00404A48;
    case 72u: goto L_00404A98;
    case 73u: goto L_00404AA8;
    case 74u: goto L_00404ACC;
    case 75u: goto L_00404AEC;
    case 76u: goto L_00404B0C;
    case 77u: goto L_00404B80;
    case 78u: goto L_00404BBC;
    case 79u: goto L_00404BD8;
    case 80u: goto L_00404BF4;
    case 81u: goto L_00404C70;
    case 82u: goto L_00404CE8;
    case 83u: goto L_00404CF4;
    case 84u: goto L_00404CFC;
    case 85u: goto L_00404D18;
    case 86u: goto L_00404D3C;
    case 87u: goto L_00404D74;
    case 88u: goto L_00404D84;
    case 89u: goto L_00404DA0;
    case 90u: goto L_00404DE4;
    case 91u: goto L_00404E10;
    case 92u: goto L_00404E6C;
    case 93u: goto L_00404E80;
    case 94u: goto L_00404E94;
    case 95u: goto L_00404ED0;
    case 96u: goto L_00404EE4;
    case 97u: goto L_00404F18;
    case 98u: goto L_00404F24;
    case 99u: goto L_00404F30;
    case 100u: goto L_00404F6C;
    case 101u: goto L_00404F94;
    case 102u: goto L_00404FF0;
    case 103u: goto L_0040501C;
    case 104u: goto L_00405034;
    case 105u: goto L_00405054;
    case 106u: goto L_0040506C;
    case 107u: goto L_00405090;
    case 108u: goto L_004050D4;
    case 109u: goto L_004050F4;
    case 110u: goto L_00405114;
    case 111u: goto L_0040512C;
    case 112u: goto L_0040513C;
    case 113u: goto L_00405164;
    case 114u: goto L_004051AC;
    case 115u: goto L_004051C8;
    case 116u: goto L_004051E0;
    case 117u: goto L_004051F8;
    case 118u: goto L_00405210;
    case 119u: goto L_00405230;
    case 120u: goto L_00405260;
    case 121u: goto L_004052DC;
    case 122u: goto L_004052F4;
    case 123u: goto L_00405310;
    case 124u: goto L_0040532C;
    case 125u: goto L_00405348;
    case 126u: goto L_00405370;
    case 127u: goto L_00405380;
    case 128u: goto L_0040539C;
    case 129u: goto L_004053BC;
    case 130u: goto L_0040544C;
    case 131u: goto L_00405458;
    case 132u: goto L_00405470;
    case 133u: goto L_004054E0;
    case 134u: goto L_004054F8;
    case 135u: goto L_00405510;
    case 136u: goto L_0040552C;
    case 137u: goto L_00405558;
    case 138u: goto L_004055A0;
    case 139u: goto L_004055C8;
    case 140u: goto L_004055D0;
    case 141u: goto L_004055D8;
    case 142u: goto L_004055F0;
    case 143u: goto L_00405608;
    case 144u: goto L_00405614;
    case 145u: goto L_00405630;
    case 146u: goto L_00405684;
    case 147u: goto L_004056E0;
    case 148u: goto L_00405724;
    case 149u: goto L_00405748;
    case 150u: goto L_00405758;
    case 151u: goto L_00405780;
    case 152u: goto L_004057A4;
    case 153u: goto L_004057CC;
    case 154u: goto L_00405820;
    case 155u: goto L_00405868;
    case 156u: goto L_00405878;
    case 157u: goto L_00405890;
    case 158u: goto L_004058C8;
    case 159u: goto L_004058D0;
    case 160u: goto L_004058D8;
    case 161u: goto L_004058F0;
    case 162u: goto L_00405914;
    case 163u: goto L_00405930;
    case 164u: goto L_0040596C;
    case 165u: goto L_0040599C;
    case 166u: goto L_004059B0;
    case 167u: goto L_004059EC;
    case 168u: goto L_004059FC;
    case 169u: goto L_00405A28;
    case 170u: goto L_00405A40;
    case 171u: goto L_00405A5C;
    case 172u: goto L_00405A88;
    case 173u: goto L_00405AA0;
    case 174u: goto L_00405AE0;
    case 175u: goto L_00405B00;
    case 176u: goto L_00405B10;
    case 177u: goto L_00405CA0;
    case 178u: goto L_00405CE0;
    case 179u: goto L_00405CF0;
    case 180u: goto L_00405D08;
    case 181u: goto L_00405D18;
    case 182u: goto L_00405D40;
    case 183u: goto L_00405D48;
    case 184u: goto L_00405D50;
    case 185u: goto L_00405DC8;
    case 186u: goto L_00405DD0;
    case 187u: goto L_00405DE8;
    case 188u: goto L_00405DF0;
    case 189u: goto L_00405E38;
    case 190u: goto L_00405E48;
    case 191u: goto L_00405E70;
    case 192u: goto L_00405E84;
    case 193u: goto L_00405E9C;
    case 194u: goto L_00405EAC;
    case 195u: goto L_00405EE8;
    case 196u: goto L_00405EEC;
    case 197u: goto L_00405F18;
    case 198u: goto L_00405F2C;
    case 199u: goto L_00405F44;
    case 200u: goto L_00405F54;
    case 201u: goto L_00405F68;
    case 202u: goto L_00405F80;
    case 203u: goto L_00405FA0;
    case 204u: goto L_00405FB8;
    case 205u: goto L_00405FC8;
    case 206u: goto L_00405FE0;
    case 207u: goto L_00405FF0;
    case 208u: goto L_00406008;
    case 209u: goto L_00406018;
    case 210u: goto L_00406030;
    case 211u: goto L_00406044;
    case 212u: goto L_00406088;
    case 213u: goto L_0040609C;
    case 214u: goto L_004060B0;
    case 215u: goto L_004060C8;
    case 216u: goto L_004060E8;
    case 217u: goto L_004060F4;
    case 218u: goto L_00406114;
    case 219u: goto L_00406118;
    case 220u: goto L_00406184;
    case 221u: goto L_004061A4;
    case 222u: goto L_004061C4;
    case 223u: goto L_004061D0;
    case 224u: goto L_004061F4;
    case 225u: goto L_004061F8;
    case 226u: goto L_00406264;
    case 227u: goto L_00406284;
    case 228u: goto L_0040629C;
    case 229u: goto L_004062A0;
    case 230u: goto L_00406300;
    case 231u: goto L_00406324;
    case 232u: goto L_00406328;
    case 233u: goto L_0040638C;
    case 234u: goto L_004063BC;
    case 235u: goto L_004063C0;
    case 236u: goto L_004063C4;
    case 237u: goto L_00406450;
    case 238u: goto L_00406474;
    case 239u: goto L_00406478;
    case 240u: goto L_0040647C;
    case 241u: goto L_004064FC;
    case 242u: goto L_00406554;
    case 243u: goto L_00406574;
    case 244u: goto L_00406584;
    case 245u: goto L_004065F8;
    case 246u: goto L_00406600;
    case 247u: goto L_00406608;
    case 248u: goto L_00406660;
    case 249u: goto L_00406680;
    case 250u: goto L_00406690;
    case 251u: goto L_00406704;
    case 252u: goto L_0040670C;
    case 253u: goto L_00406714;
    case 254u: goto L_00406744;
    case 255u: goto L_004067B8;
    case 256u: goto L_004067F8;
    case 257u: goto L_0040686C;
    case 258u: goto L_00406878;
    case 259u: goto L_0040689C;
    case 260u: goto L_004068AC;
    case 261u: goto L_004068DC;
    case 262u: goto L_0040695C;
    case 263u: goto L_00406968;
    case 264u: goto L_0040698C;
    case 265u: goto L_004069AC;
    case 266u: goto L_004069C0;
    case 267u: goto L_004069D4;
    case 268u: goto L_00406A00;
    case 269u: goto L_00406A44;
    case 270u: goto L_00406A64;
    case 271u: goto L_00406A88;
    case 272u: goto L_00406AA0;
    case 273u: goto L_00406AC0;
    case 274u: goto L_00406AD0;
    case 275u: goto L_00406AE0;
    case 276u: goto L_00406AF4;
    case 277u: goto L_00406B00;
    case 278u: goto L_00406B14;
    case 279u: goto L_00406B28;
    case 280u: goto L_00406B3C;
    case 281u: goto L_00406B48;
    case 282u: goto L_00406B50;
    case 283u: goto L_00406B5C;
    case 284u: goto L_00406B70;
    case 285u: goto L_00406B80;
    case 286u: goto L_00406B88;
    case 287u: goto L_00406BA0;
    case 288u: goto L_00406BB0;
    case 289u: goto L_00406BB8;
    case 290u: goto L_00406BD0;
    case 291u: goto L_00406C18;
    case 292u: goto L_00406C70;
    case 293u: goto L_00406C90;
    case 294u: goto L_00406CE8;
    case 295u: goto L_00406D30;
    case 296u: goto L_00406D7C;
    case 297u: goto L_00406DD0;
    case 298u: goto L_00406DEC;
    case 299u: goto L_00406E14;
    case 300u: goto L_00406E78;
    case 301u: goto L_00406ED0;
    case 302u: goto L_00406EE4;
    case 303u: goto L_00406F3C;
    case 304u: goto L_00406F58;
    case 305u: goto L_00406F94;
    case 306u: goto L_004071BC;
    case 307u: goto L_00407204;
    case 308u: goto L_00407210;
    case 309u: goto L_0040722C;
    case 310u: goto L_00407244;
    case 311u: goto L_00407264;
    case 312u: goto L_00407274;
    case 313u: goto L_004072C4;
    case 314u: goto L_004072E4;
    case 315u: goto L_00407300;
    case 316u: goto L_00407378;
    case 317u: goto L_004073C8;
    case 318u: goto L_004073EC;
    case 319u: goto L_00407408;
    case 320u: goto L_0040742C;
    case 321u: goto L_00407434;
    case 322u: goto L_0040744C;
    case 323u: goto L_0040745C;
    case 324u: goto L_0040747C;
    case 325u: goto L_00407498;
    case 326u: goto L_004074A0;
    case 327u: goto L_004074B8;
    case 328u: goto L_004074C8;
    case 329u: goto L_004074DC;
    case 330u: goto L_004074E8;
    case 331u: goto L_004074F4;
    case 332u: goto L_00407510;
    case 333u: goto L_00407524;
    case 334u: goto L_00407538;
    case 335u: goto L_00407548;
    case 336u: goto L_00407564;
    case 337u: goto L_00407590;
    case 338u: goto L_004075DC;
    case 339u: goto L_004075FC;
    case 340u: goto L_0040761C;
    case 341u: goto L_0040763C;
    case 342u: goto L_00407654;
    case 343u: goto L_00407664;
    case 344u: goto L_00407670;
    case 345u: goto L_00407690;
    case 346u: goto L_004076A8;
    case 347u: goto L_004076C0;
    case 348u: goto L_004076D0;
    case 349u: goto L_004076F8;
    case 350u: goto L_00407700;
    case 351u: goto L_00407708;
    case 352u: goto L_00407720;
    case 353u: goto L_0040772C;
    case 354u: goto L_00407740;
    case 355u: goto L_0040777C;
    case 356u: goto L_00407804;
    case 357u: goto L_00407830;
    case 358u: goto L_00407850;
    case 359u: goto L_00407898;
    case 360u: goto L_004078B8;
    case 361u: goto L_004078E4;
    case 362u: goto L_004078FC;
    case 363u: goto L_00407930;
    case 364u: goto L_00407960;
    case 365u: goto L_00407968;
    case 366u: goto L_00407980;
    case 367u: goto L_004079A4;
    case 368u: goto L_004079C0;
    case 369u: goto L_00407A1C;
    case 370u: goto L_00407A2C;
    case 371u: goto L_00407A3C;
    case 372u: goto L_00407A6C;
    case 373u: goto L_00407ADC;
    case 374u: goto L_00407AF4;
    case 375u: goto L_00407B0C;
    case 376u: goto L_00407B28;
    case 377u: goto L_00407B34;
    case 378u: goto L_00407B5C;
    case 379u: goto L_00407B68;
    case 380u: goto L_00407B80;
    case 381u: goto L_00407B9C;
    case 382u: goto L_00407BB4;
    case 383u: goto L_00407BCC;
    case 384u: goto L_00407C4C;
    case 385u: goto L_00407C54;
    case 386u: goto L_00407C70;
    case 387u: goto L_00407C80;
    case 388u: goto L_00407CA0;
    case 389u: goto L_00407D8C;
    case 390u: goto L_00407D98;
    case 391u: goto L_00407DFC;
    case 392u: goto L_00407E50;
    case 393u: goto L_00407E7C;
    case 394u: goto L_00407EA0;
    case 395u: goto L_00407EC4;
    case 396u: goto L_00407EE8;
    case 397u: goto L_00407EF4;
    case 398u: goto L_00407F08;
    case 399u: goto L_00407F10;
    case 400u: goto L_00407F28;
    case 401u: goto L_00407F30;
    case 402u: goto L_00407F40;
    case 403u: goto L_00407F6C;
    case 404u: goto L_00407F84;
    case 405u: goto L_00407F94;
    case 406u: goto L_00407FAC;
    case 407u: goto L_00407FC0;
    case 408u: goto L_00407FD8;
    default: bad_entry(c, 0x00404000u); return;
    }
L_00404000:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00404004:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00404008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00404030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040407C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404054u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 28u, depth + 1u); else { c.pc = 0x004043A0u; return; } if (c.pc != 0x00404054u) [[unlikely]] return; }
L_00404054:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00404080; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404068u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B9(c, 28u, depth + 1u); else { c.pc = 0x004043A0u; return; } if (c.pc != 0x00404068u) [[unlikely]] return; }
L_00404068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040407C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040407Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00B9(c, 28u, depth + 1u); else { c.pc = 0x004043A0u; return; } if (c.pc != 0x0040407Cu) [[unlikely]] return; }
L_0040407C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00404080:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00404090:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004040A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_004040DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 52u)));  if (t) { goto L_004040DC; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004040DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004040E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 39u, depth + 1u); else { c.pc = 0x004045B0u; return; } if (c.pc != 0x004040E4u) [[unlikely]] return; }
L_004040E4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_004042B0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 152u)));  goto L_00404114; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404110u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404110u) [[unlikely]] return; }
L_00404110:
    set32(c.r[2], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 1;
L_00404114:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 152u)));  goto L_00404134; }
    goto L_00404120;
L_0040411C:
    set32(c.r[2], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 1;
L_00404120:
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404130u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404130u) [[unlikely]] return; }
L_00404130:
    set32(c.r[2], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 1;
L_00404134:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00404154; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404150u); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404150u) [[unlikely]] return; }
L_00404150:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00404154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040415Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 36u, depth + 1u); else { c.pc = 0x00404520u; return; } if (c.pc != 0x0040415Cu) [[unlikely]] return; }
L_0040415C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_004041CC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 172u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00404188; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 60u)));  if (t) { goto L_00404188; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00404188:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 17752ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004041A4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 136u, depth + 1u); else { c.pc = 0x003C5620u; return; } if (c.pc != 0x004041A4u) [[unlikely]] return; }
L_004041A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004041C8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004041C8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004041C8u) [[unlikely]] return; }
L_004041C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004041CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004041D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B9(c, 36u, depth + 1u); else { c.pc = 0x00404520u; return; } if (c.pc != 0x004041D4u) [[unlikely]] return; }
L_004041D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00404388; }
    set32(c.r[4], ld32((c.r[18].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00404200; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 60u)));  if (t) { goto L_00404200; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00404200:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 17752ull;
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040421Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 136u, depth + 1u); else { c.pc = 0x003C5620u; return; } if (c.pc != 0x0040421Cu) [[unlikely]] return; }
L_0040421C:
    set32(c.r[4], ld32((c.r[18].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00404240; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 60u)));  if (t) { goto L_00404240; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00404240:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 17752ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040425Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 136u, depth + 1u); else { c.pc = 0x003C5620u; return; } if (c.pc != 0x0040425Cu) [[unlikely]] return; }
L_0040425C:
    set32(c.r[3], ld32((c.r[18].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 152u)));  goto L_00404284; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404280u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404280u) [[unlikely]] return; }
L_00404280:
    set32(c.r[3], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 1;
L_00404284:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00404384; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004042A4u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004042A4u) [[unlikely]] return; }
L_004042A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00404384; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004042B0:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_004042B4:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 172u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 152u)));  goto L_00404358; }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00404354; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_004042EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[5].w[0] + 60u)));  if (t) { goto L_004042EC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004042EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 17752ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404308u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 136u, depth + 1u); else { c.pc = 0x003C5620u; return; } if (c.pc != 0x00404308u) [[unlikely]] return; }
L_00404308:
    set32(c.r[3], ld32((c.r[18].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 152u)));  goto L_0040432C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404328u); set32(c.r[5], c.r[17].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404328u) [[unlikely]] return; }
L_00404328:
    set32(c.r[3], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 1;
L_0040432C:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00404378; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[17].w[0] + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040434Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040434Cu) [[unlikely]] return; }
L_0040434C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00404374; } }
L_00404354:
    set32(c.r[3], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 1;
L_00404358:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00404374; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404374u); set32(c.r[5], c.r[17].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404374u) [[unlikely]] return; }
L_00404374:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00404378:
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004042B4u | kUnwind; return; } goto L_004042B4; }
L_00404384:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00404388:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004043A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004043C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00B9(c, 39u, depth + 1u); else { c.pc = 0x004045B0u; return; } if (c.pc != 0x004043C0u) [[unlikely]] return; }
L_004043C0:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  goto L_004043D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00404504; } }
L_004043D4:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[2].w[0] + 172u);
    set32(c.r[2], ld32((c.r[2].w[0] + 172u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_004044F4; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[5], ld32((c.r[18].w[0] + 156u)));  if (t) { goto L_00404440; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 164u)));  goto L_00404410; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[29].w[0] + 76u), 0u);  goto L_00404470; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040446C; } }
L_00404410:
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 1;
L_00404414:
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], c.r[5].w[0] << 4);  goto L_00404428; }
    set32(c.r[2], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[5], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[5].w[0] << 4);
    c.budget -= 3;
L_00404428:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00404414u | kUnwind; return; } goto L_00404414; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040446C; } }
L_00404440:
    set32(c.r[4], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_0040444C:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[4].d[0]) { set32(c.r[2], c.r[5].w[0] << 4);  goto L_0040445C; }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[5].w[0] << 4);
    c.budget -= 2;
L_0040445C:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040444Cu | kUnwind; return; } goto L_0040444C; }
L_0040446C:
    st32((c.r[29].w[0] + 76u), 0u);
    c.budget -= 1;
L_00404470:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404490u); set32(c.r[5], c.r[5].w[0] + 31104u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x00404490u) [[unlikely]] return; }
L_00404490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404498u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00404498u) [[unlikely]] return; }
L_00404498:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_004044CC; }
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], ld32((c.r[28].w[0] - 31912u)));  goto L_004044B0; }
    set32(c.r[7], c.r[3].w[0] + 12u);
    c.budget -= 1;
L_004044B0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 31123u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004044C8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 113u, depth + 1u); else { c.pc = 0x00211330u; return; } if (c.pc != 0x004044C8u) [[unlikely]] return; }
L_004044C8:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_004044CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004044F0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_004044F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004044F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x004044F0u) [[unlikely]] return; }
L_004044F0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_004044F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00404504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00404520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040453Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 39u, depth + 1u); else { c.pc = 0x004045B0u; return; } if (c.pc != 0x0040453Cu) [[unlikely]] return; }
L_0040453C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00404550; }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00404550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404558u);  if (depth < kMaxDepth) unit_00B9(c, 39u, depth + 1u); else { c.pc = 0x004045B0u; return; } if (c.pc != 0x00404558u) [[unlikely]] return; }
L_00404558:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[16].w[0] << 2);  goto L_00404574; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00404570; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_00404570:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_00404574:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 172u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 4u)));  goto L_0040458C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00404598; } }
L_0040458C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00404598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004045B0:
    set32(c.r[6], ld32((c.r[4].w[0] + 168u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004045DC; } }
L_004045C0:
    set32(c.r[5], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_004045DC; }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_004045DC:
    c.r[3].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 164u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004045C0u | kUnwind; return; } goto L_004045C0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004045F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_0040468C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 432u);  goto L_00404644; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u - 1u);  goto L_00404630; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004046D0; } }
L_0040462C:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_00404630:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040463Cu); st32((c.r[16].w[0] + 88u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x0040463Cu) [[unlikely]] return; }
L_0040463C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004046CC; } }
L_00404644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040464Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x0040464Cu) [[unlikely]] return; }
L_0040464C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), c.r[4].w[0]);  goto L_0040467C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 31123u);
    set32(c.r[7], c.r[7].w[0] + 31143u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404674u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 289u, depth + 1u); else { c.pc = 0x00207460u; return; } if (c.pc != 0x00404674u) [[unlikely]] return; }
L_00404674:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 148u), c.r[4].w[0]);
    c.budget -= 2;
L_0040467C:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 4;
L_0040468C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004046CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040462Cu | kUnwind; return; } goto L_0040462C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040462Cu | kUnwind; return; } goto L_0040462C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004046CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x004046CCu) [[unlikely]] return; }
L_004046CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004046D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004046E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 51u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00404C88; } }
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 50u);  goto L_00404C38; }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_00404B24; }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 20u);  goto L_00404A88; }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_00404978; }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 15u);  goto L_004048DC; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 10u);  goto L_00404844; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00404828; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00404808; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_004047E4; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 56u)));  goto L_00404780; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00404D88; } }
L_00404780:
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404794u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 347u, depth + 1u); else { c.pc = 0x00207BE0u; return; } if (c.pc != 0x00404794u) [[unlikely]] return; }
L_00404794:
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[2].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    st32((c.r[3].w[0] + 284u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00404D84; } }
L_004047E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004047ECu);  if (depth < kMaxDepth) unit_00B9(c, 36u, depth + 1u); else { c.pc = 0x00404520u; return; } if (c.pc != 0x004047ECu) [[unlikely]] return; }
L_004047EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00404D84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004047FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 9u, depth + 1u); else { c.pc = 0x004040A0u; return; } if (c.pc != 0x004047FCu) [[unlikely]] return; }
L_004047FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
L_00404808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404810u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00404810u) [[unlikely]] return; }
L_00404810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404818u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 84u, depth + 1u); else { c.pc = 0x003FCCA0u; return; } if (c.pc != 0x00404818u) [[unlikely]] return; }
L_00404818:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00404D84; } }
L_00404828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404830u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00404830u) [[unlikely]] return; }
L_00404830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404838u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 86u, depth + 1u); else { c.pc = 0x003FCCD0u; return; } if (c.pc != 0x00404838u) [[unlikely]] return; }
L_00404838:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00404D84; } }
L_00404840:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_00404844:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404850u); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B9(c, 39u, depth + 1u); else { c.pc = 0x004045B0u; return; } if (c.pc != 0x00404850u) [[unlikely]] return; }
L_00404850:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], 0u + 16u);  goto L_004048B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404864u); c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (depth < kMaxDepth) unit_002B(c, 333u, depth + 1u); else { c.pc = 0x001CEE30u; return; } if (c.pc != 0x00404864u) [[unlikely]] return; }
L_00404864:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull | 32768ull;  goto L_00404884; }
    set32(c.r[4], 0u + 6u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040487Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0040487Cu) [[unlikely]] return; }
L_0040487C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004048D8; } }
L_00404884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040488Cu); c.r[4].d[0] = c.r[2].d[0] << 16;  if (depth < kMaxDepth) unit_002B(c, 333u, depth + 1u); else { c.pc = 0x001CEE30u; return; } if (c.pc != 0x0040488Cu) [[unlikely]] return; }
L_0040488C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004048AC; } }
    set32(c.r[4], 0u + 6u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004048A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x004048A4u) [[unlikely]] return; }
L_004048A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00404A84; } }
L_004048AC:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_004048B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004048B8u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x004048B8u) [[unlikely]] return; }
L_004048B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00404D84; } }
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004048D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x004048D0u) [[unlikely]] return; }
L_004048D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00404C34; } }
L_004048D8:
    set32(c.r[2], 0u + 15u);
    c.budget -= 1;
L_004048DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004048ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B9(c, 36u, depth + 1u); else { c.pc = 0x00404520u; return; } if (c.pc != 0x004048ECu) [[unlikely]] return; }
L_004048EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00404D84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004048FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 9u, depth + 1u); else { c.pc = 0x004040A0u; return; } if (c.pc != 0x004048FCu) [[unlikely]] return; }
L_004048FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 152u)));  goto L_00404924; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404920u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404920u) [[unlikely]] return; }
L_00404920:
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_00404924:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 152u)));  goto L_00404944; }
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404940u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00404940u) [[unlikely]] return; }
L_00404940:
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_00404944:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);  goto L_00404964; }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404960u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00404960u) [[unlikely]] return; }
L_00404960:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.budget -= 1;
L_00404964:
    st32((c.r[17].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00404D84; } }
L_00404978:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_00404990; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004049A8; } }
L_00404990:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_004049A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 160u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 160u), c.f[1]);  if (t) { goto L_00404D84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004049D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 39u, depth + 1u); else { c.pc = 0x004045B0u; return; } if (c.pc != 0x004049D4u) [[unlikely]] return; }
L_004049D4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_004049F4; }
    set32(c.r[3], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    st32((c.r[17].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_00404A44; } }
L_004049F4:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 180u)));  goto L_00404A14; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404A10u); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404A10u) [[unlikely]] return; }
L_00404A10:
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 1;
L_00404A14:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 172u)));  goto L_00404A34; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404A2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404A2Cu) [[unlikely]] return; }
L_00404A2C:
    st32((c.r[17].w[0] + 180u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 2;
L_00404A34:
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    st32((c.r[17].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 176u), 0u);
    c.budget -= 4;
L_00404A44:
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 1;
L_00404A48:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_00404A60; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 3;
L_00404A60:
    set32(c.r[3], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 156u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00404A48u | kUnwind; return; } goto L_00404A48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404840u | kUnwind; return; } goto L_00404840; } }
L_00404A84:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_00404A88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404A98u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00B9(c, 36u, depth + 1u); else { c.pc = 0x00404520u; return; } if (c.pc != 0x00404A98u) [[unlikely]] return; }
L_00404A98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00404D84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404AA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 9u, depth + 1u); else { c.pc = 0x004040A0u; return; } if (c.pc != 0x00404AA8u) [[unlikely]] return; }
L_00404AA8:
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 152u)));  goto L_00404AD0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 11u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404ACCu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404ACCu) [[unlikely]] return; }
L_00404ACC:
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_00404AD0:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 152u)));  goto L_00404AF0; }
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404AECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00404AECu) [[unlikely]] return; }
L_00404AEC:
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_00404AF0:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);  goto L_00404B10; }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404B0Cu); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00404B0Cu) [[unlikely]] return; }
L_00404B0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.budget -= 1;
L_00404B10:
    st32((c.r[17].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00404D84; } }
L_00404B24:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_00404B3C; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00404B54; } }
L_00404B3C:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_00404B54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 160u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 160u), c.f[1]);  if (t) { goto L_00404D84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404B80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 39u, depth + 1u); else { c.pc = 0x004045B0u; return; } if (c.pc != 0x00404B80u) [[unlikely]] return; }
L_00404B80:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_00404BA0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    st32((c.r[17].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_00404BF0; } }
L_00404BA0:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 176u)));  goto L_00404BC0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404BBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404BBCu) [[unlikely]] return; }
L_00404BBC:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 1;
L_00404BC0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 172u)));  goto L_00404BE0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404BD8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404BD8u) [[unlikely]] return; }
L_00404BD8:
    st32((c.r[17].w[0] + 176u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 2;
L_00404BE0:
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 180u)));
    st32((c.r[17].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 180u), 0u);
    c.budget -= 4;
L_00404BF0:
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 1;
L_00404BF4:
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 156u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 156u)));  goto L_00404C14; }
    st32((c.r[17].w[0] + 156u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 2;
L_00404C14:
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 156u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00404BF4u | kUnwind; return; } goto L_00404BF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404840u | kUnwind; return; } goto L_00404840; } }
L_00404C34:
    set32(c.r[4], 0u + 50u);
    c.budget -= 1;
L_00404C38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[17].w[0] + 88u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 10;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);  goto L_00404C74; }
    set32(c.r[5], 0u + 13u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404C70u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00404C70u) [[unlikely]] return; }
L_00404C70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_00404C74:
    st32((c.r[17].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00404D84; } }
L_00404C88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_00404CA4; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00404CBC; } }
L_00404CA4:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_00404CBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 160u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 160u), c.f[1]);  if (t) { goto L_00404D84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404CE8u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00404CE8u) [[unlikely]] return; }
L_00404CE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404CF4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 79u, depth + 1u); else { c.pc = 0x003FCC30u; return; } if (c.pc != 0x00404CF4u) [[unlikely]] return; }
L_00404CF4:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 2;
L_00404CFC:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  goto L_00404D1C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404D18u); set32(c.r[5], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404D18u) [[unlikely]] return; }
L_00404D18:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_00404D1C:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 172u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 172u);  if (t) { goto L_00404D40; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404D3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404D3Cu) [[unlikely]] return; }
L_00404D3C:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 1;
L_00404D40:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00404CFCu | kUnwind; return; } goto L_00404CFC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 156u)));  goto L_00404D7C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 152u), 0u);  goto L_00404D78; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00404D74u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00404D74u) [[unlikely]] return; }
L_00404D74:
    st32((c.r[17].w[0] + 152u), 0u);
    c.budget -= 1;
L_00404D78:
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 1;
L_00404D7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404D84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00404D84u) [[unlikely]] return; }
L_00404D84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00404D88:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00404DA0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404DE4u); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 249u, depth + 1u); else { c.pc = 0x003FF310u; return; } if (c.pc != 0x00404DE4u) [[unlikely]] return; }
L_00404DE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], c.r[2].w[0] + 14176u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[19].w[0] + 204u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1408u);
    set32(c.r[6], c.r[6].w[0] - 7920u);
    set32(c.r[7], 0u + 160u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404E10u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0008(c, 147u, depth + 1u); else { c.pc = 0x00141CB0u; return; } if (c.pc != 0x00404E10u) [[unlikely]] return; }
L_00404E10:
    st32((c.r[19].w[0] + 148u), 0u);
    st32((c.r[19].w[0] + 152u), 0u);
    st32((c.r[19].w[0] + 156u), 0u);
    st32((c.r[19].w[0] + 160u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 164u), 0u);  if (t) { goto L_00404E48; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + 31180u);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 540u), c.r[2].w[0]);  if (t) { goto L_00404E54; } }
L_00404E48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + 31168u);
    st32((c.r[19].w[0] + 540u), c.r[2].w[0]);
    c.budget -= 3;
L_00404E54:
    c.budget -= 2;
    if (c.r[20].sd[0] <= 0) { set32(c.r[2], 0u + 1u);  goto L_00404E88; }
    st32((c.r[19].w[0] + 168u), c.r[20].w[0]);
    set32(c.r[20], c.r[20].w[0] << 4);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404E6Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00404E6Cu) [[unlikely]] return; }
L_00404E6C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[19].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404E80u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00404E80u) [[unlikely]] return; }
L_00404E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 152u)));  if (t) { goto L_00404EB8; } }
L_00404E88:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404E94u); st32((c.r[19].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00404E94u) [[unlikely]] return; }
L_00404E94:
    st32((c.r[19].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[4], 0u - 1u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], ld32((c.r[19].w[0] + 172u)));
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 172u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 9;
L_00404EB8:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { st32((c.r[19].w[0] + 180u), 0u);  goto L_00404EEC; }
    set32(c.r[16], c.r[2].w[0] << 2);
    st32((c.r[19].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404ED0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00404ED0u) [[unlikely]] return; }
L_00404ED0:
    set32(c.r[5], ld32((c.r[29].w[0] + 144u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[19].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404EE4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00404EE4u) [[unlikely]] return; }
L_00404EE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 168u)));  if (t) { goto L_00404EF4; } }
L_00404EEC:
    st32((c.r[19].w[0] + 176u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 168u)));
    c.budget -= 2;
L_00404EF4:
    set32(c.r[2], 0u + 9u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    st32((c.r[19].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404F18u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x00404F18u) [[unlikely]] return; }
L_00404F18:
    st32((c.r[19].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00404F54; } }
L_00404F24:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[2].w[0] << 2);
    c.budget -= 3;
L_00404F30:
    set32(c.r[4], ld32((c.r[19].w[0] + 188u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404F30u | kUnwind; return; } goto L_00404F30; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00404F54:
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00404F24u | kUnwind; return; } goto L_00404F24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404F6Cu); set32(c.r[4], 0u + 360u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00404F6Cu) [[unlikely]] return; }
L_00404F6C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 192u), c.r[2].w[0]);  goto L_00404F98; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404F94u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x00404F94u) [[unlikely]] return; }
L_00404F94:
    st32((c.r[19].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 1;
L_00404F98:
    st32((c.r[19].w[0] + 196u), 0u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 200u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 540u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[19].w[0] + 524u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 528u), c.r[21].w[0]);
    st32((c.r[19].w[0] + 532u), c.r[22].w[0]);
    st32((c.r[19].w[0] + 536u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 544u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00404FF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040506C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 14176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040501Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B9(c, 107u, depth + 1u); else { c.pc = 0x00405090u; return; } if (c.pc != 0x0040501Cu) [[unlikely]] return; }
L_0040501C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[17].w[0] + 204u);
    set32(c.r[5], c.r[5].w[0] - 7920u);
    set32(c.r[6], 0u + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405034u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0008(c, 144u, depth + 1u); else { c.pc = 0x00141C40u; return; } if (c.pc != 0x00405034u) [[unlikely]] return; }
L_00405034:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00405058; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13568u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405054u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x00405054u) [[unlikely]] return; }
L_00405054:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00405058:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00405070; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040506Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x0040506Cu) [[unlikely]] return; }
L_0040506C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00405070:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00405090:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 11;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 148u)));  goto L_004050DC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 152u), 0u);  goto L_004050D8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004050D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004050D4u) [[unlikely]] return; }
L_004050D4:
    st32((c.r[20].w[0] + 152u), 0u);
    c.budget -= 1;
L_004050D8:
    set32(c.r[4], ld32((c.r[20].w[0] + 148u)));
    c.budget -= 1;
L_004050DC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 192u)));  goto L_004050FC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004050F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004050F4u) [[unlikely]] return; }
L_004050F4:
    st32((c.r[20].w[0] + 148u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 192u)));
    c.budget -= 2;
L_004050FC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 188u)));  goto L_0040511C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00405114u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00405114u) [[unlikely]] return; }
L_00405114:
    st32((c.r[20].w[0] + 192u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 188u)));
    c.budget -= 2;
L_0040511C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 172u)));  goto L_004051B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00405188; } }
L_0040512C:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[17], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[20].w[0] + 188u)));
    c.budget -= 4;
L_0040513C:
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00405178; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00405164u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00405164u) [[unlikely]] return; }
L_00405164:
    set32(c.r[3], ld32((c.r[20].w[0] + 188u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 5;
L_00405178:
    c.r[3].d[0] = c.r[18].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 188u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040513Cu | kUnwind; return; } goto L_0040513C; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00405188:
    set32(c.r[3], ld32((c.r[20].w[0] + 184u)));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040512Cu | kUnwind; return; } goto L_0040512C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 188u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 184u), 0u);  goto L_004051B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004051ACu);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x004051ACu) [[unlikely]] return; }
L_004051AC:
    st32((c.r[20].w[0] + 188u), 0u);
    st32((c.r[20].w[0] + 184u), 0u);
    c.budget -= 2;
L_004051B4:
    set32(c.r[4], ld32((c.r[20].w[0] + 172u)));
    c.budget -= 1;
L_004051B8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 180u)));  goto L_004051D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004051C8u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x004051C8u) [[unlikely]] return; }
L_004051C8:
    st32((c.r[20].w[0] + 172u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 180u)));
    c.budget -= 2;
L_004051D0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 196u)));  goto L_004051E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004051E0u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x004051E0u) [[unlikely]] return; }
L_004051E0:
    st32((c.r[20].w[0] + 180u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 196u)));
    c.budget -= 2;
L_004051E8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 200u)));  goto L_00405200; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004051F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x004051F8u) [[unlikely]] return; }
L_004051F8:
    st32((c.r[20].w[0] + 196u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 200u)));
    c.budget -= 2;
L_00405200:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 544u)));  goto L_00405218; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405210u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x00405210u) [[unlikely]] return; }
L_00405210:
    st32((c.r[20].w[0] + 200u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 544u)));
    c.budget -= 2;
L_00405218:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00405238; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00405230u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00405230u) [[unlikely]] return; }
L_00405230:
    st32((c.r[20].w[0] + 544u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 2;
L_00405238:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00405260:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040556C; } }
    set32(c.r[6], ld32((c.r[21].w[0] + 192u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_00405570; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004052CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[6].w[0] + 72u)));  goto L_004052E4; }
L_004052CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004052DCu); set32(c.r[5], c.r[5].w[0] + 31216u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x004052DCu) [[unlikely]] return; }
L_004052DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  if (t) { goto L_00405544; } }
L_004052E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004052F4u); c.r[5].d[0] = c.r[2].d[0] | 17473ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x004052F4u) [[unlikely]] return; }
L_004052F4:
    set32(c.r[3], ld32((c.r[21].w[0] + 192u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405310u); c.r[5].d[0] = c.r[2].d[0] | 21075ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x00405310u) [[unlikely]] return; }
L_00405310:
    set32(c.r[3], ld32((c.r[21].w[0] + 192u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C540000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040532Cu); c.r[5].d[0] = c.r[2].d[0] | 18509ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x0040532Cu) [[unlikely]] return; }
L_0040532C:
    set32(c.r[3], ld32((c.r[21].w[0] + 192u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47540000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405348u); c.r[5].d[0] = c.r[2].d[0] | 20545ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x00405348u) [[unlikely]] return; }
L_00405348:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00405360; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00405360; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], 0u + 432u);  goto L_00405378; }
L_00405360:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405370u); set32(c.r[5], c.r[5].w[0] + 31225u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00405370u) [[unlikely]] return; }
L_00405370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00405540; } }
L_00405378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405380u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00405380u) [[unlikely]] return; }
L_00405380:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[21].w[0] + 148u), c.r[4].w[0]);  goto L_004053A4; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040539Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 284u, depth + 1u); else { c.pc = 0x00207340u; return; } if (c.pc != 0x0040539Cu) [[unlikely]] return; }
L_0040539C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[21].w[0] + 148u), c.r[4].w[0]);
    c.budget -= 2;
L_004053A4:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_004054B0; } }
L_004053BC:
    set32(c.r[5], c.r[20].w[0] << 4);
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], 0u - 1u);  if (t) { goto L_00405430; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[21].w[0] + 536u)));  goto L_00405424; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 532u)));  goto L_00405410; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 528u)));  goto L_004053FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00405430; } }
L_004053FC:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_00405430; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_00405430; } }
L_00405410:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_00405430; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_00405430; } }
L_00405424:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00405430; } }
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_00405430:
    c.budget -= 2;
    if (c.r[6].sd[0] < 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00405498; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 17752ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040544Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 285u, depth + 1u); else { c.pc = 0x00202DF0u; return; } if (c.pc != 0x0040544Cu) [[unlikely]] return; }
L_0040544C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405458u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x00405458u) [[unlikely]] return; }
L_00405458:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] << 3);  goto L_00405478; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405470u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 130u, depth + 1u); else { c.pc = 0x0015D3D0u; return; } if (c.pc != 0x00405470u) [[unlikely]] return; }
L_00405470:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[18].w[0] << 3);
    c.budget -= 2;
L_00405478:
    set32(c.r[5], ld32((c.r[21].w[0] + 188u)));
    set32(c.r[6], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 8;
L_00405498:
    c.r[3].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_004054B0; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] - 9u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 3;
L_004054B0:
    set32(c.r[3], ld32((c.r[21].w[0] + 168u)));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 172u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004053BCu | kUnwind; return; } goto L_004053BC; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 192u)));  goto L_00405514; }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004054E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x004054E0u) [[unlikely]] return; }
L_004054E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[21].w[0] + 200u), c.r[2].w[0]);  if (t) { goto L_00405500; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004054F8u); set32(c.r[5], c.r[5].w[0] + 31237u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x004054F8u) [[unlikely]] return; }
L_004054F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00405540; } }
L_00405500:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405510u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00405510u) [[unlikely]] return; }
L_00405510:
    set32(c.r[4], ld32((c.r[21].w[0] + 192u)));
    c.budget -= 1;
L_00405514:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  goto L_00405534; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040552Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040552Cu) [[unlikely]] return; }
L_0040552C:
    st32((c.r[21].w[0] + 192u), 0u);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_00405534:
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0040556C; } }
L_00405540:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_00405544:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405558u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B9(c, 107u, depth + 1u); else { c.pc = 0x00405090u; return; } if (c.pc != 0x00405558u) [[unlikely]] return; }
L_00405558:
    set32(c.r[4], ld32((c.r[21].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[21].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 5;
L_0040556C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00405570:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004055A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 100u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004055C8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0039(c, 356u, depth + 1u); else { c.pc = 0x00207D10u; return; } if (c.pc != 0x004055C8u) [[unlikely]] return; }
L_004055C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004055D0u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x004055D0u) [[unlikely]] return; }
L_004055D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004055D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x004055D8u) [[unlikely]] return; }
L_004055D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_004055F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004055F0u); set32(c.r[4], c.r[16].w[0] + 204u);  if (depth < kMaxDepth) unit_003B(c, 248u, depth + 1u); else { c.pc = 0x0020E740u; return; } if (c.pc != 0x004055F0u) [[unlikely]] return; }
L_004055F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004055F4:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 32u);  goto L_0040560C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405608u); set32(c.r[4], c.r[16].w[0] + 364u);  if (depth < kMaxDepth) unit_003B(c, 248u, depth + 1u); else { c.pc = 0x0020E740u; return; } if (c.pc != 0x00405608u) [[unlikely]] return; }
L_00405608:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_0040560C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405614u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0039(c, 362u, depth + 1u); else { c.pc = 0x00207E10u; return; } if (c.pc != 0x00405614u) [[unlikely]] return; }
L_00405614:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00405630:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 19;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00405680; }
    set32(c.r[16], ld32((c.r[5].w[0] + 52u)));
    c.budget -= 1;
L_00405680:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00405684:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[22], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 31192u);
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[18], c.r[23].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    if (c.r[18].sd[0] >= 0) { set32(c.r[3], ld32((c.r[21].w[0] + 184u)));  goto L_004056B0; }
    set32(c.r[3], ld32((c.r[21].w[0] + 184u)));
    set32(c.r[18], c.r[3].w[0] - 1u);
    set32(c.r[3], ld32((c.r[21].w[0] + 184u)));
    c.budget -= 3;
L_004056B0:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[20].w[0] << 3);  goto L_004056C4; }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[20].w[0] << 3);
    c.budget -= 2;
L_004056C4:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[30], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[21].w[0] + 540u)));
    c.budget -= 7;
L_004056E0:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[5], ld32((c.r[21].w[0] + 188u)));
    set32(c.r[7], c.r[19].w[0] + c.r[30].w[0]);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[17], c.r[19].w[0] + c.r[6].w[0]);  if (t) { goto L_004057AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 17752ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405724u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 136u, depth + 1u); else { c.pc = 0x003C5620u; return; } if (c.pc != 0x00405724u) [[unlikely]] return; }
L_00405724:
    set32(c.r[2], ld32((c.r[21].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0040574C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00405748u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00405748u) [[unlikely]] return; }
L_00405748:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0040574C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405758u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 173u, depth + 1u); else { c.pc = 0x00405AA0u; return; } if (c.pc != 0x00405758u) [[unlikely]] return; }
L_00405758:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 152u)));  goto L_00405788; }
    set32(c.r[3], ld32((c.r[21].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_004057D0; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405780u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00405780u) [[unlikely]] return; }
L_00405780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004057CC; } }
L_00405788:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004057CC; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004057A4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004057A4u) [[unlikely]] return; }
L_004057A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004057CC; } }
L_004057AC:
    set32(c.r[3], ld32((c.r[21].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004057CC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004057CCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004057CCu) [[unlikely]] return; }
L_004057CC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_004057D0:
    c.r[3].d[0] = c.r[19].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 540u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004056E0u | kUnwind; return; } goto L_004056E0; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00405684u | kUnwind; return; } goto L_00405684; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00405820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 200u)));
    c.budget -= 5;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0040587C; }
    set32(c.r[7], ld32((c.r[4].w[0] + 156u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 11;
    if (c.r[6].sd[0] < 0) { set32(c.r[4], c.r[4].w[0] + 204u);  goto L_00405870; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405868u); set32(c.r[4], c.r[4].w[0] + 204u);  if (depth < kMaxDepth) unit_003C(c, 100u, depth + 1u); else { c.pc = 0x00211210u; return; } if (c.pc != 0x00405868u) [[unlikely]] return; }
L_00405868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00405878; } }
L_00405870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405878u);  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x00405878u) [[unlikely]] return; }
L_00405878:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0040587C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00405890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 200u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00405914; } }
    st32((c.r[29].w[0] + 44u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[4], c.r[29].w[0] + 44u);
    set32(c.r[7], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[5], c.r[5].w[0] + 31251u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004058C8u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x004058C8u) [[unlikely]] return; }
L_004058C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004058D0u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0022(c, 37u, depth + 1u); else { c.pc = 0x001A8550u; return; } if (c.pc != 0x004058D0u) [[unlikely]] return; }
L_004058D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004058D8u); set32(c.r[4], c.r[16].w[0] + 364u);  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x004058D8u) [[unlikely]] return; }
L_004058D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_004058E8; }
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_004058E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004058F0u); set32(c.r[4], c.r[16].w[0] + 364u);  if (depth < kMaxDepth) unit_003B(c, 314u, depth + 1u); else { c.pc = 0x0020FC40u; return; } if (c.pc != 0x004058F0u) [[unlikely]] return; }
L_004058F0:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00405918; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00405914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405914u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00405914u) [[unlikely]] return; }
L_00405914:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00405918:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00405930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040599C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 156u)));  goto L_00405970; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 14u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040596Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040596Cu) [[unlikely]] return; }
L_0040596C:
    set32(c.r[5], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_00405970:
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004059A0; }
    set32(c.r[5], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040599Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x0040599Cu) [[unlikely]] return; }
L_0040599C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004059A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004059B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_004059EC; } }
    set32(c.r[7], c.r[16].w[0] + 1u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004059ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004059ECu) [[unlikely]] return; }
L_004059EC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004059FCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 173u, depth + 1u); else { c.pc = 0x00405AA0u; return; } if (c.pc != 0x004059FCu) [[unlikely]] return; }
L_004059FC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00405A2C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 524u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 152u)));
    set32(c.r[5], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00405A28; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405A28u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00405A28u) [[unlikely]] return; }
L_00405A28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00405A2C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00405A40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405A5Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 173u, depth + 1u); else { c.pc = 0x00405AA0u; return; } if (c.pc != 0x00405A5Cu) [[unlikely]] return; }
L_00405A5C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00405A8C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 524u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[5], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00405A88; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405A88u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00405A88u) [[unlikely]] return; }
L_00405A88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00405A8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00405AA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00405AD4; }
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
L_00405AD4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00405AE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00405B04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405B00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00405B00u) [[unlikely]] return; }
L_00405B00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00405B04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00405B10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004069AC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[4], 0u + 71u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_004068F4; }
    set32(c.r[4], 0u + 70u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[3], 0u + 70u);  goto L_004068B8; }
    set32(c.r[4], 0u + 61u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_00406810; }
    set32(c.r[4], 0u + 60u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[4], 0u + 60u);  goto L_004067C4; }
    set32(c.r[4], 0u + 56u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0040675C; }
    set32(c.r[4], 0u + 55u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[3], 0u + 55u);  goto L_00406720; }
    set32(c.r[4], 0u + 51u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_004066A8; }
    set32(c.r[4], 0u + 50u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[3], 0u + 50u);  goto L_00406614; }
    set32(c.r[4], 0u + 46u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0040659C; }
    set32(c.r[4], 0u + 45u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[3], 0u + 45u);  goto L_00406508; }
    set32(c.r[4], 0u + 40u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u + 40u);  goto L_0040645C; }
    set32(c.r[4], 0u + 35u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u + 35u);  goto L_004063A4; }
    set32(c.r[4], 0u + 31u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u + 10u);  goto L_00405EF0; }
    set32(c.r[4], 0u + 30u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[3], 0u + 30u);  goto L_00406318; }
    set32(c.r[4], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00405EEC; } }
    set32(c.r[4], 0u + 25u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[3], 0u + 25u);  goto L_00406290; }
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u + 20u);  goto L_004061B0; }
    set32(c.r[4], 0u + 15u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u + 15u);  goto L_004060D4; }
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00405EEC; } }
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 544u)));  goto L_00405EBC; }
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 544u)));  goto L_00405E94; }
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u + 5u);  goto L_00405E18; }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00405DE0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_00405D64; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 56u)));  goto L_00405C64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004069B0; } }
L_00405C64:
    set32(c.r[3], 0u + 9u);
    c.r[5].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 540u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 524u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405CA0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 347u, depth + 1u); else { c.pc = 0x00207BE0u; return; } if (c.pc != 0x00405CA0u) [[unlikely]] return; }
L_00405CA0:
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[2].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    st32((c.r[2].w[0] + 284u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st32((c.r[3].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[3].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405CE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 145u, depth + 1u); else { c.pc = 0x00405630u; return; } if (c.pc != 0x00405CE0u) [[unlikely]] return; }
L_00405CE0:
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405CF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 166u, depth + 1u); else { c.pc = 0x004059B0u; return; } if (c.pc != 0x00405CF0u) [[unlikely]] return; }
L_00405CF0:
    set32(c.r[5], ld32((c.r[17].w[0] + 200u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { st32((c.r[17].w[0] + 164u), 0u);  goto L_00405D54; }
    set32(c.r[4], c.r[17].w[0] + 204u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405D08u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x00405D08u) [[unlikely]] return; }
L_00405D08:
    set32(c.r[5], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[4], c.r[17].w[0] + 364u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405D18u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x00405D18u) [[unlikely]] return; }
L_00405D18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43DD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43D80000u);
    st32((c.r[17].w[0] + 400u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 404u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[17].w[0] + 408u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405D40u); st32((c.r[17].w[0] + 412u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B9(c, 163u, depth + 1u); else { c.pc = 0x00405930u; return; } if (c.pc != 0x00405D40u) [[unlikely]] return; }
L_00405D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405D48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 154u, depth + 1u); else { c.pc = 0x00405820u; return; } if (c.pc != 0x00405D48u) [[unlikely]] return; }
L_00405D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405D50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 157u, depth + 1u); else { c.pc = 0x00405890u; return; } if (c.pc != 0x00405D50u) [[unlikely]] return; }
L_00405D50:
    st32((c.r[17].w[0] + 164u), 0u);
    c.budget -= 1;
L_00405D54:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004069AC; } }
L_00405D64:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_00405D7C; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00405D94; } }
L_00405D7C:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 6;
L_00405D94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[2] = ld32((c.r[17].w[0] + 164u));
    c.f[1] = 0u;
    c.f[3] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 164u), c.f[1]);  if (t) { goto L_004069AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405DC8u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00405DC8u) [[unlikely]] return; }
L_00405DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405DD0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 84u, depth + 1u); else { c.pc = 0x003FCCA0u; return; } if (c.pc != 0x00405DD0u) [[unlikely]] return; }
L_00405DD0:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004069AC; } }
L_00405DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405DE8u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00405DE8u) [[unlikely]] return; }
L_00405DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405DF0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 86u, depth + 1u); else { c.pc = 0x003FCCD0u; return; } if (c.pc != 0x00405DF0u) [[unlikely]] return; }
L_00405DF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004069AC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00405EEC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00405EEC; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_00405E18:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 544u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 200u);  goto L_00405E40; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00405E38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00405E38u) [[unlikely]] return; }
L_00405E38:
    st32((c.r[17].w[0] + 544u), 0u);
    set32(c.r[4], 0u + 200u);
    c.budget -= 2;
L_00405E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405E48u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00405E48u) [[unlikely]] return; }
L_00405E48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 544u), c.r[2].w[0]);  goto L_00405E74; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 31257u);
    set32(c.r[7], c.r[7].w[0] + 31272u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405E70u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 265u, depth + 1u); else { c.pc = 0x0040A5D0u; return; } if (c.pc != 0x00405E70u) [[unlikely]] return; }
L_00405E70:
    st32((c.r[17].w[0] + 544u), c.r[2].w[0]);
    c.budget -= 1;
L_00405E74:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405E84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 18u, depth + 1u); else { c.pc = 0x0040C1F0u; return; } if (c.pc != 0x00405E84u) [[unlikely]] return; }
L_00405E84:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004069AC; } }
L_00405E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405E9Cu);  if (depth < kMaxDepth) unit_00BB(c, 20u, depth + 1u); else { c.pc = 0x0040C270u; return; } if (c.pc != 0x00405E9Cu) [[unlikely]] return; }
L_00405E9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004069AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405EACu); set32(c.r[4], ld32((c.r[17].w[0] + 544u)));  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x0040C240u; return; } if (c.pc != 0x00405EACu) [[unlikely]] return; }
L_00405EAC:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004069AC; } }
L_00405EBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004069AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00405EEC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00405EE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00405EE8u) [[unlikely]] return; }
L_00405EE8:
    st32((c.r[17].w[0] + 544u), 0u);
    c.budget -= 1;
L_00405EEC:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_00405EF0:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 24576ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 168u)));  goto L_00405F8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405F18u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x00405F18u) [[unlikely]] return; }
L_00405F18:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 6u);  goto L_00405F38; }
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405F2Cu); c.r[4].d[0] = c.r[2].d[0] << 32;  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x00405F2Cu) [[unlikely]] return; }
L_00405F2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 2048u);  goto L_00405F4C; }
    set32(c.r[4], 0u + 6u);
    c.budget -= 1;
L_00405F38:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405F44u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00405F44u) [[unlikely]] return; }
L_00405F44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004060D0; } }
L_00405F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405F54u);  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x00405F54u) [[unlikely]] return; }
L_00405F54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 6u);  goto L_00405F74; }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405F68u); c.r[4].d[0] = c.r[2].d[0] << 32;  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x00405F68u) [[unlikely]] return; }
L_00405F68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00405F88; } }
    set32(c.r[4], 0u + 6u);
    c.budget -= 1;
L_00405F74:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405F80u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00405F80u) [[unlikely]] return; }
L_00405F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004061AC; } }
L_00405F88:
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 1;
L_00405F8C:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], 0u + 32u);  goto L_0040603C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405FA0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x00405FA0u) [[unlikely]] return; }
L_00405FA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);  goto L_00405FC0; }
    set32(c.r[4], 0u + 8u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405FB8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00405FB8u) [[unlikely]] return; }
L_00405FB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040628C; } }
L_00405FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405FC8u);  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x00405FC8u) [[unlikely]] return; }
L_00405FC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull | 32768ull;  goto L_00405FE8; }
    set32(c.r[4], 0u + 8u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405FE0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00405FE0u) [[unlikely]] return; }
L_00405FE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00406314; } }
L_00405FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405FF0u); c.r[4].d[0] = c.r[2].d[0] << 16;  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x00405FF0u) [[unlikely]] return; }
L_00405FF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_00406010; }
    set32(c.r[4], 0u + 8u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406008u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00406008u) [[unlikely]] return; }
L_00406008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004063A0; } }
L_00406010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406018u);  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001CEDA0u; return; } if (c.pc != 0x00406018u) [[unlikely]] return; }
L_00406018:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00406038; } }
    set32(c.r[4], 0u + 8u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406030u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00406030u) [[unlikely]] return; }
L_00406030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00406458; } }
L_00406038:
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_0040603C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406044u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00406044u) [[unlikely]] return; }
L_00406044:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 16u);  goto L_004060A8; }
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 1u);  goto L_00406090; }
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406088u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00406088u) [[unlikely]] return; }
L_00406088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004060A4; } }
L_00406090:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040609Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x0040609Cu) [[unlikely]] return; }
L_0040609C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004068B4; } }
L_004060A4:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_004060A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004060B0u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x004060B0u) [[unlikely]] return; }
L_004060B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004069AC; } }
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004060C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x004060C8u) [[unlikely]] return; }
L_004060C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004067C0; } }
L_004060D0:
    set32(c.r[2], 0u + 15u);
    c.budget -= 1;
L_004060D4:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004060E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 170u, depth + 1u); else { c.pc = 0x00405A40u; return; } if (c.pc != 0x004060E8u) [[unlikely]] return; }
L_004060E8:
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004060F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 145u, depth + 1u); else { c.pc = 0x00405630u; return; } if (c.pc != 0x004060F4u) [[unlikely]] return; }
L_004060F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_00406120; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_00406120; } }
L_00406114:
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 1;
L_00406118:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 2;
L_00406120:
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 160u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00406118u | kUnwind; return; } goto L_00406118; }
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406114u | kUnwind; return; } goto L_00406114; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_00406188; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00406184u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00406184u) [[unlikely]] return; }
L_00406184:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_00406188:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00406610; } }
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004061A4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004061A4u) [[unlikely]] return; }
L_004061A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00406610; } }
L_004061AC:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_004061B0:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004061C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 170u, depth + 1u); else { c.pc = 0x00405A40u; return; } if (c.pc != 0x004061C4u) [[unlikely]] return; }
L_004061C4:
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004061D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 145u, depth + 1u); else { c.pc = 0x00405630u; return; } if (c.pc != 0x004061D0u) [[unlikely]] return; }
L_004061D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 156u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 156u)));  goto L_00406204; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 156u), 0u);  if (t) { goto L_00406200; } }
L_004061F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 1;
L_004061F8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 2;
L_00406200:
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 1;
L_00406204:
    set32(c.r[3], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 160u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004061F8u | kUnwind; return; } goto L_004061F8; }
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004061F4u | kUnwind; return; } goto L_004061F4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_00406268; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 11u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00406264u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00406264u) [[unlikely]] return; }
L_00406264:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_00406268:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00406504; } }
    set32(c.r[5], 0u + 11u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406284u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00406284u) [[unlikely]] return; }
L_00406284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00406504; } }
L_0040628C:
    set32(c.r[3], 0u + 25u);
    c.budget -= 1;
L_00406290:
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_0040629C:
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 1;
L_004062A0:
    set32(c.r[4], c.r[4].w[0] - 3u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; st32((c.r[17].w[0] + 160u), c.r[4].w[0]);  if (t) { goto L_004062B4; } }
    set32(c.r[4], c.r[4].w[0] + 9u);
    st32((c.r[17].w[0] + 160u), c.r[4].w[0]);
    c.budget -= 2;
L_004062B4:
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[8], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[7], c.r[5].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 160u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004062A0u | kUnwind; return; } goto L_004062A0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040629Cu | kUnwind; return; } goto L_0040629C; } }
    c.budget -= 2;
    if (c.r[8].d[0] == c.r[6].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 88u)));  goto L_00406308; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406300u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 170u, depth + 1u); else { c.pc = 0x00405A40u; return; } if (c.pc != 0x00406300u) [[unlikely]] return; }
L_00406300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040671C; } }
L_00406308:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004069AC; } }
L_00406314:
    set32(c.r[3], 0u + 30u);
    c.budget -= 1;
L_00406318:
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_00406324:
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 1;
L_00406328:
    set32(c.r[5], c.r[4].w[0] + 3u);
    c.r[4].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[17].w[0] + 160u), c.r[5].w[0]);  if (t) { goto L_00406340; } }
    set32(c.r[4], c.r[5].w[0] - 9u);
    st32((c.r[17].w[0] + 160u), c.r[4].w[0]);
    c.budget -= 2;
L_00406340:
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[8], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[7], c.r[5].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 160u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00406328u | kUnwind; return; } goto L_00406328; }
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406324u | kUnwind; return; } goto L_00406324; } }
    c.budget -= 2;
    if (c.r[8].d[0] == c.r[6].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 88u)));  goto L_00406394; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040638Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 170u, depth + 1u); else { c.pc = 0x00405A40u; return; } if (c.pc != 0x0040638Cu) [[unlikely]] return; }
L_0040638C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040671C; } }
L_00406394:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004069AC; } }
L_004063A0:
    set32(c.r[2], 0u + 35u);
    c.budget -= 1;
L_004063A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004063BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 170u, depth + 1u); else { c.pc = 0x00405A40u; return; } if (c.pc != 0x004063BCu) [[unlikely]] return; }
L_004063BC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_004063C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 1;
L_004063C4:
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[17].w[0] + 160u), c.r[4].w[0]);  if (t) { goto L_00406400; } }
    set32(c.r[3], c.r[4].w[0] - 9u);
    st32((c.r[17].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[5], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 156u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 156u)));  goto L_00406404; }
    set32(c.r[3], c.r[5].w[0] - c.r[4].w[0]);
    st32((c.r[17].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 2;
L_00406400:
    set32(c.r[6], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 1;
L_00406404:
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 160u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004063C4u | kUnwind; return; } goto L_004063C4; }
    set32(c.r[3], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004063C0u | kUnwind; return; } goto L_004063C0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[6].d[0];  if (t) { goto L_0040671C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406450u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 145u, depth + 1u); else { c.pc = 0x00405630u; return; } if (c.pc != 0x00406450u) [[unlikely]] return; }
L_00406450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00406504; } }
L_00406458:
    set32(c.r[2], 0u + 40u);
    c.budget -= 1;
L_0040645C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406474u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 170u, depth + 1u); else { c.pc = 0x00405A40u; return; } if (c.pc != 0x00406474u) [[unlikely]] return; }
L_00406474:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00406478:
    set32(c.r[3], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 1;
L_0040647C:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[17].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_004064AC; } }
    set32(c.r[3], c.r[3].w[0] + 9u);
    st32((c.r[17].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[4], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; st32((c.r[17].w[0] + 156u), c.r[4].w[0]);  if (t) { goto L_004064AC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 3;
L_004064AC:
    set32(c.r[6], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 160u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040647Cu | kUnwind; return; } goto L_0040647C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406478u | kUnwind; return; } goto L_00406478; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[6].d[0];  if (t) { goto L_0040671C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004064FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 145u, depth + 1u); else { c.pc = 0x00405630u; return; } if (c.pc != 0x004064FCu) [[unlikely]] return; }
L_004064FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00406610; } }
L_00406504:
    set32(c.r[3], 0u + 45u);
    c.budget -= 1;
L_00406508:
    set32(c.r[2], 0u - 24577u);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 540u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 524u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_00406558; }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00406554; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00406554u); set32(c.r[5], 0u + 14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00406554u) [[unlikely]] return; }
L_00406554:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_00406558:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 156u)));  goto L_00406578; }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406574u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00406574u) [[unlikely]] return; }
L_00406574:
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 1;
L_00406578:
    set32(c.r[6], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406584u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 166u, depth + 1u); else { c.pc = 0x004059B0u; return; } if (c.pc != 0x00406584u) [[unlikely]] return; }
L_00406584:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[17].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004069AC; } }
L_0040659C:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_004065B4; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004065CC; } }
L_004065B4:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_004065CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 164u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 164u), c.f[1]);  if (t) { goto L_004069AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004065F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 163u, depth + 1u); else { c.pc = 0x00405930u; return; } if (c.pc != 0x004065F8u) [[unlikely]] return; }
L_004065F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406600u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 154u, depth + 1u); else { c.pc = 0x00405820u; return; } if (c.pc != 0x00406600u) [[unlikely]] return; }
L_00406600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406608u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 157u, depth + 1u); else { c.pc = 0x00405890u; return; } if (c.pc != 0x00406608u) [[unlikely]] return; }
L_00406608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00405EECu | kUnwind; return; } goto L_00405EEC; } }
L_00406610:
    set32(c.r[3], 0u + 50u);
    c.budget -= 1;
L_00406614:
    set32(c.r[2], 0u - 24577u);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 540u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 524u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 152u)));  goto L_00406664; }
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00406660; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00406660u); set32(c.r[5], 0u + 14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00406660u) [[unlikely]] return; }
L_00406660:
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_00406664:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 156u)));  goto L_00406684; }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406680u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x00406680u) [[unlikely]] return; }
L_00406680:
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 1;
L_00406684:
    set32(c.r[6], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406690u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 166u, depth + 1u); else { c.pc = 0x004059B0u; return; } if (c.pc != 0x00406690u) [[unlikely]] return; }
L_00406690:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[17].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004069AC; } }
L_004066A8:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_004066C0; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004066D8; } }
L_004066C0:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_004066D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 164u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 164u), c.f[1]);  if (t) { goto L_004069AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406704u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 163u, depth + 1u); else { c.pc = 0x00405930u; return; } if (c.pc != 0x00406704u) [[unlikely]] return; }
L_00406704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040670Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 154u, depth + 1u); else { c.pc = 0x00405820u; return; } if (c.pc != 0x0040670Cu) [[unlikely]] return; }
L_0040670C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406714u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 157u, depth + 1u); else { c.pc = 0x00405890u; return; } if (c.pc != 0x00406714u) [[unlikely]] return; }
L_00406714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00405EECu | kUnwind; return; } goto L_00405EEC; } }
L_0040671C:
    set32(c.r[3], 0u + 55u);
    c.budget -= 1;
L_00406720:
    set32(c.r[2], 0u - 16385u);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406744u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 166u, depth + 1u); else { c.pc = 0x004059B0u; return; } if (c.pc != 0x00406744u) [[unlikely]] return; }
L_00406744:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[17].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004069AC; } }
L_0040675C:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_00406774; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040678C; } }
L_00406774:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_0040678C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 164u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 164u), c.f[1]);  if (t) { goto L_004069AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004067B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 154u, depth + 1u); else { c.pc = 0x00405820u; return; } if (c.pc != 0x004067B8u) [[unlikely]] return; }
L_004067B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00405EECu | kUnwind; return; } goto L_00405EEC; } }
L_004067C0:
    set32(c.r[4], 0u + 60u);
    c.budget -= 1;
L_004067C4:
    set32(c.r[3], 0u - 24577u);
    st32((c.r[17].w[0] + 88u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);  goto L_004067FC; }
    set32(c.r[5], 0u + 13u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004067F8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004067F8u) [[unlikely]] return; }
L_004067F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_004067FC:
    st32((c.r[17].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004069AC; } }
L_00406810:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_00406828; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00406840; } }
L_00406828:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_00406840:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 164u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 164u), c.f[1]);  if (t) { goto L_004069AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040686Cu);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x0040686Cu) [[unlikely]] return; }
L_0040686C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406878u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 79u, depth + 1u); else { c.pc = 0x003FCC30u; return; } if (c.pc != 0x00406878u) [[unlikely]] return; }
L_00406878:
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004068A4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 152u), 0u);  goto L_004068A0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040689Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040689Cu) [[unlikely]] return; }
L_0040689C:
    st32((c.r[17].w[0] + 152u), 0u);
    c.budget -= 1;
L_004068A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004068A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004068ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x004068ACu) [[unlikely]] return; }
L_004068AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004069AC; } }
L_004068B4:
    set32(c.r[3], 0u + 70u);
    c.budget -= 1;
L_004068B8:
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);  goto L_004068E0; }
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004068DCu); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x004068DCu) [[unlikely]] return; }
L_004068DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.budget -= 1;
L_004068E0:
    st32((c.r[17].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004069AC; } }
L_004068F4:
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_0040690C; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00406924; } }
L_0040690C:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_00406924:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[17].w[0] + 164u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 164u), c.f[1]);  if (t) { goto L_004069AC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u - 24577u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040695Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x0040695Cu) [[unlikely]] return; }
L_0040695C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406968u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 79u, depth + 1u); else { c.pc = 0x003FCC30u; return; } if (c.pc != 0x00406968u) [[unlikely]] return; }
L_00406968:
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 156u)));  goto L_00406994; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 152u), 0u);  goto L_00406990; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040698Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040698Cu) [[unlikely]] return; }
L_0040698C:
    st32((c.r[17].w[0] + 152u), 0u);
    c.budget -= 1;
L_00406990:
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 1;
L_00406994:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004069ACu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x004069ACu) [[unlikely]] return; }
L_004069AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004069B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004069C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004069D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 249u, depth + 1u); else { c.pc = 0x003FF310u; return; } if (c.pc != 0x004069D4u) [[unlikely]] return; }
L_004069D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 14256u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1336u), 0u);
    st32((c.r[16].w[0] + 1340u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00406A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00406AA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 14256u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1336u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 1340u)));  goto L_00406A4C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00406A44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00406A44u) [[unlikely]] return; }
L_00406A44:
    st32((c.r[17].w[0] + 1336u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1340u)));
    c.budget -= 2;
L_00406A4C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00406A68; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00406A64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00406A64u) [[unlikely]] return; }
L_00406A64:
    st32((c.r[17].w[0] + 1340u), 0u);
    c.budget -= 1;
L_00406A68:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00406A8C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13568u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406A88u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x00406A88u) [[unlikely]] return; }
L_00406A88:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00406A8C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00406AA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406AA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x00406AA0u) [[unlikely]] return; }
L_00406AA0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00406AA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00406AC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00406AD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00406AE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406AF4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00406AF4u) [[unlikely]] return; }
L_00406AF4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B00u); set32(c.r[4], 0u + 132u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00406B00u) [[unlikely]] return; }
L_00406B00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);  goto L_00406B30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B14u);  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x00406B14u) [[unlikely]] return; }
L_00406B14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B28u); c.r[7].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B7(c, 182u, depth + 1u); else { c.pc = 0x003FE040u; return; } if (c.pc != 0x00406B28u) [[unlikely]] return; }
L_00406B28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.budget -= 2;
L_00406B30:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 187u, depth + 1u); else { c.pc = 0x003FE0E0u; return; } if (c.pc != 0x00406B3Cu) [[unlikely]] return; }
L_00406B3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B48u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 60u, depth + 1u); else { c.pc = 0x003FC8E0u; return; } if (c.pc != 0x00406B48u) [[unlikely]] return; }
L_00406B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 61u, depth + 1u); else { c.pc = 0x003FC8F0u; return; } if (c.pc != 0x00406B50u) [[unlikely]] return; }
L_00406B50:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B5Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 89u, depth + 1u); else { c.pc = 0x003FCD40u; return; } if (c.pc != 0x00406B5Cu) [[unlikely]] return; }
L_00406B5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00406B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B80u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00406B80u) [[unlikely]] return; }
L_00406B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 84u, depth + 1u); else { c.pc = 0x003FCCA0u; return; } if (c.pc != 0x00406B88u) [[unlikely]] return; }
L_00406B88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406BA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406BB0u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00406BB0u) [[unlikely]] return; }
L_00406BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406BB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 86u, depth + 1u); else { c.pc = 0x003FCCD0u; return; } if (c.pc != 0x00406BB8u) [[unlikely]] return; }
L_00406BB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406BD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00406C04; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u + 3u);  goto L_00406D1C; }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[6].sd[0] >= 0) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_00406C10; }
L_00406C04:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00406D1C; } }
L_00406C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406C18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00406C18u) [[unlikely]] return; }
L_00406C18:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00406C2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_00406C40; } }
L_00406C2C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00406C40; }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_00406C40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] & c.r[5].d[0];  if (t) { goto L_00406C70; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00406C70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406C70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00406C70u) [[unlikely]] return; }
L_00406C70:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00406D0C; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406C90u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00406C90u) [[unlikely]] return; }
L_00406C90:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00406CA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_00406CB8; } }
L_00406CA4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00406CB8; }
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_00406CB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] & c.r[5].d[0];  if (t) { goto L_00406CE8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00406CE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406CE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00406CE8u) [[unlikely]] return; }
L_00406CE8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00406CF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00406D1C; } }
L_00406CF8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00406D04; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00406D04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00406D1C; } }
L_00406D0C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00406D1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00406D1C; } }
L_00406D1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00406D30:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00407254; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 52u)));  goto L_00406D84; }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { st32((c.r[16].w[0] + 88u), c.r[5].w[0]);  goto L_00406D74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_004072E8; } }
L_00406D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406D7Cu);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00406D7Cu) [[unlikely]] return; }
L_00406D7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004072E4; } }
L_00406D84:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_00406D9C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_00406DB0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00406D9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00406DB8; } }
L_00406DB0:
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_00406DB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00406E10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 18u);  if (t) { goto L_00406E04; } }
L_00406DD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31328u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406DECu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B9(c, 290u, depth + 1u); else { c.pc = 0x00406BD0u; return; } if (c.pc != 0x00406DECu) [[unlikely]] return; }
L_00406DEC:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00406E04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_00406E10; } }
L_00406E04:
    c.r[2].d[0] = c.r[17].sd[0] < 54ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00406DD0u | kUnwind; return; } goto L_00406DD0; }
L_00406E10:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00406E14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[17], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 31296u);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[2], 0u + 3u);
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_00406ED8; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_00406E6C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);  goto L_00406E64; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);  goto L_00406E5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_00406F40; } }
L_00406E5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 1304u), c.r[3].w[0]);  if (t) { goto L_00406F3C; } }
L_00406E64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 1304u), c.r[19].w[0]);  if (t) { goto L_00406F3C; } }
L_00406E6C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406E78u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00406E78u) [[unlikely]] return; }
L_00406E78:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00406E8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 176u)));  if (t) { goto L_00406EA0; } }
L_00406E8C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00406EA0; }
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_00406EA0:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 1304u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00406F3C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00406F3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406ED0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00406ED0u) [[unlikely]] return; }
L_00406ED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00406F3C; } }
L_00406ED8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406EE4u); set32(c.r[6], 0u + 34u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00406EE4u) [[unlikely]] return; }
L_00406EE4:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00406EF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 144u)));  if (t) { goto L_00406F0C; } }
L_00406EF8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00406F0C; }
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_00406F0C:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 1304u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00406F3C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00406F3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406F3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x00406F3Cu) [[unlikely]] return; }
L_00406F3C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00406F40:
    c.r[2].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406E14u | kUnwind; return; } goto L_00406E14; } }
    st32((c.r[16].w[0] + 1300u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004071A8; } }
L_00406F58:
    mmi::div(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 1304u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_004071A8; }
    set32(c.r[3], c.r[17].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31328u);
    set32(c.r[18], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406F94u); set32(c.r[5], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_00B9(c, 290u, depth + 1u); else { c.pc = 0x00406BD0u; return; } if (c.pc != 0x00406F94u) [[unlikely]] return; }
L_00406F94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1300u)));
    set32(c.r[3], c.r[3].w[0] + 31328u);
    set32(c.r[5], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    st32((c.r[4].w[0] + 160u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 13;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_004070CC; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));  goto L_00407098; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));  goto L_00407060; }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));  goto L_0040702C; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));  goto L_00406FFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));  if (t) { goto L_0040719C; } }
L_00406FFC:
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 156u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 148u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 152u), c.r[3].w[0]);  if (t) { goto L_00407198; } }
L_0040702C:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 156u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 148u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 152u), c.r[3].w[0]);  if (t) { goto L_00407198; } }
L_00407060:
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 156u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 148u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 152u), c.r[3].w[0]);  if (t) { goto L_00407198; } }
L_00407098:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 156u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 148u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 152u), c.r[3].w[0]);  if (t) { goto L_00407198; } }
L_004070CC:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));  goto L_00407168; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));  goto L_00407130; }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));  goto L_00407100; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_004070FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00407198; } }
L_004070FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));
    c.budget -= 1;
L_00407100:
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 156u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 148u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 152u), c.r[3].w[0]);  if (t) { goto L_00407198; } }
L_00407130:
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 156u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 148u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 152u), c.r[3].w[0]);  if (t) { goto L_00407198; } }
L_00407168:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 156u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 148u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 12;
L_00407198:
    set32(c.r[2], ld32((c.r[16].w[0] + 1300u)));
    c.budget -= 1;
L_0040719C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 1300u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_004071A8:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 9u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00406F58u | kUnwind; return; } goto L_00406F58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004071BCu); set32(c.r[4], 0u + 548u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x004071BCu) [[unlikely]] return; }
L_004071BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 1340u), c.r[2].w[0]);  goto L_00407208; }
    set32(c.r[3], 0u + 59u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 8u), 0ull);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), 0ull);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), 0ull);
    set32(c.r[6], c.r[6].w[0] + 31760u);
    set32(c.r[9], ld32((c.r[16].w[0] + 1300u)));
    set32(c.r[7], c.r[7].w[0] + 31780u);
    set32(c.r[8], c.r[16].w[0] + 148u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407204u); set32(c.r[11], 0u - 1u);  if (depth < kMaxDepth) unit_00B9(c, 89u, depth + 1u); else { c.pc = 0x00404DA0u; return; } if (c.pc != 0x00407204u) [[unlikely]] return; }
L_00407204:
    st32((c.r[16].w[0] + 1340u), c.r[2].w[0]);
    c.budget -= 1;
L_00407208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407210u); set32(c.r[4], 0u + 184u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00407210u) [[unlikely]] return; }
L_00407210:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 1336u), c.r[2].w[0]);  goto L_00407230; }
    set32(c.r[7], ld32((c.r[16].w[0] + 1300u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040722Cu); set32(c.r[6], c.r[16].w[0] + 148u);  if (depth < kMaxDepth) unit_00B8(c, 522u, depth + 1u); else { c.pc = 0x00403E10u; return; } if (c.pc != 0x0040722Cu) [[unlikely]] return; }
L_0040722C:
    st32((c.r[16].w[0] + 1336u), c.r[2].w[0]);
    c.budget -= 1;
L_00407230:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 1340u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407244u); c.r[6].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 435u, depth + 1u); else { c.pc = 0x001CFFF0u; return; } if (c.pc != 0x00407244u) [[unlikely]] return; }
L_00407244:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004072E4; } }
L_00407254:
    set32(c.r[4], ld32((c.r[16].w[0] + 1336u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407264u); c.r[5].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_002B(c, 395u, depth + 1u); else { c.pc = 0x001CF8D0u; return; } if (c.pc != 0x00407264u) [[unlikely]] return; }
L_00407264:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407274u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x00407274u) [[unlikely]] return; }
L_00407274:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00407288; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 112u)));  if (t) { goto L_0040729C; } }
L_00407288:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0040729C; }
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_0040729C:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.r[17].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_004072C4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_004072C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004072C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x004072C4u) [[unlikely]] return; }
L_004072C4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004072DC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_004072DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004072E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x004072E4u) [[unlikely]] return; }
L_004072E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_004072E8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00407300:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 30u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004074D0; } }
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004074B0; }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 1336u)));  goto L_0040748C; }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 20u);  goto L_00407460; }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00407444; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 1340u)));  goto L_00407418; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u + 10u);  goto L_0040737C; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[17].w[0] + 1344u), 0u);  goto L_00407378; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004074F8; } }
L_00407378:
    set32(c.r[5], 0u + 10u);
    c.budget -= 1;
L_0040737C:
    st32((c.r[17].w[0] + 88u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_004073EC; } }
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[17].w[0] + 1344u)));  goto L_004073F0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u - 16385u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[16], 0u + 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 52u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004073C8u); st32((c.r[29].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x004073C8u) [[unlikely]] return; }
L_004073C8:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004073EC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_004073EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004073ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x004073ECu) [[unlikely]] return; }
L_004073EC:
    set32(c.r[7], ld32((c.r[17].w[0] + 1344u)));
    c.budget -= 1;
L_004073F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 1340u)));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407408u); c.r[6].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002C(c, 9u, depth + 1u); else { c.pc = 0x001D00F0u; return; } if (c.pc != 0x00407408u) [[unlikely]] return; }
L_00407408:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004074F4; } }
L_00407418:
    set32(c.r[2], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[17].w[0] + 1344u), c.r[2].w[0]);  if (t) { goto L_004074D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040742Cu);  if (depth < kMaxDepth) unit_00B9(c, 275u, depth + 1u); else { c.pc = 0x00406AE0u; return; } if (c.pc != 0x0040742Cu) [[unlikely]] return; }
L_0040742C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407434u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 284u, depth + 1u); else { c.pc = 0x00406B70u; return; } if (c.pc != 0x00407434u) [[unlikely]] return; }
L_00407434:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_00407444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040744Cu);  if (depth < kMaxDepth) unit_00B9(c, 287u, depth + 1u); else { c.pc = 0x00406BA0u; return; } if (c.pc != 0x0040744Cu) [[unlikely]] return; }
L_0040744C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004074F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040745Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 275u, depth + 1u); else { c.pc = 0x00406AE0u; return; } if (c.pc != 0x0040745Cu) [[unlikely]] return; }
L_0040745C:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_00407460:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[17].w[0] + 1344u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 1336u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040747Cu); c.r[6].d[0] = c.r[2].d[0] | 4097ull;  if (depth < kMaxDepth) unit_002C(c, 5u, depth + 1u); else { c.pc = 0x001D0060u; return; } if (c.pc != 0x0040747Cu) [[unlikely]] return; }
L_0040747C:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_004074F4; } }
L_0040748C:
    set32(c.r[2], ld32((c.r[2].w[0] + 128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407498u); st32((c.r[17].w[0] + 1344u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B9(c, 275u, depth + 1u); else { c.pc = 0x00406AE0u; return; } if (c.pc != 0x00407498u) [[unlikely]] return; }
L_00407498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004074A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 284u, depth + 1u); else { c.pc = 0x00406B70u; return; } if (c.pc != 0x004074A0u) [[unlikely]] return; }
L_004074A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_004074B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004074B8u);  if (depth < kMaxDepth) unit_00B9(c, 287u, depth + 1u); else { c.pc = 0x00406BA0u; return; } if (c.pc != 0x004074B8u) [[unlikely]] return; }
L_004074B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004074F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004074C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 275u, depth + 1u); else { c.pc = 0x00406AE0u; return; } if (c.pc != 0x004074C8u) [[unlikely]] return; }
L_004074C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407378u | kUnwind; return; } goto L_00407378; } }
L_004074D0:
    set32(c.r[2], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004074DCu); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x004074DCu) [[unlikely]] return; }
L_004074DC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004074E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B7(c, 79u, depth + 1u); else { c.pc = 0x003FCC30u; return; } if (c.pc != 0x004074E8u) [[unlikely]] return; }
L_004074E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004074F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x004074F4u) [[unlikely]] return; }
L_004074F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004074F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00407510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407524u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 249u, depth + 1u); else { c.pc = 0x003FF310u; return; } if (c.pc != 0x00407524u) [[unlikely]] return; }
L_00407524:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[16].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] + 14336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407538u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 44u, depth + 1u); else { c.pc = 0x00210980u; return; } if (c.pc != 0x00407538u) [[unlikely]] return; }
L_00407538:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 528u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407548u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 216u, depth + 1u); else { c.pc = 0x0020DFF0u; return; } if (c.pc != 0x00407548u) [[unlikely]] return; }
L_00407548:
    st32((c.r[16].w[0] + 152u), 0u);
    set32(c.r[4], 0u + 4109u);
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 688u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407564u); st32((c.r[16].w[0] + 160u), 0u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x00407564u) [[unlikely]] return; }
L_00407564:
    st32((c.r[16].w[0] + 692u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 696u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 700u), 0u);
    st32((c.r[16].w[0] + 704u), 0u);
    st32((c.r[16].w[0] + 708u), 0u);
    st32((c.r[16].w[0] + 712u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00407590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004076A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 14336u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 152u)));  goto L_004075E4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 156u), 0u);  goto L_004075E0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004075DCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004075DCu) [[unlikely]] return; }
L_004075DC:
    st32((c.r[17].w[0] + 156u), 0u);
    c.budget -= 1;
L_004075E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 1;
L_004075E4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  goto L_00407604; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004075FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004075FCu) [[unlikely]] return; }
L_004075FC:
    st32((c.r[17].w[0] + 152u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 2;
L_00407604:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 688u)));  goto L_00407624; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040761Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040761Cu) [[unlikely]] return; }
L_0040761C:
    st32((c.r[17].w[0] + 148u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 688u)));
    c.budget -= 2;
L_00407624:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 160u)));  goto L_00407644; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040763Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040763Cu) [[unlikely]] return; }
L_0040763C:
    st32((c.r[17].w[0] + 688u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 2;
L_00407644:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 528u);  goto L_0040765C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407654u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 343u, depth + 1u); else { c.pc = 0x001B2760u; return; } if (c.pc != 0x00407654u) [[unlikely]] return; }
L_00407654:
    st32((c.r[17].w[0] + 160u), 0u);
    set32(c.r[4], c.r[17].w[0] + 528u);
    c.budget -= 2;
L_0040765C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407664u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003B(c, 219u, depth + 1u); else { c.pc = 0x0020E110u; return; } if (c.pc != 0x00407664u) [[unlikely]] return; }
L_00407664:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407670u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003C(c, 46u, depth + 1u); else { c.pc = 0x002109D0u; return; } if (c.pc != 0x00407670u) [[unlikely]] return; }
L_00407670:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00407694; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13568u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407690u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x00407690u) [[unlikely]] return; }
L_00407690:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00407694:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004076AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004076A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x004076A8u) [[unlikely]] return; }
L_004076A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004076AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004076C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004076D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 100u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004076F8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0039(c, 356u, depth + 1u); else { c.pc = 0x00207D10u; return; } if (c.pc != 0x004076F8u) [[unlikely]] return; }
L_004076F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407700u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x00407700u) [[unlikely]] return; }
L_00407700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407708u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x00407708u) [[unlikely]] return; }
L_00407708:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 32u);  goto L_00407724; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407720u); set32(c.r[4], c.r[16].w[0] + 528u);  if (depth < kMaxDepth) unit_003B(c, 248u, depth + 1u); else { c.pc = 0x0020E740u; return; } if (c.pc != 0x00407720u) [[unlikely]] return; }
L_00407720:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_00407724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040772Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0039(c, 362u, depth + 1u); else { c.pc = 0x00207E10u; return; } if (c.pc != 0x0040772Cu) [[unlikely]] return; }
L_0040772C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00407740:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00407774; }
    set32(c.r[16], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 1;
L_00407774:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 696u)));
    c.budget -= 2;
L_0040777C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 708u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 704u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);  if (t) { goto L_004077C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[3], ld32((c.r[18].w[0] + 692u)));  if (t) { goto L_004077B0; } }
    c.r[2].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  goto L_004077B8; }
L_004077B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004077C0; } }
L_004077B8:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 2;
L_004077C0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);  goto L_004077EC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 688u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_004077E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 60u)));  if (t) { goto L_004077E8; } }
L_004077E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    c.budget -= 1;
L_004077EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 17752ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407804u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 136u, depth + 1u); else { c.pc = 0x003C5620u; return; } if (c.pc != 0x00407804u) [[unlikely]] return; }
L_00407804:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 696u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040777Cu | kUnwind; return; } goto L_0040777C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00407830:
    set32(c.r[3], ld32((c.r[4].w[0] + 708u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { st32((c.r[4].w[0] + 708u), c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00407740u | kUnwind; return; } goto L_00407740; }
L_00407850:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00407880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[21].w[0] + 708u)));  if (t) { goto L_0040788C; } }
L_00407880:
    set32(c.r[3], ld32((c.r[21].w[0] + 708u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[17], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 3;
L_0040788C:
    set32(c.r[16], c.r[6].w[0] << 2);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 704u)));
    c.budget -= 3;
L_00407898:
    set32(c.r[18], c.r[20].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[19], c.r[17].w[0] + c.r[20].w[0]);  if (t) { goto L_004078EC; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 692u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004078B8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 243u, depth + 1u); else { c.pc = 0x0025E6F0u; return; } if (c.pc != 0x004078B8u) [[unlikely]] return; }
L_004078B8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 692u)));  goto L_004078F0; }
    set32(c.r[5], ld32((c.r[21].w[0] + 692u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x100D0000u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004078E4u); c.r[6].d[0] = c.r[2].d[0] | 4098ull;  if (depth < kMaxDepth) unit_002C(c, 13u, depth + 1u); else { c.pc = 0x001D0190u; return; } if (c.pc != 0x004078E4u) [[unlikely]] return; }
L_004078E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_00407900; } }
L_004078EC:
    set32(c.r[4], ld32((c.r[21].w[0] + 692u)));
    c.budget -= 1;
L_004078F0:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004078FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004F(c, 276u, depth + 1u); else { c.pc = 0x0025EE30u; return; } if (c.pc != 0x004078FCu) [[unlikely]] return; }
L_004078FC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00407900:
    c.r[3].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 704u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00407898u | kUnwind; return; } goto L_00407898; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00407930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 31808u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 700u)));
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407960u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0022(c, 7u, depth + 1u); else { c.pc = 0x001A8110u; return; } if (c.pc != 0x00407960u) [[unlikely]] return; }
L_00407960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407968u); set32(c.r[4], c.r[16].w[0] + 528u);  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x00407968u) [[unlikely]] return; }
L_00407968:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_00407978; }
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_00407978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407980u); set32(c.r[4], c.r[16].w[0] + 528u);  if (depth < kMaxDepth) unit_003B(c, 314u, depth + 1u); else { c.pc = 0x0020FC40u; return; } if (c.pc != 0x00407980u) [[unlikely]] return; }
L_00407980:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004079A8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_004079A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004079A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x004079A4u) [[unlikely]] return; }
L_004079A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004079A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004079C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 10;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 152u)));  goto L_00407BDC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 148u)));  goto L_00407AC8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  goto L_00407A84; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 360u);  goto L_00407A34; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u - 1u);  goto L_00407A20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00407C84; } }
L_00407A1C:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_00407A20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407A2Cu); st32((c.r[16].w[0] + 88u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00407A2Cu) [[unlikely]] return; }
L_00407A2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00407C80; } }
L_00407A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407A3Cu);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00407A3Cu) [[unlikely]] return; }
L_00407A3C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 148u), c.r[4].w[0]);  goto L_00407A74; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 31816u);
    set32(c.r[7], c.r[7].w[0] + 31834u);
    set32(c.r[8], 0u + 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407A6Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 368u, depth + 1u); else { c.pc = 0x00207EF0u; return; } if (c.pc != 0x00407A6Cu) [[unlikely]] return; }
L_00407A6C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 148u), c.r[4].w[0]);
    c.budget -= 2;
L_00407A74:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 4;
L_00407A84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00407C80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407A1Cu | kUnwind; return; } goto L_00407A1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407A1Cu | kUnwind; return; } goto L_00407A1C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 4;
L_00407AC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407ADCu); c.r[5].d[0] = c.r[2].d[0] | 17473ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x00407ADCu) [[unlikely]] return; }
L_00407ADC:
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41420000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407AF4u); c.r[5].d[0] = c.r[2].d[0] | 21075ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x00407AF4u) [[unlikely]] return; }
L_00407AF4:
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x48540000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B0Cu); c.r[5].d[0] = c.r[2].d[0] | 17752ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x00407B0Cu) [[unlikely]] return; }
L_00407B0C:
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47540000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B28u); c.r[5].d[0] = c.r[2].d[0] | 20545ull;  if (depth < kMaxDepth) unit_0038(c, 282u, depth + 1u); else { c.pc = 0x00202D40u; return; } if (c.pc != 0x00407B28u) [[unlikely]] return; }
L_00407B28:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B34u); set32(c.r[4], 0u + 432u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00407B34u) [[unlikely]] return; }
L_00407B34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  goto L_00407B60; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 31816u);
    set32(c.r[7], c.r[7].w[0] + 31834u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B5Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 289u, depth + 1u); else { c.pc = 0x00207460u; return; } if (c.pc != 0x00407B5Cu) [[unlikely]] return; }
L_00407B5C:
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 1;
L_00407B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B68u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x00407B68u) [[unlikely]] return; }
L_00407B68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 688u), c.r[2].w[0]);  goto L_00407B84; }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B80u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 118u, depth + 1u); else { c.pc = 0x002113E0u; return; } if (c.pc != 0x00407B80u) [[unlikely]] return; }
L_00407B80:
    st32((c.r[16].w[0] + 688u), c.r[2].w[0]);
    c.budget -= 1;
L_00407B84:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 340u, depth + 1u); else { c.pc = 0x001B2710u; return; } if (c.pc != 0x00407B9Cu) [[unlikely]] return; }
L_00407B9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_00407BBC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407BB4u); set32(c.r[5], c.r[5].w[0] + 31854u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x00407BB4u) [[unlikely]] return; }
L_00407BB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407A1Cu | kUnwind; return; } goto L_00407A1C; } }
L_00407BBC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407BCCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x00407BCCu) [[unlikely]] return; }
L_00407BCC:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 4;
L_00407BDC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00407C80; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407A1Cu | kUnwind; return; } goto L_00407A1C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407A1Cu | kUnwind; return; } goto L_00407A1C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 688u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00407C80; } }
    c.r[2].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407A1Cu | kUnwind; return; } goto L_00407A1C; } }
    c.r[2].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407A1Cu | kUnwind; return; } goto L_00407A1C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[4], c.r[16].w[0] + 528u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407C4Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x00407C4Cu) [[unlikely]] return; }
L_00407C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407C54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 363u, depth + 1u); else { c.pc = 0x00407930u; return; } if (c.pc != 0x00407C54u) [[unlikely]] return; }
L_00407C54:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00407C78; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00407C70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00407C70u) [[unlikely]] return; }
L_00407C70:
    st32((c.r[16].w[0] + 148u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00407C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407C80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x00407C80u) [[unlikely]] return; }
L_00407C80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00407C84:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00407CA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 51u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00BA(c, 68u, depth); } }
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 50u);  [[clang::musttail]] return unit_00BA(c, 66u, depth); }
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  [[clang::musttail]] return unit_00BA(c, 64u, depth); }
    set32(c.r[3], 0u + 23u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  [[clang::musttail]] return unit_00BA(c, 49u, depth); }
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  [[clang::musttail]] return unit_00BA(c, 42u, depth); }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 261u);  [[clang::musttail]] return unit_00BA(c, 38u, depth); }
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 20u);  [[clang::musttail]] return unit_00BA(c, 34u, depth); }
    set32(c.r[3], 0u + 19u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  [[clang::musttail]] return unit_00BA(c, 32u, depth); }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  [[clang::musttail]] return unit_00BA(c, 17u, depth); }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  [[clang::musttail]] return unit_00BA(c, 10u, depth); }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 261u);  [[clang::musttail]] return unit_00BA(c, 6u, depth); }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 15u);  goto L_00407FE4; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 10u);  goto L_00407F44; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00407F20; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00407F00; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[6].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 156u)));  goto L_00407E60; }
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { st32((c.r[16].w[0] + 704u), 0u);  goto L_00407D84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { [[clang::musttail]] return unit_00BA(c, 74u, depth); } }
L_00407D84:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 692u)));
    c.budget -= 2;
L_00407D8C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407D98u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 243u, depth + 1u); else { c.pc = 0x0025E6F0u; return; } if (c.pc != 0x00407D98u) [[unlikely]] return; }
L_00407D98:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00407DB0; }
    set32(c.r[2], c.r[17].w[0] + 1u);
    st32((c.r[16].w[0] + 704u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_00407DB0:
    c.r[2].d[0] = c.r[17].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 692u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00407D8Cu | kUnwind; return; } goto L_00407D8C; }
    st32((c.r[16].w[0] + 696u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 704u)));
    set32(c.r[3], c.r[2].w[0] + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00407DD8; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00407DD8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; st32((c.r[16].w[0] + 700u), c.r[2].w[0]);  if (t) { goto L_00407DE8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 700u), c.r[2].w[0]);
    c.budget -= 2;
L_00407DE8:
    st32((c.r[16].w[0] + 708u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407DFCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 347u, depth + 1u); else { c.pc = 0x00207BE0u; return; } if (c.pc != 0x00407DFCu) [[unlikely]] return; }
L_00407DFC:
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[2].w[0] + 280u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[3], 0u + 16u);
    st32((c.r[2].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st32((c.r[3].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[3].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 696u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407E50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 358u, depth + 1u); else { c.pc = 0x00407850u; return; } if (c.pc != 0x00407E50u) [[unlikely]] return; }
L_00407E50:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BA(c, 73u, depth); } }
L_00407E60:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 156u)));  goto L_00407E80; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00407E7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00407E7Cu) [[unlikely]] return; }
L_00407E7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_00407E80:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 156u)));  goto L_00407EA4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 21u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00407EA0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00407EA0u) [[unlikely]] return; }
L_00407EA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_00407EA4:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 156u)));  goto L_00407EC8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 22u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00407EC4u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00407EC4u) [[unlikely]] return; }
L_00407EC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_00407EC8:
    set32(c.r[4], ld32((c.r[2].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00407EEC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 23u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00407EE8u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00407EE8u) [[unlikely]] return; }
L_00407EE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00407EEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407EF4u);  if (depth < kMaxDepth) unit_00B9(c, 354u, depth + 1u); else { c.pc = 0x00407740u; return; } if (c.pc != 0x00407EF4u) [[unlikely]] return; }
L_00407EF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
L_00407F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407F08u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00407F08u) [[unlikely]] return; }
L_00407F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407F10u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 84u, depth + 1u); else { c.pc = 0x003FCCA0u; return; } if (c.pc != 0x00407F10u) [[unlikely]] return; }
L_00407F10:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00BA(c, 73u, depth); } }
L_00407F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407F28u);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x00407F28u) [[unlikely]] return; }
L_00407F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407F30u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 86u, depth + 1u); else { c.pc = 0x003FCCD0u; return; } if (c.pc != 0x00407F30u) [[unlikely]] return; }
L_00407F30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00BA(c, 73u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407F40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 363u, depth + 1u); else { c.pc = 0x00407930u; return; } if (c.pc != 0x00407F40u) [[unlikely]] return; }
L_00407F40:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_00407F44:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], 0u + 16u);  goto L_00407FB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407F6Cu); c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00407F6Cu) [[unlikely]] return; }
L_00407F6C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull | 32768ull;  goto L_00407F8C; }
    set32(c.r[4], 0u + 6u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407F84u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00407F84u) [[unlikely]] return; }
L_00407F84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00407FE0; } }
L_00407F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407F94u); c.r[4].d[0] = c.r[2].d[0] << 16;  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00407F94u) [[unlikely]] return; }
L_00407F94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00407FB4; } }
    set32(c.r[4], 0u + 6u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407FACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00407FACu) [[unlikely]] return; }
L_00407FAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00BA(c, 33u, depth); } }
L_00407FB4:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_00407FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407FC0u);  if (depth < kMaxDepth) unit_002B(c, 331u, depth + 1u); else { c.pc = 0x001CEDD0u; return; } if (c.pc != 0x00407FC0u) [[unlikely]] return; }
L_00407FC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00BA(c, 73u, depth); } }
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407FD8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x00407FD8u) [[unlikely]] return; }
L_00407FD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00BA(c, 65u, depth); } }
L_00407FE0:
    set32(c.r[2], 0u + 15u);
    c.budget -= 1;
L_00407FE4:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[16].w[0] + 696u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_00BA(c, 2u, depth); } }
    set32(c.r[2], ld32((c.r[16].w[0] + 700u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 2;
    [[clang::musttail]] return unit_00BA(c, 1u, depth);
}

}
