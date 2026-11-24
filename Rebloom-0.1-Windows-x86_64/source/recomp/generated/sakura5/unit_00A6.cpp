#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A6[4096] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 5, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 36, 0, 37, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0,
    68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0,
    76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0,
    84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0,
    92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0,
    0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0,
    0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0,
    0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0,
    123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0,
    0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0,
    0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0,
    203, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 208, 0, 209, 0,
    210, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216,
    0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0,
    0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 275, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0,
    0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0,
    0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301,
    0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0,
    307, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367,
    0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0,
    0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0,
    377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0,
};

void unit_00A6(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003B8000;
    case 2u: goto L_003B8014;
    case 3u: goto L_003B801C;
    case 4u: goto L_003B8028;
    case 5u: goto L_003B802C;
    case 6u: goto L_003B8030;
    case 7u: goto L_003B8048;
    case 8u: goto L_003B8060;
    case 9u: goto L_003B8078;
    case 10u: goto L_003B80E8;
    case 11u: goto L_003B8118;
    case 12u: goto L_003B8130;
    case 13u: goto L_003B8158;
    case 14u: goto L_003B8168;
    case 15u: goto L_003B8178;
    case 16u: goto L_003B8190;
    case 17u: goto L_003B81AC;
    case 18u: goto L_003B81C0;
    case 19u: goto L_003B81F8;
    case 20u: goto L_003B8248;
    case 21u: goto L_003B82A8;
    case 22u: goto L_003B82E8;
    case 23u: goto L_003B82F8;
    case 24u: goto L_003B8320;
    case 25u: goto L_003B8328;
    case 26u: goto L_003B8330;
    case 27u: goto L_003B8338;
    case 28u: goto L_003B8340;
    case 29u: goto L_003B8348;
    case 30u: goto L_003B8350;
    case 31u: goto L_003B8358;
    case 32u: goto L_003B8360;
    case 33u: goto L_003B8374;
    case 34u: goto L_003B83B8;
    case 35u: goto L_003B83C0;
    case 36u: goto L_003B83C8;
    case 37u: goto L_003B83D0;
    case 38u: goto L_003B83D8;
    case 39u: goto L_003B83F0;
    case 40u: goto L_003B8518;
    case 41u: goto L_003B8530;
    case 42u: goto L_003B8548;
    case 43u: goto L_003B8570;
    case 44u: goto L_003B85B8;
    case 45u: goto L_003B85CC;
    case 46u: goto L_003B85E8;
    case 47u: goto L_003B8610;
    case 48u: goto L_003B8620;
    case 49u: goto L_003B864C;
    case 50u: goto L_003B8668;
    case 51u: goto L_003B86A8;
    case 52u: goto L_003B86D8;
    case 53u: goto L_003B87E0;
    case 54u: goto L_003B8808;
    case 55u: goto L_003B8820;
    case 56u: goto L_003B8868;
    case 57u: goto L_003B8884;
    case 58u: goto L_003B88A8;
    case 59u: goto L_003B88C4;
    case 60u: goto L_003B8988;
    case 61u: goto L_003B89F0;
    case 62u: goto L_003B8A20;
    case 63u: goto L_003B8A30;
    case 64u: goto L_003B8A40;
    case 65u: goto L_003B8A50;
    case 66u: goto L_003B8A60;
    case 67u: goto L_003B8A70;
    case 68u: goto L_003B8A80;
    case 69u: goto L_003B8A90;
    case 70u: goto L_003B8AA0;
    case 71u: goto L_003B8AB0;
    case 72u: goto L_003B8AC0;
    case 73u: goto L_003B8AD0;
    case 74u: goto L_003B8AE0;
    case 75u: goto L_003B8AF0;
    case 76u: goto L_003B8B00;
    case 77u: goto L_003B8B10;
    case 78u: goto L_003B8B20;
    case 79u: goto L_003B8B30;
    case 80u: goto L_003B8B40;
    case 81u: goto L_003B8B50;
    case 82u: goto L_003B8B60;
    case 83u: goto L_003B8B70;
    case 84u: goto L_003B8B80;
    case 85u: goto L_003B8B90;
    case 86u: goto L_003B8BA0;
    case 87u: goto L_003B8BB0;
    case 88u: goto L_003B8BC0;
    case 89u: goto L_003B8BD0;
    case 90u: goto L_003B8BE0;
    case 91u: goto L_003B8BF0;
    case 92u: goto L_003B8C00;
    case 93u: goto L_003B8C10;
    case 94u: goto L_003B8C20;
    case 95u: goto L_003B8C30;
    case 96u: goto L_003B8C40;
    case 97u: goto L_003B8C50;
    case 98u: goto L_003B8C60;
    case 99u: goto L_003B8C70;
    case 100u: goto L_003B8C90;
    case 101u: goto L_003B8CC8;
    case 102u: goto L_003B8CD8;
    case 103u: goto L_003B8CE8;
    case 104u: goto L_003B8CF8;
    case 105u: goto L_003B8D08;
    case 106u: goto L_003B8D18;
    case 107u: goto L_003B8D28;
    case 108u: goto L_003B8D38;
    case 109u: goto L_003B8D48;
    case 110u: goto L_003B8D58;
    case 111u: goto L_003B8D68;
    case 112u: goto L_003B8D78;
    case 113u: goto L_003B8D88;
    case 114u: goto L_003B8D98;
    case 115u: goto L_003B8DB0;
    case 116u: goto L_003B8DE8;
    case 117u: goto L_003B8DF8;
    case 118u: goto L_003B8E08;
    case 119u: goto L_003B8E18;
    case 120u: goto L_003B8E28;
    case 121u: goto L_003B8E40;
    case 122u: goto L_003B8E78;
    case 123u: goto L_003B8E80;
    case 124u: goto L_003B8E88;
    case 125u: goto L_003B8EB0;
    case 126u: goto L_003B8EE8;
    case 127u: goto L_003B8F10;
    case 128u: goto L_003B8F48;
    case 129u: goto L_003B8F70;
    case 130u: goto L_003B8FA8;
    case 131u: goto L_003B8FD0;
    case 132u: goto L_003B8FE0;
    case 133u: goto L_003B9008;
    case 134u: goto L_003B9018;
    case 135u: goto L_003B9040;
    case 136u: goto L_003B9068;
    case 137u: goto L_003B9078;
    case 138u: goto L_003B90A0;
    case 139u: goto L_003B90D8;
    case 140u: goto L_003B9100;
    case 141u: goto L_003B9138;
    case 142u: goto L_003B9160;
    case 143u: goto L_003B9188;
    case 144u: goto L_003B9198;
    case 145u: goto L_003B9218;
    case 146u: goto L_003B9270;
    case 147u: goto L_003B92D8;
    case 148u: goto L_003B9318;
    case 149u: goto L_003B933C;
    case 150u: goto L_003B9380;
    case 151u: goto L_003B93D0;
    case 152u: goto L_003B93F8;
    case 153u: goto L_003B941C;
    case 154u: goto L_003B9460;
    case 155u: goto L_003B94B0;
    case 156u: goto L_003B94C8;
    case 157u: goto L_003B94D8;
    case 158u: goto L_003B9518;
    case 159u: goto L_003B9530;
    case 160u: goto L_003B9548;
    case 161u: goto L_003B9560;
    case 162u: goto L_003B9588;
    case 163u: goto L_003B9590;
    case 164u: goto L_003B95B4;
    case 165u: goto L_003B95BC;
    case 166u: goto L_003B95C4;
    case 167u: goto L_003B95F0;
    case 168u: goto L_003B9624;
    case 169u: goto L_003B963C;
    case 170u: goto L_003B9660;
    case 171u: goto L_003B9670;
    case 172u: goto L_003B9680;
    case 173u: goto L_003B96F0;
    case 174u: goto L_003B9718;
    case 175u: goto L_003B9758;
    case 176u: goto L_003B9778;
    case 177u: goto L_003B9784;
    case 178u: goto L_003B9790;
    case 179u: goto L_003B9890;
    case 180u: goto L_003B9960;
    case 181u: goto L_003B9980;
    case 182u: goto L_003B99A0;
    case 183u: goto L_003B9A08;
    case 184u: goto L_003B9A60;
    case 185u: goto L_003B9B54;
    case 186u: goto L_003B9B60;
    case 187u: goto L_003B9B78;
    case 188u: goto L_003B9BA0;
    case 189u: goto L_003B9BF4;
    case 190u: goto L_003B9C14;
    case 191u: goto L_003B9C38;
    case 192u: goto L_003B9C60;
    case 193u: goto L_003B9CB4;
    case 194u: goto L_003B9CD4;
    case 195u: goto L_003B9CF8;
    case 196u: goto L_003B9D40;
    case 197u: goto L_003B9D50;
    case 198u: goto L_003B9D58;
    case 199u: goto L_003B9D60;
    case 200u: goto L_003B9D68;
    case 201u: goto L_003B9D70;
    case 202u: goto L_003B9D78;
    case 203u: goto L_003B9D80;
    case 204u: goto L_003B9D88;
    case 205u: goto L_003B9D90;
    case 206u: goto L_003B9DD8;
    case 207u: goto L_003B9DE8;
    case 208u: goto L_003B9DF0;
    case 209u: goto L_003B9DF8;
    case 210u: goto L_003B9E00;
    case 211u: goto L_003B9E08;
    case 212u: goto L_003B9E20;
    case 213u: goto L_003B9E60;
    case 214u: goto L_003B9EC8;
    case 215u: goto L_003B9FC8;
    case 216u: goto L_003B9FFC;
    case 217u: goto L_003BA018;
    case 218u: goto L_003BA188;
    case 219u: goto L_003BA21C;
    case 220u: goto L_003BA2B8;
    case 221u: goto L_003BA2E0;
    case 222u: goto L_003BA310;
    case 223u: goto L_003BA324;
    case 224u: goto L_003BA334;
    case 225u: goto L_003BA380;
    case 226u: goto L_003BA3A0;
    case 227u: goto L_003BA3B0;
    case 228u: goto L_003BA3C0;
    case 229u: goto L_003BA400;
    case 230u: goto L_003BA438;
    case 231u: goto L_003BA444;
    case 232u: goto L_003BA454;
    case 233u: goto L_003BA4D8;
    case 234u: goto L_003BA4E8;
    case 235u: goto L_003BA500;
    case 236u: goto L_003BA548;
    case 237u: goto L_003BA570;
    case 238u: goto L_003BA580;
    case 239u: goto L_003BA5B0;
    case 240u: goto L_003BA5E8;
    case 241u: goto L_003BA620;
    case 242u: goto L_003BA648;
    case 243u: goto L_003BA688;
    case 244u: goto L_003BA6D4;
    case 245u: goto L_003BA6F8;
    case 246u: goto L_003BA76C;
    case 247u: goto L_003BA79C;
    case 248u: goto L_003BA7E0;
    case 249u: goto L_003BA81C;
    case 250u: goto L_003BA844;
    case 251u: goto L_003BA850;
    case 252u: goto L_003BA880;
    case 253u: goto L_003BA8A0;
    case 254u: goto L_003BA8CC;
    case 255u: goto L_003BA8D8;
    case 256u: goto L_003BA908;
    case 257u: goto L_003BA918;
    case 258u: goto L_003BA9F0;
    case 259u: goto L_003BAA30;
    case 260u: goto L_003BAA68;
    case 261u: goto L_003BAA8C;
    case 262u: goto L_003BAA98;
    case 263u: goto L_003BAAC0;
    case 264u: goto L_003BAB28;
    case 265u: goto L_003BAB30;
    case 266u: goto L_003BAB54;
    case 267u: goto L_003BAB70;
    case 268u: goto L_003BAC18;
    case 269u: goto L_003BAC28;
    case 270u: goto L_003BAC58;
    case 271u: goto L_003BACA8;
    case 272u: goto L_003BACC4;
    case 273u: goto L_003BACE0;
    case 274u: goto L_003BACF0;
    case 275u: goto L_003BAD08;
    case 276u: goto L_003BAD10;
    case 277u: goto L_003BAD24;
    case 278u: goto L_003BAD38;
    case 279u: goto L_003BAD5C;
    case 280u: goto L_003BAD78;
    case 281u: goto L_003BAD88;
    case 282u: goto L_003BADE8;
    case 283u: goto L_003BAE24;
    case 284u: goto L_003BAE38;
    case 285u: goto L_003BAE54;
    case 286u: goto L_003BAE68;
    case 287u: goto L_003BAE8C;
    case 288u: goto L_003BAEA8;
    case 289u: goto L_003BAEE8;
    case 290u: goto L_003BAF28;
    case 291u: goto L_003BAF88;
    case 292u: goto L_003BAFC8;
    case 293u: goto L_003BAFDC;
    case 294u: goto L_003BB008;
    case 295u: goto L_003BB028;
    case 296u: goto L_003BB030;
    case 297u: goto L_003BB068;
    case 298u: goto L_003BB0A8;
    case 299u: goto L_003BB120;
    case 300u: goto L_003BB158;
    case 301u: goto L_003BB17C;
    case 302u: goto L_003BB188;
    case 303u: goto L_003BB1B0;
    case 304u: goto L_003BB1C0;
    case 305u: goto L_003BB1D0;
    case 306u: goto L_003BB1F0;
    case 307u: goto L_003BB200;
    case 308u: goto L_003BB218;
    case 309u: goto L_003BB220;
    case 310u: goto L_003BB238;
    case 311u: goto L_003BB250;
    case 312u: goto L_003BB268;
    case 313u: goto L_003BB2A8;
    case 314u: goto L_003BB2C0;
    case 315u: goto L_003BB2D8;
    case 316u: goto L_003BB2F0;
    case 317u: goto L_003BB300;
    case 318u: goto L_003BB340;
    case 319u: goto L_003BB358;
    case 320u: goto L_003BB370;
    case 321u: goto L_003BB380;
    case 322u: goto L_003BB398;
    case 323u: goto L_003BB3B0;
    case 324u: goto L_003BB3B8;
    case 325u: goto L_003BB3D0;
    case 326u: goto L_003BB3E8;
    case 327u: goto L_003BB410;
    case 328u: goto L_003BB428;
    case 329u: goto L_003BB44C;
    case 330u: goto L_003BB45C;
    case 331u: goto L_003BB478;
    case 332u: goto L_003BB490;
    case 333u: goto L_003BB4AC;
    case 334u: goto L_003BB4C8;
    case 335u: goto L_003BB4D8;
    case 336u: goto L_003BB4F0;
    case 337u: goto L_003BB688;
    case 338u: goto L_003BB6A8;
    case 339u: goto L_003BB6B8;
    case 340u: goto L_003BB6D0;
    case 341u: goto L_003BB6E0;
    case 342u: goto L_003BB6FC;
    case 343u: goto L_003BB780;
    case 344u: goto L_003BB7A0;
    case 345u: goto L_003BB7C0;
    case 346u: goto L_003BB804;
    case 347u: goto L_003BB838;
    case 348u: goto L_003BB898;
    case 349u: goto L_003BB8F8;
    case 350u: goto L_003BBA08;
    case 351u: goto L_003BBA18;
    case 352u: goto L_003BBA40;
    case 353u: goto L_003BBA50;
    case 354u: goto L_003BBA78;
    case 355u: goto L_003BBAB8;
    case 356u: goto L_003BBADC;
    case 357u: goto L_003BBB20;
    case 358u: goto L_003BBB30;
    case 359u: goto L_003BBB80;
    case 360u: goto L_003BBBB0;
    case 361u: goto L_003BBBCC;
    case 362u: goto L_003BBBD8;
    case 363u: goto L_003BBC08;
    case 364u: goto L_003BBC30;
    case 365u: goto L_003BBC48;
    case 366u: goto L_003BBC70;
    case 367u: goto L_003BBC7C;
    case 368u: goto L_003BBC90;
    case 369u: goto L_003BBCA8;
    case 370u: goto L_003BBCB4;
    case 371u: goto L_003BBCD0;
    case 372u: goto L_003BBCE8;
    case 373u: goto L_003BBD04;
    case 374u: goto L_003BBD18;
    case 375u: goto L_003BBD38;
    case 376u: goto L_003BBD74;
    case 377u: goto L_003BBD80;
    case 378u: goto L_003BBDC0;
    case 379u: goto L_003BBDD8;
    case 380u: goto L_003BBDE8;
    case 381u: goto L_003BBDF8;
    case 382u: goto L_003BBE2C;
    case 383u: goto L_003BBE40;
    case 384u: goto L_003BBED8;
    case 385u: goto L_003BBF00;
    case 386u: goto L_003BBF28;
    case 387u: goto L_003BBF38;
    case 388u: goto L_003BBF4C;
    case 389u: goto L_003BBF60;
    case 390u: goto L_003BBFF8;
    default: bad_entry(c, 0x003B8000u); return;
    }
L_003B8000:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21424u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2075u);
    c.budget -= 5;
L_003B8014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B801Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B801Cu) [[unlikely]] return; }
L_003B801C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003B8030; } }
    c.budget -= 1;
L_003B8028:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003B802C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003B8030:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B8048:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 20u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003B8060:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 20u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003B8078:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 12360u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003B80B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[16], 0u - 203u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 203u);  if (t) { goto L_003B8138; } }
L_003B80B0:
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003B8134; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[10], c.r[5].w[0] << 16);  if (t) { goto L_003B80F0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] - 16976u);
    set32(c.r[5], c.r[5].w[0] + 21448u);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 16));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B80E8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x003B80E8u) [[unlikely]] return; }
L_003B80E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 12360u)));  if (t) { goto L_003B811C; } }
L_003B80F0:
    set32(c.r[9], c.r[5].w[0] << 16);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] - 16976u);
    set32(c.r[5], c.r[5].w[0] + 21472u);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 16));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8118u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 188u, depth + 1u); else { c.pc = 0x001471A8u; return; } if (c.pc != 0x003B8118u) [[unlikely]] return; }
L_003B8118:
    set32(c.r[3], ld32((c.r[18].w[0] + 12360u)));
    c.budget -= 1;
L_003B811C:
    set32(c.r[5], c.r[17].w[0] - 16976u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8130u); set32(c.r[4], ld32((c.r[3].w[0] + 68u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8130u) [[unlikely]] return; }
L_003B8130:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 1;
L_003B8134:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003B8138:
    st32((c.r[3].w[0] + 12364u), c.r[16].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B8158:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 12364u), 0u);  c.pc = t; return; }
L_003B8168:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 12364u)));  c.pc = t; return; }
L_003B8178:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8168u | kUnwind; return; } goto L_003B8168; }
L_003B8190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003B81E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B81ACu);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x003B81ACu) [[unlikely]] return; }
L_003B81AC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003B81E8; } }
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + c.r[6].w[0]);
    c.budget -= 2;
L_003B81C0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[2].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] - 97u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;  if (t) { goto L_003B81E0; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003B81E0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B81C0u | kUnwind; return; } goto L_003B81C0; } }
L_003B81E8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B81F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 2182u);  if (t) { goto L_003B8218; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003B8240; } }
L_003B8218:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20824u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 21488u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 100u);
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8078u | kUnwind; return; } goto L_003B8078; }
L_003B8240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8248u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 140u, depth + 1u); else { c.pc = 0x003B5B38u; return; } if (c.pc != 0x003B8248u) [[unlikely]] return; }
L_003B8248:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21488u);
    set32(c.r[5], 0u + 2187u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], 0u - 105u);  if (t) { goto L_003B8280; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8078u | kUnwind; return; } goto L_003B8078; }
L_003B8280:
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B82A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_003B8380; } }
    set32(c.r[17], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B82E8u); set32(c.r[5], ld32((c.r[20].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A6(c, 40u, depth + 1u); else { c.pc = 0x003B8518u; return; } if (c.pc != 0x003B82E8u) [[unlikely]] return; }
L_003B82E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B82F8u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 40u, depth + 1u); else { c.pc = 0x003B8518u; return; } if (c.pc != 0x003B82F8u) [[unlikely]] return; }
L_003B82F8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B8418; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 21520u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003B8000u < 16384u) { entry = entries_00A6[(t - 0x003B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B8320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003B8364; } }
L_003B8328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] + c.r[5].d[0];  if (t) { goto L_003B8364; } }
L_003B8330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] - c.r[5].d[0];  if (t) { goto L_003B8364; } }
L_003B8338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8340u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 7u, depth + 1u); else { c.pc = 0x0014C158u; return; } if (c.pc != 0x003B8340u) [[unlikely]] return; }
L_003B8340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003B8364; } }
L_003B8348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8350u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 8u, depth + 1u); else { c.pc = 0x0014C1D0u; return; } if (c.pc != 0x003B8350u) [[unlikely]] return; }
L_003B8350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003B8364; } }
L_003B8358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8360u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 9u, depth + 1u); else { c.pc = 0x0014C868u; return; } if (c.pc != 0x003B8360u) [[unlikely]] return; }
L_003B8360:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003B8364:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8374u); set32(c.r[6], c.r[5].w[0] + 4u);  if (depth < kMaxDepth) unit_00A6(c, 41u, depth + 1u); else { c.pc = 0x003B8530u; return; } if (c.pc != 0x003B8374u) [[unlikely]] return; }
L_003B8374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B8418; } }
    c.budget -= 1;
L_003B8380:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[7], ld32((c.r[20].w[0])));  if (t) { goto L_003B8394; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B8418; } }
L_003B8394:
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[6].w[0])));  if (t) { goto L_003B8408; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 21552u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003B8000u < 16384u) { entry = entries_00A6[(t - 0x003B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B83B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003B8410; } }
L_003B83C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);  if (t) { goto L_003B8410; } }
L_003B83C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - c.r[6].w[0]);  if (t) { goto L_003B8410; } }
L_003B83D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]); c.r[7].d[0] = c.lo.d[0];  if (t) { goto L_003B8410; } }
L_003B83D8:
    mmi::divu(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x003B83E0u);  goto L_003B83E4; }
L_003B83E4:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003B8410; } }
L_003B83F0:
    mmi::divu(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { breakpoint(c, 0x003B83F8u);  goto L_003B83FC; }
L_003B83FC:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003B8410; } }
L_003B8408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B8418; } }
L_003B8410:
    st32((c.r[20].w[0]), c.r[7].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003B8418:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B8518:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + c.r[2].d[0];  c.pc = t; return; }
L_003B8530:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003B8548:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[8], c.r[4].w[0] + 36u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[9], 0u + 8u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[6].w[0] << 11);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 2048u);
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A7(c, 14u, depth); }
L_003B8570:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    set32(c.r[5], 0u + 2421u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[29].w[0] + 80u), c.r[31].d[0]);  if (t) { goto L_003B85C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21576u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B85B8u); set32(c.r[8], 0u - 100u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B85B8u) [[unlikely]] return; }
L_003B85B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003B86C0; } }
L_003B85C0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B85CCu); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B85CCu) [[unlikely]] return; }
L_003B85CC:
    set32(c.r[6], 0u + 9u);
    set32(c.r[16], c.r[29].w[0] + 16u);
    set32(c.r[7], 0u + 32u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B85E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 126u, depth + 1u); else { c.pc = 0x003B58C0u; return; } if (c.pc != 0x003B85E8u) [[unlikely]] return; }
L_003B85E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[6], c.r[6].w[0] + 21072u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], 0u - 100u);  if (t) { goto L_003B8618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8610u); set32(c.r[5], 0u + 2427u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B8610u) [[unlikely]] return; }
L_003B8610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003B86C0; } }
L_003B8618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8620u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 140u, depth + 1u); else { c.pc = 0x003B5B38u; return; } if (c.pc != 0x003B8620u) [[unlikely]] return; }
L_003B8620:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 21032u);
    set32(c.r[5], 0u + 2433u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[8], 0u - 105u);  if (t) { goto L_003B8658; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B864Cu); set32(c.r[4], c.r[4].w[0] + 20824u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B864Cu) [[unlikely]] return; }
L_003B864C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003B86C0; } }
    c.budget -= 1;
L_003B8658:
    set32(c.r[16], ld32((c.r[17].w[0] + 16u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8668u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 289u, depth + 1u); else { c.pc = 0x003BAEE8u; return; } if (c.pc != 0x003B8668u) [[unlikely]] return; }
L_003B8668:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[9].w[0] << 1);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20824u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + 21112u);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 2442u);
    c.budget -= 14;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[8], 0u - 107u);  if (t) { goto L_003B86B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B86A8u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B86A8u) [[unlikely]] return; }
L_003B86A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003B86C0; } }
L_003B86B0:
    st32((c.r[18].w[0]), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] - 16u)));
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 4;
L_003B86C0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003B86D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 2468u);  if (t) { goto L_003B8728; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20824u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 21600u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 100u);
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8078u | kUnwind; return; } goto L_003B8078; }
L_003B8728:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003B8760; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20824u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 21600u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 2471u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 100u);
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8078u | kUnwind; return; } goto L_003B8078; }
L_003B8760:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_003B8798; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20824u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 21600u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 2474u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 100u);
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8078u | kUnwind; return; } goto L_003B8078; }
L_003B8798:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003B87D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20824u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 21600u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], 0u + 2477u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 100u);
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8078u | kUnwind; return; } goto L_003B8078; }
L_003B87D0:
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B87E0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 42u, depth + 1u); else { c.pc = 0x003B8548u; return; } if (c.pc != 0x003B87E0u) [[unlikely]] return; }
L_003B87E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B8808:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8820u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 140u, depth + 1u); else { c.pc = 0x003B5B38u; return; } if (c.pc != 0x003B8820u) [[unlikely]] return; }
L_003B8820:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 44u);
    set32(c.r[6], 0u + 8u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], 0u - 105u);  if (t) { goto L_003B8860; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 20824u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 21032u);
    set32(c.r[5], 0u + 2505u);
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8078u | kUnwind; return; } goto L_003B8078; }
L_003B8860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8868u);  if (depth < kMaxDepth) unit_0009(c, 69u, depth + 1u); else { c.pc = 0x00145310u; return; } if (c.pc != 0x003B8868u) [[unlikely]] return; }
L_003B8868:
    set32(c.r[3], 0u - 111u);
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B8884:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12360u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 10000u);  if (t) { goto L_003B88A0; } }
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_003B88A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B88A8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003B8920; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003B88D0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 100u);  if (t) { goto L_003B8948; } }
L_003B88C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B88D0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003B8900; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 12360u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u - 100u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B88C4u | kUnwind; return; } goto L_003B88C4; } }
    set32(c.r[2], 0u - 1025u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    st32((c.r[5].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_003B8900:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B88C4u | kUnwind; return; } goto L_003B88C4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12360u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_003B897C; } }
L_003B8920:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003B8940; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12360u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_003B897C; } }
L_003B8940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u - 2u);  if (t) { goto L_003B896C; } }
L_003B8948:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003B8968; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12360u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_003B897C; } }
L_003B8968:
    set32(c.r[5], 0u - 3u);
    c.budget -= 1;
L_003B896C:
    set32(c.r[4], ld32((c.r[3].w[0] + 12360u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 4;
L_003B897C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003B8988:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003B89C0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 12360u)));  if (t) { goto L_003B89B0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  goto L_003B89D0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 100u);  c.pc = t; return; }
L_003B89B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 1024ull;  if (t) { goto L_003B89DC; } }
    c.budget -= 1;
L_003B89C0:
    set32(c.r[4], ld32((c.r[2].w[0] + 12360u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_003B89E0; } }
L_003B89D0:
    set32(c.r[4], ld32((c.r[2].w[0] + 12360u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
L_003B89DC:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003B89E0:
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003B89F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[16], c.r[16].w[0] + 12376u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st32((c.r[2].w[0] - 16720u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8A20u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8A20u) [[unlikely]] return; }
L_003B8A20:
    set32(c.r[4], c.r[17].w[0] + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8A30u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8A30u) [[unlikely]] return; }
L_003B8A30:
    set32(c.r[4], c.r[17].w[0] + 6u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8A40u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8A40u) [[unlikely]] return; }
L_003B8A40:
    set32(c.r[4], c.r[17].w[0] + 7u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8A50u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8A50u) [[unlikely]] return; }
L_003B8A50:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8A60u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8A60u) [[unlikely]] return; }
L_003B8A60:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8A70u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8A70u) [[unlikely]] return; }
L_003B8A70:
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8A80u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8A80u) [[unlikely]] return; }
L_003B8A80:
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8A90u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8A90u) [[unlikely]] return; }
L_003B8A90:
    set32(c.r[4], c.r[17].w[0] + 84u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8AA0u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8AA0u) [[unlikely]] return; }
L_003B8AA0:
    set32(c.r[4], c.r[17].w[0] + 88u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8AB0u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8AB0u) [[unlikely]] return; }
L_003B8AB0:
    set32(c.r[4], c.r[17].w[0] + 92u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8AC0u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8AC0u) [[unlikely]] return; }
L_003B8AC0:
    set32(c.r[4], c.r[17].w[0] + 120u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8AD0u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8AD0u) [[unlikely]] return; }
L_003B8AD0:
    set32(c.r[4], c.r[17].w[0] + 122u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8AE0u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8AE0u) [[unlikely]] return; }
L_003B8AE0:
    set32(c.r[4], c.r[17].w[0] + 124u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8AF0u); set32(c.r[6], 0u + 13u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8AF0u) [[unlikely]] return; }
L_003B8AF0:
    set32(c.r[4], c.r[17].w[0] + 126u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8B00u); set32(c.r[6], 0u + 14u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8B00u) [[unlikely]] return; }
L_003B8B00:
    set32(c.r[4], c.r[17].w[0] + 128u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8B10u); set32(c.r[6], 0u + 15u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8B10u) [[unlikely]] return; }
L_003B8B10:
    set32(c.r[4], c.r[17].w[0] + 130u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8B20u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8B20u) [[unlikely]] return; }
L_003B8B20:
    set32(c.r[4], c.r[17].w[0] + 132u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8B30u); set32(c.r[6], 0u + 17u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8B30u) [[unlikely]] return; }
L_003B8B30:
    set32(c.r[4], c.r[17].w[0] + 136u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8B40u); set32(c.r[6], 0u + 18u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8B40u) [[unlikely]] return; }
L_003B8B40:
    set32(c.r[4], c.r[17].w[0] + 140u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8B50u); set32(c.r[6], 0u + 19u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8B50u) [[unlikely]] return; }
L_003B8B50:
    set32(c.r[4], c.r[17].w[0] + 144u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8B60u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8B60u) [[unlikely]] return; }
L_003B8B60:
    set32(c.r[4], c.r[17].w[0] + 148u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8B70u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8B70u) [[unlikely]] return; }
L_003B8B70:
    set32(c.r[4], c.r[17].w[0] + 152u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8B80u); set32(c.r[6], 0u + 22u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8B80u) [[unlikely]] return; }
L_003B8B80:
    set32(c.r[4], c.r[17].w[0] + 156u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8B90u); set32(c.r[6], 0u + 23u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8B90u) [[unlikely]] return; }
L_003B8B90:
    set32(c.r[4], c.r[17].w[0] + 190u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8BA0u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8BA0u) [[unlikely]] return; }
L_003B8BA0:
    set32(c.r[4], c.r[17].w[0] + 318u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8BB0u); set32(c.r[6], 0u + 25u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8BB0u) [[unlikely]] return; }
L_003B8BB0:
    set32(c.r[4], c.r[17].w[0] + 446u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8BC0u); set32(c.r[6], 0u + 26u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8BC0u) [[unlikely]] return; }
L_003B8BC0:
    set32(c.r[4], c.r[17].w[0] + 574u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8BD0u); set32(c.r[6], 0u + 27u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8BD0u) [[unlikely]] return; }
L_003B8BD0:
    set32(c.r[4], c.r[17].w[0] + 702u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8BE0u); set32(c.r[6], 0u + 28u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8BE0u) [[unlikely]] return; }
L_003B8BE0:
    set32(c.r[4], c.r[17].w[0] + 739u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8BF0u); set32(c.r[6], 0u + 29u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8BF0u) [[unlikely]] return; }
L_003B8BF0:
    set32(c.r[4], c.r[17].w[0] + 776u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8C00u); set32(c.r[6], 0u + 30u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8C00u) [[unlikely]] return; }
L_003B8C00:
    set32(c.r[4], c.r[17].w[0] + 813u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8C10u); set32(c.r[6], 0u + 31u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8C10u) [[unlikely]] return; }
L_003B8C10:
    set32(c.r[4], c.r[17].w[0] + 830u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8C20u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8C20u) [[unlikely]] return; }
L_003B8C20:
    set32(c.r[4], c.r[17].w[0] + 847u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8C30u); set32(c.r[6], 0u + 33u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8C30u) [[unlikely]] return; }
L_003B8C30:
    set32(c.r[4], c.r[17].w[0] + 864u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8C40u); set32(c.r[6], 0u + 34u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8C40u) [[unlikely]] return; }
L_003B8C40:
    set32(c.r[4], c.r[17].w[0] + 881u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8C50u); set32(c.r[6], 0u + 35u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8C50u) [[unlikely]] return; }
L_003B8C50:
    set32(c.r[4], c.r[17].w[0] + 882u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8C60u); set32(c.r[6], 0u + 36u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8C60u) [[unlikely]] return; }
L_003B8C60:
    set32(c.r[4], c.r[17].w[0] + 883u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8C70u); set32(c.r[6], 0u + 37u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8C70u) [[unlikely]] return; }
L_003B8C70:
    set32(c.r[4], c.r[17].w[0] + 1395u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], 0u + 38u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B8E40; }
L_003B8C90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[16], c.r[16].w[0] - 16712u);
    set32(c.r[17], c.r[17].w[0] + 12536u);
    st32((c.r[2].w[0] - 16720u), c.r[4].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8CC8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8CC8u) [[unlikely]] return; }
L_003B8CC8:
    set32(c.r[4], c.r[16].w[0] + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8CD8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8CD8u) [[unlikely]] return; }
L_003B8CD8:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8CE8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8CE8u) [[unlikely]] return; }
L_003B8CE8:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8CF8u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8CF8u) [[unlikely]] return; }
L_003B8CF8:
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8D08u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8D08u) [[unlikely]] return; }
L_003B8D08:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8D18u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8D18u) [[unlikely]] return; }
L_003B8D18:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8D28u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8D28u) [[unlikely]] return; }
L_003B8D28:
    set32(c.r[4], c.r[16].w[0] + 27u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8D38u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8D38u) [[unlikely]] return; }
L_003B8D38:
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8D48u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8D48u) [[unlikely]] return; }
L_003B8D48:
    set32(c.r[4], c.r[16].w[0] + 29u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8D58u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8D58u) [[unlikely]] return; }
L_003B8D58:
    set32(c.r[4], c.r[16].w[0] + 30u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8D68u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8D68u) [[unlikely]] return; }
L_003B8D68:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8D78u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8D78u) [[unlikely]] return; }
L_003B8D78:
    set32(c.r[4], c.r[16].w[0] + 34u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8D88u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8D88u) [[unlikely]] return; }
L_003B8D88:
    set32(c.r[4], c.r[16].w[0] + 35u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8D98u); set32(c.r[6], 0u + 13u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8D98u) [[unlikely]] return; }
L_003B8D98:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B8DB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[16], c.r[16].w[0] - 16712u);
    set32(c.r[17], c.r[17].w[0] + 12600u);
    st32((c.r[2].w[0] - 16720u), c.r[4].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8DE8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8DE8u) [[unlikely]] return; }
L_003B8DE8:
    set32(c.r[4], c.r[16].w[0] + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8DF8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8DF8u) [[unlikely]] return; }
L_003B8DF8:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8E08u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8E08u) [[unlikely]] return; }
L_003B8E08:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8E18u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8E18u) [[unlikely]] return; }
L_003B8E18:
    set32(c.r[4], c.r[16].w[0] + 10u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8E28u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00A6(c, 121u, depth + 1u); else { c.pc = 0x003B8E40u; return; } if (c.pc != 0x003B8E28u) [[unlikely]] return; }
L_003B8E28:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B8E40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], c.r[6].w[0] << 2);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] - 16720u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] - c.r[3].w[0]);
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001453A8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 72u, depth); }
L_003B8E78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003B8E80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B8E88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12624u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B8EC0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_003B8EC4; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8EB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8EB0u) [[unlikely]] return; }
L_003B8EB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B8EC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_003B8EC4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 21688u);
    set32(c.r[6], c.r[6].w[0] + 21712u);
    set32(c.r[5], 0u + 155u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 203u);
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8078u | kUnwind; return; } goto L_003B8078; }
L_003B8EE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12624u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B8F20; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_003B8F24; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8F10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8F10u) [[unlikely]] return; }
L_003B8F10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B8F20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_003B8F24:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 21688u);
    set32(c.r[6], c.r[6].w[0] + 21720u);
    set32(c.r[5], 0u + 170u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 203u);
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8078u | kUnwind; return; } goto L_003B8078; }
L_003B8F48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12624u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B8F80; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_003B8F84; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8F70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8F70u) [[unlikely]] return; }
L_003B8F70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B8F80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_003B8F84:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 21688u);
    set32(c.r[6], c.r[6].w[0] + 21728u);
    set32(c.r[5], 0u + 184u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 203u);
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8078u | kUnwind; return; } goto L_003B8078; }
L_003B8FA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12624u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B8FD0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003B8FD4; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8FD0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8FD0u) [[unlikely]] return; }
L_003B8FD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B8FD4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B8FE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12624u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B9008; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003B900C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9008u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B9008u) [[unlikely]] return; }
L_003B9008:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B900C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B9018:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12624u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B9048; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_003B904C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9040u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B9040u) [[unlikely]] return; }
L_003B9040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B9070; } }
L_003B9048:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_003B904C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 21688u);
    set32(c.r[6], c.r[6].w[0] + 21744u);
    set32(c.r[5], 0u + 224u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9068u); set32(c.r[8], 0u - 203u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B9068u) [[unlikely]] return; }
L_003B9068:
    set32(c.r[2], 0u + 3u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003B9070:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B9078:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12624u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B90B0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_003B90B4; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B90A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B90A0u) [[unlikely]] return; }
L_003B90A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B90B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_003B90B4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 21688u);
    set32(c.r[6], c.r[6].w[0] + 21760u);
    set32(c.r[5], 0u + 239u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 203u);
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8078u | kUnwind; return; } goto L_003B8078; }
L_003B90D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12624u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B9110; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_003B9114; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9100u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B9100u) [[unlikely]] return; }
L_003B9100:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B9110:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_003B9114:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 21688u);
    set32(c.r[6], c.r[6].w[0] + 21776u);
    set32(c.r[5], 0u + 253u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 203u);
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8078u | kUnwind; return; } goto L_003B8078; }
L_003B9138:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12624u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003B9168; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_003B916C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9160u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B9160u) [[unlikely]] return; }
L_003B9160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B918C; } }
L_003B9168:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_003B916C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 21688u);
    set32(c.r[6], c.r[6].w[0] + 21792u);
    set32(c.r[5], 0u + 273u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9188u); set32(c.r[8], 0u - 203u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003B9188u) [[unlikely]] return; }
L_003B9188:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B918C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B9198:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 14;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[5], 0u + 288u);  if (t) { goto L_003B91D8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_003B9210; } }
L_003B91D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 21688u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 21808u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[8], 0u - 100u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8078u | kUnwind; return; } goto L_003B8078; }
L_003B9210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9218u);  if (depth < kMaxDepth) unit_00A6(c, 137u, depth + 1u); else { c.pc = 0x003B9078u; return; } if (c.pc != 0x003B9218u) [[unlikely]] return; }
L_003B9218:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 21688u);
    set32(c.r[6], c.r[6].w[0] + 21760u);
    set32(c.r[5], 0u + 293u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].sd[0] > 0; set32(c.r[8], 0u - 202u);  if (t) { goto L_003B9260; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8078u | kUnwind; return; } goto L_003B8078; }
L_003B9260:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9270u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 167u, depth + 1u); else { c.pc = 0x003B95F0u; return; } if (c.pc != 0x003B9270u) [[unlikely]] return; }
L_003B9270:
    set32(c.r[3], c.r[20].w[0] << 11);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 299u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003B92C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 21688u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + 21824u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8078u | kUnwind; return; } goto L_003B8078; }
L_003B92C0:
    mmi::div(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x003B92C8u);  goto L_003B92CC; }
L_003B92CC:
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B92D8u);  if (depth < kMaxDepth) unit_00A6(c, 128u, depth + 1u); else { c.pc = 0x003B8F48u; return; } if (c.pc != 0x003B92D8u) [[unlikely]] return; }
L_003B92D8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]); c.r[6].d[0] = c.lo.d[0];  if (t) { goto L_003B92F4; } }
    c.r[2].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[3], c.r[6].w[0] + 2047u);
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 11));
    c.budget -= 4;
L_003B92F4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B9318:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] <= 0; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003B93BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B933Cu);  if (depth < kMaxDepth) unit_00A6(c, 144u, depth + 1u); else { c.pc = 0x003B9198u; return; } if (c.pc != 0x003B933Cu) [[unlikely]] return; }
L_003B933C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 21808u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 327u);
    c.budget -= 8;
    { const bool t = c.r[16].sd[0] >= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003B9378; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 21688u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8078u | kUnwind; return; } goto L_003B8078; }
L_003B9378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9380u);  if (depth < kMaxDepth) unit_00A6(c, 161u, depth + 1u); else { c.pc = 0x003B9560u; return; } if (c.pc != 0x003B9380u) [[unlikely]] return; }
L_003B9380:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 21688u);
    set32(c.r[6], c.r[6].w[0] + 21840u);
    set32(c.r[5], 0u + 331u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[8], 0u - 207u);  if (t) { goto L_003B93B8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8078u | kUnwind; return; } goto L_003B8078; }
L_003B93B8:
    set32(c.r[2], c.r[16].w[0] << 11);
    c.budget -= 1;
L_003B93BC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B93D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9198u | kUnwind; return; } goto L_003B9198; }
L_003B93F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 7;
    { const bool t = c.r[7].sd[0] <= 0; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003B949C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B941Cu);  if (depth < kMaxDepth) unit_00A6(c, 151u, depth + 1u); else { c.pc = 0x003B93D0u; return; } if (c.pc != 0x003B941Cu) [[unlikely]] return; }
L_003B941C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 21856u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 371u);
    c.budget -= 8;
    { const bool t = c.r[16].sd[0] >= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003B9458; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 21688u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8078u | kUnwind; return; } goto L_003B8078; }
L_003B9458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9460u);  if (depth < kMaxDepth) unit_00A6(c, 161u, depth + 1u); else { c.pc = 0x003B9560u; return; } if (c.pc != 0x003B9460u) [[unlikely]] return; }
L_003B9460:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 21688u);
    set32(c.r[6], c.r[6].w[0] + 21840u);
    set32(c.r[5], 0u + 376u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[8], 0u - 207u);  if (t) { goto L_003B9498; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8078u | kUnwind; return; } goto L_003B8078; }
L_003B9498:
    set32(c.r[2], c.r[16].w[0] << 11);
    c.budget -= 1;
L_003B949C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B94B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A7(c, 36u, depth); }
L_003B94C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B94D8u);  if (depth < kMaxDepth) unit_00A7(c, 29u, depth + 1u); else { c.pc = 0x003BC6B8u; return; } if (c.pc != 0x003B94D8u) [[unlikely]] return; }
L_003B94D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 21688u);
    set32(c.r[6], c.r[6].w[0] + 21872u);
    set32(c.r[5], 0u + 408u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[8], 0u - 202u);  if (t) { goto L_003B9508; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8078u | kUnwind; return; } goto L_003B8078; }
L_003B9508:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B9518:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A7(c, 34u, depth); }
L_003B9530:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A7(c, 27u, depth); }
L_003B9548:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A7(c, 28u, depth); }
L_003B9560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9588u); set32(c.r[19], 0u + 2u);  if (depth < kMaxDepth) unit_00A5(c, 281u, depth + 1u); else { c.pc = 0x003B73C0u; return; } if (c.pc != 0x003B9588u) [[unlikely]] return; }
L_003B9588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9590u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 134u, depth + 1u); else { c.pc = 0x003B9018u; return; } if (c.pc != 0x003B9590u) [[unlikely]] return; }
L_003B9590:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[18].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B95D4; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B95D0; } }
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[19].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B95D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B95B4u);  if (depth < kMaxDepth) unit_00A6(c, 132u, depth + 1u); else { c.pc = 0x003B8FE0u; return; } if (c.pc != 0x003B95B4u) [[unlikely]] return; }
L_003B95B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B95BCu);  if (depth < kMaxDepth) unit_00A6(c, 155u, depth + 1u); else { c.pc = 0x003B94B0u; return; } if (c.pc != 0x003B95BCu) [[unlikely]] return; }
L_003B95BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B95C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 283u, depth + 1u); else { c.pc = 0x003B7408u; return; } if (c.pc != 0x003B95C4u) [[unlikely]] return; }
L_003B95C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9588u | kUnwind; return; } goto L_003B9588; } }
    st16((c.r[17].w[0] + 54u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 1;
L_003B95D0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B95D4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B95F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[4].d[0] = c.r[4].d[0] << 11;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 100u);  if (t) { goto L_003B964C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9624u);  if (depth < kMaxDepth) unit_000B(c, 8u, depth + 1u); else { c.pc = 0x0014C1D0u; return; } if (c.pc != 0x003B9624u) [[unlikely]] return; }
L_003B9624:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[2].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B963Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 124u, depth + 1u); else { c.pc = 0x003B8E88u; return; } if (c.pc != 0x003B963Cu) [[unlikely]] return; }
L_003B963C:
    set32(c.r[3], 0u - 205u);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[16].d[0];
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_003B964C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9660:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 12624u), c.r[4].w[0]);  c.pc = t; return; }
L_003B9670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 21624u);  c.pc = t; return; }
L_003B9680:
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[7].w[0] >> 8);
    set32(c.r[7], c.r[7].w[0] >> 24);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));
    set32(c.r[3], c.r[6].w[0] >> 8);
    set32(c.r[6], c.r[6].w[0] >> 24);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & 65280ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003B96F0:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003B9718:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 6u));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003B9758:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9778u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00A6(c, 172u, depth + 1u); else { c.pc = 0x003B9680u; return; } if (c.pc != 0x003B9778u) [[unlikely]] return; }
L_003B9778:
    set32(c.r[4], c.r[16].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9784u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_00A6(c, 174u, depth + 1u); else { c.pc = 0x003B9718u; return; } if (c.pc != 0x003B9784u) [[unlikely]] return; }
L_003B9784:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9790u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_00A6(c, 173u, depth + 1u); else { c.pc = 0x003B96F0u; return; } if (c.pc != 0x003B9790u) [[unlikely]] return; }
L_003B9790:
    set32(c.r[8], c.r[16].w[0] + 36u);
    set32(c.r[5], ld32((c.r[8].w[0])));
    set32(c.r[4], c.r[16].w[0] + 108u);
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[8], c.r[16].w[0] + 40u);
    set32(c.r[3], c.r[5].w[0] >> 8);
    set32(c.r[5], c.r[5].w[0] >> 24);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[5], c.r[17].w[0] + 92u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[3], c.r[7].w[0] >> 8);
    set32(c.r[7], c.r[7].w[0] >> 24);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    ldl(c.r[2], (c.r[16].w[0] + 51u));
    ldr(c.r[2], (c.r[16].w[0] + 44u));
    ldl(c.r[3], (c.r[16].w[0] + 59u));
    ldr(c.r[3], (c.r[16].w[0] + 52u));
    ldl(c.r[6], (c.r[16].w[0] + 67u));
    ldr(c.r[6], (c.r[16].w[0] + 60u));
    ldl(c.r[7], (c.r[16].w[0] + 75u));
    ldr(c.r[7], (c.r[16].w[0] + 68u));
    sdl(c.r[2], (c.r[17].w[0] + 35u));
    sdr(c.r[2], (c.r[17].w[0] + 28u));
    sdl(c.r[3], (c.r[17].w[0] + 43u));
    sdr(c.r[3], (c.r[17].w[0] + 36u));
    sdl(c.r[6], (c.r[17].w[0] + 51u));
    sdr(c.r[6], (c.r[17].w[0] + 44u));
    sdl(c.r[7], (c.r[17].w[0] + 59u));
    sdr(c.r[7], (c.r[17].w[0] + 52u));
    ldl(c.r[2], (c.r[16].w[0] + 83u));
    ldr(c.r[2], (c.r[16].w[0] + 76u));
    ldl(c.r[3], (c.r[16].w[0] + 91u));
    ldr(c.r[3], (c.r[16].w[0] + 84u));
    ldl(c.r[6], (c.r[16].w[0] + 99u));
    ldr(c.r[6], (c.r[16].w[0] + 92u));
    ldl(c.r[7], (c.r[16].w[0] + 107u));
    ldr(c.r[7], (c.r[16].w[0] + 100u));
    sdl(c.r[2], (c.r[17].w[0] + 67u));
    sdr(c.r[2], (c.r[17].w[0] + 60u));
    sdl(c.r[3], (c.r[17].w[0] + 75u));
    sdr(c.r[3], (c.r[17].w[0] + 68u));
    sdl(c.r[6], (c.r[17].w[0] + 83u));
    sdr(c.r[6], (c.r[17].w[0] + 76u));
    sdl(c.r[7], (c.r[17].w[0] + 91u));
    sdr(c.r[7], (c.r[17].w[0] + 84u));
    c.budget -= 64;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9890u); st8((c.r[17].w[0] + 91u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A6(c, 173u, depth + 1u); else { c.pc = 0x003B96F0u; return; } if (c.pc != 0x003B9890u) [[unlikely]] return; }
L_003B9890:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 112u));
    set32(c.r[8], c.r[16].w[0] + 116u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 113u));
    st8((c.r[17].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[8], c.r[16].w[0] + 120u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    set32(c.r[6], c.r[6].w[0] >> 24);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[8], c.r[16].w[0] + 124u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    set32(c.r[6], c.r[6].w[0] >> 24);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    set32(c.r[6], c.r[6].w[0] >> 24);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[17].w[0] + 108u), c.r[3].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 52;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 12u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9980u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 175u, depth + 1u); else { c.pc = 0x003B9758u; return; } if (c.pc != 0x003B9980u) [[unlikely]] return; }
L_003B9980:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B99F4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[6], c.r[16].w[0] + 256u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003B99EC; } }
    set32(c.r[7], c.r[17].w[0] + 112u);
    c.budget -= 2;
L_003B99A0:
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 8));
    set32(c.r[5], c.r[5].w[0] >> 24);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] & 65280ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.r[2].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B99A0u | kUnwind; return; } goto L_003B99A0; } }
L_003B99EC:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003B99F4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9A08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[8].w[0] + 4u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 8));
    set32(c.r[7], c.r[7].w[0] >> 24);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[8].w[0]), c.r[3].w[0]);
    c.budget -= 22;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9680u | kUnwind; return; } goto L_003B9680; }
L_003B9A60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], c.r[16].w[0] + 12u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 20u);
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[8], c.r[16].w[0] + 24u);
    set32(c.r[3], c.r[7].w[0] >> 8);
    set32(c.r[7], c.r[7].w[0] >> 24);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 16u));
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 17u));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 18u));
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 19u));
    st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 20u));
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[8], c.r[16].w[0] + 28u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 8));
    set32(c.r[7], c.r[7].w[0] >> 24);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 8));
    set32(c.r[7], c.r[7].w[0] >> 24);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.budget -= 61;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9B54u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 183u, depth + 1u); else { c.pc = 0x003B9A08u; return; } if (c.pc != 0x003B9B54u) [[unlikely]] return; }
L_003B9B54:
    set32(c.r[4], c.r[16].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9B60u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_00A6(c, 183u, depth + 1u); else { c.pc = 0x003B9A08u; return; } if (c.pc != 0x003B9B60u) [[unlikely]] return; }
L_003B9B60:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9B78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1904u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9BA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B9BA0u) [[unlikely]] return; }
L_003B9BA0:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x43490000u);
    c.r[6].d[0] = ld8((c.r[16].w[0]));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43560000u);
    set32(c.r[2], c.r[5].w[0] >> 8);
    set32(c.r[5], c.r[5].w[0] >> 24);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[6], c.r[6].w[0] << 24);
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] | 19782ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 19;
    { const bool t = c.r[6].d[0] != c.r[7].d[0]; c.r[8].d[0] = c.r[8].d[0] | 19784ull;  if (t) { goto L_003B9C00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9BF4u);  if (depth < kMaxDepth) unit_00A6(c, 215u, depth + 1u); else { c.pc = 0x003B9FC8u; return; } if (c.pc != 0x003B9BF4u) [[unlikely]] return; }
L_003B9BF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B9C24; } }
    c.budget -= 1;
L_003B9C00:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[8].d[0]) { set32(c.r[2], 0u - 2u);  goto L_003B9C20; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9C14u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 180u, depth + 1u); else { c.pc = 0x003B9960u; return; } if (c.pc != 0x003B9C14u) [[unlikely]] return; }
L_003B9C14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B9C24; } }
    c.budget -= 1;
L_003B9C20:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B9C24:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9C38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 44u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9C60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B9C60u) [[unlikely]] return; }
L_003B9C60:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x43490000u);
    c.r[6].d[0] = ld8((c.r[16].w[0]));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x5A4F0000u);
    set32(c.r[2], c.r[5].w[0] >> 8);
    set32(c.r[5], c.r[5].w[0] >> 24);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[6], c.r[6].w[0] << 24);
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] | 19782ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 19;
    { const bool t = c.r[6].d[0] != c.r[7].d[0]; c.r[8].d[0] = c.r[8].d[0] | 20037ull;  if (t) { goto L_003B9CC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9CB4u);  if (depth < kMaxDepth) unit_00A6(c, 217u, depth + 1u); else { c.pc = 0x003BA018u; return; } if (c.pc != 0x003B9CB4u) [[unlikely]] return; }
L_003B9CB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B9CE4; } }
    c.budget -= 1;
L_003B9CC0:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[8].d[0]) { set32(c.r[2], 0u - 2u);  goto L_003B9CE0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9CD4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 184u, depth + 1u); else { c.pc = 0x003B9A60u; return; } if (c.pc != 0x003B9CD4u) [[unlikely]] return; }
L_003B9CD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B9CE4; } }
    c.budget -= 1;
L_003B9CE0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B9CE4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9CF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003B9DA0; } }
    c.r[2].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.r[16].d[0] = ld64((c.r[6].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld64((c.r[17].w[0]));  if (t) { goto L_003B9E38; } }
    set32(c.r[2], c.r[8].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 21888u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003B8000u < 16384u) { entry = entries_00A6[(t - 0x003B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B9D40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9D50u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B9D50u) [[unlikely]] return; }
L_003B9D50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B9D94; } }
L_003B9D58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] + c.r[16].d[0];  if (t) { goto L_003B9D94; } }
L_003B9D60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] - c.r[16].d[0];  if (t) { goto L_003B9D94; } }
L_003B9D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9D70u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 7u, depth + 1u); else { c.pc = 0x0014C158u; return; } if (c.pc != 0x003B9D70u) [[unlikely]] return; }
L_003B9D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003B9D94; } }
L_003B9D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9D80u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 8u, depth + 1u); else { c.pc = 0x0014C1D0u; return; } if (c.pc != 0x003B9D80u) [[unlikely]] return; }
L_003B9D80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003B9D94; } }
L_003B9D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9D90u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 9u, depth + 1u); else { c.pc = 0x0014C868u; return; } if (c.pc != 0x003B9D90u) [[unlikely]] return; }
L_003B9D90:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003B9D94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st64((c.r[17].w[0]), c.r[4].d[0]);  if (t) { goto L_003B9E44; } }
    c.budget -= 1;
L_003B9DA0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[7], ld32((c.r[17].w[0])));  if (t) { goto L_003B9DB4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B9E48; } }
L_003B9DB4:
    c.r[2].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[6].w[0])));  if (t) { goto L_003B9E38; } }
    set32(c.r[2], c.r[8].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 21920u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003B8000u < 16384u) { entry = entries_00A6[(t - 0x003B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B9DD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9DE8u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003B9DE8u) [[unlikely]] return; }
L_003B9DE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B9E40; } }
L_003B9DF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + c.r[16].w[0]);  if (t) { goto L_003B9E40; } }
L_003B9DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - c.r[16].w[0]);  if (t) { goto L_003B9E40; } }
L_003B9E00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[7].w[0], c.r[16].w[0]); c.r[7].d[0] = c.lo.d[0];  if (t) { goto L_003B9E40; } }
L_003B9E08:
    mmi::divu(c, 0, c.r[7].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x003B9E10u);  goto L_003B9E14; }
L_003B9E14:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003B9E40; } }
L_003B9E20:
    mmi::divu(c, 0, c.r[7].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x003B9E28u);  goto L_003B9E2C; }
L_003B9E2C:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003B9E40; } }
L_003B9E38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B9E48; } }
L_003B9E40:
    st32((c.r[17].w[0]), c.r[7].w[0]);
    c.budget -= 1;
L_003B9E44:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B9E48:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9E60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[8], c.r[17].w[0] + 4u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[3], c.r[7].w[0] >> 8);
    set32(c.r[7], c.r[7].w[0] >> 24);
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[8].d[0] = c.r[8].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[3].d[0];
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9EC8u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 195u, depth + 1u); else { c.pc = 0x003B9CF8u; return; } if (c.pc != 0x003B9EC8u) [[unlikely]] return; }
L_003B9EC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x524F0000u);
    set32(c.r[7], c.r[16].w[0] + 16u);
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 18003ull;
    set32(c.r[2], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[8], c.r[17].w[0] + 36u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 4u);
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[16].w[0] + 92u);
    st32((c.r[16].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[11], c.r[4].w[0] + 21944u);
    ldl(c.r[3], (c.r[11].w[0] + 7u));
    ldr(c.r[3], (c.r[11].w[0]));
    set32(c.r[9], ld32((c.r[11].w[0] + 8u)));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 12u)));
    sdl(c.r[3], (c.r[16].w[0] + 35u));
    sdr(c.r[3], (c.r[16].w[0] + 28u));
    st32((c.r[16].w[0] + 36u), c.r[9].w[0]);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 1u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[8].w[0] + 2u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 3u));
    set32(c.r[8], c.r[17].w[0] + 32u);
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 100u), c.r[5].w[0]);
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.r[4].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    set32(c.r[6], c.r[6].w[0] >> 24);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[3].d[0] = c.r[3].d[0] | 25136ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[1].d[0] = c.r[1].d[0] | 27183ull;
    set32(c.r[4], c.r[1].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 64;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B9FC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[2].w[0] - 12552u), 0u);
    st32((c.r[3].w[0] - 12548u), 0u);
    st32((c.r[6].w[0] - 12544u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9FFCu); st32((c.r[7].w[0] - 12540u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 213u, depth + 1u); else { c.pc = 0x003B9E60u; return; } if (c.pc != 0x003B9FFCu) [[unlikely]] return; }
L_003B9FFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 112u), 0u);  goto L_003BA004; }
L_003BA004:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BA018:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + 16u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] >> 8);
    set32(c.r[4], c.r[4].w[0] >> 24);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 29;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; st32((c.r[29].w[0]), c.r[4].w[0]);  if (t) { goto L_003BA0D0; } }
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003BA0B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 4u);  if (t) { goto L_003BA0C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BA234; } }
    c.budget -= 1;
L_003BA0B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 4u);  if (t) { goto L_003BA0E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BA234; } }
L_003BA0C0:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003BA0E8; } }
    c.budget -= 1;
L_003BA0D0:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u - 3u);  if (t) { goto L_003BA0E8; } }
    c.budget -= 1;
L_003BA0E0:
    set32(c.r[6], 0u + 2u);
    set32(c.r[20], 0u - 3u);
    c.budget -= 2;
L_003BA0E8:
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u - 8u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2352u);
    set32(c.r[7], 0u + 2450u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[19].w[0] + 28u);
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 12u), c.r[5].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[7], c.r[18].w[0] + 24u);
    st8((c.r[18].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[2].w[0])));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 8));
    set32(c.r[9], c.r[9].w[0] >> 24);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[8].d[0] = c.r[8].d[0] & 65280ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0]), 0u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    set32(c.r[10], c.r[3].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 2063u);
    c.r[8].d[0] = c.r[10].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[10].d[0] + 0ull;
    if (c.r[8].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 20u), c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] << 11);
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA188u); set32(c.r[17], c.r[10].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 195u, depth + 1u); else { c.pc = 0x003B9CF8u; return; } if (c.pc != 0x003BA188u) [[unlikely]] return; }
L_003BA188:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] - 12552u), c.r[16].w[0]);
    st32((c.r[2].w[0] - 12548u), c.r[17].w[0]);
    set32(c.r[2], c.r[19].w[0] + 32u);
    set32(c.r[7], c.r[18].w[0] + 36u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[2].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 8));
    set32(c.r[9], c.r[9].w[0] >> 24);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[8].d[0] = c.r[8].d[0] & 65280ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0]), 0u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[10].d[0] = c.r[10].d[0] | 25136ull;
    set32(c.r[10], c.r[10].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[1].d[0] = c.r[1].d[0] | 27183ull;
    set32(c.r[3], c.r[1].w[0] + c.r[3].w[0]);
    c.r[8].d[0] = c.r[10].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[10].d[0] + 0ull;
    if (c.r[8].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 32u), c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] << 11);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA21Cu); set32(c.r[17], c.r[10].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 195u, depth + 1u); else { c.pc = 0x003B9CF8u; return; } if (c.pc != 0x003BA21Cu) [[unlikely]] return; }
L_003BA21C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] - 12544u), c.r[16].w[0]);
    st32((c.r[2].w[0] - 12540u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_003BA234:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BA2B8:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    set32(c.r[2], c.r[4].w[0] - 97u);
    set32(c.r[3], c.r[4].w[0] - 32u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] << 24);  if (t) { goto L_003BA2D8; } }
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    c.budget -= 1;
L_003BA2D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003BA2E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 10;
    { const bool t = c.r[18].sd[0] <= 0; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003BA360; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 2;
L_003BA310:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BA348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA324u);  if (depth < kMaxDepth) unit_00A6(c, 220u, depth + 1u); else { c.pc = 0x003BA2B8u; return; } if (c.pc != 0x003BA324u) [[unlikely]] return; }
L_003BA324:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA334u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_00A6(c, 220u, depth + 1u); else { c.pc = 0x003BA2B8u; return; } if (c.pc != 0x003BA334u) [[unlikely]] return; }
L_003BA334:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] - 1u);  if (t) { goto L_003BA358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BA364; } }
    c.budget -= 1;
L_003BA348:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_003BA364; } }
    c.budget -= 1;
L_003BA358:
    c.budget -= 2;
    if (c.r[18].sd[0] > 0) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA310u | kUnwind; return; } goto L_003BA310; }
L_003BA360:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003BA364:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BA380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003BA3D0; } }
L_003BA3A0:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA3B0u); set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));  if (depth < kMaxDepth) unit_00A6(c, 220u, depth + 1u); else { c.pc = 0x003BA2B8u; return; } if (c.pc != 0x003BA3B0u) [[unlikely]] return; }
L_003BA3B0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA3C0u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_00A6(c, 220u, depth + 1u); else { c.pc = 0x003BA2B8u; return; } if (c.pc != 0x003BA3C0u) [[unlikely]] return; }
L_003BA3C0:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  goto L_003BA3D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BA3E4; } }
L_003BA3D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 1;
L_003BA3D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[17].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA3A0u | kUnwind; return; } goto L_003BA3A0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_003BA3E4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BA400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[17].w[0]));  if (t) { goto L_003BA488; } }
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));  goto L_003BA480; }
    set32(c.r[4], c.r[4].w[0] << 24);
    c.budget -= 1;
L_003BA438:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA444u); set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));  if (depth < kMaxDepth) unit_00A6(c, 220u, depth + 1u); else { c.pc = 0x003BA2B8u; return; } if (c.pc != 0x003BA444u) [[unlikely]] return; }
L_003BA444:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA454u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_00A6(c, 220u, depth + 1u); else { c.pc = 0x003BA2B8u; return; } if (c.pc != 0x003BA454u) [[unlikely]] return; }
L_003BA454:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 46u);  if (t) { goto L_003BA4B8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] << 24);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));  goto L_003BA48C; }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[4], c.r[4].w[0] << 24);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA438u | kUnwind; return; } goto L_003BA438; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 1;
L_003BA480:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] << 24);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA438u | kUnwind; return; } goto L_003BA438; }
L_003BA488:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 1;
L_003BA48C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BA4BC; } }
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BA4BC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003BA4BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BA4BC; } }
    c.budget -= 1;
L_003BA4B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BA4BC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BA4D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_003BA538; } }
L_003BA4E8:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = ld8((c.r[6].w[0]));  if (t) { goto L_003BA524; } }
    set32(c.r[2], c.r[7].w[0] << 24);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 2;
L_003BA500:
    set32(c.r[3], c.r[3].w[0] << 24);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[2].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003BA53C; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = ld8((c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA500u | kUnwind; return; } goto L_003BA500; } }
L_003BA524:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA4E8u | kUnwind; return; } goto L_003BA4E8; } }
L_003BA538:
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_003BA53C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BA548:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 218u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_003BA594; } }
    c.budget -= 1;
L_003BA570:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA580u); set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));  if (depth < kMaxDepth) unit_00A6(c, 239u, depth + 1u); else { c.pc = 0x003BA5B0u; return; } if (c.pc != 0x003BA580u) [[unlikely]] return; }
L_003BA580:
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA570u | kUnwind; return; } goto L_003BA570; } }
L_003BA594:
    set32(c.r[2], c.r[17].w[0] >> 2);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BA5B0:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    set32(c.r[2], c.r[4].w[0] - 97u);
    set32(c.r[3], c.r[4].w[0] - 32u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] << 24);  if (t) { goto L_003BA5D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));  if (t) { goto L_003BA5E0; } }
    c.budget -= 1;
L_003BA5D8:
    c.r[2].d[0] = c.r[4].d[0] ^ 46ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    c.budget -= 2;
L_003BA5E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003BA5E8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003BA610; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_003BA618; } }
L_003BA610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BA6DC; } }
L_003BA618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA620u);  if (depth < kMaxDepth) unit_00A6(c, 100u, depth + 1u); else { c.pc = 0x003B8C90u; return; } if (c.pc != 0x003BA620u) [[unlikely]] return; }
L_003BA620:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(34ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BA6DC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA648u); set32(c.r[19], c.r[17].w[0] + 14u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003BA648u) [[unlikely]] return; }
L_003BA648:
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 35u);
    st32((c.r[17].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 27u));
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.r[16].d[0] = ld8((c.r[18].w[0] + 34u));
    set32(c.r[3], c.r[16].w[0] - 2u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA688u); set32(c.r[16], c.r[19].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x003BA688u) [[unlikely]] return; }
L_003BA688:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BA6CC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BA6B8; } }
    set32(c.r[2], 0u + 46u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BA6CC; } }
L_003BA6B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 46u);  if (t) { goto L_003BA6CC; } }
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003BA6CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA6D4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 236u, depth + 1u); else { c.pc = 0x003BA548u; return; } if (c.pc != 0x003BA6D4u) [[unlikely]] return; }
L_003BA6D4:
    st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 2;
L_003BA6DC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BA6F8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 8u), c.r[6].w[0]);  if (t) { goto L_003BA74C; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003BA750; } }
    c.budget -= 2;
    if (c.r[30].d[0] != 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 8u)));  goto L_003BA778; }
L_003BA74C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 1;
L_003BA750:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 21960u);
    set32(c.r[6], c.r[6].w[0] + 21984u);
    set32(c.r[5], 0u + 327u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA76Cu); set32(c.r[8], 0u - 100u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003BA76Cu) [[unlikely]] return; }
L_003BA76C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003BA9FC; } }
    c.budget -= 1;
L_003BA778:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  goto L_003BA7B0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[17], c.r[30].w[0] + 12u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + 22u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA79Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x003BA79Cu) [[unlikely]] return; }
L_003BA79C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  goto L_003BA7BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BAA00; } }
    c.budget -= 1;
L_003BA7B0:
    set32(c.r[17], c.r[30].w[0] + 12u);
    set32(c.r[16], c.r[3].w[0] + 22u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
L_003BA7BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 8u)));  goto L_003BA828; }
    st32((c.r[30].w[0] + 8u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA7E0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x001477A8u; return; } if (c.pc != 0x003BA7E0u) [[unlikely]] return; }
L_003BA7E0:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[6], ld32((c.r[30].w[0] + 4u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = c.r[3].d[0] + 0ull;  goto L_003BA800; }
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[23], 0u - 109u);  if (t) { goto L_003BA804; } }
L_003BA800:
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BA804:
    set32(c.r[6], c.r[19].w[0] << 1);
    set32(c.r[5], c.r[18].w[0] + 24u);
    set32(c.r[6], c.r[6].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[30].w[0] + 24u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA81Cu); set32(c.r[6], c.r[6].w[0] << 4);  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003BA81Cu) [[unlikely]] return; }
L_003BA81C:
    st32((c.r[30].w[0]), c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_003BA9FC; } }
L_003BA828:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[30].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[22], c.r[30].w[0] + 24u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA844u); c.r[16].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x001477A8u; return; } if (c.pc != 0x003BA844u) [[unlikely]] return; }
L_003BA844:
    set32(c.r[3], ld32((c.r[30].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] <= 0; st32((c.r[29].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003BA988; } }
L_003BA850:
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[17], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 2047u);
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] >> 11);
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[3].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA880u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 335u, depth + 1u); else { c.pc = 0x003B7E80u; return; } if (c.pc != 0x003BA880u) [[unlikely]] return; }
L_003BA880:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == c.r[17].d[0]; set32(c.r[4], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003BA8B8; } }
    st32((c.r[30].w[0] + 8u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA8A0u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 60u, depth + 1u); else { c.pc = 0x003B8988u; return; } if (c.pc != 0x003BA8A0u) [[unlikely]] return; }
L_003BA8A0:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_003BA9D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BAA00; } }
L_003BA8B8:
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 8u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA8CCu); c.r[16].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 42u, depth + 1u); else { c.pc = 0x003B8548u; return; } if (c.pc != 0x003BA8CCu) [[unlikely]] return; }
L_003BA8CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { goto L_003BA908; } }
L_003BA8D8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + c.r[23].w[0]);  if (t) { goto L_003BA8F0; } }
    c.r[2].d[0] = ld32((c.r[22].w[0]));
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[20].d[0];
    if (c.r[2].d[0] != 0) c.r[20].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_003BA8F0:
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.r[18].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[22], c.r[22].w[0] + 48u);  if (t) { goto L_003BA96C; } }
L_003BA908:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003BA988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA918u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 240u, depth + 1u); else { c.pc = 0x003BA5E8u; return; } if (c.pc != 0x003BA918u) [[unlikely]] return; }
L_003BA918:
    set32(c.r[3], c.r[16].w[0] - c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] + 2048u);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 2048u);
    set32(c.r[4], c.r[17].w[0] << 11);
    c.r[5].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[5].d[0] << 32;
    set32(c.r[6], c.r[21].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[23].sd[0] > 0; c.r[3].d[0] = c.r[20].d[0] - c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA8D8u | kUnwind; return; } goto L_003BA8D8; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != c.r[2].d[0];  if (t) { goto L_003BA96C; } }
    set32(c.r[16], c.r[21].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BA96C; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA908u | kUnwind; return; } goto L_003BA908; } }
L_003BA96C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] << 11);  if (t) { goto L_003BA988; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.r[20].d[0] = c.r[20].d[0] - c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[20].sd[0] > 0; st32((c.r[29].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA850u | kUnwind; return; } goto L_003BA850; } }
L_003BA988:
    st32((c.r[30].w[0]), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BA9FC; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_003BA9F8; } }
    c.budget -= 2;
    if (c.r[20].d[0] != c.r[2].d[0]) { st32((c.r[30].w[0] + 8u), 0u);  goto L_003BA9C8; }
    set32(c.r[2], c.r[21].w[0] + 2048u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BA9FC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003BA9FC; }
    st32((c.r[30].w[0] + 8u), 0u);
    c.budget -= 1;
L_003BA9C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 109u);  if (t) { goto L_003BA9FC; } }
L_003BA9D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 21960u);
    set32(c.r[6], c.r[6].w[0] + 21984u);
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 391u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA9F0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003BA9F0u) [[unlikely]] return; }
L_003BA9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BAA00; } }
L_003BA9F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BA9FC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003BAA00:
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
L_003BAA30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAA68u); c.r[20].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 156u, depth + 1u); else { c.pc = 0x003B94C8u; return; } if (c.pc != 0x003BAA68u) [[unlikely]] return; }
L_003BAA68:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[21].d[0] != 0ull; c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003BAA90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAA8Cu);  if (depth < kMaxDepth) unit_00A6(c, 245u, depth + 1u); else { c.pc = 0x003BA6F8u; return; } if (c.pc != 0x003BAA8Cu) [[unlikely]] return; }
L_003BAA8C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003BAA90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAA98u);  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x003B9518u; return; } if (c.pc != 0x003BAA98u) [[unlikely]] return; }
L_003BAA98:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BAAC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    set32(c.r[21], 0u + 2048u);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[30].d[0]);
    set32(c.r[30], c.r[5].w[0] << 11);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[18], c.r[23].w[0] + 24u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[23].w[0] + 8u), 0u);
    set32(c.r[22], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[6], c.r[22].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[22].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAB28u); set32(c.r[6], c.r[6].w[0] << 4);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003BAB28u) [[unlikely]] return; }
L_003BAB28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[20].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;  if (t) { goto L_003BAB54; } }
L_003BAB30:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[21], ld32((c.r[18].w[0])));  goto L_003BAB38; }
L_003BAB38:
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 48u);  if (t) { goto L_003BABB0; } }
    c.r[19].d[0] = c.r[20].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003BAB54:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[30].w[0]);  if (t) { goto L_003BABB0; } }
    c.r[2].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003BABB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAB70u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 240u, depth + 1u); else { c.pc = 0x003BA5E8u; return; } if (c.pc != 0x003BAB70u) [[unlikely]] return; }
L_003BAB70:
    set32(c.r[3], 0u - 2048u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2048u);
    c.r[5].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[17].w[0] + c.r[21].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAB30u | kUnwind; return; } goto L_003BAB30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_003BABB0; } }
    set32(c.r[16], c.r[17].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BABB0; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAB54u | kUnwind; return; } goto L_003BAB54; } }
L_003BABB0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[22].d[0]; st32((c.r[23].w[0]), c.r[20].w[0]);  if (t) { goto L_003BABD4; } }
    set32(c.r[2], c.r[17].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + c.r[30].w[0]);  if (t) { goto L_003BABD8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u - 109u);  if (t) { goto L_003BABE4; } }
L_003BABD4:
    set32(c.r[3], c.r[17].w[0] + c.r[30].w[0]);
    c.budget -= 1;
L_003BABD8:
    set32(c.r[2], 0u - 110u);
    c.r[3].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 3;
L_003BABE4:
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
L_003BAC18:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_003BAC4C; } }
    set32(c.r[5], 0u + 46u);
    c.budget -= 1;
L_003BAC28:
    set32(c.r[3], c.r[3].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BAC50; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = ld8((c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAC28u | kUnwind; return; } goto L_003BAC28; } }
L_003BAC4C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BAC50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BAC58:
    set32(c.r[29], c.r[29].w[0] - 1104u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 1024u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 1080u), c.r[23].d[0]);
    set32(c.r[23], c.r[5].w[0] + 24u);
    st64((c.r[29].w[0] + 1032u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 1040u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 1048u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 1056u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 1064u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 1072u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 1088u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 1096u), c.r[31].d[0]);
    c.budget -= 16;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], ld32((c.r[5].w[0])));  if (t) { goto L_003BADB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[22], c.r[2].w[0] + 22000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BACA8u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x003BACA8u) [[unlikely]] return; }
L_003BACA8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);  goto L_003BACB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BADB8; } }
L_003BACB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BACC4u); set32(c.r[5], c.r[5].w[0] + 22008u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x003BACC4u) [[unlikely]] return; }
L_003BACC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003BACD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003BADB8; } }
    c.budget -= 1;
L_003BACD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BACE0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x001477A8u; return; } if (c.pc != 0x003BACE0u) [[unlikely]] return; }
L_003BACE0:
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BACF0u); set32(c.r[21], 0u + 2u);  if (depth < kMaxDepth) unit_00A6(c, 16u, depth + 1u); else { c.pc = 0x003B8190u; return; } if (c.pc != 0x003BACF0u) [[unlikely]] return; }
L_003BACF0:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[29].w[0] + 512u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAD08u); c.r[30].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x001477A8u; return; } if (c.pc != 0x003BAD08u) [[unlikely]] return; }
L_003BAD08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAD10u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 268u, depth + 1u); else { c.pc = 0x003BAC18u; return; } if (c.pc != 0x003BAD10u) [[unlikely]] return; }
L_003BAD10:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003BAD24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAD24u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00147530u; return; } if (c.pc != 0x003BAD24u) [[unlikely]] return; }
L_003BAD24:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003BADAC; } }
    set32(c.r[2], c.r[21].w[0] + c.r[18].w[0]);
    c.budget -= 2;
L_003BAD38:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[19], c.r[2].w[0] >> 1);
    set32(c.r[16], c.r[19].w[0] << 1);
    set32(c.r[16], c.r[16].w[0] + c.r[19].w[0]);
    set32(c.r[16], c.r[16].w[0] << 4);
    set32(c.r[16], c.r[23].w[0] + c.r[16].w[0]);
    set32(c.r[17], c.r[16].w[0] + 14u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAD5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x003BAD5Cu) [[unlikely]] return; }
L_003BAD5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003BAD80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAD78u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x003BAD78u) [[unlikely]] return; }
L_003BAD78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BAD88; } }
L_003BAD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAD88u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x003BAD88u) [[unlikely]] return; }
L_003BAD88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[30], 0u + 1u);  goto L_003BADA8; }
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[18], c.r[19].w[0] - 1u);  goto L_003BAD9C; }
    set32(c.r[21], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003BAD9C:
    c.r[2].d[0] = c.r[18].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[21].w[0] + c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAD38u | kUnwind; return; } goto L_003BAD38; } }
L_003BADA8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003BADAC:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[30].d[0] ^ c.r[3].d[0];
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 3;
L_003BADB8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 1024u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 1032u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 1040u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 1048u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 1056u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 1064u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 1072u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 1080u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 1088u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1096u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1104u);  c.pc = t; return; }
L_003BADE8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[5].w[0] + 24u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[20], ld32((c.r[5].w[0])));  if (t) { goto L_003BAEC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAE24u);  if (depth < kMaxDepth) unit_00A6(c, 236u, depth + 1u); else { c.pc = 0x003BA548u; return; } if (c.pc != 0x003BAE24u) [[unlikely]] return; }
L_003BAE24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] + 22000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAE38u); c.r[21].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x003BAE38u) [[unlikely]] return; }
L_003BAE38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003BAE48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BAEC4; } }
L_003BAE48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAE54u); set32(c.r[5], c.r[5].w[0] + 22008u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x003BAE54u) [[unlikely]] return; }
L_003BAE54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003BAEC4; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003BAEC0; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_003BAE68:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 13u));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[21].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_003BAEB4; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 14u);  if (t) { goto L_003BAEA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAE8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 225u, depth + 1u); else { c.pc = 0x003BA380u; return; } if (c.pc != 0x003BAE8Cu) [[unlikely]] return; }
L_003BAE8C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[19].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_003BAEB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[18].w[0] + 1u);  if (t) { goto L_003BAEC4; } }
    c.budget -= 1;
L_003BAEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAEA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 229u, depth + 1u); else { c.pc = 0x003BA400u; return; } if (c.pc != 0x003BAEA8u) [[unlikely]] return; }
L_003BAEA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; set32(c.r[2], c.r[18].w[0] + 1u);  if (t) { goto L_003BAEC4; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003BAEB4:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAE68u | kUnwind; return; } goto L_003BAE68; } }
L_003BAEC0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BAEC4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BAEE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BAF18; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BAF10; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BADE8u | kUnwind; return; } goto L_003BADE8; }
L_003BAF10:
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAC58u | kUnwind; return; } goto L_003BAC58; }
L_003BAF18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BAF28:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[17], c.r[19].w[0] + 2048u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[7].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[18], c.r[8].w[0] + 1u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    set32(c.r[21], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 24;
L_003BAF88:
    c.r[2].d[0] = c.r[17].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[19].w[0] - c.r[17].w[0]);  if (t) { goto L_003BAFB4; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BB028; } }
L_003BAFB4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 2048u);
    set32(c.r[16], c.r[19].w[0] - c.r[6].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAFC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003BAFC8u) [[unlikely]] return; }
L_003BAFC8:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAFDCu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 335u, depth + 1u); else { c.pc = 0x003B7E80u; return; } if (c.pc != 0x003BAFDCu) [[unlikely]] return; }
L_003BAFDC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[7].d[0] = c.r[20].d[0] + 0ull;  goto L_003BB010; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[5].w[0] + 21960u);
    set32(c.r[5], 0u + 806u);
    set32(c.r[6], c.r[3].w[0] + 22016u);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB008u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x003B8078u; return; } if (c.pc != 0x003BB008u) [[unlikely]] return; }
L_003BB008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BB0F0; } }
L_003BB010:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB028u); c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 42u, depth + 1u); else { c.pc = 0x003B8548u; return; } if (c.pc != 0x003BB028u) [[unlikely]] return; }
L_003BB028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB030u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 115u, depth + 1u); else { c.pc = 0x003B8DB0u; return; } if (c.pc != 0x003BB030u) [[unlikely]] return; }
L_003BB030:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 8u));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[4].d[0]) { c.r[6].d[0] = ld8((c.r[16].w[0]));  goto L_003BB0B0; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[21].d[0] == c.r[5].d[0]) { st32((c.r[29].w[0] + 4u), c.r[21].w[0]);  goto L_003BB074; }
    c.r[6].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[30].d[0]; set32(c.r[4], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003BB0B4; } }
    set32(c.r[4], c.r[16].w[0] + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB068u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 221u, depth + 1u); else { c.pc = 0x003BA2E0u; return; } if (c.pc != 0x003BB068u) [[unlikely]] return; }
L_003BB068:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = ld8((c.r[16].w[0]));  goto L_003BB0B0; }
    st32((c.r[29].w[0] + 4u), c.r[21].w[0]);
    c.budget -= 1;
L_003BB074:
    set32(c.r[18], c.r[18].w[0] + c.r[30].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + 1u);  if (t) { goto L_003BB090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_003BB0EC; } }
    c.budget -= 1;
L_003BB090:
    c.r[2].d[0] = c.r[21].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[18].d[0] = c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[2].w[0] + 22032u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB0A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 233u, depth + 1u); else { c.pc = 0x003BA4D8u; return; } if (c.pc != 0x003BB0A8u) [[unlikely]] return; }
L_003BB0A8:
    c.r[6].d[0] = ld8((c.r[16].w[0]));
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003BB0B0:
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 1;
L_003BB0B4:
    c.r[2].d[0] = c.r[6].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAF88u | kUnwind; return; } goto L_003BAF88; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BB0EC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003BB0F0:
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
L_003BB120:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB158u); c.r[20].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 156u, depth + 1u); else { c.pc = 0x003B94C8u; return; } if (c.pc != 0x003BB158u) [[unlikely]] return; }
L_003BB158:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[21].d[0] != 0ull; c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003BB180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB17Cu);  if (depth < kMaxDepth) unit_00A6(c, 290u, depth + 1u); else { c.pc = 0x003BAF28u; return; } if (c.pc != 0x003BB17Cu) [[unlikely]] return; }
L_003BB17C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003BB180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB188u);  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x003B9518u; return; } if (c.pc != 0x003BB188u) [[unlikely]] return; }
L_003BB188:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BB1B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 22040u);  c.pc = t; return; }
L_003BB1C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB1D0u);  if (depth < kMaxDepth) unit_00A6(c, 303u, depth + 1u); else { c.pc = 0x003BB1B0u; return; } if (c.pc != 0x003BB1D0u) [[unlikely]] return; }
L_003BB1D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], c.r[3].w[0] - 12536u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + 12632u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BB1F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 12736u);  c.pc = t; return; }
L_003BB200:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B50C0u | kUnwind; return; } [[clang::musttail]] return unit_00A5(c, 88u, depth); }
L_003BB218:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BB220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5118u | kUnwind; return; } [[clang::musttail]] return unit_00A5(c, 92u, depth); }
L_003BB238:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4F18u | kUnwind; return; } [[clang::musttail]] return unit_00A5(c, 74u, depth); }
L_003BB250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5028u | kUnwind; return; } [[clang::musttail]] return unit_00A5(c, 82u, depth); }
L_003BB268:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003BB298; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB298; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BB298; } }
    set32(c.r[2], 0u - 205u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BB298:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4558u | kUnwind; return; } [[clang::musttail]] return unit_00A5(c, 36u, depth); }
L_003BB2A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B46C0u | kUnwind; return; } [[clang::musttail]] return unit_00A5(c, 38u, depth); }
L_003BB2C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5050u | kUnwind; return; } [[clang::musttail]] return unit_00A5(c, 84u, depth); }
L_003BB2D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5098u | kUnwind; return; } [[clang::musttail]] return unit_00A5(c, 86u, depth); }
L_003BB2F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB300u);  if (depth < kMaxDepth) unit_00A5(c, 90u, depth + 1u); else { c.pc = 0x003B50F0u; return; } if (c.pc != 0x003BB300u) [[unlikely]] return; }
L_003BB300:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BB334; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003BB334; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003BB334; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003BB334; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003BB334:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BB340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5300u | kUnwind; return; } [[clang::musttail]] return unit_00A5(c, 106u, depth); }
L_003BB358:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4998u | kUnwind; return; } [[clang::musttail]] return unit_00A5(c, 45u, depth); }
L_003BB370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB380u);  if (depth < kMaxDepth) unit_00A5(c, 32u, depth + 1u); else { c.pc = 0x003B44D8u; return; } if (c.pc != 0x003BB380u) [[unlikely]] return; }
L_003BB380:
    set32(c.r[3], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BB398:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5600u | kUnwind; return; } [[clang::musttail]] return unit_00A5(c, 117u, depth); }
L_003BB3B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003BB3B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5568u | kUnwind; return; } [[clang::musttail]] return unit_00A5(c, 114u, depth); }
L_003BB3D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5200u | kUnwind; return; } [[clang::musttail]] return unit_00A5(c, 99u, depth); }
L_003BB3E8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 22088u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB410u); st32((c.r[29].w[0]), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x003BB410u) [[unlikely]] return; }
L_003BB410:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003BB420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BB47C; } }
L_003BB420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB428u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x003BB428u) [[unlikely]] return; }
L_003BB428:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] - 19984u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003BB47C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB44Cu);  if (depth < kMaxDepth) unit_0093(c, 109u, depth + 1u); else { c.pc = 0x0036D5D0u; return; } if (c.pc != 0x003BB44Cu) [[unlikely]] return; }
L_003BB44C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB45Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 64u, depth + 1u); else { c.pc = 0x003B4D20u; return; } if (c.pc != 0x003BB45Cu) [[unlikely]] return; }
L_003BB45C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u - 104u);  if (t) { goto L_003BB478; } }
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003BB47C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB478u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 126u, depth + 1u); else { c.pc = 0x0036D830u; return; } if (c.pc != 0x003BB478u) [[unlikely]] return; }
L_003BB478:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003BB47C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BB490:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[5].w[0] + 22088u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB4ACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00147660u; return; } if (c.pc != 0x003BB4ACu) [[unlikely]] return; }
L_003BB4AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003BB4C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BB4DC; } }
    c.budget -= 1;
L_003BB4C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB4C8u);  if (depth < kMaxDepth) unit_00A5(c, 68u, depth + 1u); else { c.pc = 0x003B4DD0u; return; } if (c.pc != 0x003BB4C8u) [[unlikely]] return; }
L_003BB4C8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003BB4E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB4D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 126u, depth + 1u); else { c.pc = 0x0036D830u; return; } if (c.pc != 0x003BB4D8u) [[unlikely]] return; }
L_003BB4D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BB4DC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003BB4E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BB4F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 100u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BB670; } }
    c.r[2].d[0] = c.r[5].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 203u);  if (t) { goto L_003BB560; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_003BB5F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003BB540; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003BB718; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BB5C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BB720; } }
L_003BB540:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_003BB630; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_003BB610; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BB650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BB720; } }
L_003BB560:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 204ll ? 1ull : 0ull;  if (t) { goto L_003BB6C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 205u);  if (t) { goto L_003BB598; } }
    set32(c.r[2], 0u + 201u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 202ll ? 1ull : 0ull;  if (t) { goto L_003BB698; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 200u);  if (t) { goto L_003BB6B0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BB678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BB720; } }
    c.budget -= 1;
L_003BB598:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 205ll ? 1ull : 0ull;  if (t) { goto L_003BB6F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003BB6D8; } }
    set32(c.r[3], 0u + 299u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BB71C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BB71C; } }
    c.budget -= 1;
L_003BB5C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BB720; } }
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003BB720; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BB720; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB3E8u | kUnwind; return; } goto L_003BB3E8; }
L_003BB5F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BB71C; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BB71C; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB490u | kUnwind; return; } goto L_003BB490; }
L_003BB610:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BB71C; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BB71C; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5670u | kUnwind; return; } [[clang::musttail]] return unit_00A5(c, 121u, depth); }
L_003BB630:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BB71C; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BB71C; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5320u | kUnwind; return; } [[clang::musttail]] return unit_00A5(c, 108u, depth); }
L_003BB650:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BB720; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BB71C; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4E40u | kUnwind; return; } [[clang::musttail]] return unit_00A5(c, 71u, depth); }
L_003BB670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BB71C; } }
L_003BB678:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BB720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB688u);  if (depth < kMaxDepth) unit_00A5(c, 47u, depth + 1u); else { c.pc = 0x003B4A38u; return; } if (c.pc != 0x003BB688u) [[unlikely]] return; }
L_003BB688:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BB720; } }
    c.budget -= 1;
L_003BB698:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BB71C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB6A8u);  if (depth < kMaxDepth) unit_00A5(c, 47u, depth + 1u); else { c.pc = 0x003B4A38u; return; } if (c.pc != 0x003BB6A8u) [[unlikely]] return; }
L_003BB6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BB6FC; } }
L_003BB6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB6B8u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 95u, depth + 1u); else { c.pc = 0x003B5190u; return; } if (c.pc != 0x003BB6B8u) [[unlikely]] return; }
L_003BB6B8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BB720; } }
    c.budget -= 1;
L_003BB6C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB6D0u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 95u, depth + 1u); else { c.pc = 0x003B5190u; return; } if (c.pc != 0x003BB6D0u) [[unlikely]] return; }
L_003BB6D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BB6FC; } }
L_003BB6D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB6E0u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 102u, depth + 1u); else { c.pc = 0x003B5280u; return; } if (c.pc != 0x003BB6E0u) [[unlikely]] return; }
L_003BB6E0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BB720; } }
    c.budget -= 1;
L_003BB6F0:
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB6FCu); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 102u, depth + 1u); else { c.pc = 0x003B5280u; return; } if (c.pc != 0x003BB6FCu) [[unlikely]] return; }
L_003BB6FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003BB720; } }
L_003BB718:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003BB71C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003BB720:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BB780:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12840u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003BB7A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12840u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003BB7C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12840u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_003BB804; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB804u);  if (depth < kMaxDepth) unit_00A6(c, 343u, depth + 1u); else { c.pc = 0x003BB780u; return; } if (c.pc != 0x003BB804u) [[unlikely]] return; }
L_003BB804:
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull; st16((c.r[20].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_003BB81C; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BB954; } }
L_003BB81C:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[11].w[0] - 14928u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] <= 0; c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 512u)));  if (t) { goto L_003BB88C; } }
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003BB838:
    set32(c.r[3], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[6].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 256u)));
    mmi::mult(c, 0, c.r[10].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + 1023u);
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 19;
    { const bool t = c.r[6].d[0] != 0ull; c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB838u | kUnwind; return; } goto L_003BB838; } }
    set32(c.r[2], c.r[11].w[0] - 14928u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003BB88C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1024u)));  if (t) { goto L_003BB8E4; } }
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003BB898:
    set32(c.r[3], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[6].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 256u)));
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + 1023u);
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 19;
    { const bool t = c.r[6].d[0] != 0ull; c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB898u | kUnwind; return; } goto L_003BB898; } }
L_003BB8E4:
    set32(c.r[2], c.r[11].w[0] - 14928u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1536u)));  if (t) { goto L_003BB944; } }
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003BB8F8:
    set32(c.r[3], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[6].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 256u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[5], c.r[3].w[0] + 1023u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 19;
    { const bool t = c.r[6].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F8u | kUnwind; return; } goto L_003BB8F8; } }
L_003BB944:
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_003BB954:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BBA08:
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[6], 0u + 2u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_003BBA18:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> (c.r[3].w[0] & 31u)));
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBA18u | kUnwind; return; } goto L_003BBA18; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BBA40:
    set32(c.r[5], c.r[5].w[0] + 3u);
    set32(c.r[6], 0u + 4u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_003BBA50:
    set32(c.r[2], c.r[4].w[0] >> (c.r[3].w[0] & 31u));
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBA50u | kUnwind; return; } goto L_003BBA50; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BBA78:
    set32(c.r[6], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] >> 8);
    set32(c.r[4], c.r[6].w[0] >> 8);
    set32(c.r[6], c.r[6].w[0] >> 24);
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] & 65280ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003BBAB8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBADCu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 354u, depth + 1u); else { c.pc = 0x003BBA78u; return; } if (c.pc != 0x003BBADCu) [[unlikely]] return; }
L_003BBADC:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[16].w[0] + 37u);
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 32u);  if (t) { goto L_003BBB00; } }
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003BBB08; } }
    c.budget -= 1;
L_003BBB00:
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0]), 0u);
    c.budget -= 2;
L_003BBB08:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BBB20:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[6], 0u + 8u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 4;
L_003BBB30:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));  goto L_003BBB44; }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0]));  goto L_003BBB50; }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003BBB44:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_003BBB70; } }
L_003BBB50:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] - 2u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 8;
L_003BBB70:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBB30u | kUnwind; return; } goto L_003BBB30; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BBB80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[19], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    set32(c.r[20], c.r[29].w[0] + 2u);
    set32(c.r[16], c.r[18].w[0] + c.r[17].w[0]);
    c.budget -= 12;
L_003BBBB0:
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBBCCu); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 345u, depth + 1u); else { c.pc = 0x003BB7C0u; return; } if (c.pc != 0x003BBBCCu) [[unlikely]] return; }
L_003BBBCC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBBD8u); c.r[4].d[0] = ld16((c.r[29].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 350u, depth + 1u); else { c.pc = 0x003BBA08u; return; } if (c.pc != 0x003BBBD8u) [[unlikely]] return; }
L_003BBBD8:
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[18].w[0] + c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBBB0u | kUnwind; return; } goto L_003BBBB0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BBC08:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], c.r[4].w[0] << 20);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBC30u); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 352u, depth + 1u); else { c.pc = 0x003BBA40u; return; } if (c.pc != 0x003BBC30u) [[unlikely]] return; }
L_003BBC30:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[7], c.r[29].w[0] + 18u);
    set32(c.r[8], c.r[29].w[0] + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBC48u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00A6(c, 345u, depth + 1u); else { c.pc = 0x003BB7C0u; return; } if (c.pc != 0x003BBC48u) [[unlikely]] return; }
L_003BBC48:
    set32(c.r[3], 0u + 9u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003BBC54u);  goto L_003BBC58; }
L_003BBC58:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 18u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBC70u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 350u, depth + 1u); else { c.pc = 0x003BBA08u; return; } if (c.pc != 0x003BBC70u) [[unlikely]] return; }
L_003BBC70:
    set32(c.r[5], c.r[16].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBC7Cu); c.r[4].d[0] = ld16((c.r[29].w[0] + 20u));  if (depth < kMaxDepth) unit_00A6(c, 350u, depth + 1u); else { c.pc = 0x003BBA08u; return; } if (c.pc != 0x003BBC7Cu) [[unlikely]] return; }
L_003BBC7C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BBC90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBCA8u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 355u, depth + 1u); else { c.pc = 0x003BBAB8u; return; } if (c.pc != 0x003BBCA8u) [[unlikely]] return; }
L_003BBCA8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBCB4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 357u, depth + 1u); else { c.pc = 0x003BBB20u; return; } if (c.pc != 0x003BBCB4u) [[unlikely]] return; }
L_003BBCB4:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003BBCD0; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003BBCD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBCD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 359u, depth + 1u); else { c.pc = 0x003BBB80u; return; } if (c.pc != 0x003BBCD0u) [[unlikely]] return; }
L_003BBCD0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003BBCD4:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BBCE8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBD04u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x003BBD04u) [[unlikely]] return; }
L_003BBD04:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003BBD64; } }
    set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_003BBD18:
    set32(c.r[7], c.r[3].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], c.r[8].w[0] + c.r[5].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]); c.r[8].d[0] = c.lo.d[0];  if (t) { goto L_003BBD54; } }
    c.budget -= 1;
L_003BBD38:
    set32(c.r[2], c.r[16].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBD38u | kUnwind; return; } goto L_003BBD38; } }
L_003BBD54:
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBD18u | kUnwind; return; } goto L_003BBD18; } }
L_003BBD64:
    set32(c.r[4], c.r[8].w[0] << 20);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBD74u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 352u, depth + 1u); else { c.pc = 0x003BBA40u; return; } if (c.pc != 0x003BBD74u) [[unlikely]] return; }
L_003BBD74:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 3u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_003BBD80:
    set32(c.r[2], c.r[7].w[0] >> 31);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[6].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[3], c.r[9].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBD80u | kUnwind; return; } goto L_003BBD80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBDC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 359u, depth + 1u); else { c.pc = 0x003BBB80u; return; } if (c.pc != 0x003BBDC0u) [[unlikely]] return; }
L_003BBDC0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BBDD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBDE8u);  if (depth < kMaxDepth) unit_00A6(c, 363u, depth + 1u); else { c.pc = 0x003BBC08u; return; } if (c.pc != 0x003BBDE8u) [[unlikely]] return; }
L_003BBDE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BBDF8:
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], c.r[3].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1000u);  if (t) { goto L_003BBE30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12856u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBE2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BBE2Cu) [[unlikely]] return; }
L_003BBE2C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BBE30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BBE40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    mmi::div(c, 0, c.r[16].w[0], c.r[17].w[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[7].w[0]);
    c.budget -= 20;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x003BBE8Cu);  goto L_003BBE90; }
L_003BBE90:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003BBFC8; } }
    mmi::div(c, 0, c.r[20].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x003BBEA4u);  goto L_003BBEA8; }
L_003BBEA8:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003BBFC8; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003BBFCC; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003BBED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003BBFCC; } }
    c.budget -= 1;
L_003BBED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBED8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x003BC2A0u; return; } if (c.pc != 0x003BBED8u) [[unlikely]] return; }
L_003BBED8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BBFC8; } }
    mmi::div(c, 0, c.r[20].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x003BBEE8u);  goto L_003BBEEC; }
L_003BBEEC:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_003BBFC4; } }
    st32((c.r[29].w[0] + 44u), 0u);
    c.budget -= 2;
L_003BBF00:
    c.r[9].d[0] = ld8((c.r[21].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003BBF9C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[22], c.r[29].w[0] + 16u);
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[23], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
L_003BBF28:
    mmi::mult(c, 0, c.r[9].w[0], c.r[23].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBF38u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 8u, depth + 1u); else { c.pc = 0x003BC160u; return; } if (c.pc != 0x003BBF38u) [[unlikely]] return; }
L_003BBF38:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBF4Cu); c.r[7].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 10u, depth + 1u); else { c.pc = 0x003BC188u; return; } if (c.pc != 0x003BBF4Cu) [[unlikely]] return; }
L_003BBF4C:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[9], c.r[2].w[0] + c.r[19].w[0]);  if (t) { goto L_003BBF8C; } }
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_003BBF60:
    set32(c.r[7], c.r[18].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[10].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.r[6].d[0] = c.r[8].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    mmi::mult(c, 0, c.r[9].w[0], c.r[4].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBF60u | kUnwind; return; } goto L_003BBF60; } }
L_003BBF8C:
    set32(c.r[19], c.r[19].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBF28u | kUnwind; return; } goto L_003BBF28; } }
L_003BBF9C:
    mmi::div(c, 0, c.r[20].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x003BBFA4u);  goto L_003BBFA8; }
L_003BBFA8:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[30], c.r[30].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[30].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 44u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBF00u | kUnwind; return; } goto L_003BBF00; } }
L_003BBFC4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BBFC8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003BBFCC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 120u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003BBFF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 2;
    [[clang::musttail]] return unit_00A7(c, 1u, depth);
}

}
