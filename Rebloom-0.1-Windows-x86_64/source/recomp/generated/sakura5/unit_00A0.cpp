#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A0[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0,
    0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0,
    0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0,
    0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 116, 0, 117, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0,
    0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0,
    0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165,
    0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211,
    0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0,
    0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0,
    0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 267, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0,
    0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277,
    0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0,
    0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314,
    0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0,
    335, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00A0(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003A0000;
    case 2u: goto L_003A0018;
    case 3u: goto L_003A002C;
    case 4u: goto L_003A0040;
    case 5u: goto L_003A0050;
    case 6u: goto L_003A0064;
    case 7u: goto L_003A0088;
    case 8u: goto L_003A00B4;
    case 9u: goto L_003A00C4;
    case 10u: goto L_003A00E8;
    case 11u: goto L_003A00FC;
    case 12u: goto L_003A0130;
    case 13u: goto L_003A0148;
    case 14u: goto L_003A0168;
    case 15u: goto L_003A0178;
    case 16u: goto L_003A0188;
    case 17u: goto L_003A01A4;
    case 18u: goto L_003A01B8;
    case 19u: goto L_003A01C4;
    case 20u: goto L_003A01D4;
    case 21u: goto L_003A01E4;
    case 22u: goto L_003A0204;
    case 23u: goto L_003A0240;
    case 24u: goto L_003A0280;
    case 25u: goto L_003A0294;
    case 26u: goto L_003A02F0;
    case 27u: goto L_003A031C;
    case 28u: goto L_003A033C;
    case 29u: goto L_003A0388;
    case 30u: goto L_003A039C;
    case 31u: goto L_003A0438;
    case 32u: goto L_003A0440;
    case 33u: goto L_003A0468;
    case 34u: goto L_003A048C;
    case 35u: goto L_003A04DC;
    case 36u: goto L_003A04F8;
    case 37u: goto L_003A0534;
    case 38u: goto L_003A0540;
    case 39u: goto L_003A0544;
    case 40u: goto L_003A0578;
    case 41u: goto L_003A05A0;
    case 42u: goto L_003A05A8;
    case 43u: goto L_003A05EC;
    case 44u: goto L_003A05FC;
    case 45u: goto L_003A0640;
    case 46u: goto L_003A0658;
    case 47u: goto L_003A0698;
    case 48u: goto L_003A06C8;
    case 49u: goto L_003A06E0;
    case 50u: goto L_003A06FC;
    case 51u: goto L_003A0730;
    case 52u: goto L_003A0748;
    case 53u: goto L_003A0750;
    case 54u: goto L_003A0758;
    case 55u: goto L_003A0760;
    case 56u: goto L_003A0768;
    case 57u: goto L_003A0788;
    case 58u: goto L_003A07A8;
    case 59u: goto L_003A07C8;
    case 60u: goto L_003A07E8;
    case 61u: goto L_003A0808;
    case 62u: goto L_003A0824;
    case 63u: goto L_003A082C;
    case 64u: goto L_003A0834;
    case 65u: goto L_003A0848;
    case 66u: goto L_003A0890;
    case 67u: goto L_003A0898;
    case 68u: goto L_003A08DC;
    case 69u: goto L_003A08F8;
    case 70u: goto L_003A0918;
    case 71u: goto L_003A0938;
    case 72u: goto L_003A095C;
    case 73u: goto L_003A0988;
    case 74u: goto L_003A0998;
    case 75u: goto L_003A0A28;
    case 76u: goto L_003A0A48;
    case 77u: goto L_003A0AB8;
    case 78u: goto L_003A0AF8;
    case 79u: goto L_003A0BD8;
    case 80u: goto L_003A0C68;
    case 81u: goto L_003A0C98;
    case 82u: goto L_003A0CE0;
    case 83u: goto L_003A0D20;
    case 84u: goto L_003A0D68;
    case 85u: goto L_003A0D7C;
    case 86u: goto L_003A0DA8;
    case 87u: goto L_003A0DE0;
    case 88u: goto L_003A0DF4;
    case 89u: goto L_003A0E20;
    case 90u: goto L_003A0E40;
    case 91u: goto L_003A0E70;
    case 92u: goto L_003A0E90;
    case 93u: goto L_003A0EC4;
    case 94u: goto L_003A0F10;
    case 95u: goto L_003A0F38;
    case 96u: goto L_003A0F64;
    case 97u: goto L_003A0FC0;
    case 98u: goto L_003A0FF0;
    case 99u: goto L_003A1050;
    case 100u: goto L_003A1090;
    case 101u: goto L_003A1098;
    case 102u: goto L_003A10A0;
    case 103u: goto L_003A10A8;
    case 104u: goto L_003A10B0;
    case 105u: goto L_003A10DC;
    case 106u: goto L_003A112C;
    case 107u: goto L_003A1140;
    case 108u: goto L_003A1154;
    case 109u: goto L_003A1170;
    case 110u: goto L_003A1178;
    case 111u: goto L_003A1188;
    case 112u: goto L_003A1198;
    case 113u: goto L_003A11CC;
    case 114u: goto L_003A11DC;
    case 115u: goto L_003A11F8;
    case 116u: goto L_003A1210;
    case 117u: goto L_003A1218;
    case 118u: goto L_003A1224;
    case 119u: goto L_003A122C;
    case 120u: goto L_003A1248;
    case 121u: goto L_003A1260;
    case 122u: goto L_003A1270;
    case 123u: goto L_003A12B8;
    case 124u: goto L_003A12E0;
    case 125u: goto L_003A12F0;
    case 126u: goto L_003A1324;
    case 127u: goto L_003A1358;
    case 128u: goto L_003A1370;
    case 129u: goto L_003A13A4;
    case 130u: goto L_003A13B8;
    case 131u: goto L_003A13C8;
    case 132u: goto L_003A13DC;
    case 133u: goto L_003A1420;
    case 134u: goto L_003A1434;
    case 135u: goto L_003A1444;
    case 136u: goto L_003A1454;
    case 137u: goto L_003A1480;
    case 138u: goto L_003A14AC;
    case 139u: goto L_003A14C8;
    case 140u: goto L_003A14F4;
    case 141u: goto L_003A1524;
    case 142u: goto L_003A1548;
    case 143u: goto L_003A1568;
    case 144u: goto L_003A1578;
    case 145u: goto L_003A1588;
    case 146u: goto L_003A15D8;
    case 147u: goto L_003A15F8;
    case 148u: goto L_003A1610;
    case 149u: goto L_003A1638;
    case 150u: goto L_003A1680;
    case 151u: goto L_003A16A0;
    case 152u: goto L_003A16B8;
    case 153u: goto L_003A16C8;
    case 154u: goto L_003A16E8;
    case 155u: goto L_003A1704;
    case 156u: goto L_003A1720;
    case 157u: goto L_003A1768;
    case 158u: goto L_003A1788;
    case 159u: goto L_003A17A8;
    case 160u: goto L_003A180C;
    case 161u: goto L_003A181C;
    case 162u: goto L_003A1864;
    case 163u: goto L_003A187C;
    case 164u: goto L_003A1890;
    case 165u: goto L_003A18FC;
    case 166u: goto L_003A191C;
    case 167u: goto L_003A1938;
    case 168u: goto L_003A1960;
    case 169u: goto L_003A1A04;
    case 170u: goto L_003A1A18;
    case 171u: goto L_003A1A68;
    case 172u: goto L_003A1AE4;
    case 173u: goto L_003A1B20;
    case 174u: goto L_003A1B88;
    case 175u: goto L_003A1BAC;
    case 176u: goto L_003A1BBC;
    case 177u: goto L_003A1C10;
    case 178u: goto L_003A1C54;
    case 179u: goto L_003A1C68;
    case 180u: goto L_003A1CC0;
    case 181u: goto L_003A1CD8;
    case 182u: goto L_003A1CE8;
    case 183u: goto L_003A1CF0;
    case 184u: goto L_003A1D20;
    case 185u: goto L_003A1D34;
    case 186u: goto L_003A1D68;
    case 187u: goto L_003A1DB8;
    case 188u: goto L_003A1DD0;
    case 189u: goto L_003A1E20;
    case 190u: goto L_003A1E38;
    case 191u: goto L_003A1E48;
    case 192u: goto L_003A1E50;
    case 193u: goto L_003A1E88;
    case 194u: goto L_003A1E9C;
    case 195u: goto L_003A1ED0;
    case 196u: goto L_003A1F28;
    case 197u: goto L_003A1F38;
    case 198u: goto L_003A1F4C;
    case 199u: goto L_003A1F60;
    case 200u: goto L_003A1F94;
    case 201u: goto L_003A1FC4;
    case 202u: goto L_003A1FD8;
    case 203u: goto L_003A1FE0;
    case 204u: goto L_003A1FF0;
    case 205u: goto L_003A2008;
    case 206u: goto L_003A2018;
    case 207u: goto L_003A2038;
    case 208u: goto L_003A2048;
    case 209u: goto L_003A2078;
    case 210u: goto L_003A2090;
    case 211u: goto L_003A20FC;
    case 212u: goto L_003A2108;
    case 213u: goto L_003A2118;
    case 214u: goto L_003A2138;
    case 215u: goto L_003A2158;
    case 216u: goto L_003A2198;
    case 217u: goto L_003A21B4;
    case 218u: goto L_003A21E8;
    case 219u: goto L_003A221C;
    case 220u: goto L_003A22A0;
    case 221u: goto L_003A22BC;
    case 222u: goto L_003A22D4;
    case 223u: goto L_003A22F0;
    case 224u: goto L_003A2318;
    case 225u: goto L_003A2328;
    case 226u: goto L_003A2338;
    case 227u: goto L_003A2354;
    case 228u: goto L_003A2368;
    case 229u: goto L_003A2378;
    case 230u: goto L_003A2390;
    case 231u: goto L_003A239C;
    case 232u: goto L_003A23C0;
    case 233u: goto L_003A23EC;
    case 234u: goto L_003A2400;
    case 235u: goto L_003A2420;
    case 236u: goto L_003A246C;
    case 237u: goto L_003A24A0;
    case 238u: goto L_003A24C8;
    case 239u: goto L_003A24F8;
    case 240u: goto L_003A250C;
    case 241u: goto L_003A2518;
    case 242u: goto L_003A2534;
    case 243u: goto L_003A2548;
    case 244u: goto L_003A2568;
    case 245u: goto L_003A2588;
    case 246u: goto L_003A25AC;
    case 247u: goto L_003A25D0;
    case 248u: goto L_003A25F8;
    case 249u: goto L_003A2618;
    case 250u: goto L_003A2630;
    case 251u: goto L_003A26C8;
    case 252u: goto L_003A2730;
    case 253u: goto L_003A2740;
    case 254u: goto L_003A2750;
    case 255u: goto L_003A2764;
    case 256u: goto L_003A2780;
    case 257u: goto L_003A2790;
    case 258u: goto L_003A27B4;
    case 259u: goto L_003A27D0;
    case 260u: goto L_003A2820;
    case 261u: goto L_003A2830;
    case 262u: goto L_003A2844;
    case 263u: goto L_003A28E0;
    case 264u: goto L_003A2918;
    case 265u: goto L_003A2928;
    case 266u: goto L_003A2940;
    case 267u: goto L_003A2944;
    case 268u: goto L_003A2958;
    case 269u: goto L_003A2968;
    case 270u: goto L_003A2984;
    case 271u: goto L_003A29B0;
    case 272u: goto L_003A29C4;
    case 273u: goto L_003A29D0;
    case 274u: goto L_003A29DC;
    case 275u: goto L_003A29F0;
    case 276u: goto L_003A2A20;
    case 277u: goto L_003A2A7C;
    case 278u: goto L_003A2AA0;
    case 279u: goto L_003A2AC8;
    case 280u: goto L_003A2AF0;
    case 281u: goto L_003A2B60;
    case 282u: goto L_003A2B98;
    case 283u: goto L_003A2C2C;
    case 284u: goto L_003A2C70;
    case 285u: goto L_003A2CA0;
    case 286u: goto L_003A2CB0;
    case 287u: goto L_003A2CF4;
    case 288u: goto L_003A2D08;
    case 289u: goto L_003A2D78;
    case 290u: goto L_003A2E10;
    case 291u: goto L_003A2E34;
    case 292u: goto L_003A2EE0;
    case 293u: goto L_003A2F38;
    case 294u: goto L_003A2F64;
    case 295u: goto L_003A3008;
    case 296u: goto L_003A303C;
    case 297u: goto L_003A3078;
    case 298u: goto L_003A3090;
    case 299u: goto L_003A30E8;
    case 300u: goto L_003A3154;
    case 301u: goto L_003A3164;
    case 302u: goto L_003A3170;
    case 303u: goto L_003A31A8;
    case 304u: goto L_003A3240;
    case 305u: goto L_003A32A0;
    case 306u: goto L_003A32FC;
    case 307u: goto L_003A34B8;
    case 308u: goto L_003A35B0;
    case 309u: goto L_003A3624;
    case 310u: goto L_003A3690;
    case 311u: goto L_003A36F0;
    case 312u: goto L_003A37D8;
    case 313u: goto L_003A3828;
    case 314u: goto L_003A387C;
    case 315u: goto L_003A3894;
    case 316u: goto L_003A38B0;
    case 317u: goto L_003A38BC;
    case 318u: goto L_003A38D8;
    case 319u: goto L_003A3910;
    case 320u: goto L_003A3924;
    case 321u: goto L_003A3930;
    case 322u: goto L_003A3958;
    case 323u: goto L_003A3980;
    case 324u: goto L_003A39C0;
    case 325u: goto L_003A3A78;
    case 326u: goto L_003A3AB0;
    case 327u: goto L_003A3BF0;
    case 328u: goto L_003A3C28;
    case 329u: goto L_003A3C58;
    case 330u: goto L_003A3C68;
    case 331u: goto L_003A3C9C;
    case 332u: goto L_003A3CB0;
    case 333u: goto L_003A3CD8;
    case 334u: goto L_003A3CEC;
    case 335u: goto L_003A3D00;
    case 336u: goto L_003A3D10;
    case 337u: goto L_003A3D24;
    case 338u: goto L_003A3D38;
    case 339u: goto L_003A3D60;
    case 340u: goto L_003A3DC0;
    case 341u: goto L_003A3E0C;
    case 342u: goto L_003A3E3C;
    case 343u: goto L_003A3EC8;
    case 344u: goto L_003A3F08;
    case 345u: goto L_003A3F18;
    case 346u: goto L_003A3F68;
    case 347u: goto L_003A3F94;
    case 348u: goto L_003A3FC8;
    default: bad_entry(c, 0x003A0000u); return;
    }
L_003A0000:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A0018:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 8044u);
    c.budget -= 5;
L_003A002C:
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0040u); set32(c.r[5], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_009F(c, 5u, depth + 1u); else { c.pc = 0x0039C410u; return; } if (c.pc != 0x003A0040u) [[unlikely]] return; }
L_003A0040:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0050u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 5u, depth + 1u); else { c.pc = 0x0039C410u; return; } if (c.pc != 0x003A0050u) [[unlikely]] return; }
L_003A0050:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0064u); c.r[18].d[0] = c.r[18].d[0] | c.r[19].d[0];  if (depth < kMaxDepth) unit_009F(c, 5u, depth + 1u); else { c.pc = 0x0039C410u; return; } if (c.pc != 0x003A0064u) [[unlikely]] return; }
L_003A0064:
    c.r[2].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A0088:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 8044u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A00B4u); set32(c.r[5], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_009F(c, 4u, depth + 1u); else { c.pc = 0x0039C3F0u; return; } if (c.pc != 0x003A00B4u) [[unlikely]] return; }
L_003A00B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A00C4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 4u, depth + 1u); else { c.pc = 0x0039C3F0u; return; } if (c.pc != 0x003A00C4u) [[unlikely]] return; }
L_003A00C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C3F0u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 4u, depth); }
L_003A00E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A00FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 344u, depth + 1u); else { c.pc = 0x0039F238u; return; } if (c.pc != 0x003A00FCu) [[unlikely]] return; }
L_003A00FC:
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 2564u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[7], ld32((c.r[16].w[0] + 88u)));  if (t) { goto L_003A0118; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_003A0118:
    c.r[2].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[7].d[0];
    c.r[3].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0130u); if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[7].d[0];  if (depth < kMaxDepth) unit_009E(c, 484u, depth + 1u); else { c.pc = 0x0039BC90u; return; } if (c.pc != 0x003A0130u) [[unlikely]] return; }
L_003A0130:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A0148:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0168u); set32(c.r[17], ld32((c.r[16].w[0] + 8052u)));  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A0168u) [[unlikely]] return; }
L_003A0168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A01B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0178u); set32(c.r[5], 0u + 80u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A0178u) [[unlikely]] return; }
L_003A0178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A01B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0188u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_009E(c, 484u, depth + 1u); else { c.pc = 0x0039BC90u; return; } if (c.pc != 0x003A0188u) [[unlikely]] return; }
L_003A0188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A01BC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A01BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A01A4u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00A3(c, 196u, depth + 1u); else { c.pc = 0x003AE118u; return; } if (c.pc != 0x003A01A4u) [[unlikely]] return; }
L_003A01A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A01B8; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A01B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x003A01B8u) [[unlikely]] return; }
L_003A01B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A01BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A01C4u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A01C4u) [[unlikely]] return; }
L_003A01C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A0228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A01D4u); set32(c.r[5], 0u + 79u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A01D4u) [[unlikely]] return; }
L_003A01D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A0228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A01E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009E(c, 484u, depth + 1u); else { c.pc = 0x0039BC90u; return; } if (c.pc != 0x003A01E4u) [[unlikely]] return; }
L_003A01E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003A022C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003A022C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0204u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00A3(c, 196u, depth + 1u); else { c.pc = 0x003AE118u; return; } if (c.pc != 0x003A0204u) [[unlikely]] return; }
L_003A0204:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A0228; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], 0u + 5u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A2(c, 393u, depth); }
L_003A0228:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A022C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A0240:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    set32(c.r[19], ld32((c.r[4].w[0] + 8052u)));
    set32(c.r[20], ld32((c.r[19].w[0])));
    c.budget -= 16;
L_003A0280:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0294u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 38u, depth + 1u); else { c.pc = 0x00389EE8u; return; } if (c.pc != 0x003A0294u) [[unlikely]] return; }
L_003A0294:
    c.r[6].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[18].d[0] = c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != 0ull; if (c.r[3].d[0] == 0) c.r[17].d[0] = c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0280u | kUnwind; return; } goto L_003A0280; } }
    st32((c.r[19].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[21].w[0]), c.r[18].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A02F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[17], c.r[4].w[0] + 2316u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[4].w[0] + 8052u)));
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A031Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 36u, depth + 1u); else { c.pc = 0x00389E80u; return; } if (c.pc != 0x003A031Cu) [[unlikely]] return; }
L_003A031C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[6], 0u + 1u);  if (t) { goto L_003A0334; } }
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_003A0334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A033Cu);  if (depth < kMaxDepth) unit_009A(c, 38u, depth + 1u); else { c.pc = 0x00389EE8u; return; } if (c.pc != 0x003A033Cu) [[unlikely]] return; }
L_003A033C:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  goto L_003A034C; }
L_003A034C:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_003A0364; }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
L_003A0364:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003A0374; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 2;
L_003A0374:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A0388:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A039Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 71u, depth + 1u); else { c.pc = 0x003A0938u; return; } if (c.pc != 0x003A039Cu) [[unlikely]] return; }
L_003A039C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 1;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[7], c.r[16].w[0] + 3368u);  if (t) { goto L_003A0428; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 8052u)));
    c.r[4].d[0] = ld64((c.r[6].w[0] + 24u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[8], c.r[16].w[0] + 2316u);  if (t) { goto L_003A0428; } }
    c.r[2].d[0] = ld64((c.r[5].w[0] + 32u));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] - c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[7].w[0] + 344u), c.r[2].d[0]);  if (t) { goto L_003A0428; } }
    set32(c.r[3], ld32((c.r[8].w[0] + 24u)));
    c.r[4].d[0] = ld64((c.r[7].w[0] + 336u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st64((c.r[5].w[0] + 24u), c.r[4].d[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[6].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    st64((c.r[5].w[0] + 32u), c.r[3].d[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 28u)));
    st32((c.r[5].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 44u)));
    st32((c.r[5].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 48u)));
    st32((c.r[5].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 21;
L_003A0428:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A0438:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A0440:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0468u); c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 71u, depth + 1u); else { c.pc = 0x003A0938u; return; } if (c.pc != 0x003A0468u) [[unlikely]] return; }
L_003A0468:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003A04E0; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003A04E0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A048Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 40u, depth + 1u); else { c.pc = 0x00389F98u; return; } if (c.pc != 0x003A048Cu) [[unlikely]] return; }
L_003A048C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], 0u + 176u);
    c.r[3].d[0] = c.r[7].sd[0] < 177ll ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    if (c.r[3].d[0] == 0) c.r[7].d[0] = c.r[2].d[0];
    set32(c.r[3], c.r[16].w[0] + 48u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] <= 0; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003A04C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 352u), c.r[7].w[0]);  if (t) { goto L_003A04D4; } }
    c.budget -= 1;
L_003A04C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003A04E0; }
    st32((c.r[3].w[0] + 356u), c.r[7].w[0]);
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.budget -= 2;
L_003A04D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A04DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 60u, depth + 1u); else { c.pc = 0x00387A98u; return; } if (c.pc != 0x003A04DCu) [[unlikely]] return; }
L_003A04DC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A04E0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A04F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4892u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A055C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0534u);  if (depth < kMaxDepth) unit_009F(c, 12u, depth + 1u); else { c.pc = 0x0039C4C0u; return; } if (c.pc != 0x003A0534u) [[unlikely]] return; }
L_003A0534:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 2432u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0540u); set32(c.r[5], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_009F(c, 30u, depth + 1u); else { c.pc = 0x0039C678u; return; } if (c.pc != 0x003A0540u) [[unlikely]] return; }
L_003A0540:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 2440u));
    c.budget -= 1;
L_003A0544:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 2448u));
    c.r[3].d[0] = c.r[18].d[0] + c.r[3].d[0];
    st64((c.r[16].w[0] + 2432u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + c.r[4].d[0];
    st64((c.r[16].w[0] + 2440u), c.r[3].d[0]);
    st64((c.r[16].w[0] + 2448u), c.r[4].d[0]);
    c.budget -= 6;
L_003A055C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A0578:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 8592u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A05A0u); st32((c.r[16].w[0] + 8052u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00A0(c, 45u, depth + 1u); else { c.pc = 0x003A0640u; return; } if (c.pc != 0x003A05A0u) [[unlikely]] return; }
L_003A05A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A05A8u);  if (depth < kMaxDepth) unit_009A(c, 73u, depth + 1u); else { c.pc = 0x0038A460u; return; } if (c.pc != 0x003A05A8u) [[unlikely]] return; }
L_003A05A8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != 0ull; c.r[5].d[0] = c.r[5].d[0] | 3336ull;  if (t) { goto L_003A05E0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A05E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A05ECu); set32(c.r[5], c.r[5].w[0] + 1736u);  if (depth < kMaxDepth) unit_009A(c, 65u, depth + 1u); else { c.pc = 0x0038A2F0u; return; } if (c.pc != 0x003A05ECu) [[unlikely]] return; }
L_003A05EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A0620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A05FCu);  if (depth < kMaxDepth) unit_00A0(c, 51u, depth + 1u); else { c.pc = 0x003A0730u; return; } if (c.pc != 0x003A05FCu) [[unlikely]] return; }
L_003A05FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] | 3337ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A0620:
    st32((c.r[18].w[0]), c.r[17].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A0640:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] >> 1;
    c.budget -= 6;
L_003A0658:
    st32((c.r[5].w[0] + 40u), c.r[2].w[0]);
    st64((c.r[5].w[0] + 24u), c.r[4].d[0]);
    set32(c.r[7], 0u + 67u);
    st32((c.r[5].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[6], c.r[5].w[0] + 332u);
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    st32((c.r[5].w[0] + 8u), 0u);
    st64((c.r[5].w[0] + 16u), c.r[4].d[0]);
    st32((c.r[5].w[0] + 32u), 0u);
    st32((c.r[5].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 60u), 0u);
    c.budget -= 16;
L_003A0698:
    set32(c.r[7], c.r[7].w[0] - 1u);
    st32((c.r[6].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[7].sd[0] >= 0; set32(c.r[6], c.r[6].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0698u | kUnwind; return; } goto L_003A0698; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[5].w[0] + 336u), 0u);
    st32((c.r[5].w[0] + 344u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 340u), 0u);  c.pc = t; return; }
L_003A06C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A06E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8052u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A06FCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A0(c, 51u, depth + 1u); else { c.pc = 0x003A0730u; return; } if (c.pc != 0x003A06FCu) [[unlikely]] return; }
L_003A06FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A0720; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 3338ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A0720:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A0730:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0038A600u | kUnwind; return; } [[clang::musttail]] return unit_009A(c, 89u, depth); }
L_003A0748:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003A0750:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003A0758:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003A0760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003A0768:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3339ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A0788:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3339ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A07A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3339ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A07C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 3339ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A07E8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0808u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 71u, depth + 1u); else { c.pc = 0x003A0938u; return; } if (c.pc != 0x003A0808u) [[unlikely]] return; }
L_003A0808:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003A0874; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A0870; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 8052u)));
    c.budget -= 1;
L_003A0824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A082Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 160u, depth + 1u); else { c.pc = 0x0039DBE8u; return; } if (c.pc != 0x003A082Cu) [[unlikely]] return; }
L_003A082C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0834u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 66u, depth + 1u); else { c.pc = 0x003A0890u; return; } if (c.pc != 0x003A0834u) [[unlikely]] return; }
L_003A0834:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0848u); set32(c.r[19], c.r[17].w[0] + 3368u);  if (depth < kMaxDepth) unit_00A0(c, 67u, depth + 1u); else { c.pc = 0x003A0898u; return; } if (c.pc != 0x003A0848u) [[unlikely]] return; }
L_003A0848:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003A0874; }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));
    st32((c.r[18].w[0] + 44u), c.r[4].w[0]);
    st64((c.r[19].w[0] + 336u), c.r[3].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.r[3].d[0] = ld64((c.r[16].w[0] + 32u));
    st32((c.r[18].w[0] + 48u), c.r[4].w[0]);
    st64((c.r[18].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 8;
L_003A0870:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A0874:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A0890:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A0898:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[16], c.r[18].w[0] + 48u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[8], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 352u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A08DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 8u, depth + 1u); else { c.pc = 0x00388128u; return; } if (c.pc != 0x003A08DCu) [[unlikely]] return; }
L_003A08DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[5], c.r[18].w[0] + 224u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A08F8u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 8u, depth + 1u); else { c.pc = 0x00388128u; return; } if (c.pc != 0x003A08F8u) [[unlikely]] return; }
L_003A08F8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003A0910; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003A091C; } }
L_003A0910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0918u); c.r[5].d[0] = c.r[5].d[0] | 3341ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x003A0918u) [[unlikely]] return; }
L_003A0918:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003A091C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A0938:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 13992u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A0974; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A095Cu);  if (depth < kMaxDepth) unit_00A0(c, 73u, depth + 1u); else { c.pc = 0x003A0988u; return; } if (c.pc != 0x003A095Cu) [[unlikely]] return; }
L_003A095C:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 13992u)));  goto L_003A0970; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A0974; } }
    c.budget -= 1;
L_003A0970:
    set32(c.r[2], c.r[2].w[0] + 2208u);
    c.budget -= 1;
L_003A0974:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A0988:
    set32(c.r[3], ld32((c.r[4].w[0] + 8052u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 32u)));  c.pc = t; return; }
L_003A0998:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] - 17296u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], 0u - 64u);
    ldl(c.r[3], (c.r[4].w[0] + 7u));
    ldr(c.r[3], (c.r[4].w[0]));
    ldl(c.r[5], (c.r[4].w[0] + 15u));
    ldr(c.r[5], (c.r[4].w[0] + 8u));
    ldl(c.r[6], (c.r[4].w[0] + 23u));
    ldr(c.r[6], (c.r[4].w[0] + 16u));
    ldl(c.r[9], (c.r[4].w[0] + 31u));
    ldr(c.r[9], (c.r[4].w[0] + 24u));
    sdl(c.r[3], (c.r[7].w[0] + 7u));
    sdr(c.r[3], (c.r[7].w[0]));
    sdl(c.r[5], (c.r[7].w[0] + 15u));
    sdr(c.r[5], (c.r[7].w[0] + 8u));
    sdl(c.r[6], (c.r[7].w[0] + 23u));
    sdr(c.r[6], (c.r[7].w[0] + 16u));
    sdl(c.r[9], (c.r[7].w[0] + 31u));
    sdr(c.r[9], (c.r[7].w[0] + 24u));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[7].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] - 17256u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8u);
    set32(c.r[2], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 63u);
    set32(c.r[3], c.r[3].w[0] + 63u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    st32((c.r[7].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0A28u); st32((c.r[7].w[0] + 32u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003A0A28u) [[unlikely]] return; }
L_003A0A28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 17248u);
    set32(c.r[6], 0u + 64u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00145560u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 81u, depth); }
L_003A0A48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17296u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    ldl(c.r[4], (c.r[9].w[0] + 7u));
    ldr(c.r[4], (c.r[9].w[0]));
    ldl(c.r[7], (c.r[9].w[0] + 15u));
    ldr(c.r[7], (c.r[9].w[0] + 8u));
    ldl(c.r[8], (c.r[9].w[0] + 23u));
    ldr(c.r[8], (c.r[9].w[0] + 16u));
    ldl(c.r[10], (c.r[9].w[0] + 31u));
    ldr(c.r[10], (c.r[9].w[0] + 24u));
    sdl(c.r[4], (c.r[2].w[0] + 7u));
    sdr(c.r[4], (c.r[2].w[0]));
    sdl(c.r[7], (c.r[2].w[0] + 15u));
    sdr(c.r[7], (c.r[2].w[0] + 8u));
    sdl(c.r[8], (c.r[2].w[0] + 23u));
    sdr(c.r[8], (c.r[2].w[0] + 16u));
    sdl(c.r[10], (c.r[2].w[0] + 31u));
    sdr(c.r[10], (c.r[2].w[0] + 24u));
    set32(c.r[4], ld32((c.r[9].w[0] + 32u)));
    set32(c.r[11], c.r[3].w[0] - 17256u);
    st32((c.r[2].w[0] + 32u), c.r[4].w[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[2].w[0] + 32u), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[10], 0u - 64u);
    c.budget -= 28;
L_003A0AB8:
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 63u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0AB8u | kUnwind; return; } goto L_003A0AB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[9].w[0] + 28u)));
    set32(c.r[5], c.r[2].w[0] - 17248u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u - 64u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_003A0AF8:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;  if (t) { goto L_003A0B20; } }
    set32(c.r[3], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 63u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_003A0B24; } }
L_003A0B20:
    st32((c.r[5].w[0]), 0u);
    c.budget -= 1;
L_003A0B24:
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0AF8u | kUnwind; return; } goto L_003A0AF8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A0BD8:
    set32(c.r[2], c.r[5].w[0] + 15u);
    set32(c.r[5], c.r[5].w[0] + 30u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[10], c.r[6].w[0] + 15u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.r[11].d[0] = c.r[10].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[6], c.r[6].w[0] + 30u);
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[8], c.r[5].w[0] + 63u);
    set32(c.r[5], c.r[5].w[0] + 126u);
    set32(c.r[9], c.r[2].w[0] + 63u);
    set32(c.r[2], c.r[2].w[0] + 126u);
    c.r[3].d[0] = c.r[8].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[11].d[0] != 0) c.r[10].d[0] = c.r[6].d[0];
    if (c.r[3].d[0] != 0) c.r[8].d[0] = c.r[5].d[0];
    c.r[3].d[0] = c.r[9].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[9].d[0] = c.r[2].d[0];
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 6));
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 4));
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 6));
    mmi::mult(c, 0, c.r[8].w[0], c.r[10].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[9].w[0], c.r[10].w[0]);
    c.r[10].d[0] = c.lo.d[1];
    set32(c.r[8], c.r[8].w[0] << 6);
    set32(c.r[9], c.r[9].w[0] << 6);
    st16((c.r[7].w[0] + 14u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[7].w[0] + 12u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[10], c.r[10].w[0] << 9);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[7].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[10], c.r[2].w[0] + c.r[10].w[0]);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.budget -= 36;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0] + 4u), c.r[10].w[0]);  c.pc = t; return; }
L_003A0C68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003A0CC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0C98u);  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A0C98u) [[unlikely]] return; }
L_003A0C98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A0CC0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 385ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A0CC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8120u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_003A0CC8:
    c.r[2].d[0] = c.r[17].d[0] ^ 5ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0CE0u); if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[18].d[0];  if (depth < kMaxDepth) unit_009B(c, 141u, depth + 1u); else { c.pc = 0x0038DC28u; return; } if (c.pc != 0x003A0CE0u) [[unlikely]] return; }
L_003A0CE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A0D08; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 3858ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A0D08:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A0D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8120u)));
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A0D8C; } }
    set32(c.r[16], c.r[6].w[0] >> 2);
    set32(c.r[3], 0u + 16u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003A0D88; } }
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_003A0D68:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0D7Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 147u, depth + 1u); else { c.pc = 0x0038DD40u; return; } if (c.pc != 0x003A0D7Cu) [[unlikely]] return; }
L_003A0D7C:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0D68u | kUnwind; return; } goto L_003A0D68; } }
L_003A0D88:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A0D8C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A0DA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8120u)));
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003A0E00; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003A0E00; } }
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_003A0DE0:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0DF4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 141u, depth + 1u); else { c.pc = 0x0038DC28u; return; } if (c.pc != 0x003A0DF4u) [[unlikely]] return; }
L_003A0DF4:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0DE0u | kUnwind; return; } goto L_003A0DE0; }
L_003A0E00:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A0E20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0E40u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A0E40u) [[unlikely]] return; }
L_003A0E40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A0E68; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 386ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A0E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0E70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 175u, depth + 1u); else { c.pc = 0x003A6058u; return; } if (c.pc != 0x003A0E70u) [[unlikely]] return; }
L_003A0E70:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A0E90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0EC4u); c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A0EC4u) [[unlikely]] return; }
L_003A0EC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 388ull;  if (t) { goto L_003A0F00; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A0F00:
    set32(c.r[2], ld32((c.r[19].w[0] + 8120u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0F10u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_009A(c, 146u, depth + 1u); else { c.pc = 0x0038BA70u; return; } if (c.pc != 0x003A0F10u) [[unlikely]] return; }
L_003A0F10:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A0F38:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0F64u); c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 261u, depth + 1u); else { c.pc = 0x0039E7A0u; return; } if (c.pc != 0x003A0F64u) [[unlikely]] return; }
L_003A0F64:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 389ull;  if (t) { goto L_003A0F98; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A0F98:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_003A0FC0; }
L_003A0FC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[9].w[0] + 8120u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[8], c.r[2].w[0] + 4224u);  if (t) { goto L_003A0FE8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003A0FE8; } }
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[2], ld32((c.r[9].w[0] + 44u)));  goto L_003A0FF8; }
L_003A0FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0FF0u); c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 118u, depth + 1u); else { c.pc = 0x003A5560u; return; } if (c.pc != 0x003A0FF0u) [[unlikely]] return; }
L_003A0FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A1084; } }
L_003A0FF8:
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[8].w[0]), c.r[5].w[0]);  goto L_003A1020; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 3869ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A1020:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[8].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[8].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] - 2u);
    st32((c.r[8].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[8].w[0] + 16u), 0u);
    st32((c.r[8].w[0] + 24u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[6].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_003A106C; } }
L_003A1050:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[3], c.r[8].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.budget -= 7;
L_003A106C:
    set32(c.r[2], 0u + 16u);
    if (c.r[9].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A1050u | kUnwind; return; } goto L_003A1050; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A1084:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A1090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 2;
L_003A1098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A10A0u);  if (depth < kMaxDepth) unit_00A1(c, 278u, depth + 1u); else { c.pc = 0x003A7240u; return; } if (c.pc != 0x003A10A0u) [[unlikely]] return; }
L_003A10A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A10A8u);  if (depth < kMaxDepth) unit_00A0(c, 109u, depth + 1u); else { c.pc = 0x003A1170u; return; } if (c.pc != 0x003A10A8u) [[unlikely]] return; }
L_003A10A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_003A10D0; } }
L_003A10B0:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A10B0u | kUnwind; return; } goto L_003A10B0; } }
    c.budget -= 1;
L_003A10D0:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A10DCu); set32(c.r[5], c.r[5].w[0] + 31792u);  if (depth < kMaxDepth) unit_009B(c, 83u, depth + 1u); else { c.pc = 0x0038D5A8u; return; } if (c.pc != 0x003A10DCu) [[unlikely]] return; }
L_003A10DC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A1118; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF030000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65285ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[2].d[0];
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 3841ull;
    c.r[5].d[0] = c.r[5].d[0] | 3859ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A1118:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 17296u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A112Cu); set32(c.r[6], 0u + 36u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003A112Cu) [[unlikely]] return; }
L_003A112C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 17256u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1140u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003A1140u) [[unlikely]] return; }
L_003A1140:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 17248u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1154u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x003A1154u) [[unlikely]] return; }
L_003A1154:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 10408u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A1170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003A1178:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1188u);  if (depth < kMaxDepth) unit_009B(c, 116u, depth + 1u); else { c.pc = 0x0038D9F8u; return; } if (c.pc != 0x003A1188u) [[unlikely]] return; }
L_003A1188:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A1198:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003A11B0; }
L_003A11B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A11CCu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A11CCu) [[unlikely]] return; }
L_003A11CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A1230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A11DCu);  if (depth < kMaxDepth) unit_00A0(c, 127u, depth + 1u); else { c.pc = 0x003A1358u; return; } if (c.pc != 0x003A11DCu) [[unlikely]] return; }
L_003A11DC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A11F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A1230; } }
L_003A11F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A11F8u);  if (depth < kMaxDepth) unit_00A0(c, 120u, depth + 1u); else { c.pc = 0x003A1248u; return; } if (c.pc != 0x003A11F8u) [[unlikely]] return; }
L_003A11F8:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A1210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1210u);  if (depth < kMaxDepth) unit_00A0(c, 123u, depth + 1u); else { c.pc = 0x003A12B8u; return; } if (c.pc != 0x003A1210u) [[unlikely]] return; }
L_003A1210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1218u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 151u, depth + 1u); else { c.pc = 0x003A16A0u; return; } if (c.pc != 0x003A1218u) [[unlikely]] return; }
L_003A1218:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1224u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 128u, depth + 1u); else { c.pc = 0x003A1370u; return; } if (c.pc != 0x003A1224u) [[unlikely]] return; }
L_003A1224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A122Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 146u, depth + 1u); else { c.pc = 0x003A15D8u; return; } if (c.pc != 0x003A122Cu) [[unlikely]] return; }
L_003A122C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A1230:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A1248:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 28u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1260u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A1260u) [[unlikely]] return; }
L_003A1260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A12A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1270u);  if (depth < kMaxDepth) unit_009F(c, 221u, depth + 1u); else { c.pc = 0x0039E328u; return; } if (c.pc != 0x003A1270u) [[unlikely]] return; }
L_003A1270:
    set32(c.r[6], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_003A1298; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] > 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003A1298; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A12AC; } }
L_003A1298:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0C68u | kUnwind; return; } goto L_003A0C68; }
L_003A12A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A12AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A12B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 93u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 8120u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A12E0u); set32(c.r[18], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A12E0u) [[unlikely]] return; }
L_003A12E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 94u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A12F0u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A12F0u) [[unlikely]] return; }
L_003A12F0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_003A133C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 192u);  if (t) { goto L_003A133C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003A1340; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1324u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_009A(c, 170u, depth + 1u); else { c.pc = 0x0038BD38u; return; } if (c.pc != 0x003A1324u) [[unlikely]] return; }
L_003A1324:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A1340; } }
    set32(c.r[2], 0u + 200u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[17].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 4;
L_003A133C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A1340:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A1358:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8132u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C450u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 7u, depth); }
L_003A1370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[17].w[0] + 8112u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A13A4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 5u, depth + 1u); else { c.pc = 0x0039C410u; return; } if (c.pc != 0x003A13A4u) [[unlikely]] return; }
L_003A13A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A1400; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A13B8u);  if (depth < kMaxDepth) unit_009F(c, 5u, depth + 1u); else { c.pc = 0x0039C410u; return; } if (c.pc != 0x003A13B8u) [[unlikely]] return; }
L_003A13B8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[19].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003A1404; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A13C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 133u, depth + 1u); else { c.pc = 0x003A1420u; return; } if (c.pc != 0x003A13C8u) [[unlikely]] return; }
L_003A13C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A1400; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A13DCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009F(c, 4u, depth + 1u); else { c.pc = 0x0039C3F0u; return; } if (c.pc != 0x003A13DCu) [[unlikely]] return; }
L_003A13DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_003A15B0; }
L_003A1400:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A1404:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A1420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1434u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 173u, depth + 1u); else { c.pc = 0x003A6038u; return; } if (c.pc != 0x003A1434u) [[unlikely]] return; }
L_003A1434:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A145C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1444u);  if (depth < kMaxDepth) unit_00A0(c, 137u, depth + 1u); else { c.pc = 0x003A1480u; return; } if (c.pc != 0x003A1444u) [[unlikely]] return; }
L_003A1444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A1468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1454u);  if (depth < kMaxDepth) unit_00A0(c, 139u, depth + 1u); else { c.pc = 0x003A14C8u; return; } if (c.pc != 0x003A1454u) [[unlikely]] return; }
L_003A1454:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003A146C; }
L_003A145C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A146C; } }
    c.budget -= 1;
L_003A1468:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A146C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A1480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], ld32((c.r[5].w[0] + 2656u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    c.r[3].d[0] = ~(0ull | c.r[16].d[0]);
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    c.r[5].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A14ACu); if (c.r[5].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_00A1(c, 175u, depth + 1u); else { c.pc = 0x003A6058u; return; } if (c.pc != 0x003A14ACu) [[unlikely]] return; }
L_003A14AC:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A14C8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[16], c.r[18].w[0] + 120u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[19], ld32((c.r[18].w[0] + 8120u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A14F4u); set32(c.r[17], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_00A0(c, 249u, depth + 1u); else { c.pc = 0x003A2618u; return; } if (c.pc != 0x003A14F4u) [[unlikely]] return; }
L_003A14F4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003A1594; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A151C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A1590; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A151C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1524u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 139u, depth + 1u); else { c.pc = 0x0038B8C8u; return; } if (c.pc != 0x003A1524u) [[unlikely]] return; }
L_003A1524:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A1590; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1548u);  if (depth < kMaxDepth) unit_009E(c, 484u, depth + 1u); else { c.pc = 0x0039BC90u; return; } if (c.pc != 0x003A1548u) [[unlikely]] return; }
L_003A1548:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 276u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A1590; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1568u);  if (depth < kMaxDepth) unit_00A3(c, 199u, depth + 1u); else { c.pc = 0x003AE160u; return; } if (c.pc != 0x003A1568u) [[unlikely]] return; }
L_003A1568:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1578u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 484u, depth + 1u); else { c.pc = 0x0039BC90u; return; } if (c.pc != 0x003A1578u) [[unlikely]] return; }
L_003A1578:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1588u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 482u, depth + 1u); else { c.pc = 0x0039BC50u; return; } if (c.pc != 0x003A1588u) [[unlikely]] return; }
L_003A1588:
    c.r[16].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_003A1590:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003A1594:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A15B0:
    set32(c.r[4], c.r[4].w[0] + 3648u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A15CC; } }
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003A15CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A15D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A15F8u); set32(c.r[18], c.r[16].w[0] + 2384u);  if (depth < kMaxDepth) unit_00A1(c, 175u, depth + 1u); else { c.pc = 0x003A6058u; return; } if (c.pc != 0x003A15F8u) [[unlikely]] return; }
L_003A15F8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A162C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1610u);  if (depth < kMaxDepth) unit_00A1(c, 173u, depth + 1u); else { c.pc = 0x003A6038u; return; } if (c.pc != 0x003A1610u) [[unlikely]] return; }
L_003A1610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003A1668; } }
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003A166C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003A166C; }
L_003A162C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1638u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A0(c, 150u, depth + 1u); else { c.pc = 0x003A1680u; return; } if (c.pc != 0x003A1638u) [[unlikely]] return; }
L_003A1638:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[5], 0u + 5u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003A1668; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00A2(c, 393u, depth); }
L_003A1668:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A166C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A1680:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8132u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C430u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 6u, depth); }
L_003A16A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
L_003A16B8:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A16C8u); set32(c.r[7], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00A0(c, 156u, depth + 1u); else { c.pc = 0x003A1720u; return; } if (c.pc != 0x003A16C8u) [[unlikely]] return; }
L_003A16C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[8], c.r[29].w[0] + 12u);  if (t) { goto L_003A16FC; } }
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A16E8u); set32(c.r[7], ld32((c.r[29].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A0(c, 195u, depth + 1u); else { c.pc = 0x003A1ED0u; return; } if (c.pc != 0x003A16E8u) [[unlikely]] return; }
L_003A16E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 12u)));  if (t) { goto L_003A16FC; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A16B8u | kUnwind; return; } goto L_003A16B8; }
L_003A16FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1704u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 84u, depth + 1u); else { c.pc = 0x003A5018u; return; } if (c.pc != 0x003A1704u) [[unlikely]] return; }
L_003A1704:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A1720:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    st32((c.r[19].w[0]), 0u);
    set32(c.r[16], ld32((c.r[17].w[0] + 8128u)));
    st32((c.r[18].w[0]), 0u);
    st32((c.r[20].w[0]), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1768u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 457u, depth + 1u); else { c.pc = 0x0039B758u; return; } if (c.pc != 0x003A1768u) [[unlikely]] return; }
L_003A1768:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003A1944; }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 206u);  if (t) { goto L_003A1940; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1788u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00A0(c, 177u, depth + 1u); else { c.pc = 0x003A1C10u; return; } if (c.pc != 0x003A1788u) [[unlikely]] return; }
L_003A1788:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[3], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_003A17E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 12u)));  if (t) { goto L_003A17B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A17A8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 173u, depth + 1u); else { c.pc = 0x003A1B20u; return; } if (c.pc != 0x003A17A8u) [[unlikely]] return; }
L_003A17A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_003A17C8; } }
L_003A17B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_003A17C8:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A1940; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_003A193C; } }
L_003A17E0:
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_003A1940; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 36u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A180Cu); set32(c.r[7], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_009E(c, 476u, depth + 1u); else { c.pc = 0x0039BB78u; return; } if (c.pc != 0x003A180Cu) [[unlikely]] return; }
L_003A180C:
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A181Cu); set32(c.r[6], ld32((c.r[29].w[0] + 36u)));  if (depth < kMaxDepth) unit_00A0(c, 168u, depth + 1u); else { c.pc = 0x003A1960u; return; } if (c.pc != 0x003A181Cu) [[unlikely]] return; }
L_003A181C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 12u)));  if (t) { goto L_003A187C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 36u), 0u);  if (t) { goto L_003A1840; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_003A1848; } }
    c.budget -= 1;
L_003A1840:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_003A1848:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003A187C; } }
    set32(c.r[5], 0u + 204u);
    set32(c.r[6], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1864u); st32((c.r[29].w[0] + 40u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A0(c, 186u, depth + 1u); else { c.pc = 0x003A1D68u; return; } if (c.pc != 0x003A1864u) [[unlikely]] return; }
L_003A1864:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 40u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A187Cu); st32((c.r[29].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009E(c, 479u, depth + 1u); else { c.pc = 0x0039BBE8u; return; } if (c.pc != 0x003A187Cu) [[unlikely]] return; }
L_003A187C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A1914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1890u);  if (depth < kMaxDepth) unit_009A(c, 91u, depth + 1u); else { c.pc = 0x0038A650u; return; } if (c.pc != 0x003A1890u) [[unlikely]] return; }
L_003A1890:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 8u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 44u), c.r[4].w[0]);  if (t) { goto L_003A18C8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 64u);  if (t) { goto L_003A1928; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 36u)));  if (t) { goto L_003A18E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A1930; } }
    c.budget -= 1;
L_003A18C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_003A1928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003A18F4; } }
L_003A18E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 72ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 4u);  if (t) { goto L_003A1928; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_003A18F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A18FCu); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00A0(c, 177u, depth + 1u); else { c.pc = 0x003A1C10u; return; } if (c.pc != 0x003A18FCu) [[unlikely]] return; }
L_003A18FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A1914; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A1930; } }
L_003A1914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A191Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 174u, depth + 1u); else { c.pc = 0x003A1B88u; return; } if (c.pc != 0x003A191Cu) [[unlikely]] return; }
L_003A191C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003A1944; } }
    c.budget -= 1;
L_003A1928:
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003A1930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1938u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 173u, depth + 1u); else { c.pc = 0x003A1B20u; return; } if (c.pc != 0x003A1938u) [[unlikely]] return; }
L_003A1938:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003A193C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A1940:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003A1944:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A1960:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 16u), c.r[5].w[0]);  if (t) { goto L_003A1B04; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[4].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003A1B08; }
    c.r[2].d[0] = c.r[4].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_003A19B4; } }
    set32(c.r[3], c.r[17].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A1B04; } }
    c.r[2].d[0] = c.r[17].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003A19B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  goto L_003A1A20; }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  goto L_003A1A20; }
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_003A1A50; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A1B04; } }
    set32(c.r[6], 0u + 4u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1A04u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003A1A04u) [[unlikely]] return; }
L_003A1A04:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] - c.r[16].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1A18u); set32(c.r[4], c.r[4].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003A1A18u) [[unlikely]] return; }
L_003A1A18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1A60; } }
L_003A1A20:
    c.r[2].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A1B04; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003A1B04; }
    set32(c.r[3], c.r[17].w[0] - c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] > 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A1B04; } }
L_003A1A50:
    lwl(c.r[2], (c.r[17].w[0] + 3u));
    lwr(c.r[2], (c.r[17].w[0]));
    swl(c.r[2], (c.r[29].w[0] + 3u));
    swr(c.r[2], (c.r[29].w[0]));
    c.budget -= 4;
L_003A1A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1A68u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 91u, depth + 1u); else { c.pc = 0x0038A650u; return; } if (c.pc != 0x003A1A68u) [[unlikely]] return; }
L_003A1A68:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;  if (t) { goto L_003A1AB0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 64u);  if (t) { goto L_003A1A98; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A1AC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A1B08; } }
    c.budget -= 1;
L_003A1A98:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 128u);  if (t) { goto L_003A1B00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A1B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A1B08; } }
L_003A1AB0:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A1B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_003A1ADC; } }
L_003A1AC8:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 72ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A1B00; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_003A1ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1AE4u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00A0(c, 177u, depth + 1u); else { c.pc = 0x003A1C10u; return; } if (c.pc != 0x003A1AE4u) [[unlikely]] return; }
L_003A1AE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003A1B04; }
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_003A1B04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A1B04; } }
    c.budget -= 1;
L_003A1B00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A1B04:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A1B08:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A1B20:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[6].w[0] - c.r[3].w[0]);  if (t) { goto L_003A1B4C; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A1B7C; } }
L_003A1B4C:
    set32(c.r[5], ld32((c.r[7].w[0] + 8u)));
    c.r[2].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A1B7C; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A1B7C; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_003A1B7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003A1B88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 8128u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1BACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 482u, depth + 1u); else { c.pc = 0x0039BC50u; return; } if (c.pc != 0x003A1BACu) [[unlikely]] return; }
L_003A1BAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1BBCu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 8u, depth + 1u); else { c.pc = 0x0039C470u; return; } if (c.pc != 0x003A1BBCu) [[unlikely]] return; }
L_003A1BBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[17], c.r[17].w[0] - c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] | 3868ull;  if (t) { goto L_003A1BF8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A1BF8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A1C10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    st32((c.r[22].w[0]), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1C54u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_009A(c, 95u, depth + 1u); else { c.pc = 0x0038A7E8u; return; } if (c.pc != 0x003A1C54u) [[unlikely]] return; }
L_003A1C54:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[7], ld32((c.r[18].w[0] + 12u)));  goto L_003A1C80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1D2C; } }
L_003A1C68:
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[22].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);  if (t) { goto L_003A1D3C; } }
L_003A1C80:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_003A1D3C; } }
    set32(c.r[19], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[7].d[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - c.r[19].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1CC0u); c.r[20].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003A1CC0u) [[unlikely]] return; }
L_003A1CC0:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1CD8u); set32(c.r[16], c.r[16].w[0] - 3u);  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003A1CD8u) [[unlikely]] return; }
L_003A1CD8:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 12u)));  goto L_003A1D14; }
    c.budget -= 1;
L_003A1CE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1CF0u); set32(c.r[4], c.r[29].w[0] + c.r[20].w[0]);  if (depth < kMaxDepth) unit_009A(c, 91u, depth + 1u); else { c.pc = 0x0038A650u; return; } if (c.pc != 0x003A1CF0u) [[unlikely]] return; }
L_003A1CF0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[21].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A1C68u | kUnwind; return; } goto L_003A1C68; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A1CE8u | kUnwind; return; } goto L_003A1CE8; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_003A1D14:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1D20u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_009A(c, 95u, depth + 1u); else { c.pc = 0x0038A7E8u; return; } if (c.pc != 0x003A1D20u) [[unlikely]] return; }
L_003A1D20:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003A1D40; }
L_003A1D2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1D34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 91u, depth + 1u); else { c.pc = 0x0038A650u; return; } if (c.pc != 0x003A1D34u) [[unlikely]] return; }
L_003A1D34:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003A1D3C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003A1D40:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A1D68:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    st32((c.r[22].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A1E70; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1DB8u); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_009A(c, 92u, depth + 1u); else { c.pc = 0x0038A6E8u; return; } if (c.pc != 0x003A1DB8u) [[unlikely]] return; }
L_003A1DB8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[19], ld32((c.r[18].w[0] + 4u)));  goto L_003A1DE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1E94; } }
    c.budget -= 1;
L_003A1DD0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[22].w[0]), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);  if (t) { goto L_003A1EA4; } }
L_003A1DE8:
    set32(c.r[7], 0u + 3u);
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    if (c.r[2].d[0] == 0) c.r[19].d[0] = c.r[7].d[0];
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[7].d[0];
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1E20u); set32(c.r[5], c.r[5].w[0] - c.r[19].w[0]);  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003A1E20u) [[unlikely]] return; }
L_003A1E20:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1E38u); set32(c.r[16], c.r[16].w[0] - 3u);  if (depth < kMaxDepth) unit_0009(c, 72u, depth + 1u); else { c.pc = 0x001453A8u; return; } if (c.pc != 0x003A1E38u) [[unlikely]] return; }
L_003A1E38:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  goto L_003A1E74; }
    c.budget -= 1;
L_003A1E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1E50u); set32(c.r[4], c.r[29].w[0] + c.r[20].w[0]);  if (depth < kMaxDepth) unit_009A(c, 91u, depth + 1u); else { c.pc = 0x0038A650u; return; } if (c.pc != 0x003A1E50u) [[unlikely]] return; }
L_003A1E50:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[21].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A1DD0u | kUnwind; return; } goto L_003A1DD0; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A1E48u | kUnwind; return; } goto L_003A1E48; } }
L_003A1E70:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003A1E74:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1E88u); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_009A(c, 92u, depth + 1u); else { c.pc = 0x0038A6E8u; return; } if (c.pc != 0x003A1E88u) [[unlikely]] return; }
L_003A1E88:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003A1EA8; }
L_003A1E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1E9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 91u, depth + 1u); else { c.pc = 0x0038A650u; return; } if (c.pc != 0x003A1E9Cu) [[unlikely]] return; }
L_003A1E9C:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003A1EA4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003A1EA8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A1ED0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[20], c.r[16].w[0] + 2384u);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], c.r[16].w[0] + 8112u);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[21].w[0]), 0u);
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F28u); st32((c.r[20].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_00A1(c, 350u, depth + 1u); else { c.pc = 0x003A7DD0u; return; } if (c.pc != 0x003A1F28u) [[unlikely]] return; }
L_003A1F28:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 120u)));  goto L_003A1F68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 249u, depth + 1u); else { c.pc = 0x003A2618u; return; } if (c.pc != 0x003A1F38u) [[unlikely]] return; }
L_003A1F38:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[20].w[0] + 36u), c.r[3].w[0]);  goto L_003A1F58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 172u, depth + 1u); else { c.pc = 0x003A6028u; return; } if (c.pc != 0x003A1F4Cu) [[unlikely]] return; }
L_003A1F4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A216C; } }
    c.budget -= 1;
L_003A1F58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 174u, depth + 1u); else { c.pc = 0x003A1B88u; return; } if (c.pc != 0x003A1F60u) [[unlikely]] return; }
L_003A1F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A2170; } }
L_003A1F68:
    set32(c.r[2], 0u + 204u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[17].d[0] = c.r[17].d[0] & 204ull;  goto L_003A1F84; }
    set32(c.r[2], ld32((c.r[19].w[0] + 368u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A1F88; } }
    c.r[17].d[0] = c.r[17].d[0] & 204ull;
    c.budget -= 1;
L_003A1F84:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003A1F88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F94u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_009E(c, 488u, depth + 1u); else { c.pc = 0x0039BD30u; return; } if (c.pc != 0x003A1F94u) [[unlikely]] return; }
L_003A1F94:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003A1FA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A216C; } }
L_003A1FA8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003A2170; }
    c.r[2].d[0] = c.r[17].d[0] & 200ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A1FC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1FC4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A1(c, 174u, depth + 1u); else { c.pc = 0x003A6048u; return; } if (c.pc != 0x003A1FC4u) [[unlikely]] return; }
L_003A1FC4:
    set32(c.r[2], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_003A2020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1FD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 218u, depth + 1u); else { c.pc = 0x003A21E8u; return; } if (c.pc != 0x003A1FD8u) [[unlikely]] return; }
L_003A1FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1FE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 34u, depth + 1u); else { c.pc = 0x0039C710u; return; } if (c.pc != 0x003A1FE0u) [[unlikely]] return; }
L_003A1FE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003A2000; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1FF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 220u, depth + 1u); else { c.pc = 0x003A22A0u; return; } if (c.pc != 0x003A1FF0u) [[unlikely]] return; }
L_003A1FF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_003A216C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A2164; } }
L_003A2000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2008u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 39u, depth + 1u); else { c.pc = 0x0039C778u; return; } if (c.pc != 0x003A2008u) [[unlikely]] return; }
L_003A2008:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003A2020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2018u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 238u, depth + 1u); else { c.pc = 0x003A24C8u; return; } if (c.pc != 0x003A2018u) [[unlikely]] return; }
L_003A2018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A2164; } }
L_003A2020:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] & 76ull;  if (t) { goto L_003A2068; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2038u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 247u, depth + 1u); else { c.pc = 0x003A25D0u; return; } if (c.pc != 0x003A2038u) [[unlikely]] return; }
L_003A2038:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[22].sd[0] < 5ll ? 1ull : 0ull;  goto L_003A2050; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2048u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 172u, depth + 1u); else { c.pc = 0x003A6028u; return; } if (c.pc != 0x003A2048u) [[unlikely]] return; }
L_003A2048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A216C; } }
L_003A2050:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] & 76ull;  if (t) { goto L_003A2068; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_003A2168; } }
    c.budget -= 1;
L_003A2068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003A20E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2078u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 216u, depth + 1u); else { c.pc = 0x003A2198u; return; } if (c.pc != 0x003A2078u) [[unlikely]] return; }
L_003A2078:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2090u); set32(c.r[8], c.r[29].w[0] + 20u);  if (depth < kMaxDepth) unit_00A0(c, 251u, depth + 1u); else { c.pc = 0x003A26C8u; return; } if (c.pc != 0x003A2090u) [[unlikely]] return; }
L_003A2090:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003A2170; }
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 64u);  if (t) { goto L_003A20C8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 120u)));
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 204u);  if (t) { goto L_003A20BC; } }
    st32((c.r[19].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 1;
L_003A20BC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 368u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
L_003A20C8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A2164; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A2164; } }
    set32(c.r[2], 0u + 192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 120u), c.r[2].w[0]);  if (t) { goto L_003A2160; } }
L_003A20E8:
    c.r[2].d[0] = c.r[17].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A2140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A20FCu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 216u, depth + 1u); else { c.pc = 0x003A2198u; return; } if (c.pc != 0x003A20FCu) [[unlikely]] return; }
L_003A20FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2108u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 330u, depth + 1u); else { c.pc = 0x003A3C68u; return; } if (c.pc != 0x003A2108u) [[unlikely]] return; }
L_003A2108:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003A2130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2118u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 14u, depth + 1u); else { c.pc = 0x003A41D8u; return; } if (c.pc != 0x003A2118u) [[unlikely]] return; }
L_003A2118:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_003A216C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A2164; } }
    c.budget -= 1;
L_003A2130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2138u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 23u, depth + 1u); else { c.pc = 0x003A4340u; return; } if (c.pc != 0x003A2138u) [[unlikely]] return; }
L_003A2138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A2168; } }
L_003A2140:
    set32(c.r[2], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[5], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_003A2168; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2158u); set32(c.r[6], 0u + 204u);  if (depth < kMaxDepth) unit_00A1(c, 77u, depth + 1u); else { c.pc = 0x003A4E98u; return; } if (c.pc != 0x003A2158u) [[unlikely]] return; }
L_003A2158:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A216C; } }
L_003A2160:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003A2164:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003A2168:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003A216C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A2170:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003A2198:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A21B4u); set32(c.r[5], ld32((c.r[4].w[0] + 8128u)));  if (depth < kMaxDepth) unit_009E(c, 457u, depth + 1u); else { c.pc = 0x0039B758u; return; } if (c.pc != 0x003A21B4u) [[unlikely]] return; }
L_003A21B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_003A21C8; } }
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_003A21D4; } }
L_003A21C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_003A21D4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A21E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[17].w[0] + 3516u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 8112u);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_003A2224; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A221Cu);  if (depth < kMaxDepth) unit_009E(c, 483u, depth + 1u); else { c.pc = 0x0039BC70u; return; } if (c.pc != 0x003A221Cu) [[unlikely]] return; }
L_003A221C:
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 2;
L_003A2224:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A2288; } }
    ldl(c.r[2], (c.r[17].w[0] + 3479u));
    ldr(c.r[2], (c.r[17].w[0] + 3472u));
    ldl(c.r[3], (c.r[17].w[0] + 3487u));
    ldr(c.r[3], (c.r[17].w[0] + 3480u));
    ldl(c.r[4], (c.r[17].w[0] + 3495u));
    ldr(c.r[4], (c.r[17].w[0] + 3488u));
    ldl(c.r[5], (c.r[17].w[0] + 3503u));
    ldr(c.r[5], (c.r[17].w[0] + 3496u));
    sdl(c.r[2], (c.r[18].w[0] + 7u));
    sdr(c.r[2], (c.r[18].w[0]));
    sdl(c.r[3], (c.r[18].w[0] + 15u));
    sdr(c.r[3], (c.r[18].w[0] + 8u));
    sdl(c.r[4], (c.r[18].w[0] + 23u));
    sdr(c.r[4], (c.r[18].w[0] + 16u));
    sdl(c.r[5], (c.r[18].w[0] + 31u));
    sdr(c.r[5], (c.r[18].w[0] + 24u));
    ldl(c.r[2], (c.r[17].w[0] + 3511u));
    ldr(c.r[2], (c.r[17].w[0] + 3504u));
    set32(c.r[3], ld32((c.r[17].w[0] + 3512u)));
    sdl(c.r[2], (c.r[18].w[0] + 39u));
    sdr(c.r[2], (c.r[18].w[0] + 32u));
    st32((c.r[18].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 22;
L_003A2288:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A22A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A22BCu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 223u, depth + 1u); else { c.pc = 0x003A22F0u; return; } if (c.pc != 0x003A22BCu) [[unlikely]] return; }
L_003A22BC:
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A22D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A22D4u);  if (depth < kMaxDepth) unit_00A0(c, 238u, depth + 1u); else { c.pc = 0x003A24C8u; return; } if (c.pc != 0x003A22D4u) [[unlikely]] return; }
L_003A22D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A22D8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A22F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 3368u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2318u); set32(c.r[18], ld32((c.r[16].w[0] + 8120u)));  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A2318u) [[unlikely]] return; }
L_003A2318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A2330; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2328u);  if (depth < kMaxDepth) unit_00A0(c, 232u, depth + 1u); else { c.pc = 0x003A23C0u; return; } if (c.pc != 0x003A2328u) [[unlikely]] return; }
L_003A2328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A2344; } }
L_003A2330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2338u);  if (depth < kMaxDepth) unit_00A0(c, 235u, depth + 1u); else { c.pc = 0x003A2420u; return; } if (c.pc != 0x003A2338u) [[unlikely]] return; }
L_003A2338:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_003A23A8; } }
L_003A2344:
    c.budget -= 2;
    if (c.r[5].sd[0] <= 0) { c.r[5].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  goto L_003A2384; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2354u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 42u, depth + 1u); else { c.pc = 0x0039C7C0u; return; } if (c.pc != 0x003A2354u) [[unlikely]] return; }
L_003A2354:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2368u); st32((c.r[18].w[0] + 136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 277u, depth + 1u); else { c.pc = 0x003A7230u; return; } if (c.pc != 0x003A2368u) [[unlikely]] return; }
L_003A2368:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A2380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2378u);  if (depth < kMaxDepth) unit_00A1(c, 339u, depth + 1u); else { c.pc = 0x003A7B90u; return; } if (c.pc != 0x003A2378u) [[unlikely]] return; }
L_003A2378:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 2;
L_003A2380:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 1;
L_003A2384:
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2390u); c.r[5].d[0] = c.r[5].d[0] | 65535ull;  if (depth < kMaxDepth) unit_00A2(c, 438u, depth + 1u); else { c.pc = 0x003ABFA8u; return; } if (c.pc != 0x003A2390u) [[unlikely]] return; }
L_003A2390:
    set32(c.r[4], c.r[17].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A239Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A2(c, 438u, depth + 1u); else { c.pc = 0x003ABFA8u; return; } if (c.pc != 0x003A239Cu) [[unlikely]] return; }
L_003A239C:
    set32(c.r[2], 0u + 192u);
    st32((c.r[18].w[0] + 120u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003A23A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A23C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    set32(c.r[16], c.r[3].w[0] + 3428u);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 3472u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 3476u);  if (t) { goto L_003A240C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A23ECu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 307u, depth + 1u); else { c.pc = 0x003A34B8u; return; } if (c.pc != 0x003A23ECu) [[unlikely]] return; }
L_003A23EC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 36u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2400u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A3(c, 87u, depth + 1u); else { c.pc = 0x003ACDE8u; return; } if (c.pc != 0x003A2400u) [[unlikely]] return; }
L_003A2400:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 3;
L_003A240C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A2420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 15752u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], c.r[16].w[0] + 3368u);  if (t) { goto L_003A2460; } }
    c.r[2].d[0] = 0ull | 44100ull;
    st32((c.r[29].w[0]), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003A2480; } }
    c.budget -= 1;
L_003A2460:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A246Cu); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_009F(c, 48u, depth + 1u); else { c.pc = 0x0039C900u; return; } if (c.pc != 0x003A246Cu) [[unlikely]] return; }
L_003A246C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_003A2484; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003A24B0; } }
    c.budget -= 1;
L_003A2480:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003A2484:
    set32(c.r[2], ld32((c.r[17].w[0] + 496u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 3468u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[17].w[0] + 496u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A24A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 173u, depth + 1u); else { c.pc = 0x0038E0D0u; return; } if (c.pc != 0x003A24A0u) [[unlikely]] return; }
L_003A24A0:
    set32(c.r[3], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 4;
L_003A24B0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A24C8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[18], 0u + 128u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[19], 0u + 4u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_003A2518; } }
    c.budget -= 1;
L_003A24F8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A250Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A250Cu) [[unlikely]] return; }
L_003A250C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2518u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00A0(c, 245u, depth + 1u); else { c.pc = 0x003A2588u; return; } if (c.pc != 0x003A2518u) [[unlikely]] return; }
L_003A2518:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2534u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2534u) [[unlikely]] return; }
L_003A2534:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[19].d[0]) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_003A2554; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2548u); set32(c.r[4], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_009A(c, 91u, depth + 1u); else { c.pc = 0x0038A650u; return; } if (c.pc != 0x003A2548u) [[unlikely]] return; }
L_003A2548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A24F8u | kUnwind; return; } goto L_003A24F8; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003A2554:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2568u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2568u) [[unlikely]] return; }
L_003A2568:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A2588:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A25ACu); set32(c.r[5], ld32((c.r[16].w[0] + 8128u)));  if (depth < kMaxDepth) unit_009E(c, 489u, depth + 1u); else { c.pc = 0x0039BD90u; return; } if (c.pc != 0x003A25ACu) [[unlikely]] return; }
L_003A25AC:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 2464u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[17].d[0] + c.r[2].d[0];
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    st64((c.r[16].w[0] + 2464u), c.r[2].d[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A25D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 128u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A2608; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003A2608; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A25F8u);  if (depth < kMaxDepth) unit_00A0(c, 249u, depth + 1u); else { c.pc = 0x003A2618u; return; } if (c.pc != 0x003A25F8u) [[unlikely]] return; }
L_003A25F8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A260C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A2608:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A260C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A2618:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8128u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C450u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 7u, depth); }
L_003A2630:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], 0u - 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[8].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A2678; } }
    c.r[2].d[0] = c.r[3].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_003A2668; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A2690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003A26AC; } }
    c.budget -= 1;
L_003A2668:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A26A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A26BC; } }
L_003A2678:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] > 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A26B8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A2690:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] > 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A26B8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A26A8:
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_003A26AC:
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A26B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A26BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A26C8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    set32(c.r[19], ld32((c.r[20].w[0] + 8120u)));
    st32((c.r[29].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[23], c.r[19].w[0] + 4224u);
    set32(c.r[21], c.r[19].w[0] + 140u);
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[23].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[23].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2730u); set32(c.r[6], ld32((c.r[23].w[0] + 8u)));  if (depth < kMaxDepth) unit_009A(c, 147u, depth + 1u); else { c.pc = 0x0038BA98u; return; } if (c.pc != 0x003A2730u) [[unlikely]] return; }
L_003A2730:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2740u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0096(c, 219u, depth + 1u); else { c.pc = 0x0037A8C8u; return; } if (c.pc != 0x003A2740u) [[unlikely]] return; }
L_003A2740:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2750u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 149u, depth + 1u); else { c.pc = 0x0038BAD8u; return; } if (c.pc != 0x003A2750u) [[unlikely]] return; }
L_003A2750:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2764u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0096(c, 219u, depth + 1u); else { c.pc = 0x0037A8C8u; return; } if (c.pc != 0x003A2764u) [[unlikely]] return; }
L_003A2764:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[22].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2780u); c.r[7].d[0] = c.r[7].d[0] | 3844ull;  if (depth < kMaxDepth) unit_00A0(c, 250u, depth + 1u); else { c.pc = 0x003A2630u; return; } if (c.pc != 0x003A2780u) [[unlikely]] return; }
L_003A2780:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2790u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 245u, depth + 1u); else { c.pc = 0x003A2588u; return; } if (c.pc != 0x003A2790u) [[unlikely]] return; }
L_003A2790:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A29F0; } }
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[16], 0u - 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A29F0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A27B4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 135u, depth + 1u); else { c.pc = 0x0038B7C0u; return; } if (c.pc != 0x003A27B4u) [[unlikely]] return; }
L_003A27B4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[22].w[0]), c.r[3].w[0]);  if (t) { goto L_003A27D8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A27D0u); c.r[5].d[0] = c.r[5].d[0] | 3845ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x003A27D0u) [[unlikely]] return; }
L_003A27D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A29F4; } }
L_003A27D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    c.r[17].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 24u)));  goto L_003A285C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 2316u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[5], 0u + 95u);  if (t) { goto L_003A2818; } }
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { st32((c.r[22].w[0]), c.r[16].w[0]);  goto L_003A29F0; }
    set32(c.r[4], ld32((c.r[20].w[0] + 2320u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A2818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0]), c.r[16].w[0]);  if (t) { goto L_003A29F0; } }
L_003A2818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2820u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A2820u) [[unlikely]] return; }
L_003A2820:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2830u); set32(c.r[5], 0u + 95u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A2830u) [[unlikely]] return; }
L_003A2830:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A2858; } }
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[16].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2844u); set32(c.r[6], ld32((c.r[21].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2844u) [[unlikely]] return; }
L_003A2844:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 2u);  if (t) { goto L_003A2858; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0]), c.r[3].w[0]);  if (t) { goto L_003A29F0; } }
L_003A2858:
    set32(c.r[4], ld32((c.r[21].w[0] + 24u)));
    c.budget -= 1;
L_003A285C:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[6].d[0]) { set32(c.r[5], ld32((c.r[20].w[0] + 56u)));  goto L_003A2870; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 372u), 0u);  if (t) { goto L_003A28D0; } }
L_003A2870:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 20u)));  goto L_003A28D4; }
    set32(c.r[3], ld32((c.r[19].w[0] + 356u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003A28D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[3], ld32((c.r[3].w[0] + 112u)));  if (t) { goto L_003A28B8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 20u)));  if (t) { goto L_003A28D4; } }
    c.r[2].d[0] = c.r[3].sd[0] < 512ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[23].w[0] + 16u);  goto L_003A28D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 372u), c.r[6].w[0]);  if (t) { goto L_003A28D0; } }
    c.budget -= 1;
L_003A28B8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; set32(c.r[4], ld32((c.r[29].w[0] + 20u)));  if (t) { goto L_003A28D4; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 372u), c.r[6].w[0]);  goto L_003A28D0; }
L_003A28D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 1;
L_003A28D4:
    set32(c.r[6], c.r[23].w[0] + 16u);
    c.budget -= 1;
L_003A28D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A28E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009A(c, 148u, depth + 1u); else { c.pc = 0x0038BAB0u; return; } if (c.pc != 0x003A28E0u) [[unlikely]] return; }
L_003A28E0:
    set32(c.r[2], ld32((c.r[19].w[0] + 268u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A2900; } }
    st32((c.r[19].w[0] + 268u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_003A2904; } }
    c.budget -= 1;
L_003A2900:
    st32((c.r[19].w[0] + 272u), 0u);
    c.budget -= 1;
L_003A2904:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[30].w[0])));  goto L_003A295C; }
    set32(c.r[5], 0u + 77u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2918u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A2918u) [[unlikely]] return; }
L_003A2918:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 78u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2928u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A2928u) [[unlikely]] return; }
L_003A2928:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A2958; } }
    set32(c.r[4], ld32((c.r[30].w[0])));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2940u); set32(c.r[5], ld32((c.r[30].w[0] + 4u)));  if (depth < kMaxDepth) unit_009A(c, 95u, depth + 1u); else { c.pc = 0x0038A7E8u; return; } if (c.pc != 0x003A2940u) [[unlikely]] return; }
L_003A2940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A2958; } }
    goto L_003A2948;
L_003A2944:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A2948:
    set32(c.r[5], ld32((c.r[30].w[0])));
    set32(c.r[6], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[17].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2958u); set32(c.r[6], c.r[6].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2958u) [[unlikely]] return; }
L_003A2958:
    set32(c.r[4], ld32((c.r[30].w[0])));
    c.budget -= 1;
L_003A295C:
    set32(c.r[6], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2968u); set32(c.r[5], ld32((c.r[30].w[0] + 4u)));  if (depth < kMaxDepth) unit_009A(c, 95u, depth + 1u); else { c.pc = 0x0038A7E8u; return; } if (c.pc != 0x003A2968u) [[unlikely]] return; }
L_003A2968:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[19].w[0] + 272u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2984u); set32(c.r[8], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00A0(c, 276u, depth + 1u); else { c.pc = 0x003A2A20u; return; } if (c.pc != 0x003A2984u) [[unlikely]] return; }
L_003A2984:
    set32(c.r[3], ld32((c.r[19].w[0] + 120u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[19].w[0] + 4384u), c.r[4].d[0]);  if (t) { goto L_003A29F0; } }
    set32(c.r[6], ld32((c.r[19].w[0] + 272u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A29B0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 286u, depth + 1u); else { c.pc = 0x003A2CB0u; return; } if (c.pc != 0x003A29B0u) [[unlikely]] return; }
L_003A29B0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[19].w[0] + 272u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A29C4u); c.r[6].d[0] = ld64((c.r[29].w[0]));  if (depth < kMaxDepth) unit_00A0(c, 295u, depth + 1u); else { c.pc = 0x003A3008u; return; } if (c.pc != 0x003A29C4u) [[unlikely]] return; }
L_003A29C4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A29D0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 308u, depth + 1u); else { c.pc = 0x003A35B0u; return; } if (c.pc != 0x003A29D0u) [[unlikely]] return; }
L_003A29D0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A29DCu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 310u, depth + 1u); else { c.pc = 0x003A3690u; return; } if (c.pc != 0x003A29DCu) [[unlikely]] return; }
L_003A29DC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A29F0u); c.r[7].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 313u, depth + 1u); else { c.pc = 0x003A3828u; return; } if (c.pc != 0x003A29F0u) [[unlikely]] return; }
L_003A29F0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A29F4:
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
L_003A2A20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    set32(c.r[2], c.r[16].w[0] + 8112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    st64((c.r[20].w[0]), c.r[3].d[0]);
    c.budget -= 21;
    { const bool t = c.r[6].d[0] == 0ull; st64((c.r[17].w[0]), c.r[3].d[0]);  if (t) { goto L_003A2AA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A7Cu);  if (depth < kMaxDepth) unit_00A2(c, 295u, depth + 1u); else { c.pc = 0x003AA660u; return; } if (c.pc != 0x003A2A7Cu) [[unlikely]] return; }
L_003A2A7C:
    set32(c.r[4], c.r[16].w[0] + 3368u);
    c.r[2].d[0] = ld64((c.r[29].w[0]));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A2AA4; } }
    set32(c.r[5], c.r[19].w[0] + 280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2AA0u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 280u, depth + 1u); else { c.pc = 0x003A2AF0u; return; } if (c.pc != 0x003A2AA0u) [[unlikely]] return; }
L_003A2AA0:
    st64((c.r[20].w[0]), c.r[2].d[0]);
    c.budget -= 1;
L_003A2AA4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A2AC8:
    set32(c.r[2], c.r[4].w[0] + 16u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], 0u - 1u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st64((c.r[2].w[0]), c.r[3].d[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 8u), 0u);  c.pc = t; return; }
L_003A2AF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.r[3].d[0] = ld64((c.r[17].w[0] + 336u));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[22], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[22], ld32((c.r[22].w[0] + 17104u)));
    c.budget -= 25;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[21], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_003A2B74; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2B60u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 284u, depth + 1u); else { c.pc = 0x003A2C70u; return; } if (c.pc != 0x003A2B60u) [[unlikely]] return; }
L_003A2B60:
    c.r[3].d[0] = ld64((c.r[18].w[0]));
    c.r[3].d[0] = c.r[3].d[0] - c.r[2].d[0];
    c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    st64((c.r[17].w[0] + 336u), c.r[3].d[0]);
    c.budget -= 5;
L_003A2B74:
    c.r[2].d[0] = ld64((c.r[18].w[0]));
    set32(c.r[20], c.r[16].w[0] + 16u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] - c.r[3].d[0];
    set32(c.r[6], 0u + 4u);
    c.r[2].d[0] = c.r[17].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2B98u); if (c.r[2].d[0] != 0) c.r[17].d[0] = 0ull;  if (depth < kMaxDepth) unit_0009(c, 69u, depth + 1u); else { c.pc = 0x00145310u; return; } if (c.pc != 0x003A2B98u) [[unlikely]] return; }
L_003A2B98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_003A2BE0; } }
    c.r[3].d[0] = ld64((c.r[18].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    st64((c.r[20].w[0]), c.r[3].d[0]);
    c.r[2].d[0] = ld64((c.r[18].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[21].w[0]);
    st64((c.r[16].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_003A2BD0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003A2BD4; } }
    c.budget -= 1;
L_003A2BD0:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_003A2BD4:
    c.r[2].d[0] = ld64((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[30].w[0]), c.r[2].d[0]);  if (t) { goto L_003A2C38; } }
L_003A2BE0:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003A2C08; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 8;
L_003A2C08:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], c.r[21].w[0] - c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = c.r[4].d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2C2Cu); st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A0(c, 284u, depth + 1u); else { c.pc = 0x003A2C70u; return; } if (c.pc != 0x003A2C2Cu) [[unlikely]] return; }
L_003A2C2C:
    c.r[17].d[0] = c.r[17].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[17].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[17].d[0] = 0ull;
    c.budget -= 3;
L_003A2C38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A2C70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x055D0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[2].d[0] | 19072ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2CA0u); c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_000B(c, 8u, depth + 1u); else { c.pc = 0x0014C1D0u; return; } if (c.pc != 0x003A2CA0u) [[unlikely]] return; }
L_003A2CA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A2CB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    set32(c.r[21], c.r[18].w[0] + 3368u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], c.r[18].w[0] + 3396u);
    set32(c.r[17], c.r[18].w[0] + 4568u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2CF4u); set32(c.r[19], ld32((c.r[18].w[0] + 8120u)));  if (depth < kMaxDepth) unit_00A0(c, 312u, depth + 1u); else { c.pc = 0x003A37D8u; return; } if (c.pc != 0x003A2CF4u) [[unlikely]] return; }
L_003A2CF4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_003A2D38; } }
    set32(c.r[6], 0u + 63u);
    set32(c.r[2], c.r[18].w[0] + 4820u);
    c.budget -= 3;
L_003A2D08:
    set32(c.r[6], c.r[6].w[0] - 1u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2D08u | kUnwind; return; } goto L_003A2D08; } }
    set32(c.r[2], 0u - 1u);
    set32(c.r[7], ld32((c.r[16].w[0] + 20u)));
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[10], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_003A2DB8; } }
L_003A2D38:
    set32(c.r[10], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[10].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_003A2DB8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 356u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[5], c.r[7].w[0] + 1024u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[4].w[0] + 1u);
    if (c.r[3].d[0] != 0) c.r[8].d[0] = c.r[5].d[0];
    c.r[2].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[7].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_003A2DBC; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_003A2D78:
    c.r[3].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[4], c.r[6].w[0] + 63u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[6].w[0] - c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2D78u | kUnwind; return; } goto L_003A2D78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[7].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_003A2DBC; } }
    c.budget -= 1;
L_003A2DB8:
    c.r[3].d[0] = c.r[7].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 1;
L_003A2DBC:
    set32(c.r[4], c.r[7].w[0] + 63u);
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[21].w[0] + 56u));
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    set32(c.r[3], c.r[8].w[0] << 6);
    set32(c.r[8], c.r[7].w[0] - c.r[3].w[0]);
    set32(c.r[9], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[9].w[0] + c.r[17].w[0]);
    c.budget -= 11;
    { const bool t = c.r[20].d[0] == 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_003A2DF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003A2E78; } }
L_003A2DF0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003A2E28; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[7], 0u - 1u);  goto L_003A2E30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003A2E78; } }
L_003A2E10:
    c.r[2].d[0] = ld16((c.r[2].w[0] + 2u));
    set32(c.r[3], c.r[9].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003A2E78; } }
    c.budget -= 1;
L_003A2E28:
    set32(c.r[7], 0u - 1u);
    c.budget -= 2;
L_003A2E30:
    set32(c.r[3], c.r[8].w[0] - c.r[6].w[0]);
    c.budget -= 1;
L_003A2E34:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + 63u);
    set32(c.r[3], c.r[3].w[0] + 126u);
    c.r[4].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.r[4].d[0] = c.r[6].sd[0] < 64ll ? 1ull : 0ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[7].d[0]; c.r[5].d[0] = ld16((c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2E10u | kUnwind; return; } goto L_003A2E10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] - c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2E34u | kUnwind; return; } goto L_003A2E34; } }
L_003A2E78:
    set32(c.r[5], c.r[9].w[0] + c.r[17].w[0]);
    set32(c.r[3], 0u + 3u);
    c.r[2].d[0] = ld16((c.r[5].w[0] + 2u));
    c.budget -= 5;
    { const bool t = c.r[10].d[0] != c.r[3].d[0]; st16((c.r[21].w[0] + 58u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003A2F10; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = ld16((c.r[5].w[0]));  if (t) { goto L_003A2F10; } }
    set32(c.r[9], ld32((c.r[19].w[0] + 356u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = ld16((c.r[5].w[0] + 2u));
    set32(c.r[6], ld32((c.r[9].w[0] + 112u)));
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[6].w[0] + 63u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[8].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[6].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2EE0u); st16((c.r[9].w[0] + 46u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (depth < kMaxDepth) unit_00A0(c, 293u, depth + 1u); else { c.pc = 0x003A2F38u; return; } if (c.pc != 0x003A2EE0u) [[unlikely]] return; }
L_003A2EE0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 356u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_00A1(c, 59u, depth); }
L_003A2F10:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A2F38:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2F64u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_00A3(c, 87u, depth + 1u); else { c.pc = 0x003ACDE8u; return; } if (c.pc != 0x003A2F64u) [[unlikely]] return; }
L_003A2F64:
    set32(c.r[16], c.r[18].w[0] + 3368u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003A2FF0; } }
    ldl(c.r[2], (c.r[17].w[0] + 19u));
    ldr(c.r[2], (c.r[17].w[0] + 12u));
    ldl(c.r[3], (c.r[17].w[0] + 27u));
    ldr(c.r[3], (c.r[17].w[0] + 20u));
    ldl(c.r[4], (c.r[17].w[0] + 35u));
    ldr(c.r[4], (c.r[17].w[0] + 28u));
    ldl(c.r[5], (c.r[17].w[0] + 43u));
    ldr(c.r[5], (c.r[17].w[0] + 36u));
    sdl(c.r[2], (c.r[18].w[0] + 3479u));
    sdr(c.r[2], (c.r[18].w[0] + 3472u));
    sdl(c.r[3], (c.r[18].w[0] + 3487u));
    sdr(c.r[3], (c.r[18].w[0] + 3480u));
    sdl(c.r[4], (c.r[18].w[0] + 3495u));
    sdr(c.r[4], (c.r[18].w[0] + 3488u));
    sdl(c.r[5], (c.r[18].w[0] + 3503u));
    sdr(c.r[5], (c.r[18].w[0] + 3496u));
    ldl(c.r[2], (c.r[17].w[0] + 51u));
    ldr(c.r[2], (c.r[17].w[0] + 44u));
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    sdl(c.r[2], (c.r[18].w[0] + 3511u));
    sdr(c.r[2], (c.r[18].w[0] + 3504u));
    st32((c.r[18].w[0] + 3512u), c.r[3].w[0]);
    c.budget -= 22;
L_003A2FF0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A3008:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 52u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A303Cu); c.r[20].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A303Cu) [[unlikely]] return; }
L_003A303C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A3094; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A3080; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 52u);  if (t) { goto L_003A3084; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 87u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_003A3088; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003A3094; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3078u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 299u, depth + 1u); else { c.pc = 0x003A30E8u; return; } if (c.pc != 0x003A3078u) [[unlikely]] return; }
L_003A3078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A3090; } }
L_003A3080:
    set32(c.r[5], 0u + 52u);
    c.budget -= 1;
L_003A3084:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_003A3088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3090u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 393u, depth + 1u); else { c.pc = 0x003AB7D8u; return; } if (c.pc != 0x003A3090u) [[unlikely]] return; }
L_003A3090:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003A3094:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A30C8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_003A31A8; }
L_003A30C8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A30E8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 3472u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003A3198; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    ldl(c.r[2], (c.r[16].w[0] + 3403u));
    ldr(c.r[2], (c.r[16].w[0] + 3396u));
    ldl(c.r[3], (c.r[16].w[0] + 3411u));
    ldr(c.r[3], (c.r[16].w[0] + 3404u));
    ldl(c.r[7], (c.r[16].w[0] + 3419u));
    ldr(c.r[7], (c.r[16].w[0] + 3412u));
    ldl(c.r[8], (c.r[16].w[0] + 3427u));
    ldr(c.r[8], (c.r[16].w[0] + 3420u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 15u));
    sdr(c.r[3], (c.r[29].w[0] + 8u));
    sdl(c.r[7], (c.r[29].w[0] + 23u));
    sdr(c.r[7], (c.r[29].w[0] + 16u));
    sdl(c.r[8], (c.r[29].w[0] + 31u));
    sdr(c.r[8], (c.r[29].w[0] + 24u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3154u); set32(c.r[6], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_00A3(c, 87u, depth + 1u); else { c.pc = 0x003ACDE8u; return; } if (c.pc != 0x003A3154u) [[unlikely]] return; }
L_003A3154:
    set32(c.r[5], c.r[29].w[0] + 40u);
    set32(c.r[6], c.r[29].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3164u); set32(c.r[4], c.r[16].w[0] + 3476u);  if (depth < kMaxDepth) unit_00A3(c, 87u, depth + 1u); else { c.pc = 0x003ACDE8u; return; } if (c.pc != 0x003A3164u) [[unlikely]] return; }
L_003A3164:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3170u); set32(c.r[5], 0u + 53u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A3170u) [[unlikely]] return; }
L_003A3170:
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    c.r[4].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A3198; } }
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_003A3198:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A31A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[8].w[0] + 3368u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 11;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0] + 16u)));  if (t) { goto L_003A31F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003A31F8; } }
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[8], c.r[8].w[0] + 3396u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003A32A0; }
L_003A31F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A3230; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 13992u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003A328C; }
    st32((c.r[16].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), 0u);  if (t) { goto L_003A3288; } }
    c.budget -= 1;
L_003A3230:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 108u);  if (t) { goto L_003A3258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3240u); set32(c.r[5], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_00A0(c, 307u, depth + 1u); else { c.pc = 0x003A34B8u; return; } if (c.pc != 0x003A3240u) [[unlikely]] return; }
L_003A3240:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 58u));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 1202u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003A3288; } }
L_003A3258:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[7].w[0]);
    c.budget -= 12;
L_003A3288:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A328C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A32A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[20].w[0] + 17104u)));
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] << 1);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x055D0000u);
    c.r[6].d[0] = c.r[6].d[0] | 19072ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[19].w[0] + 16504u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A32FCu); c.r[21].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 178u, depth + 1u); else { c.pc = 0x0038E1F0u; return; } if (c.pc != 0x003A32FCu) [[unlikely]] return; }
L_003A32FC:
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    st32((c.r[21].w[0]), c.r[16].w[0]);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    set32(c.r[5], c.r[5].w[0] - c.r[17].w[0]);
    st32((c.r[21].w[0] + 4u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    st16((c.r[21].w[0] + 30u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; if (c.r[2].d[0] != 0) c.r[5].d[0] = 0ull;  if (t) { goto L_003A3438; } }
    set32(c.r[2], 0u + 29970u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull | 59940ull;  if (t) { goto L_003A3348; } }
    c.budget -= 2;
    if (c.r[20].d[0] != c.r[2].d[0]) { mmi::div(c, 0, c.r[5].w[0], c.r[19].w[0]);  goto L_003A343C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003A3358; } }
    c.budget -= 1;
L_003A3348:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[2].w[0] + 16544u);  if (t) { goto L_003A335C; } }
    c.budget -= 1;
L_003A3358:
    set32(c.r[8], c.r[2].w[0] + 16576u);
    c.budget -= 1;
L_003A335C:
    set32(c.r[2], ld32((c.r[8].w[0])));
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003A3368u);  goto L_003A336C; }
L_003A336C:
    set32(c.r[3], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[8].w[0] + 8u)));
    c.r[4].d[0] = c.hi.d[0];
    c.r[5].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[11].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A33C0; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 20u)));
    c.r[9].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003A33ACu);  goto L_003A33B0; }
L_003A33B0:
    c.r[4].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A3424; } }
L_003A33C0:
    set32(c.r[2], ld32((c.r[8].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003A33D0u);  goto L_003A33D4; }
L_003A33D4:
    set32(c.r[6], ld32((c.r[8].w[0] + 16u)));
    c.r[3].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[9], c.r[4].w[0] + 1u);  if (t) { goto L_003A3400; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 28u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[5].w[0] + c.r[2].w[0]);  if (t) { goto L_003A3424; } }
L_003A3400:
    set32(c.r[2], ld32((c.r[8].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003A3410u);  goto L_003A3414; }
L_003A3414:
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
L_003A3424:
    set32(c.r[2], ld32((c.r[8].w[0] + 24u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[11].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);  if (t) { goto L_003A3480; } }
    c.budget -= 1;
L_003A3438:
    mmi::div(c, 0, c.r[5].w[0], c.r[19].w[0]);
    c.budget -= 1;
L_003A343C:
    set32(c.r[5], 0u + 60u);
    set32(c.r[3], 0u + 60u);
    set32(c.r[4], 0u + 60u);
    c.budget -= 5;
    if (c.r[19].d[0] == 0ull) { breakpoint(c, 0x003A344Cu);  goto L_003A3450; }
L_003A3450:
    set32(c.r[6], 0u + 60u);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.hi.d[0];
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
L_003A3480:
    st32((c.r[21].w[0] + 20u), c.r[7].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[21].w[0] + 12u), c.r[9].w[0]);
    st32((c.r[21].w[0] + 16u), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A34B8:
    c.r[13].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], 0u + 60u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] + 28u)));
    set32(c.r[10], 0u + 60u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] + 30u)));
    set32(c.r[12], 0u + 60u);
    set32(c.r[7], ld32((c.r[13].w[0] + 24u)));
    set32(c.r[11], 0u + 60u);
    set32(c.r[14], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[15], ld32((c.r[13].w[0])));
    set32(c.r[4], ld32((c.r[13].w[0] + 20u)));
    set32(c.r[2], c.r[14].w[0] >> 31);
    set32(c.r[2], c.r[14].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[15].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 16504u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[9], c.r[4].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    mmi::div(c, 0, c.r[9].w[0], c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[13].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[13].w[0] + 12u)));
    c.budget -= 27;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003A3520u);  goto L_003A3524; }
L_003A3524:
    set32(c.r[10], ld32((c.r[13].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[13].w[0] + 4u)));
    set32(c.r[14], c.r[14].w[0] - c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[9].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[8].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    mmi::div(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[10], c.r[10].w[0] + c.r[6].w[0]);  if (t) { goto L_003A358C; } }
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { st32((c.r[5].w[0]), c.r[15].w[0]);  goto L_003A3590; }
    set32(c.r[2], 0u + 10u);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x003A3574u);  goto L_003A3578; }
L_003A3578:
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  if (t) { goto L_003A358C; } }
    set32(c.r[2], 0u + 2u);
    if (c.r[3].d[0] != 0) c.r[9].d[0] = c.r[2].d[0];
    c.budget -= 2;
L_003A358C:
    st32((c.r[5].w[0]), c.r[15].w[0]);
    c.budget -= 1;
L_003A3590:
    st16((c.r[5].w[0] + 30u), static_cast<std::uint16_t>(c.r[14].w[0]));
    set32(c.r[2], ld32((c.r[13].w[0] + 4u)));
    st32((c.r[5].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 16u), c.r[7].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 20u), c.r[9].w[0]);  c.pc = t; return; }
L_003A35B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 3428u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003A367C; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 36u);
    ldl(c.r[2], (c.r[17].w[0] + 3403u));
    ldr(c.r[2], (c.r[17].w[0] + 3396u));
    ldl(c.r[3], (c.r[17].w[0] + 3411u));
    ldr(c.r[3], (c.r[17].w[0] + 3404u));
    ldl(c.r[7], (c.r[17].w[0] + 3419u));
    ldr(c.r[7], (c.r[17].w[0] + 3412u));
    ldl(c.r[8], (c.r[17].w[0] + 3427u));
    ldr(c.r[8], (c.r[17].w[0] + 3420u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 15u));
    sdr(c.r[3], (c.r[29].w[0] + 8u));
    sdl(c.r[7], (c.r[29].w[0] + 23u));
    sdr(c.r[7], (c.r[29].w[0] + 16u));
    sdl(c.r[8], (c.r[29].w[0] + 31u));
    sdr(c.r[8], (c.r[29].w[0] + 24u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3624u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A3(c, 87u, depth + 1u); else { c.pc = 0x003ACDE8u; return; } if (c.pc != 0x003A3624u) [[unlikely]] return; }
L_003A3624:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    ldl(c.r[5], (c.r[29].w[0] + 7u));
    ldr(c.r[5], (c.r[29].w[0]));
    ldl(c.r[6], (c.r[29].w[0] + 15u));
    ldr(c.r[6], (c.r[29].w[0] + 8u));
    ldl(c.r[7], (c.r[29].w[0] + 23u));
    ldr(c.r[7], (c.r[29].w[0] + 16u));
    ldl(c.r[8], (c.r[29].w[0] + 31u));
    ldr(c.r[8], (c.r[29].w[0] + 24u));
    sdl(c.r[5], (c.r[17].w[0] + 3439u));
    sdr(c.r[5], (c.r[17].w[0] + 3432u));
    sdl(c.r[6], (c.r[17].w[0] + 3447u));
    sdr(c.r[6], (c.r[17].w[0] + 3440u));
    sdl(c.r[7], (c.r[17].w[0] + 3455u));
    sdr(c.r[7], (c.r[17].w[0] + 3448u));
    sdl(c.r[8], (c.r[17].w[0] + 3463u));
    sdr(c.r[8], (c.r[17].w[0] + 3456u));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[4].w[0]);
    c.budget -= 22;
L_003A367C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A3690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    ldl(c.r[2], (c.r[16].w[0] + 3403u));
    ldr(c.r[2], (c.r[16].w[0] + 3396u));
    ldl(c.r[3], (c.r[16].w[0] + 3411u));
    ldr(c.r[3], (c.r[16].w[0] + 3404u));
    ldl(c.r[7], (c.r[16].w[0] + 3419u));
    ldr(c.r[7], (c.r[16].w[0] + 3412u));
    ldl(c.r[8], (c.r[16].w[0] + 3427u));
    ldr(c.r[8], (c.r[16].w[0] + 3420u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 15u));
    sdr(c.r[3], (c.r[29].w[0] + 8u));
    sdl(c.r[7], (c.r[29].w[0] + 23u));
    sdr(c.r[7], (c.r[29].w[0] + 16u));
    sdl(c.r[8], (c.r[29].w[0] + 31u));
    sdr(c.r[8], (c.r[29].w[0] + 24u));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A36F0u); set32(c.r[6], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_00A3(c, 87u, depth + 1u); else { c.pc = 0x003ACDE8u; return; } if (c.pc != 0x003A36F0u) [[unlikely]] return; }
L_003A36F0:
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    ldl(c.r[3], (c.r[29].w[0] + 15u));
    ldr(c.r[3], (c.r[29].w[0] + 8u));
    ldl(c.r[4], (c.r[29].w[0] + 23u));
    ldr(c.r[4], (c.r[29].w[0] + 16u));
    ldl(c.r[5], (c.r[29].w[0] + 31u));
    ldr(c.r[5], (c.r[29].w[0] + 24u));
    sdl(c.r[2], (c.r[16].w[0] + 3571u));
    sdr(c.r[2], (c.r[16].w[0] + 3564u));
    sdl(c.r[3], (c.r[16].w[0] + 3579u));
    sdr(c.r[3], (c.r[16].w[0] + 3572u));
    sdl(c.r[4], (c.r[16].w[0] + 3587u));
    sdr(c.r[4], (c.r[16].w[0] + 3580u));
    sdl(c.r[5], (c.r[16].w[0] + 3595u));
    sdr(c.r[5], (c.r[16].w[0] + 3588u));
    set32(c.r[2], c.r[16].w[0] + 3428u);
    set32(c.r[6], c.r[16].w[0] + 3560u);
    set32(c.r[16], c.r[16].w[0] + 3472u);
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    st32((c.r[6].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 31;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003A37C8; }
    ldl(c.r[7], (c.r[6].w[0] + 7u));
    ldr(c.r[7], (c.r[6].w[0]));
    ldl(c.r[8], (c.r[6].w[0] + 15u));
    ldr(c.r[8], (c.r[6].w[0] + 8u));
    ldl(c.r[2], (c.r[6].w[0] + 23u));
    ldr(c.r[2], (c.r[6].w[0] + 16u));
    ldl(c.r[3], (c.r[6].w[0] + 31u));
    ldr(c.r[3], (c.r[6].w[0] + 24u));
    sdl(c.r[7], (c.r[16].w[0] + 7u));
    sdr(c.r[7], (c.r[16].w[0]));
    sdl(c.r[8], (c.r[16].w[0] + 15u));
    sdr(c.r[8], (c.r[16].w[0] + 8u));
    sdl(c.r[2], (c.r[16].w[0] + 23u));
    sdr(c.r[2], (c.r[16].w[0] + 16u));
    sdl(c.r[3], (c.r[16].w[0] + 31u));
    sdr(c.r[3], (c.r[16].w[0] + 24u));
    ldl(c.r[7], (c.r[6].w[0] + 39u));
    ldr(c.r[7], (c.r[6].w[0] + 32u));
    set32(c.r[8], ld32((c.r[6].w[0] + 40u)));
    sdl(c.r[7], (c.r[16].w[0] + 39u));
    sdr(c.r[7], (c.r[16].w[0] + 32u));
    st32((c.r[16].w[0] + 40u), c.r[8].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 23;
L_003A37C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A37D8:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[5].w[0] + 24u), c.r[6].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 84u));
    st16((c.r[5].w[0] + 30u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[5].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  c.pc = t; return; }
L_003A3828:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 2316u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], ld32((c.r[16].w[0] + 8120u)));  if (t) { goto L_003A3930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A387Cu);  if (depth < kMaxDepth) unit_009A(c, 139u, depth + 1u); else { c.pc = 0x0038B8C8u; return; } if (c.pc != 0x003A387Cu) [[unlikely]] return; }
L_003A387C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A38A0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3894u); c.r[5].d[0] = c.r[5].d[0] | 3862ull;  if (depth < kMaxDepth) unit_009F(c, 249u, depth + 1u); else { c.pc = 0x0039E580u; return; } if (c.pc != 0x003A3894u) [[unlikely]] return; }
L_003A3894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003A3934; } }
    c.budget -= 1;
L_003A38A0:
    set32(c.r[5], c.r[29].w[0] + 4u);
    set32(c.r[6], c.r[29].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A38B0u); set32(c.r[7], c.r[29].w[0] + 12u);  if (depth < kMaxDepth) unit_009A(c, 141u, depth + 1u); else { c.pc = 0x0038B928u; return; } if (c.pc != 0x003A38B0u) [[unlikely]] return; }
L_003A38B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A38BCu); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A38BCu) [[unlikely]] return; }
L_003A38BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003A38D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 276u), 0u);  if (t) { goto L_003A3900; } }
L_003A38D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A38D8u);  if (depth < kMaxDepth) unit_009E(c, 482u, depth + 1u); else { c.pc = 0x0039BC50u; return; } if (c.pc != 0x003A38D8u) [[unlikely]] return; }
L_003A38D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  if (t) { goto L_003A38F8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[29].w[0] + 12u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003A38F8:
    if (c.r[2].d[0] == 0) c.r[3].d[0] = c.r[4].d[0];
    st32((c.r[19].w[0] + 276u), c.r[3].w[0]);
    c.budget -= 2;
L_003A3900:
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3910u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 322u, depth + 1u); else { c.pc = 0x003A3958u; return; } if (c.pc != 0x003A3910u) [[unlikely]] return; }
L_003A3910:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3924u); set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A0(c, 325u, depth + 1u); else { c.pc = 0x003A3A78u; return; } if (c.pc != 0x003A3924u) [[unlikely]] return; }
L_003A3924:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3930u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 326u, depth + 1u); else { c.pc = 0x003A3AB0u; return; } if (c.pc != 0x003A3930u) [[unlikely]] return; }
L_003A3930:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003A3934:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A3958:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3980u); c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 157u, depth + 1u); else { c.pc = 0x003A5DE0u; return; } if (c.pc != 0x003A3980u) [[unlikely]] return; }
L_003A3980:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003A3A5C; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003A3A5C; }
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[7], 0u + 512u);
    set32(c.r[3], c.r[16].w[0] + 56u);
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < 513ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[7].d[0];
    set32(c.r[18], c.r[19].w[0] + 3368u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A39C0u); st32((c.r[3].w[0] + 512u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0099(c, 60u, depth + 1u); else { c.pc = 0x00387A98u; return; } if (c.pc != 0x003A39C0u) [[unlikely]] return; }
L_003A39C0:
    set32(c.r[3], c.r[17].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);  if (t) { goto L_003A39E8; } }
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_003A39F8; } }
L_003A39E8:
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_003A39F8:
    ldl(c.r[2], (c.r[18].w[0] + 67u));
    ldr(c.r[2], (c.r[18].w[0] + 60u));
    ldl(c.r[3], (c.r[18].w[0] + 75u));
    ldr(c.r[3], (c.r[18].w[0] + 68u));
    ldl(c.r[4], (c.r[18].w[0] + 83u));
    ldr(c.r[4], (c.r[18].w[0] + 76u));
    ldl(c.r[5], (c.r[18].w[0] + 91u));
    ldr(c.r[5], (c.r[18].w[0] + 84u));
    sdl(c.r[2], (c.r[16].w[0] + 19u));
    sdr(c.r[2], (c.r[16].w[0] + 12u));
    sdl(c.r[3], (c.r[16].w[0] + 27u));
    sdr(c.r[3], (c.r[16].w[0] + 20u));
    sdl(c.r[4], (c.r[16].w[0] + 35u));
    sdr(c.r[4], (c.r[16].w[0] + 28u));
    sdl(c.r[5], (c.r[16].w[0] + 43u));
    sdr(c.r[5], (c.r[16].w[0] + 36u));
    ldl(c.r[2], (c.r[18].w[0] + 99u));
    ldr(c.r[2], (c.r[18].w[0] + 92u));
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    sdl(c.r[2], (c.r[16].w[0] + 51u));
    sdr(c.r[2], (c.r[16].w[0] + 44u));
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 25;
L_003A3A5C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A3A78:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[8], ld32((c.r[6].w[0] + 16u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    st32((c.r[4].w[0] + 32u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[8].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[5].w[0]);  c.pc = t; return; }
L_003A3AB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[13].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[12], ld32((c.r[13].w[0] + 8120u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[11], c.r[12].w[0] + 4u);
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[11].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[11].w[0] + 12u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[14], ld32((c.r[13].w[0] + 56u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[9], ld32((c.r[11].w[0] + 28u)));  if (t) { goto L_003A3B00; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | 3863ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A3B00:
    set32(c.r[5], c.r[6].w[0] + 15u);
    c.r[3].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[7].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[4], c.r[7].w[0] + 15u);
    if (c.r[3].d[0] != 0) c.r[6].d[0] = c.r[5].d[0];
    set32(c.r[3], 0u + 2u);
    if (c.r[2].d[0] != 0) c.r[7].d[0] = c.r[4].d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    c.budget -= 10;
    { const bool t = c.r[14].d[0] != c.r[3].d[0]; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 4));  if (t) { goto L_003A3B38; } }
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 10);  if (t) { goto L_003A3B48; } }
    c.budget -= 1;
L_003A3B38:
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    c.budget -= 4;
L_003A3B48:
    set32(c.r[10], c.r[2].w[0] + 64u);
    set32(c.r[3], ld32((c.r[11].w[0] + 20u)));
    set32(c.r[8], 0u + 2u);
    set32(c.r[2], ld32((c.r[11].w[0] + 24u)));
    set32(c.r[7], c.r[3].w[0] + 15u);
    c.r[5].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[6], c.r[2].w[0] + 15u);
    c.r[4].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[7].d[0];
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 13;
    { const bool t = c.r[14].d[0] != c.r[8].d[0]; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));  if (t) { goto L_003A3BA0; } }
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A3BC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[11].w[0] + 32u)));  if (t) { goto L_003A3BD8; } }
    c.budget -= 1;
L_003A3BA0:
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[11].w[0] + 32u)));  goto L_003A3BD8; }
L_003A3BC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[13].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 3864ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E580u | kUnwind; return; } [[clang::musttail]] return unit_009F(c, 249u, depth); }
L_003A3BD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A3C18; } }
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003A3C44; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[12].w[0] + 48u);
    c.budget -= 2;
L_003A3BF0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3BF0u | kUnwind; return; } goto L_003A3BF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[12].w[0] + 376u), c.r[9].w[0]);  if (t) { goto L_003A3C48; } }
    c.budget -= 1;
L_003A3C18:
    c.budget -= 2;
    if (c.r[9].sd[0] <= 0) { st32((c.r[12].w[0] + 376u), c.r[9].w[0]);  goto L_003A3C48; }
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 2;
L_003A3C28:
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3C28u | kUnwind; return; } goto L_003A3C28; } }
L_003A3C44:
    st32((c.r[12].w[0] + 376u), c.r[9].w[0]);
    c.budget -= 1;
L_003A3C48:
    set32(c.r[5], c.r[12].w[0] + 48u);
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3C58u); set32(c.r[4], c.r[12].w[0] + 384u);  if (depth < kMaxDepth) unit_00A1(c, 113u, depth + 1u); else { c.pc = 0x003A5490u; return; } if (c.pc != 0x003A3C58u) [[unlikely]] return; }
L_003A3C58:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A3C68:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[5], 0u + 47u);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3C9Cu); set32(c.r[17], ld32((c.r[16].w[0] + 8120u)));  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A3C9Cu) [[unlikely]] return; }
L_003A3C9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; set32(c.r[18], c.r[17].w[0] + 140u);  if (t) { goto L_003A3D3C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3CB0u); set32(c.r[5], 0u + 39u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A3CB0u) [[unlikely]] return; }
L_003A3CB0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[19].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 88u)));  goto L_003A3CC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A3D3C; } }
L_003A3CC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A3CD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 364u)));  if (t) { goto L_003A3D3C; } }
L_003A3CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3CD8u); set32(c.r[17], ld32((c.r[18].w[0] + 24u)));  if (depth < kMaxDepth) unit_00A0(c, 343u, depth + 1u); else { c.pc = 0x003A3EC8u; return; } if (c.pc != 0x003A3CD8u) [[unlikely]] return; }
L_003A3CD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_003A3D28; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3CECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 345u, depth + 1u); else { c.pc = 0x003A3F18u; return; } if (c.pc != 0x003A3CECu) [[unlikely]] return; }
L_003A3CEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A3D2C; } }
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3D00u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 346u, depth + 1u); else { c.pc = 0x003A3F68u; return; } if (c.pc != 0x003A3D00u) [[unlikely]] return; }
L_003A3D00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A3D2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3D10u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 339u, depth + 1u); else { c.pc = 0x003A3D60u; return; } if (c.pc != 0x003A3D10u) [[unlikely]] return; }
L_003A3D10:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003A3D2C; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3D24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 5u, depth + 1u); else { c.pc = 0x003A4048u; return; } if (c.pc != 0x003A3D24u) [[unlikely]] return; }
L_003A3D24:
    c.r[19].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003A3D28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A3D2C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3D38u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 340u, depth + 1u); else { c.pc = 0x003A3DC0u; return; } if (c.pc != 0x003A3D38u) [[unlikely]] return; }
L_003A3D38:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003A3D3C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A3D60:
    set32(c.r[2], ld32((c.r[4].w[0] + 8120u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;  if (t) { goto L_003A3DA8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003A3DB4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003A3DB4; } }
    set32(c.r[2], c.r[4].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], 0u + 1u);  goto L_003A3DB0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; return; }
L_003A3DA8:
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[5].d[0];
    c.r[6].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_003A3DB0:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_003A3DB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A3DC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[19], ld32((c.r[17].w[0] + 8120u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 272u)));
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[19].w[0] + 116u)));  if (t) { goto L_003A3E5C; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3E0Cu); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_009A(c, 143u, depth + 1u); else { c.pc = 0x0038B9F0u; return; } if (c.pc != 0x003A3E0Cu) [[unlikely]] return; }
L_003A3E0C:
    set32(c.r[18], 0u + 1u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[18].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 3648u)));  goto L_003A3E28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 5u);  if (t) { goto L_003A3E5C; } }
    c.budget -= 1;
L_003A3E28:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  goto L_003A3E50; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3E3Cu); set32(c.r[5], 0u + 73u);  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A3E3Cu) [[unlikely]] return; }
L_003A3E3C:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] ^ c.r[18].d[0];
    if (c.r[4].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 5;
L_003A3E50:
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[18].d[0];
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_003A3E5C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003A3E88; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u + 2u);  goto L_003A3EA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 116u), c.r[16].w[0]);  if (t) { goto L_003A3EA4; } }
    c.budget -= 1;
L_003A3E88:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_003A3E98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_003A3EA0; } }
L_003A3E98:
    c.r[2].d[0] = c.r[16].d[0] ^ 3ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_003A3EA0:
    st32((c.r[19].w[0] + 116u), c.r[16].w[0]);
    c.budget -= 1;
L_003A3EA4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A3EC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[4].w[0] + 13996u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] + 3648u);
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[8], c.r[4].w[0] + 3560u);  if (t) { goto L_003A3F0C; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003A3F10; }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[8].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3F08u); set32(c.r[7], ld32((c.r[8].w[0] + 40u)));  if (depth < kMaxDepth) unit_0098(c, 42u, depth + 1u); else { c.pc = 0x00381AF0u; return; } if (c.pc != 0x003A3F08u) [[unlikely]] return; }
L_003A3F08:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_003A3F0C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A3F10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A3F18:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 2564u);  if (t) { goto L_003A3F58; } }
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003A3F48; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  goto L_003A3F5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3F60; } }
    c.budget -= 1;
L_003A3F48:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  goto L_003A3F5C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003A3F58:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_003A3F5C:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_003A3F60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A3F68:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3F94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 403u, depth + 1u); else { c.pc = 0x003AB9A0u; return; } if (c.pc != 0x003A3F94u) [[unlikely]] return; }
L_003A3F94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00A1(c, 4u, depth); } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[18], c.r[16].w[0] + 2384u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[16].w[0] + 2316u);  if (t) { goto L_003A3FE8; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3FC8u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_009A(c, 101u, depth + 1u); else { c.pc = 0x0038AA00u; return; } if (c.pc != 0x003A3FC8u) [[unlikely]] return; }
L_003A3FC8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00A1(c, 4u, depth); } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 16u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_00A1(c, 3u, depth); } }
    c.budget -= 1;
L_003A3FE8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00A1(c, 3u, depth); } }
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    [[clang::musttail]] return unit_00A1(c, 1u, depth);
}

}
