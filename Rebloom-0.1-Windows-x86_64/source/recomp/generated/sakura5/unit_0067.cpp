#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0067[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 28, 0, 29,
    0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 0, 66, 0, 67, 0, 68, 0, 69, 0, 0, 0, 70,
    0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0,
    0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0,
    0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0,
    0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 213, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0,
    0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0,
    254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0,
    0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0,
    0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0,
    0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 283, 0, 284, 0, 285, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0,
    0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0,
    0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0,
    0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0,
    0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0067(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002BC000;
    case 2u: goto L_002BC018;
    case 3u: goto L_002BC034;
    case 4u: goto L_002BC048;
    case 5u: goto L_002BC074;
    case 6u: goto L_002BC0A0;
    case 7u: goto L_002BC0C0;
    case 8u: goto L_002BC0F4;
    case 9u: goto L_002BC118;
    case 10u: goto L_002BC150;
    case 11u: goto L_002BC1C4;
    case 12u: goto L_002BC1E8;
    case 13u: goto L_002BC230;
    case 14u: goto L_002BC280;
    case 15u: goto L_002BC29C;
    case 16u: goto L_002BC2A4;
    case 17u: goto L_002BC2B0;
    case 18u: goto L_002BC2B8;
    case 19u: goto L_002BC2D8;
    case 20u: goto L_002BC31C;
    case 21u: goto L_002BC348;
    case 22u: goto L_002BC36C;
    case 23u: goto L_002BC384;
    case 24u: goto L_002BC394;
    case 25u: goto L_002BC3AC;
    case 26u: goto L_002BC3D4;
    case 27u: goto L_002BC3E8;
    case 28u: goto L_002BC3F4;
    case 29u: goto L_002BC3FC;
    case 30u: goto L_002BC41C;
    case 31u: goto L_002BC47C;
    case 32u: goto L_002BC4A4;
    case 33u: goto L_002BC4A8;
    case 34u: goto L_002BC4C0;
    case 35u: goto L_002BC4F0;
    case 36u: goto L_002BC528;
    case 37u: goto L_002BC530;
    case 38u: goto L_002BC540;
    case 39u: goto L_002BC550;
    case 40u: goto L_002BC560;
    case 41u: goto L_002BC57C;
    case 42u: goto L_002BC584;
    case 43u: goto L_002BC5B0;
    case 44u: goto L_002BC5C8;
    case 45u: goto L_002BC5F0;
    case 46u: goto L_002BC620;
    case 47u: goto L_002BC638;
    case 48u: goto L_002BC650;
    case 49u: goto L_002BC664;
    case 50u: goto L_002BC6B4;
    case 51u: goto L_002BC6D0;
    case 52u: goto L_002BC70C;
    case 53u: goto L_002BC724;
    case 54u: goto L_002BC740;
    case 55u: goto L_002BC75C;
    case 56u: goto L_002BC780;
    case 57u: goto L_002BC7B0;
    case 58u: goto L_002BC818;
    case 59u: goto L_002BC83C;
    case 60u: goto L_002BC84C;
    case 61u: goto L_002BC858;
    case 62u: goto L_002BC86C;
    case 63u: goto L_002BC8AC;
    case 64u: goto L_002BC8BC;
    case 65u: goto L_002BC8C4;
    case 66u: goto L_002BC8D4;
    case 67u: goto L_002BC8DC;
    case 68u: goto L_002BC8E4;
    case 69u: goto L_002BC8EC;
    case 70u: goto L_002BC8FC;
    case 71u: goto L_002BC904;
    case 72u: goto L_002BC914;
    case 73u: goto L_002BC930;
    case 74u: goto L_002BC974;
    case 75u: goto L_002BC988;
    case 76u: goto L_002BC9A0;
    case 77u: goto L_002BC9E0;
    case 78u: goto L_002BC9F0;
    case 79u: goto L_002BCA0C;
    case 80u: goto L_002BCA1C;
    case 81u: goto L_002BCA80;
    case 82u: goto L_002BCAA0;
    case 83u: goto L_002BCAAC;
    case 84u: goto L_002BCB30;
    case 85u: goto L_002BCCCC;
    case 86u: goto L_002BCCF0;
    case 87u: goto L_002BCD08;
    case 88u: goto L_002BCD4C;
    case 89u: goto L_002BCD98;
    case 90u: goto L_002BCDBC;
    case 91u: goto L_002BCDD4;
    case 92u: goto L_002BCE88;
    case 93u: goto L_002BCEC8;
    case 94u: goto L_002BCEE0;
    case 95u: goto L_002BCEF4;
    case 96u: goto L_002BCF0C;
    case 97u: goto L_002BCF78;
    case 98u: goto L_002BCFD0;
    case 99u: goto L_002BD00C;
    case 100u: goto L_002BD02C;
    case 101u: goto L_002BD044;
    case 102u: goto L_002BD060;
    case 103u: goto L_002BD200;
    case 104u: goto L_002BD248;
    case 105u: goto L_002BD250;
    case 106u: goto L_002BD258;
    case 107u: goto L_002BD270;
    case 108u: goto L_002BD2E0;
    case 109u: goto L_002BD324;
    case 110u: goto L_002BD364;
    case 111u: goto L_002BD370;
    case 112u: goto L_002BD384;
    case 113u: goto L_002BD38C;
    case 114u: goto L_002BD3E8;
    case 115u: goto L_002BD408;
    case 116u: goto L_002BD418;
    case 117u: goto L_002BD430;
    case 118u: goto L_002BD440;
    case 119u: goto L_002BD480;
    case 120u: goto L_002BD490;
    case 121u: goto L_002BD498;
    case 122u: goto L_002BD4B4;
    case 123u: goto L_002BD4C8;
    case 124u: goto L_002BD4EC;
    case 125u: goto L_002BD50C;
    case 126u: goto L_002BD540;
    case 127u: goto L_002BD560;
    case 128u: goto L_002BD584;
    case 129u: goto L_002BD5A8;
    case 130u: goto L_002BD5B8;
    case 131u: goto L_002BD5CC;
    case 132u: goto L_002BD5DC;
    case 133u: goto L_002BD5F0;
    case 134u: goto L_002BD600;
    case 135u: goto L_002BD634;
    case 136u: goto L_002BD664;
    case 137u: goto L_002BD66C;
    case 138u: goto L_002BD680;
    case 139u: goto L_002BD6AC;
    case 140u: goto L_002BD6CC;
    case 141u: goto L_002BD6EC;
    case 142u: goto L_002BD70C;
    case 143u: goto L_002BD720;
    case 144u: goto L_002BD734;
    case 145u: goto L_002BD754;
    case 146u: goto L_002BD760;
    case 147u: goto L_002BD780;
    case 148u: goto L_002BD78C;
    case 149u: goto L_002BD7AC;
    case 150u: goto L_002BD7B8;
    case 151u: goto L_002BD7D8;
    case 152u: goto L_002BD7E4;
    case 153u: goto L_002BD800;
    case 154u: goto L_002BD81C;
    case 155u: goto L_002BD838;
    case 156u: goto L_002BD850;
    case 157u: goto L_002BD888;
    case 158u: goto L_002BD8A4;
    case 159u: goto L_002BD8AC;
    case 160u: goto L_002BD8C8;
    case 161u: goto L_002BD8DC;
    case 162u: goto L_002BD8E8;
    case 163u: goto L_002BD8F4;
    case 164u: goto L_002BD940;
    case 165u: goto L_002BD990;
    case 166u: goto L_002BD99C;
    case 167u: goto L_002BD9F0;
    case 168u: goto L_002BDA18;
    case 169u: goto L_002BDA24;
    case 170u: goto L_002BDA78;
    case 171u: goto L_002BDA94;
    case 172u: goto L_002BDAAC;
    case 173u: goto L_002BDAC8;
    case 174u: goto L_002BDAE0;
    case 175u: goto L_002BDC00;
    case 176u: goto L_002BDC34;
    case 177u: goto L_002BDC5C;
    case 178u: goto L_002BDC68;
    case 179u: goto L_002BDC80;
    case 180u: goto L_002BDCF0;
    case 181u: goto L_002BDD00;
    case 182u: goto L_002BDD18;
    case 183u: goto L_002BDD44;
    case 184u: goto L_002BDD50;
    case 185u: goto L_002BDD7C;
    case 186u: goto L_002BDD90;
    case 187u: goto L_002BDDCC;
    case 188u: goto L_002BDDDC;
    case 189u: goto L_002BDE08;
    case 190u: goto L_002BDE14;
    case 191u: goto L_002BDE40;
    case 192u: goto L_002BDE60;
    case 193u: goto L_002BDE80;
    case 194u: goto L_002BDE94;
    case 195u: goto L_002BDEC0;
    case 196u: goto L_002BDEE8;
    case 197u: goto L_002BDF10;
    case 198u: goto L_002BDF18;
    case 199u: goto L_002BDF20;
    case 200u: goto L_002BDF28;
    case 201u: goto L_002BDF8C;
    case 202u: goto L_002BDF94;
    case 203u: goto L_002BDF9C;
    case 204u: goto L_002BDFA4;
    case 205u: goto L_002BDFAC;
    case 206u: goto L_002BDFB4;
    case 207u: goto L_002BDFBC;
    case 208u: goto L_002BDFC4;
    case 209u: goto L_002BDFCC;
    case 210u: goto L_002BDFD4;
    case 211u: goto L_002BDFDC;
    case 212u: goto L_002BDFE4;
    case 213u: goto L_002BDFE8;
    case 214u: goto L_002BE024;
    case 215u: goto L_002BE02C;
    case 216u: goto L_002BE034;
    case 217u: goto L_002BE03C;
    case 218u: goto L_002BE044;
    case 219u: goto L_002BE04C;
    case 220u: goto L_002BE050;
    case 221u: goto L_002BE144;
    case 222u: goto L_002BE150;
    case 223u: goto L_002BE158;
    case 224u: goto L_002BE160;
    case 225u: goto L_002BE1A0;
    case 226u: goto L_002BE1F0;
    case 227u: goto L_002BE21C;
    case 228u: goto L_002BE228;
    case 229u: goto L_002BE290;
    case 230u: goto L_002BE2B4;
    case 231u: goto L_002BE2C8;
    case 232u: goto L_002BE310;
    case 233u: goto L_002BE3C0;
    case 234u: goto L_002BE3D0;
    case 235u: goto L_002BE3E0;
    case 236u: goto L_002BE3F4;
    case 237u: goto L_002BE404;
    case 238u: goto L_002BE418;
    case 239u: goto L_002BE434;
    case 240u: goto L_002BE480;
    case 241u: goto L_002BE490;
    case 242u: goto L_002BE4A0;
    case 243u: goto L_002BE524;
    case 244u: goto L_002BE570;
    case 245u: goto L_002BE584;
    case 246u: goto L_002BE594;
    case 247u: goto L_002BE5C0;
    case 248u: goto L_002BE5D0;
    case 249u: goto L_002BE5EC;
    case 250u: goto L_002BE610;
    case 251u: goto L_002BE63C;
    case 252u: goto L_002BE660;
    case 253u: goto L_002BE670;
    case 254u: goto L_002BE680;
    case 255u: goto L_002BE690;
    case 256u: goto L_002BE6A0;
    case 257u: goto L_002BE6C0;
    case 258u: goto L_002BE70C;
    case 259u: goto L_002BE720;
    case 260u: goto L_002BE754;
    case 261u: goto L_002BE778;
    case 262u: goto L_002BE78C;
    case 263u: goto L_002BE7D8;
    case 264u: goto L_002BE7F8;
    case 265u: goto L_002BE81C;
    case 266u: goto L_002BE830;
    case 267u: goto L_002BE878;
    case 268u: goto L_002BE890;
    case 269u: goto L_002BE8BC;
    case 270u: goto L_002BE908;
    case 271u: goto L_002BE930;
    case 272u: goto L_002BE954;
    case 273u: goto L_002BE970;
    case 274u: goto L_002BE99C;
    case 275u: goto L_002BE9E8;
    case 276u: goto L_002BEA0C;
    case 277u: goto L_002BEA30;
    case 278u: goto L_002BEA50;
    case 279u: goto L_002BEA64;
    case 280u: goto L_002BEAC0;
    case 281u: goto L_002BEAE0;
    case 282u: goto L_002BEB00;
    case 283u: goto L_002BEB88;
    case 284u: goto L_002BEB90;
    case 285u: goto L_002BEB98;
    case 286u: goto L_002BEBA0;
    case 287u: goto L_002BEBB4;
    case 288u: goto L_002BEBD4;
    case 289u: goto L_002BEBE8;
    case 290u: goto L_002BEBF4;
    case 291u: goto L_002BEC10;
    case 292u: goto L_002BECCC;
    case 293u: goto L_002BECEC;
    case 294u: goto L_002BED9C;
    case 295u: goto L_002BEDE8;
    case 296u: goto L_002BEDF8;
    case 297u: goto L_002BEE08;
    case 298u: goto L_002BEEEC;
    case 299u: goto L_002BEF10;
    case 300u: goto L_002BEFD4;
    case 301u: goto L_002BF0A0;
    case 302u: goto L_002BF0DC;
    case 303u: goto L_002BF100;
    case 304u: goto L_002BF120;
    case 305u: goto L_002BF130;
    case 306u: goto L_002BF150;
    case 307u: goto L_002BF160;
    case 308u: goto L_002BF1C0;
    case 309u: goto L_002BF220;
    case 310u: goto L_002BF230;
    case 311u: goto L_002BF240;
    case 312u: goto L_002BF254;
    case 313u: goto L_002BF290;
    case 314u: goto L_002BF2A4;
    case 315u: goto L_002BF2D0;
    case 316u: goto L_002BF300;
    case 317u: goto L_002BF318;
    case 318u: goto L_002BF330;
    case 319u: goto L_002BF410;
    case 320u: goto L_002BF430;
    case 321u: goto L_002BF4C8;
    case 322u: goto L_002BF530;
    case 323u: goto L_002BF540;
    case 324u: goto L_002BF5A8;
    case 325u: goto L_002BF5BC;
    case 326u: goto L_002BF624;
    case 327u: goto L_002BF6D0;
    case 328u: goto L_002BF738;
    case 329u: goto L_002BF930;
    case 330u: goto L_002BF990;
    case 331u: goto L_002BF9A0;
    case 332u: goto L_002BF9D0;
    case 333u: goto L_002BF9FC;
    case 334u: goto L_002BFA34;
    case 335u: goto L_002BFA50;
    case 336u: goto L_002BFA8C;
    case 337u: goto L_002BFAA8;
    case 338u: goto L_002BFAD0;
    case 339u: goto L_002BFB34;
    case 340u: goto L_002BFB40;
    case 341u: goto L_002BFB48;
    case 342u: goto L_002BFB90;
    case 343u: goto L_002BFBD0;
    case 344u: goto L_002BFBE4;
    case 345u: goto L_002BFC14;
    case 346u: goto L_002BFC1C;
    case 347u: goto L_002BFC40;
    case 348u: goto L_002BFC58;
    case 349u: goto L_002BFC80;
    case 350u: goto L_002BFC9C;
    case 351u: goto L_002BFCA8;
    case 352u: goto L_002BFCC0;
    case 353u: goto L_002BFD04;
    case 354u: goto L_002BFD10;
    case 355u: goto L_002BFD1C;
    case 356u: goto L_002BFD2C;
    case 357u: goto L_002BFD88;
    case 358u: goto L_002BFDD8;
    case 359u: goto L_002BFDF0;
    case 360u: goto L_002BFE10;
    case 361u: goto L_002BFE20;
    case 362u: goto L_002BFE28;
    case 363u: goto L_002BFE3C;
    case 364u: goto L_002BFE8C;
    case 365u: goto L_002BFE98;
    case 366u: goto L_002BFEC0;
    case 367u: goto L_002BFEE0;
    case 368u: goto L_002BFF0C;
    case 369u: goto L_002BFF40;
    case 370u: goto L_002BFF60;
    case 371u: goto L_002BFFB8;
    case 372u: goto L_002BFFD0;
    default: bad_entry(c, 0x002BC000u); return;
    }
L_002BC000:
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC018u); st32((c.r[16].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002BC018u) [[unlikely]] return; }
L_002BC018:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  goto L_002BC038; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC034u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 87u, depth + 1u); else { c.pc = 0x001809E0u; return; } if (c.pc != 0x002BC034u) [[unlikely]] return; }
L_002BC034:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_002BC038:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_002BC080; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC048u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x002BC048u) [[unlikely]] return; }
L_002BC048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BC07C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30292u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19040u);
    set32(c.r[7], c.r[2].w[0] + 1u);
    st32((c.r[28].w[0] - 30292u), c.r[7].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC074u); st32((c.r[16].w[0] + 52u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002BC074u) [[unlikely]] return; }
L_002BC074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002BC0A4; } }
L_002BC07C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002BC080:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19088u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC0A0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002BC0A0u) [[unlikely]] return; }
L_002BC0A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002BC0A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BC0C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 80u)));  goto L_002BC0FC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 56u), 0u);  goto L_002BC0F8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC0F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC0F4u) [[unlikely]] return; }
L_002BC0F4:
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 1;
L_002BC0F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_002BC0FC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30288u)));  goto L_002BC120; }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BC11C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC118u);  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002BC118u) [[unlikely]] return; }
L_002BC118:
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 1;
L_002BC11C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30288u)));
    c.budget -= 1;
L_002BC120:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_002BC130; }
    st32((c.r[28].w[0] - 30288u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 2;
L_002BC130:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BC150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BC208; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  goto L_002BC17C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BC214; } }
L_002BC17C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BC1A4; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BC19C; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 3;
L_002BC19C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BC210; } }
L_002BC1A4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 80u)));  goto L_002BC1CC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 56u), 0u);  goto L_002BC1C8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC1C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC1C4u) [[unlikely]] return; }
L_002BC1C4:
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 1;
L_002BC1C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_002BC1CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 60u), 0u);  goto L_002BC1EC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BC1E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC1E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BC1E8u) [[unlikely]] return; }
L_002BC1E8:
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 1;
L_002BC1EC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30288u)));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 84u)));  goto L_002BC200; }
    st32((c.r[28].w[0] - 30288u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 2;
L_002BC200:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 2;
L_002BC208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BC214; } }
L_002BC210:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BC214:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BC230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002BC4AC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BC4A8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 19376u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_0067[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BC280:
    set32(c.r[3], ld32((c.r[28].w[0] - 30288u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BC4A8; } }
    st32((c.r[28].w[0] - 30288u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 4;
L_002BC29C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC2A4u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0018(c, 108u, depth + 1u); else { c.pc = 0x00180D10u; return; } if (c.pc != 0x002BC2A4u) [[unlikely]] return; }
L_002BC2A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
L_002BC2B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC2B8u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x002BC2B8u) [[unlikely]] return; }
L_002BC2B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  goto L_002BC2E0; }
    set32(c.r[2], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC2D8u); set32(c.r[4], c.r[4].w[0] + 19152u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002BC2D8u) [[unlikely]] return; }
L_002BC2D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC4A8; } }
L_002BC2E0:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002BC2F8; }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_002BC2F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BC4A8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC31Cu); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0018(c, 116u, depth + 1u); else { c.pc = 0x00180DD0u; return; } if (c.pc != 0x002BC31Cu) [[unlikely]] return; }
L_002BC31C:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 68u)));  goto L_002BC364; }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BC360; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC348u); set32(c.r[4], c.r[4].w[0] + 19200u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002BC348u) [[unlikely]] return; }
L_002BC348:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), 0u);  if (t) { goto L_002BC4A8; } }
L_002BC360:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_002BC364:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 2;
L_002BC36C:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_002BC3B8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC384u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 231u, depth + 1u); else { c.pc = 0x00171DF0u; return; } if (c.pc != 0x002BC384u) [[unlikely]] return; }
L_002BC384:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC394u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x002BC394u) [[unlikely]] return; }
L_002BC394:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_002BC3B4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC3ACu); set32(c.r[4], c.r[4].w[0] + 19248u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002BC3ACu) [[unlikely]] return; }
L_002BC3AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC4A8; } }
L_002BC3B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002BC3B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 7;
L_002BC3D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC3E8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x00180D40u; return; } if (c.pc != 0x002BC3E8u) [[unlikely]] return; }
L_002BC3E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
L_002BC3F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC3FCu); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x002BC3FCu) [[unlikely]] return; }
L_002BC3FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  goto L_002BC424; }
    set32(c.r[2], 0u + 5u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC41Cu); set32(c.r[4], c.r[4].w[0] + 19296u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002BC41Cu) [[unlikely]] return; }
L_002BC41C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC4A8; } }
L_002BC424:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002BC43C; }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 3;
L_002BC43C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BC4A8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_002BC484; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 56u), 0u);  goto L_002BC480; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC47Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC47Cu) [[unlikely]] return; }
L_002BC47C:
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 1;
L_002BC480:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002BC484:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[2].d[0] << 33;
    c.r[2].d[0] = c.r[2].d[0] >> 33;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 30288u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC4A4u); set32(c.r[4], c.r[4].w[0] + 19344u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002BC4A4u) [[unlikely]] return; }
L_002BC4A4:
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 1;
L_002BC4A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BC4AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BC4C0:
    st32((c.r[4].w[0] + 60u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 76u), c.r[6].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 68u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_002BC4F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 76u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC528u); set32(c.r[4], ld32((c.r[4].w[0] + 56u)));  if (depth < kMaxDepth) unit_0018(c, 112u, depth + 1u); else { c.pc = 0x00180D70u; return; } if (c.pc != 0x002BC528u) [[unlikely]] return; }
L_002BC528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC530u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x002BC530u) [[unlikely]] return; }
L_002BC530:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002BC5DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC540u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0018(c, 116u, depth + 1u); else { c.pc = 0x00180DD0u; return; } if (c.pc != 0x002BC540u) [[unlikely]] return; }
L_002BC540:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC550u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 231u, depth + 1u); else { c.pc = 0x00171DF0u; return; } if (c.pc != 0x002BC550u) [[unlikely]] return; }
L_002BC550:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC560u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 238u, depth + 1u); else { c.pc = 0x00171F90u; return; } if (c.pc != 0x002BC560u) [[unlikely]] return; }
L_002BC560:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_002BC5D8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC57Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 114u, depth + 1u); else { c.pc = 0x00180DA0u; return; } if (c.pc != 0x002BC57Cu) [[unlikely]] return; }
L_002BC57C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC584u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00180CC0u; return; } if (c.pc != 0x002BC584u) [[unlikely]] return; }
L_002BC584:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BC5D8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 68u), 0u);  goto L_002BC5B8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 56u), 0u);  goto L_002BC5B4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC5B0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC5B0u) [[unlikely]] return; }
L_002BC5B0:
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 1;
L_002BC5B4:
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 1;
L_002BC5B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC5C8u); set32(c.r[4], c.r[4].w[0] + 19344u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002BC5C8u) [[unlikely]] return; }
L_002BC5C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_002BC5D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BC5DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BC5F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BC638; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 26400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC620u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002BC620u) [[unlikely]] return; }
L_002BC620:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002BC63C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC638u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002BC638u) [[unlikely]] return; }
L_002BC638:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002BC63C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BC650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC664u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 372u, depth + 1u); else { c.pc = 0x00293560u; return; } if (c.pc != 0x002BC664u) [[unlikely]] return; }
L_002BC664:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 26464u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 26520u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x57530000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16723ull;
    set32(c.r[4], c.r[4].w[0] + 20112u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 480u), 0u);
    st32((c.r[16].w[0] + 484u), 0u);
    st32((c.r[16].w[0] + 492u), 0u);
    st32((c.r[16].w[0] + 496u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC6B4u); st32((c.r[16].w[0] + 488u), 0u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002BC6B4u) [[unlikely]] return; }
L_002BC6B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BC6D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BC724; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 26464u);
    set32(c.r[2], c.r[2].w[0] + 26520u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC70Cu); st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 377u, depth + 1u); else { c.pc = 0x00293640u; return; } if (c.pc != 0x002BC70Cu) [[unlikely]] return; }
L_002BC70C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002BC728; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC724u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002BC724u) [[unlikely]] return; }
L_002BC724:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002BC728:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BC740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC75Cu); set32(c.r[4], c.r[4].w[0] + 20160u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002BC75Cu) [[unlikely]] return; }
L_002BC75C:
    set32(c.r[4], ld32((c.r[16].w[0] + 480u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_002BC788; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 480u), 0u);  goto L_002BC784; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC780u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC780u) [[unlikely]] return; }
L_002BC780:
    st32((c.r[16].w[0] + 480u), 0u);
    c.budget -= 1;
L_002BC784:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_002BC788:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BC7B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BC914; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 5ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  goto L_002BC7F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002BC918; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_002BC7F0:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BC914; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 20208u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_0067[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BC818:
    set32(c.r[4], ld32((c.r[16].w[0] + 480u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 484u)));  goto L_002BC844; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 480u), 0u);  goto L_002BC840; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC83Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC83Cu) [[unlikely]] return; }
L_002BC83C:
    st32((c.r[16].w[0] + 480u), 0u);
    c.budget -= 1;
L_002BC840:
    set32(c.r[4], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 1;
L_002BC844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC84Cu); set32(c.r[5], 0u + 201u);  if (depth < kMaxDepth) unit_0061(c, 147u, depth + 1u); else { c.pc = 0x002A5930u; return; } if (c.pc != 0x002BC84Cu) [[unlikely]] return; }
L_002BC84C:
    st32((c.r[16].w[0] + 480u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC858u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 13u, depth + 1u); else { c.pc = 0x00294110u; return; } if (c.pc != 0x002BC858u) [[unlikely]] return; }
L_002BC858:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] | 32767ull;  if (t) { goto L_002BC888; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_002BC86C:
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[5].w[0] + 292u), c.r[3].w[0]);
    c.budget -= 7;
L_002BC888:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC86Cu | kUnwind; return; } goto L_002BC86C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 480u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BC914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC8ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 107u, depth + 1u); else { c.pc = 0x002BD270u; return; } if (c.pc != 0x002BC8ACu) [[unlikely]] return; }
L_002BC8AC:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 4;
L_002BC8BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC8C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002BC8C4u) [[unlikely]] return; }
L_002BC8C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC914; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 2;
L_002BC8D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC8DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 179u, depth + 1u); else { c.pc = 0x002BDC80u; return; } if (c.pc != 0x002BC8DCu) [[unlikely]] return; }
L_002BC8DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC914; } }
L_002BC8E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC8ECu);  if (depth < kMaxDepth) unit_0067(c, 175u, depth + 1u); else { c.pc = 0x002BDC00u; return; } if (c.pc != 0x002BC8ECu) [[unlikely]] return; }
L_002BC8EC:
    set32(c.r[3], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 4;
L_002BC8FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC904u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 19u, depth + 1u); else { c.pc = 0x00294230u; return; } if (c.pc != 0x002BC904u) [[unlikely]] return; }
L_002BC904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC914; } }
    set32(c.r[3], 0u + 5u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 2;
L_002BC914:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BC918:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BC930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BC988; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 5ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BC96C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002BC98C; } }
L_002BC96C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC974u);  if (depth < kMaxDepth) unit_005C(c, 390u, depth + 1u); else { c.pc = 0x00293800u; return; } if (c.pc != 0x002BC974u) [[unlikely]] return; }
L_002BC974:
    set32(c.r[4], ld32((c.r[16].w[0] + 480u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BC988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC988u);  if (depth < kMaxDepth) unit_005E(c, 171u, depth + 1u); else { c.pc = 0x00299D20u; return; } if (c.pc != 0x002BC988u) [[unlikely]] return; }
L_002BC988:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BC98C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BC9A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002BC9E4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 5ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BC9D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC9E0; } }
L_002BC9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC9E0u);  if (depth < kMaxDepth) unit_005C(c, 402u, depth + 1u); else { c.pc = 0x002939B0u; return; } if (c.pc != 0x002BC9E0u) [[unlikely]] return; }
L_002BC9E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002BC9E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BC9F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 219u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 434u, depth + 1u); else { c.pc = 0x00293E50u; return; } if (c.pc != 0x002BCA0Cu) [[unlikely]] return; }
L_002BCA0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BCA64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002BCA50; } }
L_002BCA1C:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 13;
L_002BCA50:
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCA1Cu | kUnwind; return; } goto L_002BCA1C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BCA64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BCA80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 19u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCAA0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 404u, depth + 1u); else { c.pc = 0x00293A00u; return; } if (c.pc != 0x002BCAA0u) [[unlikely]] return; }
L_002BCAA0:
    set32(c.r[7], 0u + 200u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
L_002BCAAC:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(19ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 284u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 292u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[5].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 584u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 588u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCAACu | kUnwind; return; } goto L_002BCAAC; } }
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BCB30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] + 112u);  if (t) { goto L_002BD044; } }
    set32(c.r[7], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; set32(c.r[3], ld32((c.r[16].w[0] + 1100u)));  if (t) { goto L_002BD014; } }
    set32(c.r[7], 0u + 70u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[7].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  goto L_002BCFD8; }
    set32(c.r[7], 0u + 94u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[7].d[0]) { set32(c.r[5], ld32((c.r[6].w[0] + 32u)));  goto L_002BCFA4; }
    set32(c.r[7], 0u + 92u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[7].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002BCF80; }
    set32(c.r[7], 0u + 97u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[7].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  goto L_002BCF44; }
    set32(c.r[7], 0u + 96u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[7].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_002BCF14; }
    set32(c.r[7], 0u + 65u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[7].d[0]) { set32(c.r[5], 0u + 1u);  goto L_002BCE44; }
    set32(c.r[7], 0u + 33u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[7].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002BCE20; }
    set32(c.r[7], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { goto L_002BCE1C; } }
    set32(c.r[7], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { goto L_002BCE1C; } }
    set32(c.r[7], 0u + 57u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { goto L_002BCE1C; } }
    set32(c.r[7], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { goto L_002BCE1C; } }
    set32(c.r[7], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { goto L_002BCE1C; } }
    set32(c.r[7], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { goto L_002BCE1C; } }
    set32(c.r[7], 0u + 29u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { goto L_002BCDDC; } }
    set32(c.r[7], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { goto L_002BCD10; } }
    set32(c.r[6], 0u + 41u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[6].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 148u)));  goto L_002BCC48; }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_002BCC38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002BD048; } }
L_002BCC38:
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002BD044; } }
L_002BCC48:
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002BCC64; }
    c.r[5].d[0] = 0ull | 50006ull;
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 1u);  goto L_002BCC88; }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002BCC64:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BD044; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BD044; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_002BD044; } }
L_002BCC88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002BD044; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 76u)));  goto L_002BCCA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002BCCD8; } }
L_002BCCA4:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { c.r[3].d[0] = 0ull + 0ull;  goto L_002BCCD8; }
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_002BCCC4; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCCD8; } }
L_002BCCC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCCCCu); set32(c.r[16], ld32((c.r[17].w[0] + 72u)));  if (depth < kMaxDepth) unit_0067(c, 232u, depth + 1u); else { c.pc = 0x002BE310u; return; } if (c.pc != 0x002BCCCCu) [[unlikely]] return; }
L_002BCCCC:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 1u);  goto L_002BCCD8; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BCCD8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BD044; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCCF0u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x002BCCF0u) [[unlikely]] return; }
L_002BCCF0:
    set32(c.r[7], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCD08u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 102u, depth + 1u); else { c.pc = 0x002BD060u; return; } if (c.pc != 0x002BCD08u) [[unlikely]] return; }
L_002BCD08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD044; } }
L_002BCD10:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 3312u)));  goto L_002BCD2C; }
    set32(c.r[5], c.r[3].w[0] - 2u);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_002BCD54; }
    set32(c.r[2], ld32((c.r[6].w[0] + 3312u)));
    c.budget -= 1;
L_002BCD2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002BCD38; }
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002BCD38:
    set32(c.r[7], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCD4Cu); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 102u, depth + 1u); else { c.pc = 0x002BD060u; return; } if (c.pc != 0x002BCD4Cu) [[unlikely]] return; }
L_002BCD4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD044; } }
L_002BCD54:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002BD044; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 76u)));  goto L_002BCD70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002BCDA4; } }
L_002BCD70:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { c.r[3].d[0] = 0ull + 0ull;  goto L_002BCDA4; }
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_002BCD90; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCDA4; } }
L_002BCD90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCD98u); set32(c.r[16], ld32((c.r[17].w[0] + 72u)));  if (depth < kMaxDepth) unit_0067(c, 232u, depth + 1u); else { c.pc = 0x002BE310u; return; } if (c.pc != 0x002BCD98u) [[unlikely]] return; }
L_002BCD98:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 1u);  goto L_002BCDA4; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BCDA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BD044; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCDBCu); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x002BCDBCu) [[unlikely]] return; }
L_002BCDBC:
    set32(c.r[7], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCDD4u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 102u, depth + 1u); else { c.pc = 0x002BD060u; return; } if (c.pc != 0x002BCDD4u) [[unlikely]] return; }
L_002BCDD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD044; } }
L_002BCDDC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_002BCDF8; }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BD044; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002BCDF8:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BD044; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BD044; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_002BD044; } }
L_002BCE1C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002BCE20:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BD044; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BD044; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_002BD044; } }
L_002BCE44:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002BD044; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 76u)));  goto L_002BCE60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002BCE94; } }
L_002BCE60:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { c.r[3].d[0] = 0ull + 0ull;  goto L_002BCE94; }
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 72u)));  goto L_002BCE80; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCE94; } }
L_002BCE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCE88u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 232u, depth + 1u); else { c.pc = 0x002BE310u; return; } if (c.pc != 0x002BCE88u) [[unlikely]] return; }
L_002BCE88:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 1u);  goto L_002BCE94; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BCE94:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BD044; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1184u)));
    set32(c.r[2], 0u + 22u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002BCEBC; }
    set32(c.r[2], 0u + 25u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002BCEE8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002BCEBC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCEC8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x002BCEC8u) [[unlikely]] return; }
L_002BCEC8:
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCEE0u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 102u, depth + 1u); else { c.pc = 0x002BD060u; return; } if (c.pc != 0x002BCEE0u) [[unlikely]] return; }
L_002BCEE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD044; } }
L_002BCEE8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCEF4u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x002BCEF4u) [[unlikely]] return; }
L_002BCEF4:
    set32(c.r[7], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCF0Cu); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 102u, depth + 1u); else { c.pc = 0x002BD060u; return; } if (c.pc != 0x002BCF0Cu) [[unlikely]] return; }
L_002BCF0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD044; } }
L_002BCF14:
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BD044; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BD044; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_002BD044; } }
L_002BCF44:
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002BD044; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], 0u - 2u);
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; st32((c.r[17].w[0] + 4u), c.r[5].w[0]);  if (t) { goto L_002BD044; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCF78u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 102u, depth + 1u); else { c.pc = 0x002BD060u; return; } if (c.pc != 0x002BCF78u) [[unlikely]] return; }
L_002BCF78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD044; } }
L_002BCF80:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BD044; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BD044; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_002BD044; } }
L_002BCFA4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002BD044; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BD044; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    set32(c.r[7], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCFD0u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 102u, depth + 1u); else { c.pc = 0x002BD060u; return; } if (c.pc != 0x002BCFD0u) [[unlikely]] return; }
L_002BCFD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD044; } }
L_002BCFD8:
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002BD044; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], 0u - 2u);
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; st32((c.r[17].w[0] + 4u), c.r[5].w[0]);  if (t) { goto L_002BD044; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 484u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD00Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 102u, depth + 1u); else { c.pc = 0x002BD060u; return; } if (c.pc != 0x002BD00Cu) [[unlikely]] return; }
L_002BD00C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD044; } }
L_002BD014:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002BD044; } }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD02Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x002A3830u; return; } if (c.pc != 0x002BD02Cu) [[unlikely]] return; }
L_002BD02C:
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD044u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 102u, depth + 1u); else { c.pc = 0x002BD060u; return; } if (c.pc != 0x002BD044u) [[unlikely]] return; }
L_002BD044:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002BD048:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BD060:
    set32(c.r[9], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[10], ld32((c.r[9].w[0] + 116u)));  if (t) { goto L_002BD078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[12], ld32((c.r[3].w[0] + 132u)));  if (t) { goto L_002BD07C; } }
L_002BD078:
    c.r[12].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BD07C:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_002BD1F8; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_002BD1F8; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[11], ld32((c.r[28].w[0] - 30316u)));  goto L_002BD0A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD1F8; } }
    set32(c.r[11], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002BD0A0:
    set32(c.r[3], ld32((c.r[10].w[0] + 1100u)));
    set32(c.r[11], ld32((c.r[11].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[9], ld32((c.r[10].w[0] + 1180u)));  if (t) { goto L_002BD1F8; } }
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 126u)));  goto L_002BD0F8; }
    set32(c.r[7], ld32((c.r[12].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { set32(c.r[7], ld32((c.r[7].w[0] + 76u)));  goto L_002BD0D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002BD0EC; } }
    set32(c.r[7], ld32((c.r[7].w[0] + 76u)));
    c.budget -= 1;
L_002BD0D0:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] <= 0; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_002BD0E8; } }
    c.r[1].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[7].d[0] = 0ull < c.r[11].d[0] ? 1ull : 0ull;  goto L_002BD0EC; }
    set32(c.r[11], 0u + 1u);
    c.budget -= 1;
L_002BD0E8:
    c.r[7].d[0] = 0ull < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002BD0EC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002BD1F8; } }
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 126u)));
    c.budget -= 1;
L_002BD0F8:
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 124u)));
    mmi::div(c, 0, c.r[11].w[0], c.r[13].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.budget -= 7;
    if (c.r[7].d[0] == 0ull) { c.r[7].d[0] = c.r[13].d[0] + 0ull;  goto L_002BD120; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[7].d[0] << 48;  if (t) { goto L_002BD124; } }
    c.r[7].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 1;
L_002BD120:
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.budget -= 1;
L_002BD124:
    c.r[12].d[0] = c.r[13].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 48);
    set32(c.r[7], c.r[12].w[0] - c.r[7].w[0]);
    set32(c.r[7], c.r[11].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    mmi::div(c, 0, c.r[7].w[0], c.r[12].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.budget -= 13;
    if (c.r[7].d[0] != 0ull) { set32(c.r[7], 0u + 2u);  goto L_002BD1B4; }
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 122u)));
    mmi::div(c, 0, c.r[11].w[0], c.r[13].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.budget -= 7;
    if (c.r[7].d[0] == 0ull) { c.r[7].d[0] = c.r[13].d[0] + 0ull;  goto L_002BD180; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[7].d[0] << 48;  if (t) { goto L_002BD184; } }
    c.r[7].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 1;
L_002BD180:
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.budget -= 1;
L_002BD184:
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    set32(c.r[7], c.r[12].w[0] - c.r[7].w[0]);
    set32(c.r[7], c.r[11].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    mmi::div(c, 0, c.r[7].w[0], c.r[12].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002BD1F8; } }
    set32(c.r[7], 0u + 2u);
    c.budget -= 1;
L_002BD1B4:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[7].d[0];  if (t) { goto L_002BD1F8; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_002BD1D4; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[3].d[0];  if (t) { goto L_002BD1F8; } }
L_002BD1D4:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { st32((c.r[4].w[0] + 484u), c.r[5].w[0]);  goto L_002BD1F0; }
    set32(c.r[3], ld32((c.r[10].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BD1F8; } }
    st32((c.r[4].w[0] + 484u), c.r[5].w[0]);
    c.budget -= 1;
L_002BD1F0:
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 488u), c.r[6].w[0]);
    c.budget -= 2;
L_002BD1F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BD200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002BD25C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[3].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002BD240; }
    c.r[1].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002BD258; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002BD240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD248u);  if (depth < kMaxDepth) unit_0067(c, 180u, depth + 1u); else { c.pc = 0x002BDCF0u; return; } if (c.pc != 0x002BD248u) [[unlikely]] return; }
L_002BD248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD250u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 181u, depth + 1u); else { c.pc = 0x002BDD00u; return; } if (c.pc != 0x002BD250u) [[unlikely]] return; }
L_002BD250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD258u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 186u, depth + 1u); else { c.pc = 0x002BDD90u; return; } if (c.pc != 0x002BD258u) [[unlikely]] return; }
L_002BD258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BD25C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BD270:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], 0u - 3u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[6].w[0] + 116u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 17;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002BDBD0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 1100u)));  goto L_002BD2CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_002BDBD4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1100u)));
    c.budget -= 1;
L_002BD2CC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 488u)));  goto L_002BD2F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD2E0u); set32(c.r[4], ld32((c.r[4].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002BD2E0u) [[unlikely]] return; }
L_002BD2E0:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BDBD0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 488u)));
    c.budget -= 1;
L_002BD2F4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_002BD3E8; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[4].d[0]) { c.r[17].d[0] = c.r[2].d[0] + 0ull;  goto L_002BD3E8; }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002BD31C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD3D8; } }
L_002BD31C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD324u);  if (depth < kMaxDepth) unit_0024(c, 181u, depth + 1u); else { c.pc = 0x001B14E0u; return; } if (c.pc != 0x002BD324u) [[unlikely]] return; }
L_002BD324:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 15312u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[2] = ld32((c.r[2].w[0] + 15316u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[2].w[0] + 15320u));
    st32((c.r[29].w[0] + 148u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 15324u));
    st32((c.r[29].w[0] + 152u), c.f[1]);
    st32((c.r[29].w[0] + 156u), c.f[0]);
    set32(c.r[19], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD364u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 90u, depth + 1u); else { c.pc = 0x002D0FD0u; return; } if (c.pc != 0x002BD364u) [[unlikely]] return; }
L_002BD364:
    set32(c.r[20], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD370u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_000D(c, 364u, depth + 1u); else { c.pc = 0x001575E0u; return; } if (c.pc != 0x002BD370u) [[unlikely]] return; }
L_002BD370:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD384u); set32(c.r[7], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 62u, depth + 1u); else { c.pc = 0x0015C7E0u; return; } if (c.pc != 0x002BD384u) [[unlikely]] return; }
L_002BD384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD38Cu);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x001647B0u; return; } if (c.pc != 0x002BD38Cu) [[unlikely]] return; }
L_002BD38C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[17], 0u + 2u);  goto L_002BD3E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002BD3E8; } }
    set32(c.r[17], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD3E8; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD3E8; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD3E8; } }
L_002BD3D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD3E8u); set32(c.r[5], c.r[5].w[0] + 20240u);  if (depth < kMaxDepth) unit_005D(c, 16u, depth + 1u); else { c.pc = 0x002941A0u; return; } if (c.pc != 0x002BD3E8u) [[unlikely]] return; }
L_002BD3E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = 0u;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD408u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002BD408u) [[unlikely]] return; }
L_002BD408:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD418u); set32(c.r[5], c.r[5].w[0] + 19408u);  if (depth < kMaxDepth) unit_005C(c, 414u, depth + 1u); else { c.pc = 0x00293B60u; return; } if (c.pc != 0x002BD418u) [[unlikely]] return; }
L_002BD418:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 3024u)));
    set32(c.r[2], c.r[3].w[0] + 112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD430u); set32(c.r[5], c.r[2].w[0] + 2916u);  if (depth < kMaxDepth) unit_0067(c, 180u, depth + 1u); else { c.pc = 0x002BDCF0u; return; } if (c.pc != 0x002BD430u) [[unlikely]] return; }
L_002BD430:
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD440u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 232u, depth + 1u); else { c.pc = 0x002BE310u; return; } if (c.pc != 0x002BD440u) [[unlikely]] return; }
L_002BD440:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_002BD5E4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BD5C0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BD59C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD474; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 484u)));  if (t) { goto L_002BD604; } }
L_002BD474:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD480u); set32(c.r[4], c.r[4].w[0] + 20304u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002BD480u) [[unlikely]] return; }
L_002BD480:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD490u); set32(c.r[5], c.r[5].w[0] + 19728u);  if (depth < kMaxDepth) unit_005C(c, 414u, depth + 1u); else { c.pc = 0x00293B60u; return; } if (c.pc != 0x002BD490u) [[unlikely]] return; }
L_002BD490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD498u); set32(c.r[4], ld32((c.r[18].w[0] + 148u)));  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002BD498u) [[unlikely]] return; }
L_002BD498:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002BD55C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD4B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 225u, depth + 1u); else { c.pc = 0x002BE1A0u; return; } if (c.pc != 0x002BD4B4u) [[unlikely]] return; }
L_002BD4B4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].sd[0] >= 0) { c.r[18].d[0] = 0ull + 0ull;  goto L_002BD508; }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 2;
L_002BD4C8:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 28u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD4ECu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002BD4ECu) [[unlikely]] return; }
L_002BD4EC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD4C8u | kUnwind; return; } goto L_002BD4C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD600; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BD508:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_002BD50C:
    set32(c.r[4], c.r[18].w[0] << 2);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002BD524; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 29u);  if (t) { goto L_002BD528; } }
L_002BD524:
    set32(c.r[5], 0u + 30u);
    c.budget -= 1;
L_002BD528:
    set32(c.r[4], ld32((c.r[3].w[0] + 40u)));
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD540u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002BD540u) [[unlikely]] return; }
L_002BD540:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD50Cu | kUnwind; return; } goto L_002BD50C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD600; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BD55C:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_002BD560:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 28u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD584u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002BD584u) [[unlikely]] return; }
L_002BD584:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD560u | kUnwind; return; } goto L_002BD560; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD600; } }
L_002BD59C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD5A8u); set32(c.r[4], c.r[4].w[0] + 20352u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002BD5A8u) [[unlikely]] return; }
L_002BD5A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD5B8u); set32(c.r[5], c.r[5].w[0] + 19920u);  if (depth < kMaxDepth) unit_005C(c, 414u, depth + 1u); else { c.pc = 0x00293B60u; return; } if (c.pc != 0x002BD5B8u) [[unlikely]] return; }
L_002BD5B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD600; } }
L_002BD5C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD5CCu); set32(c.r[4], c.r[4].w[0] + 20400u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002BD5CCu) [[unlikely]] return; }
L_002BD5CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD5DCu); set32(c.r[5], c.r[5].w[0] + 19920u);  if (depth < kMaxDepth) unit_005C(c, 414u, depth + 1u); else { c.pc = 0x00293B60u; return; } if (c.pc != 0x002BD5DCu) [[unlikely]] return; }
L_002BD5DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD600; } }
L_002BD5E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD5F0u); set32(c.r[4], c.r[4].w[0] + 20448u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002BD5F0u) [[unlikely]] return; }
L_002BD5F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD600u); set32(c.r[5], c.r[5].w[0] + 20048u);  if (depth < kMaxDepth) unit_005C(c, 414u, depth + 1u); else { c.pc = 0x00293B60u; return; } if (c.pc != 0x002BD600u) [[unlikely]] return; }
L_002BD600:
    set32(c.r[2], ld32((c.r[16].w[0] + 484u)));
    c.budget -= 1;
L_002BD604:
    set32(c.r[2], ld32((c.r[2].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 96u)));  goto L_002BD640; }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 31u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD634u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002BD634u) [[unlikely]] return; }
L_002BD634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002BD65C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_002BD640:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 292u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
L_002BD65C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD664u);  if (depth < kMaxDepth) unit_0067(c, 186u, depth + 1u); else { c.pc = 0x002BDD90u; return; } if (c.pc != 0x002BD664u) [[unlikely]] return; }
L_002BD664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD66Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 181u, depth + 1u); else { c.pc = 0x002BDD00u; return; } if (c.pc != 0x002BD66Cu) [[unlikely]] return; }
L_002BD66C:
    set32(c.r[2], ld32((c.r[16].w[0] + 484u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD680u); set32(c.r[4], c.r[3].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 359u, depth + 1u); else { c.pc = 0x002A3650u; return; } if (c.pc != 0x002BD680u) [[unlikely]] return; }
L_002BD680:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].sd[0] >= 0) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002BD718; }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 25u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD6ACu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002BD6ACu) [[unlikely]] return; }
L_002BD6AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 25u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD6CCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002BD6CCu) [[unlikely]] return; }
L_002BD6CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 25u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD6ECu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002BD6ECu) [[unlikely]] return; }
L_002BD6EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 25u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD70Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002BD70Cu) [[unlikely]] return; }
L_002BD70C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002BD7DC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002BD718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD720u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 363u, depth + 1u); else { c.pc = 0x002A36E0u; return; } if (c.pc != 0x002BD720u) [[unlikely]] return; }
L_002BD720:
    set32(c.r[18], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD734u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 192u, depth + 1u); else { c.pc = 0x002BDE60u; return; } if (c.pc != 0x002BD734u) [[unlikely]] return; }
L_002BD734:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD754u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002BD754u) [[unlikely]] return; }
L_002BD754:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD760u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 193u, depth + 1u); else { c.pc = 0x002BDE80u; return; } if (c.pc != 0x002BD760u) [[unlikely]] return; }
L_002BD760:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD780u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002BD780u) [[unlikely]] return; }
L_002BD780:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD78Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 192u, depth + 1u); else { c.pc = 0x002BDE60u; return; } if (c.pc != 0x002BD78Cu) [[unlikely]] return; }
L_002BD78C:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD7ACu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002BD7ACu) [[unlikely]] return; }
L_002BD7AC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD7B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 193u, depth + 1u); else { c.pc = 0x002BDE80u; return; } if (c.pc != 0x002BD7B8u) [[unlikely]] return; }
L_002BD7B8:
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.f[12] = 0u;
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD7D8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002BD7D8u) [[unlikely]] return; }
L_002BD7D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002BD7DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD7E4u);  if (depth < kMaxDepth) unit_005C(c, 443u, depth + 1u); else { c.pc = 0x00293FB0u; return; } if (c.pc != 0x002BD7E4u) [[unlikely]] return; }
L_002BD7E4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 484u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 96u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD800u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 195u, depth + 1u); else { c.pc = 0x002BDEC0u; return; } if (c.pc != 0x002BD800u) [[unlikely]] return; }
L_002BD800:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[17], ld32((c.r[3].w[0])));  if (t) { goto L_002BD830; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD81Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 121u, depth + 1u); else { c.pc = 0x00299200u; return; } if (c.pc != 0x002BD81Cu) [[unlikely]] return; }
L_002BD81C:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 164u), c.r[2].w[0]);  if (t) { goto L_002BD838; } }
L_002BD830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD838u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x002BD838u) [[unlikely]] return; }
L_002BD838:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 12u);
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD850u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 121u, depth + 1u); else { c.pc = 0x00299200u; return; } if (c.pc != 0x002BD850u) [[unlikely]] return; }
L_002BD850:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_002BD89C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD888u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_005E(c, 121u, depth + 1u); else { c.pc = 0x00299200u; return; } if (c.pc != 0x002BD888u) [[unlikely]] return; }
L_002BD888:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 164u), c.r[2].w[0]);  if (t) { goto L_002BD8A4; } }
L_002BD89C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD8A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 237u, depth + 1u); else { c.pc = 0x0020E420u; return; } if (c.pc != 0x002BD8A4u) [[unlikely]] return; }
L_002BD8A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD8ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 440u, depth + 1u); else { c.pc = 0x00293F10u; return; } if (c.pc != 0x002BD8ACu) [[unlikely]] return; }
L_002BD8AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD8C8u); c.r[5].d[0] = c.r[2].d[0] | 18497ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BD8C8u) [[unlikely]] return; }
L_002BD8C8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD8DCu); set32(c.r[5], ld32((c.r[16].w[0] + 480u)));  if (depth < kMaxDepth) unit_005E(c, 179u, depth + 1u); else { c.pc = 0x00299E00u; return; } if (c.pc != 0x002BD8DCu) [[unlikely]] return; }
L_002BD8DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD8E8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_005C(c, 445u, depth + 1u); else { c.pc = 0x00293FF0u; return; } if (c.pc != 0x002BD8E8u) [[unlikely]] return; }
L_002BD8E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD8F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005D(c, 7u, depth + 1u); else { c.pc = 0x00294080u; return; } if (c.pc != 0x002BD8F4u) [[unlikely]] return; }
L_002BD8F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[6].d[0] = ld64((c.r[2].w[0] + 18976u));
    set32(c.r[7], c.r[29].w[0] + 128u);
    set32(c.r[8], c.r[29].w[0] + 136u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 112u), c.r[6].d[0]);
    c.r[4].d[0] = ld64((c.r[2].w[0] + 18984u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 120u), c.r[4].d[0]);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 18992u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 128u), c.r[3].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 19000u));
    st64((c.r[29].w[0] + 136u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD940u); set32(c.r[6], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_003C(c, 173u, depth + 1u); else { c.pc = 0x00211C50u; return; } if (c.pc != 0x002BD940u) [[unlikely]] return; }
L_002BD940:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 484u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 108u)));
    c.budget -= 14;
    if (c.r[17].sd[0] > 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 110u)));  goto L_002BD988; }
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 104u)));  if (t) { goto L_002BD9E0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 110u)));
    c.budget -= 1;
L_002BD988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD990u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002BD990u) [[unlikely]] return; }
L_002BD990:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD99Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002BD99Cu) [[unlikely]] return; }
L_002BD99C:
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BD9C4; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002BD9C4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BD9DC; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002BD9DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 1;
L_002BD9E0:
    set32(c.r[6], ld32((c.r[16].w[0] + 484u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD9F0u); set32(c.r[5], 0u + 201u);  if (depth < kMaxDepth) unit_0067(c, 372u, depth + 1u); else { c.pc = 0x002BFFD0u; return; } if (c.pc != 0x002BD9F0u) [[unlikely]] return; }
L_002BD9F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 484u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 114u)));
    c.budget -= 4;
    if (c.r[17].sd[0] > 0) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 116u)));  goto L_002BDA10; }
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 104u)));  if (t) { goto L_002BDA68; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 116u)));
    c.budget -= 1;
L_002BDA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA18u);  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002BDA18u) [[unlikely]] return; }
L_002BDA18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA24u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0014(c, 401u, depth + 1u); else { c.pc = 0x00173D20u; return; } if (c.pc != 0x002BDA24u) [[unlikely]] return; }
L_002BDA24:
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BDA4C; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002BDA4C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BDA64; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002BDA64:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 1;
L_002BDA68:
    set32(c.r[6], ld32((c.r[16].w[0] + 484u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA78u); set32(c.r[5], 0u + 201u);  if (depth < kMaxDepth) unit_0068(c, 14u, depth + 1u); else { c.pc = 0x002C02C0u; return; } if (c.pc != 0x002BDA78u) [[unlikely]] return; }
L_002BDA78:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA94u); c.r[5].d[0] = c.r[2].d[0] | 18515ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BDA94u) [[unlikely]] return; }
L_002BDA94:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDAACu); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_005E(c, 198u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002BDAACu) [[unlikely]] return; }
L_002BDAAC:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x534C0000u);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDAC8u); c.r[5].d[0] = c.r[2].d[0] | 18517ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BDAC8u) [[unlikely]] return; }
L_002BDAC8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDAE0u); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_005E(c, 198u, depth + 1u); else { c.pc = 0x0029A1C0u; return; } if (c.pc != 0x002BDAE0u) [[unlikely]] return; }
L_002BDAE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 96u)));  goto L_002BDB90; }
    set32(c.r[4], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 13392u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0xFF640000u);  goto L_002BDB0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_002BDB10; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF640000u);
    c.budget -= 1;
L_002BDB0C:
    c.r[3].d[0] = c.r[3].d[0] | 25700ull;
    c.budget -= 1;
L_002BDB10:
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 484u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 190u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 116u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  goto L_002BDB50; }
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF640000u);
    c.r[3].d[0] = c.r[3].d[0] | 25700ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 68u)));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 360u));
    c.r[4].d[0] = c.r[4].d[0] | 16384ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 360u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002BDBC0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002BDB50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 32767ull;
    c.r[5].d[0] = c.r[5].d[0] | 2ull;
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 68u)));
    c.r[5].d[0] = ld16((c.r[6].w[0] + 360u));
    c.r[5].d[0] = c.r[5].d[0] & 49151ull;
    st16((c.r[6].w[0] + 360u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 68u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 292u)));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 292u), c.r[4].w[0]);  if (t) { goto L_002BDBC0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_002BDB90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[3], 0u - 1u);
    set32(c.r[6], ld32((c.r[5].w[0] + 68u)));
    c.r[5].d[0] = ld16((c.r[6].w[0] + 360u));
    c.r[5].d[0] = c.r[5].d[0] & 49151ull;
    st16((c.r[6].w[0] + 360u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 68u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 292u)));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[6].w[0] + 292u), c.r[4].w[0]);
    c.budget -= 12;
L_002BDBC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 480u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BDBD0; } }
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 1;
L_002BDBD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002BDBD4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002BDC00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 340u)));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 2u);  goto L_002BDC3C; }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC34u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002BDC34u) [[unlikely]] return; }
L_002BDC34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDC5C; } }
L_002BDC3C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BDC5C; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC5Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002BDC5Cu) [[unlikely]] return; }
L_002BDC5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC68u); set32(c.r[4], c.r[4].w[0] + 20496u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002BDC68u) [[unlikely]] return; }
L_002BDC68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BDC80:
    set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));
    set32(c.r[6], c.r[3].w[0] + 112u);
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BDCDC; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002BDCDC; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 480u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002BDCDC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BDCDC; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 13280u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0xFF640000u);  goto L_002BDCD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_002BDCD8; } }
L_002BDCD4:
    c.r[3].d[0] = c.r[3].d[0] | 25700ull;
    c.budget -= 1;
L_002BDCD8:
    st32((c.r[5].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 1;
L_002BDCDC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BDCF0:
    st32((c.r[4].w[0] + 492u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 496u), c.r[6].w[0]);  c.pc = t; return; }
L_002BDD00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 496u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD18u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 193u, depth + 1u); else { c.pc = 0x002BDE80u; return; } if (c.pc != 0x002BDD18u) [[unlikely]] return; }
L_002BDD18:
    set32(c.r[5], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 340u)));
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 496u)));  goto L_002BDD48; }
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD44u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002BDD44u) [[unlikely]] return; }
L_002BDD44:
    set32(c.r[5], ld32((c.r[16].w[0] + 496u)));
    c.budget -= 1;
L_002BDD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 192u, depth + 1u); else { c.pc = 0x002BDE60u; return; } if (c.pc != 0x002BDD50u) [[unlikely]] return; }
L_002BDD50:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], c.r[2].w[0] + 12u);
    set32(c.r[4], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 340u)));
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002BDD80; }
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD7Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002BDD7Cu) [[unlikely]] return; }
L_002BDD7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BDD80:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BDD90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 9;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002BDDC4; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002BDE44; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002BDDC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDCCu);  if (depth < kMaxDepth) unit_0067(c, 229u, depth + 1u); else { c.pc = 0x002BE290u; return; } if (c.pc != 0x002BDDCCu) [[unlikely]] return; }
L_002BDDCC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDDCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 193u, depth + 1u); else { c.pc = 0x002BDE80u; return; } if (c.pc != 0x002BDDDCu) [[unlikely]] return; }
L_002BDDDC:
    set32(c.r[5], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 340u)));
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_002BDE0C; }
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE08u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002BDE08u) [[unlikely]] return; }
L_002BDE08:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002BDE0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 192u, depth + 1u); else { c.pc = 0x002BDE60u; return; } if (c.pc != 0x002BDE14u) [[unlikely]] return; }
L_002BDE14:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], c.r[2].w[0] + 12u);
    set32(c.r[4], ld32((c.r[3].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 340u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002BDE40; } }
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE40u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005E(c, 201u, depth + 1u); else { c.pc = 0x0029A270u; return; } if (c.pc != 0x002BDE40u) [[unlikely]] return; }
L_002BDE40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002BDE44:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BDE60:
    set32(c.r[2], 0u + 10u);
    mmi::divu(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BDE80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE94u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 192u, depth + 1u); else { c.pc = 0x002BDE60u; return; } if (c.pc != 0x002BDE94u) [[unlikely]] return; }
L_002BDE94:
    set32(c.r[3], c.r[16].w[0] - c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 10u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BDEC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], 0u - 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDEE8u); c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 392u, depth + 1u); else { c.pc = 0x002A3B50u; return; } if (c.pc != 0x002BDEE8u) [[unlikely]] return; }
L_002BDEE8:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[17].sd[0] < 13ll ? 1ull : 0ull;  goto L_002BE164; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 20656u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_0067[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BDF10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[18].w[0] + 12u);  if (t) { goto L_002BE160; } }
L_002BDF18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[18].w[0] - 80u);  if (t) { goto L_002BE160; } }
L_002BDF20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[18].w[0] - 462u);  if (t) { goto L_002BE160; } }
L_002BDF28:
    c.r[2].d[0] = c.r[18].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].sd[0] < 2000ll ? 1ull : 0ull;  goto L_002BE068; }
    c.r[1].d[0] = c.r[18].sd[0] < 1102ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BE064; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002BE160; } }
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[2], c.r[18].w[0] - 1000u);  goto L_002BDFFC; }
    set32(c.r[2], c.r[18].w[0] - 1000u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_002BDFEC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 20592u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_0067[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BDF8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002BDFE8; } }
L_002BDF94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002BDFE8; } }
L_002BDF9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_002BDFE8; } }
L_002BDFA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_002BDFE8; } }
L_002BDFAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_002BDFE8; } }
L_002BDFB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 5u);  if (t) { goto L_002BDFE8; } }
L_002BDFBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BDFE8; } }
L_002BDFC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BDFE8; } }
L_002BDFCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 8u);  if (t) { goto L_002BDFE8; } }
L_002BDFD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 9u);  if (t) { goto L_002BDFE8; } }
L_002BDFDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 10u);  if (t) { goto L_002BDFE8; } }
L_002BDFE4:
    set32(c.r[16], 0u + 11u);
    c.budget -= 1;
L_002BDFE8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002BDFEC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002BE160; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] + 46u);  if (t) { goto L_002BE160; } }
L_002BDFFC:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_002BE054; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 20544u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_0067[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BE024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002BE050; } }
L_002BE02C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002BE050; } }
L_002BE034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_002BE050; } }
L_002BE03C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_002BE050; } }
L_002BE044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_002BE050; } }
L_002BE04C:
    set32(c.r[16], 0u + 5u);
    c.budget -= 1;
L_002BE050:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002BE054:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002BE160; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] + 40u);  if (t) { goto L_002BE160; } }
L_002BE064:
    c.r[2].d[0] = c.r[18].sd[0] < 2000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002BE068:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].sd[0] < 3000ll ? 1ull : 0ull;  goto L_002BE088; }
    c.r[1].d[0] = c.r[18].sd[0] < 2011ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BE084; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[18].w[0] - 1942u);  if (t) { goto L_002BE160; } }
L_002BE084:
    c.r[2].d[0] = c.r[18].sd[0] < 3000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002BE088:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].sd[0] < 4000ll ? 1ull : 0ull;  goto L_002BE0A8; }
    c.r[1].d[0] = c.r[18].sd[0] < 3006ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BE0A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[18].w[0] - 2932u);  if (t) { goto L_002BE160; } }
L_002BE0A4:
    c.r[2].d[0] = c.r[18].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002BE0A8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].sd[0] < 5000ll ? 1ull : 0ull;  goto L_002BE0C8; }
    c.r[1].d[0] = c.r[18].sd[0] < 4024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BE0C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[18].w[0] - 3927u);  if (t) { goto L_002BE160; } }
L_002BE0C4:
    c.r[2].d[0] = c.r[18].sd[0] < 5000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002BE0C8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].sd[0] < 6000ll ? 1ull : 0ull;  goto L_002BE0E8; }
    c.r[1].d[0] = c.r[18].sd[0] < 5009ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BE0E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[18].w[0] - 4905u);  if (t) { goto L_002BE160; } }
L_002BE0E4:
    c.r[2].d[0] = c.r[18].sd[0] < 6000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002BE0E8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].sd[0] < 7000ll ? 1ull : 0ull;  goto L_002BE108; }
    c.r[1].d[0] = c.r[18].sd[0] < 6004ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BE104; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[18].w[0] - 5897u);  if (t) { goto L_002BE160; } }
L_002BE104:
    c.r[2].d[0] = c.r[18].sd[0] < 7000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002BE108:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].sd[0] < 8000ll ? 1ull : 0ull;  goto L_002BE128; }
    c.r[1].d[0] = c.r[18].sd[0] < 7016ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BE124; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[18].w[0] - 6894u);  if (t) { goto L_002BE160; } }
L_002BE124:
    c.r[2].d[0] = c.r[18].sd[0] < 8000ll ? 1ull : 0ull;
    c.budget -= 1;
L_002BE128:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE160; } }
    c.r[1].d[0] = c.r[18].sd[0] < 8002ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BE160; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[18].w[0] - 7879u);  if (t) { goto L_002BE160; } }
L_002BE144:
    set32(c.r[2], c.r[18].w[0] - 9878u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] - 1u);  if (t) { goto L_002BE160; } }
L_002BE150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[18].w[0] - 19854u);  if (t) { goto L_002BE160; } }
L_002BE158:
    set32(c.r[2], c.r[18].w[0] - 32768u);
    set32(c.r[17], c.r[2].w[0] - 17018u);
    c.budget -= 2;
L_002BE160:
    c.r[2].d[0] = c.r[17].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 1;
L_002BE164:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u - 1u);  goto L_002BE17C; }
    c.r[1].d[0] = c.r[17].sd[0] < 222ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002BE17C; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002BE17C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BE1A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_002BE1CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002BE268; } }
L_002BE1CC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 110u)));
    c.f[20] = 0u;
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 1104u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[21] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002BE258; } }
L_002BE1F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30380u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 116u)));  if (t) { goto L_002BE204; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  if (t) { goto L_002BE208; } }
L_002BE204:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BE208:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE21Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 281u, depth + 1u); else { c.pc = 0x00282B00u; return; } if (c.pc != 0x002BE21Cu) [[unlikely]] return; }
L_002BE21C:
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE228u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x00184040u; return; } if (c.pc != 0x002BE228u) [[unlikely]] return; }
L_002BE228:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[21], c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002BE268; } }
L_002BE248:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002BE258; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002BE268; } }
L_002BE258:
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE1F0u | kUnwind; return; } goto L_002BE1F0; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002BE268:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BE290:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002BE2D8; } }
L_002BE2B4:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE2C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 225u, depth + 1u); else { c.pc = 0x002BE1A0u; return; } if (c.pc != 0x002BE2C8u) [[unlikely]] return; }
L_002BE2C8:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002BE2D8; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002BE2D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 496u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 492u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE2B4u | kUnwind; return; } goto L_002BE2B4; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BE310:
    set32(c.r[4], ld32((c.r[5].w[0] + 1100u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_002BE3B4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BE3B4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));  goto L_002BE358; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BE3B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BE3B4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE3B4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    c.budget -= 1;
L_002BE358:
    set32(c.r[4], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BE3B0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 1104u)));  goto L_002BE384; }
    c.r[2].d[0] = 0ull | 50005ull;
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002BE3B4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 1104u)));
    c.budget -= 1;
L_002BE384:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BE398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002BE3B4; } }
L_002BE398:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE3B4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE3B4; } }
L_002BE3B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BE3B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BE3C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC6D0u | kUnwind; return; } goto L_002BC6D0; }
L_002BE3D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCB30u | kUnwind; return; } goto L_002BCB30; }
L_002BE3E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE3F4u); st32((c.r[28].w[0] - 30284u), 0u);  if (depth < kMaxDepth) unit_00C0(c, 386u, depth + 1u); else { c.pc = 0x00422960u; return; } if (c.pc != 0x002BE3F4u) [[unlikely]] return; }
L_002BE3F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[28].w[0] - 30284u), c.r[2].w[0]);  if (t) { goto L_002BE5A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE404u);  if (depth < kMaxDepth) unit_00C0(c, 388u, depth + 1u); else { c.pc = 0x004229A0u; return; } if (c.pc != 0x002BE404u) [[unlikely]] return; }
L_002BE404:
    set32(c.r[5], ld32((c.r[28].w[0] - 30284u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE418u); set32(c.r[4], c.r[4].w[0] + 20688u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002BE418u) [[unlikely]] return; }
L_002BE418:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002BE5A4; }
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE434u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002BE434u) [[unlikely]] return; }
L_002BE434:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002BE448; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 64u)));  if (t) { goto L_002BE45C; } }
L_002BE448:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_002BE45C; }
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_002BE45C:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BE480; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BE480; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE480u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BE480u) [[unlikely]] return; }
L_002BE480:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 32u);  goto L_002BE518; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE490u);  if (depth < kMaxDepth) unit_00C0(c, 388u, depth + 1u); else { c.pc = 0x004229A0u; return; } if (c.pc != 0x002BE490u) [[unlikely]] return; }
L_002BE490:
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE4A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 176u, depth + 1u); else { c.pc = 0x00182350u; return; } if (c.pc != 0x002BE4A0u) [[unlikely]] return; }
L_002BE4A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));  goto L_002BE4BC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 4;
L_002BE4BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));  goto L_002BE4D4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 4;
L_002BE4D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));  goto L_002BE4EC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 4;
L_002BE4EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));  goto L_002BE504; }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 4;
L_002BE504:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE594; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 48u), 0u);  if (t) { goto L_002BE594; } }
L_002BE518:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE524u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002BE524u) [[unlikely]] return; }
L_002BE524:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002BE538; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_002BE54C; } }
L_002BE538:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_002BE54C; }
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_002BE54C:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_002BE574; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BE570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE570u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BE570u) [[unlikely]] return; }
L_002BE570:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002BE574:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  goto L_002BE58C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE584u);  if (depth < kMaxDepth) unit_0067(c, 253u, depth + 1u); else { c.pc = 0x002BE670u; return; } if (c.pc != 0x002BE584u) [[unlikely]] return; }
L_002BE584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE594; } }
L_002BE58C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE594u); set32(c.r[4], c.r[4].w[0] + 20752u);  if (depth < kMaxDepth) unit_0024(c, 118u, depth + 1u); else { c.pc = 0x001B0A20u; return; } if (c.pc != 0x002BE594u) [[unlikely]] return; }
L_002BE594:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE5A4; } }
L_002BE5A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BE5A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002BE5C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 30284u), 0u);  c.pc = t; return; }
L_002BE5D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002BE5F4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE5ECu); set32(c.r[4], c.r[4].w[0] + 20784u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002BE5ECu) [[unlikely]] return; }
L_002BE5EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BE600; } }
L_002BE5F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 768u));
    c.budget -= 3;
L_002BE600:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BE610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30280u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002BE658; }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 30284u)));  goto L_002BE644; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE63Cu); set32(c.r[4], c.r[4].w[0] + 20784u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002BE63Cu) [[unlikely]] return; }
L_002BE63C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE654; } }
L_002BE644:
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 768u));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[4].w[0] + 768u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002BE654:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002BE658:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BE660:
    set32(c.r[5], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[6], 0u + 1216u);
    c.budget -= 4;
    { set32(c.r[4], c.r[5].w[0] + 1216u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00181DD0u | kUnwind; return; } [[clang::musttail]] return unit_0018(c, 154u, depth); }
L_002BE670:
    set32(c.r[4], ld32((c.r[28].w[0] - 30284u)));
    set32(c.r[6], 0u + 1216u);
    c.budget -= 4;
    { set32(c.r[5], c.r[4].w[0] + 1216u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00181DD0u | kUnwind; return; } [[clang::musttail]] return unit_0018(c, 154u, depth); }
L_002BE680:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00C1(c, 81u, depth); }
L_002BE690:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00C1(c, 77u, depth); }
L_002BE6A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], c.r[4].w[0] << 4);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[2].w[0] + 15u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE6C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002BE6C0u) [[unlikely]] return; }
L_002BE6C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002BE6D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_002BE6E8; } }
L_002BE6D4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_002BE6E8; }
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 3;
L_002BE6E8:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002BE710; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BE70C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE70Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BE70Cu) [[unlikely]] return; }
L_002BE70C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002BE710:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BE720:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[4].w[0] << 4);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 10u);
    st32((c.r[29].w[0] + 116u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE754u); st32((c.r[29].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002BE754u) [[unlikely]] return; }
L_002BE754:
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 12u);  goto L_002BE77C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BE778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE778u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BE778u) [[unlikely]] return; }
L_002BE778:
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_002BE77C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE78Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002BE78Cu) [[unlikely]] return; }
L_002BE78C:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002BE7A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_002BE7B4; } }
L_002BE7A0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_002BE7B4; }
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 3;
L_002BE7B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  goto L_002BE7DC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BE7D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE7D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BE7D8u) [[unlikely]] return; }
L_002BE7D8:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002BE7DC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 84u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE7F8u); st32((c.r[29].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002BE7F8u) [[unlikely]] return; }
L_002BE7F8:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002BE820; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BE81C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE81Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BE81Cu) [[unlikely]] return; }
L_002BE81C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002BE820:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002BE830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002BE864; } }
    c.r[1].d[0] = c.r[4].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_002BE878; }
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE864; } }
    c.r[2].d[0] = c.r[5].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE870; } }
L_002BE864:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE878; } }
L_002BE870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE878u);  if (depth < kMaxDepth) unit_0051(c, 113u, depth + 1u); else { c.pc = 0x00264DA0u; return; } if (c.pc != 0x002BE878u) [[unlikely]] return; }
L_002BE878:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BE890:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE8BCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002BE8BCu) [[unlikely]] return; }
L_002BE8BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002BE8D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 96u)));  if (t) { goto L_002BE8E4; } }
L_002BE8D0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_002BE8E4; }
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 3;
L_002BE8E4:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002BE90C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BE908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE908u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BE908u) [[unlikely]] return; }
L_002BE908:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BE90C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << (c.r[18].w[0] & 31u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE930u); st32((c.r[29].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002BE930u) [[unlikely]] return; }
L_002BE930:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002BE958; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BE954; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE954u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BE954u) [[unlikely]] return; }
L_002BE954:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002BE958:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002BE970:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE99Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002BE99Cu) [[unlikely]] return; }
L_002BE99C:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002BE9B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 96u)));  if (t) { goto L_002BE9C4; } }
L_002BE9B0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_002BE9C4; }
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 3;
L_002BE9C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 1u);  goto L_002BE9EC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_002BE9E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE9E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BE9E8u) [[unlikely]] return; }
L_002BE9E8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002BE9EC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] << (c.r[16].w[0] & 31u));
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[18].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA0Cu); st32((c.r[29].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0037(c, 403u, depth + 1u); else { c.pc = 0x001FF300u; return; } if (c.pc != 0x002BEA0Cu) [[unlikely]] return; }
L_002BEA0C:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002BEA34; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BEA30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BEA30u) [[unlikely]] return; }
L_002BEA30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002BEA34:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002BEA50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x001B5D10u; return; } if (c.pc != 0x002BEA64u) [[unlikely]] return; }
L_002BEA64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + 26544u);
    set32(c.r[4], 0u - 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BEAC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BEAE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEAE0u);  if (depth < kMaxDepth) unit_0026(c, 4u, depth + 1u); else { c.pc = 0x001B8030u; return; } if (c.pc != 0x002BEAE0u) [[unlikely]] return; }
L_002BEAE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BEB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BEBF4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BEBE0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].d[0] = c.r[5].d[0] & 1ull;  goto L_002BEBC4; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002BEBF8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[1] = ld32((c.r[16].w[0] + 60u));  goto L_002BEB64; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BEBF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEBF4; } }
L_002BEB64:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEBF4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEB88u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 536u, depth + 1u); else { c.pc = 0x001B7FF0u; return; } if (c.pc != 0x002BEB88u) [[unlikely]] return; }
L_002BEB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEB90u);  if (depth < kMaxDepth) unit_0024(c, 183u, depth + 1u); else { c.pc = 0x001B1510u; return; } if (c.pc != 0x002BEB90u) [[unlikely]] return; }
L_002BEB90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEB98u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 9u, depth + 1u); else { c.pc = 0x001B8080u; return; } if (c.pc != 0x002BEB98u) [[unlikely]] return; }
L_002BEB98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEBA0u);  if (depth < kMaxDepth) unit_0026(c, 10u, depth + 1u); else { c.pc = 0x001B8090u; return; } if (c.pc != 0x002BEBA0u) [[unlikely]] return; }
L_002BEBA0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 52u)));  goto L_002BEBB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEBB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 139u, depth + 1u); else { c.pc = 0x001ACFC0u; return; } if (c.pc != 0x002BEBB4u) [[unlikely]] return; }
L_002BEBB4:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_002BEBB8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002BEBF4; } }
L_002BEBC4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BEBF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEBD4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 5u, depth + 1u); else { c.pc = 0x001B8040u; return; } if (c.pc != 0x002BEBD4u) [[unlikely]] return; }
L_002BEBD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
L_002BEBE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEBE8u);  if (depth < kMaxDepth) unit_0026(c, 10u, depth + 1u); else { c.pc = 0x001B8090u; return; } if (c.pc != 0x002BEBE8u) [[unlikely]] return; }
L_002BEBE8:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEBF4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 137u, depth + 1u); else { c.pc = 0x001ACF90u; return; } if (c.pc != 0x002BEBF4u) [[unlikely]] return; }
L_002BEBF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BEBF8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BEC10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BEEF0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].d[0] = c.r[5].d[0] & 8ull;  goto L_002BED84; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[16].w[0] + 64u));  goto L_002BED1C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BECC4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[16].w[0] + 60u));  goto L_002BEC7C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BEC78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002BEEF4; } }
L_002BEC78:
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.budget -= 1;
L_002BEC7C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BEEF0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_002BECB4; }
L_002BECB4:
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.f[0]);  if (t) { goto L_002BEEF0; } }
L_002BECC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BECCCu);  if (depth < kMaxDepth) unit_0026(c, 7u, depth + 1u); else { c.pc = 0x001B8060u; return; } if (c.pc != 0x002BECCCu) [[unlikely]] return; }
L_002BECCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BED18; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 3u);  goto L_002BED14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BECECu);  if (depth < kMaxDepth) unit_0026(c, 4u, depth + 1u); else { c.pc = 0x001B8030u; return; } if (c.pc != 0x002BECECu) [[unlikely]] return; }
L_002BECEC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 7;
    if (c.r[3].sd[0] < 0) { st32((c.r[16].w[0] + 52u), 0u);  goto L_002BEEF0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002BEEF0; } }
L_002BED14:
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 1;
L_002BED18:
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.budget -= 1;
L_002BED1C:
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BEEF0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[2] = ld32((c.r[5].w[0] + 80u));  goto L_002BED54; }
L_002BED54:
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 64u), c.f[1]);  if (t) { goto L_002BEEF0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002BEEF0; } }
L_002BED84:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));  goto L_002BEE14; }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BED9Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0037(c, 401u, depth + 1u); else { c.pc = 0x001FF2C0u; return; } if (c.pc != 0x002BED9Cu) [[unlikely]] return; }
L_002BED9C:
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_002BEDB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_002BEDC4; } }
L_002BEDB0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_002BEDC4; }
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 3;
L_002BEDC4:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BEDE8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BEDE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEDE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 222u, depth + 1u); else { c.pc = 0x00171CA0u; return; } if (c.pc != 0x002BEDE8u) [[unlikely]] return; }
L_002BEDE8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_002BEE10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEDF8u);  if (depth < kMaxDepth) unit_0052(c, 144u, depth + 1u); else { c.pc = 0x00269C10u; return; } if (c.pc != 0x002BEDF8u) [[unlikely]] return; }
L_002BEDF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BEE10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 301u, depth + 1u); else { c.pc = 0x002BF0A0u; return; } if (c.pc != 0x002BEE08u) [[unlikely]] return; }
L_002BEE08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEEF0; } }
L_002BEE10:
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.budget -= 1;
L_002BEE14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[5].w[0] + 80u));  goto L_002BEE38; }
    c.f[1] = 0u;
    c.budget -= 1;
L_002BEE38:
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BEEF0; } }
    c.f[3] = ld32((c.r[16].w[0] + 80u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BEEF0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30344u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[4].w[0] + 80u));  goto L_002BEE90; }
L_002BEE90:
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 76u), c.f[2]);  if (t) { goto L_002BEEBC; } }
    st32((c.r[16].w[0] + 76u), c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.f[1]);  if (t) { goto L_002BEEDC; } }
L_002BEEBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  goto L_002BEEE0; }
    st32((c.r[16].w[0] + 76u), c.f[0]);
    st32((c.r[16].w[0] + 80u), c.f[1]);
    c.budget -= 2;
L_002BEEDC:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_002BEEE0:
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEEECu); c.f[12] = ld32((c.r[16].w[0] + 76u));  if (depth < kMaxDepth) unit_001D(c, 235u, depth + 1u); else { c.pc = 0x00196640u; return; } if (c.pc != 0x002BEEECu) [[unlikely]] return; }
L_002BEEEC:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_002BEEF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002BEEF4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BEF10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.f[20] = c.f[12];  if (t) { goto L_002BEFC8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BEFA0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002BEF7C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BEF6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 64u), c.f[20]);  if (t) { goto L_002BEFD8; } }
L_002BEF6C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_002BEFD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002BF07C; } }
L_002BEF7C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_002BEFA0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_002BEFA0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002BEFD4; } }
L_002BEFA0:
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  goto L_002BEFB8; }
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[17].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002BEFCC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_002BEFB8:
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002BF078; } }
L_002BEFC8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002BEFCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEFD4u);  if (depth < kMaxDepth) unit_0067(c, 301u, depth + 1u); else { c.pc = 0x002BF0A0u; return; } if (c.pc != 0x002BEFD4u) [[unlikely]] return; }
L_002BEFD4:
    st32((c.r[18].w[0] + 64u), c.f[20]);
    c.budget -= 1;
L_002BEFD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    c.f[0] = 0u;
    st32((c.r[18].w[0] + 80u), 0u);
    set32(c.r[4], 0u - 1u);
    st32((c.r[18].w[0] + 72u), 0u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    st32((c.r[18].w[0] + 56u), c.r[4].w[0]);
    set32(c.r[3], 0u - 5u);
    st32((c.r[18].w[0] + 84u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    st32((c.r[18].w[0] + 88u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 68u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002BF02C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002BF03C; } }
L_002BF02C:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_002BF03C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  goto L_002BF054; }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002BF060; } }
L_002BF054:
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002BF060:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BF078; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 2;
L_002BF078:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002BF07C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BF0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_002BF0C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF0D4; } }
L_002BF0C8:
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002BF0E0; } }
L_002BF0D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF0DCu);  if (depth < kMaxDepth) unit_0026(c, 4u, depth + 1u); else { c.pc = 0x001B8030u; return; } if (c.pc != 0x002BF0DCu) [[unlikely]] return; }
L_002BF0DC:
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 1;
L_002BF0E0:
    set32(c.r[4], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BF100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 6;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002BF124; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF120u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0026(c, 5u, depth + 1u); else { c.pc = 0x001B8040u; return; } if (c.pc != 0x002BF120u) [[unlikely]] return; }
L_002BF120:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002BF124:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BF130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 6;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002BF154; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF150u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 5u, depth + 1u); else { c.pc = 0x001B8040u; return; } if (c.pc != 0x002BF150u) [[unlikely]] return; }
L_002BF150:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002BF154:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BF160:
    c.f[0] = ld32((c.r[28].w[0] - 32692u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 84u), c.r[5].w[0]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_002BF198; } }
    st32((c.r[4].w[0] + 80u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_002BF1B8; } }
L_002BF198:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 80u), c.f[0]);
    st32((c.r[4].w[0] + 76u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 8;
L_002BF1B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BF1C0:
    c.f[0] = ld32((c.r[28].w[0] - 32692u));
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 88u), c.r[5].w[0]);  if (t) { goto L_002BF1F0; } }
    st32((c.r[4].w[0] + 80u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_002BF210; } }
L_002BF1F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 80u), c.f[0]);
    st32((c.r[4].w[0] + 76u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 8;
L_002BF210:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BF220:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B8050u | kUnwind; return; } [[clang::musttail]] return unit_0026(c, 6u, depth); }
L_002BF230:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B8020u | kUnwind; return; } [[clang::musttail]] return unit_0026(c, 3u, depth); }
L_002BF240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF254u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 7u, depth + 1u); else { c.pc = 0x001B8060u; return; } if (c.pc != 0x002BF254u) [[unlikely]] return; }
L_002BF254:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BF26C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_002BF26C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002BF280; }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
L_002BF280:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BF290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF2A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 8u, depth + 1u); else { c.pc = 0x001B8070u; return; } if (c.pc != 0x002BF2A4u) [[unlikely]] return; }
L_002BF2A4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002BF2C0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_002BF2C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BF2D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BF318; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 26544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF300u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 311u, depth + 1u); else { c.pc = 0x001B5D50u; return; } if (c.pc != 0x002BF300u) [[unlikely]] return; }
L_002BF300:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002BF31C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF318u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 315u, depth + 1u); else { c.pc = 0x001B5DC0u; return; } if (c.pc != 0x002BF318u) [[unlikely]] return; }
L_002BF318:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002BF31C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BF330:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].d[0] = c.r[2].d[0] | 16706ull;
    set32(c.r[8], c.r[8].w[0] + 26616u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52500000u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[6].d[0] = c.r[2].d[0] | 16723ull;
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[5], 0u + 127u);
    st32((c.r[4].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 128u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 132u), 0u);
    st32((c.r[4].w[0] + 136u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 140u), 0u);
    st32((c.r[4].w[0] + 144u), c.r[7].w[0]);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 128u), 0u);
    st32((c.r[4].w[0] + 148u), 0u);
    c.budget -= 56;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 152u), 0u);  c.pc = t; return; }
L_002BF410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF430u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 371u, depth + 1u); else { c.pc = 0x002934F0u; return; } if (c.pc != 0x002BF430u) [[unlikely]] return; }
L_002BF430:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_002BF4B0; }
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 4u), c.f[1]);  if (t) { goto L_002BF474; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BF478; }
L_002BF474:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BF478:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[3] = ld32((c.r[16].w[0] + 16u));  goto L_002BF48C; }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 20u));  if (t) { goto L_002BF4A8; } }
L_002BF48C:
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.budget -= 7;
L_002BF4A8:
    st32((c.r[17].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 2;
L_002BF4B0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[17].w[0] + 80u);  goto L_002BF5B4; }
    set32(c.r[16], c.r[17].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF4C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 371u, depth + 1u); else { c.pc = 0x002934F0u; return; } if (c.pc != 0x002BF4C8u) [[unlikely]] return; }
L_002BF4C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[17].w[0] + 104u);  goto L_002BF538; }
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 4u), c.f[1]);  if (t) { goto L_002BF50C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BF510; }
L_002BF50C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BF510:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  goto L_002BF524; }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002BF530; } }
L_002BF524:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF530u); c.f[12] = ld32((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_001D(c, 235u, depth + 1u); else { c.pc = 0x00196640u; return; } if (c.pc != 0x002BF530u) [[unlikely]] return; }
L_002BF530:
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[16], c.r[17].w[0] + 104u);
    c.budget -= 2;
L_002BF538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF540u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 371u, depth + 1u); else { c.pc = 0x002934F0u; return; } if (c.pc != 0x002BF540u) [[unlikely]] return; }
L_002BF540:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 128u)));  goto L_002BF7E0; }
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 4u), c.f[1]);  if (t) { goto L_002BF584; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = 0ull + 0ull;  goto L_002BF588; }
L_002BF584:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002BF588:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  goto L_002BF59C; }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002BF5AC; } }
L_002BF59C:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF5A8u); c.f[12] = ld32((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_001D(c, 235u, depth + 1u); else { c.pc = 0x00196640u; return; } if (c.pc != 0x002BF5A8u) [[unlikely]] return; }
L_002BF5A8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002BF5AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_002BF7DC; } }
L_002BF5B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF5BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 371u, depth + 1u); else { c.pc = 0x002934F0u; return; } if (c.pc != 0x002BF5BCu) [[unlikely]] return; }
L_002BF5BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[17].w[0] + 104u);  goto L_002BF6C8; }
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 4u), c.f[1]);  if (t) { goto L_002BF600; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BF604; }
L_002BF600:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BF604:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  goto L_002BF618; }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002BF624; } }
L_002BF618:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF624u); c.f[12] = ld32((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_001D(c, 235u, depth + 1u); else { c.pc = 0x00196640u; return; } if (c.pc != 0x002BF624u) [[unlikely]] return; }
L_002BF624:
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 1u);  goto L_002BF660; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BF660; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BF660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF6C4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  goto L_002BF68C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BF6C4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 1;
L_002BF68C:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.f[0] = ld32((c.r[16].w[0] + 8u));  if (t) { goto L_002BF69C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 1;
L_002BF69C:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 10;
L_002BF6C4:
    set32(c.r[16], c.r[17].w[0] + 104u);
    c.budget -= 1;
L_002BF6C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF6D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 371u, depth + 1u); else { c.pc = 0x002934F0u; return; } if (c.pc != 0x002BF6D0u) [[unlikely]] return; }
L_002BF6D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF7DC; } }
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 4u), c.f[1]);  if (t) { goto L_002BF714; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = 0ull + 0ull;  goto L_002BF718; }
L_002BF714:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002BF718:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  goto L_002BF72C; }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002BF73C; } }
L_002BF72C:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF738u); c.f[12] = ld32((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_001D(c, 235u, depth + 1u); else { c.pc = 0x00196640u; return; } if (c.pc != 0x002BF738u) [[unlikely]] return; }
L_002BF738:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002BF73C:
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], 0u + 1u);  goto L_002BF778; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = 0ull + 0ull;  goto L_002BF778; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002BF778:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BF7DC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 72u)));  goto L_002BF7A4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002BF7DC; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_002BF7A4:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; c.f[0] = ld32((c.r[16].w[0] + 8u));  if (t) { goto L_002BF7B4; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_002BF7B4:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 10;
L_002BF7DC:
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 1;
L_002BF7E0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002BF914; }
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[17].w[0] + 152u));  goto L_002BF880; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[4] = ld32((c.r[5].w[0] + 80u));  goto L_002BF824; }
L_002BF824:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[4]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 132u), c.f[0]);  if (t) { goto L_002BF86C; } }
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 132u), c.f[0]);
    c.budget -= 6;
L_002BF86C:
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = ld32((c.r[17].w[0] + 132u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 152u));
    c.budget -= 5;
L_002BF880:
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BF910; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30344u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0ED00000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.f[4] = ld32((c.r[5].w[0] + 80u));  goto L_002BF8B8; }
L_002BF8B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = fp::ee::div(c.fcr31, c.f[3], c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 140u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[4]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 140u), c.f[0]);  if (t) { goto L_002BF900; } }
    c.f[1] = ld32((c.r[17].w[0] + 140u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 140u), c.f[0]);
    c.budget -= 6;
L_002BF900:
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = ld32((c.r[17].w[0] + 140u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 144u), c.f[0]);
    c.budget -= 4;
L_002BF910:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002BF914:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BF930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 8424u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[31].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45530000u);
    c.r[5].d[0] = c.r[2].d[0] | 16706ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47500000u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 26600u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 16723ull;
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF990u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 214u, depth + 1u); else { c.pc = 0x0018F3D0u; return; } if (c.pc != 0x002BF990u) [[unlikely]] return; }
L_002BF990:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF9A0u); st32((c.r[16].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_0067(c, 359u, depth + 1u); else { c.pc = 0x002BFDF0u; return; } if (c.pc != 0x002BF9A0u) [[unlikely]] return; }
L_002BF9A0:
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BF9D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BFA34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 26600u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF9FCu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 366u, depth + 1u); else { c.pc = 0x002BFEC0u; return; } if (c.pc != 0x002BF9FCu) [[unlikely]] return; }
L_002BF9FC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_002BFA20; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 7;
L_002BFA20:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002BFA38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002BFA34u) [[unlikely]] return; }
L_002BFA34:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002BFA38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BFA50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002BFAC0; }
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BFABC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002BFAAC; } }
L_002BFA8C:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002BFAAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFAA8u);  if (depth < kMaxDepth) unit_0067(c, 319u, depth + 1u); else { c.pc = 0x002BF410u; return; } if (c.pc != 0x002BFAA8u) [[unlikely]] return; }
L_002BFAA8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002BFAAC:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFA8Cu | kUnwind; return; } goto L_002BFA8C; }
L_002BFABC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002BFAC0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BFAD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 14;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_002BFC5C; }
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BFC58; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BFC58; } }
    set32(c.r[18], ld32((c.r[28].w[0] - 31436u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[21].d[0] = ld16((c.r[2].w[0] + 74u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFB34u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 145u, depth + 1u); else { c.pc = 0x00161540u; return; } if (c.pc != 0x002BFB34u) [[unlikely]] return; }
L_002BFB34:
    set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFB40u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 150u, depth + 1u); else { c.pc = 0x001615B0u; return; } if (c.pc != 0x002BFB40u) [[unlikely]] return; }
L_002BFB40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002BFC28; } }
L_002BFB48:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002BFC28; }
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BFC24; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BFC24; } }
    set32(c.r[20], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFB90u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002BFB90u) [[unlikely]] return; }
L_002BFB90:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 352u)));  goto L_002BFBD8; }
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.f[12] = ld32((c.r[16].w[0] + 24u));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.f[14] = 0u;
    set32(c.r[7], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFBD0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 180u, depth + 1u); else { c.pc = 0x00212000u; return; } if (c.pc != 0x002BFBD0u) [[unlikely]] return; }
L_002BFBD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFC24; } }
L_002BFBD8:
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFBE4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002BFBE4u) [[unlikely]] return; }
L_002BFBE4:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[3], 0u + 4u);
    c.f[14] = 0u;
    set32(c.r[7], 0u + 1u);
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.f[12] = ld32((c.r[16].w[0] + 24u));
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFC14u); set32(c.r[8], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_003C(c, 180u, depth + 1u); else { c.pc = 0x00212000u; return; } if (c.pc != 0x002BFC14u) [[unlikely]] return; }
L_002BFC14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFC1Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002BFC1Cu) [[unlikely]] return; }
L_002BFC1C:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 2;
L_002BFC24:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002BFC28:
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFB48u | kUnwind; return; } goto L_002BFB48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFC40u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 166u, depth + 1u); else { c.pc = 0x00161810u; return; } if (c.pc != 0x002BFC40u) [[unlikely]] return; }
L_002BFC40:
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    c.r[3].d[0] = c.r[21].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st16((c.r[2].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFC58u); set32(c.r[4], ld32((c.r[28].w[0] - 31436u)));  if (depth < kMaxDepth) unit_0010(c, 147u, depth + 1u); else { c.pc = 0x00161570u; return; } if (c.pc != 0x002BFC58u) [[unlikely]] return; }
L_002BFC58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002BFC5C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002BFC80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFC9Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 366u, depth + 1u); else { c.pc = 0x002BFEC0u; return; } if (c.pc != 0x002BFC9Cu) [[unlikely]] return; }
L_002BFC9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFCA8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 359u, depth + 1u); else { c.pc = 0x002BFDF0u; return; } if (c.pc != 0x002BFCA8u) [[unlikely]] return; }
L_002BFCA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BFCC0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002BFDDC; }
    set32(c.r[17], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002BFDD8; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BFD04u) [[unlikely]] return; }
L_002BFD04:
    set32(c.r[5], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD10u); set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  if (depth < kMaxDepth) unit_003B(c, 147u, depth + 1u); else { c.pc = 0x0020D4B0u; return; } if (c.pc != 0x002BFD10u) [[unlikely]] return; }
L_002BFD10:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD1Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001F(c, 213u, depth + 1u); else { c.pc = 0x0019E620u; return; } if (c.pc != 0x002BFD1Cu) [[unlikely]] return; }
L_002BFD1C:
    set32(c.r[5], c.r[17].w[0] + 96u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD2Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 217u, depth + 1u); else { c.pc = 0x0018F450u; return; } if (c.pc != 0x002BFD2Cu) [[unlikely]] return; }
L_002BFD2C:
    c.f[3] = ld32((c.r[16].w[0] + 112u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[3]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[16].w[0] + 116u));  goto L_002BFD8C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = ld32((c.r[3].w[0] + 19024u));
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.f[2] = ld32((c.r[2].w[0] + 19028u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[1] = ld32((c.r[3].w[0] + 19032u));
    c.f[0] = ld32((c.r[2].w[0] + 19036u));
    st32((c.r[29].w[0] + 68u), c.f[2]);
    st32((c.r[29].w[0] + 72u), c.f[1]);
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD88u); st32((c.r[29].w[0] + 64u), c.f[3]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002BFD88u) [[unlikely]] return; }
L_002BFD88:
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.budget -= 1;
L_002BFD8C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BFDD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.f[0] = ld32((c.r[2].w[0] + 19012u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 19016u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 19008u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFDD8u); st32((c.r[29].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0018F500u; return; } if (c.pc != 0x002BFDD8u) [[unlikely]] return; }
L_002BFDD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002BFDDC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002BFDF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 100u), c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFE10u); set32(c.r[4], c.r[5].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x00120310u; return; } if (c.pc != 0x002BFE10u) [[unlikely]] return; }
L_002BFE10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_002BFE80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002BFE68; } }
L_002BFE20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFE28u); set32(c.r[4], 0u + 156u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x001202B0u; return; } if (c.pc != 0x002BFE28u) [[unlikely]] return; }
L_002BFE28:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  goto L_002BFE44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFE3Cu);  if (depth < kMaxDepth) unit_0067(c, 318u, depth + 1u); else { c.pc = 0x002BF330u; return; } if (c.pc != 0x002BFE3Cu) [[unlikely]] return; }
L_002BFE3C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 2;
L_002BFE44:
    set32(c.r[5], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002BFE84; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002BFE68:
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFE20u | kUnwind; return; } goto L_002BFE20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002BFEAC; } }
L_002BFE80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002BFE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFE8Cu);  if (depth < kMaxDepth) unit_0067(c, 366u, depth + 1u); else { c.pc = 0x002BFEC0u; return; } if (c.pc != 0x002BFE8Cu) [[unlikely]] return; }
L_002BFE8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFE98u); set32(c.r[4], c.r[4].w[0] + 20832u);  if (depth < kMaxDepth) unit_0024(c, 120u, depth + 1u); else { c.pc = 0x001B0A90u; return; } if (c.pc != 0x002BFE98u) [[unlikely]] return; }
L_002BFE98:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
L_002BFEAC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BFEC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002BFF1C; } }
L_002BFEE0:
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002BFF1C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  goto L_002BFF10; }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFF0Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BFF0Cu) [[unlikely]] return; }
L_002BFF0C:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_002BFF10:
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_002BFF1C:
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFEE0u | kUnwind; return; } goto L_002BFEE0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 100u), 0u);  goto L_002BFF48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFF40u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x00120390u; return; } if (c.pc != 0x002BFF40u) [[unlikely]] return; }
L_002BFF40:
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    c.budget -= 2;
L_002BFF48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BFF60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002BFFBC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 26616u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_002BFFA0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44410000u);
    set32(c.r[3], c.r[3].w[0] + 8424u);
    c.r[2].d[0] = c.r[2].d[0] | 17732ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_002BFFA0:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002BFFB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFFB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 25u, depth + 1u); else { c.pc = 0x00120360u; return; } if (c.pc != 0x002BFFB8u) [[unlikely]] return; }
L_002BFFB8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002BFFBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BFFD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 12;
    [[clang::musttail]] return unit_0068(c, 1u, depth);
}

}
