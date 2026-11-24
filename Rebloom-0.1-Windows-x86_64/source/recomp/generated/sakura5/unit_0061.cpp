#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0061[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0,
    0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0,
    66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69,
    0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    85, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 90, 0, 0, 0, 91, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0,
    104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0,
    0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0,
    0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0,
    0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158,
    0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183,
    0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207,
    0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0,
    218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 226,
    0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 230,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 273, 0, 0, 274, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0,
    0, 0, 0, 0, 279, 0, 280, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0,
    0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317,
    0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0,
    320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327,
    0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0,
    0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0,
    0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0,
    0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0061(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002A4000;
    case 2u: goto L_002A4030;
    case 3u: goto L_002A4040;
    case 4u: goto L_002A40A8;
    case 5u: goto L_002A40B0;
    case 6u: goto L_002A40F4;
    case 7u: goto L_002A4118;
    case 8u: goto L_002A41AC;
    case 9u: goto L_002A41B8;
    case 10u: goto L_002A4240;
    case 11u: goto L_002A4254;
    case 12u: goto L_002A4290;
    case 13u: goto L_002A43A0;
    case 14u: goto L_002A4410;
    case 15u: goto L_002A442C;
    case 16u: goto L_002A44A0;
    case 17u: goto L_002A44B4;
    case 18u: goto L_002A44F8;
    case 19u: goto L_002A4510;
    case 20u: goto L_002A4560;
    case 21u: goto L_002A4590;
    case 22u: goto L_002A45A8;
    case 23u: goto L_002A45C0;
    case 24u: goto L_002A45F4;
    case 25u: goto L_002A4620;
    case 26u: goto L_002A4640;
    case 27u: goto L_002A4650;
    case 28u: goto L_002A4694;
    case 29u: goto L_002A46B4;
    case 30u: goto L_002A46C8;
    case 31u: goto L_002A46E0;
    case 32u: goto L_002A4734;
    case 33u: goto L_002A4740;
    case 34u: goto L_002A4760;
    case 35u: goto L_002A47A8;
    case 36u: goto L_002A47BC;
    case 37u: goto L_002A47D8;
    case 38u: goto L_002A4800;
    case 39u: goto L_002A4858;
    case 40u: goto L_002A4864;
    case 41u: goto L_002A4884;
    case 42u: goto L_002A48B8;
    case 43u: goto L_002A48BC;
    case 44u: goto L_002A48D0;
    case 45u: goto L_002A48F0;
    case 46u: goto L_002A490C;
    case 47u: goto L_002A4928;
    case 48u: goto L_002A4950;
    case 49u: goto L_002A49C0;
    case 50u: goto L_002A49D0;
    case 51u: goto L_002A49EC;
    case 52u: goto L_002A4A00;
    case 53u: goto L_002A4A60;
    case 54u: goto L_002A4A8C;
    case 55u: goto L_002A4AA4;
    case 56u: goto L_002A4AD0;
    case 57u: goto L_002A4B34;
    case 58u: goto L_002A4B54;
    case 59u: goto L_002A4B78;
    case 60u: goto L_002A4BF8;
    case 61u: goto L_002A4C28;
    case 62u: goto L_002A4C48;
    case 63u: goto L_002A4C5C;
    case 64u: goto L_002A4C6C;
    case 65u: goto L_002A4C78;
    case 66u: goto L_002A4C80;
    case 67u: goto L_002A4C90;
    case 68u: goto L_002A4CD8;
    case 69u: goto L_002A4CFC;
    case 70u: goto L_002A4D0C;
    case 71u: goto L_002A4D30;
    case 72u: goto L_002A4DA0;
    case 73u: goto L_002A4DB8;
    case 74u: goto L_002A4DCC;
    case 75u: goto L_002A4E18;
    case 76u: goto L_002A4E24;
    case 77u: goto L_002A4EB4;
    case 78u: goto L_002A4ED8;
    case 79u: goto L_002A4F04;
    case 80u: goto L_002A4F20;
    case 81u: goto L_002A4F5C;
    case 82u: goto L_002A4F90;
    case 83u: goto L_002A4FD8;
    case 84u: goto L_002A4FEC;
    case 85u: goto L_002A5000;
    case 86u: goto L_002A5008;
    case 87u: goto L_002A5018;
    case 88u: goto L_002A5054;
    case 89u: goto L_002A5060;
    case 90u: goto L_002A5068;
    case 91u: goto L_002A5078;
    case 92u: goto L_002A5080;
    case 93u: goto L_002A50AC;
    case 94u: goto L_002A50C8;
    case 95u: goto L_002A50E8;
    case 96u: goto L_002A5108;
    case 97u: goto L_002A5130;
    case 98u: goto L_002A5150;
    case 99u: goto L_002A5290;
    case 100u: goto L_002A5310;
    case 101u: goto L_002A5350;
    case 102u: goto L_002A5360;
    case 103u: goto L_002A5378;
    case 104u: goto L_002A5380;
    case 105u: goto L_002A5398;
    case 106u: goto L_002A53A8;
    case 107u: goto L_002A53B8;
    case 108u: goto L_002A53DC;
    case 109u: goto L_002A53F4;
    case 110u: goto L_002A5400;
    case 111u: goto L_002A5428;
    case 112u: goto L_002A543C;
    case 113u: goto L_002A5450;
    case 114u: goto L_002A5464;
    case 115u: goto L_002A5470;
    case 116u: goto L_002A5484;
    case 117u: goto L_002A548C;
    case 118u: goto L_002A54C0;
    case 119u: goto L_002A54F0;
    case 120u: goto L_002A550C;
    case 121u: goto L_002A5520;
    case 122u: goto L_002A5548;
    case 123u: goto L_002A5560;
    case 124u: goto L_002A5570;
    case 125u: goto L_002A5598;
    case 126u: goto L_002A55A8;
    case 127u: goto L_002A55D0;
    case 128u: goto L_002A55F4;
    case 129u: goto L_002A561C;
    case 130u: goto L_002A5640;
    case 131u: goto L_002A5658;
    case 132u: goto L_002A5670;
    case 133u: goto L_002A56BC;
    case 134u: goto L_002A56D0;
    case 135u: goto L_002A56F4;
    case 136u: goto L_002A5708;
    case 137u: goto L_002A5720;
    case 138u: goto L_002A57A4;
    case 139u: goto L_002A5854;
    case 140u: goto L_002A5864;
    case 141u: goto L_002A5890;
    case 142u: goto L_002A58D0;
    case 143u: goto L_002A58DC;
    case 144u: goto L_002A58F4;
    case 145u: goto L_002A5910;
    case 146u: goto L_002A5920;
    case 147u: goto L_002A5930;
    case 148u: goto L_002A5968;
    case 149u: goto L_002A5984;
    case 150u: goto L_002A5994;
    case 151u: goto L_002A59A4;
    case 152u: goto L_002A59C0;
    case 153u: goto L_002A59D0;
    case 154u: goto L_002A5A00;
    case 155u: goto L_002A5A14;
    case 156u: goto L_002A5A3C;
    case 157u: goto L_002A5A60;
    case 158u: goto L_002A5A7C;
    case 159u: goto L_002A5A88;
    case 160u: goto L_002A5AD0;
    case 161u: goto L_002A5AF0;
    case 162u: goto L_002A5B30;
    case 163u: goto L_002A5B3C;
    case 164u: goto L_002A5B54;
    case 165u: goto L_002A5B70;
    case 166u: goto L_002A5B84;
    case 167u: goto L_002A5BB0;
    case 168u: goto L_002A5BD8;
    case 169u: goto L_002A5BFC;
    case 170u: goto L_002A5C30;
    case 171u: goto L_002A5C48;
    case 172u: goto L_002A5C6C;
    case 173u: goto L_002A5CA0;
    case 174u: goto L_002A5D00;
    case 175u: goto L_002A5D50;
    case 176u: goto L_002A5D58;
    case 177u: goto L_002A5D74;
    case 178u: goto L_002A5D84;
    case 179u: goto L_002A5D98;
    case 180u: goto L_002A5DB0;
    case 181u: goto L_002A5DC0;
    case 182u: goto L_002A5DCC;
    case 183u: goto L_002A5DFC;
    case 184u: goto L_002A5E18;
    case 185u: goto L_002A5E24;
    case 186u: goto L_002A5E38;
    case 187u: goto L_002A5E48;
    case 188u: goto L_002A5E60;
    case 189u: goto L_002A5E70;
    case 190u: goto L_002A5E88;
    case 191u: goto L_002A5E98;
    case 192u: goto L_002A5EAC;
    case 193u: goto L_002A5EC0;
    case 194u: goto L_002A5EF0;
    case 195u: goto L_002A5F08;
    case 196u: goto L_002A5F48;
    case 197u: goto L_002A5F50;
    case 198u: goto L_002A5F90;
    case 199u: goto L_002A5FB4;
    case 200u: goto L_002A5FE0;
    case 201u: goto L_002A6014;
    case 202u: goto L_002A6040;
    case 203u: goto L_002A6080;
    case 204u: goto L_002A60CC;
    case 205u: goto L_002A6140;
    case 206u: goto L_002A616C;
    case 207u: goto L_002A617C;
    case 208u: goto L_002A6190;
    case 209u: goto L_002A61A0;
    case 210u: goto L_002A61B0;
    case 211u: goto L_002A61DC;
    case 212u: goto L_002A6218;
    case 213u: goto L_002A6250;
    case 214u: goto L_002A6290;
    case 215u: goto L_002A62B0;
    case 216u: goto L_002A62E8;
    case 217u: goto L_002A62F4;
    case 218u: goto L_002A6300;
    case 219u: goto L_002A6318;
    case 220u: goto L_002A6330;
    case 221u: goto L_002A63AC;
    case 222u: goto L_002A63B4;
    case 223u: goto L_002A63C8;
    case 224u: goto L_002A63EC;
    case 225u: goto L_002A63F4;
    case 226u: goto L_002A63FC;
    case 227u: goto L_002A640C;
    case 228u: goto L_002A6464;
    case 229u: goto L_002A646C;
    case 230u: goto L_002A647C;
    case 231u: goto L_002A64CC;
    case 232u: goto L_002A64E0;
    case 233u: goto L_002A64F0;
    case 234u: goto L_002A6534;
    case 235u: goto L_002A6590;
    case 236u: goto L_002A65A4;
    case 237u: goto L_002A65AC;
    case 238u: goto L_002A65DC;
    case 239u: goto L_002A6614;
    case 240u: goto L_002A6628;
    case 241u: goto L_002A6640;
    case 242u: goto L_002A6654;
    case 243u: goto L_002A665C;
    case 244u: goto L_002A666C;
    case 245u: goto L_002A66C8;
    case 246u: goto L_002A66D8;
    case 247u: goto L_002A67A0;
    case 248u: goto L_002A67E0;
    case 249u: goto L_002A67F0;
    case 250u: goto L_002A6844;
    case 251u: goto L_002A6850;
    case 252u: goto L_002A686C;
    case 253u: goto L_002A68A0;
    case 254u: goto L_002A68EC;
    case 255u: goto L_002A6900;
    case 256u: goto L_002A69A8;
    case 257u: goto L_002A6A10;
    case 258u: goto L_002A6A68;
    case 259u: goto L_002A6A70;
    case 260u: goto L_002A6AD8;
    case 261u: goto L_002A6AE0;
    case 262u: goto L_002A6B3C;
    case 263u: goto L_002A6B48;
    case 264u: goto L_002A6BA8;
    case 265u: goto L_002A6BF4;
    case 266u: goto L_002A6BFC;
    case 267u: goto L_002A6C38;
    case 268u: goto L_002A6C48;
    case 269u: goto L_002A6CC0;
    case 270u: goto L_002A6D08;
    case 271u: goto L_002A6D14;
    case 272u: goto L_002A6D40;
    case 273u: goto L_002A6D88;
    case 274u: goto L_002A6D94;
    case 275u: goto L_002A6D98;
    case 276u: goto L_002A6DD4;
    case 277u: goto L_002A6E1C;
    case 278u: goto L_002A6E6C;
    case 279u: goto L_002A6E90;
    case 280u: goto L_002A6E98;
    case 281u: goto L_002A6EA0;
    case 282u: goto L_002A6EB4;
    case 283u: goto L_002A6ED4;
    case 284u: goto L_002A6EE0;
    case 285u: goto L_002A6EF0;
    case 286u: goto L_002A6F18;
    case 287u: goto L_002A6F38;
    case 288u: goto L_002A6F5C;
    case 289u: goto L_002A6FA0;
    case 290u: goto L_002A6FD8;
    case 291u: goto L_002A6FE0;
    case 292u: goto L_002A7038;
    case 293u: goto L_002A7098;
    case 294u: goto L_002A70C0;
    case 295u: goto L_002A70F0;
    case 296u: goto L_002A711C;
    case 297u: goto L_002A7174;
    case 298u: goto L_002A7184;
    case 299u: goto L_002A71C4;
    case 300u: goto L_002A7210;
    case 301u: goto L_002A7234;
    case 302u: goto L_002A7258;
    case 303u: goto L_002A7298;
    case 304u: goto L_002A72BC;
    case 305u: goto L_002A7358;
    case 306u: goto L_002A739C;
    case 307u: goto L_002A73D4;
    case 308u: goto L_002A740C;
    case 309u: goto L_002A7444;
    case 310u: goto L_002A747C;
    case 311u: goto L_002A7504;
    case 312u: goto L_002A751C;
    case 313u: goto L_002A7538;
    case 314u: goto L_002A754C;
    case 315u: goto L_002A7598;
    case 316u: goto L_002A75C0;
    case 317u: goto L_002A75FC;
    case 318u: goto L_002A7614;
    case 319u: goto L_002A766C;
    case 320u: goto L_002A7680;
    case 321u: goto L_002A76AC;
    case 322u: goto L_002A76C4;
    case 323u: goto L_002A7700;
    case 324u: goto L_002A7720;
    case 325u: goto L_002A774C;
    case 326u: goto L_002A775C;
    case 327u: goto L_002A777C;
    case 328u: goto L_002A778C;
    case 329u: goto L_002A77AC;
    case 330u: goto L_002A77BC;
    case 331u: goto L_002A77DC;
    case 332u: goto L_002A77EC;
    case 333u: goto L_002A780C;
    case 334u: goto L_002A781C;
    case 335u: goto L_002A7844;
    case 336u: goto L_002A7854;
    case 337u: goto L_002A78A0;
    case 338u: goto L_002A78BC;
    case 339u: goto L_002A7904;
    case 340u: goto L_002A7914;
    case 341u: goto L_002A7988;
    case 342u: goto L_002A79A0;
    case 343u: goto L_002A79D0;
    case 344u: goto L_002A7AA0;
    case 345u: goto L_002A7AC8;
    case 346u: goto L_002A7AF4;
    case 347u: goto L_002A7B28;
    case 348u: goto L_002A7B50;
    case 349u: goto L_002A7B6C;
    case 350u: goto L_002A7B88;
    case 351u: goto L_002A7BB0;
    case 352u: goto L_002A7BC0;
    case 353u: goto L_002A7BDC;
    case 354u: goto L_002A7BF4;
    case 355u: goto L_002A7C30;
    case 356u: goto L_002A7C4C;
    case 357u: goto L_002A7C6C;
    case 358u: goto L_002A7CA0;
    case 359u: goto L_002A7CD8;
    case 360u: goto L_002A7CF4;
    case 361u: goto L_002A7D10;
    case 362u: goto L_002A7D4C;
    case 363u: goto L_002A7D70;
    case 364u: goto L_002A7D8C;
    case 365u: goto L_002A7DC8;
    case 366u: goto L_002A7E14;
    case 367u: goto L_002A7E40;
    case 368u: goto L_002A7E70;
    case 369u: goto L_002A7EB0;
    case 370u: goto L_002A7ECC;
    case 371u: goto L_002A7F08;
    case 372u: goto L_002A7F1C;
    case 373u: goto L_002A7F80;
    case 374u: goto L_002A7FA8;
    case 375u: goto L_002A7FB8;
    default: bad_entry(c, 0x002A4000u); return;
    }
L_002A4000:
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[29].w[0] + 36u), 0u);  if (t) { goto L_002A4020; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A4024; } }
L_002A4020:
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.budget -= 1;
L_002A4024:
    st32((c.r[6].w[0] + 8u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4030u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0061(c, 3u, depth + 1u); else { c.pc = 0x002A4040u; return; } if (c.pc != 0x002A4030u) [[unlikely]] return; }
L_002A4030:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A4040:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002A4084; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  goto L_002A408C; }
L_002A4084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A4204; } }
L_002A408C:
    set32(c.r[6], c.r[17].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[23], ld32((c.r[3].w[0] + 960u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A40A8u); set32(c.r[30], c.r[2].w[0] + 452u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002A40A8u) [[unlikely]] return; }
L_002A40A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002A418C; } }
L_002A40B0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[19], c.r[30].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002A418C; }
    set32(c.r[4], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002A4188; } }
    set32(c.r[22], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[22].d[0] == c.r[2].d[0]) { set32(c.r[22], ld32((c.r[16].w[0] + 12u)));  goto L_002A4100; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A40F4u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002A40F4u) [[unlikely]] return; }
L_002A40F4:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_002A4188; } }
    set32(c.r[22], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_002A4100:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[22].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 16u)));  goto L_002A4124; }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4118u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_0061(c, 12u, depth + 1u); else { c.pc = 0x002A4290u; return; } if (c.pc != 0x002A4118u) [[unlikely]] return; }
L_002A4118:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_002A4188; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_002A4124:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002A4144; }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 1296u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A4188; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002A4144:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 1376u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A4188; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[21].w[0] << 2);  goto L_002A4174; }
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A4188; } }
    set32(c.r[2], c.r[21].w[0] << 2);
    c.budget -= 1;
L_002A4174:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[21].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { goto L_002A4198; } }
L_002A4188:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002A418C:
    c.r[2].d[0] = c.r[20].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A40B0u | kUnwind; return; } goto L_002A40B0; }
L_002A4198:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[21].d[0] + 0ull;  goto L_002A4204; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002A41F4; } }
L_002A41AC:
    set32(c.r[9], c.r[8].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[18].w[0] + c.r[2].w[0]);  if (t) { goto L_002A41E4; } }
L_002A41B8:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 148u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_002A41E4; }
    st32((c.r[7].w[0]), c.r[5].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 3;
L_002A41E4:
    c.r[2].d[0] = c.r[9].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[9].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A41B8u | kUnwind; return; } goto L_002A41B8; }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002A41F4:
    c.r[2].d[0] = c.r[8].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A41ACu | kUnwind; return; } goto L_002A41AC; }
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_002A4204:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002A4240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4254u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002A4254u) [[unlikely]] return; }
L_002A4254:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1000u);  goto L_002A4268; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A4278; } }
L_002A4268:
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_002A4278:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A4290:
    c.r[2].d[0] = c.r[4].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[4].sd[0] < 2000ll ? 1ull : 0ull;  goto L_002A42B4; }
    c.r[1].d[0] = c.r[4].sd[0] < 1101ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A42B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A4394; } }
L_002A42B0:
    c.r[2].d[0] = c.r[4].sd[0] < 2000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002A42B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[4].sd[0] < 3000ll ? 1ull : 0ull;  goto L_002A42D4; }
    c.r[1].d[0] = c.r[4].sd[0] < 2010ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A42D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A4394; } }
L_002A42D0:
    c.r[2].d[0] = c.r[4].sd[0] < 3000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002A42D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[4].sd[0] < 4000ll ? 1ull : 0ull;  goto L_002A42F4; }
    c.r[1].d[0] = c.r[4].sd[0] < 3005ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A42F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002A4394; } }
L_002A42F0:
    c.r[2].d[0] = c.r[4].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002A42F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[4].sd[0] < 5000ll ? 1ull : 0ull;  goto L_002A4314; }
    c.r[1].d[0] = c.r[4].sd[0] < 4023ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A4310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002A4394; } }
L_002A4310:
    c.r[2].d[0] = c.r[4].sd[0] < 5000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002A4314:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[4].sd[0] < 6000ll ? 1ull : 0ull;  goto L_002A4334; }
    c.r[1].d[0] = c.r[4].sd[0] < 5008ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A4330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002A4394; } }
L_002A4330:
    c.r[2].d[0] = c.r[4].sd[0] < 6000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002A4334:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[4].sd[0] < 7000ll ? 1ull : 0ull;  goto L_002A4354; }
    c.r[1].d[0] = c.r[4].sd[0] < 6003ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A4350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_002A4394; } }
L_002A4350:
    c.r[2].d[0] = c.r[4].sd[0] < 7000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002A4354:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[4].sd[0] < 8000ll ? 1ull : 0ull;  goto L_002A4374; }
    c.r[1].d[0] = c.r[4].sd[0] < 7015ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A4370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_002A4394; } }
L_002A4370:
    c.r[2].d[0] = c.r[4].sd[0] < 8000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002A4374:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_002A4394; }
    c.r[1].d[0] = c.r[4].sd[0] < 8001ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A4390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_002A4394; } }
L_002A4390:
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_002A4394:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A43A0:
    set32(c.r[3], c.r[4].w[0] - 3000u);
    set32(c.r[2], 0u + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A43E4; } }
    set32(c.r[3], c.r[4].w[0] - 10003u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A43D8; } }
    set32(c.r[3], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 16393ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A43D8; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002A43D8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002A43E4; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A43E4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002A4400; } }
    set32(c.r[3], c.r[4].w[0] - 20032u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002A4400; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A4400:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A4410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002A4424; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A4494; } }
L_002A4424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A442Cu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002A442Cu) [[unlikely]] return; }
L_002A442C:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002A4494; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002A4490; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002A4490; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002A4490; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 2u);  goto L_002A4494; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002A4484; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4484; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A4494; } }
L_002A4484:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4494; } }
L_002A4490:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A4494:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A44A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A44B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002A44B4u) [[unlikely]] return; }
L_002A44B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43410000u);
    set32(c.r[3], c.r[3].w[0] + 24864u);
    c.r[2].d[0] = c.r[2].d[0] | 16723ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[2], 0u + 7000u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[4], 0u + 272u);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A44F8u); st32((c.r[16].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x002A44F8u) [[unlikely]] return; }
L_002A44F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  goto L_002A4514; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4510u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 96u, depth + 1u); else { c.pc = 0x003C12F0u; return; } if (c.pc != 0x002A4510u) [[unlikely]] return; }
L_002A4510:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_002A4514:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002A4538; }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0EF00000u);
    c.r[3].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_002A4548; } }
L_002A4538:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_002A4548:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A4560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A45A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 24864u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4590u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002A4590u) [[unlikely]] return; }
L_002A4590:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002A45AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A45A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002A45A8u) [[unlikely]] return; }
L_002A45A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A45AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A45C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_002A45FC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 52u), 0u);  goto L_002A45F8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A45F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A45F4u) [[unlikely]] return; }
L_002A45F4:
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 1;
L_002A45F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_002A45FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A4620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A4640; }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4640u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 178u, depth + 1u); else { c.pc = 0x003C20D0u; return; } if (c.pc != 0x002A4640u) [[unlikely]] return; }
L_002A4640:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A4650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002A46D0; }
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A46CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4694u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_00A8(c, 232u, depth + 1u); else { c.pc = 0x003C2BB0u; return; } if (c.pc != 0x002A4694u) [[unlikely]] return; }
L_002A4694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A46CC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 60u)));  goto L_002A46B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A46B4u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_00A8(c, 189u, depth + 1u); else { c.pc = 0x003C22E0u; return; } if (c.pc != 0x002A46B4u) [[unlikely]] return; }
L_002A46B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_002A46B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A46CC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A46C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A46C8u) [[unlikely]] return; }
L_002A46C8:
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 1;
L_002A46CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002A46D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A46E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 13;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_002A47DC; }
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A47D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4734u);  if (depth < kMaxDepth) unit_0024(c, 200u, depth + 1u); else { c.pc = 0x001B16A0u; return; } if (c.pc != 0x002A4734u) [[unlikely]] return; }
L_002A4734:
    set32(c.r[4], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4740u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x002A4740u) [[unlikely]] return; }
L_002A4740:
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[20], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 6;
    if (c.r[20].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));  goto L_002A4774; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4760u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002A4760u) [[unlikely]] return; }
L_002A4760:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 5;
L_002A4774:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[4].w[0] + 80u));  goto L_002A4798; }
    c.f[1] = 0u;
    c.budget -= 1;
L_002A4798:
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    set32(c.r[4], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A47A8u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00A8(c, 148u, depth + 1u); else { c.pc = 0x003C1B70u; return; } if (c.pc != 0x002A47A8u) [[unlikely]] return; }
L_002A47A8:
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002A47D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A47BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002A47BCu) [[unlikely]] return; }
L_002A47BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
L_002A47D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A47D8u);  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x002A47D8u) [[unlikely]] return; }
L_002A47D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002A47DC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002A4800:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 14;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_002A492C; }
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A4928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4858u);  if (depth < kMaxDepth) unit_0024(c, 200u, depth + 1u); else { c.pc = 0x001B16A0u; return; } if (c.pc != 0x002A4858u) [[unlikely]] return; }
L_002A4858:
    set32(c.r[4], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4864u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x002A4864u) [[unlikely]] return; }
L_002A4864:
    set32(c.r[17], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[20], ld32((c.r[19].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 6;
    if (c.r[20].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 352u)));  goto L_002A4898; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4884u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002A4884u) [[unlikely]] return; }
L_002A4884:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 352u)));
    c.budget -= 5;
L_002A4898:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = ld32((c.r[3].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[19].w[0] + 52u)));  goto L_002A48C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A48B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002A48B8u) [[unlikely]] return; }
L_002A48B8:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.budget -= 1;
L_002A48BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 3;
L_002A48C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A48D0u);  if (depth < kMaxDepth) unit_00A8(c, 157u, depth + 1u); else { c.pc = 0x003C1D30u; return; } if (c.pc != 0x002A48D0u) [[unlikely]] return; }
L_002A48D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[19].w[0] + 72u)));  goto L_002A48FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A48F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002A48F0u) [[unlikely]] return; }
L_002A48F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    st32((c.r[2].w[0] + 68u), c.f[20]);
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    c.budget -= 3;
L_002A48FC:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002A4920; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A490Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002A490Cu) [[unlikely]] return; }
L_002A490C:
    set32(c.r[2], ld32((c.r[17].w[0] + 352u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
L_002A4920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4928u);  if (depth < kMaxDepth) unit_0024(c, 179u, depth + 1u); else { c.pc = 0x001B14B0u; return; } if (c.pc != 0x002A4928u) [[unlikely]] return; }
L_002A4928:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002A492C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A4950:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002A49C4; }
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[4].w[0] + 52u)));  goto L_002A49B8; }
    set32(c.r[6], ld32((c.r[28].w[0] - 30344u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[6].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[6].w[0] + 80u));  goto L_002A49A8; }
L_002A49A8:
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 56u), c.f[0]);  if (t) { goto L_002A49C0; } }
L_002A49B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A49C0u);  if (depth < kMaxDepth) unit_00A8(c, 168u, depth + 1u); else { c.pc = 0x003C1EF0u; return; } if (c.pc != 0x002A49C0u) [[unlikely]] return; }
L_002A49C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002A49C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A49D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A49ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002A49ECu) [[unlikely]] return; }
L_002A49EC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002A49F8; } }
    set32(c.r[5], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_002A49F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4A00u); set32(c.r[4], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002A4A00u) [[unlikely]] return; }
L_002A4A00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 24928u);
    set32(c.r[3], c.r[3].w[0] + 24984u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21843ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44700000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 72u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 84u), 0u);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 76u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A4A60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_002A4A94; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4A8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4A8Cu) [[unlikely]] return; }
L_002A4A8C:
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 2;
L_002A4A94:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_002A4AAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4AA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002A4AA4u) [[unlikely]] return; }
L_002A4AA4:
    st32((c.r[16].w[0] + 92u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 2;
L_002A4AAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A4AD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 14;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_002A510C; }
    set32(c.r[5], ld32((c.r[20].w[0] + 80u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A5108; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 10384u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0061[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A4B34:
    c.f[1] = ld32((c.r[20].w[0] + 88u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5108; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[20].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 2;
L_002A4B54:
    set32(c.r[16], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002A4B70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002A4BD8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002A4B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4B78u); set32(c.r[5], 0u + 54u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002A4B78u) [[unlikely]] return; }
L_002A4B78:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002A4B9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002A4BAC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_002A4B9C:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_002A4BAC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002A4BD8; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 9u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_002A4BCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002A4BCC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_002A4BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4BD8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A4BD8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 72u)));  goto L_002A4BEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 80u), 0u);  if (t) { goto L_002A50E8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_002A4BEC:
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4BF8u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_005C(c, 46u, depth + 1u); else { c.pc = 0x00290810u; return; } if (c.pc != 0x002A4BF8u) [[unlikely]] return; }
L_002A4BF8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[20].w[0] + 80u), 0u);  goto L_002A50E8; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], 0u + 88u);  goto L_002A4C20; }
    st32((c.r[20].w[0] + 80u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A50E8; } }
    set32(c.r[4], 0u + 88u);
    c.budget -= 1;
L_002A4C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4C28u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002A4C28u) [[unlikely]] return; }
L_002A4C28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 84u), c.r[2].w[0]);  goto L_002A4C4C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4C48u); set32(c.r[6], c.r[6].w[0] + 10360u);  if (depth < kMaxDepth) unit_0066(c, 348u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x002A4C48u) [[unlikely]] return; }
L_002A4C48:
    st32((c.r[20].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 1;
L_002A4C4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  goto L_002A50F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4C5Cu);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x002A4C5Cu) [[unlikely]] return; }
L_002A4C5C:
    set32(c.r[4], ld32((c.r[20].w[0] + 84u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4C6Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 34u, depth + 1u); else { c.pc = 0x002BC4C0u; return; } if (c.pc != 0x002A4C6Cu) [[unlikely]] return; }
L_002A4C6C:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 3;
L_002A4C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4C80u);  if (depth < kMaxDepth) unit_0052(c, 141u, depth + 1u); else { c.pc = 0x00269B70u; return; } if (c.pc != 0x002A4C80u) [[unlikely]] return; }
L_002A4C80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 84u)));  goto L_002A4C9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4C90u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 132u, depth + 1u); else { c.pc = 0x002A5670u; return; } if (c.pc != 0x002A4C90u) [[unlikely]] return; }
L_002A4C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A50E8; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 84u)));
    c.budget -= 1;
L_002A4C9C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A5108; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 592u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A5108; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 604u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A5108; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4CD8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 100u, depth + 1u); else { c.pc = 0x002A5310u; return; } if (c.pc != 0x002A4CD8u) [[unlikely]] return; }
L_002A4CD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A5108; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 80u)));  goto L_002A4D04; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4CFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4CFCu) [[unlikely]] return; }
L_002A4CFC:
    st32((c.r[20].w[0] + 84u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 2;
L_002A4D04:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 2;
L_002A4D0C:
    set32(c.r[16], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002A4D28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A4D90; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002A4D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4D30u); set32(c.r[5], 0u + 54u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002A4D30u) [[unlikely]] return; }
L_002A4D30:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002A4D54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002A4D64; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_002A4D54:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002A4D64:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002A4D90; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[3].w[0] + 4u)));  goto L_002A4D84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A4D84; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 1;
L_002A4D84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4D90; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A4D90:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  goto L_002A4DAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4DA0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 118u, depth + 1u); else { c.pc = 0x002A54C0u; return; } if (c.pc != 0x002A4DA0u) [[unlikely]] return; }
L_002A4DA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A50E8; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_002A4DAC:
    set32(c.r[6], 0u + 10500u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4DB8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 358u, depth + 1u); else { c.pc = 0x002A7CA0u; return; } if (c.pc != 0x002A4DB8u) [[unlikely]] return; }
L_002A4DB8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], 0u + 2u);  goto L_002A4DD8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4DCCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 118u, depth + 1u); else { c.pc = 0x002A54C0u; return; } if (c.pc != 0x002A4DCCu) [[unlikely]] return; }
L_002A4DCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A50E8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002A4DD8:
    st32((c.r[17].w[0] + 344u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 108u)));
    c.budget -= 5;
    { const bool t = c.r[18].sd[0] > 0; set32(c.r[19], 0u + 10u);  if (t) { goto L_002A4DF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A4E78; } }
L_002A4DF4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] > 0; set32(c.r[16], c.r[2].w[0] + 76u);  if (t) { goto L_002A4E10; } }
    c.f[1] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 92u));  if (t) { goto L_002A4E68; } }
L_002A4E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4E18u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 110u)));  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002A4E18u) [[unlikely]] return; }
L_002A4E18:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4E24u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002A4E24u) [[unlikely]] return; }
L_002A4E24:
    c.f[1] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A4E4C; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002A4E4C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A4E64; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002A4E64:
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    c.budget -= 1;
L_002A4E68:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A4E78; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A4E78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  goto L_002A4E90; }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 9u);  if (t) { goto L_002A4F48; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_002A4E90:
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[6].d[0]) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_002A4EFC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4EB4u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4EB4u) [[unlikely]] return; }
L_002A4EB4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], 0u + 3u);  goto L_002A4F48; }
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4ED8u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4ED8u) [[unlikely]] return; }
L_002A4ED8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_002A4F48; }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4F48; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4F48; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002A4EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F04u);  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002A4F04u) [[unlikely]] return; }
L_002A4F04:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_002A4F48; }
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F20u); set32(c.r[4], ld32((c.r[2].w[0] + 148u)));  if (depth < kMaxDepth) unit_00C1(c, 91u, depth + 1u); else { c.pc = 0x00424AE0u; return; } if (c.pc != 0x002A4F20u) [[unlikely]] return; }
L_002A4F20:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[5], 0u + 1u);  goto L_002A4F48; }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 11u);  if (t) { goto L_002A4F48; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4F48; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002A4F48:
    set32(c.r[25], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F5Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4F5Cu) [[unlikely]] return; }
L_002A4F5C:
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[25], ld32((c.r[20].w[0] + 52u)));  goto L_002A4FDC; }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] < 0;  if (t) { goto L_002A4FD8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[4], c.r[20].w[0] + 52u);
    set32(c.r[2], ld32((c.r[2].w[0] + 608u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F90u); set32(c.r[16], c.r[2].w[0] + 1444u);  if (depth < kMaxDepth) unit_0060(c, 389u, depth + 1u); else { c.pc = 0x002A3AA0u; return; } if (c.pc != 0x002A4F90u) [[unlikely]] return; }
L_002A4F90:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A4FD8; } }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002A4FD8; } }
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002A4FD8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002A4FC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 164u)));  if (t) { goto L_002A4FC8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A4FC8:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4FD8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 367u, depth + 1u); else { c.pc = 0x002C3F00u; return; } if (c.pc != 0x002A4FD8u) [[unlikely]] return; }
L_002A4FD8:
    set32(c.r[25], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 1;
L_002A4FDC:
    set32(c.r[4], c.r[20].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4FECu); set32(c.r[5], 0u + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4FECu) [[unlikely]] return; }
L_002A4FEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 5;
L_002A5000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5008u);  if (depth < kMaxDepth) unit_0052(c, 141u, depth + 1u); else { c.pc = 0x00269B70u; return; } if (c.pc != 0x002A5008u) [[unlikely]] return; }
L_002A5008:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[20].w[0] + 88u));  goto L_002A5024; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5018u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 132u, depth + 1u); else { c.pc = 0x002A5670u; return; } if (c.pc != 0x002A5018u) [[unlikely]] return; }
L_002A5018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A50E8; } }
    c.f[1] = ld32((c.r[20].w[0] + 88u));
    c.budget -= 1;
L_002A5024:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5108; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    set32(c.r[4], c.r[20].w[0] + 52u);
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5054u); set32(c.r[5], 0u + 93u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5054u) [[unlikely]] return; }
L_002A5054:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 3;
L_002A5060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5068u);  if (depth < kMaxDepth) unit_0052(c, 141u, depth + 1u); else { c.pc = 0x00269B70u; return; } if (c.pc != 0x002A5068u) [[unlikely]] return; }
L_002A5068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A5108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5078u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 132u, depth + 1u); else { c.pc = 0x002A5670u; return; } if (c.pc != 0x002A5078u) [[unlikely]] return; }
L_002A5078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A50E8; } }
L_002A5080:
    c.f[1] = ld32((c.r[20].w[0] + 88u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5108; } }
    set32(c.r[25], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[4], c.r[20].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A50ACu); set32(c.r[5], 0u + 95u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A50ACu) [[unlikely]] return; }
L_002A50AC:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 7;
L_002A50C8:
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A5108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A50E8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 118u, depth + 1u); else { c.pc = 0x002A54C0u; return; } if (c.pc != 0x002A50E8u) [[unlikely]] return; }
L_002A50E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A5108; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_002A50F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5108u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0061(c, 118u, depth + 1u); else { c.pc = 0x002A54C0u; return; } if (c.pc != 0x002A5108u) [[unlikely]] return; }
L_002A5108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002A510C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A5130:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A5150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002A5300; }
    set32(c.r[6], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[6], ld32((c.r[28].w[0] - 30344u)));  goto L_002A52CC; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[6], ld32((c.r[28].w[0] - 30344u)));  goto L_002A5298; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 76u)));  goto L_002A523C; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 72u)));  goto L_002A51A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A52FC; } }
L_002A51A4:
    set32(c.r[3], ld32((c.r[3].w[0] + 1180u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[5].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x44700000u);  goto L_002A51EC; }
    set32(c.r[3], ld32((c.r[28].w[0] - 30324u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002A51C4; }
    set32(c.r[3], ld32((c.r[3].w[0] + 88u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 2;
L_002A51C4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A51E8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A51E8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[4].w[0] + 88u));  goto L_002A51F4; }
L_002A51E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44700000u);
    c.budget -= 1;
L_002A51EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_002A52FC; } }
L_002A51F4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A52FC; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30344u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[6].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[6].w[0] + 80u));  goto L_002A522C; }
L_002A522C:
    c.f[0] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 88u), c.f[0]);  if (t) { goto L_002A52FC; } }
L_002A523C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A52FC; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30344u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[6].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[2] = ld32((c.r[6].w[0] + 80u));  goto L_002A526C; }
    c.f[2] = 0u;
    c.budget -= 1;
L_002A526C:
    c.f[1] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 88u), c.f[1]);  if (t) { goto L_002A52FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5290u);  if (depth < kMaxDepth) unit_0061(c, 132u, depth + 1u); else { c.pc = 0x002A5670u; return; } if (c.pc != 0x002A5290u) [[unlikely]] return; }
L_002A5290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A52FC; } }
L_002A5298:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[6].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[6].w[0] + 80u));  goto L_002A52BC; }
    c.f[1] = 0u;
    c.budget -= 1;
L_002A52BC:
    c.f[0] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 88u), c.f[0]);  if (t) { goto L_002A52FC; } }
L_002A52CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[6].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[6].w[0] + 80u));  goto L_002A52F0; }
    c.f[1] = 0u;
    c.budget -= 1;
L_002A52F0:
    c.f[0] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.budget -= 3;
L_002A52FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002A5300:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A5310:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5350u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 153u, depth + 1u); else { c.pc = 0x0029D800u; return; } if (c.pc != 0x002A5350u) [[unlikely]] return; }
L_002A5350:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5360u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 206u, depth + 1u); else { c.pc = 0x00171A20u; return; } if (c.pc != 0x002A5360u) [[unlikely]] return; }
L_002A5360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_002A5478; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5378u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002A5378u) [[unlikely]] return; }
L_002A5378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5380u); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002A5380u) [[unlikely]] return; }
L_002A5380:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 72u)));  goto L_002A53C0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5398u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002A5398u) [[unlikely]] return; }
L_002A5398:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A53A8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002A53A8u) [[unlikely]] return; }
L_002A53A8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A53B8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 56u, depth + 1u); else { c.pc = 0x00208610u; return; } if (c.pc != 0x002A53B8u) [[unlikely]] return; }
L_002A53B8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 2;
L_002A53C0:
    st32((c.r[2].w[0] + 592u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 592u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A5478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A53DCu); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x002A53DCu) [[unlikely]] return; }
L_002A53DC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 72u)));  goto L_002A5408; }
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A53F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002A53F4u) [[unlikely]] return; }
L_002A53F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5400u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 44u, depth + 1u); else { c.pc = 0x003C4650u; return; } if (c.pc != 0x002A5400u) [[unlikely]] return; }
L_002A5400:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 2;
L_002A5408:
    st32((c.r[2].w[0] + 604u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 604u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A5478; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5428u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002A5428u) [[unlikely]] return; }
L_002A5428:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 604u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A543Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 108u, depth + 1u); else { c.pc = 0x003C5140u; return; } if (c.pc != 0x002A543Cu) [[unlikely]] return; }
L_002A543C:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 592u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5450u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_003A(c, 317u, depth + 1u); else { c.pc = 0x0020B090u; return; } if (c.pc != 0x002A5450u) [[unlikely]] return; }
L_002A5450:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 604u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5464u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_003A(c, 323u, depth + 1u); else { c.pc = 0x0020B310u; return; } if (c.pc != 0x002A5464u) [[unlikely]] return; }
L_002A5464:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5470u); set32(c.r[4], c.r[4].w[0] + 10416u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002A5470u) [[unlikely]] return; }
L_002A5470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A54A0; } }
L_002A5478:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5484u); set32(c.r[4], c.r[4].w[0] + 10448u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002A5484u) [[unlikely]] return; }
L_002A5484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A548Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 124u, depth + 1u); else { c.pc = 0x002A5570u; return; } if (c.pc != 0x002A548Cu) [[unlikely]] return; }
L_002A548C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_002A54A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A54C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_002A5534; }
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A54F0u); set32(c.r[5], 0u + 10500u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x002A54F0u) [[unlikely]] return; }
L_002A54F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002A5524; }
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A550Cu); set32(c.r[5], 0u + 94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A550Cu) [[unlikely]] return; }
L_002A550C:
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5520u); set32(c.r[5], 0u + 95u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5520u) [[unlikely]] return; }
L_002A5520:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002A5524:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
L_002A5534:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002A5564; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5548u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 124u, depth + 1u); else { c.pc = 0x002A5570u; return; } if (c.pc != 0x002A5548u) [[unlikely]] return; }
L_002A5548:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 80u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44700000u);
    set32(c.r[4], c.r[4].w[0] + 10528u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5560u); st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002A5560u) [[unlikely]] return; }
L_002A5560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002A5564:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A5570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 604u)));
    c.budget -= 8;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  goto L_002A55DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5598u);  if (depth < kMaxDepth) unit_0062(c, 13u, depth + 1u); else { c.pc = 0x002A8120u; return; } if (c.pc != 0x002A5598u) [[unlikely]] return; }
L_002A5598:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 580u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A55A8u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_003A(c, 326u, depth + 1u); else { c.pc = 0x0020B3B0u; return; } if (c.pc != 0x002A55A8u) [[unlikely]] return; }
L_002A55A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 604u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A55D8; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 72u)));  goto L_002A55D4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A55D0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A55D0u) [[unlikely]] return; }
L_002A55D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_002A55D4:
    st32((c.r[3].w[0] + 604u), 0u);
    c.budget -= 1;
L_002A55D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_002A55DC:
    set32(c.r[3], ld32((c.r[4].w[0] + 592u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  goto L_002A5628; }
    set32(c.r[4], ld32((c.r[4].w[0] + 580u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A55F4u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_003A(c, 320u, depth + 1u); else { c.pc = 0x0020B250u; return; } if (c.pc != 0x002A55F4u) [[unlikely]] return; }
L_002A55F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 592u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A5624; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 72u)));  goto L_002A5620; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A561Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A561Cu) [[unlikely]] return; }
L_002A561C:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_002A5620:
    st32((c.r[3].w[0] + 592u), 0u);
    c.budget -= 1;
L_002A5624:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_002A5628:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  goto L_002A5648; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5640u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5640u) [[unlikely]] return; }
L_002A5640:
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 2;
L_002A5648:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002A5660; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5658u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002A5658u) [[unlikely]] return; }
L_002A5658:
    st32((c.r[16].w[0] + 92u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_002A5660:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A5670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A5708; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_002A570C; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002A5708; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002A56B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_002A56C4; } }
L_002A56B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A56BCu);  if (depth < kMaxDepth) unit_0061(c, 118u, depth + 1u); else { c.pc = 0x002A54C0u; return; } if (c.pc != 0x002A56BCu) [[unlikely]] return; }
L_002A56BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A5708; } }
L_002A56C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A56D0u); set32(c.r[5], 0u + 10500u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x002A8970u; return; } if (c.pc != 0x002A56D0u) [[unlikely]] return; }
L_002A56D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A5708; } }
    set32(c.r[4], c.r[2].w[0] + 32u);
    set32(c.r[5], 0u + 10u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A56F4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x002A56F4u) [[unlikely]] return; }
L_002A56F4:
    set32(c.r[25], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5708u); set32(c.r[5], 0u + 94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5708u) [[unlikely]] return; }
L_002A5708:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002A570C:
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A5720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[6], c.r[3].w[0] + 112u);
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[16].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A5870; } }
    set32(c.r[3], 0u + 95u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { st32((c.r[6].w[0] + 32u), 0u);  goto L_002A5870; }
    set32(c.r[3], 0u + 92u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_002A586C; }
    set32(c.r[3], 0u + 66u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A585C; } }
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_002A5844; }
    set32(c.r[3], 0u + 63u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 580u)));  goto L_002A578C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002A5874; } }
L_002A578C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002A579C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002A57F4; } }
L_002A579C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A57A4u); set32(c.r[5], 0u + 54u);  if (depth < kMaxDepth) unit_006D(c, 161u, depth + 1u); else { c.pc = 0x002D5D00u; return; } if (c.pc != 0x002A57A4u) [[unlikely]] return; }
L_002A57A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_002A57C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002A57D4; } }
L_002A57C4:
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_002A57D4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002A57F4; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 9u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_002A57EC; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A57EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A57F4; } }
L_002A57F4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[17].w[0] + 80u), 0u);  goto L_002A5870; }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);  goto L_002A581C; }
    st32((c.r[17].w[0] + 80u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A5870; } }
L_002A581C:
    set32(c.r[4], 0u + 3u);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 76u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    st32((c.r[17].w[0] + 80u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002A5870; } }
L_002A5844:
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5854u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0061(c, 132u, depth + 1u); else { c.pc = 0x002A5670u; return; } if (c.pc != 0x002A5854u) [[unlikely]] return; }
L_002A5854:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A5870; } }
L_002A585C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5864u);  if (depth < kMaxDepth) unit_0061(c, 132u, depth + 1u); else { c.pc = 0x002A5670u; return; } if (c.pc != 0x002A5864u) [[unlikely]] return; }
L_002A5864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A5870; } }
L_002A586C:
    st32((c.r[6].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 1;
L_002A5870:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002A5874:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A5890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A58F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 24928u);
    set32(c.r[2], c.r[2].w[0] + 24984u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A58D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002A58D0u) [[unlikely]] return; }
L_002A58D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A58DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002A58DCu) [[unlikely]] return; }
L_002A58DC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002A58F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A58F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002A58F4u) [[unlikely]] return; }
L_002A58F4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A58F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A5910:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5890u | kUnwind; return; } goto L_002A5890; }
L_002A5920:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5720u | kUnwind; return; } goto L_002A5720; }
L_002A5930:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 608u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30312u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 32u)));  if (t) { goto L_002A5970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5968u);  if (depth < kMaxDepth) unit_0061(c, 203u, depth + 1u); else { c.pc = 0x002A6080u; return; } if (c.pc != 0x002A5968u) [[unlikely]] return; }
L_002A5968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A5974; } }
L_002A5970:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A5974:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], 0u + 592u);  goto L_002A599C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5984u); set32(c.r[4], ld32((c.r[19].w[0] + 148u)));  if (depth < kMaxDepth) unit_005C(c, 370u, depth + 1u); else { c.pc = 0x002934E0u; return; } if (c.pc != 0x002A5984u) [[unlikely]] return; }
L_002A5984:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5994u); set32(c.r[4], c.r[4].w[0] + 10576u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002A5994u) [[unlikely]] return; }
L_002A5994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A5A40; } }
L_002A599C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A59A4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002A59A4u) [[unlikely]] return; }
L_002A59A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002A59C8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A59C0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_005E(c, 136u, depth + 1u); else { c.pc = 0x00299410u; return; } if (c.pc != 0x002A59C0u) [[unlikely]] return; }
L_002A59C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002A59C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A59D0u);  if (depth < kMaxDepth) unit_005E(c, 178u, depth + 1u); else { c.pc = 0x00299DC0u; return; } if (c.pc != 0x002A59D0u) [[unlikely]] return; }
L_002A59D0:
    st32((c.r[16].w[0] + 284u), c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 292u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[16].w[0] + 292u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 576u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 580u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 392u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A00u); st32((c.r[16].w[0] + 392u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 68u, depth + 1u); else { c.pc = 0x0028CBD0u; return; } if (c.pc != 0x002A5A00u) [[unlikely]] return; }
L_002A5A00:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].sd[0] < 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002A5A40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 142u, depth + 1u); else { c.pc = 0x0020D3C0u; return; } if (c.pc != 0x002A5A14u) [[unlikely]] return; }
L_002A5A14:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A5A3C; } }
    c.f[12] = 0u;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A3Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A5A3Cu) [[unlikely]] return; }
L_002A5A3C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002A5A40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A5A60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A7Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002A5A7Cu) [[unlikely]] return; }
L_002A5A7C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A88u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 112u, depth + 1u); else { c.pc = 0x00278F30u; return; } if (c.pc != 0x002A5A88u) [[unlikely]] return; }
L_002A5A88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 25008u);
    set32(c.r[3], c.r[3].w[0] + 25064u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4E530000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16723ull;
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[28].w[0] - 30312u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5AD0u); st32((c.r[16].w[0] + 84u), 0u);  if (depth < kMaxDepth) unit_0061(c, 202u, depth + 1u); else { c.pc = 0x002A6040u; return; } if (c.pc != 0x002A5AD0u) [[unlikely]] return; }
L_002A5AD0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A5AF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A5B54; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25008u);
    set32(c.r[2], c.r[2].w[0] + 25064u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5B30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 115u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x002A5B30u) [[unlikely]] return; }
L_002A5B30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5B3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002A5B3Cu) [[unlikely]] return; }
L_002A5B3C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002A5B58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5B54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002A5B54u) [[unlikely]] return; }
L_002A5B54:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A5B58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A5B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5B84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 167u, depth + 1u); else { c.pc = 0x002A5BB0u; return; } if (c.pc != 0x002A5B84u) [[unlikely]] return; }
L_002A5B84:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A5BB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A5C34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A5C0C; } }
L_002A5BD8:
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002A5C0C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5BFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5BFCu) [[unlikely]] return; }
L_002A5BFC:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
L_002A5C0C:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 80u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5BD8u | kUnwind; return; } goto L_002A5BD8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  goto L_002A5C38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5C30u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002A5C30u) [[unlikely]] return; }
L_002A5C30:
    st32((c.r[17].w[0] + 80u), 0u);
    c.budget -= 1;
L_002A5C34:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 1;
L_002A5C38:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 84u), 0u);  goto L_002A5C50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5C48u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002A5C48u) [[unlikely]] return; }
L_002A5C48:
    st32((c.r[17].w[0] + 88u), 0u);
    st32((c.r[17].w[0] + 84u), 0u);
    c.budget -= 2;
L_002A5C50:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_002A5C74; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5C6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5C6Cu) [[unlikely]] return; }
L_002A5C6C:
    st32((c.r[17].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 2;
L_002A5C74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 72u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A5CA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A6018; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_002A601C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 10720u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0061[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A5D00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A6018; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002A5D30; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A5D30; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A5D30:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002A6018; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A6018; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 3;
L_002A5D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5D58u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002A5D58u) [[unlikely]] return; }
L_002A5D58:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { st32((c.r[16].w[0] + 76u), c.r[19].w[0]);  goto L_002A5DA0; }
    set32(c.r[17], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5D74u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 33u, depth + 1u); else { c.pc = 0x002905E0u; return; } if (c.pc != 0x002A5D74u) [[unlikely]] return; }
L_002A5D74:
    set32(c.r[5], ld32((c.r[17].w[0] + 520u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5D84u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 55u, depth + 1u); else { c.pc = 0x002909E0u; return; } if (c.pc != 0x002A5D84u) [[unlikely]] return; }
L_002A5D84:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5D98u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 348u, depth + 1u); else { c.pc = 0x002BBFC0u; return; } if (c.pc != 0x002A5D98u) [[unlikely]] return; }
L_002A5D98:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 76u), c.r[19].w[0]);
    c.budget -= 2;
L_002A5DA0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002A5FEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5DB0u);  if (depth < kMaxDepth) unit_0024(c, 410u, depth + 1u); else { c.pc = 0x001B2F40u; return; } if (c.pc != 0x002A5DB0u) [[unlikely]] return; }
L_002A5DB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5DC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 34u, depth + 1u); else { c.pc = 0x002BC4C0u; return; } if (c.pc != 0x002A5DC0u) [[unlikely]] return; }
L_002A5DC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 3;
L_002A5DCC:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A6018; } }
    set32(c.r[21], ld32((c.r[5].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] >> 1);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5DFCu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002A5DFCu) [[unlikely]] return; }
L_002A5DFC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002A5FE8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E18u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002A5E18u) [[unlikely]] return; }
L_002A5E18:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E24u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002A5E24u) [[unlikely]] return; }
L_002A5E24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_002A5FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002A5ED4; } }
    set32(c.r[18], c.r[20].w[0] << 1);
    c.budget -= 1;
L_002A5E38:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E48u); set32(c.r[17], c.r[20].w[0] << 2);  if (depth < kMaxDepth) unit_0038(c, 103u, depth + 1u); else { c.pc = 0x00200E40u; return; } if (c.pc != 0x002A5E48u) [[unlikely]] return; }
L_002A5E48:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E60u); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002A5E60u) [[unlikely]] return; }
L_002A5E60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002A5ED4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E70u); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x002A5E70u) [[unlikely]] return; }
L_002A5E70:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 80u)));  goto L_002A5EB4; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E88u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002A5E88u) [[unlikely]] return; }
L_002A5E88:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E98u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 102u, depth + 1u); else { c.pc = 0x00200E00u; return; } if (c.pc != 0x002A5E98u) [[unlikely]] return; }
L_002A5E98:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5EACu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 74u, depth + 1u); else { c.pc = 0x0020CA00u; return; } if (c.pc != 0x002A5EACu) [[unlikely]] return; }
L_002A5EAC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 2;
L_002A5EB4:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0]), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
L_002A5EC0:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A5FE8; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002A5ED4:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[18], c.r[20].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5E38u | kUnwind; return; } goto L_002A5E38; }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 3;
L_002A5EF0:
    set32(c.r[6], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[8], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_002A5F60; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_002A5F08:
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002A5F60; }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A5F5C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_002A5F6C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5F48u); set32(c.r[4], c.r[4].w[0] + 10656u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002A5F48u) [[unlikely]] return; }
L_002A5F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5F50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 167u, depth + 1u); else { c.pc = 0x002A5BB0u; return; } if (c.pc != 0x002A5F50u) [[unlikely]] return; }
L_002A5F50:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A5F6C; } }
L_002A5F5C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002A5F60:
    c.r[3].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 80u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5F08u | kUnwind; return; } goto L_002A5F08; }
L_002A5F6C:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002A6018; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002A5F98; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5F90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5F90u) [[unlikely]] return; }
L_002A5F90:
    st32((c.r[16].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_002A5F98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_002A5FE0; } }
L_002A5FB4:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002A5FD8; }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A6018; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002A5FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5FE0u);  if (depth < kMaxDepth) unit_0061(c, 167u, depth + 1u); else { c.pc = 0x002A5BB0u; return; } if (c.pc != 0x002A5FE0u) [[unlikely]] return; }
L_002A5FE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6018; } }
L_002A5FE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002A5FEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A6018; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6014u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6014u) [[unlikely]] return; }
L_002A6014:
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 1;
L_002A6018:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002A601C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A6040:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], 0u + 5u);  goto L_002A605C; }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002A6074; } }
L_002A605C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    st32((c.r[4].w[0] + 72u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
L_002A6074:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A6080:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 80u)));  goto L_002A609C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A6138; } }
L_002A609C:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A6138; }
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 84u)));  goto L_002A60BC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6138; } }
L_002A60BC:
    set32(c.r[10], 0u - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_002A60FC; } }
L_002A60CC:
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A60E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002A60F8; } }
L_002A60E8:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002A60FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002A6108; } }
L_002A60F8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002A60FC:
    c.r[2].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A60CCu | kUnwind; return; } goto L_002A60CC; }
L_002A6108:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] < 0;  if (t) { goto L_002A6120; } }
    set32(c.r[2], c.r[9].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_002A6138; } }
L_002A6120:
    c.budget -= 2;
    if (c.r[10].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A6138; }
    set32(c.r[2], c.r[10].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_002A6138; } }
L_002A6138:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A6140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002A6174; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_002A6164; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002A6180; } }
L_002A6164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A616Cu);  if (depth < kMaxDepth) unit_0061(c, 202u, depth + 1u); else { c.pc = 0x002A6040u; return; } if (c.pc != 0x002A616Cu) [[unlikely]] return; }
L_002A616C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A617C; } }
L_002A6174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A617Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 202u, depth + 1u); else { c.pc = 0x002A6040u; return; } if (c.pc != 0x002A617Cu) [[unlikely]] return; }
L_002A617C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002A6180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A6190:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5AF0u | kUnwind; return; } goto L_002A5AF0; }
L_002A61A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6140u | kUnwind; return; } goto L_002A6140; }
L_002A61B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A61DCu); c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 372u, depth + 1u); else { c.pc = 0x00293560u; return; } if (c.pc != 0x002A61DCu) [[unlikely]] return; }
L_002A61DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 25088u);
    set32(c.r[3], c.r[3].w[0] + 25144u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41490000u);
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16723ull;
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 76u), 0u);
    st32((c.r[19].w[0] + 484u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 480u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 488u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 492u), 0u);
    c.budget -= 15;
L_002A6218:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 496u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6218u | kUnwind; return; } goto L_002A6218; } }
    st32((c.r[19].w[0] + 896u), 0u);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 900u), 0u);
    st32((c.r[19].w[0] + 904u), 0u);
    st32((c.r[19].w[0] + 912u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 908u), 0u);  if (t) { goto L_002A6264; } }
L_002A6250:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_002A6274; }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002A6264:
    c.r[2].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6250u | kUnwind; return; } goto L_002A6250; }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_002A6274:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 10752u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6290u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002A6290u) [[unlikely]] return; }
L_002A6290:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A62B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A6318; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 25088u);
    set32(c.r[2], c.r[2].w[0] + 25144u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A62E8u); st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0061(c, 344u, depth + 1u); else { c.pc = 0x002A7AA0u; return; } if (c.pc != 0x002A62E8u) [[unlikely]] return; }
L_002A62E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A62F4u); set32(c.r[4], c.r[4].w[0] + 10800u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002A62F4u) [[unlikely]] return; }
L_002A62F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6300u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005C(c, 377u, depth + 1u); else { c.pc = 0x00293640u; return; } if (c.pc != 0x002A6300u) [[unlikely]] return; }
L_002A6300:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002A631C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6318u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002A6318u) [[unlikely]] return; }
L_002A6318:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A631C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A6330:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A6774; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 8ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 76u)));  goto L_002A6384; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_002A6778; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 1;
L_002A6384:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002A666C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 10848u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0061[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A63AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A63B4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005E(c, 285u, depth + 1u); else { c.pc = 0x0029AFA0u; return; } if (c.pc != 0x002A63B4u) [[unlikely]] return; }
L_002A63B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = c.r[18].d[0] & 1ull;  goto L_002A6670; }
    set32(c.r[5], ld32((c.r[19].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A63C8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 272u, depth + 1u); else { c.pc = 0x002A6D40u; return; } if (c.pc != 0x002A63C8u) [[unlikely]] return; }
L_002A63C8:
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41000000u);
    st32((c.r[19].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 84u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002A666C; } }
L_002A63EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] | 1ull;  if (t) { goto L_002A666C; } }
L_002A63F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A63FCu); c.r[18].d[0] = c.r[18].d[0] | 1ull;  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002A63FCu) [[unlikely]] return; }
L_002A63FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A666C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A640Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 348u, depth + 1u); else { c.pc = 0x002A7B50u; return; } if (c.pc != 0x002A640Cu) [[unlikely]] return; }
L_002A640C:
    set32(c.r[4], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_002A645C; }
    set32(c.r[6], ld32((c.r[19].w[0] + 96u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43880000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43910000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 16u)));
    st32((c.r[6].w[0] + 208u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 292u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[6].w[0] + 292u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[4].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 16;
L_002A645C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_002A666C; } }
L_002A6464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A646Cu); c.r[18].d[0] = c.r[18].d[0] | 1ull;  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002A646Cu) [[unlikely]] return; }
L_002A646C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A666C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A647Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 348u, depth + 1u); else { c.pc = 0x002A7B50u; return; } if (c.pc != 0x002A647Cu) [[unlikely]] return; }
L_002A647C:
    set32(c.r[4], ld32((c.r[19].w[0] + 492u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[6], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[5], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + 5u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], ld32((c.r[6].w[0] + 20u)));  if (t) { goto L_002A6578; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A64CCu); c.r[5].d[0] = c.r[2].d[0] | 21571ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A64CCu) [[unlikely]] return; }
L_002A64CC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A64E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002A64E0u) [[unlikely]] return; }
L_002A64E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BA0000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A64F0u); c.f[21] = ld32((c.r[19].w[0] + 904u));  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x002A64F0u) [[unlikely]] return; }
L_002A64F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x423A0000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[19].w[0] + 492u)));
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6534u); c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[21]);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x002A6534u) [[unlikely]] return; }
L_002A6534:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BA0000u);
    st32((c.r[29].w[0] + 100u), 0u);
    c.f[3] = c.r[2].w[0];
    st32((c.r[29].w[0] + 108u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    set32(c.r[2], 0u + 1u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 116u), c.f[20]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 112u), c.f[0]);  if (t) { goto L_002A65FC; } }
L_002A6578:
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6590u); c.r[5].d[0] = c.r[2].d[0] | 21571ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6590u) [[unlikely]] return; }
L_002A6590:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A65A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002A65A4u) [[unlikely]] return; }
L_002A65A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A65ACu);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x002A65ACu) [[unlikely]] return; }
L_002A65AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x423A0000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A65DCu); c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x002A65DCu) [[unlikely]] return; }
L_002A65DC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[29].w[0] + 108u), 0u);
    st32((c.r[29].w[0] + 116u), c.f[20]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 8;
L_002A65FC:
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], 0u + 24u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6614u); set32(c.r[4], c.r[2].w[0] + 440u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002A6614u) [[unlikely]] return; }
L_002A6614:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[19].w[0] + 76u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_002A666C; } }
L_002A6628:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], 0u + 7u);  goto L_002A6644; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6640u);  if (depth < kMaxDepth) unit_0061(c, 337u, depth + 1u); else { c.pc = 0x002A78A0u; return; } if (c.pc != 0x002A6640u) [[unlikely]] return; }
L_002A6640:
    set32(c.r[4], 0u + 7u);
    c.budget -= 1;
L_002A6644:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[19].w[0] + 76u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_002A666C; } }
L_002A6654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A665Cu);  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002A665Cu) [[unlikely]] return; }
L_002A665C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A666C; } }
    set32(c.r[3], 0u + 8u);
    st32((c.r[19].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 2;
L_002A666C:
    c.r[3].d[0] = c.r[18].d[0] & 1ull;
    c.budget -= 1;
L_002A6670:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A6774; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A6774; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 908u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A6774; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 896u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002A6774; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 912u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A6774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A66C8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_003B(c, 147u, depth + 1u); else { c.pc = 0x0020D4B0u; return; } if (c.pc != 0x002A66C8u) [[unlikely]] return; }
L_002A66C8:
    set32(c.r[2], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A66D8u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x002A66D8u) [[unlikely]] return; }
L_002A66D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x431B0000u);
    c.f[1] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[4] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[4].w[0];
    c.f[1] = 0u;
    c.f[3] = c.r[5].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[4]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 16;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_002A672C; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_002A6744; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 1;
L_002A672C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
L_002A6744:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[5], c.r[6].w[0] << 16);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] << 8);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    set32(c.r[4], ld32((c.r[19].w[0] + 912u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 896u)));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 160u), c.r[5].w[0]);
    c.budget -= 12;
L_002A6774:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002A6778:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002A67A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002A67E4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 8ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A67D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A67E0; } }
L_002A67D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A67E0u);  if (depth < kMaxDepth) unit_005C(c, 387u, depth + 1u); else { c.pc = 0x002936F0u; return; } if (c.pc != 0x002A67E0u) [[unlikely]] return; }
L_002A67E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002A67E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A67F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A6880; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 8ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002A6884; }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A683C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6880; } }
L_002A683C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6844u);  if (depth < kMaxDepth) unit_005C(c, 390u, depth + 1u); else { c.pc = 0x00293800u; return; } if (c.pc != 0x002A6844u) [[unlikely]] return; }
L_002A6844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A6870; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 896u)));
    c.budget -= 1;
L_002A6850:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002A6870; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A686Cu);  if (depth < kMaxDepth) unit_005E(c, 171u, depth + 1u); else { c.pc = 0x00299D20u; return; } if (c.pc != 0x002A686Cu) [[unlikely]] return; }
L_002A686C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002A6870:
    set32(c.r[3], ld32((c.r[16].w[0] + 492u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 896u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6850u | kUnwind; return; } goto L_002A6850; }
L_002A6880:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002A6884:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A68A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002A68F0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 8ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A68EC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A68E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A68EC; } }
L_002A68E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A68ECu);  if (depth < kMaxDepth) unit_005C(c, 402u, depth + 1u); else { c.pc = 0x002939B0u; return; } if (c.pc != 0x002A68ECu) [[unlikely]] return; }
L_002A68EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002A68F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A6900:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 900u)));
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] <= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A6944; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 492u)));
    set32(c.r[16], c.r[4].w[0] + 1u);
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002A6960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A6960; } }
L_002A6944:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002A6960; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 492u)));  goto L_002A695C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[4].w[0] - 1u);  if (t) { goto L_002A6960; } }
L_002A695C:
    set32(c.r[16], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002A6960:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002A6D1C; }
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], 0u + 9u);  goto L_002A6988; }
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_002A6994; } }
L_002A6988:
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 3;
L_002A6994:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A69A8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_005E(c, 210u, depth + 1u); else { c.pc = 0x0029A430u; return; } if (c.pc != 0x002A69A8u) [[unlikely]] return; }
L_002A69A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[2].w[0] + 356u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 900u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 896u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 896u)));  goto L_002A69E0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 31652u)));
    st32((c.r[3].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 896u)));
    c.budget -= 3;
L_002A69E0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 900u)));  goto L_002A6A00; }
    set32(c.r[2], ld32((c.r[28].w[0] - 31648u)));
    st32((c.r[3].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 900u)));
    c.budget -= 3;
L_002A6A00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 10896u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6A10u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002A6A10u) [[unlikely]] return; }
L_002A6A10:
    set32(c.r[4], ld32((c.r[17].w[0] + 900u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 492u)));  goto L_002A6A88; }
    set32(c.r[2], ld32((c.r[17].w[0] + 492u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002A6A84; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    set32(c.r[4], c.r[4].w[0] + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6A68u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_005E(c, 209u, depth + 1u); else { c.pc = 0x0029A3C0u; return; } if (c.pc != 0x002A6A68u) [[unlikely]] return; }
L_002A6A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6A70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 337u, depth + 1u); else { c.pc = 0x002A78A0u; return; } if (c.pc != 0x002A6A70u) [[unlikely]] return; }
L_002A6A70:
    set32(c.r[3], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_002A6CD0; } }
L_002A6A84:
    set32(c.r[2], ld32((c.r[17].w[0] + 492u)));
    c.budget -= 1;
L_002A6A88:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[3], c.r[4].w[0] << 1);  goto L_002A6BC0; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002A6BBC; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    set32(c.r[4], c.r[4].w[0] + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6AD8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_005E(c, 209u, depth + 1u); else { c.pc = 0x0029A3C0u; return; } if (c.pc != 0x002A6AD8u) [[unlikely]] return; }
L_002A6AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6AE0u); set32(c.r[4], ld32((c.r[17].w[0] + 492u)));  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x002A6AE0u) [[unlikely]] return; }
L_002A6AE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42BA0000u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[6], 0u + 24u);
    c.f[1] = 0u;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.f[3] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[3], 0u + 1u);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.f[20] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[4].w[0] + 208u));
    set32(c.r[4], c.r[4].w[0] + 440u);
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 148u), c.f[20]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6B3Cu); st32((c.r[29].w[0] + 140u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002A6B3Cu) [[unlikely]] return; }
L_002A6B3C:
    set32(c.r[2], ld32((c.r[17].w[0] + 492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6B48u); set32(c.r[4], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x002A6B48u) [[unlikely]] return; }
L_002A6B48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42BA0000u);
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[7], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], 0u + 24u);
    c.f[1] = 0u;
    set32(c.r[4], c.r[7].w[0] + 440u);
    c.f[3] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[3], 0u + 1u);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 208u));
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), 0u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6BA8u); st32((c.r[29].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002A6BA8u) [[unlikely]] return; }
L_002A6BA8:
    set32(c.r[3], 0u + 5u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_002A6CD0; } }
L_002A6BBC:
    set32(c.r[3], c.r[4].w[0] << 1);
    c.budget -= 1;
L_002A6BC0:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 5u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[12] = 0u;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6BF4u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A6BF4u) [[unlikely]] return; }
L_002A6BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6BFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 348u, depth + 1u); else { c.pc = 0x002A7B50u; return; } if (c.pc != 0x002A6BFCu) [[unlikely]] return; }
L_002A6BFC:
    set32(c.r[6], ld32((c.r[17].w[0] + 96u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43880000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43910000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[6].w[0] + 16u)));
    st32((c.r[6].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[6].w[0] + 292u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6C38u); st32((c.r[6].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x002A6C38u) [[unlikely]] return; }
L_002A6C38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BA0000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6C48u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x002A6C48u) [[unlikely]] return; }
L_002A6C48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.f[1] = c.r[2].w[0];
    c.r[9].sd[0] = static_cast<std::int32_t>(0x423A0000u);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x41900000u);
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u + 24u);
    set32(c.r[4], c.r[7].w[0] + 440u);
    c.f[0] = c.r[9].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[8].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 208u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[21]);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6CC0u); st32((c.r[29].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002A6CC0u) [[unlikely]] return; }
L_002A6CC0:
    set32(c.r[3], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 4;
L_002A6CD0:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 5u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[12] = 0u;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6D08u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A6D08u) [[unlikely]] return; }
L_002A6D08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6D14u); st32((c.r[17].w[0] + 900u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x002A6D14u) [[unlikely]] return; }
L_002A6D14:
    st32((c.r[17].w[0] + 904u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_002A6D1C:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002A6D40:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6D88u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 227u, depth + 1u); else { c.pc = 0x00289E70u; return; } if (c.pc != 0x002A6D88u) [[unlikely]] return; }
L_002A6D88:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6D94u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 344u, depth + 1u); else { c.pc = 0x002A7AA0u; return; } if (c.pc != 0x002A6D94u) [[unlikely]] return; }
L_002A6D94:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A6D98:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 496u), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(100ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6D98u | kUnwind; return; } goto L_002A6D98; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 480u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 492u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 480u)));
    st32((c.r[20].w[0] + 912u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 480u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A6E04; } }
L_002A6DD4:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[18].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002A6E04; }
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002A6E00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 912u), c.r[5].w[0]);  if (t) { goto L_002A6E10; } }
L_002A6E00:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002A6E04:
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 484u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6DD4u | kUnwind; return; } goto L_002A6DD4; }
L_002A6E10:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A6E54; } }
L_002A6E1C:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[5].w[0] << 2);  goto L_002A6E48; }
    set32(c.r[3], ld32((c.r[20].w[0] + 484u)));
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 496u), c.r[3].w[0]);  if (t) { goto L_002A6E50; } }
L_002A6E48:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 496u), c.r[18].w[0]);
    c.budget -= 2;
L_002A6E50:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002A6E54:
    set32(c.r[2], ld32((c.r[20].w[0] + 492u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 912u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6E1Cu | kUnwind; return; } goto L_002A6E1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6E6Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005E(c, 286u, depth + 1u); else { c.pc = 0x0029B010u; return; } if (c.pc != 0x002A6E6Cu) [[unlikely]] return; }
L_002A6E6C:
    set32(c.r[3], ld32((c.r[20].w[0] + 492u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6E90u); set32(c.r[5], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_005C(c, 404u, depth + 1u); else { c.pc = 0x00293A00u; return; } if (c.pc != 0x002A6E90u) [[unlikely]] return; }
L_002A6E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6E98u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 342u, depth + 1u); else { c.pc = 0x002A79A0u; return; } if (c.pc != 0x002A6E98u) [[unlikely]] return; }
L_002A6E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6EA0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 13u, depth + 1u); else { c.pc = 0x00294110u; return; } if (c.pc != 0x002A6EA0u) [[unlikely]] return; }
L_002A6EA0:
    set32(c.r[5], ld32((c.r[20].w[0] + 492u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[20].w[0] + 912u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6EB4u); set32(c.r[4], c.r[4].w[0] + 10960u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002A6EB4u) [[unlikely]] return; }
L_002A6EB4:
    set32(c.r[4], ld32((c.r[20].w[0] + 912u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 492u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6ED4u); set32(c.r[22], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002A6ED4u) [[unlikely]] return; }
L_002A6ED4:
    st32((c.r[20].w[0] + 896u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002A6F00; } }
L_002A6EE0:
    set32(c.r[2], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 496u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6EF0u); set32(c.r[5], 0u + 41u);  if (depth < kMaxDepth) unit_0061(c, 147u, depth + 1u); else { c.pc = 0x002A5930u; return; } if (c.pc != 0x002A6EF0u) [[unlikely]] return; }
L_002A6EF0:
    set32(c.r[3], ld32((c.r[20].w[0] + 896u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_002A6F00:
    set32(c.r[5], ld32((c.r[20].w[0] + 492u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6EE0u | kUnwind; return; } goto L_002A6EE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002A6F40; } }
L_002A6F18:
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 496u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_002A6F40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6F38u); st32((c.r[20].w[0] + 900u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x002A6F38u) [[unlikely]] return; }
L_002A6F38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 904u), c.f[0]);  if (t) { goto L_002A6F4C; } }
L_002A6F40:
    c.r[2].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6F18u | kUnwind; return; } goto L_002A6F18; }
L_002A6F4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BA0000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6F5Cu); c.f[21] = ld32((c.r[20].w[0] + 904u));  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x002A6F5Cu) [[unlikely]] return; }
L_002A6F5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x423A0000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6FA0u); c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[21]);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x002A6FA0u) [[unlikely]] return; }
L_002A6FA0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[29].w[0] + 172u), 0u);
    st32((c.r[29].w[0] + 180u), c.f[20]);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[6], 0u + 24u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6FD8u); set32(c.r[4], c.r[2].w[0] + 440u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002A6FD8u) [[unlikely]] return; }
L_002A6FD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A7018; } }
L_002A6FE0:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002A7018; }
    set32(c.r[3], ld32((c.r[20].w[0] + 912u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A7014; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 896u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A7014; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 31644u)));
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 2;
L_002A7014:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002A7018:
    set32(c.r[3], ld32((c.r[20].w[0] + 492u)));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 900u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6FE0u | kUnwind; return; } goto L_002A6FE0; }
    c.r[19].d[0] = 0ull + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A7458; } }
L_002A7038:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 96u)));  goto L_002A70F8; }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[5].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 96u)));  goto L_002A70CC; }
    set32(c.r[7], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[7].d[0];  if (t) { goto L_002A70C8; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[6].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 96u)));  goto L_002A70A0; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 96u)));  goto L_002A7074; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] - 5u);  if (t) { goto L_002A7138; } }
L_002A7074:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7098u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A7098u) [[unlikely]] return; }
L_002A7098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_002A7458; } }
L_002A70A0:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A70C0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A70C0u) [[unlikely]] return; }
L_002A70C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7454; } }
L_002A70C8:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 1;
L_002A70CC:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A70F0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A70F0u) [[unlikely]] return; }
L_002A70F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7454; } }
L_002A70F8:
    set32(c.r[17], c.r[16].w[0] << 2);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A711Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A711Cu) [[unlikely]] return; }
L_002A711C:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002A7454; } }
L_002A7138:
    set32(c.r[3], 0u + 6u);
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A7454; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 900u)));
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 96u)));  goto L_002A71A0; }
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[17], c.r[16].w[0] << 2);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7174u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 136u, depth + 1u); else { c.pc = 0x0020D320u; return; } if (c.pc != 0x002A7174u) [[unlikely]] return; }
L_002A7174:
    c.f[12] = ld32((c.r[18].w[0] + 356u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7184u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_005E(c, 215u, depth + 1u); else { c.pc = 0x0029A500u; return; } if (c.pc != 0x002A7184u) [[unlikely]] return; }
L_002A7184:
    set32(c.r[3], ld32((c.r[18].w[0] + 392u)));
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 392u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 392u), c.r[2].w[0]);  if (t) { goto L_002A71C4; } }
L_002A71A0:
    set32(c.r[17], c.r[16].w[0] << 2);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[7], 0u - 1u);
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A71C4u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A71C4u) [[unlikely]] return; }
L_002A71C4:
    set32(c.r[2], ld32((c.r[20].w[0] + 912u)));
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 1u);  goto L_002A7330; }
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[3], 0u + 10u);
    mmi::divu(c, 0, c.r[21].w[0], c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.f[13] = c.f[12];
    c.r[18].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[21].w[0] - c.r[18].w[0]);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7210u); set32(c.r[5], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A7210u) [[unlikely]] return; }
L_002A7210:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7234u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A7234u) [[unlikely]] return; }
L_002A7234:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7258u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A7258u) [[unlikely]] return; }
L_002A7258:
    set32(c.r[5], ld32((c.r[20].w[0] + 480u)));
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.f[13] = c.f[12];
    c.r[18].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[5].w[0] - c.r[18].w[0]);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7298u); set32(c.r[5], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A7298u) [[unlikely]] return; }
L_002A7298:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A72BCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A72BCu) [[unlikely]] return; }
L_002A72BC:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_002A7454; }
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 31640u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[3].w[0] + 160u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 31636u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[3].w[0] + 160u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 31632u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[3].w[0] + 160u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 31628u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[3].w[0] + 160u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 31624u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 160u), c.r[4].w[0]);  if (t) { goto L_002A7450; } }
L_002A7330:
    set32(c.r[5], 0u + 11u);
    st32((c.r[20].w[0] + 908u), c.r[2].w[0]);
    c.f[12] = 0u;
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7358u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002A7358u) [[unlikely]] return; }
L_002A7358:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st16((c.r[4].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 11;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 96u)));  goto L_002A73AC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 96u)));  goto L_002A73A0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A739Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A739Cu) [[unlikely]] return; }
L_002A739C:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 1;
L_002A73A0:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 3;
L_002A73AC:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 96u)));  goto L_002A73E4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 96u)));  goto L_002A73D8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A73D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A73D4u) [[unlikely]] return; }
L_002A73D4:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 1;
L_002A73D8:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 3;
L_002A73E4:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 96u)));  goto L_002A741C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 96u)));  goto L_002A7410; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A740Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A740Cu) [[unlikely]] return; }
L_002A740C:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 1;
L_002A7410:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 3;
L_002A741C:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A7450; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 96u)));  goto L_002A7448; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7444u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7444u) [[unlikely]] return; }
L_002A7444:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 1;
L_002A7448:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 20u), 0u);
    c.budget -= 2;
L_002A7450:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002A7454:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002A7458:
    set32(c.r[3], ld32((c.r[20].w[0] + 100u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7038u | kUnwind; return; } goto L_002A7038; }
    set32(c.r[23], c.r[22].w[0] << 2);
    c.r[21].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002A785C; } }
L_002A747C:
    set32(c.r[16], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_002A785C; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[23].w[0] + c.r[17].w[0]);  goto L_002A75E0; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 900u)));  goto L_002A756C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_002A7524; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 480u)));  goto L_002A74D0; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002A7858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[19].w[0] - 5u);  if (t) { goto L_002A7634; } }
L_002A74D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    c.r[5].d[0] = c.r[2].d[0] | 21570ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 5u);
    set32(c.r[22], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7504u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7504u) [[unlikely]] return; }
L_002A7504:
    set32(c.r[4], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A751Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002A751Cu) [[unlikely]] return; }
L_002A751C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7858; } }
L_002A7524:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7538u); c.r[5].d[0] = c.r[2].d[0] | 21571ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7538u) [[unlikely]] return; }
L_002A7538:
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A754Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002A754Cu) [[unlikely]] return; }
L_002A754C:
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC0E00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1B00000u);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[5].w[0] + 568u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 572u), c.r[3].w[0]);  if (t) { goto L_002A7858; } }
L_002A756C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    c.r[5].d[0] = c.r[2].d[0] | 21571ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7598u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7598u) [[unlikely]] return; }
L_002A7598:
    set32(c.r[4], ld32((c.r[20].w[0] + 900u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A75C0u); set32(c.r[5], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002A75C0u) [[unlikely]] return; }
L_002A75C0:
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1B00000u);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[5].w[0] + 568u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 572u), c.r[3].w[0]);  if (t) { goto L_002A7858; } }
L_002A75E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[2].d[0] | 21571ull;
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A75FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A75FCu) [[unlikely]] return; }
L_002A75FC:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7614u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002A7614u) [[unlikely]] return; }
L_002A7614:
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC0C00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1B00000u);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[5].w[0] + 568u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 572u), c.r[3].w[0]);  if (t) { goto L_002A7858; } }
L_002A7634:
    set32(c.r[3], 0u + 6u);
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A7858; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[3], c.r[19].w[0] - 6u);  goto L_002A7688; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A766Cu); c.r[5].d[0] = c.r[2].d[0] | 21569ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A766Cu) [[unlikely]] return; }
L_002A766C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7680u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002A7680u) [[unlikely]] return; }
L_002A7680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 896u)));  if (t) { goto L_002A76C8; } }
L_002A7688:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[22], c.r[3].w[0] << 2);
    c.r[5].d[0] = c.r[2].d[0] | 21570ull;
    set32(c.r[2], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A76ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A76ACu) [[unlikely]] return; }
L_002A76AC:
    set32(c.r[4], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A76C4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002A76C4u) [[unlikely]] return; }
L_002A76C4:
    set32(c.r[2], ld32((c.r[20].w[0] + 896u)));
    c.budget -= 1;
L_002A76C8:
    set32(c.r[17], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 912u)));  goto L_002A7724; }
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    c.r[5].d[0] = c.r[2].d[0] | 21571ull;
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7700u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7700u) [[unlikely]] return; }
L_002A7700:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 896u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7720u); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002A7720u) [[unlikely]] return; }
L_002A7720:
    set32(c.r[2], ld32((c.r[20].w[0] + 912u)));
    c.budget -= 1;
L_002A7724:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_002A7824; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[17], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A774Cu); c.r[5].d[0] = c.r[2].d[0] | 21572ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A774Cu) [[unlikely]] return; }
L_002A774C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A775Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002A775Cu) [[unlikely]] return; }
L_002A775C:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[17], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A777Cu); c.r[5].d[0] = c.r[2].d[0] | 21573ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A777Cu) [[unlikely]] return; }
L_002A777C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A778Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002A778Cu) [[unlikely]] return; }
L_002A778C:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[17], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A77ACu); c.r[5].d[0] = c.r[2].d[0] | 21574ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A77ACu) [[unlikely]] return; }
L_002A77AC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A77BCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002A77BCu) [[unlikely]] return; }
L_002A77BC:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[17], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A77DCu); c.r[5].d[0] = c.r[2].d[0] | 21575ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A77DCu) [[unlikely]] return; }
L_002A77DC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A77ECu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002A77ECu) [[unlikely]] return; }
L_002A77EC:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[16], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A780Cu); c.r[5].d[0] = c.r[2].d[0] | 21576ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A780Cu) [[unlikely]] return; }
L_002A780C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A781Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002A781Cu) [[unlikely]] return; }
L_002A781C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_002A7858; } }
L_002A7824:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[16], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7844u); c.r[5].d[0] = c.r[2].d[0] | 21572ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7844u) [[unlikely]] return; }
L_002A7844:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7854u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002A7854u) [[unlikely]] return; }
L_002A7854:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002A7858:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002A785C:
    set32(c.r[3], ld32((c.r[20].w[0] + 100u)));
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], ld32((c.r[20].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A747Cu | kUnwind; return; } goto L_002A747C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002A78A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A78BCu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x002A78BCu) [[unlikely]] return; }
L_002A78BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], 0u + 1u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], 0u + 24u);
    c.f[0] = ld32((c.r[4].w[0] + 208u));
    set32(c.r[4], c.r[4].w[0] + 440u);
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0] + 84u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7904u); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002A7904u) [[unlikely]] return; }
L_002A7904:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BA0000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7914u); c.f[21] = ld32((c.r[16].w[0] + 904u));  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x002A7914u) [[unlikely]] return; }
L_002A7914:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.f[1] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x41900000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], 0u + 24u);
    c.f[0] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[4], c.r[7].w[0] + 440u);
    c.f[0] = c.r[8].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[7].w[0] + 208u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[21]);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 52u), 0u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7988u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x002A7988u) [[unlikely]] return; }
L_002A7988:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A79A0:
    c.r[14].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 4u);
    set32(c.r[12], 0u + 3u);
    set32(c.r[11], 0u + 2u);
    set32(c.r[10], 0u + 1u);
    set32(c.r[6], 0u + 6u);
    set32(c.r[5], 0u + 41u);
    set32(c.r[9], 0u + 40u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42BA0000u);
    set32(c.r[7], 0u + 43u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 42u);  if (t) { goto L_002A7A80; } }
L_002A79D0:
    c.budget -= 2;
    if (c.r[14].d[0] == c.r[13].d[0]) { c.r[15].d[0] = c.r[7].d[0] + 0ull;  goto L_002A7A50; }
    c.budget -= 2;
    if (c.r[14].d[0] == c.r[12].d[0]) { c.r[15].d[0] = c.r[8].d[0] + 0ull;  goto L_002A7A50; }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[11].d[0];  if (t) { goto L_002A7A0C; } }
    c.budget -= 2;
    if (c.r[14].d[0] == c.r[10].d[0]) { c.r[15].d[0] = c.r[9].d[0] + 0ull;  goto L_002A7A50; }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { goto L_002A7A00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[15], c.r[14].w[0] - 5u);  if (t) { goto L_002A7A18; } }
L_002A7A00:
    c.r[15].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7A50; } }
L_002A7A0C:
    c.r[15].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7A50; } }
L_002A7A18:
    mmi::div(c, 0, c.r[15].w[0], c.r[6].w[0]);
    c.r[15].d[0] = c.hi.d[0];
    c.budget -= 4;
    if (c.r[15].d[0] != 0ull) { c.r[15].d[0] = c.r[5].d[0] + 0ull;  goto L_002A7A2C; }
    c.r[15].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 1;
L_002A7A2C:
    set32(c.r[24], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[25], c.r[14].w[0] << 2);
    set32(c.r[24], c.r[24].w[0] + c.r[25].w[0]);
    set32(c.r[25], ld32((c.r[24].w[0])));
    st32((c.r[25].w[0] + 576u), c.r[3].w[0]);
    st32((c.r[25].w[0] + 580u), 0u);
    set32(c.r[24], ld32((c.r[25].w[0] + 392u)));
    c.r[24].d[0] = c.r[24].d[0] | 32ull;
    st32((c.r[25].w[0] + 392u), c.r[24].w[0]);
    c.budget -= 9;
L_002A7A50:
    set32(c.r[24], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[25], c.r[14].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] + 1u);
    set32(c.r[24], c.r[24].w[0] + c.r[25].w[0]);
    set32(c.r[24], ld32((c.r[24].w[0])));
    st32((c.r[24].w[0] + 284u), c.r[15].w[0]);
    set32(c.r[15], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[15], c.r[15].w[0] + c.r[25].w[0]);
    set32(c.r[24], ld32((c.r[15].w[0])));
    set32(c.r[15], ld32((c.r[24].w[0] + 292u)));
    c.r[15].d[0] = c.r[15].d[0] | 4096ull;
    st32((c.r[24].w[0] + 292u), c.r[15].w[0]);
    c.budget -= 12;
L_002A7A80:
    set32(c.r[15], ld32((c.r[4].w[0] + 100u)));
    c.r[15].d[0] = c.r[14].sd[0] < c.r[15].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A79D0u | kUnwind; return; } goto L_002A79D0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A7AA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 896u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A7B14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A7B04; } }
L_002A7AC8:
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002A7B04; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 896u)));  goto L_002A7AF8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7AF4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7AF4u) [[unlikely]] return; }
L_002A7AF4:
    set32(c.r[3], ld32((c.r[17].w[0] + 896u)));
    c.budget -= 1;
L_002A7AF8:
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_002A7B04:
    set32(c.r[3], ld32((c.r[17].w[0] + 492u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 896u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7AC8u | kUnwind; return; } goto L_002A7AC8; }
L_002A7B14:
    set32(c.r[4], ld32((c.r[17].w[0] + 896u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 492u), 0u);  goto L_002A7B30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B28u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002A7B28u) [[unlikely]] return; }
L_002A7B28:
    st32((c.r[17].w[0] + 896u), 0u);
    st32((c.r[17].w[0] + 492u), 0u);
    c.budget -= 2;
L_002A7B30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A7B50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A7B8C; } }
L_002A7B6C:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002A7B8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B88u); set32(c.r[5], ld32((c.r[5].w[0] + 16u)));  if (depth < kMaxDepth) unit_005E(c, 185u, depth + 1u); else { c.pc = 0x00299EB0u; return; } if (c.pc != 0x002A7B88u) [[unlikely]] return; }
L_002A7B88:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002A7B8C:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7B6Cu | kUnwind; return; } goto L_002A7B6C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A7BB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A62B0u | kUnwind; return; } goto L_002A62B0; }
L_002A7BC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7BDCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 49u, depth + 1u); else { c.pc = 0x0017C680u; return; } if (c.pc != 0x002A7BDCu) [[unlikely]] return; }
L_002A7BDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A7C10; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7BF4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 66u, depth + 1u); else { c.pc = 0x0017CAE0u; return; } if (c.pc != 0x002A7BF4u) [[unlikely]] return; }
L_002A7BF4:
    c.f[1] = ld32((c.r[28].w[0] - 32236u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A7C0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A7C10; } }
L_002A7C0C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A7C10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A7C30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 1156u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A7C80; } }
L_002A7C4C:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[16].w[0] + 320u)));  goto L_002A7C80; }
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A7C7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7C6Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_00A8(c, 232u, depth + 1u); else { c.pc = 0x003C2BB0u; return; } if (c.pc != 0x002A7C6Cu) [[unlikely]] return; }
L_002A7C6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A7C7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A7C8C; } }
L_002A7C7C:
    set32(c.r[16], ld32((c.r[16].w[0] + 320u)));
    c.budget -= 1;
L_002A7C80:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 312u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7C4Cu | kUnwind; return; } goto L_002A7C4C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A7C8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A7CA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002A7CC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A7CFC; } }
L_002A7CC8:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 9u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7CD8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 361u, depth + 1u); else { c.pc = 0x002A7D10u; return; } if (c.pc != 0x002A7CD8u) [[unlikely]] return; }
L_002A7CD8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] >> 16);  goto L_002A7CEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A7CFC; } }
L_002A7CEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7CF4u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x002A7CF4u) [[unlikely]] return; }
L_002A7CF4:
    st32((c.r[17].w[0] + 328u), c.f[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_002A7CFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A7D10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], 0u + 432u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7D4Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A8(c, 299u, depth + 1u); else { c.pc = 0x003C3630u; return; } if (c.pc != 0x002A7D4Cu) [[unlikely]] return; }
L_002A7D4C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A7D74; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7D70u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 416u, depth + 1u); else { c.pc = 0x00283D90u; return; } if (c.pc != 0x002A7D70u) [[unlikely]] return; }
L_002A7D70:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002A7D74:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A7E1C; } }
    st32((c.r[16].w[0] + 336u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 1156u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002A7D90; } }
L_002A7D8C:
    set32(c.r[3], ld32((c.r[3].w[0] + 320u)));
    c.budget -= 1;
L_002A7D90:
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A7DB0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 336u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7D8Cu | kUnwind; return; } goto L_002A7D8C; }
L_002A7DB0:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { st32((c.r[4].w[0] + 320u), c.r[16].w[0]);  goto L_002A7DBC; }
    st32((c.r[20].w[0] + 1156u), c.r[16].w[0]);
    c.budget -= 1;
L_002A7DBC:
    st32((c.r[16].w[0] + 320u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7DC8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 29u, depth + 1u); else { c.pc = 0x0028C630u; return; } if (c.pc != 0x002A7DC8u) [[unlikely]] return; }
L_002A7DC8:
    set32(c.r[4], ld32((c.r[2].w[0] + 400u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002A7E0C; }
    set32(c.r[3], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002A7E0C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] << 2);  goto L_002A7E04; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7E0C; } }
L_002A7E04:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_002A7E0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7E14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 50u, depth + 1u); else { c.pc = 0x002845A0u; return; } if (c.pc != 0x002A7E14u) [[unlikely]] return; }
L_002A7E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002A7E44; } }
L_002A7E1C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A7E44; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A7E40; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7E40u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7E40u) [[unlikely]] return; }
L_002A7E40:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A7E44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A7E70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002A7E9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A7F68; } }
L_002A7E9C:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 9u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7EB0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 361u, depth + 1u); else { c.pc = 0x002A7D10u; return; } if (c.pc != 0x002A7EB0u) [[unlikely]] return; }
L_002A7EB0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] >> 16);  goto L_002A7EC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A7F68; } }
L_002A7EC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7ECCu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x002A7ECCu) [[unlikely]] return; }
L_002A7ECC:
    set32(c.r[2], c.r[16].w[0] >> 8);
    st32((c.r[17].w[0] + 328u), c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 336u), c.r[2].w[0]);  if (t) { goto L_002A7F1C; } }
    c.r[2].d[0] = c.r[16].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] & 2ull;  goto L_002A7F20; }
    set32(c.r[2], ld32((c.r[18].w[0] + 1320u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 144u)));  goto L_002A7F10; }
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7F08u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002A7F08u) [[unlikely]] return; }
L_002A7F08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7F1C; } }
L_002A7F10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7F1Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 427u, depth + 1u); else { c.pc = 0x00283F30u; return; } if (c.pc != 0x002A7F1Cu) [[unlikely]] return; }
L_002A7F1C:
    c.r[2].d[0] = c.r[16].d[0] & 2ull;
    c.budget -= 1;
L_002A7F20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] & 8ull;  goto L_002A7F38; }
    set32(c.r[2], ld32((c.r[17].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[17].w[0] + 308u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] & 8ull;
    c.budget -= 4;
L_002A7F38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] & 16ull;  goto L_002A7F50; }
    set32(c.r[2], ld32((c.r[17].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[17].w[0] + 308u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] & 16ull;
    c.budget -= 4;
L_002A7F50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002A7F68; }
    set32(c.r[2], ld32((c.r[17].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[17].w[0] + 308u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_002A7F68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A7F80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7FA8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0024(c, 200u, depth + 1u); else { c.pc = 0x001B16A0u; return; } if (c.pc != 0x002A7FA8u) [[unlikely]] return; }
L_002A7FA8:
    set32(c.r[4], ld32((c.r[19].w[0] + 1156u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0062(c, 4u, depth); } }
L_002A7FB8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = c.r[4].d[0] + 0ull;  goto L_002A7FE4; }
    c.budget -= 2;
    if (c.r[18].sd[0] < 0) { set32(c.r[20], ld32((c.r[4].w[0] + 320u)));  goto L_002A7FF0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002A7FEC; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_002A7FE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 320u)));  if (t) { [[clang::musttail]] return unit_0062(c, 4u, depth); } }
L_002A7FEC:
    set32(c.r[20], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 1;
L_002A7FF0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[19].w[0] + 1156u), c.r[20].w[0]);  goto L_002A7FFC; }
    st32((c.r[16].w[0] + 320u), c.r[20].w[0]);
    c.budget -= 1;
L_002A7FFC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  [[clang::musttail]] return unit_0062(c, 4u, depth); }
    [[clang::musttail]] return unit_0062(c, 2u, depth);
}

}
