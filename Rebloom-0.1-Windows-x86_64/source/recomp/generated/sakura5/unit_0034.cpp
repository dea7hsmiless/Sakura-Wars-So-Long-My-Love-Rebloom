#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0034[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0,
    3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22,
    0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0,
    0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0,
    0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0,
    0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0,
    0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0,
    0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0,
    0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0,
    0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0,
    0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0,
    0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0,
    0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0,
    218, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 224, 0,
    225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0,
    0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288,
    0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 302, 0,
    0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0,
    313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 325, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0,
    0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 334,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 338, 0, 0, 339, 0, 0,
    0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 398,
    0, 0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0,
    0, 405, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0,
    0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0,
};

void unit_0034(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001F0000;
    case 2u: goto L_001F005C;
    case 3u: goto L_001F0080;
    case 4u: goto L_001F00A0;
    case 5u: goto L_001F00B0;
    case 6u: goto L_001F00C0;
    case 7u: goto L_001F00E0;
    case 8u: goto L_001F0108;
    case 9u: goto L_001F011C;
    case 10u: goto L_001F0138;
    case 11u: goto L_001F0170;
    case 12u: goto L_001F01B4;
    case 13u: goto L_001F01C4;
    case 14u: goto L_001F01DC;
    case 15u: goto L_001F0200;
    case 16u: goto L_001F0210;
    case 17u: goto L_001F02C0;
    case 18u: goto L_001F02D0;
    case 19u: goto L_001F02E4;
    case 20u: goto L_001F0320;
    case 21u: goto L_001F036C;
    case 22u: goto L_001F037C;
    case 23u: goto L_001F0394;
    case 24u: goto L_001F03B0;
    case 25u: goto L_001F03F4;
    case 26u: goto L_001F0414;
    case 27u: goto L_001F0424;
    case 28u: goto L_001F0438;
    case 29u: goto L_001F0468;
    case 30u: goto L_001F047C;
    case 31u: goto L_001F04D0;
    case 32u: goto L_001F0504;
    case 33u: goto L_001F0514;
    case 34u: goto L_001F0528;
    case 35u: goto L_001F0550;
    case 36u: goto L_001F0580;
    case 37u: goto L_001F05D0;
    case 38u: goto L_001F05F8;
    case 39u: goto L_001F0608;
    case 40u: goto L_001F0620;
    case 41u: goto L_001F0648;
    case 42u: goto L_001F0670;
    case 43u: goto L_001F0694;
    case 44u: goto L_001F06C8;
    case 45u: goto L_001F0700;
    case 46u: goto L_001F0708;
    case 47u: goto L_001F0740;
    case 48u: goto L_001F0748;
    case 49u: goto L_001F0768;
    case 50u: goto L_001F0780;
    case 51u: goto L_001F07B0;
    case 52u: goto L_001F07EC;
    case 53u: goto L_001F0810;
    case 54u: goto L_001F0838;
    case 55u: goto L_001F0850;
    case 56u: goto L_001F0880;
    case 57u: goto L_001F08A0;
    case 58u: goto L_001F08C8;
    case 59u: goto L_001F08DC;
    case 60u: goto L_001F08F8;
    case 61u: goto L_001F0930;
    case 62u: goto L_001F0974;
    case 63u: goto L_001F0984;
    case 64u: goto L_001F099C;
    case 65u: goto L_001F09C0;
    case 66u: goto L_001F09F0;
    case 67u: goto L_001F0AA0;
    case 68u: goto L_001F0AB0;
    case 69u: goto L_001F0AC4;
    case 70u: goto L_001F0AD8;
    case 71u: goto L_001F0AE8;
    case 72u: goto L_001F0B00;
    case 73u: goto L_001F0B20;
    case 74u: goto L_001F0B54;
    case 75u: goto L_001F0B60;
    case 76u: goto L_001F0B6C;
    case 77u: goto L_001F0B84;
    case 78u: goto L_001F0BA0;
    case 79u: goto L_001F0BDC;
    case 80u: goto L_001F0BF4;
    case 81u: goto L_001F0C04;
    case 82u: goto L_001F0C40;
    case 83u: goto L_001F0C70;
    case 84u: goto L_001F0C80;
    case 85u: goto L_001F0CA0;
    case 86u: goto L_001F0CCC;
    case 87u: goto L_001F0CEC;
    case 88u: goto L_001F0D00;
    case 89u: goto L_001F0D14;
    case 90u: goto L_001F0D20;
    case 91u: goto L_001F0D40;
    case 92u: goto L_001F0D64;
    case 93u: goto L_001F0D90;
    case 94u: goto L_001F0DB0;
    case 95u: goto L_001F0DC8;
    case 96u: goto L_001F0DE0;
    case 97u: goto L_001F0E0C;
    case 98u: goto L_001F0E30;
    case 99u: goto L_001F0E50;
    case 100u: goto L_001F0E70;
    case 101u: goto L_001F0E94;
    case 102u: goto L_001F0EB4;
    case 103u: goto L_001F0ECC;
    case 104u: goto L_001F0ED4;
    case 105u: goto L_001F0EE8;
    case 106u: goto L_001F0F30;
    case 107u: goto L_001F0F6C;
    case 108u: goto L_001F0F84;
    case 109u: goto L_001F0F94;
    case 110u: goto L_001F0FAC;
    case 111u: goto L_001F0FD0;
    case 112u: goto L_001F0FE0;
    case 113u: goto L_001F0FF0;
    case 114u: goto L_001F1004;
    case 115u: goto L_001F1030;
    case 116u: goto L_001F105C;
    case 117u: goto L_001F1068;
    case 118u: goto L_001F1080;
    case 119u: goto L_001F10A0;
    case 120u: goto L_001F10C0;
    case 121u: goto L_001F10F8;
    case 122u: goto L_001F1104;
    case 123u: goto L_001F1130;
    case 124u: goto L_001F1168;
    case 125u: goto L_001F11A8;
    case 126u: goto L_001F11BC;
    case 127u: goto L_001F11F8;
    case 128u: goto L_001F1214;
    case 129u: goto L_001F1240;
    case 130u: goto L_001F125C;
    case 131u: goto L_001F1290;
    case 132u: goto L_001F1298;
    case 133u: goto L_001F12C0;
    case 134u: goto L_001F12D4;
    case 135u: goto L_001F130C;
    case 136u: goto L_001F1338;
    case 137u: goto L_001F1350;
    case 138u: goto L_001F136C;
    case 139u: goto L_001F13C8;
    case 140u: goto L_001F13D4;
    case 141u: goto L_001F13F8;
    case 142u: goto L_001F1410;
    case 143u: goto L_001F1430;
    case 144u: goto L_001F143C;
    case 145u: goto L_001F1470;
    case 146u: goto L_001F1478;
    case 147u: goto L_001F14C0;
    case 148u: goto L_001F14C8;
    case 149u: goto L_001F1510;
    case 150u: goto L_001F1528;
    case 151u: goto L_001F1560;
    case 152u: goto L_001F1574;
    case 153u: goto L_001F15A0;
    case 154u: goto L_001F15D8;
    case 155u: goto L_001F15E8;
    case 156u: goto L_001F15F8;
    case 157u: goto L_001F1608;
    case 158u: goto L_001F1618;
    case 159u: goto L_001F1628;
    case 160u: goto L_001F1640;
    case 161u: goto L_001F1670;
    case 162u: goto L_001F16B4;
    case 163u: goto L_001F16FC;
    case 164u: goto L_001F1720;
    case 165u: goto L_001F172C;
    case 166u: goto L_001F1744;
    case 167u: goto L_001F1760;
    case 168u: goto L_001F178C;
    case 169u: goto L_001F1794;
    case 170u: goto L_001F179C;
    case 171u: goto L_001F17A4;
    case 172u: goto L_001F17AC;
    case 173u: goto L_001F17C0;
    case 174u: goto L_001F17C8;
    case 175u: goto L_001F17E0;
    case 176u: goto L_001F1854;
    case 177u: goto L_001F18E8;
    case 178u: goto L_001F1914;
    case 179u: goto L_001F191C;
    case 180u: goto L_001F1940;
    case 181u: goto L_001F1964;
    case 182u: goto L_001F1978;
    case 183u: goto L_001F1990;
    case 184u: goto L_001F19A8;
    case 185u: goto L_001F19BC;
    case 186u: goto L_001F19D0;
    case 187u: goto L_001F19F0;
    case 188u: goto L_001F1A30;
    case 189u: goto L_001F1A48;
    case 190u: goto L_001F1AB0;
    case 191u: goto L_001F1AD8;
    case 192u: goto L_001F1B10;
    case 193u: goto L_001F1B20;
    case 194u: goto L_001F1B44;
    case 195u: goto L_001F1B70;
    case 196u: goto L_001F1B88;
    case 197u: goto L_001F1BF4;
    case 198u: goto L_001F1C0C;
    case 199u: goto L_001F1C48;
    case 200u: goto L_001F1C60;
    case 201u: goto L_001F1C94;
    case 202u: goto L_001F1CCC;
    case 203u: goto L_001F1CDC;
    case 204u: goto L_001F1CEC;
    case 205u: goto L_001F1D10;
    case 206u: goto L_001F1D38;
    case 207u: goto L_001F1D4C;
    case 208u: goto L_001F1D5C;
    case 209u: goto L_001F1D6C;
    case 210u: goto L_001F1D78;
    case 211u: goto L_001F1D8C;
    case 212u: goto L_001F1D9C;
    case 213u: goto L_001F1DAC;
    case 214u: goto L_001F1DB8;
    case 215u: goto L_001F1DCC;
    case 216u: goto L_001F1DDC;
    case 217u: goto L_001F1DE8;
    case 218u: goto L_001F1E00;
    case 219u: goto L_001F1E10;
    case 220u: goto L_001F1E1C;
    case 221u: goto L_001F1E30;
    case 222u: goto L_001F1E5C;
    case 223u: goto L_001F1E70;
    case 224u: goto L_001F1E78;
    case 225u: goto L_001F1E80;
    case 226u: goto L_001F1E8C;
    case 227u: goto L_001F1EA8;
    case 228u: goto L_001F1EC0;
    case 229u: goto L_001F1EE0;
    case 230u: goto L_001F1EF8;
    case 231u: goto L_001F1F10;
    case 232u: goto L_001F1F28;
    case 233u: goto L_001F1F68;
    case 234u: goto L_001F1F80;
    case 235u: goto L_001F1FA0;
    case 236u: goto L_001F1FB8;
    case 237u: goto L_001F1FCC;
    case 238u: goto L_001F1FDC;
    case 239u: goto L_001F1FF4;
    case 240u: goto L_001F2014;
    case 241u: goto L_001F202C;
    case 242u: goto L_001F2040;
    case 243u: goto L_001F2048;
    case 244u: goto L_001F2054;
    case 245u: goto L_001F2060;
    case 246u: goto L_001F2080;
    case 247u: goto L_001F2158;
    case 248u: goto L_001F2170;
    case 249u: goto L_001F218C;
    case 250u: goto L_001F21A8;
    case 251u: goto L_001F21C4;
    case 252u: goto L_001F2344;
    case 253u: goto L_001F2354;
    case 254u: goto L_001F23FC;
    case 255u: goto L_001F2418;
    case 256u: goto L_001F243C;
    case 257u: goto L_001F24CC;
    case 258u: goto L_001F24D8;
    case 259u: goto L_001F2510;
    case 260u: goto L_001F2554;
    case 261u: goto L_001F2640;
    case 262u: goto L_001F2648;
    case 263u: goto L_001F2658;
    case 264u: goto L_001F2670;
    case 265u: goto L_001F268C;
    case 266u: goto L_001F26BC;
    case 267u: goto L_001F26D0;
    case 268u: goto L_001F26E0;
    case 269u: goto L_001F2750;
    case 270u: goto L_001F2788;
    case 271u: goto L_001F279C;
    case 272u: goto L_001F27F0;
    case 273u: goto L_001F2828;
    case 274u: goto L_001F283C;
    case 275u: goto L_001F2894;
    case 276u: goto L_001F28B8;
    case 277u: goto L_001F28C4;
    case 278u: goto L_001F2918;
    case 279u: goto L_001F2920;
    case 280u: goto L_001F29EC;
    case 281u: goto L_001F29F4;
    case 282u: goto L_001F2A30;
    case 283u: goto L_001F2A40;
    case 284u: goto L_001F2A50;
    case 285u: goto L_001F2A60;
    case 286u: goto L_001F2A78;
    case 287u: goto L_001F2AA8;
    case 288u: goto L_001F2AFC;
    case 289u: goto L_001F2B0C;
    case 290u: goto L_001F2B2C;
    case 291u: goto L_001F2B68;
    case 292u: goto L_001F2B78;
    case 293u: goto L_001F2BA0;
    case 294u: goto L_001F2BB0;
    case 295u: goto L_001F2BD0;
    case 296u: goto L_001F2CA0;
    case 297u: goto L_001F2D10;
    case 298u: goto L_001F2D3C;
    case 299u: goto L_001F2DC0;
    case 300u: goto L_001F2DD8;
    case 301u: goto L_001F2DE4;
    case 302u: goto L_001F2DF8;
    case 303u: goto L_001F2E0C;
    case 304u: goto L_001F2E18;
    case 305u: goto L_001F2E3C;
    case 306u: goto L_001F2E4C;
    case 307u: goto L_001F2E60;
    case 308u: goto L_001F2E70;
    case 309u: goto L_001F2E9C;
    case 310u: goto L_001F2EA8;
    case 311u: goto L_001F2ED8;
    case 312u: goto L_001F2EF8;
    case 313u: goto L_001F2F00;
    case 314u: goto L_001F2F0C;
    case 315u: goto L_001F2F38;
    case 316u: goto L_001F2F44;
    case 317u: goto L_001F2F54;
    case 318u: goto L_001F2F60;
    case 319u: goto L_001F2F98;
    case 320u: goto L_001F2FAC;
    case 321u: goto L_001F2FC0;
    case 322u: goto L_001F2FCC;
    case 323u: goto L_001F2FD8;
    case 324u: goto L_001F2FEC;
    case 325u: goto L_001F2FF8;
    case 326u: goto L_001F3030;
    case 327u: goto L_001F303C;
    case 328u: goto L_001F3074;
    case 329u: goto L_001F3088;
    case 330u: goto L_001F3094;
    case 331u: goto L_001F30C8;
    case 332u: goto L_001F30DC;
    case 333u: goto L_001F30F0;
    case 334u: goto L_001F30FC;
    case 335u: goto L_001F3134;
    case 336u: goto L_001F314C;
    case 337u: goto L_001F3158;
    case 338u: goto L_001F3168;
    case 339u: goto L_001F3174;
    case 340u: goto L_001F3184;
    case 341u: goto L_001F3240;
    case 342u: goto L_001F3254;
    case 343u: goto L_001F3278;
    case 344u: goto L_001F3290;
    case 345u: goto L_001F32A4;
    case 346u: goto L_001F32B4;
    case 347u: goto L_001F32C0;
    case 348u: goto L_001F3308;
    case 349u: goto L_001F33A4;
    case 350u: goto L_001F33B4;
    case 351u: goto L_001F3408;
    case 352u: goto L_001F342C;
    case 353u: goto L_001F3480;
    case 354u: goto L_001F34B0;
    case 355u: goto L_001F3504;
    case 356u: goto L_001F3518;
    case 357u: goto L_001F3528;
    case 358u: goto L_001F3550;
    case 359u: goto L_001F3588;
    case 360u: goto L_001F35DC;
    case 361u: goto L_001F35F0;
    case 362u: goto L_001F3600;
    case 363u: goto L_001F3620;
    case 364u: goto L_001F3634;
    case 365u: goto L_001F3640;
    case 366u: goto L_001F3650;
    case 367u: goto L_001F3670;
    case 368u: goto L_001F36F8;
    case 369u: goto L_001F3730;
    case 370u: goto L_001F374C;
    case 371u: goto L_001F37BC;
    case 372u: goto L_001F380C;
    case 373u: goto L_001F3840;
    case 374u: goto L_001F3850;
    case 375u: goto L_001F3880;
    case 376u: goto L_001F38B0;
    case 377u: goto L_001F38E0;
    case 378u: goto L_001F38E8;
    case 379u: goto L_001F3910;
    case 380u: goto L_001F3930;
    case 381u: goto L_001F3960;
    case 382u: goto L_001F3974;
    case 383u: goto L_001F39A4;
    case 384u: goto L_001F39FC;
    case 385u: goto L_001F3A50;
    case 386u: goto L_001F3AC0;
    case 387u: goto L_001F3C8C;
    case 388u: goto L_001F3CC0;
    case 389u: goto L_001F3CFC;
    case 390u: goto L_001F3D5C;
    case 391u: goto L_001F3D94;
    case 392u: goto L_001F3DB0;
    case 393u: goto L_001F3DC0;
    case 394u: goto L_001F3DD0;
    case 395u: goto L_001F3DE0;
    case 396u: goto L_001F3E64;
    case 397u: goto L_001F3E70;
    case 398u: goto L_001F3E7C;
    case 399u: goto L_001F3E88;
    case 400u: goto L_001F3E94;
    case 401u: goto L_001F3EA0;
    case 402u: goto L_001F3EAC;
    case 403u: goto L_001F3EC0;
    case 404u: goto L_001F3EF4;
    case 405u: goto L_001F3F04;
    case 406u: goto L_001F3F14;
    case 407u: goto L_001F3F24;
    case 408u: goto L_001F3F34;
    case 409u: goto L_001F3F44;
    case 410u: goto L_001F3F70;
    case 411u: goto L_001F3F90;
    case 412u: goto L_001F3FC0;
    case 413u: goto L_001F3FE8;
    default: bad_entry(c, 0x001F0000u); return;
    }
L_001F0000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 7;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 4u)));  goto L_001F0024; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_001F008C; } }
L_001F0024:
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u - 1u);  if (t) { goto L_001F0034; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 1;
L_001F0034:
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 352u)));  goto L_001F0068; }
    set32(c.r[4], ld32((c.r[4].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001F0060; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F005Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F005Cu) [[unlikely]] return; }
L_001F005C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001F0060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_001F008C; } }
L_001F0068:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001F0088; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0080u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F0080u) [[unlikely]] return; }
L_001F0080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F0088; } }
L_001F0088:
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001F008C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F00A0:
    set32(c.r[3], ld32((c.r[5].w[0] + 40u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_001F00B0:
    set32(c.r[3], ld32((c.r[5].w[0] + 36u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_001F00C0:
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 348u));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_001F00E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0108u); c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 383u, depth + 1u); else { c.pc = 0x001EF510u; return; } if (c.pc != 0x001F0108u) [[unlikely]] return; }
L_001F0108:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], 0u + 432u);
    set32(c.r[2], c.r[2].w[0] + 15760u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F011Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001F011Cu) [[unlikely]] return; }
L_001F011C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  goto L_001F013C; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0138u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 284u, depth + 1u); else { c.pc = 0x00207340u; return; } if (c.pc != 0x001F0138u) [[unlikely]] return; }
L_001F0138:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_001F013C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F0170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F01DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 15760u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001F01BC; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F01B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F01B4u) [[unlikely]] return; }
L_001F01B4:
    st32((c.r[17].w[0] + 56u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001F01BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F01C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 387u, depth + 1u); else { c.pc = 0x001EF5A0u; return; } if (c.pc != 0x001F01C4u) [[unlikely]] return; }
L_001F01C4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001F01E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F01DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001F01DCu) [[unlikely]] return; }
L_001F01DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F01E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F0200:
    c.r[2].d[0] = c.r[5].d[0] ^ 2ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_001F0210:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_001F0238; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001F0244; } }
L_001F0238:
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_001F0244:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_001F026C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001F027C; } }
L_001F026C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_001F027C:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_001F02A4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001F02B4; } }
L_001F02A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_001F02B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F02C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  c.pc = t; return; }
L_001F02D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F02E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 298u, depth + 1u); else { c.pc = 0x001EE850u; return; } if (c.pc != 0x001F02E4u) [[unlikely]] return; }
L_001F02E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 15904u);
    set32(c.r[3], c.r[3].w[0] + 24768u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F0320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F0394; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 15904u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001F0374; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 28u), 0u);  goto L_001F0370; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F036Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F036Cu) [[unlikely]] return; }
L_001F036C:
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 1;
L_001F0370:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F0374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F037Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 299u, depth + 1u); else { c.pc = 0x001EE8A0u; return; } if (c.pc != 0x001F037Cu) [[unlikely]] return; }
L_001F037C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001F0398; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0394u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001F0394u) [[unlikely]] return; }
L_001F0394:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F0398:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F03B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001F03F8; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 28u), 0u);  goto L_001F03F8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F03F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F03F4u) [[unlikely]] return; }
L_001F03F4:
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 1;
L_001F03F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    if (c.r[19].d[0] != 0ull) { set32(c.r[4], 0u + 384u);  goto L_001F041C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0414u); set32(c.r[4], c.r[4].w[0] + 25048u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F0414u) [[unlikely]] return; }
L_001F0414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_001F04B0; } }
L_001F041C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0424u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001F0424u) [[unlikely]] return; }
L_001F0424:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  goto L_001F043C; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0438u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 125u, depth + 1u); else { c.pc = 0x0020D1A0u; return; } if (c.pc != 0x001F0438u) [[unlikely]] return; }
L_001F0438:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 1;
L_001F043C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  goto L_001F0460; }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 360u));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
L_001F0460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0468u); set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  if (depth < kMaxDepth) unit_003B(c, 136u, depth + 1u); else { c.pc = 0x0020D320u; return; } if (c.pc != 0x001F0468u) [[unlikely]] return; }
L_001F0468:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 28u)));  goto L_001F0484; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F047Cu); set32(c.r[4], c.r[4].w[0] + 25068u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F047Cu) [[unlikely]] return; }
L_001F047C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_001F04B0; } }
L_001F0484:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld16((c.r[6].w[0] + 360u));
    c.r[5].d[0] = c.r[5].d[0] & 32767ull;
    st16((c.r[6].w[0] + 360u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 292u)));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[6].w[0] + 292u), c.r[4].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 11;
L_001F04B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F04D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001F050C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0504u); set32(c.r[4], c.r[4].w[0] + 25090u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F0504u) [[unlikely]] return; }
L_001F0504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_001F05B8; } }
L_001F050C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0514u); set32(c.r[5], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_003B(c, 136u, depth + 1u); else { c.pc = 0x0020D320u; return; } if (c.pc != 0x001F0514u) [[unlikely]] return; }
L_001F0514:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_001F0530; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0528u); set32(c.r[4], c.r[4].w[0] + 25068u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F0528u) [[unlikely]] return; }
L_001F0528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_001F05B8; } }
L_001F0530:
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_001F0554; }
    set32(c.r[7], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0550u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0033(c, 328u, depth + 1u); else { c.pc = 0x001EECB0u; return; } if (c.pc != 0x001F0550u) [[unlikely]] return; }
L_001F0550:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_001F0554:
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_001F0584; }
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F0580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0580u); set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  if (depth < kMaxDepth) unit_003B(c, 144u, depth + 1u); else { c.pc = 0x0020D3F0u; return; } if (c.pc != 0x001F0580u) [[unlikely]] return; }
L_001F0580:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_001F0584:
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001F05B4; }
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F05B0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[3].w[0] + 356u), c.f[1]);
    c.budget -= 2;
L_001F05B0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001F05B4:
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001F05B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F05D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 7;
    if (c.r[4].d[0] != 0ull) { c.f[12] = ld32((c.r[6].w[0] + 8u));  goto L_001F0600; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F05F8u); set32(c.r[4], c.r[4].w[0] + 25090u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F05F8u) [[unlikely]] return; }
L_001F05F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_001F0610; } }
L_001F0600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0608u);  if (depth < kMaxDepth) unit_003B(c, 144u, depth + 1u); else { c.pc = 0x0020D3F0u; return; } if (c.pc != 0x001F0608u) [[unlikely]] return; }
L_001F0608:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_001F0610:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F0620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 7;
    if (c.r[4].d[0] != 0ull) { c.f[0] = ld32((c.r[6].w[0] + 8u));  goto L_001F0650; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0648u); set32(c.r[4], c.r[4].w[0] + 25090u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F0648u) [[unlikely]] return; }
L_001F0648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_001F065C; } }
L_001F0650:
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 348u), c.f[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_001F065C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F0670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F069C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0694u); set32(c.r[4], c.r[4].w[0] + 25090u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F0694u) [[unlikely]] return; }
L_001F0694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_001F07FC; } }
L_001F069C:
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F07E0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 24960u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001F0000u < 16384u) { entry = entries_0034[(t - 0x001F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F06C8:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 360u));
    c.f[12] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 360u));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[3].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0700u); set32(c.r[4], ld32((c.r[5].w[0] + 28u)));  if (depth < kMaxDepth) unit_003B(c, 144u, depth + 1u); else { c.pc = 0x0020D3F0u; return; } if (c.pc != 0x001F0700u) [[unlikely]] return; }
L_001F0700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001F07F8; } }
L_001F0708:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 360u));
    c.f[12] = 0u;
    c.r[2].d[0] = c.r[2].d[0] & 49151ull;
    st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 360u));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[3].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0740u); set32(c.r[4], ld32((c.r[5].w[0] + 28u)));  if (depth < kMaxDepth) unit_003B(c, 144u, depth + 1u); else { c.pc = 0x0020D3F0u; return; } if (c.pc != 0x001F0740u) [[unlikely]] return; }
L_001F0740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F07F4; } }
L_001F0748:
    set32(c.r[4], ld32((c.r[3].w[0] + 292u)));
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    st32((c.r[3].w[0] + 292u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] & 32767ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001F07F4; } }
L_001F0768:
    set32(c.r[5], ld32((c.r[3].w[0] + 292u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 32767ull;
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 292u), c.r[4].w[0]);  if (t) { goto L_001F07F4; } }
L_001F0780:
    c.r[4].d[0] = ld16((c.r[3].w[0] + 360u));
    c.r[4].d[0] = c.r[4].d[0] & 49151ull;
    st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st16((c.r[4].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_001F07F4; } }
L_001F07B0:
    c.r[4].d[0] = ld16((c.r[3].w[0] + 360u));
    c.r[4].d[0] = c.r[4].d[0] | 16384ull;
    st16((c.r[3].w[0] + 360u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 360u));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st16((c.r[4].w[0] + 360u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 292u), c.r[3].w[0]);  if (t) { goto L_001F07F4; } }
L_001F07E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F07ECu); set32(c.r[4], c.r[4].w[0] + 25108u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F07ECu) [[unlikely]] return; }
L_001F07EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_001F07FC; } }
L_001F07F4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001F07F8:
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001F07FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F0810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0838u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F0838u) [[unlikely]] return; }
L_001F0838:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F0850:
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    c.f[1] = ld32((c.r[5].w[0] + 344u));
    c.f[0] = ld32((c.r[5].w[0] + 356u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_001F086C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F086C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_001F0880:
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[3].w[0] + 356u), c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), 0u);  c.pc = t; return; }
L_001F08A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F08C8u); c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 383u, depth + 1u); else { c.pc = 0x001EF510u; return; } if (c.pc != 0x001F08C8u) [[unlikely]] return; }
L_001F08C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], 0u + 92u);
    set32(c.r[2], c.r[2].w[0] + 15840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F08DCu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 314u, depth + 1u); else { c.pc = 0x001B5DB0u; return; } if (c.pc != 0x001F08DCu) [[unlikely]] return; }
L_001F08DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  goto L_001F08FC; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F08F8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 74u, depth + 1u); else { c.pc = 0x0020CA00u; return; } if (c.pc != 0x001F08F8u) [[unlikely]] return; }
L_001F08F8:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_001F08FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F0930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F099C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 15840u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001F097C; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0974u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F0974u) [[unlikely]] return; }
L_001F0974:
    st32((c.r[17].w[0] + 56u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001F097C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0984u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 387u, depth + 1u); else { c.pc = 0x001EF5A0u; return; } if (c.pc != 0x001F0984u) [[unlikely]] return; }
L_001F0984:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001F09A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F099Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001F099Cu) [[unlikely]] return; }
L_001F099C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F09A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F09C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_001F09DC; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F09DC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001F09DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F09F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_001F0A18; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001F0A24; } }
L_001F0A18:
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_001F0A24:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_001F0A4C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001F0A5C; } }
L_001F0A4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_001F0A5C:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_001F0A84; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001F0A94; } }
L_001F0A84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_001F0A94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F0AA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  c.pc = t; return; }
L_001F0AB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0AC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 298u, depth + 1u); else { c.pc = 0x001EE850u; return; } if (c.pc != 0x001F0AC4u) [[unlikely]] return; }
L_001F0AC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 15984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0AD8u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 44u, depth + 1u); else { c.pc = 0x00210980u; return; } if (c.pc != 0x001F0AD8u) [[unlikely]] return; }
L_001F0AD8:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0AE8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 216u, depth + 1u); else { c.pc = 0x0020DFF0u; return; } if (c.pc != 0x001F0AE8u) [[unlikely]] return; }
L_001F0AE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 25136u);
    set32(c.r[5], c.r[16].w[0] + 384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0B00u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 64u, depth + 1u); else { c.pc = 0x00210D10u; return; } if (c.pc != 0x001F0B00u) [[unlikely]] return; }
L_001F0B00:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F0B20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F0B84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[17].w[0] + 384u);
    set32(c.r[2], c.r[2].w[0] + 15984u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0B54u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003B(c, 219u, depth + 1u); else { c.pc = 0x0020E110u; return; } if (c.pc != 0x001F0B54u) [[unlikely]] return; }
L_001F0B54:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0B60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003C(c, 46u, depth + 1u); else { c.pc = 0x002109D0u; return; } if (c.pc != 0x001F0B60u) [[unlikely]] return; }
L_001F0B60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0B6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 299u, depth + 1u); else { c.pc = 0x001EE8A0u; return; } if (c.pc != 0x001F0B6Cu) [[unlikely]] return; }
L_001F0B6C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001F0B88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0B84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001F0B84u) [[unlikely]] return; }
L_001F0B84:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F0B88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F0BA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[5].w[0] + 544u), c.r[2].w[0]);  if (t) { goto L_001F0BE4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0BDCu); set32(c.r[4], c.r[4].w[0] + 25436u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F0BDCu) [[unlikely]] return; }
L_001F0BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_001F0C20; } }
L_001F0BE4:
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0BF4u); set32(c.r[4], c.r[16].w[0] + 384u);  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x001F0BF4u) [[unlikely]] return; }
L_001F0BF4:
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 544u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0C04u); set32(c.r[4], c.r[16].w[0] + 384u);  if (depth < kMaxDepth) unit_003C(c, 100u, depth + 1u); else { c.pc = 0x00211210u; return; } if (c.pc != 0x001F0C04u) [[unlikely]] return; }
L_001F0C04:
    set32(c.r[5], ld32((c.r[16].w[0] + 324u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 324u), c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
L_001F0C20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F0C40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0] + 544u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0C70u); set32(c.r[4], c.r[17].w[0] + 384u);  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x001F0C70u) [[unlikely]] return; }
L_001F0C70:
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 544u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0C80u); set32(c.r[4], c.r[17].w[0] + 384u);  if (depth < kMaxDepth) unit_003C(c, 100u, depth + 1u); else { c.pc = 0x00211210u; return; } if (c.pc != 0x001F0C80u) [[unlikely]] return; }
L_001F0C80:
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F0CA0:
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_001F0D18; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 25344u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001F0000u < 16384u) { entry = entries_0034[(t - 0x001F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F0CCC:
    set32(c.r[3], ld32((c.r[5].w[0] + 324u)));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[5].w[0] + 324u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 532u), 0u);
    set32(c.r[3], ld32((c.r[5].w[0] + 388u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 388u), c.r[3].w[0]);  if (t) { goto L_001F0D14; } }
L_001F0CEC:
    set32(c.r[6], ld32((c.r[5].w[0] + 388u)));
    set32(c.r[3], 0u - 4097u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 388u), c.r[3].w[0]);  if (t) { goto L_001F0D14; } }
L_001F0D00:
    set32(c.r[6], ld32((c.r[5].w[0] + 324u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 324u), c.r[3].w[0]);
    c.budget -= 5;
L_001F0D14:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001F0D18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_001F0D20:
    set32(c.r[3], ld32((c.r[5].w[0] + 388u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_001F0D40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0D64u); set32(c.r[4], c.r[16].w[0] + 384u);  if (depth < kMaxDepth) unit_003B(c, 314u, depth + 1u); else { c.pc = 0x0020FC40u; return; } if (c.pc != 0x001F0D64u) [[unlikely]] return; }
L_001F0D64:
    st32((c.r[16].w[0] + 532u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 388u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[16].w[0] + 388u), c.r[3].w[0]);
    st32((c.r[17].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F0D90:
    set32(c.r[6], ld32((c.r[5].w[0] + 388u)));
    set32(c.r[3], 0u - 4097u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 388u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), 0u);  c.pc = t; return; }
L_001F0DB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0DC8u); set32(c.r[4], c.r[5].w[0] + 384u);  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x001F0DC8u) [[unlikely]] return; }
L_001F0DC8:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F0DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    set32(c.r[4], c.r[5].w[0] + 384u);
    set32(c.r[5], 0u + 1u);
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0E0Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_003B(c, 317u, depth + 1u); else { c.pc = 0x0020FC80u; return; } if (c.pc != 0x001F0E0Cu) [[unlikely]] return; }
L_001F0E0C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F0E30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[5].w[0] + 384u);
    set32(c.r[5], ld32((c.r[5].w[0] + 544u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0E50u); set32(c.r[6], ld32((c.r[6].w[0] + 8u)));  if (depth < kMaxDepth) unit_003C(c, 67u, depth + 1u); else { c.pc = 0x00210DD0u; return; } if (c.pc != 0x001F0E50u) [[unlikely]] return; }
L_001F0E50:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F0E70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0E94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 383u, depth + 1u); else { c.pc = 0x001EF510u; return; } if (c.pc != 0x001F0E94u) [[unlikely]] return; }
L_001F0E94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 15920u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0EB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x001F0EB4u) [[unlikely]] return; }
L_001F0EB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_001F0F00; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0ECCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 154u, depth + 1u); else { c.pc = 0x00181DD0u; return; } if (c.pc != 0x001F0ECCu) [[unlikely]] return; }
L_001F0ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0ED4u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001F0ED4u) [[unlikely]] return; }
L_001F0ED4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  goto L_001F0EEC; }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0EE8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 178u, depth + 1u); else { c.pc = 0x00209830u; return; } if (c.pc != 0x001F0EE8u) [[unlikely]] return; }
L_001F0EE8:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_001F0EEC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001F0F14; } }
L_001F0F00:
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
L_001F0F14:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F0F30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F0FAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 15920u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  goto L_001F0F74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0F6Cu);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001F0F6Cu) [[unlikely]] return; }
L_001F0F6C:
    st32((c.r[17].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 2;
L_001F0F74:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001F0F8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0F84u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x001F0F84u) [[unlikely]] return; }
L_001F0F84:
    st32((c.r[17].w[0] + 56u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001F0F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0F94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 387u, depth + 1u); else { c.pc = 0x001EF5A0u; return; } if (c.pc != 0x001F0F94u) [[unlikely]] return; }
L_001F0F94:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001F0FB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0FACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001F0FACu) [[unlikely]] return; }
L_001F0FAC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F0FB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F0FD0:
    c.r[2].d[0] = c.r[5].d[0] ^ 3ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_001F0FE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 32u);  c.pc = t; return; }
L_001F0FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1004u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x001F1004u) [[unlikely]] return; }
L_001F1004:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[2], c.r[2].w[0] + 16000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F1030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F1080; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 16000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F105Cu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0034(c, 119u, depth + 1u); else { c.pc = 0x001F10A0u; return; } if (c.pc != 0x001F105Cu) [[unlikely]] return; }
L_001F105C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1068u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x001F1068u) [[unlikely]] return; }
L_001F1068:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001F1084; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1080u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001F1080u) [[unlikely]] return; }
L_001F1080:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F1084:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F10A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F1108; } }
L_001F10C0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_001F1104; } }
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001F10FC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F10F8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F10F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F10F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F10F8u) [[unlikely]] return; }
L_001F10F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F10FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1104u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001F1104u) [[unlikely]] return; }
L_001F1104:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F1108:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F10C0u | kUnwind; return; } goto L_001F10C0; } }
    st32((c.r[18].w[0] + 52u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F1130:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = c.r[18].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001F1170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1168u);  if (depth < kMaxDepth) unit_0034(c, 149u, depth + 1u); else { c.pc = 0x001F1510u; return; } if (c.pc != 0x001F1168u) [[unlikely]] return; }
L_001F1168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F11B0; } }
L_001F1170:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001F1198; } }
    c.r[1].d[0] = 0ull | 0ull;
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[18].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], 0u + 16u);  goto L_001F11B4; }
L_001F1198:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F11A8u); set32(c.r[4], c.r[4].w[0] + 25456u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F11A8u) [[unlikely]] return; }
L_001F11A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F126C; } }
L_001F11B0:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_001F11B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F11BCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x001F11BCu) [[unlikely]] return; }
L_001F11BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[18].w[0]);  goto L_001F11D0; }
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.budget -= 2;
L_001F11D0:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F11F8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F11F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F11F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F11F8u) [[unlikely]] return; }
L_001F11F8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_001F1250; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F124C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1214u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001F1214u) [[unlikely]] return; }
L_001F1214:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F1240; }
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001F1230; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1240; } }
L_001F1230:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1240u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 60u, depth + 1u); else { c.pc = 0x001A88A0u; return; } if (c.pc != 0x001F1240u) [[unlikely]] return; }
L_001F1240:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 8u);  if (t) { goto L_001F1254; } }
L_001F124C:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_001F1250:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 1;
L_001F1254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F125Cu);  if (depth < kMaxDepth) unit_0022(c, 49u, depth + 1u); else { c.pc = 0x001A8740u; return; } if (c.pc != 0x001F125Cu) [[unlikely]] return; }
L_001F125C:
    set32(c.r[3], ld32((c.r[19].w[0] + 52u)));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 52u), c.r[16].w[0]);
    c.budget -= 4;
L_001F126C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F1290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 52u)));  if (t) { goto L_001F12A8; } }
L_001F1298:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[3].w[0] + 12u)));  goto L_001F12A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_001F12B4; } }
L_001F12A8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F1298u | kUnwind; return; } goto L_001F1298; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F12B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F12C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 52u)));  if (t) { goto L_001F12E4; } }
L_001F12D4:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[3].w[0] + 12u)));  goto L_001F12E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + 8u);  if (t) { goto L_001F133C; } }
L_001F12E4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F12D4u | kUnwind; return; } goto L_001F12D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F12FC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((0u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001F12FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001F1310; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F130Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x001478C0u; return; } if (c.pc != 0x001F130Cu) [[unlikely]] return; }
L_001F130C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F1310:
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 44u);  if (t) { goto L_001F1338; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F1338; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1338u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F1338u) [[unlikely]] return; }
L_001F1338:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F133C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F1350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001F13E4; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001F136C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_001F13E0; }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  goto L_001F138C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_001F1390; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_001F138C:
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 1;
L_001F1390:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F13FC; }
    set32(c.r[2], c.r[16].w[0] + 8u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001F13CC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F13C8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F13C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F13C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F13C8u) [[unlikely]] return; }
L_001F13C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F13CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F13D4u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x001F13D4u) [[unlikely]] return; }
L_001F13D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13F8; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F13E0:
    set32(c.r[16], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_001F13E4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F136Cu | kUnwind; return; } goto L_001F136C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F13F8u); set32(c.r[4], c.r[4].w[0] + 25495u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F13F8u) [[unlikely]] return; }
L_001F13F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F13FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F1410:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F1420; }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_001F1420:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F1430:
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F1458; } }
L_001F143C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 12u)));  goto L_001F1458; }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F1460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_001F1460; } }
L_001F1458:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F143Cu | kUnwind; return; } goto L_001F143C; }
L_001F1460:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F1470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 52u)));  if (t) { goto L_001F1488; } }
L_001F1478:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[3].w[0] + 12u)));  goto L_001F1488; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_001F1494; } }
L_001F1488:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F1478u | kUnwind; return; } goto L_001F1478; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F1494:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 8u)));  goto L_001F14A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F14AC; } }
L_001F14A4:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 2;
L_001F14AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F14C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 52u)));  if (t) { goto L_001F14D8; } }
L_001F14C8:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[3].w[0] + 12u)));  goto L_001F14D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_001F14E4; } }
L_001F14D8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F14C8u | kUnwind; return; } goto L_001F14C8; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F14E4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 8u)));  goto L_001F14F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F14FC; } }
L_001F14F4:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 2;
L_001F14FC:
    c.r[2].d[0] = c.r[6].d[0] ^ c.r[2].d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_001F1510:
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (t) { goto L_001F1550; } }
L_001F1528:
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[6].w[0] + 12u)));  goto L_001F1550; }
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F154C; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 2;
L_001F154C:
    set32(c.r[6], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 1;
L_001F1550:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[5], ld32((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F1528u | kUnwind; return; } goto L_001F1528; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 56u)));  c.pc = t; return; }
L_001F1560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1574u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x001F1574u) [[unlikely]] return; }
L_001F1574:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[2], c.r[2].w[0] + 16064u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[16].w[0] + 240u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 2048u);
    set32(c.r[6], c.r[6].w[0] + 29856u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F15A0u); set32(c.r[8], 0u + 10u);  if (depth < kMaxDepth) unit_0008(c, 147u, depth + 1u); else { c.pc = 0x00141CB0u; return; } if (c.pc != 0x001F15A0u) [[unlikely]] return; }
L_001F15A0:
    st32((c.r[16].w[0] + 500u), 0u);
    st32((c.r[16].w[0] + 496u), 0u);
    st32((c.r[16].w[0] + 512u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30504u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x45460000u);  goto L_001F15C0; }
    st32((c.r[28].w[0] - 30504u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45460000u);
    c.budget -= 2;
L_001F15C0:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.r[2].d[0] = c.r[2].d[0] | 21825ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F15D8u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x001F15D8u) [[unlikely]] return; }
L_001F15D8:
    set32(c.r[4], c.r[16].w[0] + 76u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F15E8u); set32(c.r[6], 0u + 84u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x001F15E8u) [[unlikely]] return; }
L_001F15E8:
    set32(c.r[4], c.r[16].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F15F8u); set32(c.r[6], 0u + 324u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x001F15F8u) [[unlikely]] return; }
L_001F15F8:
    set32(c.r[4], c.r[16].w[0] + 492u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1608u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x001F1608u) [[unlikely]] return; }
L_001F1608:
    set32(c.r[4], c.r[16].w[0] + 556u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1618u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x001F1618u) [[unlikely]] return; }
L_001F1618:
    set32(c.r[4], c.r[16].w[0] + 560u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1628u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0009(c, 81u, depth + 1u); else { c.pc = 0x00145560u; return; } if (c.pc != 0x001F1628u) [[unlikely]] return; }
L_001F1628:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 484u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1640u); st32((c.r[16].w[0] + 488u), 0u);  if (depth < kMaxDepth) unit_0034(c, 412u, depth + 1u); else { c.pc = 0x001F3FC0u; return; } if (c.pc != 0x001F1640u) [[unlikely]] return; }
L_001F1640:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F1670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F1744; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 16064u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30504u)));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001F16AC; }
    st32((c.r[28].w[0] - 30504u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001F16AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F16B4u);  if (depth < kMaxDepth) unit_0035(c, 2u, depth + 1u); else { c.pc = 0x001F4010u; return; } if (c.pc != 0x001F16B4u) [[unlikely]] return; }
L_001F16B4:
    set32(c.r[2], c.r[17].w[0] + 492u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 160u);  goto L_001F1700; }
    set32(c.r[2], c.r[17].w[0] + 496u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F16FC; } }
    set32(c.r[2], c.r[17].w[0] + 500u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F16FC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F16FC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F16FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F16FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F16FCu) [[unlikely]] return; }
L_001F16FC:
    set32(c.r[2], c.r[17].w[0] + 160u);
    c.budget -= 1;
L_001F1700:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001F1724; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[17].w[0] + 240u);
    set32(c.r[5], c.r[5].w[0] + 29856u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1720u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_0008(c, 144u, depth + 1u); else { c.pc = 0x00141C40u; return; } if (c.pc != 0x001F1720u) [[unlikely]] return; }
L_001F1720:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F1724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F172Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x001F172Cu) [[unlikely]] return; }
L_001F172C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001F1748; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1744u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x001F1744u) [[unlikely]] return; }
L_001F1744:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F1748:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F1760:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F191C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F178Cu);  if (depth < kMaxDepth) unit_0034(c, 183u, depth + 1u); else { c.pc = 0x001F1990u; return; } if (c.pc != 0x001F178Cu) [[unlikely]] return; }
L_001F178C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1794u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 3u, depth + 1u); else { c.pc = 0x001F4020u; return; } if (c.pc != 0x001F1794u) [[unlikely]] return; }
L_001F1794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F179Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 392u, depth + 1u); else { c.pc = 0x001F3DB0u; return; } if (c.pc != 0x001F179Cu) [[unlikely]] return; }
L_001F179C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F17A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 187u, depth + 1u); else { c.pc = 0x001F19F0u; return; } if (c.pc != 0x001F17A4u) [[unlikely]] return; }
L_001F17A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F17ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 394u, depth + 1u); else { c.pc = 0x001F3DD0u; return; } if (c.pc != 0x001F17ACu) [[unlikely]] return; }
L_001F17AC:
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F179Cu | kUnwind; return; } goto L_001F179C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F17C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 259u, depth + 1u); else { c.pc = 0x001F2510u; return; } if (c.pc != 0x001F17C0u) [[unlikely]] return; }
L_001F17C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001F18EC; } }
L_001F17C8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 200u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F17E0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 353u, depth + 1u); else { c.pc = 0x001F3480u; return; } if (c.pc != 0x001F17E0u) [[unlikely]] return; }
L_001F17E0:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 256u)));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001F1804; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 240u)));  if (t) { goto L_001F1818; } }
L_001F1804:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_001F1818; }
    c.f[0] = ld32((c.r[4].w[0] + 240u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_001F1818:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001F182C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 64u)));  if (t) { goto L_001F1840; } }
L_001F182C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F1840; }
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_001F1840:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[16].w[0] + 440u));  goto L_001F1860; }
    set32(c.r[4], c.r[4].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1854u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F1854u) [[unlikely]] return; }
L_001F1854:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[16].w[0] + 440u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 440u));
    c.budget -= 3;
L_001F1860:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 440u);  if (t) { goto L_001F18C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001F1890; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001F18A8; } }
L_001F1890:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_001F18A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[2].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 7;
L_001F18C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001F18EC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F18E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F18E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F18E8u) [[unlikely]] return; }
L_001F18E8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001F18EC:
    c.r[1].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001F190C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 480u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F17C8u | kUnwind; return; } goto L_001F17C8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F190C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1914u);  if (depth < kMaxDepth) unit_0034(c, 393u, depth + 1u); else { c.pc = 0x001F3DC0u; return; } if (c.pc != 0x001F1914u) [[unlikely]] return; }
L_001F1914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F191Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 7u, depth + 1u); else { c.pc = 0x001F4060u; return; } if (c.pc != 0x001F191Cu) [[unlikely]] return; }
L_001F191C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F1940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F1978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1964u);  if (depth < kMaxDepth) unit_0034(c, 183u, depth + 1u); else { c.pc = 0x001F1990u; return; } if (c.pc != 0x001F1964u) [[unlikely]] return; }
L_001F1964:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F197C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1978u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 14u, depth + 1u); else { c.pc = 0x001F41E0u; return; } if (c.pc != 0x001F1978u) [[unlikely]] return; }
L_001F1978:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F197C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F1990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 488u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F19A8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 400u, depth + 1u); else { c.pc = 0x001FF2B0u; return; } if (c.pc != 0x001F19A8u) [[unlikely]] return; }
L_001F19A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001F19D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F19BCu); set32(c.r[5], ld32((c.r[16].w[0] + 484u)));  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001FBE70u; return; } if (c.pc != 0x001F19BCu) [[unlikely]] return; }
L_001F19BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F19D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F19D0u);  if (depth < kMaxDepth) unit_0037(c, 315u, depth + 1u); else { c.pc = 0x001FE7D0u; return; } if (c.pc != 0x001F19D0u) [[unlikely]] return; }
L_001F19D0:
    st32((c.r[16].w[0] + 488u), c.r[2].w[0]);
    c.budget -= 1;
L_001F19D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F19D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F19F0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F1A7C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A30u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0034(c, 395u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001F1A30u) [[unlikely]] return; }
L_001F1A30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 52u)));  goto L_001F1A80; }
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A48u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 395u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001F1A48u) [[unlikely]] return; }
L_001F1A48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F1A7C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[20].w[0] + 52u), 0u);  goto L_001F1A74; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_001F1A70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1A74; } }
L_001F1A70:
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 1;
L_001F1A74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_001F24EC; } }
L_001F1A7C:
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 1;
L_001F1A80:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 52u)));  goto L_001F2448; }
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F1C88; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F1AA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001F2078; } }
L_001F1AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1AB0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0034(c, 395u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001F1AB0u) [[unlikely]] return; }
L_001F1AB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F1B64; }
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1AD8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 363u, depth + 1u); else { c.pc = 0x001F3620u; return; } if (c.pc != 0x001F1AD8u) [[unlikely]] return; }
L_001F1AD8:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F1B60; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_001F1AFC; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_001F1AFC; }
L_001F1AFC:
    set32(c.r[6], ld32((c.r[20].w[0] + 56u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1B10u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 353u, depth + 1u); else { c.pc = 0x001F3480u; return; } if (c.pc != 0x001F1B10u) [[unlikely]] return; }
L_001F1B10:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1B20u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0034(c, 366u, depth + 1u); else { c.pc = 0x001F3650u; return; } if (c.pc != 0x001F1B20u) [[unlikely]] return; }
L_001F1B20:
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F1B44; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F1B44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1B44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F1B44u) [[unlikely]] return; }
L_001F1B44:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001F1B60; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[20].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_001F2074; } }
L_001F1B60:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001F1B64:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1B70u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0034(c, 395u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001F1B70u) [[unlikely]] return; }
L_001F1B70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 488u)));  goto L_001F1BA0; }
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1B88u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 395u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001F1B88u) [[unlikely]] return; }
L_001F1B88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F1B9C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 3;
L_001F1B9C:
    set32(c.r[3], ld32((c.r[20].w[0] + 488u)));
    c.budget -= 1;
L_001F1BA0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 56u)));  goto L_001F1BBC; }
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { st32((c.r[20].w[0] + 56u), 0u);  goto L_001F1BCC; }
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 1;
L_001F1BBC:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F1BE8; }
    st32((c.r[20].w[0] + 56u), 0u);
    c.budget -= 1;
L_001F1BCC:
    set32(c.r[3], ld32((c.r[20].w[0] + 480u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { st32((c.r[20].w[0] + 52u), 0u);  goto L_001F1BE0; }
    set32(c.r[3], 0u + 2u);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 2;
L_001F1BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F24E8; } }
L_001F1BE8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1BF4u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0034(c, 395u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001F1BF4u) [[unlikely]] return; }
L_001F1BF4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F1C3C; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C0Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0034(c, 395u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001F1C0Cu) [[unlikely]] return; }
L_001F1C0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F1C38; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[20].w[0] + 60u), 0u);  goto L_001F1C38; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { st32((c.r[20].w[0] + 60u), c.r[3].w[0]);  goto L_001F1C38; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 60u), c.r[2].w[0]);  goto L_001F1C38; }
L_001F1C38:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001F1C3C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C48u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0034(c, 395u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001F1C48u) [[unlikely]] return; }
L_001F1C48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2074; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C60u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0034(c, 395u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001F1C60u) [[unlikely]] return; }
L_001F1C60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2074; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[20].w[0] + 64u), 0u);  goto L_001F2074; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[20].w[0] + 64u), c.r[2].w[0]);  goto L_001F2074; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2074; } }
L_001F1C88:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C94u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0034(c, 395u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001F1C94u) [[unlikely]] return; }
L_001F1C94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F1D40; }
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 76u)));
    st32((c.r[29].w[0] + 228u), 0u);
    st32((c.r[29].w[0] + 224u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1CCCu); st32((c.r[29].w[0] + 240u), 0u);  if (depth < kMaxDepth) unit_0034(c, 385u, depth + 1u); else { c.pc = 0x001F3A50u; return; } if (c.pc != 0x001F1CCCu) [[unlikely]] return; }
L_001F1CCC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1CDCu); st32((c.r[29].w[0] + 164u), 0u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F1CDCu) [[unlikely]] return; }
L_001F1CDC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1CECu); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0034(c, 358u, depth + 1u); else { c.pc = 0x001F3550u; return; } if (c.pc != 0x001F1CECu) [[unlikely]] return; }
L_001F1CEC:
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 68u), 0u);  goto L_001F1D14; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F1D10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F1D10u) [[unlikely]] return; }
L_001F1D10:
    st32((c.r[20].w[0] + 68u), 0u);
    c.budget -= 1;
L_001F1D14:
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F2074; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F2074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F1D38u) [[unlikely]] return; }
L_001F1D38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2074; } }
L_001F1D40:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D4Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0034(c, 395u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001F1D4Cu) [[unlikely]] return; }
L_001F1D4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 2u);  goto L_001F1D80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D5Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 375u, depth + 1u); else { c.pc = 0x001F3880u; return; } if (c.pc != 0x001F1D5Cu) [[unlikely]] return; }
L_001F1D5C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D6Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0034(c, 381u, depth + 1u); else { c.pc = 0x001F3960u; return; } if (c.pc != 0x001F1D6Cu) [[unlikely]] return; }
L_001F1D6C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D78u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 376u, depth + 1u); else { c.pc = 0x001F38B0u; return; } if (c.pc != 0x001F1D78u) [[unlikely]] return; }
L_001F1D78:
    st32((c.r[20].w[0] + 72u), 0u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 2;
L_001F1D80:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D8Cu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 395u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001F1D8Cu) [[unlikely]] return; }
L_001F1D8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F1DC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D9Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 375u, depth + 1u); else { c.pc = 0x001F3880u; return; } if (c.pc != 0x001F1D9Cu) [[unlikely]] return; }
L_001F1D9C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0034(c, 381u, depth + 1u); else { c.pc = 0x001F3960u; return; } if (c.pc != 0x001F1DACu) [[unlikely]] return; }
L_001F1DAC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DB8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 376u, depth + 1u); else { c.pc = 0x001F38B0u; return; } if (c.pc != 0x001F1DB8u) [[unlikely]] return; }
L_001F1DB8:
    st32((c.r[20].w[0] + 72u), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_001F1DC0:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DCCu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0034(c, 395u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001F1DCCu) [[unlikely]] return; }
L_001F1DCC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F1DF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DDCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 373u, depth + 1u); else { c.pc = 0x001F3840u; return; } if (c.pc != 0x001F1DDCu) [[unlikely]] return; }
L_001F1DDC:
    set32(c.r[5], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DE8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 374u, depth + 1u); else { c.pc = 0x001F3850u; return; } if (c.pc != 0x001F1DE8u) [[unlikely]] return; }
L_001F1DE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[20].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
L_001F1DF4:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E00u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0034(c, 395u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001F1E00u) [[unlikely]] return; }
L_001F1E00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F1E28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E10u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 373u, depth + 1u); else { c.pc = 0x001F3840u; return; } if (c.pc != 0x001F1E10u) [[unlikely]] return; }
L_001F1E10:
    set32(c.r[5], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E1Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 374u, depth + 1u); else { c.pc = 0x001F3850u; return; } if (c.pc != 0x001F1E1Cu) [[unlikely]] return; }
L_001F1E1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[20].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
L_001F1E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E30u);  if (depth < kMaxDepth) unit_0034(c, 410u, depth + 1u); else { c.pc = 0x001F3F70u; return; } if (c.pc != 0x001F1E30u) [[unlikely]] return; }
L_001F1E30:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  goto L_001F1E64; }
    c.r[2].d[0] = 0ull | 32844ull;
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F1E54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001F1EA0; } }
L_001F1E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E5Cu);  if (depth < kMaxDepth) unit_0034(c, 379u, depth + 1u); else { c.pc = 0x001F3910u; return; } if (c.pc != 0x001F1E5Cu) [[unlikely]] return; }
L_001F1E5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2074; } }
L_001F1E64:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E70u); c.r[5].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_0034(c, 374u, depth + 1u); else { c.pc = 0x001F3850u; return; } if (c.pc != 0x001F1E70u) [[unlikely]] return; }
L_001F1E70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001F1E84; } }
L_001F1E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E80u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 379u, depth + 1u); else { c.pc = 0x001F3910u; return; } if (c.pc != 0x001F1E80u) [[unlikely]] return; }
L_001F1E80:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001F1E84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E8Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 373u, depth + 1u); else { c.pc = 0x001F3840u; return; } if (c.pc != 0x001F1E8Cu) [[unlikely]] return; }
L_001F1E8C:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F1E78u | kUnwind; return; } goto L_001F1E78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2074; } }
L_001F1EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1EA8u);  if (depth < kMaxDepth) unit_0034(c, 410u, depth + 1u); else { c.pc = 0x001F3F70u; return; } if (c.pc != 0x001F1EA8u) [[unlikely]] return; }
L_001F1EA8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F1EF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1EC0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 410u, depth + 1u); else { c.pc = 0x001F3F70u; return; } if (c.pc != 0x001F1EC0u) [[unlikely]] return; }
L_001F1EC0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F1ED8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1EEC; } }
L_001F1ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1EE0u);  if (depth < kMaxDepth) unit_0034(c, 410u, depth + 1u); else { c.pc = 0x001F3F70u; return; } if (c.pc != 0x001F1EE0u) [[unlikely]] return; }
L_001F1EE0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 32u);  if (t) { goto L_001F1EFC; } }
L_001F1EEC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001F1EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1EF8u);  if (depth < kMaxDepth) unit_0034(c, 410u, depth + 1u); else { c.pc = 0x001F3F70u; return; } if (c.pc != 0x001F1EF8u) [[unlikely]] return; }
L_001F1EF8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001F1EFC:
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1F10u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0034(c, 381u, depth + 1u); else { c.pc = 0x001F3960u; return; } if (c.pc != 0x001F1F10u) [[unlikely]] return; }
L_001F1F10:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1F28u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 373u, depth + 1u); else { c.pc = 0x001F3840u; return; } if (c.pc != 0x001F1F28u) [[unlikely]] return; }
L_001F1F28:
    set32(c.r[3], ld32((c.r[20].w[0] + 64u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[17].d[0] = c.r[2].d[0] + 0ull;  goto L_001F1F44; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_001F1F44; }
L_001F1F44:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F1FD4; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F1F60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001F2058; } }
L_001F1F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1F68u);  if (depth < kMaxDepth) unit_0034(c, 410u, depth + 1u); else { c.pc = 0x001F3F70u; return; } if (c.pc != 0x001F1F68u) [[unlikely]] return; }
L_001F1F68:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F1FB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1F80u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 410u, depth + 1u); else { c.pc = 0x001F3F70u; return; } if (c.pc != 0x001F1F80u) [[unlikely]] return; }
L_001F1F80:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F1F98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1FAC; } }
L_001F1F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1FA0u);  if (depth < kMaxDepth) unit_0034(c, 410u, depth + 1u); else { c.pc = 0x001F3F70u; return; } if (c.pc != 0x001F1FA0u) [[unlikely]] return; }
L_001F1FA0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 32u);  if (t) { goto L_001F1FBC; } }
L_001F1FAC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001F1FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1FB8u);  if (depth < kMaxDepth) unit_0034(c, 410u, depth + 1u); else { c.pc = 0x001F3F70u; return; } if (c.pc != 0x001F1FB8u) [[unlikely]] return; }
L_001F1FB8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001F1FBC:
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1FCCu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_0034(c, 377u, depth + 1u); else { c.pc = 0x001F38E0u; return; } if (c.pc != 0x001F1FCCu) [[unlikely]] return; }
L_001F1FCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2054; } }
L_001F1FD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1FDCu);  if (depth < kMaxDepth) unit_0034(c, 410u, depth + 1u); else { c.pc = 0x001F3F70u; return; } if (c.pc != 0x001F1FDCu) [[unlikely]] return; }
L_001F1FDC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F2024; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1FF4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 410u, depth + 1u); else { c.pc = 0x001F3F70u; return; } if (c.pc != 0x001F1FF4u) [[unlikely]] return; }
L_001F1FF4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F200C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2020; } }
L_001F200C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2014u);  if (depth < kMaxDepth) unit_0034(c, 410u, depth + 1u); else { c.pc = 0x001F3F70u; return; } if (c.pc != 0x001F2014u) [[unlikely]] return; }
L_001F2014:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 32u);  if (t) { goto L_001F2030; } }
L_001F2020:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001F2024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F202Cu);  if (depth < kMaxDepth) unit_0034(c, 410u, depth + 1u); else { c.pc = 0x001F3F70u; return; } if (c.pc != 0x001F202Cu) [[unlikely]] return; }
L_001F202C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001F2030:
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2040u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_0034(c, 376u, depth + 1u); else { c.pc = 0x001F38B0u; return; } if (c.pc != 0x001F2040u) [[unlikely]] return; }
L_001F2040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2048u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 373u, depth + 1u); else { c.pc = 0x001F3840u; return; } if (c.pc != 0x001F2048u) [[unlikely]] return; }
L_001F2048:
    set32(c.r[5], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2054u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 374u, depth + 1u); else { c.pc = 0x001F3850u; return; } if (c.pc != 0x001F2054u) [[unlikely]] return; }
L_001F2054:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001F2058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2060u);  if (depth < kMaxDepth) unit_0034(c, 373u, depth + 1u); else { c.pc = 0x001F3840u; return; } if (c.pc != 0x001F2060u) [[unlikely]] return; }
L_001F2060:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);  goto L_001F2070; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 72u), 0u);  if (t) { goto L_001F2074; } }
L_001F2070:
    st32((c.r[20].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_001F2074:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001F2078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2080u);  if (depth < kMaxDepth) unit_0034(c, 363u, depth + 1u); else { c.pc = 0x001F3620u; return; } if (c.pc != 0x001F2080u) [[unlikely]] return; }
L_001F2080:
    set32(c.r[3], c.r[2].w[0] + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  if (t) { goto L_001F2094; } }
    set32(c.r[3], c.r[3].w[0] + 15u);
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_001F2094:
    set32(c.r[6], ld32((c.r[20].w[0] + 64u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + 25552u);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[1].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F20D8; } }
    set32(c.r[16], 0u + 16u);
    c.budget -= 1;
L_001F20D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 25554u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[1].d[0] = c.r[19].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F20FC; } }
    c.r[21].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001F20FC:
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; c.r[18].d[0] = c.r[3].d[0] & 15ull;  if (t) { goto L_001F2128; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  goto L_001F212C; }
    set32(c.r[18], c.r[18].w[0] - 16u);
    c.budget -= 1;
L_001F2128:
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 1;
L_001F212C:
    c.budget -= 2;
    if (c.r[3].sd[0] >= 0) { set32(c.r[3], ld32((c.r[20].w[0] + 68u)));  goto L_001F2140; }
    set32(c.r[3], c.r[3].w[0] + 15u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 3;
L_001F2140:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F21D0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2158u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0034(c, 395u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001F2158u) [[unlikely]] return; }
L_001F2158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F21D0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2170u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0034(c, 395u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001F2170u) [[unlikely]] return; }
L_001F2170:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 2u);  goto L_001F2180; }
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 2;
L_001F2180:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F218Cu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 395u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001F218Cu) [[unlikely]] return; }
L_001F218C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F219C; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_001F219C:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F21A8u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0034(c, 395u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001F21A8u) [[unlikely]] return; }
L_001F21A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F21B8; }
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_001F21B8:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F21C4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0034(c, 395u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001F21C4u) [[unlikely]] return; }
L_001F21C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F21D0; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001F21D0:
    c.budget -= 2;
    if (c.r[18].sd[0] >= 0) { c.r[1].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;  goto L_001F21E0; }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 2;
L_001F21E0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F21EC; } }
    set32(c.r[18], 0u + 15u);
    c.budget -= 1;
L_001F21EC:
    c.budget -= 2;
    if (c.r[17].sd[0] >= 0) { set32(c.r[3], c.r[19].w[0] - 1u);  goto L_001F21FC; }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[19].w[0] - 1u);
    c.budget -= 2;
L_001F21FC:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 56u)));  goto L_001F2210; }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 2;
L_001F2210:
    set32(c.r[3], c.r[17].w[0] << 4);
    set32(c.r[5], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    st32((c.r[3].w[0] + 76u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 15;
    { const bool t = c.r[3].sd[0] >= 0; c.r[9].d[0] = c.r[3].d[0] & 15ull;  if (t) { goto L_001F2258; } }
    c.budget -= 2;
    if (c.r[9].d[0] == 0ull) { set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  goto L_001F225C; }
    set32(c.r[9], c.r[9].w[0] - 16u);
    c.budget -= 1;
L_001F2258:
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 1;
L_001F225C:
    c.budget -= 2;
    if (c.r[3].sd[0] >= 0) { set32(c.r[3], c.r[4].w[0] + c.r[20].w[0]);  goto L_001F2270; }
    set32(c.r[3], c.r[3].w[0] + 15u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    set32(c.r[3], c.r[4].w[0] + c.r[20].w[0]);
    c.budget -= 3;
L_001F2270:
    set32(c.r[7], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 84u)));
    c.r[1].d[0] = c.r[9].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 80u);  if (t) { goto L_001F2288; } }
    c.r[7].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 1;
L_001F2288:
    set32(c.r[4], c.r[16].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;  goto L_001F22A4; }
    set32(c.r[7], c.r[9].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001F22A4:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[21].w[0] - 1u);  goto L_001F22B4; }
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] - 1u);
    c.budget -= 2;
L_001F22B4:
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F22C8; } }
    set32(c.r[6], c.r[8].w[0] - c.r[4].w[0]);
    c.budget -= 1;
L_001F22C8:
    c.budget -= 2;
    if (c.r[7].sd[0] >= 0) { set32(c.r[3], 0u + 16u);  goto L_001F22D8; }
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 16u);
    c.budget -= 2;
L_001F22D8:
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F22EC; } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001F22EC:
    c.budget -= 2;
    if (c.r[6].sd[0] >= 0) { set32(c.r[3], c.r[19].w[0] - c.r[21].w[0]);  goto L_001F22FC; }
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[19].w[0] - c.r[21].w[0]);
    c.budget -= 2;
L_001F22FC:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { st32((c.r[5].w[0]), c.r[7].w[0]);  goto L_001F2310; }
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.budget -= 2;
L_001F2310:
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    st32((c.r[3].w[0] + 84u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F2444; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2344u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0034(c, 395u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001F2344u) [[unlikely]] return; }
L_001F2344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2444; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001F238C; } }
L_001F2354:
    set32(c.r[5], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001F238C; }
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[4], ld32((c.r[4].w[0] + 200u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F24E8; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001F238C:
    c.r[1].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 480u)));  goto L_001F23AC; }
    set32(c.r[3], ld32((c.r[20].w[0] + 480u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F2354u | kUnwind; return; } goto L_001F2354; }
    set32(c.r[3], ld32((c.r[20].w[0] + 480u)));
    c.budget -= 1;
L_001F23AC:
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 480u), c.r[2].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[6], c.r[16].w[0] + c.r[20].w[0]);
    st32((c.r[6].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] + 76u)));
    st32((c.r[6].w[0] + 200u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 160u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F23FCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 353u, depth + 1u); else { c.pc = 0x001F3480u; return; } if (c.pc != 0x001F23FCu) [[unlikely]] return; }
L_001F23FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2418u); set32(c.r[4], c.r[2].w[0] + 240u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F2418u) [[unlikely]] return; }
L_001F2418:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + c.r[20].w[0]);  goto L_001F2440; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F243C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F243Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F243Cu) [[unlikely]] return; }
L_001F243C:
    set32(c.r[3], c.r[16].w[0] + c.r[20].w[0]);
    c.budget -= 1;
L_001F2440:
    st32((c.r[3].w[0] + 440u), 0u);
    c.budget -= 1;
L_001F2444:
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 1;
L_001F2448:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F24E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30628u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 176u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_001F2468; } }
    set32(c.r[3], c.r[3].w[0] + 31u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_001F2468:
    set32(c.r[3], ld32((c.r[20].w[0] + 560u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[20].w[0] + 560u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30628u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 136u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_001F248C; } }
    set32(c.r[3], c.r[3].w[0] + 31u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_001F248C:
    set32(c.r[4], ld32((c.r[20].w[0] + 564u)));
    set32(c.r[3], 0u + 2048u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[20].w[0] + 564u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30628u)));
    c.r[4].d[0] = ld64((c.r[5].w[0] + 72u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F24E8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 216u)));
    set32(c.r[2], c.r[2].w[0] + 128u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F24CCu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x001F24CCu) [[unlikely]] return; }
L_001F24CC:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F24D8u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x001F24D8u) [[unlikely]] return; }
L_001F24D8:
    c.f[0] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    st32((c.r[20].w[0] + 568u), c.f[0]);
    c.budget -= 4;
L_001F24E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_001F24EC:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_001F2510:
    set32(c.r[29], c.r[29].w[0] - 688u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 15;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F3278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2554u);  if (depth < kMaxDepth) unit_0034(c, 363u, depth + 1u); else { c.pc = 0x001F3620u; return; } if (c.pc != 0x001F2554u) [[unlikely]] return; }
L_001F2554:
    set32(c.r[2], c.r[2].w[0] + 15u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));  if (t) { goto L_001F2568; } }
    set32(c.r[2], c.r[2].w[0] + 15u);
    set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_001F2568:
    set32(c.r[5], ld32((c.r[20].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 25552u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (t) { goto L_001F25B0; } }
    set32(c.r[2], 0u + 16u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 2;
L_001F25B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 25554u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[1].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { c.r[23].d[0] = c.r[2].d[0] + 0ull;  goto L_001F25D0; }
L_001F25D0:
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F28BC; }
    c.f[1] = ld32((c.r[20].w[0] + 72u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[2] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  goto L_001F261C; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_001F2634; } }
L_001F261C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[18].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
L_001F2634:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2640u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F2640u) [[unlikely]] return; }
L_001F2640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001F2690; } }
L_001F2648:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  goto L_001F267C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2658u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 373u, depth + 1u); else { c.pc = 0x001F3840u; return; } if (c.pc != 0x001F2658u) [[unlikely]] return; }
L_001F2658:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001F2678; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2670u); set32(c.r[5], c.r[5].w[0] + 25959u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F2670u) [[unlikely]] return; }
L_001F2670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_001F2690; } }
L_001F2678:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 1;
L_001F267C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F268Cu); set32(c.r[5], c.r[5].w[0] + 25961u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F268Cu) [[unlikely]] return; }
L_001F268C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001F2690:
    set32(c.r[2], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[19], c.r[2].w[0] + 516u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 516u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F2648u | kUnwind; return; } goto L_001F2648; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 656u);
    st32((c.r[29].w[0] + 660u), 0u);
    st32((c.r[29].w[0] + 656u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F26BCu); st32((c.r[29].w[0] + 672u), 0u);  if (depth < kMaxDepth) unit_0034(c, 385u, depth + 1u); else { c.pc = 0x001F3A50u; return; } if (c.pc != 0x001F26BCu) [[unlikely]] return; }
L_001F26BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 64u)));  goto L_001F26E8; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F26D0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F26D0u) [[unlikely]] return; }
L_001F26D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F26E0u); set32(c.r[5], c.r[5].w[0] + 25964u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F26E0u) [[unlikely]] return; }
L_001F26E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F283C; } }
L_001F26E8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 672u)));  goto L_001F27A4; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 672u)));  goto L_001F2704; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F283C; } }
L_001F2704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001F2758; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F271C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F283C; } }
L_001F271C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F272C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 656u)));  if (t) { goto L_001F2740; } }
L_001F272C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001F2740; }
    c.f[0] = ld32((c.r[29].w[0] + 656u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001F2740:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2750u); set32(c.r[5], c.r[5].w[0] + 25973u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F2750u) [[unlikely]] return; }
L_001F2750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F283C; } }
L_001F2758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F276C; } }
    c.f[0] = ld32((c.r[29].w[0] + 656u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001F2780; } }
L_001F276C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F277C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[29].w[0] + 656u));  if (t) { goto L_001F2780; } }
L_001F277C:
    c.f[12] = 0u;
    c.budget -= 1;
L_001F2780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2788u);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001F2788u) [[unlikely]] return; }
L_001F2788:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F279Cu); set32(c.r[5], c.r[5].w[0] + 25979u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F279Cu) [[unlikely]] return; }
L_001F279C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F283C; } }
L_001F27A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001F27F8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F27BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F283C; } }
L_001F27BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F27CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 656u)));  if (t) { goto L_001F27E0; } }
L_001F27CC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001F27E0; }
    c.f[0] = ld32((c.r[29].w[0] + 656u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001F27E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F27F0u); set32(c.r[5], c.r[5].w[0] + 25987u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F27F0u) [[unlikely]] return; }
L_001F27F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F283C; } }
L_001F27F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F280C; } }
    c.f[0] = ld32((c.r[29].w[0] + 656u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001F2820; } }
L_001F280C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F281C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[29].w[0] + 656u));  if (t) { goto L_001F2820; } }
L_001F281C:
    c.f[12] = 0u;
    c.budget -= 1;
L_001F2820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2828u);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001F2828u) [[unlikely]] return; }
L_001F2828:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F283Cu); set32(c.r[5], c.r[5].w[0] + 25979u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F283Cu) [[unlikely]] return; }
L_001F283C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 27072u)));
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001F2858; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001F2870; } }
L_001F2858:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 6;
L_001F2870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[1] = ld32((c.r[20].w[0] + 72u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[2].w[0] + 27140u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2894u); st32((c.r[20].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0035(c, 12u, depth + 1u); else { c.pc = 0x001F4150u; return; } if (c.pc != 0x001F2894u) [[unlikely]] return; }
L_001F2894:
    set32(c.r[4], ld32((c.r[29].w[0] + 660u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F28B8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F28B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F28B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F28B8u) [[unlikely]] return; }
L_001F28B8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001F28BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F28C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F28C4u) [[unlikely]] return; }
L_001F28C4:
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[6], ld32((c.r[20].w[0] + 60u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[7], c.r[7].w[0] + 2544u);
    set32(c.r[8], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 2576u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[28].w[0] - 31816u);
    set32(c.r[6], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0])));
    set32(c.r[7], ld32((c.r[5].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2918u); set32(c.r[5], c.r[5].w[0] + 25997u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F2918u) [[unlikely]] return; }
L_001F2918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2920u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 12u, depth + 1u); else { c.pc = 0x001F4150u; return; } if (c.pc != 0x001F2920u) [[unlikely]] return; }
L_001F2920:
    set32(c.r[9], ld32((c.r[20].w[0] + 64u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[9].w[0] << 2);
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[9], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] + 25536u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 25540u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 25544u);
    set32(c.r[2], c.r[9].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 25548u);
    set32(c.r[9], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 256u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 40;
    { const bool t = c.r[3].sd[0] >= 0; c.r[22].d[0] = c.r[3].d[0] & 15ull;  if (t) { goto L_001F29CC; } }
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  goto L_001F29D0; }
    set32(c.r[22], c.r[22].w[0] - 16u);
    c.budget -= 1;
L_001F29CC:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 1;
L_001F29D0:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_001F29E4; } }
    set32(c.r[2], c.r[3].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 3;
L_001F29E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u - 1u);  if (t) { goto L_001F2EAC; } }
L_001F29EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 1u);  if (t) { goto L_001F2E74; } }
L_001F29F4:
    c.budget -= 2;
    if (c.r[17].sd[0] >= 0) { set32(c.r[3], ld32((c.r[20].w[0] + 56u)));  goto L_001F2AB0; }
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 84u)));
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 10;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F2A48; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2A30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F2A30u) [[unlikely]] return; }
L_001F2A30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2A40u); set32(c.r[5], c.r[5].w[0] + 26012u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F2A40u) [[unlikely]] return; }
L_001F2A40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2A60; } }
L_001F2A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2A50u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F2A50u) [[unlikely]] return; }
L_001F2A50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2A60u); set32(c.r[5], c.r[5].w[0] + 26014u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F2A60u) [[unlikely]] return; }
L_001F2A60:
    c.budget -= 2;
    if (c.r[19].sd[0] >= 0) { set32(c.r[3], ld32((c.r[20].w[0] + 56u)));  goto L_001F2A80; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2A78u); set32(c.r[5], c.r[5].w[0] + 26016u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F2A78u) [[unlikely]] return; }
L_001F2A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_001F2E74; } }
L_001F2A80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 26020u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2AA8u); set32(c.r[6], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F2AA8u) [[unlikely]] return; }
L_001F2AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2E70; } }
L_001F2AB0:
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[30], c.r[3].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001F2B14; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[3].d[0];  if (t) { goto L_001F2B14; } }
    set32(c.r[18], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2AFCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F2AFCu) [[unlikely]] return; }
L_001F2AFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2B0Cu); set32(c.r[5], c.r[5].w[0] + 26026u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F2B0Cu) [[unlikely]] return; }
L_001F2B0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2B30; } }
L_001F2B14:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_001F2B30; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2B2Cu); set32(c.r[5], c.r[5].w[0] + 26014u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F2B2Cu) [[unlikely]] return; }
L_001F2B2C:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F2B30:
    c.budget -= 2;
    if (c.r[19].sd[0] >= 0) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F2BA8; }
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    if (c.r[22].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F2B70; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2B68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F2B68u) [[unlikely]] return; }
L_001F2B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 56u)));  if (t) { goto L_001F2B7C; } }
L_001F2B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2B78u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F2B78u) [[unlikely]] return; }
L_001F2B78:
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 1;
L_001F2B7C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2BA0u); set32(c.r[6], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F2BA0u) [[unlikely]] return; }
L_001F2BA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2E4C; } }
L_001F2BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2BB0u);  if (depth < kMaxDepth) unit_0034(c, 363u, depth + 1u); else { c.pc = 0x001F3620u; return; } if (c.pc != 0x001F2BB0u) [[unlikely]] return; }
L_001F2BB0:
    c.r[1].d[0] = c.r[30].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 208u)));  goto L_001F2E44; }
    set32(c.r[6], ld32((c.r[20].w[0] + 56u)));
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2BD0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 353u, depth + 1u); else { c.pc = 0x001F3480u; return; } if (c.pc != 0x001F2BD0u) [[unlikely]] return; }
L_001F2BD0:
    set32(c.r[4], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[2], 0u + 2u);
    st8((c.r[29].w[0] + 623u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_001F2DC8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 64u)));  goto L_001F2D18; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 64u)));  goto L_001F2C00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001F2DDC; } }
L_001F2C00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001F2CA8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2C18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2DD8; } }
L_001F2C18:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001F2C28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 624u)));  if (t) { goto L_001F2C3C; } }
L_001F2C28:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_001F2C3C; }
    c.f[0] = ld32((c.r[29].w[0] + 624u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 3;
L_001F2C3C:
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[29].w[0] + 192u), c.r[4].w[0]);  goto L_001F2C7C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[4].d[0] << 48;  goto L_001F2C74; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[4].d[0] << 56;  goto L_001F2C68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 192u)));  if (t) { goto L_001F2C80; } }
L_001F2C68:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (t) { goto L_001F2C7C; } }
L_001F2C74:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 2;
L_001F2C7C:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 1;
L_001F2C80:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[6], ld32((c.r[29].w[0] + 240u)));  goto L_001F2C90; }
    set32(c.r[30], 0u + 1u);
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 2;
L_001F2C90:
    set32(c.r[4], c.r[29].w[0] + 592u);
    set32(c.r[7], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2CA0u); set32(c.r[5], 0u + 31u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001F2CA0u) [[unlikely]] return; }
L_001F2CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2DD8; } }
L_001F2CA8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001F2CB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 624u)));  if (t) { goto L_001F2CCC; } }
L_001F2CB8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_001F2CCC; }
    c.f[0] = ld32((c.r[29].w[0] + 624u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 3;
L_001F2CCC:
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = c.r[4].d[0] + 0ull;  goto L_001F2CF0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = c.r[4].d[0] & 65535ull;  goto L_001F2CF0; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = c.r[4].d[0] & 255ull;  goto L_001F2CF0; }
L_001F2CF0:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[4].d[0]) { set32(c.r[6], ld32((c.r[29].w[0] + 240u)));  goto L_001F2D00; }
    set32(c.r[30], 0u + 1u);
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 2;
L_001F2D00:
    set32(c.r[4], c.r[29].w[0] + 592u);
    set32(c.r[5], 0u + 31u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D10u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001F2D10u) [[unlikely]] return; }
L_001F2D10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2DD8; } }
L_001F2D18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001F2D44; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 208u)));  goto L_001F2D30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2DD8; } }
L_001F2D30:
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D3Cu); set32(c.r[5], 0u + 31u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001F2D3Cu) [[unlikely]] return; }
L_001F2D3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2DD8; } }
L_001F2D44:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001F2D58; } }
    c.f[0] = ld32((c.r[29].w[0] + 624u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001F2D6C; } }
L_001F2D58:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F2D68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 624u));  if (t) { goto L_001F2D6C; } }
L_001F2D68:
    c.f[0] = 0u;
    c.budget -= 1;
L_001F2D6C:
    st32((c.r[29].w[0] + 684u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], ld32((c.r[29].w[0] + 684u)));  if (t) { goto L_001F2D9C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = c.r[4].d[0] & 65535ull;  goto L_001F2DA0; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = c.r[4].d[0] & 255ull;  goto L_001F2DA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2DA0; } }
L_001F2D9C:
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_001F2DA0:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[4].d[0]) { set32(c.r[6], ld32((c.r[29].w[0] + 224u)));  goto L_001F2DB0; }
    set32(c.r[30], 0u + 1u);
    set32(c.r[6], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 2;
L_001F2DB0:
    set32(c.r[4], c.r[29].w[0] + 592u);
    set32(c.r[5], 0u + 31u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2DC0u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001F2DC0u) [[unlikely]] return; }
L_001F2DC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2DD8; } }
L_001F2DC8:
    set32(c.r[6], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2DD8u); set32(c.r[5], 0u + 31u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001F2DD8u) [[unlikely]] return; }
L_001F2DD8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001F2DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2DE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F2DE4u) [[unlikely]] return; }
L_001F2DE4:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_001F2DF8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2DF8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F2DF8u) [[unlikely]] return; }
L_001F2DF8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F2E10; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2E0Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F2E0Cu) [[unlikely]] return; }
L_001F2E0C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001F2E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2E18u); set32(c.r[5], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F2E18u) [[unlikely]] return; }
L_001F2E18:
    set32(c.r[4], ld32((c.r[29].w[0] + 628u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F2E4C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F2E4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2E3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F2E3Cu) [[unlikely]] return; }
L_001F2E3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2E4C; } }
L_001F2E44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2E4Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F2E4Cu) [[unlikely]] return; }
L_001F2E4C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001F2E70; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2E60u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F2E60u) [[unlikely]] return; }
L_001F2E60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2E70u); set32(c.r[5], c.r[5].w[0] + 26028u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F2E70u) [[unlikely]] return; }
L_001F2E70:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001F2E74:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F29F4u | kUnwind; return; } goto L_001F29F4; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F2EA0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2E9Cu); set32(c.r[5], c.r[5].w[0] + 26014u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F2E9Cu) [[unlikely]] return; }
L_001F2E9C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001F2EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2EA8u);  if (depth < kMaxDepth) unit_0035(c, 12u, depth + 1u); else { c.pc = 0x001F4150u; return; } if (c.pc != 0x001F2EA8u) [[unlikely]] return; }
L_001F2EA8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001F2EAC:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[18].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F29ECu | kUnwind; return; } goto L_001F29EC; }
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2ED8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 363u, depth + 1u); else { c.pc = 0x001F3620u; return; } if (c.pc != 0x001F2ED8u) [[unlikely]] return; }
L_001F2ED8:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 52u)));  goto L_001F327C; }
    set32(c.r[6], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2EF8u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 353u, depth + 1u); else { c.pc = 0x001F3480u; return; } if (c.pc != 0x001F2EF8u) [[unlikely]] return; }
L_001F2EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2F00u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 12u, depth + 1u); else { c.pc = 0x001F4150u; return; } if (c.pc != 0x001F2F00u) [[unlikely]] return; }
L_001F2F00:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2F0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F2F0Cu) [[unlikely]] return; }
L_001F2F0C:
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 2592u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 26030u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2F38u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F2F38u) [[unlikely]] return; }
L_001F2F38:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2F44u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F2F44u) [[unlikely]] return; }
L_001F2F44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2F54u); set32(c.r[5], c.r[5].w[0] + 26039u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F2F54u) [[unlikely]] return; }
L_001F2F54:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2F60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F2F60u) [[unlikely]] return; }
L_001F2F60:
    set32(c.r[3], ld32((c.r[29].w[0] + 576u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001F2FB4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001F2FA0; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001F2F8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001F2FC4; } }
L_001F2F8C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2F98u); set32(c.r[5], c.r[5].w[0] + 26047u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F2F98u) [[unlikely]] return; }
L_001F2F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2FC0; } }
L_001F2FA0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2FACu); set32(c.r[5], c.r[5].w[0] + 26055u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F2FACu) [[unlikely]] return; }
L_001F2FAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2FC0; } }
L_001F2FB4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2FC0u); set32(c.r[5], c.r[5].w[0] + 26063u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F2FC0u) [[unlikely]] return; }
L_001F2FC0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001F2FC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2FCCu);  if (depth < kMaxDepth) unit_0035(c, 12u, depth + 1u); else { c.pc = 0x001F4150u; return; } if (c.pc != 0x001F2FCCu) [[unlikely]] return; }
L_001F2FCC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2FD8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F2FD8u) [[unlikely]] return; }
L_001F2FD8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2FECu); set32(c.r[5], c.r[5].w[0] + 26071u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F2FECu) [[unlikely]] return; }
L_001F2FEC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2FF8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F2FF8u) [[unlikely]] return; }
L_001F2FF8:
    set32(c.r[3], ld32((c.r[29].w[0] + 576u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001F30E4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001F307C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);  goto L_001F3024; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001F3150; } }
L_001F3024:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3030u); set32(c.r[5], c.r[5].w[0] + 26079u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F3030u) [[unlikely]] return; }
L_001F3030:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F303Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F303Cu) [[unlikely]] return; }
L_001F303C:
    set32(c.r[3], ld32((c.r[29].w[0] + 576u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001F3050; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 560u)));  if (t) { goto L_001F3064; } }
L_001F3050:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_001F3064; }
    c.f[0] = ld32((c.r[29].w[0] + 560u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 3;
L_001F3064:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3074u); set32(c.r[5], c.r[5].w[0] + 25809u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F3074u) [[unlikely]] return; }
L_001F3074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F314C; } }
L_001F307C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3088u); set32(c.r[5], c.r[5].w[0] + 26079u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F3088u) [[unlikely]] return; }
L_001F3088:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3094u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F3094u) [[unlikely]] return; }
L_001F3094:
    set32(c.r[3], ld32((c.r[29].w[0] + 576u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001F30AC; }
    c.f[0] = ld32((c.r[29].w[0] + 560u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001F30C0; } }
L_001F30AC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F30BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[29].w[0] + 560u));  if (t) { goto L_001F30C0; } }
L_001F30BC:
    c.f[12] = 0u;
    c.budget -= 1;
L_001F30C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F30C8u);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001F30C8u) [[unlikely]] return; }
L_001F30C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F30DCu); set32(c.r[5], c.r[5].w[0] + 25814u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F30DCu) [[unlikely]] return; }
L_001F30DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F314C; } }
L_001F30E4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F30F0u); set32(c.r[5], c.r[5].w[0] + 26087u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F30F0u) [[unlikely]] return; }
L_001F30F0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F30FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F30FCu) [[unlikely]] return; }
L_001F30FC:
    set32(c.r[3], ld32((c.r[29].w[0] + 576u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 564u)));  goto L_001F3118; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 18344u);  if (t) { goto L_001F3128; } }
L_001F3118:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 31912u)));  goto L_001F3128; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 12u);  if (t) { goto L_001F3128; } }
L_001F3128:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3134u); set32(c.r[6], 0u + 255u);  if (depth < kMaxDepth) unit_0009(c, 232u, depth + 1u); else { c.pc = 0x00147D60u; return; } if (c.pc != 0x001F3134u) [[unlikely]] return; }
L_001F3134:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 26095u);
    set32(c.r[6], c.r[29].w[0] + 304u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F314Cu); st8((c.r[29].w[0] + 559u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F314Cu) [[unlikely]] return; }
L_001F314C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001F3150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3158u);  if (depth < kMaxDepth) unit_0035(c, 12u, depth + 1u); else { c.pc = 0x001F4150u; return; } if (c.pc != 0x001F3158u) [[unlikely]] return; }
L_001F3158:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3168u); set32(c.r[5], c.r[5].w[0] + 26098u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F3168u) [[unlikely]] return; }
L_001F3168:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3174u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F3174u) [[unlikely]] return; }
L_001F3174:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3184u); set32(c.r[5], c.r[5].w[0] + 26105u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F3184u) [[unlikely]] return; }
L_001F3184:
    set32(c.r[3], ld32((c.r[29].w[0] + 576u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F3210; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F31DC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F31B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001F3238; } }
L_001F31B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F31C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[29].w[0] + 560u)));  if (t) { goto L_001F31D4; } }
L_001F31C0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[21].d[0] = 0ull + 0ull;  goto L_001F31D4; }
    c.f[0] = ld32((c.r[29].w[0] + 560u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[21], c.f[0]);
    c.budget -= 3;
L_001F31D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3234; } }
L_001F31DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F31F0; } }
    c.f[0] = ld32((c.r[29].w[0] + 560u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001F3204; } }
L_001F31F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F3200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 560u));  if (t) { goto L_001F3204; } }
L_001F3200:
    c.f[0] = 0u;
    c.budget -= 1;
L_001F3204:
    st32((c.r[29].w[0] + 680u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[29].w[0] + 680u)));  if (t) { goto L_001F3234; } }
L_001F3210:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 564u)));  goto L_001F3224; }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 18344u);  if (t) { goto L_001F3234; } }
L_001F3224:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[21], ld32((c.r[28].w[0] - 31912u)));  goto L_001F3234; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[2].w[0] + 12u);  if (t) { goto L_001F3234; } }
L_001F3234:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001F3238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3240u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F3240u) [[unlikely]] return; }
L_001F3240:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3254u); set32(c.r[5], c.r[5].w[0] + 26113u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F3254u) [[unlikely]] return; }
L_001F3254:
    set32(c.r[4], ld32((c.r[29].w[0] + 564u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F3278; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F3278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3278u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F3278u) [[unlikely]] return; }
L_001F3278:
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 1;
L_001F327C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_001F3450; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_001F3430; } }
L_001F3290:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F32B8; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F32A4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F32A4u) [[unlikely]] return; }
L_001F32A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F32B4u); set32(c.r[5], c.r[5].w[0] + 26121u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F32B4u) [[unlikely]] return; }
L_001F32B4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001F32B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F32C0u);  if (depth < kMaxDepth) unit_0035(c, 12u, depth + 1u); else { c.pc = 0x001F4150u; return; } if (c.pc != 0x001F32C0u) [[unlikely]] return; }
L_001F32C0:
    set32(c.r[2], ld32((c.r[20].w[0] + 480u)));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);  goto L_001F32D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001F32E4; } }
L_001F32D8:
    set32(c.r[2], 0u + 10u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    c.budget -= 3;
L_001F32E4:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[18], c.r[20].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[17], c.r[18].w[0] + 200u);
    set32(c.r[7], ld32((c.r[18].w[0] + 200u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3308u); set32(c.r[16], c.r[18].w[0] + 160u);  if (depth < kMaxDepth) unit_0034(c, 353u, depth + 1u); else { c.pc = 0x001F3480u; return; } if (c.pc != 0x001F3308u) [[unlikely]] return; }
L_001F3308:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 256u)));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001F332C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 240u)));  if (t) { goto L_001F3340; } }
L_001F332C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_001F3340; }
    c.f[0] = ld32((c.r[4].w[0] + 240u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 3;
L_001F3340:
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001F3354; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 272u)));  if (t) { goto L_001F3368; } }
L_001F3354:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F3368; }
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 3;
L_001F3368:
    c.f[1] = ld32((c.r[18].w[0] + 440u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_001F3384; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F3384:
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F33AC; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F33A4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F33A4u) [[unlikely]] return; }
L_001F33A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 288u)));  if (t) { goto L_001F33B8; } }
L_001F33AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F33B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 13u, depth + 1u); else { c.pc = 0x001F4170u; return; } if (c.pc != 0x001F33B4u) [[unlikely]] return; }
L_001F33B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 1;
L_001F33B8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001F33C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[29].w[0] + 272u)));  if (t) { goto L_001F33DC; } }
L_001F33C8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_001F33DC; }
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.budget -= 3;
L_001F33DC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 2624u);
    set32(c.r[7], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3408u); set32(c.r[5], c.r[5].w[0] + 26129u);  if (depth < kMaxDepth) unit_0035(c, 8u, depth + 1u); else { c.pc = 0x001F4070u; return; } if (c.pc != 0x001F3408u) [[unlikely]] return; }
L_001F3408:
    set32(c.r[4], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_001F3430; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001F342C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F342Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F342Cu) [[unlikely]] return; }
L_001F342C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_001F3430:
    c.r[1].d[0] = c.r[21].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F344C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 480u)));
    c.r[3].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3290u | kUnwind; return; } goto L_001F3290; } }
L_001F344C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_001F3450:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 688u);  c.pc = t; return; }
L_001F3480:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 488u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001F34B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F34B0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 201u, depth + 1u); else { c.pc = 0x001FD860u; return; } if (c.pc != 0x001F34B0u) [[unlikely]] return; }
L_001F34B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001F3538; } }
L_001F34B8:
    set32(c.r[3], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F34FC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F34FC; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F34FC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F34FC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F34FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_001F3520; } }
L_001F34FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3504u);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x001F3504u) [[unlikely]] return; }
L_001F3504:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3518u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 255u, depth + 1u); else { c.pc = 0x001FB4C0u; return; } if (c.pc != 0x001F3518u) [[unlikely]] return; }
L_001F3518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3534; } }
L_001F3520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3528u); set32(c.r[4], c.r[4].w[0] + 26139u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F3528u) [[unlikely]] return; }
L_001F3528:
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0]), 0u);
    st32((c.r[18].w[0] + 16u), 0u);
    c.budget -= 3;
L_001F3534:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001F3538:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F3550:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 488u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001F3590; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3588u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 215u, depth + 1u); else { c.pc = 0x001FD9E0u; return; } if (c.pc != 0x001F3588u) [[unlikely]] return; }
L_001F3588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001F3604; } }
L_001F3590:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F35D4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F35D4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F35D4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F35D4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F35D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_001F35F8; } }
L_001F35D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F35DCu);  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x001F35DCu) [[unlikely]] return; }
L_001F35DC:
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F35F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 261u, depth + 1u); else { c.pc = 0x001FB5B0u; return; } if (c.pc != 0x001F35F0u) [[unlikely]] return; }
L_001F35F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3600; } }
L_001F35F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3600u); set32(c.r[4], c.r[4].w[0] + 26139u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x001F3600u) [[unlikely]] return; }
L_001F3600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001F3604:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F3620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3634u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 396u, depth + 1u); else { c.pc = 0x001FF260u; return; } if (c.pc != 0x001F3634u) [[unlikely]] return; }
L_001F3634:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3640u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 249u, depth + 1u); else { c.pc = 0x001FB450u; return; } if (c.pc != 0x001F3640u) [[unlikely]] return; }
L_001F3640:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F3650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 492u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3670u); set32(c.r[4], c.r[16].w[0] + 496u);  if (depth < kMaxDepth) unit_0035(c, 34u, depth + 1u); else { c.pc = 0x001F43D0u; return; } if (c.pc != 0x001F3670u) [[unlikely]] return; }
L_001F3670:
    set32(c.r[2], ld32((c.r[16].w[0] + 492u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[3], 0u + 8u);  goto L_001F3754; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 11u);  goto L_001F3690; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 547u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001F3810; } }
L_001F3690:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 548u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 512u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F382C; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001F3700; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F36BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F380C; } }
L_001F36BC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F36CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[16].w[0] + 496u)));  if (t) { goto L_001F36E0; } }
L_001F36CC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_001F36E0; }
    c.f[0] = ld32((c.r[16].w[0] + 496u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 3;
L_001F36E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 548u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[16].w[0] + 516u);
    set32(c.r[6], c.r[6].w[0] + 25809u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F36F8u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001F36F8u) [[unlikely]] return; }
L_001F36F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F380C; } }
L_001F3700:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F3714; } }
    c.f[0] = ld32((c.r[16].w[0] + 496u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001F3728; } }
L_001F3714:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001F3724; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[16].w[0] + 496u));  if (t) { goto L_001F3728; } }
L_001F3724:
    c.f[12] = 0u;
    c.budget -= 1;
L_001F3728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3730u);  if (depth < kMaxDepth) unit_000B(c, 48u, depth + 1u); else { c.pc = 0x0014DF70u; return; } if (c.pc != 0x001F3730u) [[unlikely]] return; }
L_001F3730:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 548u)));
    set32(c.r[4], c.r[16].w[0] + 516u);
    set32(c.r[6], c.r[6].w[0] + 25814u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F374Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001F374Cu) [[unlikely]] return; }
L_001F374C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F380C; } }
L_001F3754:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 548u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 512u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F382C; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001F37C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F3780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F380C; } }
L_001F3780:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F3790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[16].w[0] + 496u)));  if (t) { goto L_001F37A4; } }
L_001F3790:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_001F37A4; }
    c.f[0] = ld32((c.r[16].w[0] + 496u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.budget -= 3;
L_001F37A4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 548u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[16].w[0] + 516u);
    set32(c.r[6], c.r[6].w[0] + 26173u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F37BCu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001F37BCu) [[unlikely]] return; }
L_001F37BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F380C; } }
L_001F37C4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F37D8; } }
    c.f[0] = ld32((c.r[16].w[0] + 496u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001F37EC; } }
L_001F37D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001F37E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 496u));  if (t) { goto L_001F37EC; } }
L_001F37E8:
    c.f[0] = 0u;
    c.budget -= 1;
L_001F37EC:
    st32((c.r[29].w[0] + 44u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 548u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 44u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[16].w[0] + 516u);
    set32(c.r[6], c.r[6].w[0] + 26173u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F380Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0009(c, 184u, depth + 1u); else { c.pc = 0x00147080u; return; } if (c.pc != 0x001F380Cu) [[unlikely]] return; }
L_001F380C:
    st8((c.r[16].w[0] + 547u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001F3810:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 548u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 516u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 548u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 552u), c.r[3].w[0]);
    c.budget -= 7;
L_001F382C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F3840:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 552u)));  c.pc = t; return; }
L_001F3850:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; st32((c.r[4].w[0] + 552u), c.r[5].w[0]);  if (t) { goto L_001F385C; } }
    st32((c.r[4].w[0] + 552u), 0u);
    c.budget -= 1;
L_001F385C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 548u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 552u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F3878; } }
    st32((c.r[4].w[0] + 552u), c.r[5].w[0]);
    c.budget -= 1;
L_001F3878:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F3880:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 548u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 552u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);  goto L_001F38A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F38A4; } }
L_001F38A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 516u)));
    c.budget -= 1;
L_001F38A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F38B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 548u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 552u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F38D0; } }
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 516u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_001F38D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F38E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001F38F4; } }
L_001F38E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 517u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[6].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001F38F4:
    set32(c.r[6], ld32((c.r[4].w[0] + 552u)));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[4].w[0] + c.r[7].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F38E8u | kUnwind; return; } goto L_001F38E8; }
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 516u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_001F3910:
    set32(c.r[5], ld32((c.r[4].w[0] + 492u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[7], 0u + 48u);  goto L_001F3928; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[7], 0u + 32u);  goto L_001F3928; }
L_001F3928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[4].w[0] + 552u)));  if (t) { goto L_001F3950; } }
L_001F3930:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);  goto L_001F3948; }
    set32(c.r[5], c.r[4].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 515u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F394C; } }
L_001F3948:
    st8((c.r[3].w[0] + 516u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 1;
L_001F394C:
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_001F3950:
    c.budget -= 2;
    if (c.r[6].sd[0] >= 0) { set32(c.r[3], c.r[6].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3930u | kUnwind; return; } goto L_001F3930; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F3960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[9], c.r[9].w[0] + 2656u);
    set32(c.r[8], c.r[29].w[0]);
    set32(c.r[7], 0u + 8u);
    c.budget -= 5;
L_001F3974:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 1u)));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3974u | kUnwind; return; } goto L_001F3974; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[7], c.r[29].w[0] + 16u);
    set32(c.r[8], c.r[8].w[0] + 2672u);
    set32(c.r[3], 0u + 13u);
    c.budget -= 4;
L_001F39A4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F39A4u | kUnwind; return; } goto L_001F39A4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 492u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[11], c.r[29].w[0]);  goto L_001F39E8; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[11], c.r[29].w[0] + 16u);  goto L_001F39E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] << 56;  if (t) { goto L_001F39F0; } }
L_001F39E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 13u);  if (t) { goto L_001F39EC; } }
L_001F39E8:
    set32(c.r[10], 0u + 16u);
    c.budget -= 1;
L_001F39EC:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.budget -= 1;
L_001F39F0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);  if (t) { goto L_001F3A38; } }
L_001F39FC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_001F3A38; }
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { set32(c.r[2], c.r[10].w[0] - 1u);  goto L_001F3A1C; }
    set32(c.r[3], c.r[10].w[0] - 1u);
    set32(c.r[2], c.r[10].w[0] - 1u);
    c.budget -= 2;
L_001F3A1C:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[11].w[0] + c.r[3].w[0]);  goto L_001F3A30; }
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_001F3A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (t) { goto L_001F3A48; } }
L_001F3A38:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[11].w[0] + c.r[4].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F39FCu | kUnwind; return; } goto L_001F39FC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F3A48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F3A50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[14].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 492u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[20] = 0u;
    c.budget -= 13;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 60u), 0u);  if (t) { goto L_001F3A94; } }
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], 0u + 10u);  goto L_001F3A98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[28].w[0] - 32272u));  if (t) { goto L_001F3A9C; } }
L_001F3A94:
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
L_001F3A98:
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    c.budget -= 1;
L_001F3A9C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[12], 0u + 1u);
    set32(c.r[10], 0u + 46u);
    set32(c.r[9], 0u + 45u);
    c.f[2] = 0u;
    c.f[0] = c.r[7].w[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 32u);  if (t) { goto L_001F3C28; } }
L_001F3AC0:
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 516u)));
    c.r[7].d[0] = c.r[13].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[7].d[0] != 0ull) { set32(c.r[11], ld32((c.r[4].w[0] + 492u)));  goto L_001F3B0C; }
    c.r[1].d[0] = c.r[13].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F3B08; } }
    c.r[6].d[0] = c.r[6].d[0] << 32;
    set32(c.r[7], c.r[13].w[0] - 48u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[20]));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 60u), c.r[6].w[0]);  if (t) { goto L_001F3B00; } }
    c.f[20] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.budget -= 1;
L_001F3B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = c.r[12].d[0] + 0ull;  if (t) { goto L_001F3C24; } }
L_001F3B08:
    set32(c.r[11], ld32((c.r[4].w[0] + 492u)));
    c.budget -= 1;
L_001F3B0C:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[12].d[0];  if (t) { goto L_001F3B58; } }
    c.r[7].d[0] = c.r[13].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001F3B58; } }
    c.r[1].d[0] = c.r[13].sd[0] < 71ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F3B58; } }
    c.r[6].d[0] = c.r[6].d[0] << 32;
    set32(c.r[7], c.r[13].w[0] - 55u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[20]));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 60u), c.r[6].w[0]);  if (t) { goto L_001F3B50; } }
    c.f[20] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.budget -= 1;
L_001F3B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = c.r[12].d[0] + 0ull;  if (t) { goto L_001F3C24; } }
L_001F3B58:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[12].d[0];  if (t) { goto L_001F3BA4; } }
    c.r[7].d[0] = c.r[13].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001F3BA4; } }
    c.r[1].d[0] = c.r[13].sd[0] < 103ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F3BA4; } }
    c.r[6].d[0] = c.r[6].d[0] << 32;
    set32(c.r[7], c.r[13].w[0] - 87u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[20]));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 60u), c.r[6].w[0]);  if (t) { goto L_001F3B9C; } }
    c.f[20] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.budget -= 1;
L_001F3B9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = c.r[12].d[0] + 0ull;  if (t) { goto L_001F3C24; } }
L_001F3BA4:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_001F3BD0; } }
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != c.r[10].d[0];  if (t) { goto L_001F3BD0; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[20]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[20] = c.f[0];  goto L_001F3BC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F3D9C; } }
L_001F3BC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = c.r[12].d[0] + 0ull;  if (t) { goto L_001F3C24; } }
L_001F3BD0:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_001F3BFC; } }
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != c.r[9].d[0];  if (t) { goto L_001F3BFC; } }
    c.budget -= 2;
    if (c.r[14].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F3D9C; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[5].d[0] = c.r[12].d[0] + 0ull;  goto L_001F3C24; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3D9C; } }
L_001F3BFC:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != c.r[8].d[0];  if (t) { goto L_001F3C14; } }
    c.budget -= 2;
    if (c.r[14].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_001F3C28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F3D9C; } }
L_001F3C14:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] == 0ull;  if (t) { goto L_001F3C34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F3D9C; } }
L_001F3C24:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_001F3C28:
    c.r[7].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { set32(c.r[7], c.r[4].w[0] + c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3AC0u | kUnwind; return; } goto L_001F3AC0; }
L_001F3C34:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 492u)));  goto L_001F3C50; }
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[6], 0u - c.r[2].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 492u)));
    c.budget -= 5;
L_001F3C50:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 512u)));  goto L_001F3D08; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F3C6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F3D9C; } }
L_001F3C6C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = c.r[6].d[0] << 32;  goto L_001F3CCC; }
    c.r[4].d[0] = c.r[6].d[0] << 32;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3C8Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x001F3C8Cu) [[unlikely]] return; }
L_001F3C8C:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_001F3D98; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F3CC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3CC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F3CC0u) [[unlikely]] return; }
L_001F3CC0:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3D98; } }
L_001F3CCC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_001F3D98; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F3CFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3CFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F3CFCu) [[unlikely]] return; }
L_001F3CFC:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3D98; } }
L_001F3D08:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F3D9C; }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.f[0] = ld32((c.r[29].w[0] + 60u));  goto L_001F3D68; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[6].d[0] << 32;  goto L_001F3D2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3D98; } }
L_001F3D2C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_001F3D98; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F3D5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3D5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F3D5Cu) [[unlikely]] return; }
L_001F3D5C:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F3D98; } }
L_001F3D68:
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_001F3D98; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001F3D94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3D94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x001F3D94u) [[unlikely]] return; }
L_001F3D94:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_001F3D98:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001F3D9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F3DB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 556u), 0u);  c.pc = t; return; }
L_001F3DC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F3DD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001F3DE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 556u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001F3EB8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30628u)));  goto L_001F3E38; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30628u)));  goto L_001F3E30; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30628u)));  goto L_001F3E28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;  if (t) { goto L_001F3E40; } }
L_001F3E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld64((c.r[2].w[0] + 72u));  if (t) { goto L_001F3E3C; } }
L_001F3E30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld64((c.r[2].w[0] + 80u));  if (t) { goto L_001F3E3C; } }
L_001F3E38:
    c.r[4].d[0] = ld64((c.r[2].w[0] + 96u));
    c.budget -= 1;
L_001F3E3C:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 1;
L_001F3E40:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F3F50; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 25696u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F0000u < 16384u) { entry = entries_0034[(t - 0x001F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F3E64:
    c.r[2].d[0] = c.r[4].d[0] & 48ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_001F3F50; } }
L_001F3E70:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_001F3F50; } }
L_001F3E7C:
    c.r[2].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_001F3F50; } }
L_001F3E88:
    c.r[2].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_001F3F50; } }
L_001F3E94:
    c.r[2].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_001F3F50; } }
L_001F3EA0:
    c.r[2].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_001F3F50; } }
L_001F3EAC:
    c.r[2].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_001F3F50; } }
L_001F3EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3EC0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0015(c, 53u, depth + 1u); else { c.pc = 0x001745A0u; return; } if (c.pc != 0x001F3EC0u) [[unlikely]] return; }
L_001F3EC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 556u)));
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = ld16((c.r[2].w[0] + 2u));  if (t) { goto L_001F3F4C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 25664u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F0000u < 16384u) { entry = entries_0034[(t - 0x001F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F3EF4:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 10ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_001F3F50; } }
L_001F3F04:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 32850ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_001F3F50; } }
L_001F3F14:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 32849ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_001F3F50; } }
L_001F3F24:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 32848ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_001F3F50; } }
L_001F3F34:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 32847ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_001F3F50; } }
L_001F3F44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F3F50; } }
L_001F3F4C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F3F50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F3F70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 556u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F3FA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3F90u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0015(c, 53u, depth + 1u); else { c.pc = 0x001745A0u; return; } if (c.pc != 0x001F3F90u) [[unlikely]] return; }
L_001F3F90:
    set32(c.r[3], ld32((c.r[16].w[0] + 556u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0] + 2u));  if (t) { goto L_001F3FA8; } }
L_001F3FA4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F3FA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F3FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 44u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 68u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 560u), c.r[3].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 564u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3FE8u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0014(c, 402u, depth + 1u); else { c.pc = 0x00173D30u; return; } if (c.pc != 0x001F3FE8u) [[unlikely]] return; }
L_001F3FE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 568u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    [[clang::musttail]] return unit_0035(c, 1u, depth);
}

}
