#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0027[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0,
    6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0,
    18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0,
    65, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0,
    74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0,
    0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140,
    0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 236, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0,
    243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0,
    0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0,
    0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294,
    0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0,
    0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318,
    0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 330, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0,
    0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343,
    0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0,
    357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0,
    0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 386,
    0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    393, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 396, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0027(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001BC000;
    case 2u: goto L_001BC01C;
    case 3u: goto L_001BC044;
    case 4u: goto L_001BC060;
    case 5u: goto L_001BC070;
    case 6u: goto L_001BC080;
    case 7u: goto L_001BC090;
    case 8u: goto L_001BC0BC;
    case 9u: goto L_001BC0E4;
    case 10u: goto L_001BC100;
    case 11u: goto L_001BC12C;
    case 12u: goto L_001BC154;
    case 13u: goto L_001BC170;
    case 14u: goto L_001BC19C;
    case 15u: goto L_001BC1C4;
    case 16u: goto L_001BC1E0;
    case 17u: goto L_001BC1F0;
    case 18u: goto L_001BC200;
    case 19u: goto L_001BC210;
    case 20u: goto L_001BC23C;
    case 21u: goto L_001BC264;
    case 22u: goto L_001BC280;
    case 23u: goto L_001BC2AC;
    case 24u: goto L_001BC2D4;
    case 25u: goto L_001BC2F0;
    case 26u: goto L_001BC300;
    case 27u: goto L_001BC310;
    case 28u: goto L_001BC320;
    case 29u: goto L_001BC330;
    case 30u: goto L_001BC35C;
    case 31u: goto L_001BC384;
    case 32u: goto L_001BC3A0;
    case 33u: goto L_001BC3B0;
    case 34u: goto L_001BC3C0;
    case 35u: goto L_001BC3D0;
    case 36u: goto L_001BC3E0;
    case 37u: goto L_001BC3F0;
    case 38u: goto L_001BC430;
    case 39u: goto L_001BC470;
    case 40u: goto L_001BC494;
    case 41u: goto L_001BC4D0;
    case 42u: goto L_001BC4F0;
    case 43u: goto L_001BC560;
    case 44u: goto L_001BC5A0;
    case 45u: goto L_001BC5D0;
    case 46u: goto L_001BC600;
    case 47u: goto L_001BC610;
    case 48u: goto L_001BC634;
    case 49u: goto L_001BC6A0;
    case 50u: goto L_001BC6D0;
    case 51u: goto L_001BC700;
    case 52u: goto L_001BC71C;
    case 53u: goto L_001BC770;
    case 54u: goto L_001BC7A0;
    case 55u: goto L_001BC7B8;
    case 56u: goto L_001BC7D0;
    case 57u: goto L_001BC7E0;
    case 58u: goto L_001BC7FC;
    case 59u: goto L_001BC808;
    case 60u: goto L_001BC830;
    case 61u: goto L_001BC844;
    case 62u: goto L_001BC854;
    case 63u: goto L_001BC860;
    case 64u: goto L_001BC870;
    case 65u: goto L_001BC880;
    case 66u: goto L_001BC888;
    case 67u: goto L_001BC8A0;
    case 68u: goto L_001BC8C0;
    case 69u: goto L_001BC8D0;
    case 70u: goto L_001BC904;
    case 71u: goto L_001BC924;
    case 72u: goto L_001BC940;
    case 73u: goto L_001BC974;
    case 74u: goto L_001BC980;
    case 75u: goto L_001BC990;
    case 76u: goto L_001BC9AC;
    case 77u: goto L_001BC9D8;
    case 78u: goto L_001BCA24;
    case 79u: goto L_001BCA2C;
    case 80u: goto L_001BCA38;
    case 81u: goto L_001BCA6C;
    case 82u: goto L_001BCA78;
    case 83u: goto L_001BCAE0;
    case 84u: goto L_001BCB04;
    case 85u: goto L_001BCB28;
    case 86u: goto L_001BCB30;
    case 87u: goto L_001BCB40;
    case 88u: goto L_001BCB74;
    case 89u: goto L_001BCB9C;
    case 90u: goto L_001BCBD0;
    case 91u: goto L_001BCBF4;
    case 92u: goto L_001BCC04;
    case 93u: goto L_001BCC14;
    case 94u: goto L_001BCCA0;
    case 95u: goto L_001BCCE0;
    case 96u: goto L_001BCD20;
    case 97u: goto L_001BCD74;
    case 98u: goto L_001BCD84;
    case 99u: goto L_001BCDBC;
    case 100u: goto L_001BCDCC;
    case 101u: goto L_001BCDFC;
    case 102u: goto L_001BCE60;
    case 103u: goto L_001BCEB4;
    case 104u: goto L_001BCEE4;
    case 105u: goto L_001BCF14;
    case 106u: goto L_001BCF2C;
    case 107u: goto L_001BCF3C;
    case 108u: goto L_001BCF6C;
    case 109u: goto L_001BCFD0;
    case 110u: goto L_001BD048;
    case 111u: goto L_001BD05C;
    case 112u: goto L_001BD074;
    case 113u: goto L_001BD090;
    case 114u: goto L_001BD098;
    case 115u: goto L_001BD0A8;
    case 116u: goto L_001BD0BC;
    case 117u: goto L_001BD104;
    case 118u: goto L_001BD11C;
    case 119u: goto L_001BD12C;
    case 120u: goto L_001BD158;
    case 121u: goto L_001BD1A8;
    case 122u: goto L_001BD1B0;
    case 123u: goto L_001BD1B8;
    case 124u: goto L_001BD1F0;
    case 125u: goto L_001BD208;
    case 126u: goto L_001BD220;
    case 127u: goto L_001BD254;
    case 128u: goto L_001BD288;
    case 129u: goto L_001BD2B4;
    case 130u: goto L_001BD310;
    case 131u: goto L_001BD364;
    case 132u: goto L_001BD3B4;
    case 133u: goto L_001BD3E8;
    case 134u: goto L_001BD418;
    case 135u: goto L_001BD430;
    case 136u: goto L_001BD440;
    case 137u: goto L_001BD470;
    case 138u: goto L_001BD4D0;
    case 139u: goto L_001BD568;
    case 140u: goto L_001BD57C;
    case 141u: goto L_001BD594;
    case 142u: goto L_001BD5B0;
    case 143u: goto L_001BD5E4;
    case 144u: goto L_001BD608;
    case 145u: goto L_001BD618;
    case 146u: goto L_001BD628;
    case 147u: goto L_001BD63C;
    case 148u: goto L_001BD684;
    case 149u: goto L_001BD69C;
    case 150u: goto L_001BD6AC;
    case 151u: goto L_001BD6D8;
    case 152u: goto L_001BD708;
    case 153u: goto L_001BD72C;
    case 154u: goto L_001BD734;
    case 155u: goto L_001BD73C;
    case 156u: goto L_001BD770;
    case 157u: goto L_001BD788;
    case 158u: goto L_001BD7A0;
    case 159u: goto L_001BD7F4;
    case 160u: goto L_001BD828;
    case 161u: goto L_001BD85C;
    case 162u: goto L_001BD888;
    case 163u: goto L_001BD8F0;
    case 164u: goto L_001BD900;
    case 165u: goto L_001BD968;
    case 166u: goto L_001BD994;
    case 167u: goto L_001BD9A8;
    case 168u: goto L_001BD9C0;
    case 169u: goto L_001BD9DC;
    case 170u: goto L_001BDA10;
    case 171u: goto L_001BDA34;
    case 172u: goto L_001BDA3C;
    case 173u: goto L_001BDA44;
    case 174u: goto L_001BDA80;
    case 175u: goto L_001BDA90;
    case 176u: goto L_001BDABC;
    case 177u: goto L_001BDB04;
    case 178u: goto L_001BDB14;
    case 179u: goto L_001BDB3C;
    case 180u: goto L_001BDB54;
    case 181u: goto L_001BDB80;
    case 182u: goto L_001BDBB4;
    case 183u: goto L_001BDBE4;
    case 184u: goto L_001BDC2C;
    case 185u: goto L_001BDC3C;
    case 186u: goto L_001BDC60;
    case 187u: goto L_001BDCA0;
    case 188u: goto L_001BDD24;
    case 189u: goto L_001BDD9C;
    case 190u: goto L_001BDDCC;
    case 191u: goto L_001BDE04;
    case 192u: goto L_001BDE34;
    case 193u: goto L_001BDE64;
    case 194u: goto L_001BDE94;
    case 195u: goto L_001BDED0;
    case 196u: goto L_001BDF00;
    case 197u: goto L_001BDF70;
    case 198u: goto L_001BDFA0;
    case 199u: goto L_001BE000;
    case 200u: goto L_001BE050;
    case 201u: goto L_001BE080;
    case 202u: goto L_001BE0A0;
    case 203u: goto L_001BE0D4;
    case 204u: goto L_001BE0E0;
    case 205u: goto L_001BE0E8;
    case 206u: goto L_001BE0F8;
    case 207u: goto L_001BE140;
    case 208u: goto L_001BE184;
    case 209u: goto L_001BE1B0;
    case 210u: goto L_001BE1E4;
    case 211u: goto L_001BE200;
    case 212u: goto L_001BE220;
    case 213u: goto L_001BE240;
    case 214u: goto L_001BE278;
    case 215u: goto L_001BE290;
    case 216u: goto L_001BE2B0;
    case 217u: goto L_001BE2B8;
    case 218u: goto L_001BE2E0;
    case 219u: goto L_001BE31C;
    case 220u: goto L_001BE328;
    case 221u: goto L_001BE340;
    case 222u: goto L_001BE360;
    case 223u: goto L_001BE368;
    case 224u: goto L_001BE3B0;
    case 225u: goto L_001BE3F0;
    case 226u: goto L_001BE414;
    case 227u: goto L_001BE43C;
    case 228u: goto L_001BE460;
    case 229u: goto L_001BE48C;
    case 230u: goto L_001BE4C8;
    case 231u: goto L_001BE50C;
    case 232u: goto L_001BE56C;
    case 233u: goto L_001BE580;
    case 234u: goto L_001BE5CC;
    case 235u: goto L_001BE5D8;
    case 236u: goto L_001BE5E0;
    case 237u: goto L_001BE5F0;
    case 238u: goto L_001BE630;
    case 239u: goto L_001BE640;
    case 240u: goto L_001BE67C;
    case 241u: goto L_001BE6B0;
    case 242u: goto L_001BE6F8;
    case 243u: goto L_001BE700;
    case 244u: goto L_001BE710;
    case 245u: goto L_001BE730;
    case 246u: goto L_001BE740;
    case 247u: goto L_001BE76C;
    case 248u: goto L_001BE794;
    case 249u: goto L_001BE7E0;
    case 250u: goto L_001BE82C;
    case 251u: goto L_001BE84C;
    case 252u: goto L_001BE888;
    case 253u: goto L_001BE890;
    case 254u: goto L_001BE8C8;
    case 255u: goto L_001BE8D0;
    case 256u: goto L_001BE8E0;
    case 257u: goto L_001BE910;
    case 258u: goto L_001BE928;
    case 259u: goto L_001BE940;
    case 260u: goto L_001BE960;
    case 261u: goto L_001BE980;
    case 262u: goto L_001BE990;
    case 263u: goto L_001BE9C4;
    case 264u: goto L_001BEA10;
    case 265u: goto L_001BEA20;
    case 266u: goto L_001BEA78;
    case 267u: goto L_001BEB04;
    case 268u: goto L_001BEB0C;
    case 269u: goto L_001BEB34;
    case 270u: goto L_001BEBA0;
    case 271u: goto L_001BEBE4;
    case 272u: goto L_001BEBF4;
    case 273u: goto L_001BEC0C;
    case 274u: goto L_001BEC30;
    case 275u: goto L_001BEC50;
    case 276u: goto L_001BECB8;
    case 277u: goto L_001BECE0;
    case 278u: goto L_001BECF0;
    case 279u: goto L_001BED2C;
    case 280u: goto L_001BED3C;
    case 281u: goto L_001BED64;
    case 282u: goto L_001BEDB0;
    case 283u: goto L_001BEDF4;
    case 284u: goto L_001BEE04;
    case 285u: goto L_001BEE28;
    case 286u: goto L_001BEE70;
    case 287u: goto L_001BEE98;
    case 288u: goto L_001BEEA0;
    case 289u: goto L_001BEED0;
    case 290u: goto L_001BEF38;
    case 291u: goto L_001BEF48;
    case 292u: goto L_001BEFD0;
    case 293u: goto L_001BEFF4;
    case 294u: goto L_001BEFFC;
    case 295u: goto L_001BF018;
    case 296u: goto L_001BF050;
    case 297u: goto L_001BF0B0;
    case 298u: goto L_001BF0E0;
    case 299u: goto L_001BF140;
    case 300u: goto L_001BF15C;
    case 301u: goto L_001BF190;
    case 302u: goto L_001BF1C4;
    case 303u: goto L_001BF1F0;
    case 304u: goto L_001BF200;
    case 305u: goto L_001BF24C;
    case 306u: goto L_001BF288;
    case 307u: goto L_001BF2A8;
    case 308u: goto L_001BF2BC;
    case 309u: goto L_001BF2DC;
    case 310u: goto L_001BF2EC;
    case 311u: goto L_001BF338;
    case 312u: goto L_001BF374;
    case 313u: goto L_001BF394;
    case 314u: goto L_001BF3A8;
    case 315u: goto L_001BF3B4;
    case 316u: goto L_001BF3D0;
    case 317u: goto L_001BF3F0;
    case 318u: goto L_001BF3FC;
    case 319u: goto L_001BF41C;
    case 320u: goto L_001BF42C;
    case 321u: goto L_001BF444;
    case 322u: goto L_001BF450;
    case 323u: goto L_001BF470;
    case 324u: goto L_001BF480;
    case 325u: goto L_001BF4B0;
    case 326u: goto L_001BF52C;
    case 327u: goto L_001BF56C;
    case 328u: goto L_001BF5A4;
    case 329u: goto L_001BF5B4;
    case 330u: goto L_001BF5C0;
    case 331u: goto L_001BF5C8;
    case 332u: goto L_001BF5D0;
    case 333u: goto L_001BF5F0;
    case 334u: goto L_001BF60C;
    case 335u: goto L_001BF640;
    case 336u: goto L_001BF674;
    case 337u: goto L_001BF6A0;
    case 338u: goto L_001BF6AC;
    case 339u: goto L_001BF6F4;
    case 340u: goto L_001BF72C;
    case 341u: goto L_001BF748;
    case 342u: goto L_001BF75C;
    case 343u: goto L_001BF77C;
    case 344u: goto L_001BF788;
    case 345u: goto L_001BF7D0;
    case 346u: goto L_001BF808;
    case 347u: goto L_001BF824;
    case 348u: goto L_001BF838;
    case 349u: goto L_001BF844;
    case 350u: goto L_001BF860;
    case 351u: goto L_001BF880;
    case 352u: goto L_001BF88C;
    case 353u: goto L_001BF8AC;
    case 354u: goto L_001BF8BC;
    case 355u: goto L_001BF8D4;
    case 356u: goto L_001BF8E0;
    case 357u: goto L_001BF900;
    case 358u: goto L_001BF910;
    case 359u: goto L_001BF940;
    case 360u: goto L_001BF9B8;
    case 361u: goto L_001BF9F8;
    case 362u: goto L_001BFA2C;
    case 363u: goto L_001BFA3C;
    case 364u: goto L_001BFA48;
    case 365u: goto L_001BFA60;
    case 366u: goto L_001BFA90;
    case 367u: goto L_001BFAA8;
    case 368u: goto L_001BFAC0;
    case 369u: goto L_001BFAF0;
    case 370u: goto L_001BFB08;
    case 371u: goto L_001BFB20;
    case 372u: goto L_001BFB3C;
    case 373u: goto L_001BFB70;
    case 374u: goto L_001BFBAC;
    case 375u: goto L_001BFBC0;
    case 376u: goto L_001BFBD4;
    case 377u: goto L_001BFBE4;
    case 378u: goto L_001BFC10;
    case 379u: goto L_001BFC40;
    case 380u: goto L_001BFC9C;
    case 381u: goto L_001BFCE0;
    case 382u: goto L_001BFD00;
    case 383u: goto L_001BFD50;
    case 384u: goto L_001BFD64;
    case 385u: goto L_001BFD74;
    case 386u: goto L_001BFD7C;
    case 387u: goto L_001BFD8C;
    case 388u: goto L_001BFDB0;
    case 389u: goto L_001BFDE4;
    case 390u: goto L_001BFE40;
    case 391u: goto L_001BFE84;
    case 392u: goto L_001BFEA4;
    case 393u: goto L_001BFF00;
    case 394u: goto L_001BFF14;
    case 395u: goto L_001BFF24;
    case 396u: goto L_001BFF2C;
    case 397u: goto L_001BFF34;
    case 398u: goto L_001BFF44;
    case 399u: goto L_001BFF70;
    case 400u: goto L_001BFFA4;
    default: bad_entry(c, 0x001BC000u); return;
    }
L_001BC000:
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC01Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 158u, depth + 1u); else { c.pc = 0x001BD7A0u; return; } if (c.pc != 0x001BC01Cu) [[unlikely]] return; }
L_001BC01C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC02C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BC048; } }
L_001BC02C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001BC048; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC044u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 94u, depth + 1u); else { c.pc = 0x001BCCA0u; return; } if (c.pc != 0x001BC044u) [[unlikely]] return; }
L_001BC044:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BC048:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BC060:
    c.budget -= 2;
    {  goto L_001BDA90; }
L_001BC070:
    c.budget -= 2;
    {  goto L_001BDA80; }
L_001BC080:
    c.budget -= 2;
    {  goto L_001BDA70; }
L_001BC090:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC0BCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 163u, depth + 1u); else { c.pc = 0x001BD8F0u; return; } if (c.pc != 0x001BC0BCu) [[unlikely]] return; }
L_001BC0BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC0CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BC0E8; } }
L_001BC0CC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001BC0E8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC0E4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 94u, depth + 1u); else { c.pc = 0x001BCCA0u; return; } if (c.pc != 0x001BC0E4u) [[unlikely]] return; }
L_001BC0E4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BC0E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BC100:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC12Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 156u, depth + 1u); else { c.pc = 0x001BD770u; return; } if (c.pc != 0x001BC12Cu) [[unlikely]] return; }
L_001BC12C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC13C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BC158; } }
L_001BC13C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001BC158; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC154u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 94u, depth + 1u); else { c.pc = 0x001BCCA0u; return; } if (c.pc != 0x001BC154u) [[unlikely]] return; }
L_001BC154:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BC158:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BC170:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC19Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 124u, depth + 1u); else { c.pc = 0x001BD1F0u; return; } if (c.pc != 0x001BC19Cu) [[unlikely]] return; }
L_001BC19C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC1AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BC1C8; } }
L_001BC1AC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001BC1C8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC1C4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 94u, depth + 1u); else { c.pc = 0x001BCCA0u; return; } if (c.pc != 0x001BC1C4u) [[unlikely]] return; }
L_001BC1C4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BC1C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BC1E0:
    c.budget -= 2;
    {  goto L_001BD900; }
L_001BC1F0:
    c.budget -= 2;
    {  goto L_001BD8F0; }
L_001BC200:
    c.budget -= 2;
    {  goto L_001BD8E0; }
L_001BC210:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC23Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 138u, depth + 1u); else { c.pc = 0x001BD4D0u; return; } if (c.pc != 0x001BC23Cu) [[unlikely]] return; }
L_001BC23C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC24C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BC268; } }
L_001BC24C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001BC268; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC264u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 94u, depth + 1u); else { c.pc = 0x001BCCA0u; return; } if (c.pc != 0x001BC264u) [[unlikely]] return; }
L_001BC264:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BC268:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BC280:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC2ACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 109u, depth + 1u); else { c.pc = 0x001BCFD0u; return; } if (c.pc != 0x001BC2ACu) [[unlikely]] return; }
L_001BC2AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC2BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BC2D8; } }
L_001BC2BC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001BC2D8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC2D4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 94u, depth + 1u); else { c.pc = 0x001BCCA0u; return; } if (c.pc != 0x001BC2D4u) [[unlikely]] return; }
L_001BC2D4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BC2D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BC2F0:
    c.budget -= 2;
    {  goto L_001BD7A0; }
L_001BC300:
    c.budget -= 2;
    {  goto L_001BD770; }
L_001BC310:
    c.budget -= 2;
    {  goto L_001BD4D0; }
L_001BC320:
    c.budget -= 2;
    {  goto L_001BD310; }
L_001BC330:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC35Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 102u, depth + 1u); else { c.pc = 0x001BCE60u; return; } if (c.pc != 0x001BC35Cu) [[unlikely]] return; }
L_001BC35C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC36C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BC388; } }
L_001BC36C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001BC388; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC384u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 94u, depth + 1u); else { c.pc = 0x001BCCA0u; return; } if (c.pc != 0x001BC384u) [[unlikely]] return; }
L_001BC384:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BC388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BC3A0:
    c.budget -= 2;
    {  goto L_001BD220; }
L_001BC3B0:
    c.budget -= 2;
    {  goto L_001BD1F0; }
L_001BC3C0:
    c.budget -= 2;
    {  goto L_001BCFD0; }
L_001BC3D0:
    c.budget -= 2;
    {  goto L_001BCE60; }
L_001BC3E0:
    c.budget -= 2;
    {  goto L_001BCD40; }
L_001BC3F0:
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_001BC430:
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_001BC470:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC494u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 225u, depth + 1u); else { c.pc = 0x0018FA60u; return; } if (c.pc != 0x001BC494u) [[unlikely]] return; }
L_001BC494:
    c.f[3] = ld32((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = ld32((c.r[16].w[0]));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 48u), c.f[2]);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC4D0u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 226u, depth + 1u); else { c.pc = 0x0018FA70u; return; } if (c.pc != 0x001BC4D0u) [[unlikely]] return; }
L_001BC4D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BC4F0:
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.f[0]);  c.pc = t; return; }
L_001BC560:
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_001BC5A0:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_001BC5D0:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_001BC600:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0018FA70u | kUnwind; return; } [[clang::musttail]] return unit_001B(c, 226u, depth); }
L_001BC610:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC634u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x001BC634u) [[unlikely]] return; }
L_001BC634:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[17].w[0]), c.f[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    c.f[3] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[17].w[0] + 4u), c.f[3]);
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[17].w[0] + 8u), c.f[3]);
    c.f[3] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[17].w[0] + 12u), c.f[3]);
    c.f[3] = ld32((c.r[17].w[0] + 16u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[17].w[0] + 16u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[17].w[0] + 20u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001BC6A0:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_001BC6D0:
    st32((c.r[4].w[0] + 104u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 100u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    st32((c.r[4].w[0] + 124u), 0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 128u), 0u);  c.pc = t; return; }
L_001BC700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC71Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 56u, depth + 1u); else { c.pc = 0x001BC7D0u; return; } if (c.pc != 0x001BC71Cu) [[unlikely]] return; }
L_001BC71C:
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    st32((c.r[17].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    st32((c.r[17].w[0] + 112u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    st32((c.r[17].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 124u), 0u);
    st32((c.r[17].w[0] + 128u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BC770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BC7B8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001BC7A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC7A0u);  if (depth < kMaxDepth) unit_0027(c, 57u, depth + 1u); else { c.pc = 0x001BC7E0u; return; } if (c.pc != 0x001BC7A0u) [[unlikely]] return; }
L_001BC7A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001BC7A4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001BC7BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC7B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001BC7B8u) [[unlikely]] return; }
L_001BC7B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001BC7BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BC7D0:
    c.budget -= 2;
    { set32(c.r[6], 0u + 96u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00181DD0u | kUnwind; return; } [[clang::musttail]] return unit_0018(c, 154u, depth); }
L_001BC7E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 128u)));  if (t) { goto L_001BC80C; } }
L_001BC7FC:
    set32(c.r[16], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC808u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0027(c, 53u, depth + 1u); else { c.pc = 0x001BC770u; return; } if (c.pc != 0x001BC808u) [[unlikely]] return; }
L_001BC808:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001BC80C:
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BC7FCu | kUnwind; return; } goto L_001BC7FC; } }
    st32((c.r[17].w[0] + 128u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BC830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC844u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 57u, depth + 1u); else { c.pc = 0x001BC7E0u; return; } if (c.pc != 0x001BC844u) [[unlikely]] return; }
L_001BC844:
    set32(c.r[4], 0u + 1u);
    st32((c.r[28].w[0] - 30572u), c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC854u); st32((c.r[28].w[0] - 30576u), 0u);  if (depth < kMaxDepth) unit_0013(c, 261u, depth + 1u); else { c.pc = 0x0016EED0u; return; } if (c.pc != 0x001BC854u) [[unlikely]] return; }
L_001BC854:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC860u); set32(c.r[4], c.r[4].w[0] - 14176u);  if (depth < kMaxDepth) unit_0013(c, 262u, depth + 1u); else { c.pc = 0x0016EEE0u; return; } if (c.pc != 0x001BC860u) [[unlikely]] return; }
L_001BC860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BC870:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC880u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 262u, depth + 1u); else { c.pc = 0x0016EEE0u; return; } if (c.pc != 0x001BC880u) [[unlikely]] return; }
L_001BC880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC888u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 261u, depth + 1u); else { c.pc = 0x0016EED0u; return; } if (c.pc != 0x001BC888u) [[unlikely]] return; }
L_001BC888:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BC8A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30576u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001BC914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC8C0u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001BC8C0u) [[unlikely]] return; }
L_001BC8C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30572u)));  goto L_001BC8D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC8D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 50u, depth + 1u); else { c.pc = 0x001BC6D0u; return; } if (c.pc != 0x001BC8D0u) [[unlikely]] return; }
L_001BC8D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30572u)));
    c.budget -= 1;
L_001BC8D4:
    st32((c.r[3].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30572u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 128u);  if (t) { goto L_001BC8F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BC928; } }
L_001BC8F0:
    st32((c.r[28].w[0] - 30576u), c.r[4].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC904u); st32((c.r[28].w[0] - 30572u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0027(c, 56u, depth + 1u); else { c.pc = 0x001BC7D0u; return; } if (c.pc != 0x001BC904u) [[unlikely]] return; }
L_001BC904:
    set32(c.r[3], ld32((c.r[28].w[0] - 30576u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30572u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 124u), c.r[3].w[0]);  if (t) { goto L_001BC924; } }
L_001BC914:
    set32(c.r[4], ld32((c.r[28].w[0] - 30572u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC924u); st32((c.r[28].w[0] - 30576u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0027(c, 56u, depth + 1u); else { c.pc = 0x001BC7D0u; return; } if (c.pc != 0x001BC924u) [[unlikely]] return; }
L_001BC924:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BC928:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BC940:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_001BC9FC; } }
L_001BC974:
    set32(c.r[21], c.r[19].w[0] + 96u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001BC9F0; } }
L_001BC980:
    set32(c.r[16], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[22], c.r[18].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC990u); c.f[12] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x001BC990u) [[unlikely]] return; }
L_001BC990:
    c.f[1] = ld32((c.r[28].w[0] - 32236u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[17].d[0] = c.r[18].d[0] + 0ull;  goto L_001BC9EC; }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC9ACu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x001BC9ACu) [[unlikely]] return; }
L_001BC9AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32236u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BC9E8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC9D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0027(c, 53u, depth + 1u); else { c.pc = 0x001BC770u; return; } if (c.pc != 0x001BC9D8u) [[unlikely]] return; }
L_001BC9D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 128u), c.r[16].w[0]);  if (t) { goto L_001BC9EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 124u), c.r[17].w[0]);  if (t) { goto L_001BC9EC; } }
L_001BC9E8:
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001BC9EC:
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001BC9F0:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.f[0] = ld32((c.r[18].w[0] + 112u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BC980u | kUnwind; return; } goto L_001BC980; }
    set32(c.r[19], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 1;
L_001BC9FC:
    c.r[3].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = c.r[20].d[0] + 0ull;  goto L_001BCA94; }
    set32(c.r[18], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.f[20] = ld32((c.r[19].w[0] + 112u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BC974u | kUnwind; return; } goto L_001BC974; }
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BCA94; } }
L_001BCA24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001BCA88; } }
L_001BCA2C:
    set32(c.r[17], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCA38u); c.f[12] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x001BCA38u) [[unlikely]] return; }
L_001BCA38:
    c.f[1] = ld32((c.r[28].w[0] - 32236u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[18].d[0] = c.r[19].d[0] + 0ull;  goto L_001BCA84; }
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = ld32((c.r[19].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001BCA70; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCA6Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 90u, depth + 1u); else { c.pc = 0x001BCBD0u; return; } if (c.pc != 0x001BCA6Cu) [[unlikely]] return; }
L_001BCA6C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001BCA70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCA78u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0027(c, 53u, depth + 1u); else { c.pc = 0x001BC770u; return; } if (c.pc != 0x001BCA78u) [[unlikely]] return; }
L_001BCA78:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 128u), c.r[17].w[0]);  if (t) { goto L_001BCA84; } }
    st32((c.r[17].w[0] + 124u), c.r[18].w[0]);
    c.budget -= 1;
L_001BCA84:
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001BCA88:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.f[0] = ld32((c.r[19].w[0] + 112u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BCA2Cu | kUnwind; return; } goto L_001BCA2C; }
    set32(c.r[16], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 1;
L_001BCA94:
    c.r[3].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_001BCAB4; }
    set32(c.r[19], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { c.f[20] = ld32((c.r[16].w[0] + 112u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BCA24u | kUnwind; return; } goto L_001BCA24; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_001BCAB4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001BCAE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001BCB08; } }
L_001BCB04:
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001BCB08:
    set32(c.r[3], ld32((c.r[18].w[0] + 128u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BCB04u | kUnwind; return; } goto L_001BCB04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BCBAC; } }
L_001BCB28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001BCBA0; } }
L_001BCB30:
    c.f[0] = ld32((c.r[17].w[0] + 112u));
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCB40u); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x001BCB40u) [[unlikely]] return; }
L_001BCB40:
    c.f[1] = ld32((c.r[28].w[0] - 32236u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[17].w[0] + 112u));  goto L_001BCB7C; }
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = ld32((c.r[17].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[17].d[0] = c.r[16].d[0] + 0ull;  goto L_001BCBA0; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCB74u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 90u, depth + 1u); else { c.pc = 0x001BCBD0u; return; } if (c.pc != 0x001BCB74u) [[unlikely]] return; }
L_001BCB74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BCB9C; } }
L_001BCB7C:
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BCB9C; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCB9Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 90u, depth + 1u); else { c.pc = 0x001BCBD0u; return; } if (c.pc != 0x001BCB9Cu) [[unlikely]] return; }
L_001BCB9C:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001BCBA0:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[18].d[0]) { set32(c.r[16], ld32((c.r[17].w[0] + 128u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BCB30u | kUnwind; return; } goto L_001BCB30; }
    set32(c.r[18], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 1;
L_001BCBAC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BCB28u | kUnwind; return; } goto L_001BCB28; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BCBD0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCBF4u); set32(c.r[6], 0u + 96u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001BCBF4u) [[unlikely]] return; }
L_001BCBF4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCC04u); set32(c.r[6], 0u + 96u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001BCC04u) [[unlikely]] return; }
L_001BCC04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCC14u); set32(c.r[6], 0u + 96u);  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001BCC14u) [[unlikely]] return; }
L_001BCC14:
    ld128((c.r[17].w[0] + 96u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    st32((c.r[17].w[0] + 96u), c.f[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.f[3] = ld32((c.r[29].w[0] + 48u));
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[17].w[0] + 100u), c.f[0]);
    c.f[4] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[17].w[0] + 104u), c.f[4]);
    c.f[4] = ld32((c.r[16].w[0] + 108u));
    st32((c.r[17].w[0] + 108u), c.f[4]);
    st32((c.r[16].w[0] + 96u), c.f[3]);
    st32((c.r[16].w[0] + 100u), c.f[2]);
    st32((c.r[16].w[0] + 104u), c.f[1]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 112u));
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    st32((c.r[17].w[0] + 112u), c.f[0]);
    st32((c.r[16].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 116u));
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    st32((c.r[17].w[0] + 116u), c.f[0]);
    st32((c.r[16].w[0] + 116u), c.f[1]);
    set32(c.r[4], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    st32((c.r[17].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 120u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001BCCA0:
    c.f[2] = ld32((c.r[6].w[0] + 100u));
    c.f[0] = ld32((c.r[6].w[0] + 104u));
    c.f[1] = ld32((c.r[6].w[0] + 108u));
    c.f[3] = c.f[2] ^ fp::kSign;
    c.f[2] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[6].w[0] + 96u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[6].w[0] + 96u), c.f[0]);
    st32((c.r[6].w[0] + 100u), c.f[3]);
    st32((c.r[6].w[0] + 104u), c.f[2]);
    st32((c.r[6].w[0] + 108u), c.f[1]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0] + 120u), c.r[5].w[0]);  c.pc = t; return; }
L_001BCCE0:
    set32(c.r[9], ld32((c.r[4].w[0] + 80u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[8], c.r[8].w[0] + 10112u);
    set32(c.r[2], c.r[9].w[0] << 4);
    set32(c.r[9], c.r[2].w[0] - c.r[9].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { set32(c.r[25], c.r[2].w[0] + c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00141FC0u | kUnwind; return; } [[clang::musttail]] return unit_0008(c, 165u, depth); }
L_001BCD20:
    set32(c.r[6], ld32((c.r[4].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 10480u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { set32(c.r[25], c.r[2].w[0] + c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00141FC0u | kUnwind; return; } [[clang::musttail]] return unit_0008(c, 165u, depth); }
L_001BCD40:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCD74u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x001BCD74u) [[unlikely]] return; }
L_001BCD74:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCD84u); st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x001BCD84u) [[unlikely]] return; }
L_001BCD84:
    c.f[20] = c.f[0];
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BCDA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BCE38; } }
L_001BCDA8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001BCE38; }
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCDBCu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x001BCDBCu) [[unlikely]] return; }
L_001BCDBC:
    c.f[12] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCDCCu); set32(c.r[5], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x001BCDCCu) [[unlikely]] return; }
L_001BCDCC:
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[6], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCDFCu); st32((c.r[29].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x001BCDFCu) [[unlikely]] return; }
L_001BCDFC:
    c.f[3] = ld32((c.r[29].w[0] + 100u));
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = ld32((c.r[29].w[0] + 108u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    st32((c.r[16].w[0] + 12u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    st32((c.r[16].w[0] + 120u), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 15;
L_001BCE38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001BCE60:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[29].w[0] + 220u), c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCEB4u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x001BCEB4u) [[unlikely]] return; }
L_001BCEB4:
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[6], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[29].w[0] + 224u), c.f[2]);
    st32((c.r[29].w[0] + 228u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCEE4u); st32((c.r[29].w[0] + 236u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0017DE50u; return; } if (c.pc != 0x001BCEE4u) [[unlikely]] return; }
L_001BCEE4:
    c.f[20] = c.f[0];
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_001BCF08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BCFA8; } }
L_001BCF08:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF14u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x001BCF14u) [[unlikely]] return; }
L_001BCF14:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (t) { goto L_001BCFA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF2Cu); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x001BCF2Cu) [[unlikely]] return; }
L_001BCF2C:
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF3Cu); set32(c.r[5], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x001BCF3Cu) [[unlikely]] return; }
L_001BCF3C:
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[6], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 144u), c.f[2]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF6Cu); st32((c.r[29].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x001BCF6Cu) [[unlikely]] return; }
L_001BCF6C:
    c.f[3] = ld32((c.r[29].w[0] + 100u));
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = ld32((c.r[29].w[0] + 108u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    st32((c.r[16].w[0] + 12u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    st32((c.r[16].w[0] + 120u), c.r[17].w[0]);
    c.budget -= 14;
L_001BCFA4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BCFA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_001BCFD0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0] + 64u)));
    c.budget -= 15;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001BD014; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BD1BC; } }
L_001BD014:
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[29].w[0] + 188u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.budget -= 11;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 192u), c.f[0]);  if (t) { goto L_001BD048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD048u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 60u, depth + 1u); else { c.pc = 0x001BC830u; return; } if (c.pc != 0x001BD048u) [[unlikely]] return; }
L_001BD048:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD05Cu); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0013(c, 266u, depth + 1u); else { c.pc = 0x0016EF50u; return; } if (c.pc != 0x001BD05Cu) [[unlikely]] return; }
L_001BD05C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BD080; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001BD1BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD074u);  if (depth < kMaxDepth) unit_0027(c, 64u, depth + 1u); else { c.pc = 0x001BC870u; return; } if (c.pc != 0x001BD074u) [[unlikely]] return; }
L_001BD074:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD1BC; } }
L_001BD080:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001BD1BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD090u); c.r[18].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 259u, depth + 1u); else { c.pc = 0x0016EEB0u; return; } if (c.pc != 0x001BD090u) [[unlikely]] return; }
L_001BD090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001BD198; } }
L_001BD098:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD0A8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x001BD0A8u) [[unlikely]] return; }
L_001BD0A8:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD0BCu); st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x001BD0BCu) [[unlikely]] return; }
L_001BD0BC:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[18].w[0] + 116u), c.f[0]);  if (t) { goto L_001BD160; } }
    c.f[1] = ld32((c.r[18].w[0] + 116u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[18].w[0] + 16u));  goto L_001BD164; }
    set32(c.r[3], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 128u)));  goto L_001BD134; }
    set32(c.r[17], ld32((c.r[18].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001BD124; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 128u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD104u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 51u, depth + 1u); else { c.pc = 0x001BC700u; return; } if (c.pc != 0x001BD104u) [[unlikely]] return; }
L_001BD104:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 128u), c.r[16].w[0]);  if (t) { goto L_001BD110; } }
    st32((c.r[16].w[0] + 124u), c.r[18].w[0]);
    c.budget -= 1;
L_001BD110:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD11Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0027(c, 53u, depth + 1u); else { c.pc = 0x001BC770u; return; } if (c.pc != 0x001BD11Cu) [[unlikely]] return; }
L_001BD11C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD198; } }
L_001BD124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD12Cu);  if (depth < kMaxDepth) unit_0027(c, 64u, depth + 1u); else { c.pc = 0x001BC870u; return; } if (c.pc != 0x001BD12Cu) [[unlikely]] return; }
L_001BD12C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BD1BC; } }
L_001BD134:
    st32((c.r[3].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 128u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001BD150; }
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    st32((c.r[3].w[0] + 124u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_001BD150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD158u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0027(c, 53u, depth + 1u); else { c.pc = 0x001BC770u; return; } if (c.pc != 0x001BD158u) [[unlikely]] return; }
L_001BD158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001BD198; } }
L_001BD160:
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.budget -= 1;
L_001BD164:
    st32((c.r[18].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[18].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    st32((c.r[18].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    st32((c.r[18].w[0] + 108u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 112u), c.f[0]);
    st32((c.r[18].w[0] + 120u), c.r[21].w[0]);
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
L_001BD198:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 128u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD098u | kUnwind; return; } goto L_001BD098; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD1A8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 72u, depth + 1u); else { c.pc = 0x001BC940u; return; } if (c.pc != 0x001BD1A8u) [[unlikely]] return; }
L_001BD1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD1B0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 83u, depth + 1u); else { c.pc = 0x001BCAE0u; return; } if (c.pc != 0x001BD1B0u) [[unlikely]] return; }
L_001BD1B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD1B8u);  if (depth < kMaxDepth) unit_0027(c, 64u, depth + 1u); else { c.pc = 0x001BC870u; return; } if (c.pc != 0x001BD1B8u) [[unlikely]] return; }
L_001BD1B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BD1BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001BD1F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD208u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 286u, depth + 1u); else { c.pc = 0x0017BC80u; return; } if (c.pc != 0x001BD208u) [[unlikely]] return; }
L_001BD208:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BD220:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD254u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0017DE50u; return; } if (c.pc != 0x001BD254u) [[unlikely]] return; }
L_001BD254:
    c.f[20] = c.f[0];
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BD270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BD2E8; } }
L_001BD270:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001BD2E8; }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD288u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x001BD288u) [[unlikely]] return; }
L_001BD288:
    c.f[3] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 92u));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[16].w[0] + 96u), c.f[0]);
    st32((c.r[16].w[0] + 100u), c.f[3]);
    st32((c.r[16].w[0] + 104u), c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD2B4u); st32((c.r[16].w[0] + 108u), c.f[1]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x001BD2B4u) [[unlikely]] return; }
L_001BD2B4:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    st32((c.r[16].w[0] + 120u), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 13;
L_001BD2E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001BD310:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[29].w[0] + 276u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[29].w[0] + 284u), c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD364u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x001BD364u) [[unlikely]] return; }
L_001BD364:
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[29].w[0] + 288u), c.f[2]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    st32((c.r[29].w[0] + 300u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[29].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD3B4u); st32((c.r[29].w[0] + 252u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x001BD3B4u) [[unlikely]] return; }
L_001BD3B4:
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[6], c.r[29].w[0] + 272u);
    st32((c.r[29].w[0] + 264u), c.f[0]);
    set32(c.r[7], c.r[29].w[0] + 240u);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[29].w[0] + 256u), c.f[2]);
    st32((c.r[29].w[0] + 260u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD3E8u); st32((c.r[29].w[0] + 268u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 72u, depth + 1u); else { c.pc = 0x0017CC60u; return; } if (c.pc != 0x001BD3E8u) [[unlikely]] return; }
L_001BD3E8:
    c.f[20] = c.f[0];
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_001BD40C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BD4AC; } }
L_001BD40C:
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD418u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x001BD418u) [[unlikely]] return; }
L_001BD418:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (t) { goto L_001BD4A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD430u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x001BD430u) [[unlikely]] return; }
L_001BD430:
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD440u); set32(c.r[5], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x001BD440u) [[unlikely]] return; }
L_001BD440:
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[6], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 160u), c.f[2]);
    st32((c.r[29].w[0] + 164u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD470u); st32((c.r[29].w[0] + 172u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x001BD470u) [[unlikely]] return; }
L_001BD470:
    c.f[3] = ld32((c.r[29].w[0] + 100u));
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = ld32((c.r[29].w[0] + 108u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    st32((c.r[16].w[0] + 12u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    st32((c.r[16].w[0] + 120u), c.r[17].w[0]);
    c.budget -= 14;
L_001BD4A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BD4AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_001BD4D0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0] + 64u)));
    c.budget -= 15;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001BD514; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BD740; } }
L_001BD514:
    c.f[0] = ld32((c.r[21].w[0]));
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    st32((c.r[29].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 12u));
    st32((c.r[29].w[0] + 252u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 16u));
    st32((c.r[29].w[0] + 256u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 20u));
    st32((c.r[29].w[0] + 260u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 24u));
    st32((c.r[29].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 28u));
    st32((c.r[29].w[0] + 268u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 32u));
    c.budget -= 19;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 272u), c.f[0]);  if (t) { goto L_001BD568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD568u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 60u, depth + 1u); else { c.pc = 0x001BC830u; return; } if (c.pc != 0x001BD568u) [[unlikely]] return; }
L_001BD568:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD57Cu); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0013(c, 269u, depth + 1u); else { c.pc = 0x0016EFB0u; return; } if (c.pc != 0x001BD57Cu) [[unlikely]] return; }
L_001BD57C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BD5A0; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001BD740; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD594u);  if (depth < kMaxDepth) unit_0027(c, 64u, depth + 1u); else { c.pc = 0x001BC870u; return; } if (c.pc != 0x001BD594u) [[unlikely]] return; }
L_001BD594:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD740; } }
L_001BD5A0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001BD740; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD5B0u); c.r[18].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 259u, depth + 1u); else { c.pc = 0x0016EEB0u; return; } if (c.pc != 0x001BD5B0u) [[unlikely]] return; }
L_001BD5B0:
    c.f[0] = ld32((c.r[21].w[0]));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 12u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD5E4u); st32((c.r[29].w[0] + 220u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x001BD5E4u) [[unlikely]] return; }
L_001BD5E4:
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[29].w[0] + 224u), c.f[2]);
    st32((c.r[29].w[0] + 228u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 236u), c.f[0]);  if (t) { goto L_001BD71C; } }
L_001BD608:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD618u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0017DE50u; return; } if (c.pc != 0x001BD618u) [[unlikely]] return; }
L_001BD618:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD628u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x001BD628u) [[unlikely]] return; }
L_001BD628:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD63Cu); st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001B(c, 151u, depth + 1u); else { c.pc = 0x0018EA60u; return; } if (c.pc != 0x001BD63Cu) [[unlikely]] return; }
L_001BD63C:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[18].w[0] + 116u), c.f[0]);  if (t) { goto L_001BD6E0; } }
    c.f[1] = ld32((c.r[18].w[0] + 116u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[18].w[0] + 16u));  goto L_001BD6E4; }
    set32(c.r[3], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 128u)));  goto L_001BD6B4; }
    set32(c.r[17], ld32((c.r[18].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001BD6A4; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 128u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD684u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 51u, depth + 1u); else { c.pc = 0x001BC700u; return; } if (c.pc != 0x001BD684u) [[unlikely]] return; }
L_001BD684:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 128u), c.r[16].w[0]);  if (t) { goto L_001BD690; } }
    st32((c.r[16].w[0] + 124u), c.r[18].w[0]);
    c.budget -= 1;
L_001BD690:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD69Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0027(c, 53u, depth + 1u); else { c.pc = 0x001BC770u; return; } if (c.pc != 0x001BD69Cu) [[unlikely]] return; }
L_001BD69C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD71C; } }
L_001BD6A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD6ACu);  if (depth < kMaxDepth) unit_0027(c, 64u, depth + 1u); else { c.pc = 0x001BC870u; return; } if (c.pc != 0x001BD6ACu) [[unlikely]] return; }
L_001BD6AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BD740; } }
L_001BD6B4:
    st32((c.r[3].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 128u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001BD6D0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    st32((c.r[3].w[0] + 124u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_001BD6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD6D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0027(c, 53u, depth + 1u); else { c.pc = 0x001BC770u; return; } if (c.pc != 0x001BD6D8u) [[unlikely]] return; }
L_001BD6D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001BD71C; } }
L_001BD6E0:
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.budget -= 1;
L_001BD6E4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    st32((c.r[18].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[18].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    st32((c.r[18].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD708u); st32((c.r[18].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x001BD708u) [[unlikely]] return; }
L_001BD708:
    c.f[1] = ld32((c.r[21].w[0] + 32u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 112u), c.f[0]);
    st32((c.r[18].w[0] + 120u), c.r[20].w[0]);
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_001BD71C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 128u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD608u | kUnwind; return; } goto L_001BD608; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD72Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 72u, depth + 1u); else { c.pc = 0x001BC940u; return; } if (c.pc != 0x001BD72Cu) [[unlikely]] return; }
L_001BD72C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD734u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 83u, depth + 1u); else { c.pc = 0x001BCAE0u; return; } if (c.pc != 0x001BD734u) [[unlikely]] return; }
L_001BD734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD73Cu);  if (depth < kMaxDepth) unit_0027(c, 64u, depth + 1u); else { c.pc = 0x001BC870u; return; } if (c.pc != 0x001BD73Cu) [[unlikely]] return; }
L_001BD73C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BD740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_001BD770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD788u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 264u, depth + 1u); else { c.pc = 0x0017B910u; return; } if (c.pc != 0x001BD788u) [[unlikely]] return; }
L_001BD788:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BD7A0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[29].w[0] + 156u), c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD7F4u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x001BD7F4u) [[unlikely]] return; }
L_001BD7F4:
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[6], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[29].w[0] + 160u), c.f[2]);
    st32((c.r[29].w[0] + 164u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD828u); st32((c.r[29].w[0] + 172u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 72u, depth + 1u); else { c.pc = 0x0017CC60u; return; } if (c.pc != 0x001BD828u) [[unlikely]] return; }
L_001BD828:
    c.f[20] = c.f[0];
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BD844; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BD8BC; } }
L_001BD844:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001BD8BC; }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD85Cu); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x001BD85Cu) [[unlikely]] return; }
L_001BD85C:
    c.f[3] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 92u));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[16].w[0] + 96u), c.f[0]);
    st32((c.r[16].w[0] + 100u), c.f[3]);
    st32((c.r[16].w[0] + 104u), c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD888u); st32((c.r[16].w[0] + 108u), c.f[1]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x001BD888u) [[unlikely]] return; }
L_001BD888:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    st32((c.r[16].w[0] + 120u), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 13;
L_001BD8BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001BD8E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001BD8F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001BD900:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 13;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001BD93C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BDA48; } }
L_001BD93C:
    c.f[0] = ld32((c.r[19].w[0]));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[19].w[0] + 16u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD968u); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x001BD968u) [[unlikely]] return; }
L_001BD968:
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 140u), c.f[0]);  if (t) { goto L_001BD994; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD994u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 60u, depth + 1u); else { c.pc = 0x001BC830u; return; } if (c.pc != 0x001BD994u) [[unlikely]] return; }
L_001BD994:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD9A8u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0013(c, 263u, depth + 1u); else { c.pc = 0x0016EEF0u; return; } if (c.pc != 0x001BD9A8u) [[unlikely]] return; }
L_001BD9A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BD9CC; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001BDA48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD9C0u);  if (depth < kMaxDepth) unit_0027(c, 64u, depth + 1u); else { c.pc = 0x001BC870u; return; } if (c.pc != 0x001BD9C0u) [[unlikely]] return; }
L_001BD9C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BDA48; } }
L_001BD9CC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001BDA48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001BDA24; } }
L_001BD9DC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.f[3] = c.f[2] ^ fp::kSign;
    c.f[2] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 96u), c.f[0]);
    st32((c.r[16].w[0] + 100u), c.f[3]);
    st32((c.r[16].w[0] + 104u), c.f[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDA10u); st32((c.r[16].w[0] + 108u), c.f[1]);  if (depth < kMaxDepth) unit_0017(c, 50u, depth + 1u); else { c.pc = 0x0017C690u; return; } if (c.pc != 0x001BDA10u) [[unlikely]] return; }
L_001BDA10:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    st32((c.r[16].w[0] + 120u), c.r[19].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 5;
L_001BDA24:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.f[2] = ld32((c.r[16].w[0] + 20u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD9DCu | kUnwind; return; } goto L_001BD9DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDA34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 72u, depth + 1u); else { c.pc = 0x001BC940u; return; } if (c.pc != 0x001BDA34u) [[unlikely]] return; }
L_001BDA34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDA3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 83u, depth + 1u); else { c.pc = 0x001BCAE0u; return; } if (c.pc != 0x001BDA3Cu) [[unlikely]] return; }
L_001BDA3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDA44u);  if (depth < kMaxDepth) unit_0027(c, 64u, depth + 1u); else { c.pc = 0x001BC870u; return; } if (c.pc != 0x001BDA44u) [[unlikely]] return; }
L_001BDA44:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BDA48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001BDA70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001BDA80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001BDA90:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 140u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDABCu); set32(c.r[7], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0027(c, 186u, depth + 1u); else { c.pc = 0x001BDC60u; return; } if (c.pc != 0x001BDABCu) [[unlikely]] return; }
L_001BDABC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BDACC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BDB5C; } }
L_001BDACC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001BDB5C; }
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDB04u); st32((c.r[16].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0017DE50u; return; } if (c.pc != 0x001BDB04u) [[unlikely]] return; }
L_001BDB04:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDB14u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x001BDB14u) [[unlikely]] return; }
L_001BDB14:
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[16].w[0] + 96u), c.f[0]);
    st32((c.r[16].w[0] + 100u), c.f[3]);
    st32((c.r[16].w[0] + 104u), c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDB3Cu); st32((c.r[16].w[0] + 108u), c.f[1]);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x001BDB3Cu) [[unlikely]] return; }
L_001BDB3C:
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDB54u); st32((c.r[16].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x001BDB54u) [[unlikely]] return; }
L_001BDB54:
    st32((c.r[16].w[0] + 120u), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001BDB5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001BDB80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDBB4u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 72u, depth + 1u); else { c.pc = 0x0017CC60u; return; } if (c.pc != 0x001BDBB4u) [[unlikely]] return; }
L_001BDBB4:
    c.f[1] = ld32((c.r[28].w[0] - 32236u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001BDBCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BDC44; } }
L_001BDBCC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001BDC44; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDBE4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x001BDBE4u) [[unlikely]] return; }
L_001BDBE4:
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[16].w[0] + 96u), c.f[0]);
    st32((c.r[16].w[0] + 100u), c.f[3]);
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 108u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC2Cu); st32((c.r[16].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 153u, depth + 1u); else { c.pc = 0x0018EAC0u; return; } if (c.pc != 0x001BDC2Cu) [[unlikely]] return; }
L_001BDC2C:
    set32(c.r[4], c.r[16].w[0] + 96u);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDC3Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 152u, depth + 1u); else { c.pc = 0x0018EA90u; return; } if (c.pc != 0x001BDC3Cu) [[unlikely]] return; }
L_001BDC3C:
    st32((c.r[16].w[0] + 120u), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001BDC44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001BDC60:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDCA0u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x001BDCA0u) [[unlikely]] return; }
L_001BDCA0:
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.f[7] = ld32((c.r[18].w[0] + 20u));
    c.f[6] = ld32((c.r[18].w[0] + 16u));
    c.f[5] = ld32((c.r[18].w[0] + 24u));
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[7]);
    c.f[3] = ld32((c.r[29].w[0] + 372u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[1] = ld32((c.r[29].w[0] + 368u));
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[7]);
    c.f[2] = ld32((c.r[29].w[0] + 376u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[6]);
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[20]);
    c.f[4] = 0u;
    c.f[12] = fp::ee::msub(c.fcr31, c.facc, c.f[21], c.f[0]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[4]));
    c.budget -= 25;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BDD10; } }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BDFD0; } }
L_001BDD10:
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[4]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[20] ^ fp::kSign;  goto L_001BDF28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD24u);  if (depth < kMaxDepth) unit_0019(c, 5u, depth + 1u); else { c.pc = 0x00184060u; return; } if (c.pc != 0x001BDD24u) [[unlikely]] return; }
L_001BDD24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[2].w[0];
    c.f[3] = fp::ee::div(c.fcr31, c.f[4], c.f[21]);
    c.f[2] = c.f[20] ^ fp::kSign;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[12] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[4]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);  if (t) { goto L_001BDD64; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BDD70; } }
L_001BDD64:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BDFD0; } }
L_001BDD70:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 1u);  goto L_001BDEBC; }
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[4]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 2u);  goto L_001BDDF4; }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD9Cu); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x001BDD9Cu) [[unlikely]] return; }
L_001BDD9C:
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    set32(c.r[6], c.r[29].w[0] + 336u);
    st32((c.r[29].w[0] + 344u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[29].w[0] + 336u), c.f[2]);
    st32((c.r[29].w[0] + 340u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDDCCu); st32((c.r[29].w[0] + 348u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x001BDDCCu) [[unlikely]] return; }
L_001BDDCC:
    c.f[3] = ld32((c.r[29].w[0] + 244u));
    set32(c.r[2], 0u + 1u);
    c.f[2] = ld32((c.r[29].w[0] + 248u));
    c.f[1] = ld32((c.r[29].w[0] + 252u));
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[1]);  if (t) { goto L_001BDFD0; } }
L_001BDDF4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE04u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x001BDE04u) [[unlikely]] return; }
L_001BDE04:
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    set32(c.r[6], c.r[29].w[0] + 320u);
    st32((c.r[29].w[0] + 328u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[29].w[0] + 320u), c.f[2]);
    st32((c.r[29].w[0] + 324u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE34u); st32((c.r[29].w[0] + 332u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x001BDE34u) [[unlikely]] return; }
L_001BDE34:
    c.f[3] = ld32((c.r[29].w[0] + 228u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[2] = ld32((c.r[29].w[0] + 232u));
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.f[1] = ld32((c.r[29].w[0] + 236u));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.f[12] = c.f[20];
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE64u); st32((c.r[16].w[0] + 12u), c.f[1]);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x001BDE64u) [[unlikely]] return; }
L_001BDE64:
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[6], c.r[29].w[0] + 304u);
    st32((c.r[29].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[29].w[0] + 304u), c.f[2]);
    st32((c.r[29].w[0] + 308u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE94u); st32((c.r[29].w[0] + 316u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x001BDE94u) [[unlikely]] return; }
L_001BDE94:
    c.f[3] = ld32((c.r[29].w[0] + 212u));
    set32(c.r[2], 0u + 1u);
    c.f[2] = ld32((c.r[29].w[0] + 216u));
    c.f[1] = ld32((c.r[29].w[0] + 220u));
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[3]);
    st32((c.r[16].w[0] + 24u), c.f[2]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.f[1]);  if (t) { goto L_001BDFD0; } }
L_001BDEBC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[12] = c.f[20];
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDED0u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x001BDED0u) [[unlikely]] return; }
L_001BDED0:
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[6], c.r[29].w[0] + 288u);
    st32((c.r[29].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[29].w[0] + 288u), c.f[2]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF00u); st32((c.r[29].w[0] + 300u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x001BDF00u) [[unlikely]] return; }
L_001BDF00:
    c.f[3] = ld32((c.r[29].w[0] + 196u));
    set32(c.r[2], 0u + 1u);
    c.f[2] = ld32((c.r[29].w[0] + 200u));
    c.f[1] = ld32((c.r[29].w[0] + 204u));
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[1]);  if (t) { goto L_001BDFD0; } }
L_001BDF28:
    c.f[12] = fp::ee::div(c.fcr31, c.f[0], c.f[21]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[12]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[17].w[0]), 0u);  goto L_001BDFCC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BDFC8; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF70u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 156u, depth + 1u); else { c.pc = 0x0018EB40u; return; } if (c.pc != 0x001BDF70u) [[unlikely]] return; }
L_001BDF70:
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[6], c.r[29].w[0] + 272u);
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[29].w[0] + 272u), c.f[2]);
    st32((c.r[29].w[0] + 276u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDFA0u); st32((c.r[29].w[0] + 284u), c.f[0]);  if (depth < kMaxDepth) unit_001B(c, 154u, depth + 1u); else { c.pc = 0x0018EAF0u; return; } if (c.pc != 0x001BDFA0u) [[unlikely]] return; }
L_001BDFA0:
    c.f[3] = ld32((c.r[29].w[0] + 180u));
    set32(c.r[2], 0u + 1u);
    c.f[2] = ld32((c.r[29].w[0] + 184u));
    c.f[1] = ld32((c.r[29].w[0] + 188u));
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[1]);  if (t) { goto L_001BDFD0; } }
L_001BDFC8:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_001BDFCC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BDFD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_001BE000:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[29].w[0] + 92u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE050u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 155u, depth + 1u); else { c.pc = 0x0018EB10u; return; } if (c.pc != 0x001BE050u) [[unlikely]] return; }
L_001BE050:
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE080u); st32((c.r[29].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0017DE50u; return; } if (c.pc != 0x001BE080u) [[unlikely]] return; }
L_001BE080:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001BE0A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 11272u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE0D4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001BE0D4u) [[unlikely]] return; }
L_001BE0D4:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001BE10C; } }
L_001BE0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE0E8u); set32(c.r[4], 0u + 336u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001BE0E8u) [[unlikely]] return; }
L_001BE0E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_001BE0FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE0F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 215u, depth + 1u); else { c.pc = 0x001BE290u; return; } if (c.pc != 0x001BE0F8u) [[unlikely]] return; }
L_001BE0F8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_001BE0FC:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_001BE10C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BE0E0u | kUnwind; return; } goto L_001BE0E0; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BE140:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001BE200; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 11272u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_001BE1EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001BE1C0; } }
L_001BE184:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001BE1C0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_001BE1B4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE1B0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BE1B0u) [[unlikely]] return; }
L_001BE1B0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_001BE1B4:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_001BE1C0:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BE184u | kUnwind; return; } goto L_001BE184; }
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BE1E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE1E4u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x001BE1E4u) [[unlikely]] return; }
L_001BE1E4:
    st32((c.r[19].w[0] + 4u), 0u);
    c.budget -= 1;
L_001BE1E8:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_001BE1EC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_001BE204; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE200u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001BE200u) [[unlikely]] return; }
L_001BE200:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001BE204:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BE220:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 11304u);
    st32((c.r[4].w[0] + 144u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 96u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 100u), 0u);  c.pc = t; return; }
L_001BE240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001BE27C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 11304u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 144u), c.r[3].w[0]);  if (t) { goto L_001BE278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE278u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001BE278u) [[unlikely]] return; }
L_001BE278:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001BE27C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BE290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 11288u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE2B0u); st32((c.r[4].w[0] + 320u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0027(c, 212u, depth + 1u); else { c.pc = 0x001BE220u; return; } if (c.pc != 0x001BE2B0u) [[unlikely]] return; }
L_001BE2B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE2B8u); set32(c.r[4], c.r[16].w[0] + 160u);  if (depth < kMaxDepth) unit_0027(c, 212u, depth + 1u); else { c.pc = 0x001BE220u; return; } if (c.pc != 0x001BE2B8u) [[unlikely]] return; }
L_001BE2B8:
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[2], c.r[16].w[0] + 160u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 256u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 260u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BE2E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BE340; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[17].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] + 11288u);
    set32(c.r[5], 0u - 1u);
    st32((c.r[17].w[0] + 320u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 100u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE31Cu); st32((c.r[17].w[0] + 256u), 0u);  if (depth < kMaxDepth) unit_0027(c, 213u, depth + 1u); else { c.pc = 0x001BE240u; return; } if (c.pc != 0x001BE31Cu) [[unlikely]] return; }
L_001BE31C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE328u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0027(c, 213u, depth + 1u); else { c.pc = 0x001BE240u; return; } if (c.pc != 0x001BE328u) [[unlikely]] return; }
L_001BE328:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001BE344; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE340u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001BE340u) [[unlikely]] return; }
L_001BE340:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001BE344:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BE360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 100u)));  if (t) { goto L_001BE378; } }
L_001BE368:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 100u)));  goto L_001BE378; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BE39C; } }
L_001BE378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BE368u | kUnwind; return; } goto L_001BE368; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 256u)));
    set32(c.r[3], c.r[4].w[0] + 160u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[6].w[0] + 100u), c.r[5].w[0]);
    st32((c.r[5].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 256u), c.r[5].w[0]);
    c.budget -= 7;
L_001BE39C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BE3B0:
    set32(c.r[4], ld32((c.r[5].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 100u)));  goto L_001BE3C8; }
    set32(c.r[3], ld32((c.r[5].w[0] + 100u)));
    st32((c.r[4].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 100u)));
    c.budget -= 3;
L_001BE3C8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[5].w[0] + 96u), 0u);  goto L_001BE3DC; }
    set32(c.r[3], ld32((c.r[5].w[0] + 96u)));
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 96u), 0u);
    c.budget -= 3;
L_001BE3DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 100u), 0u);  c.pc = t; return; }
L_001BE3F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[8], c.r[8].w[0] + 10544u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE414u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 262u, depth + 1u); else { c.pc = 0x001BE990u; return; } if (c.pc != 0x001BE414u) [[unlikely]] return; }
L_001BE414:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4E4D0000u);
    set32(c.r[3], c.r[3].w[0] + 11328u);
    c.r[2].d[0] = c.r[2].d[0] | 17479ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[17].w[0] + 240u), 0u);  if (t) { goto L_001BE43C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE43Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 244u, depth + 1u); else { c.pc = 0x001BE710u; return; } if (c.pc != 0x001BE43Cu) [[unlikely]] return; }
L_001BE43C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BE460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001BE56C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE48Cu);  if (depth < kMaxDepth) unit_0027(c, 297u, depth + 1u); else { c.pc = 0x001BF0B0u; return; } if (c.pc != 0x001BE48Cu) [[unlikely]] return; }
L_001BE48C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 56u)));  goto L_001BE4B0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001BE56C; } }
L_001BE4B0:
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 56u)));  goto L_001BE510; }
    set32(c.r[5], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE4C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x001BE740u; return; } if (c.pc != 0x001BE4C8u) [[unlikely]] return; }
L_001BE4C8:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BE50C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BE50C; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BE50C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE50Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BE50Cu) [[unlikely]] return; }
L_001BE50C:
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_001BE510:
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001BE570; }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 56u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BE56C; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BE56C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BE56C; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BE56C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE56Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BE56Cu) [[unlikely]] return; }
L_001BE56C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001BE570:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BE580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001BE5D8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    st32((c.r[3].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE5CCu); st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 107u, depth + 1u); else { c.pc = 0x00164CA0u; return; } if (c.pc != 0x001BE5CCu) [[unlikely]] return; }
L_001BE5CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE5D8u); set32(c.r[4], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_0011(c, 104u, depth + 1u); else { c.pc = 0x00164C60u; return; } if (c.pc != 0x001BE5D8u) [[unlikely]] return; }
L_001BE5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE5E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 296u, depth + 1u); else { c.pc = 0x001BF050u; return; } if (c.pc != 0x001BE5E0u) [[unlikely]] return; }
L_001BE5E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001BE698; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE5F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 274u, depth + 1u); else { c.pc = 0x001BEC30u; return; } if (c.pc != 0x001BE5F0u) [[unlikely]] return; }
L_001BE5F0:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 228u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BE694; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BE694; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE630u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 292u, depth + 1u); else { c.pc = 0x001BEFD0u; return; } if (c.pc != 0x001BE630u) [[unlikely]] return; }
L_001BE630:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE640u); set32(c.r[5], c.r[5].w[0] + 10552u);  if (depth < kMaxDepth) unit_0027(c, 278u, depth + 1u); else { c.pc = 0x001BECF0u; return; } if (c.pc != 0x001BE640u) [[unlikely]] return; }
L_001BE640:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] + 10568u);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE67Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001BE67Cu) [[unlikely]] return; }
L_001BE67C:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 6;
L_001BE694:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001BE698:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BE6B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001BE704; }
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xA0000000u);
    c.f[2] = ld32((c.r[2].w[0] + 16u));
    c.f[1] = ld32((c.r[2].w[0] + 20u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    c.f[12] = fp::cvt_s_w(c.f[2]);
    c.f[13] = fp::cvt_s_w(c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE6F8u); c.f[15] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0029(c, 161u, depth + 1u); else { c.pc = 0x001C4F90u; return; } if (c.pc != 0x001BE6F8u) [[unlikely]] return; }
L_001BE6F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE700u);  if (depth < kMaxDepth) unit_0011(c, 113u, depth + 1u); else { c.pc = 0x00164D10u; return; } if (c.pc != 0x001BE700u) [[unlikely]] return; }
L_001BE700:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001BE704:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BE710:
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x001BC000u < 16384u) { entry = entries_0027[(t - 0x001BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001BE730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BE740:
    set32(c.r[6], ld32((c.r[4].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001BE75C; } }
    st32((c.r[4].w[0] + 240u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), 0u);  if (t) { goto L_001BE7D4; } }
L_001BE75C:
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { c.r[3].d[0] = 0ull + 0ull;  goto L_001BE7B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 240u), 0u);  if (t) { goto L_001BE77C; } }
L_001BE76C:
    set32(c.r[3], ld32((c.r[4].w[0] + 240u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 236u)));
    c.budget -= 4;
L_001BE77C:
    set32(c.r[3], ld32((c.r[6].w[0] + 236u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BE76Cu | kUnwind; return; } goto L_001BE76C; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[6].w[0]);  if (t) { goto L_001BE7D4; } }
L_001BE794:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[6], ld32((c.r[6].w[0] + 236u)));  goto L_001BE7AC; }
    st32((c.r[4].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[6].w[0]);  if (t) { goto L_001BE7BC; } }
L_001BE7AC:
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_001BE7B4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BE794u | kUnwind; return; } goto L_001BE794; } }
L_001BE7BC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001BE7D4; } }
    st32((c.r[4].w[0] + 240u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0] + 228u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 4;
L_001BE7D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BE7E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 40u)));  goto L_001BE898; }
    set32(c.r[6], ld32((c.r[5].w[0] + 40u)));
    c.r[5].d[0] = ld64((c.r[6].w[0] + 96u));
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[5].d[0] & 2ull;  goto L_001BE834; }
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE82Cu); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x001BE740u; return; } if (c.pc != 0x001BE82Cu) [[unlikely]] return; }
L_001BE82C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001BE8D4; } }
L_001BE834:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[6].w[0] + 80u));  goto L_001BE854; }
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE84Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x001BE740u; return; } if (c.pc != 0x001BE84Cu) [[unlikely]] return; }
L_001BE84C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BE8D0; } }
L_001BE854:
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BE8D0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BE8D0; } }
    set32(c.r[16], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE888u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x001BE740u; return; } if (c.pc != 0x001BE888u) [[unlikely]] return; }
L_001BE888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE890u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 244u, depth + 1u); else { c.pc = 0x001BE710u; return; } if (c.pc != 0x001BE890u) [[unlikely]] return; }
L_001BE890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BE8D0; } }
L_001BE898:
    c.r[3].d[0] = ld64((c.r[3].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BE8D0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BE8D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE8C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x001BE740u; return; } if (c.pc != 0x001BE8C8u) [[unlikely]] return; }
L_001BE8C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE8D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 244u, depth + 1u); else { c.pc = 0x001BE710u; return; } if (c.pc != 0x001BE8D0u) [[unlikely]] return; }
L_001BE8D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001BE8D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BE8E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BE928; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE910u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0027(c, 270u, depth + 1u); else { c.pc = 0x001BEBA0u; return; } if (c.pc != 0x001BE910u) [[unlikely]] return; }
L_001BE910:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001BE92C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE928u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001BE928u) [[unlikely]] return; }
L_001BE928:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001BE92C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BE940:
    set32(c.r[3], ld32((c.r[5].w[0] + 188u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 192u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_001BE960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0] + 8u), c.r[5].d[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    st32((c.r[4].w[0] + 188u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 192u), c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BE980:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001BE990:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE9C4u); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x001BE9C4u) [[unlikely]] return; }
L_001BE9C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11568u);
    set32(c.r[4], c.r[19].w[0] + 60u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[6], 0u + 63u);
    st32((c.r[19].w[0] + 188u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x424D0000u);
    st32((c.r[19].w[0] + 192u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 17479ull;
    st32((c.r[19].w[0] + 196u), 0u);
    st32((c.r[19].w[0] + 200u), 0u);
    st32((c.r[19].w[0] + 204u), 0u);
    st32((c.r[19].w[0] + 208u), 0u);
    st32((c.r[19].w[0] + 212u), 0u);
    st32((c.r[19].w[0] + 216u), 0u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEA10u); st32((c.r[19].w[0] + 52u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x001BEA10u) [[unlikely]] return; }
L_001BEA10:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEA20u); set32(c.r[6], 0u + 63u);  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x001BEA20u) [[unlikely]] return; }
L_001BEA20:
    st32((c.r[19].w[0] + 224u), c.r[18].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 228u), 0u);
    st32((c.r[19].w[0] + 232u), 0u);
    st32((c.r[19].w[0] + 236u), 0u);
    st32((c.r[19].w[0] + 56u), 0u);
    st32((c.r[19].w[0] + 188u), 0u);
    st32((c.r[19].w[0] + 192u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 196u), 0u);
    st32((c.r[19].w[0] + 200u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 204u), 0u);
    st32((c.r[19].w[0] + 208u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 212u), 0u);
    st32((c.r[19].w[0] + 216u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 20;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 224u)));  goto L_001BEB1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEA78u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001BEA78u) [[unlikely]] return; }
L_001BEA78:
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[7], 0u + 12u);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    set32(c.r[4], 0u + 24u);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 20u);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    st32((c.r[2].w[0] + 40u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    st32((c.r[2].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    st32((c.r[2].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    st32((c.r[2].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    st32((c.r[2].w[0] + 84u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEB04u); set32(c.r[4], c.r[2].w[0] + 44u);  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x001BEB04u) [[unlikely]] return; }
L_001BEB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEB0Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 297u, depth + 1u); else { c.pc = 0x001BF0B0u; return; } if (c.pc != 0x001BEB0Cu) [[unlikely]] return; }
L_001BEB0C:
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 60u), 0u);  if (t) { goto L_001BEB78; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 224u)));
    c.budget -= 1;
L_001BEB1C:
    set32(c.r[2], c.r[3].w[0] + 228u);
    set32(c.r[3], ld32((c.r[3].w[0] + 228u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 236u)));  goto L_001BEB3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[19].w[0]);  if (t) { goto L_001BEB58; } }
L_001BEB34:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 236u)));
    c.budget -= 2;
L_001BEB3C:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BEB34u | kUnwind; return; } goto L_001BEB34; } }
    st32((c.r[3].w[0] + 236u), c.r[19].w[0]);
    st32((c.r[19].w[0] + 232u), c.r[3].w[0]);
    c.budget -= 2;
L_001BEB58:
    set32(c.r[2], ld32((c.r[19].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_001BEB7C; }
    st32((c.r[3].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_001BEB78:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001BEB7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001BEBA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BEC0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 11568u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001BEBEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEBE4u); set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001BEBE4u) [[unlikely]] return; }
L_001BEBE4:
    st32((c.r[17].w[0] + 56u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001BEBEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEBF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x001BEBF4u) [[unlikely]] return; }
L_001BEBF4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001BEC10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEC0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001BEC0Cu) [[unlikely]] return; }
L_001BEC0C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001BEC10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BEC30:
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 5;
    { set32(c.r[7], c.r[4].w[0] + 60u);  goto L_001BEDB0; }
L_001BEC50:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 128u), c.r[6].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 136u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 168u), c.r[11].d[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001BEC90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001BEC9C; } }
L_001BEC90:
    set32(c.r[2], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 3;
L_001BEC9C:
    c.r[6].d[0] = c.r[5].d[0] << 32;
    set32(c.r[2], c.r[29].w[0] + 176u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[7], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BECB8u); set32(c.r[5], 0u + 63u);  if (depth < kMaxDepth) unit_000A(c, 326u, depth + 1u); else { c.pc = 0x0014BE60u; return; } if (c.pc != 0x001BECB8u) [[unlikely]] return; }
L_001BECB8:
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 32u);
    set32(c.r[5], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BECE0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0027(c, 282u, depth + 1u); else { c.pc = 0x001BEDB0u; return; } if (c.pc != 0x001BECE0u) [[unlikely]] return; }
L_001BECE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001BECF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 10576u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED2Cu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001BED2Cu) [[unlikely]] return; }
L_001BED2C:
    set32(c.r[16], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED3Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001BED3Cu) [[unlikely]] return; }
L_001BED3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BED74; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED64u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001BED64u) [[unlikely]] return; }
L_001BED64:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_001BED74:
    st32((c.r[16].w[0] + 32u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 36u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BEDB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 10576u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEDF4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001BEDF4u) [[unlikely]] return; }
L_001BEDF4:
    set32(c.r[16], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEE04u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001BEE04u) [[unlikely]] return; }
L_001BEE04:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BEE34; } }
    set32(c.r[16], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEE28u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001BEE28u) [[unlikely]] return; }
L_001BEE28:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_001BEE34:
    st32((c.r[16].w[0] + 32u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001BEE70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 8;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[16], ld32((c.r[4].w[0] + 228u)));  goto L_001BEEB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001BEEBC; } }
L_001BEE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEEA0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 286u, depth + 1u); else { c.pc = 0x001BEE70u; return; } if (c.pc != 0x001BEEA0u) [[unlikely]] return; }
L_001BEEA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 236u)));  goto L_001BEEB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001BEEC0; } }
L_001BEEB0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BEE98u | kUnwind; return; } goto L_001BEE98; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BEEBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001BEEC0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BEED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 228u)));  goto L_001BEF4C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 236u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 232u)));  goto L_001BEF14; }
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[4].w[0]);  if (t) { goto L_001BEF2C; } }
L_001BEF14:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  goto L_001BEF28; }
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[4].w[0]);  if (t) { goto L_001BEF2C; } }
L_001BEF28:
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 1;
L_001BEF2C:
    set32(c.r[4], ld32((c.r[16].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BEF4C; } }
L_001BEF38:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEF48u); set32(c.r[17], ld32((c.r[4].w[0] + 236u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BEF48u) [[unlikely]] return; }
L_001BEF48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001BEF4C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BEF38u | kUnwind; return; } goto L_001BEF38; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_001BEFB0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[4], c.r[3].w[0] + 228u);
    set32(c.r[3], ld32((c.r[3].w[0] + 228u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[16].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 232u)));  goto L_001BEF88; }
    set32(c.r[3], ld32((c.r[16].w[0] + 236u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_001BEFAC; } }
L_001BEF88:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 236u)));  goto L_001BEF9C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 236u)));
    st32((c.r[4].w[0] + 236u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 236u)));
    c.budget -= 3;
L_001BEF9C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BEFAC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 232u)));
    st32((c.r[4].w[0] + 232u), c.r[3].w[0]);
    c.budget -= 2;
L_001BEFAC:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_001BEFB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BEFD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 228u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001BF020; } }
L_001BEFF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEFFCu); set32(c.r[4], c.r[16].w[0] + 60u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001BEFFCu) [[unlikely]] return; }
L_001BEFFC:
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 60u);  goto L_001BF010; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 236u)));  if (t) { goto L_001BF020; } }
L_001BF010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF018u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001BF018u) [[unlikely]] return; }
L_001BF018:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[16].w[0] + 236u)));
    c.budget -= 2;
L_001BF020:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BEFF4u | kUnwind; return; } goto L_001BEFF4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[4], c.r[17].w[0] + 2u);
    st32((c.r[3].w[0] + 68u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BF050:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[3].w[0] + 8u)));  goto L_001BF068; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BF0A0; } }
L_001BF068:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 52u)));  goto L_001BF078; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BF0A0; } }
L_001BF078:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001BF0A0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001BF09C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BF0A0; } }
L_001BF09C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BF0A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BF0B0:
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BF0D8; } }
    set32(c.r[3], 0u - 1u);
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    st32((c.r[3].w[0] + 56u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    st32((c.r[3].w[0] + 44u), 0u);
    c.budget -= 6;
L_001BF0D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BF0E0:
    set32(c.r[6], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BF130; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    st32((c.r[6].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    st32((c.r[3].w[0] + 56u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    st32((c.r[3].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 224u)));  goto L_001BF128; }
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 48u), 0u);  if (t) { goto L_001BF130; } }
L_001BF128:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    st32((c.r[3].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 2;
L_001BF130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BF140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF15Cu); c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 262u, depth + 1u); else { c.pc = 0x001BE990u; return; } if (c.pc != 0x001BF15Cu) [[unlikely]] return; }
L_001BF15C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x494D0000u);
    set32(c.r[3], c.r[3].w[0] + 11488u);
    c.r[2].d[0] = c.r[2].d[0] | 17479ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 220u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BF190:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 40u)));
    c.r[3].d[0] = ld64((c.r[5].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001BF1CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF1C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0027(c, 298u, depth + 1u); else { c.pc = 0x001BF0E0u; return; } if (c.pc != 0x001BF1C4u) [[unlikely]] return; }
L_001BF1C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001BF3B8; } }
L_001BF1CC:
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.r[5].d[0] = ld64((c.r[5].w[0] + 96u));
    c.r[3].d[0] = c.r[5].d[0] & 8ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[5].d[0] & 4ull;  goto L_001BF2C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF1F0u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0027(c, 325u, depth + 1u); else { c.pc = 0x001BF4B0u; return; } if (c.pc != 0x001BF1F0u) [[unlikely]] return; }
L_001BF1F0:
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 188u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF200u); c.f[20] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001BF200u) [[unlikely]] return; }
L_001BF200:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.r[3].d[0] = ld64((c.r[2].w[0] + 72u));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 256ull;  goto L_001BF258; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    set32(c.r[2], 0u + 2u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF24Cu); st32((c.r[29].w[0] + 96u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 346u, depth + 1u); else { c.pc = 0x0020B640u; return; } if (c.pc != 0x001BF24Cu) [[unlikely]] return; }
L_001BF24C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_001BF2AC; } }
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 1;
L_001BF258:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_001BF294; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[2], 0u + 2u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 88u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF288u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 346u, depth + 1u); else { c.pc = 0x0020B640u; return; } if (c.pc != 0x001BF288u) [[unlikely]] return; }
L_001BF288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF2A8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001BF294:
    set32(c.r[4], c.r[29].w[0] + 104u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF2A8u); st32((c.r[29].w[0] + 80u), c.f[20]);  if (depth < kMaxDepth) unit_003A(c, 346u, depth + 1u); else { c.pc = 0x0020B640u; return; } if (c.pc != 0x001BF2A8u) [[unlikely]] return; }
L_001BF2A8:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_001BF2AC:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 104u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF2BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BF2BCu) [[unlikely]] return; }
L_001BF2BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001BF3AC; } }
    c.r[3].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 1;
L_001BF2C8:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BF3B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF2DCu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0027(c, 325u, depth + 1u); else { c.pc = 0x001BF4B0u; return; } if (c.pc != 0x001BF2DCu) [[unlikely]] return; }
L_001BF2DC:
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 188u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF2ECu); c.f[20] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001BF2ECu) [[unlikely]] return; }
L_001BF2EC:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.r[3].d[0] = ld64((c.r[2].w[0] + 72u));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 256ull;  goto L_001BF344; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    set32(c.r[2], 0u + 2u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF338u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 349u, depth + 1u); else { c.pc = 0x0020B6B0u; return; } if (c.pc != 0x001BF338u) [[unlikely]] return; }
L_001BF338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_001BF398; } }
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 1;
L_001BF344:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_001BF380; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[2], 0u + 2u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF374u); st32((c.r[29].w[0] + 64u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 349u, depth + 1u); else { c.pc = 0x0020B6B0u; return; } if (c.pc != 0x001BF374u) [[unlikely]] return; }
L_001BF374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF394; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001BF380:
    set32(c.r[4], c.r[29].w[0] + 104u);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 56u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF394u); st32((c.r[29].w[0] + 56u), c.f[20]);  if (depth < kMaxDepth) unit_003A(c, 349u, depth + 1u); else { c.pc = 0x0020B6B0u; return; } if (c.pc != 0x001BF394u) [[unlikely]] return; }
L_001BF394:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_001BF398:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 104u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF3A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BF3A8u) [[unlikely]] return; }
L_001BF3A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001BF3AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF3B4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0027(c, 298u, depth + 1u); else { c.pc = 0x001BF0E0u; return; } if (c.pc != 0x001BF3B4u) [[unlikely]] return; }
L_001BF3B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001BF3B8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001BF3D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[5].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF3F0u); set32(c.r[4], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001BF3F0u) [[unlikely]] return; }
L_001BF3F0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF3FCu); set32(c.r[4], c.r[16].w[0] + 196u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001BF3FCu) [[unlikely]] return; }
L_001BF3FC:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 56u);  goto L_001BF43C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 196u);  goto L_001BF424; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF41Cu); set32(c.r[4], c.r[16].w[0] + 204u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001BF41Cu) [[unlikely]] return; }
L_001BF41C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 188u), c.r[2].w[0]);  if (t) { goto L_001BF430; } }
L_001BF424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF42Cu);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001BF42Cu) [[unlikely]] return; }
L_001BF42C:
    st32((c.r[16].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 1;
L_001BF430:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_001BF49C; } }
L_001BF43C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF444u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001BF444u) [[unlikely]] return; }
L_001BF444:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF450u); set32(c.r[4], c.r[16].w[0] + 204u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001BF450u) [[unlikely]] return; }
L_001BF450:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_001BF490; }
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 204u);  goto L_001BF478; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF470u); set32(c.r[4], c.r[16].w[0] + 196u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001BF470u) [[unlikely]] return; }
L_001BF470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 188u), c.r[2].w[0]);  if (t) { goto L_001BF484; } }
L_001BF478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF480u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001BF480u) [[unlikely]] return; }
L_001BF480:
    st32((c.r[16].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 1;
L_001BF484:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_001BF49C; } }
L_001BF490:
    st32((c.r[16].w[0] + 188u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0] + 192u), c.r[3].w[0]);
    c.budget -= 3;
L_001BF49C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BF4B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.f[3] = 0u;
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001BF504; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 80u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 84u), 0u);  if (t) { goto L_001BF5D0; } }
L_001BF504:
    c.f[0] = ld32((c.r[28].w[0] - 32668u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  goto L_001BF534; }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], c.r[16].w[0] + 212u);
    st32((c.r[2].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF52Cu); st32((c.r[2].w[0] + 84u), 0u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001BF52Cu) [[unlikely]] return; }
L_001BF52C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001BF5D4; } }
L_001BF534:
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 80u)));  goto L_001BF554; }
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001BF574; }
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 1;
L_001BF554:
    set32(c.r[4], c.r[16].w[0] + 212u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF56Cu); st32((c.r[2].w[0] + 84u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001BF56Cu) [[unlikely]] return; }
L_001BF56C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF5D0; } }
L_001BF574:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = ld32((c.r[28].w[0] - 32664u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[3]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BF5AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF5A4u); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x001BF5A4u) [[unlikely]] return; }
L_001BF5A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0] ^ fp::kSign;  if (t) { goto L_001BF5B8; } }
L_001BF5AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF5B4u);  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x001BF5B4u) [[unlikely]] return; }
L_001BF5B4:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_001BF5B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF5C0u); set32(c.r[4], c.r[16].w[0] + 212u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001BF5C0u) [[unlikely]] return; }
L_001BF5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF5C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x001BF5C8u) [[unlikely]] return; }
L_001BF5C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF5D0u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0014(c, 399u, depth + 1u); else { c.pc = 0x00173CD0u; return; } if (c.pc != 0x001BF5D0u) [[unlikely]] return; }
L_001BF5D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001BF5D4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BF5F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF60Cu); c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 262u, depth + 1u); else { c.pc = 0x001BE990u; return; } if (c.pc != 0x001BF60Cu) [[unlikely]] return; }
L_001BF60C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x464D0000u);
    set32(c.r[3], c.r[3].w[0] + 11408u);
    c.r[2].d[0] = c.r[2].d[0] | 17479ull;
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 220u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BF640:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 40u)));
    c.r[3].d[0] = ld64((c.r[5].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001BF67C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF674u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0027(c, 298u, depth + 1u); else { c.pc = 0x001BF0E0u; return; } if (c.pc != 0x001BF674u) [[unlikely]] return; }
L_001BF674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001BF848; } }
L_001BF67C:
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.r[5].d[0] = ld64((c.r[5].w[0] + 96u));
    c.r[3].d[0] = c.r[5].d[0] & 8ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[5].d[0] & 4ull;  goto L_001BF768; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF6A0u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0027(c, 359u, depth + 1u); else { c.pc = 0x001BF940u; return; } if (c.pc != 0x001BF6A0u) [[unlikely]] return; }
L_001BF6A0:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF6ACu); set32(c.r[4], c.r[16].w[0] + 188u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001BF6ACu) [[unlikely]] return; }
L_001BF6AC:
    set32(c.r[5], 0u + 2u);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    st32((c.r[29].w[0] + 108u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.r[3].d[0] = ld64((c.r[2].w[0] + 72u));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 256ull;  goto L_001BF700; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[29].w[0] + 100u), c.r[5].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF6F4u); st32((c.r[29].w[0] + 96u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 346u, depth + 1u); else { c.pc = 0x0020B640u; return; } if (c.pc != 0x001BF6F4u) [[unlikely]] return; }
L_001BF6F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_001BF74C; } }
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 1;
L_001BF700:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 84u), c.r[5].w[0]);  goto L_001BF738; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 92u), c.r[5].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    set32(c.r[5], c.r[29].w[0] + 88u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF72Cu); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 346u, depth + 1u); else { c.pc = 0x0020B640u; return; } if (c.pc != 0x001BF72Cu) [[unlikely]] return; }
L_001BF72C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF748; } }
    st32((c.r[29].w[0] + 84u), c.r[5].w[0]);
    c.budget -= 1;
L_001BF738:
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF748u); st32((c.r[29].w[0] + 80u), c.f[20]);  if (depth < kMaxDepth) unit_003A(c, 346u, depth + 1u); else { c.pc = 0x0020B640u; return; } if (c.pc != 0x001BF748u) [[unlikely]] return; }
L_001BF748:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_001BF74C:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 104u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF75Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BF75Cu) [[unlikely]] return; }
L_001BF75C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001BF83C; } }
    c.r[3].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 1;
L_001BF768:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BF844; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF77Cu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0027(c, 359u, depth + 1u); else { c.pc = 0x001BF940u; return; } if (c.pc != 0x001BF77Cu) [[unlikely]] return; }
L_001BF77C:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF788u); set32(c.r[4], c.r[16].w[0] + 188u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001BF788u) [[unlikely]] return; }
L_001BF788:
    set32(c.r[5], 0u + 2u);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    st32((c.r[29].w[0] + 108u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.r[3].d[0] = ld64((c.r[2].w[0] + 72u));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 256ull;  goto L_001BF7DC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[29].w[0] + 76u), c.r[5].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF7D0u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 349u, depth + 1u); else { c.pc = 0x0020B6B0u; return; } if (c.pc != 0x001BF7D0u) [[unlikely]] return; }
L_001BF7D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_001BF828; } }
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 1;
L_001BF7DC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 60u), c.r[5].w[0]);  goto L_001BF814; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 68u), c.r[5].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF808u); st32((c.r[29].w[0] + 64u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 349u, depth + 1u); else { c.pc = 0x0020B6B0u; return; } if (c.pc != 0x001BF808u) [[unlikely]] return; }
L_001BF808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF824; } }
    st32((c.r[29].w[0] + 60u), c.r[5].w[0]);
    c.budget -= 1;
L_001BF814:
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF824u); st32((c.r[29].w[0] + 56u), c.f[20]);  if (depth < kMaxDepth) unit_003A(c, 349u, depth + 1u); else { c.pc = 0x0020B6B0u; return; } if (c.pc != 0x001BF824u) [[unlikely]] return; }
L_001BF824:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_001BF828:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 104u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF838u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BF838u) [[unlikely]] return; }
L_001BF838:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001BF83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF844u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0027(c, 298u, depth + 1u); else { c.pc = 0x001BF0E0u; return; } if (c.pc != 0x001BF844u) [[unlikely]] return; }
L_001BF844:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001BF848:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001BF860:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[5].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF880u); set32(c.r[4], c.r[16].w[0] + 196u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001BF880u) [[unlikely]] return; }
L_001BF880:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF88Cu); set32(c.r[4], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001BF88Cu) [[unlikely]] return; }
L_001BF88C:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[16].w[0] + 204u);  goto L_001BF8CC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 196u);  goto L_001BF8B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8ACu); set32(c.r[4], c.r[16].w[0] + 204u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001BF8ACu) [[unlikely]] return; }
L_001BF8AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 188u), c.f[0]);  if (t) { goto L_001BF8C0; } }
L_001BF8B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8BCu);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001BF8BCu) [[unlikely]] return; }
L_001BF8BC:
    st32((c.r[16].w[0] + 188u), c.f[0]);
    c.budget -= 1;
L_001BF8C0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_001BF92C; } }
L_001BF8CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8D4u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001BF8D4u) [[unlikely]] return; }
L_001BF8D4:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8E0u); set32(c.r[4], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001BF8E0u) [[unlikely]] return; }
L_001BF8E0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_001BF920; }
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 204u);  goto L_001BF908; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF900u); set32(c.r[4], c.r[16].w[0] + 196u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001BF900u) [[unlikely]] return; }
L_001BF900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 188u), c.f[0]);  if (t) { goto L_001BF914; } }
L_001BF908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF910u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001BF910u) [[unlikely]] return; }
L_001BF910:
    st32((c.r[16].w[0] + 188u), c.f[0]);
    c.budget -= 1;
L_001BF914:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_001BF92C; } }
L_001BF920:
    st32((c.r[16].w[0] + 188u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0] + 192u), c.r[3].w[0]);
    c.budget -= 3;
L_001BF92C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BF940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.f[0] = 0u;
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001BF990; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    st32((c.r[2].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 84u), 0u);  if (t) { goto L_001BFA4C; } }
L_001BF990:
    c.f[1] = ld32((c.r[28].w[0] - 32668u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  goto L_001BF9C0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], c.r[16].w[0] + 212u);
    st32((c.r[2].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF9B8u); st32((c.r[2].w[0] + 84u), 0u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001BF9B8u) [[unlikely]] return; }
L_001BF9B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001BFA50; } }
L_001BF9C0:
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 80u)));  goto L_001BF9E0; }
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.f[3] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);  goto L_001BFA00; }
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 1;
L_001BF9E0:
    set32(c.r[4], c.r[16].w[0] + 212u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF9F8u); st32((c.r[2].w[0] + 84u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001BF9F8u) [[unlikely]] return; }
L_001BF9F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFA4C; } }
L_001BFA00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = ld32((c.r[28].w[0] - 32664u));
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::ee::div(c.fcr31, c.f[3], c.f[2]);
    c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BFA34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA2Cu); c.f[12] = c.f[12] ^ fp::kSign;  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x001BFA2Cu) [[unlikely]] return; }
L_001BFA2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0] ^ fp::kSign;  if (t) { goto L_001BFA40; } }
L_001BFA34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA3Cu);  if (depth < kMaxDepth) unit_0005(c, 118u, depth + 1u); else { c.pc = 0x00136E78u; return; } if (c.pc != 0x001BFA3Cu) [[unlikely]] return; }
L_001BFA3C:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_001BFA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA48u); set32(c.r[4], c.r[16].w[0] + 212u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001BFA48u) [[unlikely]] return; }
L_001BFA48:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.budget -= 1;
L_001BFA4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001BFA50:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BFA60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BFAA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA90u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0027(c, 270u, depth + 1u); else { c.pc = 0x001BEBA0u; return; } if (c.pc != 0x001BFA90u) [[unlikely]] return; }
L_001BFA90:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001BFAAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFAA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001BFAA8u) [[unlikely]] return; }
L_001BFAA8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001BFAAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BFAC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BFB08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFAF0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0027(c, 270u, depth + 1u); else { c.pc = 0x001BEBA0u; return; } if (c.pc != 0x001BFAF0u) [[unlikely]] return; }
L_001BFAF0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001BFB0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFB08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001BFB08u) [[unlikely]] return; }
L_001BFB08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001BFB0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BFB20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], c.r[8].w[0] + 10584u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFB3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 262u, depth + 1u); else { c.pc = 0x001BE990u; return; } if (c.pc != 0x001BFB3Cu) [[unlikely]] return; }
L_001BFB3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53490000u);
    set32(c.r[3], c.r[3].w[0] + 12128u);
    c.r[2].d[0] = c.r[2].d[0] | 17479ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BFB70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 56u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001BFBB0; }
    set32(c.r[3], ld32((c.r[5].w[0] + 40u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BFBAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFBACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0027(c, 298u, depth + 1u); else { c.pc = 0x001BF0E0u; return; } if (c.pc != 0x001BFBACu) [[unlikely]] return; }
L_001BFBAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001BFBB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BFBC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFBD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 296u, depth + 1u); else { c.pc = 0x001BF050u; return; } if (c.pc != 0x001BFBD4u) [[unlikely]] return; }
L_001BFBD4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001BFBFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFBE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 274u, depth + 1u); else { c.pc = 0x001BEC30u; return; } if (c.pc != 0x001BFBE4u) [[unlikely]] return; }
L_001BFBE4:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_001BFBFC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BFC10:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFC40u); c.r[16].d[0] = c.r[11].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 299u, depth + 1u); else { c.pc = 0x001BF140u; return; } if (c.pc != 0x001BFC40u) [[unlikely]] return; }
L_001BFC40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[29].w[0] + 136u), c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + 12048u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x49490000u);
    c.r[3].d[0] = c.r[2].d[0] | 17479ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[18].w[0] + 196u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 200u), c.r[2].w[0]);
    ldr(c.r[5], (c.r[18].w[0] + 188u));
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    ldl(c.r[5], (c.r[18].w[0] + 195u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFC9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BFC9Cu) [[unlikely]] return; }
L_001BFC9C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 128u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[29].w[0] + 96u), c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    st32((c.r[18].w[0] + 204u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 208u), c.r[2].w[0]);
    ldr(c.r[5], (c.r[18].w[0] + 188u));
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    ldl(c.r[5], (c.r[18].w[0] + 195u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFCE0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BFCE0u) [[unlikely]] return; }
L_001BFCE0:
    set32(c.r[25], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 120u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 120u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD00u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BFD00u) [[unlikely]] return; }
L_001BFD00:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 92u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    st32((c.r[18].w[0] + 212u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 216u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001BFD50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 296u, depth + 1u); else { c.pc = 0x001BF050u; return; } if (c.pc != 0x001BFD64u) [[unlikely]] return; }
L_001BFD64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001BFDA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 274u, depth + 1u); else { c.pc = 0x001BEC30u; return; } if (c.pc != 0x001BFD74u) [[unlikely]] return; }
L_001BFD74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD7Cu); set32(c.r[4], c.r[16].w[0] + 188u);  if (depth < kMaxDepth) unit_003A(c, 329u, depth + 1u); else { c.pc = 0x0020B440u; return; } if (c.pc != 0x001BFD7Cu) [[unlikely]] return; }
L_001BFD7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD8Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 275u, depth + 1u); else { c.pc = 0x001BEC50u; return; } if (c.pc != 0x001BFD8Cu) [[unlikely]] return; }
L_001BFD8C:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_001BFDA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BFDB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[23] = c.f[12];
    c.f[22] = c.f[13];
    c.f[21] = c.f[14];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFDE4u); c.f[20] = c.f[15];  if (depth < kMaxDepth) unit_0027(c, 333u, depth + 1u); else { c.pc = 0x001BF5F0u; return; } if (c.pc != 0x001BFDE4u) [[unlikely]] return; }
L_001BFDE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 11968u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 104u), c.f[23]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46490000u);
    c.r[3].d[0] = c.r[2].d[0] | 17479ull;
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[29].w[0] + 72u), c.f[1]);
    st32((c.r[29].w[0] + 76u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    st32((c.r[16].w[0] + 196u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 200u), c.r[2].w[0]);
    ldr(c.r[5], (c.r[16].w[0] + 188u));
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    ldl(c.r[5], (c.r[16].w[0] + 195u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFE40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BFE40u) [[unlikely]] return; }
L_001BFE40:
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 96u), c.f[22]);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[29].w[0] + 64u), c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    st32((c.r[16].w[0] + 204u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 208u), c.r[2].w[0]);
    ldr(c.r[5], (c.r[16].w[0] + 188u));
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    ldl(c.r[5], (c.r[16].w[0] + 195u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFE84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BFE84u) [[unlikely]] return; }
L_001BFE84:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 88u), c.f[21]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 88u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFEA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BFEA4u) [[unlikely]] return; }
L_001BFEA4:
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[29].w[0] + 56u), c.f[1]);
    st32((c.r[29].w[0] + 60u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0] + 212u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 216u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001BFF00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 296u, depth + 1u); else { c.pc = 0x001BF050u; return; } if (c.pc != 0x001BFF14u) [[unlikely]] return; }
L_001BFF14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001BFF5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 274u, depth + 1u); else { c.pc = 0x001BEC30u; return; } if (c.pc != 0x001BFF24u) [[unlikely]] return; }
L_001BFF24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF2Cu); set32(c.r[4], c.r[16].w[0] + 188u);  if (depth < kMaxDepth) unit_003A(c, 332u, depth + 1u); else { c.pc = 0x0020B4A0u; return; } if (c.pc != 0x001BFF2Cu) [[unlikely]] return; }
L_001BFF2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF34u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001BFF34u) [[unlikely]] return; }
L_001BFF34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF44u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 275u, depth + 1u); else { c.pc = 0x001BEC50u; return; } if (c.pc != 0x001BFF44u) [[unlikely]] return; }
L_001BFF44:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_001BFF5C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BFF70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[23] = c.f[12];
    c.f[22] = c.f[13];
    c.f[21] = c.f[14];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFFA4u); c.f[20] = c.f[15];  if (depth < kMaxDepth) unit_0027(c, 333u, depth + 1u); else { c.pc = 0x001BF5F0u; return; } if (c.pc != 0x001BFFA4u) [[unlikely]] return; }
L_001BFFA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 11888u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 104u), c.f[23]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47460000u);
    c.r[3].d[0] = c.r[2].d[0] | 17479ull;
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[29].w[0] + 72u), c.f[1]);
    st32((c.r[29].w[0] + 76u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    st32((c.r[16].w[0] + 196u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 200u), c.r[2].w[0]);
    ldr(c.r[5], (c.r[16].w[0] + 188u));
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    ldl(c.r[5], (c.r[16].w[0] + 195u));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0000u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C0000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0028(c, 1u, depth);
}

}
