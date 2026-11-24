#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0032[4096] = {
    1, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0,
    0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 23,
    0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27,
    0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 42, 0,
    43, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 48, 0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54,
    0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0,
    0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101,
    0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 111,
    0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0,
    0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0,
    0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165,
    0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221,
    0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 225, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274,
    0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302,
    0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0,
    0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0,
    0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0,
    343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    0, 351, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    356, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0,
    369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0,
    0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0,
    390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0,
    405, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0,
    0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0,
    0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0,
    0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0,
};

void unit_0032(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001E8000;
    case 2u: goto L_001E8004;
    case 3u: goto L_001E801C;
    case 4u: goto L_001E8040;
    case 5u: goto L_001E8088;
    case 6u: goto L_001E80A8;
    case 7u: goto L_001E80B8;
    case 8u: goto L_001E810C;
    case 9u: goto L_001E8180;
    case 10u: goto L_001E81AC;
    case 11u: goto L_001E81BC;
    case 12u: goto L_001E81D4;
    case 13u: goto L_001E81DC;
    case 14u: goto L_001E81E8;
    case 15u: goto L_001E8208;
    case 16u: goto L_001E821C;
    case 17u: goto L_001E8268;
    case 18u: goto L_001E828C;
    case 19u: goto L_001E82B4;
    case 20u: goto L_001E82C0;
    case 21u: goto L_001E82DC;
    case 22u: goto L_001E82F0;
    case 23u: goto L_001E82FC;
    case 24u: goto L_001E830C;
    case 25u: goto L_001E831C;
    case 26u: goto L_001E8350;
    case 27u: goto L_001E837C;
    case 28u: goto L_001E839C;
    case 29u: goto L_001E83B0;
    case 30u: goto L_001E83E0;
    case 31u: goto L_001E8404;
    case 32u: goto L_001E845C;
    case 33u: goto L_001E8464;
    case 34u: goto L_001E8480;
    case 35u: goto L_001E84C4;
    case 36u: goto L_001E84CC;
    case 37u: goto L_001E84D4;
    case 38u: goto L_001E8600;
    case 39u: goto L_001E862C;
    case 40u: goto L_001E86E0;
    case 41u: goto L_001E86F0;
    case 42u: goto L_001E86F8;
    case 43u: goto L_001E8700;
    case 44u: goto L_001E8718;
    case 45u: goto L_001E8720;
    case 46u: goto L_001E872C;
    case 47u: goto L_001E8750;
    case 48u: goto L_001E878C;
    case 49u: goto L_001E8794;
    case 50u: goto L_001E879C;
    case 51u: goto L_001E87A4;
    case 52u: goto L_001E87BC;
    case 53u: goto L_001E87E0;
    case 54u: goto L_001E87FC;
    case 55u: goto L_001E8814;
    case 56u: goto L_001E881C;
    case 57u: goto L_001E8888;
    case 58u: goto L_001E88B0;
    case 59u: goto L_001E88C0;
    case 60u: goto L_001E8930;
    case 61u: goto L_001E89A0;
    case 62u: goto L_001E8A6C;
    case 63u: goto L_001E8B60;
    case 64u: goto L_001E8B8C;
    case 65u: goto L_001E8C08;
    case 66u: goto L_001E8C18;
    case 67u: goto L_001E8C54;
    case 68u: goto L_001E8CA0;
    case 69u: goto L_001E8CB8;
    case 70u: goto L_001E8CCC;
    case 71u: goto L_001E8CE8;
    case 72u: goto L_001E8D00;
    case 73u: goto L_001E8D2C;
    case 74u: goto L_001E8D38;
    case 75u: goto L_001E8D50;
    case 76u: goto L_001E8D70;
    case 77u: goto L_001E8D80;
    case 78u: goto L_001E8D90;
    case 79u: goto L_001E8DA0;
    case 80u: goto L_001E8DB0;
    case 81u: goto L_001E8DC4;
    case 82u: goto L_001E8DCC;
    case 83u: goto L_001E8DD8;
    case 84u: goto L_001E8DF0;
    case 85u: goto L_001E8E0C;
    case 86u: goto L_001E8E74;
    case 87u: goto L_001E8E88;
    case 88u: goto L_001E8E9C;
    case 89u: goto L_001E8EB0;
    case 90u: goto L_001E8EC0;
    case 91u: goto L_001E8ED4;
    case 92u: goto L_001E8EE8;
    case 93u: goto L_001E8F00;
    case 94u: goto L_001E8F10;
    case 95u: goto L_001E8F24;
    case 96u: goto L_001E8F38;
    case 97u: goto L_001E8F64;
    case 98u: goto L_001E8F74;
    case 99u: goto L_001E8F88;
    case 100u: goto L_001E8F9C;
    case 101u: goto L_001E8FFC;
    case 102u: goto L_001E900C;
    case 103u: goto L_001E9020;
    case 104u: goto L_001E9034;
    case 105u: goto L_001E9044;
    case 106u: goto L_001E9054;
    case 107u: goto L_001E9090;
    case 108u: goto L_001E90B4;
    case 109u: goto L_001E90D8;
    case 110u: goto L_001E90E4;
    case 111u: goto L_001E90FC;
    case 112u: goto L_001E9108;
    case 113u: goto L_001E911C;
    case 114u: goto L_001E9130;
    case 115u: goto L_001E9150;
    case 116u: goto L_001E9168;
    case 117u: goto L_001E9190;
    case 118u: goto L_001E91A4;
    case 119u: goto L_001E91B0;
    case 120u: goto L_001E91B8;
    case 121u: goto L_001E91D4;
    case 122u: goto L_001E91E0;
    case 123u: goto L_001E9200;
    case 124u: goto L_001E9220;
    case 125u: goto L_001E9238;
    case 126u: goto L_001E9260;
    case 127u: goto L_001E9280;
    case 128u: goto L_001E92B0;
    case 129u: goto L_001E92C8;
    case 130u: goto L_001E92E0;
    case 131u: goto L_001E9330;
    case 132u: goto L_001E93D0;
    case 133u: goto L_001E94A0;
    case 134u: goto L_001E94DC;
    case 135u: goto L_001E94F4;
    case 136u: goto L_001E9504;
    case 137u: goto L_001E9514;
    case 138u: goto L_001E958C;
    case 139u: goto L_001E95F8;
    case 140u: goto L_001E9604;
    case 141u: goto L_001E9620;
    case 142u: goto L_001E964C;
    case 143u: goto L_001E9680;
    case 144u: goto L_001E969C;
    case 145u: goto L_001E96C8;
    case 146u: goto L_001E96E4;
    case 147u: goto L_001E9714;
    case 148u: goto L_001E9724;
    case 149u: goto L_001E9754;
    case 150u: goto L_001E9764;
    case 151u: goto L_001E9794;
    case 152u: goto L_001E97A4;
    case 153u: goto L_001E97D8;
    case 154u: goto L_001E97E8;
    case 155u: goto L_001E981C;
    case 156u: goto L_001E982C;
    case 157u: goto L_001E9860;
    case 158u: goto L_001E9870;
    case 159u: goto L_001E98A4;
    case 160u: goto L_001E98B4;
    case 161u: goto L_001E98E8;
    case 162u: goto L_001E98F8;
    case 163u: goto L_001E9928;
    case 164u: goto L_001E9950;
    case 165u: goto L_001E997C;
    case 166u: goto L_001E998C;
    case 167u: goto L_001E99B8;
    case 168u: goto L_001E99D4;
    case 169u: goto L_001E99F0;
    case 170u: goto L_001E9A04;
    case 171u: goto L_001E9A20;
    case 172u: goto L_001E9A34;
    case 173u: goto L_001E9A50;
    case 174u: goto L_001E9A64;
    case 175u: goto L_001E9A80;
    case 176u: goto L_001E9A94;
    case 177u: goto L_001E9AB0;
    case 178u: goto L_001E9AC4;
    case 179u: goto L_001E9AE0;
    case 180u: goto L_001E9AF4;
    case 181u: goto L_001E9B10;
    case 182u: goto L_001E9B24;
    case 183u: goto L_001E9B40;
    case 184u: goto L_001E9B54;
    case 185u: goto L_001E9B70;
    case 186u: goto L_001E9B88;
    case 187u: goto L_001E9B9C;
    case 188u: goto L_001E9BE0;
    case 189u: goto L_001E9C00;
    case 190u: goto L_001E9C10;
    case 191u: goto L_001E9C3C;
    case 192u: goto L_001E9C48;
    case 193u: goto L_001E9C60;
    case 194u: goto L_001E9C80;
    case 195u: goto L_001E9C90;
    case 196u: goto L_001E9D18;
    case 197u: goto L_001E9D88;
    case 198u: goto L_001E9DC0;
    case 199u: goto L_001E9E08;
    case 200u: goto L_001E9E20;
    case 201u: goto L_001E9E28;
    case 202u: goto L_001E9E30;
    case 203u: goto L_001E9E5C;
    case 204u: goto L_001E9E6C;
    case 205u: goto L_001E9E74;
    case 206u: goto L_001E9EA0;
    case 207u: goto L_001E9ED0;
    case 208u: goto L_001E9F10;
    case 209u: goto L_001E9F20;
    case 210u: goto L_001E9F5C;
    case 211u: goto L_001E9F98;
    case 212u: goto L_001E9FB8;
    case 213u: goto L_001E9FD0;
    case 214u: goto L_001E9FF4;
    case 215u: goto L_001EA010;
    case 216u: goto L_001EA030;
    case 217u: goto L_001EA060;
    case 218u: goto L_001EA0A0;
    case 219u: goto L_001EA0B0;
    case 220u: goto L_001EA0E0;
    case 221u: goto L_001EA0FC;
    case 222u: goto L_001EA10C;
    case 223u: goto L_001EA12C;
    case 224u: goto L_001EA138;
    case 225u: goto L_001EA140;
    case 226u: goto L_001EA14C;
    case 227u: goto L_001EA15C;
    case 228u: goto L_001EA1B8;
    case 229u: goto L_001EA1D4;
    case 230u: goto L_001EA1EC;
    case 231u: goto L_001EA1F8;
    case 232u: goto L_001EA238;
    case 233u: goto L_001EA268;
    case 234u: goto L_001EA280;
    case 235u: goto L_001EA2A0;
    case 236u: goto L_001EA2AC;
    case 237u: goto L_001EA2DC;
    case 238u: goto L_001EA2E4;
    case 239u: goto L_001EA310;
    case 240u: goto L_001EA33C;
    case 241u: goto L_001EA370;
    case 242u: goto L_001EA38C;
    case 243u: goto L_001EA3B8;
    case 244u: goto L_001EA3D4;
    case 245u: goto L_001EA408;
    case 246u: goto L_001EA418;
    case 247u: goto L_001EA44C;
    case 248u: goto L_001EA45C;
    case 249u: goto L_001EA48C;
    case 250u: goto L_001EA49C;
    case 251u: goto L_001EA4CC;
    case 252u: goto L_001EA4DC;
    case 253u: goto L_001EA510;
    case 254u: goto L_001EA524;
    case 255u: goto L_001EA554;
    case 256u: goto L_001EA580;
    case 257u: goto L_001EA590;
    case 258u: goto L_001EA5A0;
    case 259u: goto L_001EA5B0;
    case 260u: goto L_001EA5C0;
    case 261u: goto L_001EA5D4;
    case 262u: goto L_001EA5DC;
    case 263u: goto L_001EA600;
    case 264u: goto L_001EA60C;
    case 265u: goto L_001EA620;
    case 266u: goto L_001EA63C;
    case 267u: goto L_001EA650;
    case 268u: goto L_001EA66C;
    case 269u: goto L_001EA680;
    case 270u: goto L_001EA69C;
    case 271u: goto L_001EA6B0;
    case 272u: goto L_001EA6CC;
    case 273u: goto L_001EA6E0;
    case 274u: goto L_001EA6FC;
    case 275u: goto L_001EA718;
    case 276u: goto L_001EA730;
    case 277u: goto L_001EA748;
    case 278u: goto L_001EA76C;
    case 279u: goto L_001EA790;
    case 280u: goto L_001EA7C0;
    case 281u: goto L_001EA7CC;
    case 282u: goto L_001EA7E4;
    case 283u: goto L_001EA800;
    case 284u: goto L_001EA828;
    case 285u: goto L_001EA834;
    case 286u: goto L_001EA8A8;
    case 287u: goto L_001EA910;
    case 288u: goto L_001EA950;
    case 289u: goto L_001EA9F0;
    case 290u: goto L_001EAAA0;
    case 291u: goto L_001EAAE0;
    case 292u: goto L_001EAB38;
    case 293u: goto L_001EAB88;
    case 294u: goto L_001EABAC;
    case 295u: goto L_001EABB8;
    case 296u: goto L_001EABC8;
    case 297u: goto L_001EABD0;
    case 298u: goto L_001EABE8;
    case 299u: goto L_001EABF0;
    case 300u: goto L_001EAC00;
    case 301u: goto L_001EAC70;
    case 302u: goto L_001EAC7C;
    case 303u: goto L_001EACA0;
    case 304u: goto L_001EACCC;
    case 305u: goto L_001EAD00;
    case 306u: goto L_001EAD1C;
    case 307u: goto L_001EAD48;
    case 308u: goto L_001EAD64;
    case 309u: goto L_001EAD94;
    case 310u: goto L_001EADA4;
    case 311u: goto L_001EADD4;
    case 312u: goto L_001EADE4;
    case 313u: goto L_001EAE14;
    case 314u: goto L_001EAE24;
    case 315u: goto L_001EAE58;
    case 316u: goto L_001EAE68;
    case 317u: goto L_001EAE9C;
    case 318u: goto L_001EAEAC;
    case 319u: goto L_001EAEE0;
    case 320u: goto L_001EAEF0;
    case 321u: goto L_001EAF24;
    case 322u: goto L_001EAF34;
    case 323u: goto L_001EAF68;
    case 324u: goto L_001EAF90;
    case 325u: goto L_001EAFBC;
    case 326u: goto L_001EAFCC;
    case 327u: goto L_001EAFF8;
    case 328u: goto L_001EB014;
    case 329u: goto L_001EB030;
    case 330u: goto L_001EB044;
    case 331u: goto L_001EB060;
    case 332u: goto L_001EB074;
    case 333u: goto L_001EB090;
    case 334u: goto L_001EB0A4;
    case 335u: goto L_001EB0C0;
    case 336u: goto L_001EB0D4;
    case 337u: goto L_001EB0F0;
    case 338u: goto L_001EB104;
    case 339u: goto L_001EB120;
    case 340u: goto L_001EB134;
    case 341u: goto L_001EB150;
    case 342u: goto L_001EB164;
    case 343u: goto L_001EB180;
    case 344u: goto L_001EB198;
    case 345u: goto L_001EB1D0;
    case 346u: goto L_001EB204;
    case 347u: goto L_001EB210;
    case 348u: goto L_001EB22C;
    case 349u: goto L_001EB244;
    case 350u: goto L_001EB260;
    case 351u: goto L_001EB284;
    case 352u: goto L_001EB28C;
    case 353u: goto L_001EB294;
    case 354u: goto L_001EB2B8;
    case 355u: goto L_001EB2D0;
    case 356u: goto L_001EB300;
    case 357u: goto L_001EB314;
    case 358u: goto L_001EB31C;
    case 359u: goto L_001EB340;
    case 360u: goto L_001EB398;
    case 361u: goto L_001EB3C4;
    case 362u: goto L_001EB400;
    case 363u: goto L_001EB41C;
    case 364u: goto L_001EB42C;
    case 365u: goto L_001EB460;
    case 366u: goto L_001EB4A0;
    case 367u: goto L_001EB4C4;
    case 368u: goto L_001EB4DC;
    case 369u: goto L_001EB500;
    case 370u: goto L_001EB530;
    case 371u: goto L_001EB5A0;
    case 372u: goto L_001EB640;
    case 373u: goto L_001EB668;
    case 374u: goto L_001EB680;
    case 375u: goto L_001EB690;
    case 376u: goto L_001EB698;
    case 377u: goto L_001EB6E0;
    case 378u: goto L_001EB710;
    case 379u: goto L_001EB734;
    case 380u: goto L_001EB74C;
    case 381u: goto L_001EB754;
    case 382u: goto L_001EB79C;
    case 383u: goto L_001EB7D0;
    case 384u: goto L_001EB7E8;
    case 385u: goto L_001EB804;
    case 386u: goto L_001EB814;
    case 387u: goto L_001EB830;
    case 388u: goto L_001EB85C;
    case 389u: goto L_001EB868;
    case 390u: goto L_001EB880;
    case 391u: goto L_001EB8A0;
    case 392u: goto L_001EB8A8;
    case 393u: goto L_001EB8D0;
    case 394u: goto L_001EB910;
    case 395u: goto L_001EB930;
    case 396u: goto L_001EB940;
    case 397u: goto L_001EB954;
    case 398u: goto L_001EB968;
    case 399u: goto L_001EB998;
    case 400u: goto L_001EB9B0;
    case 401u: goto L_001EB9C4;
    case 402u: goto L_001EB9D4;
    case 403u: goto L_001EBA30;
    case 404u: goto L_001EBA64;
    case 405u: goto L_001EBA80;
    case 406u: goto L_001EBAA4;
    case 407u: goto L_001EBAD0;
    case 408u: goto L_001EBAF4;
    case 409u: goto L_001EBB10;
    case 410u: goto L_001EBB38;
    case 411u: goto L_001EBB50;
    case 412u: goto L_001EBB60;
    case 413u: goto L_001EBB68;
    case 414u: goto L_001EBB90;
    case 415u: goto L_001EBBC0;
    case 416u: goto L_001EBBEC;
    case 417u: goto L_001EBBF4;
    case 418u: goto L_001EBC20;
    case 419u: goto L_001EBC6C;
    case 420u: goto L_001EBCB0;
    case 421u: goto L_001EBCC0;
    case 422u: goto L_001EBCDC;
    case 423u: goto L_001EBCE8;
    case 424u: goto L_001EBD0C;
    case 425u: goto L_001EBD30;
    case 426u: goto L_001EBD64;
    case 427u: goto L_001EBD98;
    case 428u: goto L_001EBDB4;
    case 429u: goto L_001EBDE0;
    case 430u: goto L_001EBDFC;
    case 431u: goto L_001EBE2C;
    case 432u: goto L_001EBE38;
    case 433u: goto L_001EBE40;
    case 434u: goto L_001EBE74;
    case 435u: goto L_001EBE90;
    case 436u: goto L_001EBEC0;
    case 437u: goto L_001EBED0;
    case 438u: goto L_001EBF00;
    case 439u: goto L_001EBF10;
    case 440u: goto L_001EBF40;
    case 441u: goto L_001EBF4C;
    case 442u: goto L_001EBF54;
    case 443u: goto L_001EBF88;
    case 444u: goto L_001EBFA4;
    case 445u: goto L_001EBFD4;
    case 446u: goto L_001EBFE4;
    default: bad_entry(c, 0x001E8000u); return;
    }
L_001E8000:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E8004:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001E8020; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E801Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001E801Cu) [[unlikely]] return; }
L_001E801C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E8020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E8040:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 14;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 60u)));  goto L_001E8090; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8088u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E8088u) [[unlikely]] return; }
L_001E8088:
    st32((c.r[21].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[21].w[0] + 60u)));
    c.budget -= 2;
L_001E8090:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[21].w[0] + 64u);  goto L_001E80B0; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E80A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E80A8u) [[unlikely]] return; }
L_001E80A8:
    st32((c.r[21].w[0] + 60u), 0u);
    set32(c.r[4], c.r[21].w[0] + 64u);
    c.budget -= 2;
L_001E80B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E80B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 290u, depth + 1u); else { c.pc = 0x0020ABD0u; return; } if (c.pc != 0x001E80B8u) [[unlikely]] return; }
L_001E80B8:
    c.f[2] = ld32((c.r[21].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = ld32((c.r[21].w[0] + 64u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001E80EC; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[18], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 30u);  if (t) { goto L_001E8104; } }
L_001E80EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];
    set32(c.r[4], 0u + 30u);
    c.budget -= 6;
L_001E8104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001E8124; } }
L_001E810C:
    c.r[1].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] - 1u);  goto L_001E8124; }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[3].w[0] << (c.r[2].w[0] & 31u));  if (t) { goto L_001E812C; } }
L_001E8124:
    c.budget -= 2;
    if (c.r[4].sd[0] >= 0) { set32(c.r[2], c.r[3].w[0] << (c.r[4].w[0] & 31u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E810Cu | kUnwind; return; } goto L_001E810C; }
L_001E812C:
    c.f[2] = ld32((c.r[21].w[0] + 76u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = ld32((c.r[21].w[0] + 68u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001E8160; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[17], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 30u);  if (t) { goto L_001E8178; } }
L_001E8160:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    set32(c.r[4], 0u + 30u);
    c.budget -= 6;
L_001E8178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001E8198; } }
L_001E8180:
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] - 1u);  goto L_001E8198; }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] << (c.r[2].w[0] & 31u));  if (t) { goto L_001E81A0; } }
L_001E8198:
    c.budget -= 2;
    if (c.r[4].sd[0] >= 0) { set32(c.r[2], c.r[3].w[0] << (c.r[4].w[0] & 31u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8180u | kUnwind; return; } goto L_001E8180; }
L_001E81A0:
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E81ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 408u, depth + 1u); else { c.pc = 0x001B2F10u; return; } if (c.pc != 0x001E81ACu) [[unlikely]] return; }
L_001E81AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E81BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 408u, depth + 1u); else { c.pc = 0x001B2F10u; return; } if (c.pc != 0x001E81BCu) [[unlikely]] return; }
L_001E81BC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E82FC; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_001E82FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E81D4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 58u, depth + 1u); else { c.pc = 0x001E88B0u; return; } if (c.pc != 0x001E81D4u) [[unlikely]] return; }
L_001E81D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001E8244; } }
L_001E81DC:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_001E8220; } }
L_001E81E8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 68u));
    set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8208u); set32(c.r[6], c.r[20].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0032(c, 47u, depth + 1u); else { c.pc = 0x001E8750u; return; } if (c.pc != 0x001E8208u) [[unlikely]] return; }
L_001E8208:
    set32(c.r[3], c.r[23].w[0] + c.r[19].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E821Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 59u, depth + 1u); else { c.pc = 0x001E88C0u; return; } if (c.pc != 0x001E821Cu) [[unlikely]] return; }
L_001E821C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001E8220:
    c.f[0] = c.r[19].w[0];
    c.f[2] = ld32((c.r[21].w[0] + 64u));
    c.f[1] = ld32((c.r[21].w[0] + 72u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::cvt_w_s(c.f[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E81E8u | kUnwind; return; } goto L_001E81E8; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001E8244:
    c.f[0] = c.r[20].w[0];
    c.f[2] = ld32((c.r[21].w[0] + 76u));
    c.f[1] = ld32((c.r[21].w[0] + 68u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { mmi::mult(c, 0, c.r[20].w[0], c.r[18].w[0]); c.r[2].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E81DCu | kUnwind; return; } goto L_001E81DC; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E8268:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8268u | kUnwind; return; } goto L_001E8268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E828Cu); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001E828Cu) [[unlikely]] return; }
L_001E828C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[21].w[0] + 56u), c.r[2].w[0]);  goto L_001E82B8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 10498u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E82B4u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x001E82B4u) [[unlikely]] return; }
L_001E82B4:
    st32((c.r[21].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_001E82B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E82C0u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001E82C0u) [[unlikely]] return; }
L_001E82C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[21].w[0] + 60u), c.r[2].w[0]);  goto L_001E82E0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E82DCu); c.r[7].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 166u, depth + 1u); else { c.pc = 0x00165390u; return; } if (c.pc != 0x001E82DCu) [[unlikely]] return; }
L_001E82DC:
    st32((c.r[21].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_001E82E0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E82F0u); set32(c.r[4], ld32((c.r[2].w[0] + 64u)));  if (depth < kMaxDepth) unit_0010(c, 17u, depth + 1u); else { c.pc = 0x00160370u; return; } if (c.pc != 0x001E82F0u) [[unlikely]] return; }
L_001E82F0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E82FCu); set32(c.r[5], 0u + 63u);  if (depth < kMaxDepth) unit_0032(c, 29u, depth + 1u); else { c.pc = 0x001E83B0u; return; } if (c.pc != 0x001E82FCu) [[unlikely]] return; }
L_001E82FC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001E830C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E830Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x001E830Cu) [[unlikely]] return; }
L_001E830C:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_001E8320; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E831Cu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x001E831Cu) [[unlikely]] return; }
L_001E831C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_001E8320:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001E8350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  goto L_001E8384; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E837Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E837Cu) [[unlikely]] return; }
L_001E837C:
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 2;
L_001E8384:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001E83A4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E839Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E839Cu) [[unlikely]] return; }
L_001E839C:
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_001E83A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E83B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E8468; } }
    set32(c.r[4], 0u + 1024u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E83E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 408u, depth + 1u); else { c.pc = 0x001B2F10u; return; } if (c.pc != 0x001E83E0u) [[unlikely]] return; }
L_001E83E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 84u), c.r[17].w[0]);  goto L_001E8468; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80FF0000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[2].d[0] = c.r[7].d[0] & 16ull;
    c.budget -= 6;
L_001E8404:
    c.r[6].d[0] = c.r[7].d[0] & 231ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[2].d[0] = c.r[7].d[0] & 8ull;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != c.r[17].d[0]; c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];  if (t) { goto L_001E8430; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { goto L_001E843C; } }
L_001E8430:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_001E843C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[7].d[0] & 16ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8404u | kUnwind; return; } goto L_001E8404; }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E845Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 197u, depth + 1u); else { c.pc = 0x001659B0u; return; } if (c.pc != 0x001E845Cu) [[unlikely]] return; }
L_001E845C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8464u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 409u, depth + 1u); else { c.pc = 0x001B2F30u; return; } if (c.pc != 0x001E8464u) [[unlikely]] return; }
L_001E8464:
    st32((c.r[18].w[0] + 84u), c.r[17].w[0]);
    c.budget -= 1;
L_001E8468:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E8480:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E872C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[6].d[0] = 0ull | 65534ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 976u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E84C4u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 356u, depth + 1u); else { c.pc = 0x00207D10u; return; } if (c.pc != 0x001E84C4u) [[unlikely]] return; }
L_001E84C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E84CCu); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x001E84CCu) [[unlikely]] return; }
L_001E84CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E84D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x001E84D4u) [[unlikely]] return; }
L_001E84D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 132u));
    c.budget -= 5;
    if (c.r[5].sd[0] < 0) { set32(c.r[3], c.r[5].w[0] >> 1);  goto L_001E84F4; }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E850C; } }
L_001E84F4:
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 6;
L_001E850C:
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.r[4].d[0] = ld16((c.r[4].w[0] + 134u));
    c.f[23] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001E8534; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E8550; } }
L_001E8534:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_001E8550:
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[22] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_001E8578; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E8594; } }
L_001E8578:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_001E8594:
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.f[21] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001E85BC; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E85D8; } }
L_001E85BC:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_001E85D8:
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[20] = fp::ee::div(c.fcr31, c.f[1], c.f[3]);
    c.f[1] = ld32((c.r[16].w[0] + 80u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.f[0]);  if (t) { goto L_001E860C; } }
L_001E8600:
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.budget -= 3;
L_001E860C:
    c.f[1] = ld32((c.r[16].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8600u | kUnwind; return; } goto L_001E8600; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E862Cu); c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x001E862Cu) [[unlikely]] return; }
L_001E862C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[3] = c.r[3].w[0];
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 52u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 60u), c.f[23]);
    st32((c.r[29].w[0] + 64u), c.f[22]);
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), c.f[23]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 76u), c.f[1]);
    st32((c.r[29].w[0] + 88u), c.f[20]);
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 112u), c.f[22]);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 124u), c.f[1]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 136u), c.f[20]);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    st32((c.r[29].w[0] + 108u), c.f[21]);
    st32((c.r[29].w[0] + 132u), c.f[21]);
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E86E0u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 151u, depth + 1u); else { c.pc = 0x001615C0u; return; } if (c.pc != 0x001E86E0u) [[unlikely]] return; }
L_001E86E0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E86F0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 337u, depth + 1u); else { c.pc = 0x0015AE70u; return; } if (c.pc != 0x001E86F0u) [[unlikely]] return; }
L_001E86F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E86F8u);  if (depth < kMaxDepth) unit_0011(c, 107u, depth + 1u); else { c.pc = 0x00164CA0u; return; } if (c.pc != 0x001E86F8u) [[unlikely]] return; }
L_001E86F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8700u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0011(c, 104u, depth + 1u); else { c.pc = 0x00164C60u; return; } if (c.pc != 0x001E8700u) [[unlikely]] return; }
L_001E8700:
    set32(c.r[7], ld32((c.r[16].w[0] + 84u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 400u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8718u); set32(c.r[6], c.r[6].w[0] + 23169u);  if (depth < kMaxDepth) unit_001B(c, 210u, depth + 1u); else { c.pc = 0x0018F2E0u; return; } if (c.pc != 0x001E8718u) [[unlikely]] return; }
L_001E8718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8720u);  if (depth < kMaxDepth) unit_0011(c, 113u, depth + 1u); else { c.pc = 0x00164D10u; return; } if (c.pc != 0x001E8720u) [[unlikely]] return; }
L_001E8720:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E872Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0039(c, 362u, depth + 1u); else { c.pc = 0x00207E10u; return; } if (c.pc != 0x001E872Cu) [[unlikely]] return; }
L_001E872C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001E8750:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u - 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E878Cu); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001E878Cu) [[unlikely]] return; }
L_001E878C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E8800; } }
L_001E8794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E879Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_002A(c, 32u, depth + 1u); else { c.pc = 0x001C8450u; return; } if (c.pc != 0x001E879Cu) [[unlikely]] return; }
L_001E879C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E87E4; } }
L_001E87A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  goto L_001E87C4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E87BCu); set32(c.r[5], c.r[5].w[0] + 23182u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001E87BCu) [[unlikely]] return; }
L_001E87BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E87D4; } }
L_001E87C4:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[2].w[0] + 112u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_001E87D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E87E0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_002A(c, 34u, depth + 1u); else { c.pc = 0x001C8490u; return; } if (c.pc != 0x001E87E0u) [[unlikely]] return; }
L_001E87E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E87E4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[2].d[0] = c.r[18].sd[0] < 64ll ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E87A4u | kUnwind; return; } goto L_001E87A4; }
    set32(c.r[4], ld32((c.r[21].w[0] + 52u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E87FCu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001E87FCu) [[unlikely]] return; }
L_001E87FC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E8800:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8794u | kUnwind; return; } goto L_001E8794; }
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_001E8864; } }
L_001E8814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001E8854; } }
L_001E881C:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 112u);
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[6].w[0] - 4u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 284u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 284u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[1].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_001E8854; }
    st32((c.r[6].w[0] - 4u), c.r[5].w[0]);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 3;
L_001E8854:
    c.r[2].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E881Cu | kUnwind; return; } goto L_001E881C; }
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.budget -= 1;
L_001E8864:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8814u | kUnwind; return; } goto L_001E8814; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[2].w[0] + 112u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8888u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0032(c, 63u, depth + 1u); else { c.pc = 0x001E8B60u; return; } if (c.pc != 0x001E8888u) [[unlikely]] return; }
L_001E8888:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_001E88B0:
    set32(c.r[4], c.r[4].w[0] + 88u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { set32(c.r[6], 0u + 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00182350u | kUnwind; return; } [[clang::musttail]] return unit_0018(c, 176u, depth); }
L_001E88C0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_001E8920; } }
    c.r[3].d[0] = c.r[5].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[7].d[0] = c.r[5].d[0] & 31ull;  goto L_001E88E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8920; } }
    c.r[7].d[0] = c.r[5].d[0] & 31ull;
    c.budget -= 1;
L_001E88E0:
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { set32(c.r[6], 0u + 1u);  goto L_001E88F8; }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001E88F4; } }
    set32(c.r[7], c.r[7].w[0] - 32u);
    c.budget -= 1;
L_001E88F4:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_001E88F8:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[6], c.r[6].w[0] << (c.r[7].w[0] & 31u));  if (t) { goto L_001E890C; } }
    set32(c.r[3], c.r[5].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_001E890C:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 5;
L_001E8920:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E8930:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E898C; }
    c.r[2].d[0] = c.r[5].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));  goto L_001E8950; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E898C; } }
L_001E8950:
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], c.r[2].w[0] << 2);  goto L_001E8964; }
    set32(c.r[2], c.r[5].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 3;
L_001E8964:
    c.r[6].d[0] = c.r[5].d[0] & 31ull;
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);  if (t) { goto L_001E897C; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 88u)));  goto L_001E8980; }
    set32(c.r[6], c.r[6].w[0] - 32u);
    c.budget -= 1;
L_001E897C:
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 1;
L_001E8980:
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_001E898C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E89A0:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], 0u + 255u);  goto L_001E8B50; }
    set32(c.r[9], ld32((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 17225ull;
    set32(c.r[7], c.r[9].w[0] << 8);
    set32(c.r[8], c.r[9].w[0] << 24);
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[9].w[0] >> 8);
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[7].d[0] = c.r[3].d[0] | c.r[7].d[0];
    set32(c.r[3], c.r[9].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.budget -= 15;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[6].w[0] + 8u)));  goto L_001E89F0; }
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8B50; } }
L_001E89F0:
    set32(c.r[8], c.r[6].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[8].w[0]));
    c.r[2].d[0] = ld16((c.r[8].w[0] + 2u));
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[7], c.r[8].w[0] + 4u);  if (t) { goto L_001E8A24; } }
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[2], 0u + 63u);  goto L_001E8B50; }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E8A24; } }
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  goto L_001E8A30; }
L_001E8A24:
    set32(c.r[2], 0u + 63u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8B50; } }
L_001E8A30:
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);  if (t) { goto L_001E8A4C; } }
    set32(c.r[2], c.r[4].w[0] + 3u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_001E8A4C:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[5].d[0] = c.r[4].d[0] & 3ull;  if (t) { goto L_001E8A60; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_001E8A64; }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_001E8A60:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E8A64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001E8ACC; } }
L_001E8A6C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[8].w[0] + 1u));  goto L_001E8A7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);  if (t) { goto L_001E8AB8; } }
L_001E8A7C:
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);  goto L_001E8AA4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);  if (t) { goto L_001E8ACC; } }
L_001E8AA4:
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 2u);  if (t) { goto L_001E8ACC; } }
L_001E8AB8:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[7], c.r[8].w[0] + 1u);  goto L_001E8ACC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.budget -= 2;
L_001E8ACC:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[8].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8A6Cu | kUnwind; return; } goto L_001E8A6C; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld8((c.r[7].w[0] + 2u));  goto L_001E8B48; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[3].d[0] = ld8((c.r[7].w[0] + 1u));  goto L_001E8B2C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[3].d[0] = ld8((c.r[7].w[0]));  goto L_001E8B10; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[7].w[0]));  goto L_001E8B08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 255u);  if (t) { goto L_001E8B50; } }
L_001E8B08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 63ull;  if (t) { goto L_001E8B50; } }
L_001E8B10:
    c.r[2].d[0] = ld8((c.r[7].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 192ull;
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_001E8B50; } }
L_001E8B2C:
    c.r[2].d[0] = ld8((c.r[7].w[0] + 2u));
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_001E8B50; } }
L_001E8B48:
    c.r[2].d[0] = c.r[2].d[0] & 252ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_001E8B50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E8B60:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 11;
L_001E8B8C:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);  goto L_001E8BA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 63u);  if (t) { goto L_001E8C80; } }
L_001E8BA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[2].w[0] + 1572u));
    c.f[1] = ld32((c.r[3].w[0] + 1568u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = c.r[20].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 160u), c.f[1]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = c.r[19].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 1576u));
    c.f[1] = ld32((c.r[2].w[0] + 1580u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    st32((c.r[29].w[0] + 168u), c.f[2]);
    st32((c.r[29].w[0] + 172u), c.f[1]);
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    c.budget -= 21;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_001E8C1C; }
    set32(c.r[5], c.r[2].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C08u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001B(c, 222u, depth + 1u); else { c.pc = 0x0018F5B0u; return; } if (c.pc != 0x001E8C08u) [[unlikely]] return; }
L_001E8C08:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C18u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 229u, depth + 1u); else { c.pc = 0x0018FAB0u; return; } if (c.pc != 0x001E8C18u) [[unlikely]] return; }
L_001E8C18:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001E8C1C:
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 200u)));
    c.f[3] = ld32((c.r[2].w[0] + 184u));
    c.f[1] = ld32((c.r[2].w[0] + 188u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C54u); set32(c.r[6], ld32((c.r[3].w[0] + 184u)));  if (depth < kMaxDepth) unit_0032(c, 61u, depth + 1u); else { c.pc = 0x001E89A0u; return; } if (c.pc != 0x001E8C54u) [[unlikely]] return; }
L_001E8C54:
    set32(c.r[3], 0u + 63u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8B8Cu | kUnwind; return; } goto L_001E8B8C; }
    set32(c.r[3], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E8C74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001E8C84; } }
L_001E8C74:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8B8Cu | kUnwind; return; } goto L_001E8B8C; } }
L_001E8C80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001E8C84:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001E8CA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 282u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8CB8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001E8CB8u) [[unlikely]] return; }
L_001E8CB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8CCCu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0032(c, 76u, depth + 1u); else { c.pc = 0x001E8D70u; return; } if (c.pc != 0x001E8CCCu) [[unlikely]] return; }
L_001E8CCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x50490000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].d[0] = c.r[2].d[0] | 22349ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23200u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8CE8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001E8CE8u) [[unlikely]] return; }
L_001E8CE8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E8D00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E8D50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 14832u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8D2Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0032(c, 77u, depth + 1u); else { c.pc = 0x001E8D80u; return; } if (c.pc != 0x001E8D2Cu) [[unlikely]] return; }
L_001E8D2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8D38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001E8D38u) [[unlikely]] return; }
L_001E8D38:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001E8D54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8D50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001E8D50u) [[unlikely]] return; }
L_001E8D50:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E8D54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E8D70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E8D80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E8D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8DA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E8DA0u) [[unlikely]] return; }
L_001E8DA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E8DB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8DC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 77u, depth + 1u); else { c.pc = 0x001E8D80u; return; } if (c.pc != 0x001E8DC4u) [[unlikely]] return; }
L_001E8DC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8DCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 76u, depth + 1u); else { c.pc = 0x001E8D70u; return; } if (c.pc != 0x001E8DCCu) [[unlikely]] return; }
L_001E8DCC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8DD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E8DD8u) [[unlikely]] return; }
L_001E8DD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E8DF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E0Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x001E8E0Cu) [[unlikely]] return; }
L_001E8E0C:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E9114; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 56u)));  goto L_001E8E2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001E9134; } }
L_001E8E2C:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001E9004; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 148u);  goto L_001E8F6C; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 148u);  goto L_001E8F08; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 144u);  goto L_001E8EB8; }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[4], 0u + 132u);  goto L_001E8E6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E90DC; } }
L_001E8E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E74u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001E8E74u) [[unlikely]] return; }
L_001E8E74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.f[0] = ld32((c.r[18].w[0] + 60u));  goto L_001E8EA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E88u);  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x001E8E88u) [[unlikely]] return; }
L_001E8E88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E9Cu); c.r[7].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B7(c, 182u, depth + 1u); else { c.pc = 0x003FE040u; return; } if (c.pc != 0x001E8E9Cu) [[unlikely]] return; }
L_001E8E9C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.budget -= 2;
L_001E8EA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8EB0u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_00B7(c, 187u, depth + 1u); else { c.pc = 0x003FE0E0u; return; } if (c.pc != 0x001E8EB0u) [[unlikely]] return; }
L_001E8EB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E90D8; } }
L_001E8EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8EC0u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001E8EC0u) [[unlikely]] return; }
L_001E8EC0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 60u)));  goto L_001E8EF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8ED4u);  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x001E8ED4u) [[unlikely]] return; }
L_001E8ED4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8EE8u); c.r[7].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B7(c, 194u, depth + 1u); else { c.pc = 0x003FE330u; return; } if (c.pc != 0x001E8EE8u) [[unlikely]] return; }
L_001E8EE8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 2;
L_001E8EF0:
    set32(c.r[6], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 200u, depth + 1u); else { c.pc = 0x003FE3F0u; return; } if (c.pc != 0x001E8F00u) [[unlikely]] return; }
L_001E8F00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E90D8; } }
L_001E8F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F10u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001E8F10u) [[unlikely]] return; }
L_001E8F10:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.f[2] = ld32((c.r[18].w[0] + 60u));  goto L_001E8F40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F24u);  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x001E8F24u) [[unlikely]] return; }
L_001E8F24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F38u); c.r[7].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B7(c, 146u, depth + 1u); else { c.pc = 0x003FD710u; return; } if (c.pc != 0x001E8F38u) [[unlikely]] return; }
L_001E8F38:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.f[2] = ld32((c.r[18].w[0] + 60u));
    c.budget -= 2;
L_001E8F40:
    set32(c.r[5], ld32((c.r[18].w[0] + 72u)));
    c.f[1] = ld32((c.r[18].w[0] + 64u));
    set32(c.r[6], ld32((c.r[18].w[0] + 76u)));
    c.f[0] = ld32((c.r[18].w[0] + 68u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[2]);
    c.f[13] = fp::cvt_s_w(c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F64u); c.f[14] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_00B7(c, 153u, depth + 1u); else { c.pc = 0x003FD830u; return; } if (c.pc != 0x001E8F64u) [[unlikely]] return; }
L_001E8F64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E90D8; } }
L_001E8F6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F74u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001E8F74u) [[unlikely]] return; }
L_001E8F74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[6], ld32((c.r[18].w[0] + 72u)));  goto L_001E8FA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F88u);  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x001E8F88u) [[unlikely]] return; }
L_001E8F88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F9Cu); c.r[7].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B7(c, 232u, depth + 1u); else { c.pc = 0x003FEE80u; return; } if (c.pc != 0x001E8F9Cu) [[unlikely]] return; }
L_001E8F9C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 2;
L_001E8FA4:
    c.f[2] = ld32((c.r[18].w[0] + 60u));
    c.f[1] = ld32((c.r[18].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[0] = ld32((c.r[18].w[0] + 68u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    set32(c.r[5], c.r[3].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.r[3].d[0] = c.r[6].d[0] & 65280ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[12] = fp::cvt_s_w(c.f[2]);
    c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[13] = fp::cvt_s_w(c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8FFCu); c.f[14] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_00B7(c, 237u, depth + 1u); else { c.pc = 0x003FEF20u; return; } if (c.pc != 0x001E8FFCu) [[unlikely]] return; }
L_001E8FFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E90D8; } }
L_001E9004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E900Cu); set32(c.r[4], 0u + 1684u);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001E900Cu) [[unlikely]] return; }
L_001E900C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 76u);  goto L_001E903C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9020u);  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x001E9020u) [[unlikely]] return; }
L_001E9020:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9034u); c.r[7].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B7(c, 99u, depth + 1u); else { c.pc = 0x003FCE70u; return; } if (c.pc != 0x001E9034u) [[unlikely]] return; }
L_001E9034:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 2;
L_001E903C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9044u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002B(c, 270u, depth + 1u); else { c.pc = 0x001CE260u; return; } if (c.pc != 0x001E9044u) [[unlikely]] return; }
L_001E9044:
    set32(c.r[6], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9054u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002B(c, 254u, depth + 1u); else { c.pc = 0x001CE000u; return; } if (c.pc != 0x001E9054u) [[unlikely]] return; }
L_001E9054:
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[28].w[0] - 31912u)));  goto L_001E9064; }
    set32(c.r[6], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_001E9064:
    c.f[1] = ld32((c.r[18].w[0] + 64u));
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.f[0] = ld32((c.r[18].w[0] + 68u));
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.f[13] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E9084; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 12u);  if (t) { goto L_001E9088; } }
L_001E9084:
    set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));
    c.budget -= 1;
L_001E9088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9090u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 109u, depth + 1u); else { c.pc = 0x003FCFF0u; return; } if (c.pc != 0x001E9090u) [[unlikely]] return; }
L_001E9090:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  goto L_001E90B8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E90B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E90B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E90B4u) [[unlikely]] return; }
L_001E90B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_001E90B8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E90D8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E90D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E90D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E90D8u) [[unlikely]] return; }
L_001E90D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E90DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E90E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 89u, depth + 1u); else { c.pc = 0x003FCD40u; return; } if (c.pc != 0x001E90E4u) [[unlikely]] return; }
L_001E90E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001E9100; }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E90FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E90FCu) [[unlikely]] return; }
L_001E90FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E9100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9108u);  if (depth < kMaxDepth) unit_00B7(c, 82u, depth + 1u); else { c.pc = 0x003FCC70u; return; } if (c.pc != 0x001E9108u) [[unlikely]] return; }
L_001E9108:
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
L_001E9114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E911Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 86u, depth + 1u); else { c.pc = 0x003FCCD0u; return; } if (c.pc != 0x001E911Cu) [[unlikely]] return; }
L_001E911C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E9130; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9130u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E9130u) [[unlikely]] return; }
L_001E9130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001E9134:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E9150:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9168u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 98u, depth + 1u); else { c.pc = 0x003FCE60u; return; } if (c.pc != 0x001E9168u) [[unlikely]] return; }
L_001E9168:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E919C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001E9188; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001E9204; } }
L_001E9188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9190u);  if (depth < kMaxDepth) unit_00B7(c, 84u, depth + 1u); else { c.pc = 0x003FCCA0u; return; } if (c.pc != 0x001E9190u) [[unlikely]] return; }
L_001E9190:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
L_001E919C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E91A4u);  if (depth < kMaxDepth) unit_0030(c, 339u, depth + 1u); else { c.pc = 0x001E2D40u; return; } if (c.pc != 0x001E91A4u) [[unlikely]] return; }
L_001E91A4:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E91B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 94u, depth + 1u); else { c.pc = 0x003FCE00u; return; } if (c.pc != 0x001E91B0u) [[unlikely]] return; }
L_001E91B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E91B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 86u, depth + 1u); else { c.pc = 0x003FCCD0u; return; } if (c.pc != 0x001E91B8u) [[unlikely]] return; }
L_001E91B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E9200; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001E91F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E91D4u);  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001E91D4u) [[unlikely]] return; }
L_001E91D4:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E91E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x001E91E0u) [[unlikely]] return; }
L_001E91E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E91F4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 3;
L_001E91F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E91F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9200u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E9200u) [[unlikely]] return; }
L_001E9200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001E9204:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E9220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 283u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9238u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001E9238u) [[unlikely]] return; }
L_001E9238:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 14896u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 160u), 0u);
    st32((c.r[16].w[0] + 164u), 0u);
    st32((c.r[16].w[0] + 168u), 0u);
    st32((c.r[16].w[0] + 172u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9260u); st32((c.r[16].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x001E9260u) [[unlikely]] return; }
L_001E9260:
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull | 65535ull;
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E9280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E92C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14896u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E92B0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001E92B0u) [[unlikely]] return; }
L_001E92B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001E92CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E92C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001E92C8u) [[unlikely]] return; }
L_001E92C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E92CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E92E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E92FC; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_001E92FC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[4].w[0] + 156u), c.f[12]);  goto L_001E9318; }
    c.f[12] = c.f[0];
    st32((c.r[4].w[0] + 156u), c.f[12]);
    c.budget -= 2;
L_001E9318:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_001E9330:
    c.f[1] = ld32((c.r[4].w[0] + 156u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E9350; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_001E9350:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  goto L_001E936C; }
    c.f[1] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 2;
L_001E936C:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 164u), c.f[1]);  if (t) { goto L_001E9384; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_001E9384:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_001E93A0; }
    c.f[12] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_001E93A0:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    st32((c.r[4].w[0] + 160u), c.f[12]);
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 168u), c.f[13]);  if (t) { goto L_001E93BC; } }
    st32((c.r[4].w[0] + 168u), c.f[0]);
    c.budget -= 1;
L_001E93BC:
    st32((c.r[4].w[0] + 172u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_001E93D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E9498; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[5], c.r[3].w[0] >> 1);  goto L_001E93FC; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E9414; } }
L_001E93FC:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_001E9414:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[4].w[0] + 172u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[4].w[0] + 172u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 168u));
    c.f[0] = ld32((c.r[4].w[0] + 172u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[3] = ld32((c.r[4].w[0] + 172u));  goto L_001E944C; }
    st32((c.r[4].w[0] + 172u), c.f[1]);
    c.f[3] = ld32((c.r[4].w[0] + 172u));
    c.budget -= 2;
L_001E944C:
    c.f[2] = ld32((c.r[4].w[0] + 168u));
    c.f[4] = ld32((c.r[4].w[0] + 164u));
    c.f[0] = 0u;
    c.f[2] = fp::ee::div(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = ld32((c.r[4].w[0] + 160u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 172u));
    c.f[0] = ld32((c.r[4].w[0] + 168u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9498; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_001E9498:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E94A0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 156u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E9604; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E94DCu); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 356u, depth + 1u); else { c.pc = 0x00207D10u; return; } if (c.pc != 0x001E94DCu) [[unlikely]] return; }
L_001E94DC:
    set32(c.r[2], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[5], c.r[29].w[0] + 156u);
    set32(c.r[6], c.r[29].w[0] + 152u);
    set32(c.r[16], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E94F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 38u, depth + 1u); else { c.pc = 0x0015C3D0u; return; } if (c.pc != 0x001E94F4u) [[unlikely]] return; }
L_001E94F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 148u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9504u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0015C5C0u; return; } if (c.pc != 0x001E9504u) [[unlikely]] return; }
L_001E9504:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9514u); set32(c.r[6], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_000F(c, 49u, depth + 1u); else { c.pc = 0x0015C560u; return; } if (c.pc != 0x001E9514u) [[unlikely]] return; }
L_001E9514:
    c.f[4] = ld32((c.r[29].w[0] + 156u));
    set32(c.r[7], ld32((c.r[17].w[0] + 176u)));
    c.f[3] = ld32((c.r[29].w[0] + 148u));
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.f[2] = ld32((c.r[29].w[0] + 152u));
    set32(c.r[2], 0u + 64u);
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[4], c.r[7].w[0] >> 16);
    c.f[3] = fp::ee::div(c.fcr31, c.f[4], c.f[3]);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[6], c.r[4].w[0] << 16);
    set32(c.r[5], c.r[7].w[0] >> 8);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[5], c.r[5].w[0] << 8);
    c.f[0] = ld32((c.r[17].w[0] + 156u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[6] = ld32((c.r[29].w[0] + 140u));
    c.f[5] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[7], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[7], c.r[7].w[0] << 24);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[6], c.f[3]);
    c.r[7].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 30;
    { const bool t = c.r[3].d[0] == 0ull; c.f[1] = fp::ee::add(c.fcr31, c.f[5], c.f[1]);  if (t) { goto L_001E95A8; } }
L_001E958C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E958Cu | kUnwind; return; } goto L_001E958C; } }
L_001E95A8:
    st32((c.r[29].w[0] + 48u), c.f[6]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), c.f[6]);
    set32(c.r[5], 0u + 4u);
    st32((c.r[29].w[0] + 52u), c.f[5]);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 84u), c.f[5]);
    st32((c.r[29].w[0] + 60u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 76u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0] + 92u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 108u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E95F8u); st32((c.r[29].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_000E(c, 335u, depth + 1u); else { c.pc = 0x0015AE50u; return; } if (c.pc != 0x001E95F8u) [[unlikely]] return; }
L_001E95F8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9604u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0039(c, 362u, depth + 1u); else { c.pc = 0x00207E10u; return; } if (c.pc != 0x001E9604u) [[unlikely]] return; }
L_001E9604:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001E9620:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E964Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E964Cu) [[unlikely]] return; }
L_001E964C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E9680; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E9680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9680u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E9680u) [[unlikely]] return; }
L_001E9680:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_001E96D8; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E96D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E969Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001E969Cu) [[unlikely]] return; }
L_001E969C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E96C8; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001E96B8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E96C8; } }
L_001E96B8:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E96C8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001E96C8u) [[unlikely]] return; }
L_001E96C8:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[18].w[0] + 4u));  if (t) { goto L_001E96DC; } }
L_001E96D4:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_001E96D8:
    c.r[19].d[0] = ld16((c.r[18].w[0] + 4u));
    c.budget -= 1;
L_001E96DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E96E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E96E4u) [[unlikely]] return; }
L_001E96E4:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E9714; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E9714; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9714u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E9714u) [[unlikely]] return; }
L_001E9714:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[19], ld32((c.r[18].w[0] + 148u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9724u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E9724u) [[unlikely]] return; }
L_001E9724:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E9754; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E9754; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9754u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E9754u) [[unlikely]] return; }
L_001E9754:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[19], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9764u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E9764u) [[unlikely]] return; }
L_001E9764:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E9794; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E9794; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9794u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E9794u) [[unlikely]] return; }
L_001E9794:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 156u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E97A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E97A4u) [[unlikely]] return; }
L_001E97A4:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E97D8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E97D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E97D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E97D8u) [[unlikely]] return; }
L_001E97D8:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 160u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E97E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E97E8u) [[unlikely]] return; }
L_001E97E8:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E981C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E981C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E981Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E981Cu) [[unlikely]] return; }
L_001E981C:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 164u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E982Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E982Cu) [[unlikely]] return; }
L_001E982C:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E9860; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E9860; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9860u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E9860u) [[unlikely]] return; }
L_001E9860:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 168u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9870u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E9870u) [[unlikely]] return; }
L_001E9870:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E98A4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E98A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E98A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E98A4u) [[unlikely]] return; }
L_001E98A4:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 172u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E98B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E98B4u) [[unlikely]] return; }
L_001E98B4:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E98E8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001E98E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E98E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E98E8u) [[unlikely]] return; }
L_001E98E8:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[17], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E98F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001E98F8u) [[unlikely]] return; }
L_001E98F8:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E9928; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001E9928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9928u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001E9928u) [[unlikely]] return; }
L_001E9928:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001E9950:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[29].w[0] + 184u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E997Cu); st32((c.r[29].w[0] + 196u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x001E997Cu) [[unlikely]] return; }
L_001E997C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E998Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001E998Cu) [[unlikely]] return; }
L_001E998C:
    set32(c.r[6], ld32((c.r[29].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[29].w[0] + 184u);
    st32((c.r[29].w[0] + 184u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E99B8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E99B8u) [[unlikely]] return; }
L_001E99B8:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 172u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 184u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E99D4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E99D4u) [[unlikely]] return; }
L_001E99D4:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[5], c.r[29].w[0] + 184u);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E99F0u); st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E99F0u) [[unlikely]] return; }
L_001E99F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9A04u); st32((c.r[16].w[0] + 148u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E9A04u) [[unlikely]] return; }
L_001E9A04:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[5], c.r[29].w[0] + 184u);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9A20u); st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E9A20u) [[unlikely]] return; }
L_001E9A20:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9A34u); st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E9A34u) [[unlikely]] return; }
L_001E9A34:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[5], c.r[29].w[0] + 184u);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9A50u); st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E9A50u) [[unlikely]] return; }
L_001E9A50:
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9A64u); st32((c.r[16].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E9A64u) [[unlikely]] return; }
L_001E9A64:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[5], c.r[29].w[0] + 184u);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9A80u); st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E9A80u) [[unlikely]] return; }
L_001E9A80:
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9A94u); st32((c.r[16].w[0] + 160u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E9A94u) [[unlikely]] return; }
L_001E9A94:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[5], c.r[29].w[0] + 184u);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9AB0u); st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E9AB0u) [[unlikely]] return; }
L_001E9AB0:
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9AC4u); st32((c.r[16].w[0] + 164u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E9AC4u) [[unlikely]] return; }
L_001E9AC4:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[5], c.r[29].w[0] + 184u);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9AE0u); st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E9AE0u) [[unlikely]] return; }
L_001E9AE0:
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9AF4u); st32((c.r[16].w[0] + 168u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E9AF4u) [[unlikely]] return; }
L_001E9AF4:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[5], c.r[29].w[0] + 184u);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9B10u); st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E9B10u) [[unlikely]] return; }
L_001E9B10:
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9B24u); st32((c.r[16].w[0] + 172u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001E9B24u) [[unlikely]] return; }
L_001E9B24:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[4], c.r[29].w[0] + 40u);
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 184u);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9B40u); st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001E9B40u) [[unlikely]] return; }
L_001E9B40:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9B54u); st32((c.r[16].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001E9B54u) [[unlikely]] return; }
L_001E9B54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001E9B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 284u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9B88u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001E9B88u) [[unlikely]] return; }
L_001E9B88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9B9Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0032(c, 189u, depth + 1u); else { c.pc = 0x001E9C00u; return; } if (c.pc != 0x001E9B9Cu) [[unlikely]] return; }
L_001E9B9C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 148u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43400000u);
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[4], 0u + 256u);
    st32((c.r[16].w[0] + 156u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x58540000u);
    st32((c.r[16].w[0] + 160u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21069ull;
    st32((c.r[16].w[0] + 168u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23392u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9BE0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001E9BE0u) [[unlikely]] return; }
L_001E9BE0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E9C00:
    st32((c.r[4].w[0] + 196u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 200u), 0u);  c.pc = t; return; }
L_001E9C10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E9C60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 14960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9C3Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0032(c, 194u, depth + 1u); else { c.pc = 0x001E9C80u; return; } if (c.pc != 0x001E9C3Cu) [[unlikely]] return; }
L_001E9C3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9C48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001E9C48u) [[unlikely]] return; }
L_001E9C48:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001E9C64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9C60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001E9C60u) [[unlikely]] return; }
L_001E9C60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E9C64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E9C80:
    c.budget -= 2;
    {  goto L_001E9FD0; }
L_001E9C90:
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u - 193u);
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001E9CBC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001E9CCC; } }
L_001E9CBC:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u - 16385u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_001E9CCC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], 0u + 30u);  if (t) { goto L_001E9CF4; } }
    c.f[0] = fp::cvt_w_s(c.f[12]);
    set32(c.r[7], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001E9D10; } }
L_001E9CF4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[12], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
L_001E9D10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9D30; } }
L_001E9D18:
    c.r[1].d[0] = c.r[3].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] - 1u);  goto L_001E9D30; }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[5].w[0] << (c.r[3].w[0] & 31u));  if (t) { goto L_001E9D38; } }
L_001E9D30:
    c.budget -= 2;
    if (c.r[6].sd[0] >= 0) { set32(c.r[3], c.r[5].w[0] << (c.r[6].w[0] & 31u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E9D18u | kUnwind; return; } goto L_001E9D18; }
L_001E9D38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    st32((c.r[4].w[0] + 156u), c.r[7].w[0]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], 0u + 30u);  if (t) { goto L_001E9D64; } }
    c.f[0] = fp::cvt_w_s(c.f[13]);
    set32(c.r[7], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001E9D80; } }
L_001E9D64:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[13], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
L_001E9D80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9DA0; } }
L_001E9D88:
    c.r[1].d[0] = c.r[3].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] - 1u);  goto L_001E9DA0; }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[5].w[0] << (c.r[3].w[0] & 31u));  if (t) { goto L_001E9DA8; } }
L_001E9DA0:
    c.budget -= 2;
    if (c.r[6].sd[0] >= 0) { set32(c.r[3], c.r[5].w[0] << (c.r[6].w[0] & 31u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E9D88u | kUnwind; return; } goto L_001E9D88; }
L_001E9DA8:
    st32((c.r[4].w[0] + 160u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 148u), c.f[12]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 152u), c.f[13]);  c.pc = t; return; }
L_001E9DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E9DE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E9EB4; } }
L_001E9DE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_001E9DF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E9EB4; } }
L_001E9DF8:
    set32(c.r[4], c.r[16].w[0] + 172u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9E08u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0024(c, 210u, depth + 1u); else { c.pc = 0x001B1790u; return; } if (c.pc != 0x001E9E08u) [[unlikely]] return; }
L_001E9E08:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001E9E18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E9EB4; } }
L_001E9E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9E20u);  if (depth < kMaxDepth) unit_0032(c, 207u, depth + 1u); else { c.pc = 0x001E9ED0u; return; } if (c.pc != 0x001E9E20u) [[unlikely]] return; }
L_001E9E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9E28u);  if (depth < kMaxDepth) unit_0010(c, 57u, depth + 1u); else { c.pc = 0x00160990u; return; } if (c.pc != 0x001E9E28u) [[unlikely]] return; }
L_001E9E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9E30u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001E9E30u) [[unlikely]] return; }
L_001E9E30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 196u), c.r[2].w[0]);  goto L_001E9E60; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 156u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF3000000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 160u)));
    c.r[7].d[0] = c.r[2].d[0] | 2ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9E5Cu); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x001E9E5Cu) [[unlikely]] return; }
L_001E9E5C:
    st32((c.r[16].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 1;
L_001E9E60:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9E6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 125u, depth + 1u); else { c.pc = 0x0015D370u; return; } if (c.pc != 0x001E9E6Cu) [[unlikely]] return; }
L_001E9E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9E74u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001E9E74u) [[unlikely]] return; }
L_001E9E74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 200u), c.r[2].w[0]);  goto L_001E9EA4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 156u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF3000000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 160u)));
    c.r[7].d[0] = c.r[2].d[0] | 17ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9EA0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 105u, depth + 1u); else { c.pc = 0x0015CFA0u; return; } if (c.pc != 0x001E9EA0u) [[unlikely]] return; }
L_001E9EA0:
    st32((c.r[16].w[0] + 200u), c.r[2].w[0]);
    c.budget -= 1;
L_001E9EA4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_001E9EB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E9ED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[2] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 148u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 152u));
    c.f[12] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[4], ld32((c.r[4].w[0] + 176u)));
    c.f[13] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9F10u);  if (depth < kMaxDepth) unit_000F(c, 46u, depth + 1u); else { c.pc = 0x0015C520u; return; } if (c.pc != 0x001E9F10u) [[unlikely]] return; }
L_001E9F10:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9F20u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 48u, depth + 1u); else { c.pc = 0x0015C550u; return; } if (c.pc != 0x001E9F20u) [[unlikely]] return; }
L_001E9F20:
    c.f[2] = ld32((c.r[16].w[0] + 148u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.f[3] = c.r[3].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 152u));
    c.f[1] = c.r[2].w[0];
    c.f[12] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[13] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9F5Cu);  if (depth < kMaxDepth) unit_000F(c, 50u, depth + 1u); else { c.pc = 0x0015C580u; return; } if (c.pc != 0x001E9F5Cu) [[unlikely]] return; }
L_001E9F5C:
    c.f[2] = ld32((c.r[16].w[0] + 148u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.f[3] = c.r[3].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 152u));
    c.f[1] = c.r[2].w[0];
    c.f[12] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[13] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9F98u);  if (depth < kMaxDepth) unit_000F(c, 52u, depth + 1u); else { c.pc = 0x0015C5B0u; return; } if (c.pc != 0x001E9F98u) [[unlikely]] return; }
L_001E9F98:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.f[12] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E00000u);
    c.f[14] = c.r[3].w[0];
    c.f[15] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9FB8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 58u, depth + 1u); else { c.pc = 0x0015C620u; return; } if (c.pc != 0x001E9FB8u) [[unlikely]] return; }
L_001E9FB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E9FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EA04C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9FF4u); set32(c.r[4], c.r[16].w[0] + 172u);  if (depth < kMaxDepth) unit_0024(c, 235u, depth + 1u); else { c.pc = 0x001B1BA0u; return; } if (c.pc != 0x001E9FF4u) [[unlikely]] return; }
L_001E9FF4:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 200u)));  goto L_001EA018; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA010u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EA010u) [[unlikely]] return; }
L_001EA010:
    st32((c.r[16].w[0] + 196u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 200u)));
    c.budget -= 2;
L_001EA018:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 3u);  goto L_001EA038; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA030u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EA030u) [[unlikely]] return; }
L_001EA030:
    st32((c.r[16].w[0] + 200u), 0u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 2;
L_001EA038:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[16].w[0] + 168u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_001EA04C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EA060:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 168u)));  goto L_001EA084; }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u - 65u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 168u)));
    c.budget -= 5;
L_001EA084:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EA094; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 2;
L_001EA094:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EA0A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EA0B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EA0E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA0E0u);  if (depth < kMaxDepth) unit_0032(c, 213u, depth + 1u); else { c.pc = 0x001E9FD0u; return; } if (c.pc != 0x001EA0E0u) [[unlikely]] return; }
L_001EA0E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001EA2F4; } }
L_001EA0E8:
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_001EA118; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA0FCu);  if (depth < kMaxDepth) unit_0032(c, 198u, depth + 1u); else { c.pc = 0x001E9DC0u; return; } if (c.pc != 0x001EA0FCu) [[unlikely]] return; }
L_001EA0FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EA114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA10Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 213u, depth + 1u); else { c.pc = 0x001E9FD0u; return; } if (c.pc != 0x001EA10Cu) [[unlikely]] return; }
L_001EA10C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001EA2F4; } }
L_001EA114:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_001EA118:
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 196u)));  goto L_001EA2F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA12Cu);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x001EA12Cu) [[unlikely]] return; }
L_001EA12C:
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA138u); st32((c.r[28].w[0] - 31436u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x001EA138u) [[unlikely]] return; }
L_001EA138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA140u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x001EA140u) [[unlikely]] return; }
L_001EA140:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA14Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 290u, depth + 1u); else { c.pc = 0x0020ABD0u; return; } if (c.pc != 0x001EA14Cu) [[unlikely]] return; }
L_001EA14C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[6].w[0] + 1712u);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
L_001EA15C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EA15Cu | kUnwind; return; } goto L_001EA15C; } }
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA1B8u); st32((c.r[29].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001EA1B8u) [[unlikely]] return; }
L_001EA1B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[7], 0u + 1u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA1D4u); st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_000E(c, 334u, depth + 1u); else { c.pc = 0x0015AE40u; return; } if (c.pc != 0x001EA1D4u) [[unlikely]] return; }
L_001EA1D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));  goto L_001EA260; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA1ECu); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001EA1ECu) [[unlikely]] return; }
L_001EA1EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA1F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 307u, depth + 1u); else { c.pc = 0x001CA950u; return; } if (c.pc != 0x001EA1F8u) [[unlikely]] return; }
L_001EA1F8:
    set32(c.r[16], ld32((c.r[16].w[0] + 980u)));
    c.f[0] = ld32((c.r[17].w[0] + 164u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[21] = ld32((c.r[16].w[0] + 240u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = ld32((c.r[16].w[0] + 244u));
    st32((c.r[16].w[0] + 240u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 164u));
    st32((c.r[16].w[0] + 244u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA238u); st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 414u, depth + 1u); else { c.pc = 0x0020BFF0u; return; } if (c.pc != 0x001EA238u) [[unlikely]] return; }
L_001EA238:
    st32((c.r[16].w[0] + 240u), c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 244u), c.f[20]);
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 10;
L_001EA260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA268u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001EA268u) [[unlikely]] return; }
L_001EA268:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[3], 0u + 4u);
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA280u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001EA280u) [[unlikely]] return; }
L_001EA280:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA2A0u); st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000E(c, 334u, depth + 1u); else { c.pc = 0x0015AE40u; return; } if (c.pc != 0x001EA2A0u) [[unlikely]] return; }
L_001EA2A0:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA2ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001EA2ACu) [[unlikely]] return; }
L_001EA2AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA2DCu); c.r[9].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EA2DCu) [[unlikely]] return; }
L_001EA2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA2E4u);  if (depth < kMaxDepth) unit_0024(c, 190u, depth + 1u); else { c.pc = 0x001B15B0u; return; } if (c.pc != 0x001EA2E4u) [[unlikely]] return; }
L_001EA2E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    c.budget -= 4;
L_001EA2F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001EA310:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA33Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EA33Cu) [[unlikely]] return; }
L_001EA33C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EA370; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EA370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA370u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EA370u) [[unlikely]] return; }
L_001EA370:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_001EA3C8; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EA3C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA38Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001EA38Cu) [[unlikely]] return; }
L_001EA38C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001EA3B8; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001EA3A8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA3B8; } }
L_001EA3A8:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA3B8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001EA3B8u) [[unlikely]] return; }
L_001EA3B8:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[18].w[0] + 148u));  if (t) { goto L_001EA3CC; } }
L_001EA3C4:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_001EA3C8:
    c.f[20] = ld32((c.r[18].w[0] + 148u));
    c.budget -= 1;
L_001EA3CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA3D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EA3D4u) [[unlikely]] return; }
L_001EA3D4:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EA408; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EA408; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA408u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EA408u) [[unlikely]] return; }
L_001EA408:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 152u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA418u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EA418u) [[unlikely]] return; }
L_001EA418:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EA44C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EA44C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA44Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EA44Cu) [[unlikely]] return; }
L_001EA44C:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[19], ld32((c.r[18].w[0] + 156u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA45Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EA45Cu) [[unlikely]] return; }
L_001EA45C:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EA48C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EA48C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA48Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EA48Cu) [[unlikely]] return; }
L_001EA48C:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[19], ld32((c.r[18].w[0] + 160u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA49Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EA49Cu) [[unlikely]] return; }
L_001EA49C:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EA4CC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EA4CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA4CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EA4CCu) [[unlikely]] return; }
L_001EA4CC:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 164u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA4DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EA4DCu) [[unlikely]] return; }
L_001EA4DC:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EA510; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EA510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA510u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EA510u) [[unlikely]] return; }
L_001EA510:
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA524u); c.r[17].d[0] = c.r[2].d[0] & 65280ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EA524u) [[unlikely]] return; }
L_001EA524:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EA554; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001EA554; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA554u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EA554u) [[unlikely]] return; }
L_001EA554:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001EA580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA590u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001EA590u) [[unlikely]] return; }
L_001EA590:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EA5A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA5B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001EA5B0u) [[unlikely]] return; }
L_001EA5B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EA5C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA5D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 194u, depth + 1u); else { c.pc = 0x001E9C80u; return; } if (c.pc != 0x001EA5D4u) [[unlikely]] return; }
L_001EA5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA5DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 189u, depth + 1u); else { c.pc = 0x001E9C00u; return; } if (c.pc != 0x001EA5DCu) [[unlikely]] return; }
L_001EA5DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA600u); st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001EA600u) [[unlikely]] return; }
L_001EA600:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA60Cu); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EA60Cu) [[unlikely]] return; }
L_001EA60C:
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA620u); st32((c.r[16].w[0] + 148u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EA620u) [[unlikely]] return; }
L_001EA620:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[5], c.r[29].w[0] + 120u);
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA63Cu); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EA63Cu) [[unlikely]] return; }
L_001EA63C:
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], c.r[29].w[0] + 120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA650u); st32((c.r[16].w[0] + 152u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EA650u) [[unlikely]] return; }
L_001EA650:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[5], c.r[29].w[0] + 120u);
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA66Cu); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EA66Cu) [[unlikely]] return; }
L_001EA66C:
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[29].w[0] + 120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA680u); st32((c.r[16].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EA680u) [[unlikely]] return; }
L_001EA680:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[5], c.r[29].w[0] + 120u);
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA69Cu); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EA69Cu) [[unlikely]] return; }
L_001EA69C:
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[5], c.r[29].w[0] + 120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA6B0u); st32((c.r[16].w[0] + 160u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EA6B0u) [[unlikely]] return; }
L_001EA6B0:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[5], c.r[29].w[0] + 120u);
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA6CCu); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EA6CCu) [[unlikely]] return; }
L_001EA6CC:
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[4], c.r[29].w[0] + 40u);
    set32(c.r[5], c.r[29].w[0] + 120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA6E0u); st32((c.r[16].w[0] + 164u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EA6E0u) [[unlikely]] return; }
L_001EA6E0:
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[5], c.r[29].w[0] + 120u);
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA6FCu); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EA6FCu) [[unlikely]] return; }
L_001EA6FC:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 36u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA718u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001EA718u) [[unlikely]] return; }
L_001EA718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001EA730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 285u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA748u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001EA748u) [[unlikely]] return; }
L_001EA748:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 15024u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 160u), 0u);
    st32((c.r[16].w[0] + 164u), 0u);
    st32((c.r[16].w[0] + 168u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA76Cu); st32((c.r[16].w[0] + 172u), 0u);  if (depth < kMaxDepth) unit_0024(c, 206u, depth + 1u); else { c.pc = 0x001B1730u; return; } if (c.pc != 0x001EA76Cu) [[unlikely]] return; }
L_001EA76C:
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 152u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EA790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EA7E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 15024u);
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA7C0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0032(c, 283u, depth + 1u); else { c.pc = 0x001EA800u; return; } if (c.pc != 0x001EA7C0u) [[unlikely]] return; }
L_001EA7C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA7CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001EA7CCu) [[unlikely]] return; }
L_001EA7CC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001EA7E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA7E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001EA7E4u) [[unlikely]] return; }
L_001EA7E4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001EA7E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EA800:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 284u);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA828u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001EA828u) [[unlikely]] return; }
L_001EA828:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA834u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001EA834u) [[unlikely]] return; }
L_001EA834:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EA928; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EA858; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_001EA858:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[18].w[0] + 156u), c.f[20]);  goto L_001EA874; }
    c.f[20] = c.f[0];
    st32((c.r[18].w[0] + 156u), c.f[20]);
    c.budget -= 2;
L_001EA874:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EA8D0; } }
    c.f[1] = ld32((c.r[18].w[0] + 156u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EA8D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA8A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 213u, depth + 1u); else { c.pc = 0x001E9FD0u; return; } if (c.pc != 0x001EA8A8u) [[unlikely]] return; }
L_001EA8A8:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[3], 0u - 16385u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001EA928; } }
L_001EA8D0:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_001EA92C; }
    c.f[1] = ld32((c.r[18].w[0] + 156u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EA928; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43400000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA910u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0032(c, 195u, depth + 1u); else { c.pc = 0x001E9C90u; return; } if (c.pc != 0x001EA910u) [[unlikely]] return; }
L_001EA910:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
L_001EA928:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001EA92C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EA950:
    c.f[1] = ld32((c.r[4].w[0] + 156u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EA970; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_001EA970:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  goto L_001EA98C; }
    c.f[1] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 2;
L_001EA98C:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 164u), c.f[1]);  if (t) { goto L_001EA9A4; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_001EA9A4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_001EA9C0; }
    c.f[12] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_001EA9C0:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    st32((c.r[4].w[0] + 160u), c.f[12]);
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 168u), c.f[13]);  if (t) { goto L_001EA9DC; } }
    st32((c.r[4].w[0] + 168u), c.f[0]);
    c.budget -= 1;
L_001EA9DC:
    st32((c.r[4].w[0] + 172u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_001EA9F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EAAC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001EAA28; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001EAA40; } }
L_001EAA28:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_001EAA40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[16].w[0] + 172u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[2].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[16].w[0] + 172u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 168u));
    c.f[0] = ld32((c.r[16].w[0] + 172u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[3] = ld32((c.r[16].w[0] + 172u));  goto L_001EAA78; }
    st32((c.r[16].w[0] + 172u), c.f[1]);
    c.f[3] = ld32((c.r[16].w[0] + 172u));
    c.budget -= 2;
L_001EAA78:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[16].w[0] + 168u));
    c.f[4] = ld32((c.r[16].w[0] + 164u));
    c.f[0] = 0u;
    c.f[2] = fp::ee::div(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = ld32((c.r[16].w[0] + 160u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAAA0u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0032(c, 283u, depth + 1u); else { c.pc = 0x001EA800u; return; } if (c.pc != 0x001EAAA0u) [[unlikely]] return; }
L_001EAAA0:
    c.f[1] = ld32((c.r[16].w[0] + 172u));
    c.f[0] = ld32((c.r[16].w[0] + 168u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001EAACC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_001EAAC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001EAACC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EAAE0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EAC7C; } }
    c.f[1] = ld32((c.r[16].w[0] + 156u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], 0u + 284u);  goto L_001EAB30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001EAC80; } }
    set32(c.r[4], 0u + 284u);
    c.budget -= 1;
L_001EAB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAB38u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001EAB38u) [[unlikely]] return; }
L_001EAB38:
    c.f[0] = ld32((c.r[16].w[0] + 156u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[4] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 164u), c.f[4]);
    c.f[1] = ld32((c.r[2].w[0] + 148u));
    c.f[0] = ld32((c.r[2].w[0] + 152u));
    c.f[2] = ld32((c.r[2].w[0] + 156u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.f[21] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 160u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAB88u);  if (depth < kMaxDepth) unit_0032(c, 219u, depth + 1u); else { c.pc = 0x001EA0B0u; return; } if (c.pc != 0x001EAB88u) [[unlikely]] return; }
L_001EAB88:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001EAC7C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EABACu); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 356u, depth + 1u); else { c.pc = 0x00207D10u; return; } if (c.pc != 0x001EABACu) [[unlikely]] return; }
L_001EABAC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EABB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 290u, depth + 1u); else { c.pc = 0x0020ABD0u; return; } if (c.pc != 0x001EABB8u) [[unlikely]] return; }
L_001EABB8:
    set32(c.r[16], ld32((c.r[28].w[0] - 31436u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EABC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 151u, depth + 1u); else { c.pc = 0x001615C0u; return; } if (c.pc != 0x001EABC8u) [[unlikely]] return; }
L_001EABC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EABD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x001EABD0u) [[unlikely]] return; }
L_001EABD0:
    set32(c.r[3], ld32((c.r[16].w[0] + 352u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 85u));
    c.r[2].d[0] = c.r[2].d[0] & 248ull;
    st8((c.r[3].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EABE8u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 149u, depth + 1u); else { c.pc = 0x001615A0u; return; } if (c.pc != 0x001EABE8u) [[unlikely]] return; }
L_001EABE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EABF0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x001EABF0u) [[unlikely]] return; }
L_001EABF0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[6].w[0] + 1792u);
    set32(c.r[4], 0u + 12u);
    c.budget -= 4;
L_001EAC00:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EAC00u | kUnwind; return; } goto L_001EAC00; } }
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[5], 0u + 4u);
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 92u), c.f[0]);
    st32((c.r[29].w[0] + 140u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    st32((c.r[29].w[0] + 104u), c.f[20]);
    st32((c.r[29].w[0] + 152u), c.f[20]);
    st32((c.r[29].w[0] + 124u), c.f[21]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAC70u); st32((c.r[29].w[0] + 148u), c.f[21]);  if (depth < kMaxDepth) unit_000E(c, 337u, depth + 1u); else { c.pc = 0x0015AE70u; return; } if (c.pc != 0x001EAC70u) [[unlikely]] return; }
L_001EAC70:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAC7Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0039(c, 362u, depth + 1u); else { c.pc = 0x00207E10u; return; } if (c.pc != 0x001EAC7Cu) [[unlikely]] return; }
L_001EAC7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001EAC80:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001EACA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EACCCu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EACCCu) [[unlikely]] return; }
L_001EACCC:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EAD00; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EAD00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAD00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EAD00u) [[unlikely]] return; }
L_001EAD00:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_001EAD58; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EAD54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAD1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001EAD1Cu) [[unlikely]] return; }
L_001EAD1C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001EAD48; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001EAD38; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EAD48; } }
L_001EAD38:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAD48u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001EAD48u) [[unlikely]] return; }
L_001EAD48:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[18].w[0] + 4u));  if (t) { goto L_001EAD5C; } }
L_001EAD54:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_001EAD58:
    c.r[19].d[0] = ld16((c.r[18].w[0] + 4u));
    c.budget -= 1;
L_001EAD5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAD64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EAD64u) [[unlikely]] return; }
L_001EAD64:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EAD94; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EAD94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAD94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EAD94u) [[unlikely]] return; }
L_001EAD94:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[19], ld32((c.r[18].w[0] + 148u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EADA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EADA4u) [[unlikely]] return; }
L_001EADA4:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EADD4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EADD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EADD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EADD4u) [[unlikely]] return; }
L_001EADD4:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[19], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EADE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EADE4u) [[unlikely]] return; }
L_001EADE4:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EAE14; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EAE14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAE14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EAE14u) [[unlikely]] return; }
L_001EAE14:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 156u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAE24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EAE24u) [[unlikely]] return; }
L_001EAE24:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EAE58; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EAE58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAE58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EAE58u) [[unlikely]] return; }
L_001EAE58:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 160u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAE68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EAE68u) [[unlikely]] return; }
L_001EAE68:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EAE9C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EAE9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAE9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EAE9Cu) [[unlikely]] return; }
L_001EAE9C:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 164u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAEACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EAEACu) [[unlikely]] return; }
L_001EAEAC:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EAEE0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EAEE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAEE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EAEE0u) [[unlikely]] return; }
L_001EAEE0:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 168u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAEF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EAEF0u) [[unlikely]] return; }
L_001EAEF0:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EAF24; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EAF24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAF24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EAF24u) [[unlikely]] return; }
L_001EAF24:
    st32((c.r[17].w[0] + 8u), 0u);
    c.f[20] = ld32((c.r[18].w[0] + 172u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAF34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EAF34u) [[unlikely]] return; }
L_001EAF34:
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EAF68; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001EAF68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAF68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EAF68u) [[unlikely]] return; }
L_001EAF68:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001EAF90:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[29].w[0] + 168u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAFBCu); st32((c.r[29].w[0] + 180u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 91u, depth + 1u); else { c.pc = 0x001A8E70u; return; } if (c.pc != 0x001EAFBCu) [[unlikely]] return; }
L_001EAFBC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAFCCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 113u, depth + 1u); else { c.pc = 0x001A9190u; return; } if (c.pc != 0x001EAFCCu) [[unlikely]] return; }
L_001EAFCC:
    set32(c.r[6], ld32((c.r[29].w[0] + 160u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[29].w[0] + 168u);
    st32((c.r[29].w[0] + 168u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAFF8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EAFF8u) [[unlikely]] return; }
L_001EAFF8:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 156u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 168u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB014u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EB014u) [[unlikely]] return; }
L_001EB014:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[5], c.r[29].w[0] + 168u);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB030u); st32((c.r[29].w[0] + 172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EB030u) [[unlikely]] return; }
L_001EB030:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB044u); st32((c.r[16].w[0] + 148u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EB044u) [[unlikely]] return; }
L_001EB044:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[5], c.r[29].w[0] + 168u);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB060u); st32((c.r[29].w[0] + 172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EB060u) [[unlikely]] return; }
L_001EB060:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB074u); st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EB074u) [[unlikely]] return; }
L_001EB074:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[5], c.r[29].w[0] + 168u);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB090u); st32((c.r[29].w[0] + 172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EB090u) [[unlikely]] return; }
L_001EB090:
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB0A4u); st32((c.r[16].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EB0A4u) [[unlikely]] return; }
L_001EB0A4:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[5], c.r[29].w[0] + 168u);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB0C0u); st32((c.r[29].w[0] + 172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EB0C0u) [[unlikely]] return; }
L_001EB0C0:
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB0D4u); st32((c.r[16].w[0] + 160u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EB0D4u) [[unlikely]] return; }
L_001EB0D4:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[5], c.r[29].w[0] + 168u);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB0F0u); st32((c.r[29].w[0] + 172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EB0F0u) [[unlikely]] return; }
L_001EB0F0:
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB104u); st32((c.r[16].w[0] + 164u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EB104u) [[unlikely]] return; }
L_001EB104:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[5], c.r[29].w[0] + 168u);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB120u); st32((c.r[29].w[0] + 172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EB120u) [[unlikely]] return; }
L_001EB120:
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB134u); st32((c.r[16].w[0] + 168u), c.f[0]);  if (depth < kMaxDepth) unit_0022(c, 123u, depth + 1u); else { c.pc = 0x001A9390u; return; } if (c.pc != 0x001EB134u) [[unlikely]] return; }
L_001EB134:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[4], c.r[29].w[0] + 40u);
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 168u);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB150u); st32((c.r[29].w[0] + 172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 96u, depth + 1u); else { c.pc = 0x001A8F30u; return; } if (c.pc != 0x001EB150u) [[unlikely]] return; }
L_001EB150:
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB164u); st32((c.r[16].w[0] + 172u), c.f[0]);  if (depth < kMaxDepth) unit_002B(c, 390u, depth + 1u); else { c.pc = 0x001CF810u; return; } if (c.pc != 0x001EB164u) [[unlikely]] return; }
L_001EB164:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001EB180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 280u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB198u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001EB198u) [[unlikely]] return; }
L_001EB198:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 15088u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 148u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 152u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EB1D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EB244; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 15088u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 148u)));  if (t) { goto L_001EB214; } }
L_001EB204:
    set32(c.r[16], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB210u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0032(c, 366u, depth + 1u); else { c.pc = 0x001EB4A0u; return; } if (c.pc != 0x001EB210u) [[unlikely]] return; }
L_001EB210:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EB214:
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EB204u | kUnwind; return; } goto L_001EB204; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB22Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001EB22Cu) [[unlikely]] return; }
L_001EB22C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_001EB248; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB244u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001EB244u) [[unlikely]] return; }
L_001EB244:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001EB248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EB260:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001EB2DC; } }
L_001EB284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB28Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 370u, depth + 1u); else { c.pc = 0x001EB530u; return; } if (c.pc != 0x001EB28Cu) [[unlikely]] return; }
L_001EB28C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB294u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 369u, depth + 1u); else { c.pc = 0x001EB500u; return; } if (c.pc != 0x001EB294u) [[unlikely]] return; }
L_001EB294:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = c.r[17].d[0] + 0ull;  goto L_001EB2D8; }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  goto L_001EB2C0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB2B8u); st32((c.r[18].w[0] + 148u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0032(c, 366u, depth + 1u); else { c.pc = 0x001EB4A0u; return; } if (c.pc != 0x001EB2B8u) [[unlikely]] return; }
L_001EB2B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 148u)));  if (t) { goto L_001EB2DC; } }
L_001EB2C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB2D0u); st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0032(c, 366u, depth + 1u); else { c.pc = 0x001EB4A0u; return; } if (c.pc != 0x001EB2D0u) [[unlikely]] return; }
L_001EB2D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 44u)));  if (t) { goto L_001EB2DC; } }
L_001EB2D8:
    set32(c.r[17], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_001EB2DC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EB284u | kUnwind; return; } goto L_001EB284; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EB300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 148u)));  if (t) { goto L_001EB320; } }
L_001EB314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB31Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 378u, depth + 1u); else { c.pc = 0x001EB710u; return; } if (c.pc != 0x001EB31Cu) [[unlikely]] return; }
L_001EB31C:
    set32(c.r[16], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_001EB320:
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EB314u | kUnwind; return; } goto L_001EB314; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EB340:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 152u)));
    c.f[24] = c.f[12];
    c.f[23] = c.f[13];
    c.f[22] = c.f[14];
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[4].w[0] + 152u), c.r[2].w[0]);
    c.f[21] = c.f[15];
    c.f[20] = c.f[16];
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB398u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001EB398u) [[unlikely]] return; }
L_001EB398:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 148u)));  goto L_001EB3C8; }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.f[24];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[23];
    c.f[14] = c.f[22];
    c.f[15] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB3C4u); c.f[16] = c.f[20];  if (depth < kMaxDepth) unit_0032(c, 365u, depth + 1u); else { c.pc = 0x001EB460u; return; } if (c.pc != 0x001EB3C4u) [[unlikely]] return; }
L_001EB3C4:
    set32(c.r[3], ld32((c.r[18].w[0] + 148u)));
    c.budget -= 1;
L_001EB3C8:
    st32((c.r[2].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 148u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001EB400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EB440; } }
L_001EB41C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[16], ld32((c.r[16].w[0] + 44u)));  goto L_001EB440; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB42Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 369u, depth + 1u); else { c.pc = 0x001EB500u; return; } if (c.pc != 0x001EB42Cu) [[unlikely]] return; }
L_001EB42C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB43C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EB44C; } }
L_001EB43C:
    set32(c.r[16], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_001EB440:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EB41Cu | kUnwind; return; } goto L_001EB41C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EB44C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EB460:
    st32((c.r[4].w[0] + 40u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st32((c.r[4].w[0] + 4u), c.f[12]);
    st32((c.r[4].w[0] + 8u), c.f[13]);
    st32((c.r[4].w[0] + 12u), c.f[14]);
    st32((c.r[4].w[0] + 16u), c.f[15]);
    st32((c.r[4].w[0] + 20u), c.f[16]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), 0u);  c.pc = t; return; }
L_001EB4A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EB4DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB4C4u);  if (depth < kMaxDepth) unit_0032(c, 378u, depth + 1u); else { c.pc = 0x001EB710u; return; } if (c.pc != 0x001EB4C4u) [[unlikely]] return; }
L_001EB4C4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001EB4E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB4DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001EB4DCu) [[unlikely]] return; }
L_001EB4DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001EB4E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EB500:
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EB528; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EB528:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EB530:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EB560; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001EB57C; } }
L_001EB560:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_001EB57C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[2].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB5A0u); st32((c.r[17].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_0032(c, 369u, depth + 1u); else { c.pc = 0x001EB500u; return; } if (c.pc != 0x001EB5A0u) [[unlikely]] return; }
L_001EB5A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001EB6F8; }
    c.f[4] = ld32((c.r[17].w[0] + 4u));
    c.f[3] = ld32((c.r[17].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[17].w[0] + 8u));  goto L_001EB5D8; }
    c.f[20] = fp::ee::div(c.fcr31, c.f[3], c.f[4]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB62C; } }
L_001EB5D8:
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[17].w[0] + 12u));  goto L_001EB5F8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 16u));  if (t) { goto L_001EB630; } }
L_001EB5F8:
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EB628; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_001EB62C; } }
L_001EB628:
    c.f[20] = 0u;
    c.budget -= 1;
L_001EB62C:
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.budget -= 1;
L_001EB630:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB640u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x001EB640u) [[unlikely]] return; }
L_001EB640:
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB668u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0019(c, 15u, depth + 1u); else { c.pc = 0x00184440u; return; } if (c.pc != 0x001EB668u) [[unlikely]] return; }
L_001EB668:
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    set32(c.r[4], 0u + 261u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB680u); st32((c.r[17].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001EB680u) [[unlikely]] return; }
L_001EB680:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB690u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001EB690u) [[unlikely]] return; }
L_001EB690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EB6E4; } }
L_001EB698:
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = ld32((c.r[6].w[0] + 208u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 208u), c.f[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[6].w[0] + 292u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[6].w[0] + 212u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 212u), c.f[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[6].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB6E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001EB6E0u) [[unlikely]] return; }
L_001EB6E0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001EB6E4:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[6], ld32((c.r[5].w[0] + 188u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EB698u | kUnwind; return; } goto L_001EB698; }
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_001EB6F8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EB710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EB7B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB734u); set32(c.r[4], 0u + 261u);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001EB734u) [[unlikely]] return; }
L_001EB734:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001EB7B8; }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB74Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 337u, depth + 1u); else { c.pc = 0x001CACD0u; return; } if (c.pc != 0x001EB74Cu) [[unlikely]] return; }
L_001EB74C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EB7A0; } }
L_001EB754:
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = ld32((c.r[6].w[0] + 208u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 208u), c.f[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[6].w[0] + 292u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[6].w[0] + 212u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 212u), c.f[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[6].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB79Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 339u, depth + 1u); else { c.pc = 0x001CAD10u; return; } if (c.pc != 0x001EB79Cu) [[unlikely]] return; }
L_001EB79C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001EB7A0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[6], ld32((c.r[5].w[0] + 188u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EB754u | kUnwind; return; } goto L_001EB754; }
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    c.budget -= 3;
L_001EB7B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001EB7B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EB7D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 287u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB7E8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 352u, depth + 1u); else { c.pc = 0x001CF1C0u; return; } if (c.pc != 0x001EB7E8u) [[unlikely]] return; }
L_001EB7E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 15152u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB804u); set32(c.r[5], c.r[5].w[0] + 23552u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001D0A40u; return; } if (c.pc != 0x001EB804u) [[unlikely]] return; }
L_001EB804:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB814u); st32((c.r[16].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0032(c, 420u, depth + 1u); else { c.pc = 0x001EBCB0u; return; } if (c.pc != 0x001EB814u) [[unlikely]] return; }
L_001EB814:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EB830:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EB880; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 15152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB85Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0032(c, 421u, depth + 1u); else { c.pc = 0x001EBCC0u; return; } if (c.pc != 0x001EB85Cu) [[unlikely]] return; }
L_001EB85C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB868u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 358u, depth + 1u); else { c.pc = 0x001CF260u; return; } if (c.pc != 0x001EB868u) [[unlikely]] return; }
L_001EB868:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001EB884; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB880u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001EB880u) [[unlikely]] return; }
L_001EB880:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001EB884:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EB8A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 152u)));  if (t) { goto L_001EB8C0; } }
L_001EB8A8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 16u)));  goto L_001EB8C0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_001EB8C8; } }
L_001EB8C0:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EB8A8u | kUnwind; return; } goto L_001EB8A8; }
L_001EB8C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EB8D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB910u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 58u, depth + 1u); else { c.pc = 0x001EC600u; return; } if (c.pc != 0x001EB910u) [[unlikely]] return; }
L_001EB910:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], 0u + 16u);  goto L_001EB938; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB930u); set32(c.r[5], c.r[5].w[0] + 23689u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001EB930u) [[unlikely]] return; }
L_001EB930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001EB9FC; } }
L_001EB938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB940u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001EB940u) [[unlikely]] return; }
L_001EB940:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_001EB95C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB954u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 90u, depth + 1u); else { c.pc = 0x001ECA40u; return; } if (c.pc != 0x001EB954u) [[unlikely]] return; }
L_001EB954:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 2;
L_001EB95C:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB968u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 347u, depth + 1u); else { c.pc = 0x00207BE0u; return; } if (c.pc != 0x001EB968u) [[unlikely]] return; }
L_001EB968:
    set32(c.r[4], c.r[19].w[0] << 13);
    set32(c.r[3], c.r[22].w[0] << 7);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    set32(c.r[4], 0u + 261u);
    st32((c.r[2].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB998u); st32((c.r[3].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 150u, depth + 1u); else { c.pc = 0x001D1660u; return; } if (c.pc != 0x001EB998u) [[unlikely]] return; }
L_001EB998:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001EB9B0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB9B0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 329u, depth + 1u); else { c.pc = 0x001CABB0u; return; } if (c.pc != 0x001EB9B0u) [[unlikely]] return; }
L_001EB9B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 980u)));  goto L_001EB9CC; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB9C4u); set32(c.r[5], ld32((c.r[2].w[0] + 192u)));  if (depth < kMaxDepth) unit_003A(c, 412u, depth + 1u); else { c.pc = 0x0020BFA0u; return; } if (c.pc != 0x001EB9C4u) [[unlikely]] return; }
L_001EB9C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[20].w[0]);  if (t) { goto L_001EB9D8; } }
L_001EB9CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB9D4u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_003A(c, 412u, depth + 1u); else { c.pc = 0x0020BFA0u; return; } if (c.pc != 0x001EB9D4u) [[unlikely]] return; }
L_001EB9D4:
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 1;
L_001EB9D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 9;
L_001EB9FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001EBA30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA64u); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 60u, depth + 1u); else { c.pc = 0x001EC650u; return; } if (c.pc != 0x001EBA64u) [[unlikely]] return; }
L_001EBA64:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0])));  goto L_001EBA88; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA80u); set32(c.r[5], c.r[5].w[0] + 23689u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001EBA80u) [[unlikely]] return; }
L_001EBA80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001EBAA8; } }
L_001EBA88:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EBAA4; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBAA4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 226u, depth + 1u); else { c.pc = 0x003C2AA0u; return; } if (c.pc != 0x001EBAA4u) [[unlikely]] return; }
L_001EBAA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001EBAA8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001EBAD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBAF4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 60u, depth + 1u); else { c.pc = 0x001EC650u; return; } if (c.pc != 0x001EBAF4u) [[unlikely]] return; }
L_001EBAF4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0])));  goto L_001EBB18; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBB10u); set32(c.r[5], c.r[5].w[0] + 23689u);  if (depth < kMaxDepth) unit_0025(c, 321u, depth + 1u); else { c.pc = 0x001B5EF0u; return; } if (c.pc != 0x001EBB10u) [[unlikely]] return; }
L_001EBB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001EBB3C; } }
L_001EBB18:
    set32(c.r[4], ld32((c.r[3].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EBB38; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBB38u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EBB38u) [[unlikely]] return; }
L_001EBB38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001EBB3C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EBB50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[4].w[0] + 152u)));  if (t) { goto L_001EBBA8; } }
L_001EBB60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001EBB9C; } }
L_001EBB68:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { c.r[6].d[0] = c.r[4].d[0] + 0ull;  goto L_001EBB98; }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  goto L_001EBB84; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EBB88; } }
L_001EBB84:
    st32((c.r[6].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001EBB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBB90u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0033(c, 91u, depth + 1u); else { c.pc = 0x001ECA60u; return; } if (c.pc != 0x001EBB90u) [[unlikely]] return; }
L_001EBB90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001EBBB4; } }
L_001EBB98:
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_001EBB9C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EBB68u | kUnwind; return; } goto L_001EBB68; }
    set32(c.r[7], ld32((c.r[7].w[0] + 16u)));
    c.budget -= 1;
L_001EBBA8:
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[4], ld32((c.r[7].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EBB60u | kUnwind; return; } goto L_001EBB60; }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001EBBB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001EBBC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001EBC7C; } }
L_001EBBEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001EBC2C; } }
L_001EBBF4:
    c.r[3].d[0] = ld16((c.r[3].w[0] + 348u));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = c.r[4].d[0] + 0ull;  goto L_001EBC28; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[20], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_001EBC14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[20].w[0]);  if (t) { goto L_001EBC18; } }
L_001EBC14:
    st32((c.r[16].w[0] + 12u), c.r[20].w[0]);
    c.budget -= 1;
L_001EBC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBC20u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0033(c, 91u, depth + 1u); else { c.pc = 0x001ECA60u; return; } if (c.pc != 0x001EBC20u) [[unlikely]] return; }
L_001EBC20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001EBC2C; } }
L_001EBC28:
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_001EBC2C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EBBF4u | kUnwind; return; } goto L_001EBBF4; }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[17].d[0] = c.r[18].d[0] + 0ull;  goto L_001EBC78; }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBC74; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 16u)));  if (t) { goto L_001EBC5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 152u), c.r[16].w[0]);  if (t) { goto L_001EBC60; } }
L_001EBC5C:
    st32((c.r[17].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 1;
L_001EBC60:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBC6Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0033(c, 85u, depth + 1u); else { c.pc = 0x001EC9A0u; return; } if (c.pc != 0x001EBC6Cu) [[unlikely]] return; }
L_001EBC6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EBC7C; } }
L_001EBC74:
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001EBC78:
    set32(c.r[18], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_001EBC7C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EBBECu | kUnwind; return; } goto L_001EBBEC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001EBCB0:
    st32((c.r[4].w[0] + 152u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 148u), 0u);  c.pc = t; return; }
L_001EBCC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 152u)));  if (t) { goto L_001EBCEC; } }
L_001EBCDC:
    set32(c.r[16], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBCE8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0033(c, 85u, depth + 1u); else { c.pc = 0x001EC9A0u; return; } if (c.pc != 0x001EBCE8u) [[unlikely]] return; }
L_001EBCE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001EBCEC:
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EBCDCu | kUnwind; return; } goto L_001EBCDC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001EBD14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD0Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0033(c, 85u, depth + 1u); else { c.pc = 0x001EC9A0u; return; } if (c.pc != 0x001EBD0Cu) [[unlikely]] return; }
L_001EBD0C:
    st32((c.r[17].w[0] + 148u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_001EBD14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EBD30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD64u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EBD64u) [[unlikely]] return; }
L_001EBD64:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EBD98; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EBD98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EBD98u) [[unlikely]] return; }
L_001EBD98:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[21].w[0] + 8u), 0u);  goto L_001EBDF0; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBDEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBDB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001EBDB4u) [[unlikely]] return; }
L_001EBDB4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001EBDE0; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001EBDD0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBDE0; } }
L_001EBDD0:
    set32(c.r[4], c.r[21].w[0] + 8u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBDE0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001EBDE0u) [[unlikely]] return; }
L_001EBDE0:
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 156u)));  if (t) { goto L_001EBDF4; } }
L_001EBDEC:
    st32((c.r[21].w[0] + 8u), 0u);
    c.budget -= 1;
L_001EBDF0:
    set32(c.r[18], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 1;
L_001EBDF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBDFCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EBDFCu) [[unlikely]] return; }
L_001EBDFC:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EBE2C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001EBE2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EBE2Cu) [[unlikely]] return; }
L_001EBE2C:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[17].w[0] + 152u)));  if (t) { [[clang::musttail]] return unit_0033(c, 15u, depth); } }
L_001EBE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE40u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EBE40u) [[unlikely]] return; }
L_001EBE40:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EBE74; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EBE74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EBE74u) [[unlikely]] return; }
L_001EBE74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 23714u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 8u), 0u);  goto L_001EBEC4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE90u); set32(c.r[4], c.r[4].w[0] + 23714u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001EBE90u) [[unlikely]] return; }
L_001EBE90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 23714u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001EBEC0; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[19].w[0] + 8u);  goto L_001EBEB4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBEC0; } }
L_001EBEB4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBEC0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001EBEC0u) [[unlikely]] return; }
L_001EBEC0:
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001EBEC4:
    set32(c.r[17], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBED0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EBED0u) [[unlikely]] return; }
L_001EBED0:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EBF00; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EBF00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EBF00u) [[unlikely]] return; }
L_001EBF00:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[17], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF10u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EBF10u) [[unlikely]] return; }
L_001EBF10:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EBF40; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001EBF40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EBF40u) [[unlikely]] return; }
L_001EBF40:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[20].w[0] + 8u)));  if (t) { [[clang::musttail]] return unit_0033(c, 14u, depth); } }
L_001EBF4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF54u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EBF54u) [[unlikely]] return; }
L_001EBF54:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EBF88; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001EBF88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001EBF88u) [[unlikely]] return; }
L_001EBF88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 23725u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), 0u);  goto L_001EBFD8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBFA4u); set32(c.r[4], c.r[4].w[0] + 23725u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001EBFA4u) [[unlikely]] return; }
L_001EBFA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + 23725u);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001EBFD4; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], c.r[17].w[0] + 8u);  goto L_001EBFC8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBFD4; } }
L_001EBFC8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBFD4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001EBFD4u) [[unlikely]] return; }
L_001EBFD4:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001EBFD8:
    set32(c.r[16], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBFE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 299u, depth + 1u); else { c.pc = 0x001AB0A0u; return; } if (c.pc != 0x001EBFE4u) [[unlikely]] return; }
L_001EBFE4:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0033(c, 2u, depth); } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 1;
    [[clang::musttail]] return unit_0033(c, 1u, depth);
}

}
